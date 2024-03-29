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
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1948, "smart_pointer$1char"))));
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
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1958, "smart_pointer$1char"))));
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
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 1968, "smart_pointer$1short"))));
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
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 1978, "smart_pointer$1int"))));
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
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 1988, "smart_pointer$1long"))));
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
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long int len){
void* __result_obj__;
void* right_value10;
void* right_value13;
struct smart_pointer$1char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
right_value13 = (void*)0;
    __result8__ = __result_obj__ = ((struct smart_pointer$1char*)(right_value13=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value10=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2156, "smart_pointer$1char")))),self,sizeof(char)*len)));
    come_call_finalizer2(smart_pointer$1charp_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1charp_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result8__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, unsigned long int len){
void* __result_obj__;
void* right_value14;
void* right_value17;
struct smart_pointer$1short* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
right_value14 = (void*)0;
right_value17 = (void*)0;
    __result10__ = __result_obj__ = ((struct smart_pointer$1short*)(right_value17=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value14=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2161, "smart_pointer$1short")))),self,sizeof(short short)*len)));
    come_call_finalizer2(smart_pointer$1shortp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1shortp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result10__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long int len){
void* __result_obj__;
void* right_value18;
void* right_value21;
struct smart_pointer$1int* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
right_value18 = (void*)0;
right_value21 = (void*)0;
    __result12__ = __result_obj__ = ((struct smart_pointer$1int*)(right_value21=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2166, "smart_pointer$1int")))),self,sizeof(int)*len)));
    come_call_finalizer2(smart_pointer$1intp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1intp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result12__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long int len){
void* __result_obj__;
void* right_value22;
void* right_value25;
struct smart_pointer$1long* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
right_value22 = (void*)0;
right_value25 = (void*)0;
    __result14__ = __result_obj__ = ((struct smart_pointer$1long*)(right_value25=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value22=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2171, "smart_pointer$1long")))),self,sizeof(long)*len)));
    come_call_finalizer2(smart_pointer$1longp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1longp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result14__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long int len){
void* __result_obj__;
void* right_value26;
void* right_value29;
struct smart_pointer$1float* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
right_value26 = (void*)0;
right_value29 = (void*)0;
    __result16__ = __result_obj__ = ((struct smart_pointer$1float*)(right_value29=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)(right_value26=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang2.h", 2176, "smart_pointer$1float")))),self,sizeof(float)*len)));
    come_call_finalizer2(smart_pointer$1floatp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1floatp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result16__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long int len){
void* __result_obj__;
void* right_value30;
void* right_value33;
struct smart_pointer$1double* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
right_value30 = (void*)0;
right_value33 = (void*)0;
    __result18__ = __result_obj__ = ((struct smart_pointer$1double*)(right_value33=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(right_value30=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang2.h", 2181, "smart_pointer$1double")))),self,sizeof(double)*len)));
    come_call_finalizer2(smart_pointer$1doublep_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1doublep_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result18__;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value34;
char* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
right_value34 = (void*)0;
    __result19__ = __result_obj__ = ((char*)(right_value34=xsprintf(msg,self)));
    right_value34 = come_decrement_ref_count2(right_value34, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result19__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value35;
char* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
right_value35 = (void*)0;
    __result20__ = __result_obj__ = ((char*)(right_value35=xsprintf(msg,self)));
    right_value35 = come_decrement_ref_count2(right_value35, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result20__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__;
void* right_value36;
char* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
right_value36 = (void*)0;
    __result21__ = __result_obj__ = ((char*)(right_value36=xsprintf(msg,self)));
    right_value36 = come_decrement_ref_count2(right_value36, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result21__;
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
void* right_value11;
void* right_value12;
struct buffer* __dec_obj6;
struct smart_pointer$1char* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
right_value11 = (void*)0;
right_value12 = (void*)0;
        __dec_obj6=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value12=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2000, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(char)*size);
        self->p=(char*)self->memory->buf;
        __result7__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1charp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result7__;
        come_call_finalizer2(smart_pointer$1charp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size){
void* __result_obj__;
void* right_value15;
void* right_value16;
struct buffer* __dec_obj7;
struct smart_pointer$1short* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
right_value15 = (void*)0;
right_value16 = (void*)0;
        __dec_obj7=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value16=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value15=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2000, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(short short)*size);
        self->p=(short short*)self->memory->buf;
        __result9__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1shortp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result9__;
        come_call_finalizer2(smart_pointer$1shortp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size){
void* __result_obj__;
void* right_value19;
void* right_value20;
struct buffer* __dec_obj8;
struct smart_pointer$1int* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
right_value19 = (void*)0;
right_value20 = (void*)0;
        __dec_obj8=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value20=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value19=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2000, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(int)*size);
        self->p=(int*)self->memory->buf;
        __result11__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1intp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result11__;
        come_call_finalizer2(smart_pointer$1intp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size){
void* __result_obj__;
void* right_value23;
void* right_value24;
struct buffer* __dec_obj9;
struct smart_pointer$1long* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
right_value23 = (void*)0;
right_value24 = (void*)0;
        __dec_obj9=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2000, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(long)*size);
        self->p=(long*)self->memory->buf;
        __result13__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1longp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result13__;
        come_call_finalizer2(smart_pointer$1longp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size){
void* __result_obj__;
void* right_value27;
void* right_value28;
struct buffer* __dec_obj10;
struct smart_pointer$1float* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
right_value27 = (void*)0;
right_value28 = (void*)0;
        __dec_obj10=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2000, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(float)*size);
        self->p=(float*)self->memory->buf;
        __result15__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1floatp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result15__;
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
void* right_value31;
void* right_value32;
struct buffer* __dec_obj11;
struct smart_pointer$1double* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
right_value31 = (void*)0;
right_value32 = (void*)0;
        __dec_obj11=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2000, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(double)*size);
        self->p=(double*)self->memory->buf;
        __result17__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1doublep_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result17__;
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
void* right_value37;
char* __dec_obj12;
struct sCurrentNode* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
right_value37 = (void*)0;
    self->sline=info->sline;
    __dec_obj12=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value37=__builtin_string(info->sname))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value37 = come_decrement_ref_count2(right_value37, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result22__ = __result_obj__ = self;
    come_call_finalizer2(sCurrentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result22__;
    come_call_finalizer2(sCurrentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
int __result23__;
memset(&__result_obj__, 0, sizeof(void*));
    __result23__ = self->sline;
    return __result23__;
}

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value38;
char* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
right_value38 = (void*)0;
    __result24__ = __result_obj__ = ((char*)(right_value38=__builtin_string(self->sname)));
    right_value38 = come_decrement_ref_count2(right_value38, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result24__;
}

_Bool sCurrentNode_terminated(){
void* __result_obj__;
_Bool __result25__;
memset(&__result_obj__, 0, sizeof(void*));
    __result25__ = (_Bool)0;
    return __result25__;
}

char* sCurrentNode_kind(){
void* __result_obj__;
void* right_value39;
char* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
right_value39 = (void*)0;
    __result26__ = __result_obj__ = ((char*)(right_value39=__builtin_string("sCurrentNode")));
    right_value39 = come_decrement_ref_count2(right_value39, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result26__;
}

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value40;
char* class_name_5;
void* right_value41;
void* right_value42;
struct sClass* current_stack_6;
void* right_value43;
void* right_value44;
void* right_value45;
void* right_value46;
void* right_value47;
struct tuple2$2charphsTypeph* result_kind_15;
void* right_value89;
void* right_value90;
void* right_value91;
void* right_value92;
void* right_value93;
void* right_value94;
struct tuple2$2charphsTypeph* return_value_38;
void* right_value95;
struct sVarTable* vtable_39;
struct map$2charphsVarph* o2_saved_40;
char* it_43;
char* key_46;
struct sVar* value_50;
void* right_value96;
struct sType* type2_51;
void* right_value97;
void* right_value98;
void* right_value99;
struct tuple2$2charphsTypeph* item_52;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
_Bool _if_conditional127;
void* right_value100;
struct sType* type3_53;
void* right_value101;
void* right_value102;
void* right_value103;
struct tuple2$2charphsTypeph* item2_56;
void* right_value104;
void* right_value105;
static int num_current_stack_105=0;
struct map$2charphsVarph* o2_saved_106;
char* it_107;
char* key_108;
struct sVar* value_109;
void* right_value112;
struct sType* type2_110;
void* right_value113;
void* right_value114;
struct tuple2$2charphsTypeph* item_111;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool _if_conditional184;
void* right_value115;
struct CVALUE* come_value_112;
void* right_value116;
char* __dec_obj43;
void* right_value117;
void* right_value118;
struct sType* __dec_obj44;
_Bool __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value40 = (void*)0;
memset(&class_name_5, 0, sizeof(char*));
right_value41 = (void*)0;
right_value42 = (void*)0;
memset(&current_stack_6, 0, sizeof(struct sClass*));
right_value43 = (void*)0;
right_value44 = (void*)0;
right_value45 = (void*)0;
right_value46 = (void*)0;
right_value47 = (void*)0;
memset(&result_kind_15, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value89 = (void*)0;
right_value90 = (void*)0;
right_value91 = (void*)0;
right_value92 = (void*)0;
right_value93 = (void*)0;
right_value94 = (void*)0;
memset(&return_value_38, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value95 = (void*)0;
memset(&vtable_39, 0, sizeof(struct sVarTable*));
memset(&o2_saved_40, 0, sizeof(struct map$2charphsVarph*));
memset(&it_43, 0, sizeof(char*));
memset(&key_46, 0, sizeof(char*));
memset(&value_50, 0, sizeof(struct sVar*));
right_value96 = (void*)0;
memset(&type2_51, 0, sizeof(struct sType*));
right_value97 = (void*)0;
right_value98 = (void*)0;
right_value99 = (void*)0;
memset(&item_52, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value100 = (void*)0;
memset(&type3_53, 0, sizeof(struct sType*));
right_value101 = (void*)0;
right_value102 = (void*)0;
right_value103 = (void*)0;
memset(&item2_56, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value104 = (void*)0;
right_value105 = (void*)0;
memset(&o2_saved_106, 0, sizeof(struct map$2charphsVarph*));
memset(&it_107, 0, sizeof(char*));
memset(&key_108, 0, sizeof(char*));
memset(&value_109, 0, sizeof(struct sVar*));
right_value112 = (void*)0;
memset(&type2_110, 0, sizeof(struct sType*));
right_value113 = (void*)0;
right_value114 = (void*)0;
memset(&item_111, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value115 = (void*)0;
memset(&come_value_112, 0, sizeof(struct CVALUE*));
right_value116 = (void*)0;
right_value117 = (void*)0;
right_value118 = (void*)0;
    info->current_stack_num++;
    class_name_5=(char*)come_increment_ref_count(((char*)(right_value40=xsprintf("__current_stack%d__",info->current_stack_num))));
    right_value40 = come_decrement_ref_count2(right_value40, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    current_stack_6=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value42=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value41=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "20method.c", 40, "sClass")))),class_name_5,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
    come_call_finalizer2(sClass_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_kind_15=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value47=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value46=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 42, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value43=xsprintf("__method_block_result_kind__")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value45=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value44=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 42, "sType")))),"int",(_Bool)0,info))))))));
    right_value43 = come_decrement_ref_count2(right_value43, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    right_value46 = come_decrement_ref_count2(right_value46, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    list$1tuple2$2charphsTypephph_push_back(current_stack_6->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value89=tuple2$2charphsTypephp_clone(result_kind_15)))));
    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return_value_38=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value94=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value93=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 45, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value90=xsprintf("__method_block_return_value__")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value92=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value91=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 45, "sType")))),"void*",(_Bool)0,info))))))));
    right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    list$1tuple2$2charphsTypephph_push_back(current_stack_6->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value95=tuple2$2charphsTypephp_clone(return_value_38)))));
    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    vtable_39=info->lv_table;
    while(vtable_39) {
        for(        o2_saved_40=(struct map$2charphsVarph*)come_increment_ref_count((vtable_39->mVars)),it_43=map$2charphsVarph_begin((o2_saved_40));        !map$2charphsVarph_end((o2_saved_40));        it_43=map$2charphsVarph_next((o2_saved_40))        ){
            key_46=it_43;
            value_50=map$2charphsVarphp_operator_load_element(vtable_39->mVars,key_46);
            type2_51=(struct sType*)come_increment_ref_count(((struct sType*)(right_value96=sType_clone(value_50->mType))));
            come_call_finalizer2(sType_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            type2_51->mPointerNum++;
            item_52=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value99=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value98=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 59, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value97=__builtin_string(value_50->mCValueName)))),(struct sType*)come_increment_ref_count(type2_51)))));
            right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional122=value_50->mCValueName!=((void*)0),            _if_conditional122) {
                if(_if_conditional123=strcmp(value_50->mCValueName,"__list_values")==0,                _if_conditional123) {
                }
                else {
                    if(_if_conditional124=strcmp(value_50->mCValueName,"__map_keys")==0,                    _if_conditional124) {
                    }
                    else {
                        if(_if_conditional125=strcmp(value_50->mCValueName,"__map_element")==0,                        _if_conditional125) {
                        }
                        else {
                            if(_if_conditional126=string_operator_equals(value_50->mType->mClass->mName,"va_list")||string_operator_equals(value_50->mType->mClass->mName,"__builtin_va_list"),                            _if_conditional126) {
                            }
                            else {
                                if(_if_conditional127=list$1sNodeph_length(type2_51->mArrayNum)==1,                                _if_conditional127) {
                                    type3_53=(struct sType*)come_increment_ref_count(((struct sType*)(right_value100=sType_clone(type2_51))));
                                    come_call_finalizer2(sType_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    list$1sNodeph_reset(type3_53->mArrayNum);
                                    type3_53->mPointerNum++;
                                    item2_56=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value103=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value102=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 78, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value101=__builtin_string(value_50->mCValueName)))),(struct sType*)come_increment_ref_count(type3_53)))));
                                    right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    list$1tuple2$2charphsTypephph_push_back(current_stack_6->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value104=tuple2$2charphsTypephp_clone(item2_56)))));
                                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sType_finalize,type3_53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,item2_56, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                else {
                                    list$1tuple2$2charphsTypephph_push_back(current_stack_6->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value105=tuple2$2charphsTypephp_clone(item_52)))));
                                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                }
                            }
                        }
                    }
                }
            }
            come_call_finalizer2(sType_finalize,type2_51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,item_52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(map$2charphsVarphp_finalize,o2_saved_40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        vtable_39=vtable_39->mParent;
    }
    output_struct(current_stack_6,info);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(class_name_5),(struct sClass*)come_increment_ref_count(current_stack_6));
    num_current_stack_105++;
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_5,num_current_stack_105);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",num_current_stack_105,class_name_5);
    vtable_39=info->lv_table;
    while(vtable_39) {
        for(        o2_saved_106=(struct map$2charphsVarph*)come_increment_ref_count((vtable_39->mVars)),it_107=map$2charphsVarph_begin((o2_saved_106));        !map$2charphsVarph_end((o2_saved_106));        it_107=map$2charphsVarph_next((o2_saved_106))        ){
            key_108=it_107;
            value_109=map$2charphsVarphp_operator_load_element(vtable_39->mVars,key_108);
            type2_110=(struct sType*)come_increment_ref_count(((struct sType*)(right_value112=sType_clone(value_109->mType))));
            come_call_finalizer2(sType_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            item_111=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value114=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value113=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 108, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(value_109->mCValueName),(struct sType*)come_increment_ref_count(type2_110)))));
            come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional179=value_109->mCValueName!=((void*)0),            _if_conditional179) {
                if(_if_conditional180=strcmp(value_109->mCValueName,"__list_values")==0,                _if_conditional180) {
                }
                else {
                    if(_if_conditional181=strcmp(value_109->mCValueName,"__map_keys")==0,                    _if_conditional181) {
                    }
                    else {
                        if(_if_conditional182=strcmp(value_109->mCValueName,"__map_element")==0,                        _if_conditional182) {
                        }
                        else {
                            if(_if_conditional183=string_operator_equals(value_109->mType->mClass->mName,"va_list")||string_operator_equals(value_109->mType->mClass->mName,"__builtin_va_list"),                            _if_conditional183) {
                            }
                            else {
                                if(_if_conditional184=string_operator_equals(type2_110->mClass->mName,"lambda"),                                _if_conditional184) {
                                    add_come_code(info,"__current_stack%d__.%s = %s;\n",num_current_stack_105,value_109->mCValueName,value_109->mCValueName);
                                }
                                else {
                                    add_come_code(info,"__current_stack%d__.%s = &%s;\n",num_current_stack_105,value_109->mCValueName,value_109->mCValueName);
                                }
                            }
                        }
                    }
                }
            }
            come_call_finalizer2(sType_finalize,type2_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,item_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(map$2charphsVarphp_finalize,o2_saved_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        vtable_39=vtable_39->mParent;
    }
    come_value_112=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value115=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 137, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj43=come_value_112->c_value;
    come_value_112->c_value=(char*)come_increment_ref_count(((char*)(right_value116=xsprintf("&__current_stack%d__",num_current_stack_105))));
    __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj44=come_value_112->type;
    come_value_112->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value118=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value117=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 140, "sType")))),class_name_5,(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_112->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_112->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_112));
    info->num_current_stack=num_current_stack_105;
    __result87__ = (_Bool)1;
    class_name_5 = come_decrement_ref_count2(class_name_5, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,current_stack_6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(tuple2$2charphsTypephp_finalize,result_kind_15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(tuple2$2charphsTypephp_finalize,return_value_38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result87__;
    class_name_5 = come_decrement_ref_count2(class_name_5, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,current_stack_6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(tuple2$2charphsTypephp_finalize,result_kind_15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(tuple2$2charphsTypephp_finalize,return_value_38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
struct list_item$1tuple2$2charphsTypephph* it_7;
_Bool _while_condtional1;
struct list_item$1tuple2$2charphsTypephph* prev_it_8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_7, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_8, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                it_7=self->head;
                while(_while_condtional1=it_7!=((void*)0),                _while_condtional1) {
                    prev_it_8=it_7;
                    it_7=it_7->next;
                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sTypeph* it_9;
_Bool _while_condtional2;
struct list_item$1sTypeph* prev_it_10;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_9, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_10, 0, sizeof(struct list_item$1sTypeph*));
                                                it_9=self->head;
                                                while(_while_condtional2=it_9!=((void*)0),                                                _while_condtional2) {
                                                    prev_it_10=it_9;
                                                    it_9=it_9->next;
                                                    come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_11;
_Bool _while_condtional3;
struct list_item$1sNodeph* prev_it_12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_11, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_12, 0, sizeof(struct list_item$1sNodeph*));
                                                it_11=self->head;
                                                while(_while_condtional3=it_11!=((void*)0),                                                _while_condtional3) {
                                                    prev_it_12=it_11;
                                                    it_11=it_11->next;
                                                    come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
struct list_item$1charph* it_13;
_Bool _while_condtional4;
struct list_item$1charph* prev_it_14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_13, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_14, 0, sizeof(struct list_item$1charph*));
                                                it_13=self->head;
                                                while(_while_condtional4=it_13!=((void*)0),                                                _while_condtional4) {
                                                    prev_it_14=it_13;
                                                    it_13=it_13->next;
                                                    come_call_finalizer2(list_item$1charphp_finalize,prev_it_14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
struct tuple2$2charphsTypeph* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
        __dec_obj13=self->v1;
        self->v1=(char*)come_increment_ref_count(v1);
        __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj14=self->v2;
        self->v2=(struct sType*)come_increment_ref_count(v2);
        come_call_finalizer2(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        __result27__ = __result_obj__ = self;
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result27__;
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional31;
void* right_value48;
struct list_item$1tuple2$2charphsTypephph* litem_16;
struct tuple2$2charphsTypeph* __dec_obj15;
_Bool _if_conditional34;
void* right_value49;
struct list_item$1tuple2$2charphsTypephph* litem_17;
struct tuple2$2charphsTypeph* __dec_obj16;
void* right_value50;
struct list_item$1tuple2$2charphsTypephph* litem_18;
struct tuple2$2charphsTypeph* __dec_obj17;
struct list$1tuple2$2charphsTypephph* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
right_value48 = (void*)0;
memset(&litem_16, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value49 = (void*)0;
memset(&litem_17, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value50 = (void*)0;
memset(&litem_18, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
        if(_if_conditional31=self->len==0,        _if_conditional31) {
            litem_16=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value48=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 226, "list_item$1tuple2$2charphsTypephph"))));
            come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            litem_16->prev=((void*)0);
            litem_16->next=((void*)0);
            __dec_obj15=litem_16->item;
            litem_16->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
            come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            self->tail=litem_16;
            self->head=litem_16;
        }
        else {
            if(_if_conditional34=self->len==1,            _if_conditional34) {
                litem_17=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value49=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 236, "list_item$1tuple2$2charphsTypephph"))));
                come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_17->prev=self->head;
                litem_17->next=((void*)0);
                __dec_obj16=litem_17->item;
                litem_17->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_17;
                self->head->next=litem_17;
            }
            else {
                litem_18=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value50=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 246, "list_item$1tuple2$2charphsTypephph"))));
                come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_18->prev=self->tail;
                litem_18->next=((void*)0);
                __dec_obj17=litem_18->item;
                litem_18->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail->next=litem_18;
                self->tail=litem_18;
            }
        }
        self->len++;
        __result28__ = __result_obj__ = self;
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result28__;
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
struct tuple2$2charphsTypeph* __result29__;
void* right_value51;
struct tuple2$2charphsTypeph* result_19;
_Bool _if_conditional36;
void* right_value52;
char* __dec_obj18;
_Bool _if_conditional37;
void* right_value88;
struct sType* __dec_obj42;
struct tuple2$2charphsTypeph* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
right_value51 = (void*)0;
memset(&result_19, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value52 = (void*)0;
right_value88 = (void*)0;
        if(_if_conditional35=self==(void*)0,        _if_conditional35) {
            __result29__ = __result_obj__ = (void*)0;
            return __result29__;
        }
        result_19=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value51=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"))));
        come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional36=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional36) {
            __dec_obj18=result_19->v1;
            result_19->v1=(char*)come_increment_ref_count(((char*)(right_value52=string_clone(self->v1))));
            __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value52 = come_decrement_ref_count2(right_value52, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional37=self!=((void*)0)&&self->v2!=((void*)0),        _if_conditional37) {
            __dec_obj42=result_19->v2;
            result_19->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value88=sType_clone(self->v2))));
            come_call_finalizer2(sType_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        __result48__ = __result_obj__ = result_19;
        come_call_finalizer2(tuple2$2charphsTypeph_finalize,result_19, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result48__;
        come_call_finalizer2(tuple2$2charphsTypeph_finalize,result_19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional38;
struct sType* __result30__;
void* right_value53;
struct sType* result_20;
_Bool _if_conditional39;
_Bool _if_conditional40;
void* right_value60;
struct list$1sTypeph* __dec_obj22;
_Bool _if_conditional44;
void* right_value63;
struct tuple1$1sTypeph* __dec_obj24;
_Bool _if_conditional48;
void* right_value64;
struct tuple1$1sTypeph* __dec_obj25;
_Bool _if_conditional49;
void* right_value65;
char* __dec_obj26;
_Bool _if_conditional50;
void* right_value66;
struct list$1sTypeph* __dec_obj27;
_Bool _if_conditional51;
void* right_value74;
struct list$1sNodeph* __dec_obj31;
_Bool _if_conditional64;
_Bool _if_conditional65;
void* right_value75;
struct list$1sTypeph* __dec_obj32;
_Bool _if_conditional66;
void* right_value82;
struct list$1charph* __dec_obj36;
_Bool _if_conditional70;
void* right_value83;
struct tuple1$1sTypeph* __dec_obj37;
_Bool _if_conditional71;
_Bool _if_conditional72;
void* right_value84;
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
void* right_value85;
struct sNode* __dec_obj39;
_Bool _if_conditional97;
_Bool _if_conditional98;
_Bool _if_conditional99;
void* right_value86;
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
void* right_value87;
char* __dec_obj41;
_Bool _if_conditional109;
struct sType* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
right_value53 = (void*)0;
memset(&result_20, 0, sizeof(struct sType*));
right_value60 = (void*)0;
right_value63 = (void*)0;
right_value64 = (void*)0;
right_value65 = (void*)0;
right_value66 = (void*)0;
right_value74 = (void*)0;
right_value75 = (void*)0;
right_value82 = (void*)0;
right_value83 = (void*)0;
right_value84 = (void*)0;
right_value85 = (void*)0;
right_value86 = (void*)0;
right_value87 = (void*)0;
                if(_if_conditional38=self==(void*)0,                _if_conditional38) {
                    __result30__ = __result_obj__ = (void*)0;
                    return __result30__;
                }
                result_20=(struct sType*)come_increment_ref_count(((struct sType*)(right_value53=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
                come_call_finalizer2(sType_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional39=self!=((void*)0),                _if_conditional39) {
                    result_20->mClass=self->mClass;
                }
                if(_if_conditional40=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                _if_conditional40) {
                    __dec_obj22=result_20->mMultipleTypes;
                    result_20->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value60=list$1sTypephp_clone(self->mMultipleTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional44=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional44) {
                    __dec_obj24=result_20->mNoSolvedGenericsType;
                    result_20->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value63=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional48=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional48) {
                    __dec_obj25=result_20->mOriginalLoadVarType;
                    result_20->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value64=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional49=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional49) {
                    __dec_obj26=result_20->mGenericsName;
                    result_20->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value65=string_clone(self->mGenericsName))));
                    __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value65 = come_decrement_ref_count2(right_value65, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional50=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional50) {
                    __dec_obj27=result_20->mGenericsTypes;
                    result_20->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value66=list$1sTypephp_clone(self->mGenericsTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional51=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional51) {
                    __dec_obj31=result_20->mArrayNum;
                    result_20->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value74=list$1sNodephp_clone(self->mArrayNum))));
                    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sNodephp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional64=self!=((void*)0),                _if_conditional64) {
                    result_20->mOmitArrayNum=self->mOmitArrayNum;
                }
                if(_if_conditional65=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional65) {
                    __dec_obj32=result_20->mParamTypes;
                    result_20->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value75=list$1sTypephp_clone(self->mParamTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional66=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional66) {
                    __dec_obj36=result_20->mParamNames;
                    result_20->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value82=list$1charphp_clone(self->mParamNames))));
                    come_call_finalizer2(list$1charph_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional70=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional70) {
                    __dec_obj37=result_20->mResultType;
                    result_20->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value83=tuple1$1sTypephp_clone(self->mResultType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional71=self!=((void*)0),                _if_conditional71) {
                    result_20->mVarArgs=self->mVarArgs;
                }
                if(_if_conditional72=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional72) {
                    __dec_obj38=result_20->mAlignas;
                    result_20->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value84=sNode_clone(self->mAlignas))));
                    if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value84) { right_value84 = come_decrement_ref_count2(right_value84, ((struct sNode*)right_value84)->finalize, ((struct sNode*)right_value84)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional73=self!=((void*)0),                _if_conditional73) {
                    result_20->mUnsigned=self->mUnsigned;
                }
                if(_if_conditional74=self!=((void*)0),                _if_conditional74) {
                    result_20->mShort=self->mShort;
                }
                if(_if_conditional75=self!=((void*)0),                _if_conditional75) {
                    result_20->mLong=self->mLong;
                }
                if(_if_conditional76=self!=((void*)0),                _if_conditional76) {
                    result_20->mLongLong=self->mLongLong;
                }
                if(_if_conditional77=self!=((void*)0),                _if_conditional77) {
                    result_20->mConstant=self->mConstant;
                }
                if(_if_conditional78=self!=((void*)0),                _if_conditional78) {
                    result_20->mRegister=self->mRegister;
                }
                if(_if_conditional79=self!=((void*)0),                _if_conditional79) {
                    result_20->mVolatile=self->mVolatile;
                }
                if(_if_conditional80=self!=((void*)0),                _if_conditional80) {
                    result_20->mStatic=self->mStatic;
                }
                if(_if_conditional81=self!=((void*)0),                _if_conditional81) {
                    result_20->mExtern=self->mExtern;
                }
                if(_if_conditional82=self!=((void*)0),                _if_conditional82) {
                    result_20->mRestrict=self->mRestrict;
                }
                if(_if_conditional83=self!=((void*)0),                _if_conditional83) {
                    result_20->mImmutable=self->mImmutable;
                }
                if(_if_conditional84=self!=((void*)0),                _if_conditional84) {
                    result_20->mHeap=self->mHeap;
                }
                if(_if_conditional85=self!=((void*)0),                _if_conditional85) {
                    result_20->mDummyHeap=self->mDummyHeap;
                }
                if(_if_conditional86=self!=((void*)0),                _if_conditional86) {
                    result_20->mDelegate=self->mDelegate;
                }
                if(_if_conditional87=self!=((void*)0),                _if_conditional87) {
                    result_20->mShare=self->mShare;
                }
                if(_if_conditional88=self!=((void*)0),                _if_conditional88) {
                    result_20->mClone=self->mClone;
                }
                if(_if_conditional89=self!=((void*)0),                _if_conditional89) {
                    result_20->mNoHeap=self->mNoHeap;
                }
                if(_if_conditional90=self!=((void*)0),                _if_conditional90) {
                    result_20->mNoCallingDestructor=self->mNoCallingDestructor;
                }
                if(_if_conditional91=self!=((void*)0),                _if_conditional91) {
                    result_20->mRefference=self->mRefference;
                }
                if(_if_conditional92=self!=((void*)0),                _if_conditional92) {
                    result_20->mException=self->mException;
                }
                if(_if_conditional93=self!=((void*)0),                _if_conditional93) {
                    result_20->mPointerNum=self->mPointerNum;
                }
                if(_if_conditional94=self!=((void*)0),                _if_conditional94) {
                    result_20->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                }
                if(_if_conditional95=self!=((void*)0),                _if_conditional95) {
                    result_20->mNoArrayPointerNum=self->mNoArrayPointerNum;
                }
                if(_if_conditional96=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional96) {
                    __dec_obj39=result_20->mSizeNum;
                    result_20->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value85=sNode_clone(self->mSizeNum))));
                    if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count2(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value85) { right_value85 = come_decrement_ref_count2(right_value85, ((struct sNode*)right_value85)->finalize, ((struct sNode*)right_value85)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional97=self!=((void*)0),                _if_conditional97) {
                    result_20->mDynamicArrayNum=self->mDynamicArrayNum;
                }
                if(_if_conditional98=self!=((void*)0),                _if_conditional98) {
                    result_20->mTypeOfExpression=self->mTypeOfExpression;
                }
                if(_if_conditional99=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional99) {
                    __dec_obj40=result_20->mOriginalTypeName;
                    result_20->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value86=string_clone(self->mOriginalTypeName))));
                    __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional100=self!=((void*)0),                _if_conditional100) {
                    result_20->mOriginalPointerNum=self->mOriginalPointerNum;
                }
                if(_if_conditional101=self!=((void*)0),                _if_conditional101) {
                    result_20->mFunctionParam=self->mFunctionParam;
                }
                if(_if_conditional102=self!=((void*)0),                _if_conditional102) {
                    result_20->mAllocaValue=self->mAllocaValue;
                }
                if(_if_conditional103=self!=((void*)0),                _if_conditional103) {
                    result_20->mGenericsStruct=self->mGenericsStruct;
                }
                if(_if_conditional104=self!=((void*)0),                _if_conditional104) {
                    result_20->mSolvedGenericsName=self->mSolvedGenericsName;
                }
                if(_if_conditional105=self!=((void*)0),                _if_conditional105) {
                    result_20->mComeMemCore=self->mComeMemCore;
                }
                if(_if_conditional106=self!=((void*)0),                _if_conditional106) {
                    result_20->mInline=self->mInline;
                }
                if(_if_conditional107=self!=((void*)0),                _if_conditional107) {
                    result_20->mNullValue=self->mNullValue;
                }
                if(_if_conditional108=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional108) {
                    __dec_obj41=result_20->mAsmName;
                    result_20->mAsmName=(char*)come_increment_ref_count(((char*)(right_value87=string_clone(self->mAsmName))));
                    __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional109=self!=((void*)0),                _if_conditional109) {
                    result_20->mArrayPointerType=self->mArrayPointerType;
                }
                __result47__ = __result_obj__ = result_20;
                come_call_finalizer2(sType_finalize,result_20, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result47__;
                come_call_finalizer2(sType_finalize,result_20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional41;
struct list$1sTypeph* __result31__;
void* right_value54;
void* right_value55;
struct list$1sTypeph* result_21;
struct list_item$1sTypeph* it_22;
_Bool _while_condtional5;
void* right_value59;
struct list$1sTypeph* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
right_value54 = (void*)0;
right_value55 = (void*)0;
memset(&result_21, 0, sizeof(struct list$1sTypeph*));
memset(&it_22, 0, sizeof(struct list_item$1sTypeph*));
right_value59 = (void*)0;
                        if(_if_conditional41=self==((void*)0),                        _if_conditional41) {
                            __result31__ = __result_obj__ = ((void*)0);
                            return __result31__;
                        }
                        result_21=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value55=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value54=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 142, "list$1sTypeph"))))))));
                        come_call_finalizer2(list$1sTypephp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sTypephp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        it_22=self->head;
                        while(_while_condtional5=it_22!=((void*)0),                        _while_condtional5) {
                            list$1sTypeph_add(result_21,(struct sType*)come_increment_ref_count(((struct sType*)(right_value59=sType_clone(it_22->item)))));
                            come_call_finalizer2(sType_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            it_22=it_22->next;
                        }
                        __result34__ = __result_obj__ = result_21;
                        come_call_finalizer2(list$1sTypephp_finalize,result_21, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result34__;
                        come_call_finalizer2(list$1sTypephp_finalize,result_21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            __result32__ = __result_obj__ = self;
                            come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result32__;
                            come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional42;
void* right_value56;
struct list_item$1sTypeph* litem_23;
struct sType* __dec_obj19;
_Bool _if_conditional43;
void* right_value57;
struct list_item$1sTypeph* litem_24;
struct sType* __dec_obj20;
void* right_value58;
struct list_item$1sTypeph* litem_25;
struct sType* __dec_obj21;
struct list$1sTypeph* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
right_value56 = (void*)0;
memset(&litem_23, 0, sizeof(struct list_item$1sTypeph*));
right_value57 = (void*)0;
memset(&litem_24, 0, sizeof(struct list_item$1sTypeph*));
right_value58 = (void*)0;
memset(&litem_25, 0, sizeof(struct list_item$1sTypeph*));
                                if(_if_conditional42=self->len==0,                                _if_conditional42) {
                                    litem_23=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value56=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 156, "list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_23->prev=((void*)0);
                                    litem_23->next=((void*)0);
                                    __dec_obj19=litem_23->item;
                                    litem_23->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    self->tail=litem_23;
                                    self->head=litem_23;
                                }
                                else {
                                    if(_if_conditional43=self->len==1,                                    _if_conditional43) {
                                        litem_24=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value57=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 166, "list_item$1sTypeph"))));
                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_24->prev=self->head;
                                        litem_24->next=((void*)0);
                                        __dec_obj20=litem_24->item;
                                        litem_24->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer2(sType_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        self->tail=litem_24;
                                        self->head->next=litem_24;
                                    }
                                    else {
                                        litem_25=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value58=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 176, "list_item$1sTypeph"))));
                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_25->prev=self->tail;
                                        litem_25->next=((void*)0);
                                        __dec_obj21=litem_25->item;
                                        litem_25->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer2(sType_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        self->tail->next=litem_25;
                                        self->tail=litem_25;
                                    }
                                }
                                self->len++;
                                __result33__ = __result_obj__ = self;
                                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result33__;
                                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional45;
struct tuple1$1sTypeph* __result35__;
void* right_value61;
struct tuple1$1sTypeph* result_26;
_Bool _if_conditional47;
void* right_value62;
struct sType* __dec_obj23;
struct tuple1$1sTypeph* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
right_value61 = (void*)0;
memset(&result_26, 0, sizeof(struct tuple1$1sTypeph*));
right_value62 = (void*)0;
                        if(_if_conditional45=self==(void*)0,                        _if_conditional45) {
                            __result35__ = __result_obj__ = (void*)0;
                            return __result35__;
                        }
                        result_26=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value61=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                        come_call_finalizer2(tuple1$1sTypeph_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional47=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional47) {
                            __dec_obj23=result_26->v1;
                            result_26->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value62=sType_clone(self->v1))));
                            come_call_finalizer2(sType_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        __result36__ = __result_obj__ = result_26;
                        come_call_finalizer2(tuple1$1sTypeph_finalize,result_26, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result36__;
                        come_call_finalizer2(tuple1$1sTypeph_finalize,result_26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
struct list$1sNodeph* __result37__;
void* right_value67;
void* right_value68;
struct list$1sNodeph* result_27;
struct list_item$1sNodeph* it_28;
_Bool _while_condtional6;
void* right_value73;
struct list$1sNodeph* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
right_value67 = (void*)0;
right_value68 = (void*)0;
memset(&result_27, 0, sizeof(struct list$1sNodeph*));
memset(&it_28, 0, sizeof(struct list_item$1sNodeph*));
right_value73 = (void*)0;
                        if(_if_conditional52=self==((void*)0),                        _if_conditional52) {
                            __result37__ = __result_obj__ = ((void*)0);
                            return __result37__;
                        }
                        result_27=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value68=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value67=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 142, "list$1sNodeph"))))))));
                        come_call_finalizer2(list$1sNodephp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sNodephp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        it_28=self->head;
                        while(_while_condtional6=it_28!=((void*)0),                        _while_condtional6) {
                            list$1sNodeph_add(result_27,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value73=sNode_clone(it_28->item)))));
                            if(right_value73) { right_value73 = come_decrement_ref_count2(right_value73, ((struct sNode*)right_value73)->finalize, ((struct sNode*)right_value73)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            it_28=it_28->next;
                        }
                        __result42__ = __result_obj__ = result_27;
                        come_call_finalizer2(list$1sNodephp_finalize,result_27, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result42__;
                        come_call_finalizer2(list$1sNodephp_finalize,result_27, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
_Bool _if_conditional53;
void* right_value69;
struct list_item$1sNodeph* litem_29;
struct sNode* __dec_obj28;
_Bool _if_conditional54;
void* right_value70;
struct list_item$1sNodeph* litem_30;
struct sNode* __dec_obj29;
void* right_value71;
struct list_item$1sNodeph* litem_31;
struct sNode* __dec_obj30;
struct list$1sNodeph* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
right_value69 = (void*)0;
memset(&litem_29, 0, sizeof(struct list_item$1sNodeph*));
right_value70 = (void*)0;
memset(&litem_30, 0, sizeof(struct list_item$1sNodeph*));
right_value71 = (void*)0;
memset(&litem_31, 0, sizeof(struct list_item$1sNodeph*));
                                if(_if_conditional53=self->len==0,                                _if_conditional53) {
                                    litem_29=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value69=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 156, "list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_29->prev=((void*)0);
                                    litem_29->next=((void*)0);
                                    __dec_obj28=litem_29->item;
                                    litem_29->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count2(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail=litem_29;
                                    self->head=litem_29;
                                }
                                else {
                                    if(_if_conditional54=self->len==1,                                    _if_conditional54) {
                                        litem_30=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value70=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 166, "list_item$1sNodeph"))));
                                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_30->prev=self->head;
                                        litem_30->next=((void*)0);
                                        __dec_obj29=litem_30->item;
                                        litem_30->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count2(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0,0,0, (void*)0); }
                                        self->tail=litem_30;
                                        self->head->next=litem_30;
                                    }
                                    else {
                                        litem_31=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value71=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 176, "list_item$1sNodeph"))));
                                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_31->prev=self->tail;
                                        litem_31->next=((void*)0);
                                        __dec_obj30=litem_31->item;
                                        litem_31->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count2(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0,0,0, (void*)0); }
                                        self->tail->next=litem_31;
                                        self->tail=litem_31;
                                    }
                                }
                                self->len++;
                                __result39__ = __result_obj__ = self;
                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result39__;
                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional55;
struct sNode* __result40__;
void* right_value72;
struct sNode* result_32;
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional63;
struct sNode* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
right_value72 = (void*)0;
memset(&result_32, 0, sizeof(struct sNode*));
                                if(_if_conditional55=self==(void*)0,                                _if_conditional55) {
                                    __result40__ = __result_obj__ = (void*)0;
                                    return __result40__;
                                }
                                result_32=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value72=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                                if(right_value72) { right_value72 = come_decrement_ref_count2(right_value72, ((struct sNode*)right_value72)->finalize, ((struct sNode*)right_value72)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                if(_if_conditional56=self!=((void*)0)&&self->clone!=((void*)0),                                _if_conditional56) {
                                    result_32->_protocol_obj=self->clone(self->_protocol_obj);
                                }
                                if(_if_conditional57=self!=((void*)0),                                _if_conditional57) {
                                    result_32->finalize=self->finalize;
                                }
                                if(_if_conditional58=self!=((void*)0),                                _if_conditional58) {
                                    result_32->clone=self->clone;
                                }
                                if(_if_conditional59=self!=((void*)0),                                _if_conditional59) {
                                    result_32->compile=self->compile;
                                }
                                if(_if_conditional60=self!=((void*)0),                                _if_conditional60) {
                                    result_32->sline=self->sline;
                                }
                                if(_if_conditional61=self!=((void*)0),                                _if_conditional61) {
                                    result_32->sname=self->sname;
                                }
                                if(_if_conditional62=self!=((void*)0),                                _if_conditional62) {
                                    result_32->terminated=self->terminated;
                                }
                                if(_if_conditional63=self!=((void*)0),                                _if_conditional63) {
                                    result_32->kind=self->kind;
                                }
                                __result41__ = __result_obj__ = result_32;
                                if(result_32) { result_32 = come_decrement_ref_count2(result_32, ((struct sNode*)result_32)->finalize, ((struct sNode*)result_32)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result41__;
                                if(result_32) { result_32 = come_decrement_ref_count2(result_32, ((struct sNode*)result_32)->finalize, ((struct sNode*)result_32)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional67;
struct list$1charph* __result43__;
void* right_value76;
void* right_value77;
struct list$1charph* result_33;
struct list_item$1charph* it_34;
_Bool _while_condtional7;
void* right_value81;
struct list$1charph* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
right_value76 = (void*)0;
right_value77 = (void*)0;
memset(&result_33, 0, sizeof(struct list$1charph*));
memset(&it_34, 0, sizeof(struct list_item$1charph*));
right_value81 = (void*)0;
                        if(_if_conditional67=self==((void*)0),                        _if_conditional67) {
                            __result43__ = __result_obj__ = ((void*)0);
                            return __result43__;
                        }
                        result_33=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value77=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value76=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 142, "list$1charph"))))))));
                        come_call_finalizer2(list$1charphp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1charphp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        it_34=self->head;
                        while(_while_condtional7=it_34!=((void*)0),                        _while_condtional7) {
                            list$1charph_add(result_33,(char*)come_increment_ref_count(((char*)(right_value81=string_clone(it_34->item)))));
                            right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            it_34=it_34->next;
                        }
                        __result46__ = __result_obj__ = result_33;
                        come_call_finalizer2(list$1charphp_finalize,result_33, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result46__;
                        come_call_finalizer2(list$1charphp_finalize,result_33, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            __result44__ = __result_obj__ = self;
                            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result44__;
                            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional68;
void* right_value78;
struct list_item$1charph* litem_35;
char* __dec_obj33;
_Bool _if_conditional69;
void* right_value79;
struct list_item$1charph* litem_36;
char* __dec_obj34;
void* right_value80;
struct list_item$1charph* litem_37;
char* __dec_obj35;
struct list$1charph* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
right_value78 = (void*)0;
memset(&litem_35, 0, sizeof(struct list_item$1charph*));
right_value79 = (void*)0;
memset(&litem_36, 0, sizeof(struct list_item$1charph*));
right_value80 = (void*)0;
memset(&litem_37, 0, sizeof(struct list_item$1charph*));
                                if(_if_conditional68=self->len==0,                                _if_conditional68) {
                                    litem_35=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value78=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 156, "list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_35->prev=((void*)0);
                                    litem_35->next=((void*)0);
                                    __dec_obj33=litem_35->item;
                                    litem_35->item=(char*)come_increment_ref_count(item);
                                    __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail=litem_35;
                                    self->head=litem_35;
                                }
                                else {
                                    if(_if_conditional69=self->len==1,                                    _if_conditional69) {
                                        litem_36=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value79=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 166, "list_item$1charph"))));
                                        come_call_finalizer2(list_item$1charphp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_36->prev=self->head;
                                        litem_36->next=((void*)0);
                                        __dec_obj34=litem_36->item;
                                        litem_36->item=(char*)come_increment_ref_count(item);
                                        __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        self->tail=litem_36;
                                        self->head->next=litem_36;
                                    }
                                    else {
                                        litem_37=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value80=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 176, "list_item$1charph"))));
                                        come_call_finalizer2(list_item$1charphp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_37->prev=self->tail;
                                        litem_37->next=((void*)0);
                                        __dec_obj35=litem_37->item;
                                        litem_37->item=(char*)come_increment_ref_count(item);
                                        __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        self->tail->next=litem_37;
                                        self->tail=litem_37;
                                    }
                                }
                                self->len++;
                                __result45__ = __result_obj__ = self;
                                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                return __result45__;
                                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional110;
char* result_41;
char* __result49__;
_Bool _if_conditional111;
char* __result50__;
char* result_42;
char* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_41, 0, sizeof(char*));
memset(&result_42, 0, sizeof(char*));
            if(_if_conditional110=self==((void*)0),            _if_conditional110) {
                memset(&result_41,0,sizeof(char*));
                __result49__ = __result_obj__ = result_41;
                return __result49__;
            }
            self->key_list->it=self->key_list->head;
            if(self->key_list->it) {
                __result50__ = __result_obj__ = self->key_list->it->item;
                return __result50__;
            }
            memset(&result_42,0,sizeof(char*));
            __result51__ = __result_obj__ = result_42;
            return __result51__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result52__;
memset(&__result_obj__, 0, sizeof(void*));
            __result52__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
            return __result52__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional112;
char* result_44;
char* __result53__;
_Bool _if_conditional113;
char* __result54__;
char* result_45;
char* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_44, 0, sizeof(char*));
memset(&result_45, 0, sizeof(char*));
            if(_if_conditional112=self==((void*)0)||self->key_list->it==((void*)0),            _if_conditional112) {
                memset(&result_44,0,sizeof(char*));
                __result53__ = __result_obj__ = result_44;
                return __result53__;
            }
            self->key_list->it=self->key_list->it->next;
            if(self->key_list->it) {
                __result54__ = __result_obj__ = self->key_list->it->item;
                return __result54__;
            }
            memset(&result_45,0,sizeof(char*));
            __result55__ = __result_obj__ = result_45;
            return __result55__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
struct sVar* default_value_47;
unsigned int hash_48;
unsigned int it_49;
_Bool _while_condtional8;
_Bool _if_conditional114;
_Bool _if_conditional115;
struct sVar* __result56__;
_Bool _if_conditional120;
_Bool _if_conditional121;
struct sVar* __result57__;
struct sVar* __result58__;
struct sVar* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_47, 0, sizeof(struct sVar*));
memset(&hash_48, 0, sizeof(unsigned int));
memset(&it_49, 0, sizeof(unsigned int));
                memset(&default_value_47,0,sizeof(struct sVar*));
                hash_48=string_get_hash_key(((char*)key))%self->size;
                it_49=hash_48;
                while(_while_condtional8=(_Bool)1,                _while_condtional8) {
                    if(_if_conditional114=self->item_existance[it_49],                    _if_conditional114) {
                        if(_if_conditional115=string_equals(self->keys[it_49],key),                        _if_conditional115) {
                            __result56__ = __result_obj__ = self->items[it_49];
                            come_call_finalizer2(sVar_finalize,default_value_47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result56__;
                        }
                        it_49++;
                        if(_if_conditional120=it_49>=self->size,                        _if_conditional120) {
                            it_49=0;
                        }
                        else {
                            if(_if_conditional121=it_49==hash_48,                            _if_conditional121) {
                                __result57__ = __result_obj__ = default_value_47;
                                come_call_finalizer2(sVar_finalize,default_value_47, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result57__;
                            }
                        }
                    }
                    else {
                        __result58__ = __result_obj__ = default_value_47;
                        come_call_finalizer2(sVar_finalize,default_value_47, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result58__;
                    }
                }
                __result59__ = __result_obj__ = default_value_47;
                come_call_finalizer2(sVar_finalize,default_value_47, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result59__;
                come_call_finalizer2(sVar_finalize,default_value_47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
int __result60__;
memset(&__result_obj__, 0, sizeof(void*));
                                    __result60__ = self->len;
                                    return __result60__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_54;
_Bool _while_condtional9;
struct list_item$1sNodeph* prev_it_55;
struct list$1sNodeph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_54, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_55, 0, sizeof(struct list_item$1sNodeph*));
                                        it_54=self->head;
                                        while(_while_condtional9=it_54!=((void*)0),                                        _while_condtional9) {
                                            prev_it_55=it_54;
                                            it_54=it_54->next;
                                            come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        self->head=((void*)0);
                                        self->tail=((void*)0);
                                        self->len=0;
                                        __result61__ = __result_obj__ = self;
                                        return __result61__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_57;
_Bool _if_conditional128;
_Bool _if_conditional129;
int i_58;
_Bool _if_conditional130;
_Bool _if_conditional131;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_57, 0, sizeof(int));
memset(&i_58, 0, sizeof(int));
            for(            i_57=0;            i_57<self->size;            i_57++            ){
                if(_if_conditional128=self->item_existance[i_57],                _if_conditional128) {
                    if(_if_conditional129=1,                    _if_conditional129) {
                        come_call_finalizer2(sVar_finalize,self->items[i_57], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->items);
            for(            i_58=0;            i_58<self->size;            i_58++            ){
                if(_if_conditional130=self->item_existance[i_58],                _if_conditional130) {
                    if(_if_conditional131=1,                    _if_conditional131) {
                        self->keys[i_58] = come_decrement_ref_count2(self->keys[i_58], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->keys);
            come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_59;
_Bool _while_condtional10;
struct list_item$1charp* prev_it_60;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_59, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_60, 0, sizeof(struct list_item$1charp*));
                it_59=self->head;
                while(_while_condtional10=it_59!=((void*)0),                _while_condtional10) {
                    prev_it_60=it_59;
                    it_59=it_59->next;
                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional132;
unsigned int hash_78;
unsigned int it_79;
_Bool _while_condtional13;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional166;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool same_key_exist_96;
char* it2_99;
_Bool _if_conditional175;
_Bool _if_conditional176;
struct map$2charphsClassph* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_78, 0, sizeof(unsigned int));
memset(&it_79, 0, sizeof(unsigned int));
memset(&same_key_exist_96, 0, sizeof(_Bool));
memset(&it2_99, 0, sizeof(char*));
        if(_if_conditional132=self->len*10>=self->size,        _if_conditional132) {
            map$2charphsClassph_rehash(self);
        }
        hash_78=string_get_hash_key(key)%self->size;
        it_79=hash_78;
        while(_while_condtional13=(_Bool)1,        _while_condtional13) {
            if(_if_conditional144=self->item_existance[it_79],            _if_conditional144) {
                if(_if_conditional145=string_equals(self->keys[it_79],key),                _if_conditional145) {
                    if(_if_conditional146=1,                    _if_conditional146) {
                        list$1charp_remove(self->key_list,self->keys[it_79]);
                        self->keys[it_79] = come_decrement_ref_count2(self->keys[it_79], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        self->keys[it_79]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charp_remove(self->key_list,self->keys[it_79]);
                        self->keys[it_79]=key;
                    }
                    if(_if_conditional166=1,                    _if_conditional166) {
                        come_call_finalizer2(sClass_finalize,self->items[it_79], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->items[it_79]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_79]=item;
                    }
                    break;
                }
                it_79++;
                if(_if_conditional167=it_79>=self->size,                _if_conditional167) {
                    it_79=0;
                }
                else {
                    if(_if_conditional168=it_79==hash_78,                    _if_conditional168) {
                        printf("unexpected error in map.insert\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                self->item_existance[it_79]=(_Bool)1;
                if(_if_conditional169=1,                _if_conditional169) {
                    self->keys[it_79]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_79]=key;
                }
                if(_if_conditional170=1,                _if_conditional170) {
                    self->items[it_79]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_79]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_96=(_Bool)0;
        for(        it2_99=list$1charp_begin(self->key_list);        !list$1charp_end(self->key_list);        it2_99=list$1charp_next(self->key_list)        ){
            if(_if_conditional175=string_equals(it2_99,key),            _if_conditional175) {
                puts("SAME KEY");
                same_key_exist_96=(_Bool)1;
            }
        }
        if(_if_conditional176=!same_key_exist_96,        _if_conditional176) {
            list$1charp_push_back(self->key_list,key);
        }
        __result85__ = __result_obj__ = self;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result85__;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_61;
void* right_value106;
char** keys_62;
void* right_value107;
struct sClass** items_63;
void* right_value108;
_Bool* item_existance_64;
int len_65;
char* it_68;
struct sClass* default_value_71;
struct sClass* it2_74;
unsigned int hash_75;
int n_76;
_Bool _while_condtional12;
_Bool _if_conditional141;
_Bool _if_conditional142;
_Bool _if_conditional143;
struct sClass* default_value_77;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_61, 0, sizeof(int));
right_value106 = (void*)0;
memset(&keys_62, 0, sizeof(char**));
right_value107 = (void*)0;
memset(&items_63, 0, sizeof(struct sClass**));
right_value108 = (void*)0;
memset(&item_existance_64, 0, sizeof(_Bool*));
memset(&len_65, 0, sizeof(int));
memset(&it_68, 0, sizeof(char*));
memset(&default_value_71, 0, sizeof(struct sClass*));
memset(&it2_74, 0, sizeof(struct sClass*));
memset(&hash_75, 0, sizeof(unsigned int));
memset(&n_76, 0, sizeof(int));
memset(&default_value_77, 0, sizeof(struct sClass*));
                size_61=self->size*10;
                keys_62=(char**)come_increment_ref_count(((char**)(right_value106=(char**)come_calloc(1, sizeof(char*)*(1*(size_61)), "./comelang2.h", 1335, "char*%"))));
                right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                items_63=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value107=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_61)), "./comelang2.h", 1336, "sClass*%"))));
                come_call_finalizer2(sClass_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                item_existance_64=(_Bool*)come_increment_ref_count(((_Bool*)(right_value108=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_61)), "./comelang2.h", 1337, "bool"))));
                right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                len_65=0;
                for(                it_68=map$2charphsClassph_begin(self);                !map$2charphsClassph_end(self);                it_68=map$2charphsClassph_next(self)                ){
                    memset(&default_value_71,0,sizeof(struct sClass*));
                    it2_74=map$2charphsClassph_at(self,it_68,default_value_71);
                    hash_75=string_get_hash_key(it_68)%size_61;
                    n_76=hash_75;
                    while(_while_condtional12=(_Bool)1,                    _while_condtional12) {
                        if(_if_conditional141=item_existance_64[n_76],                        _if_conditional141) {
                            n_76++;
                            if(_if_conditional142=n_76>=size_61,                            _if_conditional142) {
                                n_76=0;
                            }
                            else {
                                if(_if_conditional143=n_76==hash_75,                                _if_conditional143) {
                                    printf("unexpected error in map.rehash(1)\n");
                                    stackframe();
                                    exit(2);
                                }
                            }
                        }
                        else {
                            item_existance_64[n_76]=(_Bool)1;
                            keys_62[n_76]=it_68;
                            items_63[n_76]=map$2charphsClassph_at(self,it_68,default_value_77);
                            len_65++;
                            break;
                        }
                    }
                }
                come_free((char*)self->items);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_free((char*)self->keys);
                self->keys=keys_62;
                self->items=items_63;
                self->item_existance=item_existance_64;
                self->size=size_61;
                self->len=len_65;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional133;
char* result_66;
char* __result62__;
_Bool _if_conditional134;
char* __result63__;
char* result_67;
char* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_66, 0, sizeof(char*));
memset(&result_67, 0, sizeof(char*));
                    if(_if_conditional133=self==((void*)0),                    _if_conditional133) {
                        memset(&result_66,0,sizeof(char*));
                        __result62__ = __result_obj__ = result_66;
                        return __result62__;
                    }
                    self->key_list->it=self->key_list->head;
                    if(self->key_list->it) {
                        __result63__ = __result_obj__ = self->key_list->it->item;
                        return __result63__;
                    }
                    memset(&result_67,0,sizeof(char*));
                    __result64__ = __result_obj__ = result_67;
                    return __result64__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result65__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result65__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result65__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional135;
char* result_69;
char* __result66__;
_Bool _if_conditional136;
char* __result67__;
char* result_70;
char* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_69, 0, sizeof(char*));
memset(&result_70, 0, sizeof(char*));
                    if(_if_conditional135=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional135) {
                        memset(&result_69,0,sizeof(char*));
                        __result66__ = __result_obj__ = result_69;
                        return __result66__;
                    }
                    self->key_list->it=self->key_list->it->next;
                    if(self->key_list->it) {
                        __result67__ = __result_obj__ = self->key_list->it->item;
                        return __result67__;
                    }
                    memset(&result_70,0,sizeof(char*));
                    __result68__ = __result_obj__ = result_70;
                    return __result68__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_72;
unsigned int it_73;
_Bool _while_condtional11;
_Bool _if_conditional137;
_Bool _if_conditional138;
struct sClass* __result69__;
_Bool _if_conditional139;
_Bool _if_conditional140;
struct sClass* __result70__;
struct sClass* __result71__;
struct sClass* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_72, 0, sizeof(unsigned int));
memset(&it_73, 0, sizeof(unsigned int));
                        hash_72=string_get_hash_key(((char*)key))%self->size;
                        it_73=hash_72;
                        while(_while_condtional11=(_Bool)1,                        _while_condtional11) {
                            if(_if_conditional137=self->item_existance[it_73],                            _if_conditional137) {
                                if(_if_conditional138=string_equals(self->keys[it_73],key),                                _if_conditional138) {
                                    __result69__ = __result_obj__ = self->items[it_73];
                                    come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result69__;
                                }
                                it_73++;
                                if(_if_conditional139=it_73>=self->size,                                _if_conditional139) {
                                    it_73=0;
                                }
                                else {
                                    if(_if_conditional140=it_73==hash_72,                                    _if_conditional140) {
                                        __result70__ = __result_obj__ = default_value;
                                        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result70__;
                                    }
                                }
                            }
                            else {
                                __result71__ = __result_obj__ = default_value;
                                come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result71__;
                            }
                        }
                        __result72__ = __result_obj__ = default_value;
                        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result72__;
                        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_80;
struct list_item$1charp* it_81;
_Bool _while_condtional14;
_Bool _if_conditional147;
struct list$1charp* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_80, 0, sizeof(int));
memset(&it_81, 0, sizeof(struct list_item$1charp*));
                            it2_80=0;
                            it_81=self->head;
                            while(_while_condtional14=it_81!=((void*)0),                            _while_condtional14) {
                                if(_if_conditional147=string_equals(it_81->item,item),                                _if_conditional147) {
                                    list$1charp_delete(self,it2_80,it2_80+1);
                                    break;
                                }
                                it2_80++;
                                it_81=it_81->next;
                            }
                            __result76__ = __result_obj__ = self;
                            return __result76__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
int tmp_82;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
struct list$1charp* __result73__;
_Bool _if_conditional154;
_Bool _if_conditional155;
struct list_item$1charp* it_85;
int i_86;
_Bool _while_condtional16;
_Bool _if_conditional156;
struct list_item$1charp* prev_it_87;
_Bool _if_conditional157;
_Bool _if_conditional158;
struct list_item$1charp* it_88;
int i_89;
_Bool _while_condtional17;
_Bool _if_conditional159;
_Bool _if_conditional160;
struct list_item$1charp* prev_it_90;
struct list_item$1charp* it_91;
struct list_item$1charp* head_prev_it_92;
struct list_item$1charp* tail_it_93;
int i_94;
_Bool _while_condtional18;
_Bool _if_conditional161;
_Bool _if_conditional162;
_Bool _if_conditional163;
struct list_item$1charp* prev_it_95;
_Bool _if_conditional164;
_Bool _if_conditional165;
struct list$1charp* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_82, 0, sizeof(int));
memset(&it_85, 0, sizeof(struct list_item$1charp*));
memset(&i_86, 0, sizeof(int));
memset(&prev_it_87, 0, sizeof(struct list_item$1charp*));
memset(&it_88, 0, sizeof(struct list_item$1charp*));
memset(&i_89, 0, sizeof(int));
memset(&prev_it_90, 0, sizeof(struct list_item$1charp*));
memset(&it_91, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_92, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_93, 0, sizeof(struct list_item$1charp*));
memset(&i_94, 0, sizeof(int));
memset(&prev_it_95, 0, sizeof(struct list_item$1charp*));
                                        if(_if_conditional148=head<0,                                        _if_conditional148) {
                                            head+=self->len;
                                        }
                                        if(_if_conditional149=tail<0,                                        _if_conditional149) {
                                            tail+=self->len+1;
                                        }
                                        if(_if_conditional150=head>tail,                                        _if_conditional150) {
                                            tmp_82=tail;
                                            tail=head;
                                            head=tmp_82;
                                        }
                                        if(_if_conditional151=head<0,                                        _if_conditional151) {
                                            head=0;
                                        }
                                        if(_if_conditional152=tail>self->len,                                        _if_conditional152) {
                                            tail=self->len;
                                        }
                                        if(_if_conditional153=head==tail,                                        _if_conditional153) {
                                            __result73__ = __result_obj__ = self;
                                            return __result73__;
                                        }
                                        if(_if_conditional154=head==0&&tail==self->len,                                        _if_conditional154) {
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            if(_if_conditional155=head==0,                                            _if_conditional155) {
                                                it_85=self->head;
                                                i_86=0;
                                                while(_while_condtional16=it_85!=((void*)0),                                                _while_condtional16) {
                                                    if(_if_conditional156=i_86<tail,                                                    _if_conditional156) {
                                                        prev_it_87=it_85;
                                                        it_85=it_85->next;
                                                        i_86++;
                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        self->len--;
                                                    }
                                                    else {
                                                        if(_if_conditional157=i_86==tail,                                                        _if_conditional157) {
                                                            self->head=it_85;
                                                            self->head->prev=((void*)0);
                                                            break;
                                                        }
                                                        else {
                                                            it_85=it_85->next;
                                                            i_86++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                if(_if_conditional158=tail==self->len,                                                _if_conditional158) {
                                                    it_88=self->head;
                                                    i_89=0;
                                                    while(_while_condtional17=it_88!=((void*)0),                                                    _while_condtional17) {
                                                        if(_if_conditional159=i_89==head,                                                        _if_conditional159) {
                                                            self->tail=it_88->prev;
                                                            self->tail->next=((void*)0);
                                                        }
                                                        if(_if_conditional160=i_89>=head,                                                        _if_conditional160) {
                                                            prev_it_90=it_88;
                                                            it_88=it_88->next;
                                                            i_89++;
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_88=it_88->next;
                                                            i_89++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    it_91=self->head;
                                                    head_prev_it_92=((void*)0);
                                                    tail_it_93=((void*)0);
                                                    i_94=0;
                                                    while(_while_condtional18=it_91!=((void*)0),                                                    _while_condtional18) {
                                                        if(_if_conditional161=i_94==head,                                                        _if_conditional161) {
                                                            head_prev_it_92=it_91->prev;
                                                        }
                                                        if(_if_conditional162=i_94==tail,                                                        _if_conditional162) {
                                                            tail_it_93=it_91;
                                                        }
                                                        if(_if_conditional163=i_94>=head&&i_94<tail,                                                        _if_conditional163) {
                                                            prev_it_95=it_91;
                                                            it_91=it_91->next;
                                                            i_94++;
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_91=it_91->next;
                                                            i_94++;
                                                        }
                                                    }
                                                    if(_if_conditional164=head_prev_it_92!=((void*)0),                                                    _if_conditional164) {
                                                        head_prev_it_92->next=tail_it_93;
                                                    }
                                                    if(_if_conditional165=tail_it_93!=((void*)0),                                                    _if_conditional165) {
                                                        tail_it_93->prev=head_prev_it_92;
                                                    }
                                                }
                                            }
                                        }
                                        __result75__ = __result_obj__ = self;
                                        return __result75__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_83;
_Bool _while_condtional15;
struct list_item$1charp* prev_it_84;
struct list$1charp* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_83, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_84, 0, sizeof(struct list_item$1charp*));
                                                it_83=self->head;
                                                while(_while_condtional15=it_83!=((void*)0),                                                _while_condtional15) {
                                                    prev_it_84=it_83;
                                                    it_83=it_83->next;
                                                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                __result74__ = __result_obj__ = self;
                                                return __result74__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional171;
char* result_97;
char* __result77__;
_Bool _if_conditional172;
char* __result78__;
char* result_98;
char* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_97, 0, sizeof(char*));
memset(&result_98, 0, sizeof(char*));
            if(_if_conditional171=self==((void*)0),            _if_conditional171) {
                memset(&result_97,0,sizeof(char*));
                __result77__ = __result_obj__ = result_97;
                return __result77__;
            }
            self->it=self->head;
            if(self->it) {
                __result78__ = __result_obj__ = self->it->item;
                return __result78__;
            }
            memset(&result_98,0,sizeof(char*));
            __result79__ = __result_obj__ = result_98;
            return __result79__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
            __result80__ = self==((void*)0)||self->it==((void*)0);
            return __result80__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional173;
char* result_100;
char* __result81__;
_Bool _if_conditional174;
char* __result82__;
char* result_101;
char* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_100, 0, sizeof(char*));
memset(&result_101, 0, sizeof(char*));
            if(_if_conditional173=self==((void*)0)||self->it==((void*)0),            _if_conditional173) {
                memset(&result_100,0,sizeof(char*));
                __result81__ = __result_obj__ = result_100;
                return __result81__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result82__ = __result_obj__ = self->it->item;
                return __result82__;
            }
            memset(&result_101,0,sizeof(char*));
            __result83__ = __result_obj__ = result_101;
            return __result83__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional177;
void* right_value109;
struct list_item$1charp* litem_102;
_Bool _if_conditional178;
void* right_value110;
struct list_item$1charp* litem_103;
void* right_value111;
struct list_item$1charp* litem_104;
struct list$1charp* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value109 = (void*)0;
memset(&litem_102, 0, sizeof(struct list_item$1charp*));
right_value110 = (void*)0;
memset(&litem_103, 0, sizeof(struct list_item$1charp*));
right_value111 = (void*)0;
memset(&litem_104, 0, sizeof(struct list_item$1charp*));
                if(_if_conditional177=self->len==0,                _if_conditional177) {
                    litem_102=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value109=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 226, "list_item$1charp"))));
                    come_call_finalizer2(list_item$1charpp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_102->prev=((void*)0);
                    litem_102->next=((void*)0);
                    litem_102->item=item;
                    self->tail=litem_102;
                    self->head=litem_102;
                }
                else {
                    if(_if_conditional178=self->len==1,                    _if_conditional178) {
                        litem_103=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value110=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 236, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_103->prev=self->head;
                        litem_103->next=((void*)0);
                        litem_103->item=item;
                        self->tail=litem_103;
                        self->head->next=litem_103;
                    }
                    else {
                        litem_104=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value111=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 246, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_104->prev=self->tail;
                        litem_104->next=((void*)0);
                        litem_104->item=item;
                        self->tail->next=litem_104;
                        self->tail=litem_104;
                    }
                }
                self->len++;
                __result84__ = __result_obj__ = self;
                return __result84__;
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
void* right_value119;
struct list_item$1CVALUEph* litem_113;
struct CVALUE* __dec_obj45;
_Bool _if_conditional189;
void* right_value120;
struct list_item$1CVALUEph* litem_114;
struct CVALUE* __dec_obj46;
void* right_value121;
struct list_item$1CVALUEph* litem_115;
struct CVALUE* __dec_obj47;
struct list$1CVALUEph* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
right_value119 = (void*)0;
memset(&litem_113, 0, sizeof(struct list_item$1CVALUEph*));
right_value120 = (void*)0;
memset(&litem_114, 0, sizeof(struct list_item$1CVALUEph*));
right_value121 = (void*)0;
memset(&litem_115, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional187=self->len==0,        _if_conditional187) {
            litem_113=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value119=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 226, "list_item$1CVALUEph"))));
            come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            litem_113->prev=((void*)0);
            litem_113->next=((void*)0);
            __dec_obj45=litem_113->item;
            litem_113->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer2(CVALUE_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            self->tail=litem_113;
            self->head=litem_113;
        }
        else {
            if(_if_conditional189=self->len==1,            _if_conditional189) {
                litem_114=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value120=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 236, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_114->prev=self->head;
                litem_114->next=((void*)0);
                __dec_obj46=litem_114->item;
                litem_114->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_114;
                self->head->next=litem_114;
            }
            else {
                litem_115=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value121=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 246, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_115->prev=self->tail;
                litem_115->next=((void*)0);
                __dec_obj47=litem_115->item;
                litem_115->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail->next=litem_115;
                self->tail=litem_115;
            }
        }
        self->len++;
        __result86__ = __result_obj__ = self;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result86__;
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
void* right_value122;
struct sNode* __dec_obj48;
void* right_value123;
char* __dec_obj49;
void* right_value133;
struct list$1tuple2$2charphsNodephph* __dec_obj55;
void* right_value134;
struct buffer* __dec_obj56;
void* right_value135;
char* __dec_obj57;
void* right_value136;
struct list$1sTypeph* __dec_obj58;
struct sMethodCallNode* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
right_value122 = (void*)0;
right_value123 = (void*)0;
right_value133 = (void*)0;
right_value134 = (void*)0;
right_value135 = (void*)0;
right_value136 = (void*)0;
    __dec_obj48=self->obj;
    self->obj=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value122=sNode_clone(obj))));
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value122) { right_value122 = come_decrement_ref_count2(right_value122, ((struct sNode*)right_value122)->finalize, ((struct sNode*)right_value122)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj49=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(((char*)(right_value123=__builtin_string(fun_name))));
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj55=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value133=list$1tuple2$2charphsNodephphp_clone(params))));
    come_call_finalizer2(list$1tuple2$2charphsNodephph_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj56=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value134=buffer_clone(method_block))));
    come_call_finalizer2(buffer_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj57=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value135=__builtin_string(info->sname))));
    __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->method_block_sline=method_block_sline;
    __dec_obj58=self->method_generics_types;
    self->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value136=list$1sTypephp_clone(method_generics_types))));
    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __result94__ = __result_obj__ = self;
    come_call_finalizer2(sMethodCallNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,params, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result94__;
    come_call_finalizer2(sMethodCallNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,params, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional190;
struct list$1tuple2$2charphsNodephph* __result88__;
void* right_value124;
void* right_value125;
struct list$1tuple2$2charphsNodephph* result_118;
struct list_item$1tuple2$2charphsNodephph* it_119;
_Bool _while_condtional20;
void* right_value132;
struct list$1tuple2$2charphsNodephph* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
right_value124 = (void*)0;
right_value125 = (void*)0;
memset(&result_118, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_119, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value132 = (void*)0;
        if(_if_conditional190=self==((void*)0),        _if_conditional190) {
            __result88__ = __result_obj__ = ((void*)0);
            return __result88__;
        }
        result_118=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value125=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value124=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 142, "list$1tuple2$2charphsNodephph"))))))));
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        it_119=self->head;
        while(_while_condtional20=it_119!=((void*)0),        _while_condtional20) {
            list$1tuple2$2charphsNodephph_add(result_118,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value132=tuple2$2charphsNodephp_clone(it_119->item)))));
            come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            it_119=it_119->next;
        }
        __result93__ = __result_obj__ = result_118;
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,result_118, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result93__;
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,result_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsNodephph* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result89__ = __result_obj__ = self;
            come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result89__;
            come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsNodephph* it_116;
_Bool _while_condtional19;
struct list_item$1tuple2$2charphsNodephph* prev_it_117;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_116, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&prev_it_117, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                it_116=self->head;
                while(_while_condtional19=it_116!=((void*)0),                _while_condtional19) {
                    prev_it_117=it_116;
                    it_116=it_116->next;
                    come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,prev_it_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
void* right_value126;
struct list_item$1tuple2$2charphsNodephph* litem_120;
struct tuple2$2charphsNodeph* __dec_obj50;
_Bool _if_conditional197;
void* right_value127;
struct list_item$1tuple2$2charphsNodephph* litem_121;
struct tuple2$2charphsNodeph* __dec_obj51;
void* right_value128;
struct list_item$1tuple2$2charphsNodephph* litem_122;
struct tuple2$2charphsNodeph* __dec_obj52;
struct list$1tuple2$2charphsNodephph* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value126 = (void*)0;
memset(&litem_120, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value127 = (void*)0;
memset(&litem_121, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value128 = (void*)0;
memset(&litem_122, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                if(_if_conditional194=self->len==0,                _if_conditional194) {
                    litem_120=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value126=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 156, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_120->prev=((void*)0);
                    litem_120->next=((void*)0);
                    __dec_obj50=litem_120->item;
                    litem_120->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_120;
                    self->head=litem_120;
                }
                else {
                    if(_if_conditional197=self->len==1,                    _if_conditional197) {
                        litem_121=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value127=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 166, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_121->prev=self->head;
                        litem_121->next=((void*)0);
                        __dec_obj51=litem_121->item;
                        litem_121->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_121;
                        self->head->next=litem_121;
                    }
                    else {
                        litem_122=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value128=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 176, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_122->prev=self->tail;
                        litem_122->next=((void*)0);
                        __dec_obj52=litem_122->item;
                        litem_122->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_122;
                        self->tail=litem_122;
                    }
                }
                self->len++;
                __result90__ = __result_obj__ = self;
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result90__;
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
struct tuple2$2charphsNodeph* __result91__;
void* right_value129;
struct tuple2$2charphsNodeph* result_123;
_Bool _if_conditional199;
void* right_value130;
char* __dec_obj53;
_Bool _if_conditional200;
void* right_value131;
struct sNode* __dec_obj54;
struct tuple2$2charphsNodeph* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
right_value129 = (void*)0;
memset(&result_123, 0, sizeof(struct tuple2$2charphsNodeph*));
right_value130 = (void*)0;
right_value131 = (void*)0;
                if(_if_conditional198=self==(void*)0,                _if_conditional198) {
                    __result91__ = __result_obj__ = (void*)0;
                    return __result91__;
                }
                result_123=(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value129=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"))));
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional199=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional199) {
                    __dec_obj53=result_123->v1;
                    result_123->v1=(char*)come_increment_ref_count(((char*)(right_value130=string_clone(self->v1))));
                    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional200=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional200) {
                    __dec_obj54=result_123->v2;
                    result_123->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value131=sNode_clone(self->v2))));
                    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count2(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value131) { right_value131 = come_decrement_ref_count2(right_value131, ((struct sNode*)right_value131)->finalize, ((struct sNode*)right_value131)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                __result92__ = __result_obj__ = result_123;
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,result_123, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result92__;
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,result_123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

int sMethodCallNode_sline(struct sMethodCallNode* self, struct sInfo* info){
void* __result_obj__;
int __result95__;
memset(&__result_obj__, 0, sizeof(void*));
    __result95__ = self->sline;
    return __result95__;
}

char* sMethodCallNode_sname(struct sMethodCallNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value137;
char* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value137 = (void*)0;
    __result96__ = __result_obj__ = ((char*)(right_value137=__builtin_string(self->sname)));
    right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result96__;
}

char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__;
void* right_value138;
char* none_generics_name_124;
void* right_value139;
char* fun_name2_125;
void* right_value140;
char* fun_name3_126;
struct sGenericsFun* generics_fun_129;
_Bool _if_conditional221;
void* right_value141;
_Bool _if_conditional222;
void* right_value142;
char* __result101__;
char* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
right_value138 = (void*)0;
memset(&none_generics_name_124, 0, sizeof(char*));
right_value139 = (void*)0;
memset(&fun_name2_125, 0, sizeof(char*));
right_value140 = (void*)0;
memset(&fun_name3_126, 0, sizeof(char*));
memset(&generics_fun_129, 0, sizeof(struct sGenericsFun*));
right_value141 = (void*)0;
right_value142 = (void*)0;
    none_generics_name_124=(char*)come_increment_ref_count(((char*)(right_value138=get_none_generics_name(type->mClass->mName))));
    right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    fun_name2_125=(char*)come_increment_ref_count(((char*)(right_value139=create_method_name(type,(_Bool)0,fun_name,info,array_equal_pointer))));
    right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    fun_name3_126=(char*)come_increment_ref_count(((char*)(right_value140=xsprintf("%s_%s",none_generics_name_124,fun_name))));
    right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    generics_fun_129=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_126,((void*)0));
    if(generics_fun_129) {
        if(_if_conditional222=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value141=__builtin_string(fun_name2_125)))),generics_fun_129,type,info),        right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
        _if_conditional222) {
            err_msg(info,"%s not found",fun_name3_126);
            __result101__ = __result_obj__ = ((char*)(right_value142=__builtin_string("")));
            fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            none_generics_name_124 = come_decrement_ref_count2(none_generics_name_124, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name2_125 = come_decrement_ref_count2(fun_name2_125, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name3_126 = come_decrement_ref_count2(fun_name3_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result101__;
        }
    }
    __result102__ = __result_obj__ = fun_name2_125;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    none_generics_name_124 = come_decrement_ref_count2(none_generics_name_124, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_125 = come_decrement_ref_count2(fun_name2_125, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    fun_name3_126 = come_decrement_ref_count2(fun_name3_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result102__;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    none_generics_name_124 = come_decrement_ref_count2(none_generics_name_124, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_125 = come_decrement_ref_count2(fun_name2_125, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name3_126 = come_decrement_ref_count2(fun_name3_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_127;
unsigned int it_128;
_Bool _while_condtional21;
_Bool _if_conditional207;
_Bool _if_conditional208;
struct sGenericsFun* __result97__;
_Bool _if_conditional219;
_Bool _if_conditional220;
struct sGenericsFun* __result98__;
struct sGenericsFun* __result99__;
struct sGenericsFun* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_127, 0, sizeof(unsigned int));
memset(&it_128, 0, sizeof(unsigned int));
        hash_127=string_get_hash_key(((char*)key))%self->size;
        it_128=hash_127;
        while(_while_condtional21=(_Bool)1,        _while_condtional21) {
            if(_if_conditional207=self->item_existance[it_128],            _if_conditional207) {
                if(_if_conditional208=string_equals(self->keys[it_128],key),                _if_conditional208) {
                    __result97__ = __result_obj__ = self->items[it_128];
                    come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result97__;
                }
                it_128++;
                if(_if_conditional219=it_128>=self->size,                _if_conditional219) {
                    it_128=0;
                }
                else {
                    if(_if_conditional220=it_128==hash_127,                    _if_conditional220) {
                        __result98__ = __result_obj__ = default_value;
                        come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result98__;
                    }
                }
            }
            else {
                __result99__ = __result_obj__ = default_value;
                come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result99__;
            }
        }
        __result100__ = __result_obj__ = default_value;
        come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result100__;
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
_Bool __result103__;
_Bool __result104__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self->method_block) {
        __result103__ = (_Bool)1;
        return __result103__;
    }
    else {
        __result104__ = (_Bool)0;
        return __result104__;
    }
}

char* sMethodCallNode_kind(){
void* __result_obj__;
void* right_value143;
char* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value143 = (void*)0;
    __result105__ = __result_obj__ = ((char*)(right_value143=__builtin_string("sMethodCallNode")));
    right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result105__;
}

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info){
void* __result_obj__;
char* fun_name_130;
struct list$1tuple2$2charphsNodephph* params_131;
struct sNode* obj_132;
struct buffer* method_block_133;
int method_block_sline_134;
struct list$1sTypeph* method_generics_types_135;
void* right_value144;
struct list$1sTypeph* __dec_obj59;
_Bool _if_conditional224;
_Bool __result106__;
void* right_value145;
struct CVALUE* obj_value_136;
void* right_value146;
struct sType* obj_type_137;
struct sClass* klass_138;
_Bool calling_dynamic_method_139;
struct sType* lambda_type_140;
struct list$1tuple2$2charphsTypephph* o2_saved_141;
struct tuple2$2charphsTypeph* it_144;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* field_name_147;
struct sType* field_type_148;
_Bool _if_conditional229;
_Bool _if_conditional230;
void* right_value147;
struct sType* result_type_149;
void* right_value148;
void* right_value149;
struct list$1CVALUEph* come_params_152;
int i_153;
struct list$1tuple2$2charphsNodephph* o2_saved_154;
struct tuple2$2charphsNodeph* it_157;
struct tuple2$2charphsNodeph* multiple_assign_var2;
char* label_160;
struct sNode* node_161;
_Bool _if_conditional235;
_Bool _if_conditional236;
_Bool __result122__;
void* right_value150;
struct CVALUE* come_value_162;
void* right_value151;
void* right_value152;
void* right_value153;
_Bool _if_conditional239;
void* right_value154;
void* right_value155;
struct buffer* buf_166;
void* right_value156;
int j_167;
struct list$1CVALUEph* o2_saved_168;
struct CVALUE* it_171;
_Bool _if_conditional244;
void* right_value157;
char* __dec_obj60;
_Bool _if_conditional245;
void* right_value158;
struct CVALUE* come_value2_174;
void* right_value159;
char* __dec_obj61;
void* right_value160;
struct sType* result_type2_175;
_Bool _if_conditional246;
void* right_value161;
void* right_value162;
char* __dec_obj62;
void* right_value163;
struct sType* __dec_obj63;
void* right_value164;
void* right_value165;
void* right_value166;
char* generics_fun_name_176;
struct sFun* fun_177;
int i_178;
void* right_value167;
char* new_fun_name_179;
_Bool _if_conditional266;
void* right_value168;
char* __dec_obj64;
_Bool _if_conditional267;
struct sType* obj_array_type_183;
_Bool _if_conditional268;
void* right_value169;
char* array_method_name_184;
_Bool _if_conditional273;
void* right_value170;
char* __dec_obj65;
void* right_value171;
void* right_value172;
void* right_value173;
char* generics_fun_name_187;
struct sFun* fun_188;
int i_189;
void* right_value174;
char* new_fun_name_190;
_Bool _if_conditional274;
void* right_value175;
char* __dec_obj66;
_Bool _if_conditional275;
void* right_value176;
void* right_value177;
char* __dec_obj67;
_Bool _if_conditional276;
_Bool __result141__;
_Bool _if_conditional277;
void* right_value178;
void* right_value179;
char* __dec_obj68;
_Bool _if_conditional278;
_Bool __result142__;
_Bool _if_conditional279;
_Bool __result144__;
void* right_value180;
struct sType* result_type_191;
void* right_value181;
struct sType* result_type2_192;
void* right_value182;
void* right_value183;
struct list$1sTypeph* param_types_193;
struct list$1sTypeph* o2_saved_194;
struct sType* it_197;
_Bool _if_conditional284;
void* right_value187;
struct sType* it2_203;
void* right_value188;
void* right_value189;
void* right_value190;
struct list$1CVALUEph* come_params_204;
void* right_value191;
void* right_value197;
struct map$2charphCVALUEph* label_params_208;
int i_209;
struct list$1tuple2$2charphsNodephph* o2_saved_210;
struct tuple2$2charphsNodeph* it_211;
struct tuple2$2charphsNodeph* multiple_assign_var3;
char* label_212;
struct sNode* node_213;
_Bool _if_conditional291;
void* right_value198;
void* right_value199;
void* right_value200;
_Bool _if_conditional292;
_Bool _if_conditional293;
_Bool _if_conditional296;
_Bool __result157__;
void* right_value201;
struct CVALUE* come_value_217;
_Bool _if_conditional297;
int n_218;
struct list$1charph* o2_saved_219;
char* it_222;
_Bool _if_conditional302;
_Bool _if_conditional303;
void* right_value202;
void* right_value203;
void* right_value204;
_Bool _if_conditional304;
_Bool _if_conditional305;
void* right_value205;
void* right_value206;
void* right_value207;
_Bool _if_conditional306;
_Bool _if_conditional307;
void* right_value211;
struct sType* obj_array_type_246;
_Bool _if_conditional330;
_Bool _if_conditional331;
void* right_value212;
void* right_value213;
struct buffer* buf_247;
int i_248;
struct list$1sNodeph* o2_saved_249;
struct sNode* it_252;
_Bool _if_conditional336;
void* right_value214;
struct CVALUE* come_value_255;
void* right_value215;
_Bool _if_conditional337;
void* right_value216;
struct CVALUE* come_value_256;
void* right_value217;
char* __dec_obj73;
void* right_value218;
void* right_value219;
struct sType* __dec_obj74;
void* right_value223;
void* right_value224;
void* right_value225;
_Bool _if_conditional341;
void* right_value226;
char* default_param_260;
char* param_name_261;
struct CVALUE* come_value_265;
_Bool _if_conditional346;
struct buffer* source_266;
char* p_267;
char* head_268;
int sline_269;
void* right_value227;
struct buffer* __dec_obj79;
void* right_value228;
struct sNode* node_270;
_Bool _if_conditional347;
_Bool __result191__;
struct buffer* __dec_obj80;
void* right_value229;
struct CVALUE* come_value_271;
_Bool _if_conditional348;
void* right_value230;
void* right_value231;
void* right_value232;
_Bool _if_conditional349;
_Bool _if_conditional350;
_Bool __result192__;
_Bool _if_conditional351;
char* param_name_272;
struct CVALUE* come_value_273;
_Bool _if_conditional352;
void* right_value236;
_Bool _if_conditional360;
void* right_value237;
void* right_value238;
struct sNode* _inf_value1;
struct sCurrentNode* _inf_obj_value1;
void* right_value241;
struct sNode* current_stack_frame_node_278;
_Bool _if_conditional365;
_Bool __result201__;
void* right_value242;
struct CVALUE* come_value_279;
void* right_value243;
void* right_value244;
struct buffer* method_block2_280;
void* right_value245;
struct sType* method_block_type_281;
void* right_value246;
char* class_name_282;
struct sClass* current_stack_frame_struct_286;
_Bool _if_conditional370;
_Bool __result206__;
void* right_value247;
struct sType* result_type_287;
struct list$1sTypeph* param_types_288;
struct list$1charph* param_names_289;
void* right_value248;
void* right_value249;
struct buffer* all_alhabet_sname_290;
char* p_291;
_Bool _while_condtional33;
_Bool _if_conditional371;
void* right_value250;
void* right_value251;
void* right_value252;
int i_292;
struct list$1sTypeph* o2_saved_293;
struct sType* it_294;
struct sType* param_type_295;
_Bool _if_conditional372;
void* right_value253;
char* param_name_296;
void* right_value254;
void* right_value255;
_Bool _if_conditional373;
void* right_value256;
char* param_name_297;
void* right_value257;
void* right_value258;
void* right_value259;
char* param_name_298;
void* right_value260;
void* right_value261;
_Bool _if_conditional374;
void* right_value262;
struct buffer* source3_299;
char* p_300;
char* head_301;
int sline_302;
struct buffer* __dec_obj85;
void* right_value263;
struct sNode* node_303;
_Bool _if_conditional375;
_Bool __result207__;
void* right_value264;
void* right_value265;
char* method_block_name_304;
void* right_value266;
struct CVALUE* come_value2_305;
struct sFun* fun2_306;
_Bool _if_conditional376;
_Bool __result208__;
struct sType* method_block_type2_307;
void* right_value267;
char* __dec_obj86;
void* right_value268;
struct sType* __dec_obj87;
struct buffer* __dec_obj88;
void* right_value269;
void* right_value270;
struct buffer* buf_308;
int j_309;
struct list$1CVALUEph* o2_saved_310;
struct CVALUE* it_311;
_Bool _if_conditional377;
void* right_value271;
struct CVALUE* come_value2_312;
void* right_value272;
char* __dec_obj89;
void* right_value273;
struct sType* __dec_obj90;
_Bool _if_conditional378;
void* right_value274;
char* __dec_obj91;
void* right_value275;
char* __dec_obj92;
_Bool _if_conditional379;
void* right_value276;
char* var_name_313;
void* right_value277;
struct sType* result_type_314;
void* right_value278;
struct sType* result_type2_315;
struct sType* result_type3_316;
_Bool _if_conditional380;
_Bool _if_conditional381;
_Bool _if_conditional382;
void* right_value279;
void* right_value280;
void* right_value281;
void* right_value282;
void* right_value283;
void* right_value284;
void* right_value285;
void* right_value286;
void* right_value287;
void* right_value288;
void* right_value289;
_Bool _if_conditional383;
void* right_value290;
void* right_value291;
void* right_value292;
void* right_value293;
void* right_value294;
void* right_value295;
void* right_value296;
struct list$1sTypeph* __dec_obj93;
_Bool __result209__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&fun_name_130, 0, sizeof(char*));
memset(&params_131, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&obj_132, 0, sizeof(struct sNode*));
memset(&method_block_133, 0, sizeof(struct buffer*));
memset(&method_block_sline_134, 0, sizeof(int));
memset(&method_generics_types_135, 0, sizeof(struct list$1sTypeph*));
right_value144 = (void*)0;
right_value145 = (void*)0;
memset(&obj_value_136, 0, sizeof(struct CVALUE*));
right_value146 = (void*)0;
memset(&obj_type_137, 0, sizeof(struct sType*));
memset(&klass_138, 0, sizeof(struct sClass*));
memset(&calling_dynamic_method_139, 0, sizeof(_Bool));
memset(&lambda_type_140, 0, sizeof(struct sType*));
memset(&o2_saved_141, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_144, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_147, 0, sizeof(char*));
memset(&field_type_148, 0, sizeof(struct sType*));
memset(&field_name_147, 0, sizeof(char*));
memset(&field_type_148, 0, sizeof(struct sType*));
right_value147 = (void*)0;
memset(&result_type_149, 0, sizeof(struct sType*));
right_value148 = (void*)0;
right_value149 = (void*)0;
memset(&come_params_152, 0, sizeof(struct list$1CVALUEph*));
memset(&i_153, 0, sizeof(int));
memset(&o2_saved_154, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_157, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_160, 0, sizeof(char*));
memset(&node_161, 0, sizeof(struct sNode*));
memset(&label_160, 0, sizeof(char*));
memset(&node_161, 0, sizeof(struct sNode*));
right_value150 = (void*)0;
memset(&come_value_162, 0, sizeof(struct CVALUE*));
right_value151 = (void*)0;
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
right_value155 = (void*)0;
memset(&buf_166, 0, sizeof(struct buffer*));
right_value156 = (void*)0;
memset(&j_167, 0, sizeof(int));
memset(&o2_saved_168, 0, sizeof(struct list$1CVALUEph*));
memset(&it_171, 0, sizeof(struct CVALUE*));
right_value157 = (void*)0;
right_value158 = (void*)0;
memset(&come_value2_174, 0, sizeof(struct CVALUE*));
right_value159 = (void*)0;
right_value160 = (void*)0;
memset(&result_type2_175, 0, sizeof(struct sType*));
right_value161 = (void*)0;
right_value162 = (void*)0;
right_value163 = (void*)0;
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
memset(&generics_fun_name_176, 0, sizeof(char*));
memset(&fun_177, 0, sizeof(struct sFun*));
memset(&i_178, 0, sizeof(int));
right_value167 = (void*)0;
memset(&new_fun_name_179, 0, sizeof(char*));
right_value168 = (void*)0;
memset(&obj_array_type_183, 0, sizeof(struct sType*));
right_value169 = (void*)0;
memset(&array_method_name_184, 0, sizeof(char*));
right_value170 = (void*)0;
right_value171 = (void*)0;
right_value172 = (void*)0;
right_value173 = (void*)0;
memset(&generics_fun_name_187, 0, sizeof(char*));
memset(&fun_188, 0, sizeof(struct sFun*));
memset(&i_189, 0, sizeof(int));
right_value174 = (void*)0;
memset(&new_fun_name_190, 0, sizeof(char*));
right_value175 = (void*)0;
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
right_value180 = (void*)0;
memset(&result_type_191, 0, sizeof(struct sType*));
right_value181 = (void*)0;
memset(&result_type2_192, 0, sizeof(struct sType*));
right_value182 = (void*)0;
right_value183 = (void*)0;
memset(&param_types_193, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_194, 0, sizeof(struct list$1sTypeph*));
memset(&it_197, 0, sizeof(struct sType*));
right_value187 = (void*)0;
memset(&it2_203, 0, sizeof(struct sType*));
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
memset(&come_params_204, 0, sizeof(struct list$1CVALUEph*));
right_value191 = (void*)0;
right_value197 = (void*)0;
memset(&label_params_208, 0, sizeof(struct map$2charphCVALUEph*));
memset(&i_209, 0, sizeof(int));
memset(&o2_saved_210, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_211, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_212, 0, sizeof(char*));
memset(&node_213, 0, sizeof(struct sNode*));
memset(&label_212, 0, sizeof(char*));
memset(&node_213, 0, sizeof(struct sNode*));
right_value198 = (void*)0;
right_value199 = (void*)0;
right_value200 = (void*)0;
right_value201 = (void*)0;
memset(&come_value_217, 0, sizeof(struct CVALUE*));
memset(&n_218, 0, sizeof(int));
memset(&o2_saved_219, 0, sizeof(struct list$1charph*));
memset(&it_222, 0, sizeof(char*));
right_value202 = (void*)0;
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
right_value207 = (void*)0;
right_value211 = (void*)0;
memset(&obj_array_type_246, 0, sizeof(struct sType*));
right_value212 = (void*)0;
right_value213 = (void*)0;
memset(&buf_247, 0, sizeof(struct buffer*));
memset(&i_248, 0, sizeof(int));
memset(&o2_saved_249, 0, sizeof(struct list$1sNodeph*));
memset(&it_252, 0, sizeof(struct sNode*));
right_value214 = (void*)0;
memset(&come_value_255, 0, sizeof(struct CVALUE*));
right_value215 = (void*)0;
right_value216 = (void*)0;
memset(&come_value_256, 0, sizeof(struct CVALUE*));
right_value217 = (void*)0;
right_value218 = (void*)0;
right_value219 = (void*)0;
right_value223 = (void*)0;
right_value224 = (void*)0;
right_value225 = (void*)0;
right_value226 = (void*)0;
memset(&default_param_260, 0, sizeof(char*));
memset(&param_name_261, 0, sizeof(char*));
memset(&come_value_265, 0, sizeof(struct CVALUE*));
memset(&source_266, 0, sizeof(struct buffer*));
memset(&p_267, 0, sizeof(char*));
memset(&head_268, 0, sizeof(char*));
memset(&sline_269, 0, sizeof(int));
right_value227 = (void*)0;
right_value228 = (void*)0;
memset(&node_270, 0, sizeof(struct sNode*));
right_value229 = (void*)0;
memset(&come_value_271, 0, sizeof(struct CVALUE*));
right_value230 = (void*)0;
right_value231 = (void*)0;
right_value232 = (void*)0;
memset(&param_name_272, 0, sizeof(char*));
memset(&come_value_273, 0, sizeof(struct CVALUE*));
right_value236 = (void*)0;
right_value237 = (void*)0;
right_value238 = (void*)0;
right_value241 = (void*)0;
memset(&current_stack_frame_node_278, 0, sizeof(struct sNode*));
right_value242 = (void*)0;
memset(&come_value_279, 0, sizeof(struct CVALUE*));
right_value243 = (void*)0;
right_value244 = (void*)0;
memset(&method_block2_280, 0, sizeof(struct buffer*));
right_value245 = (void*)0;
memset(&method_block_type_281, 0, sizeof(struct sType*));
right_value246 = (void*)0;
memset(&class_name_282, 0, sizeof(char*));
memset(&current_stack_frame_struct_286, 0, sizeof(struct sClass*));
right_value247 = (void*)0;
memset(&result_type_287, 0, sizeof(struct sType*));
memset(&param_types_288, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_289, 0, sizeof(struct list$1charph*));
right_value248 = (void*)0;
right_value249 = (void*)0;
memset(&all_alhabet_sname_290, 0, sizeof(struct buffer*));
memset(&p_291, 0, sizeof(char*));
right_value250 = (void*)0;
right_value251 = (void*)0;
right_value252 = (void*)0;
memset(&i_292, 0, sizeof(int));
memset(&o2_saved_293, 0, sizeof(struct list$1sTypeph*));
memset(&it_294, 0, sizeof(struct sType*));
memset(&param_type_295, 0, sizeof(struct sType*));
right_value253 = (void*)0;
memset(&param_name_296, 0, sizeof(char*));
right_value254 = (void*)0;
right_value255 = (void*)0;
right_value256 = (void*)0;
memset(&param_name_297, 0, sizeof(char*));
right_value257 = (void*)0;
right_value258 = (void*)0;
right_value259 = (void*)0;
memset(&param_name_298, 0, sizeof(char*));
right_value260 = (void*)0;
right_value261 = (void*)0;
right_value262 = (void*)0;
memset(&source3_299, 0, sizeof(struct buffer*));
memset(&p_300, 0, sizeof(char*));
memset(&head_301, 0, sizeof(char*));
memset(&sline_302, 0, sizeof(int));
right_value263 = (void*)0;
memset(&node_303, 0, sizeof(struct sNode*));
right_value264 = (void*)0;
right_value265 = (void*)0;
memset(&method_block_name_304, 0, sizeof(char*));
right_value266 = (void*)0;
memset(&come_value2_305, 0, sizeof(struct CVALUE*));
memset(&fun2_306, 0, sizeof(struct sFun*));
memset(&method_block_type2_307, 0, sizeof(struct sType*));
right_value267 = (void*)0;
right_value268 = (void*)0;
right_value269 = (void*)0;
right_value270 = (void*)0;
memset(&buf_308, 0, sizeof(struct buffer*));
memset(&j_309, 0, sizeof(int));
memset(&o2_saved_310, 0, sizeof(struct list$1CVALUEph*));
memset(&it_311, 0, sizeof(struct CVALUE*));
right_value271 = (void*)0;
memset(&come_value2_312, 0, sizeof(struct CVALUE*));
right_value272 = (void*)0;
right_value273 = (void*)0;
right_value274 = (void*)0;
right_value275 = (void*)0;
right_value276 = (void*)0;
memset(&var_name_313, 0, sizeof(char*));
right_value277 = (void*)0;
memset(&result_type_314, 0, sizeof(struct sType*));
right_value278 = (void*)0;
memset(&result_type2_315, 0, sizeof(struct sType*));
memset(&result_type3_316, 0, sizeof(struct sType*));
right_value279 = (void*)0;
right_value280 = (void*)0;
right_value281 = (void*)0;
right_value282 = (void*)0;
right_value283 = (void*)0;
right_value284 = (void*)0;
right_value285 = (void*)0;
right_value286 = (void*)0;
right_value287 = (void*)0;
right_value288 = (void*)0;
right_value289 = (void*)0;
right_value290 = (void*)0;
right_value291 = (void*)0;
right_value292 = (void*)0;
right_value293 = (void*)0;
right_value294 = (void*)0;
right_value295 = (void*)0;
right_value296 = (void*)0;
    fun_name_130=self->fun_name;
    params_131=self->params;
    obj_132=self->obj;
    method_block_133=self->method_block;
    method_block_sline_134=self->method_block_sline;
    method_generics_types_135=(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types);
    __dec_obj59=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value144=list$1sTypephp_clone(self->method_generics_types))));
    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional224=!node_compile(obj_132,info),    _if_conditional224) {
        __result106__ = (_Bool)0;
        come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result106__;
    }
    obj_value_136=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value145=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    obj_type_137=(struct sType*)come_increment_ref_count(((struct sType*)(right_value146=sType_clone(obj_value_136->type))));
    come_call_finalizer2(sType_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    klass_138=obj_type_137->mClass;
    calling_dynamic_method_139=(_Bool)0;
    lambda_type_140=((void*)0);
    for(    o2_saved_141=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_138->mFields)),it_144=list$1tuple2$2charphsTypephph_begin((o2_saved_141));    !list$1tuple2$2charphsTypephph_end((o2_saved_141));    it_144=list$1tuple2$2charphsTypephph_next((o2_saved_141))    ){
        multiple_assign_var1=it_144;
        field_name_147=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        field_type_148=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        if(_if_conditional229=string_operator_equals(field_name_147,fun_name_130)&&string_operator_equals(field_type_148->mClass->mName,"lambda"),        _if_conditional229) {
            calling_dynamic_method_139=(_Bool)1;
            lambda_type_140=field_type_148;
            field_name_147 = come_decrement_ref_count2(field_name_147, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type_148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            break;
        }
        field_name_147 = come_decrement_ref_count2(field_name_147, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,field_type_148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(calling_dynamic_method_139) {
        result_type_149=(struct sType*)come_increment_ref_count(((struct sType*)(right_value147=sType_clone(lambda_type_140->mResultType->v1))));
        come_call_finalizer2(sType_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_149->mStatic=(_Bool)0;
        come_params_152=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value149=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value148=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 265, "list$1CVALUEph"))))))));
        come_call_finalizer2(list$1CVALUEphp_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1CVALUEphp_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        i_153=0;
        for(        o2_saved_154=(params_131),it_157=list$1tuple2$2charphsNodephph_begin((o2_saved_154));        !list$1tuple2$2charphsNodephph_end((o2_saved_154));        it_157=list$1tuple2$2charphsNodephph_next((o2_saved_154))        ){
            multiple_assign_var2=it_157;
            label_160=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            node_161=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
            if(_if_conditional235=i_153==0,            _if_conditional235) {
                list$1CVALUEph_push_back(come_params_152,(struct CVALUE*)come_increment_ref_count(obj_value_136));
                i_153++;
            }
            else {
                if(_if_conditional236=!node_compile(node_161,info),                _if_conditional236) {
                    __result122__ = (_Bool)0;
                    label_160 = come_decrement_ref_count2(label_160, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_161) { node_161 = come_decrement_ref_count2(node_161, ((struct sNode*)node_161)->finalize, ((struct sNode*)node_161)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sType_finalize,result_type_149, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1CVALUEphp_finalize,come_params_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,obj_value_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,obj_type_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result122__;
                }
                come_value_162=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value150=get_value_from_stack(-1,info))));
                come_call_finalizer2(CVALUE_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                check_assign_type(((char*)(right_value153=xsprintf("\%s param num \%s is assinged to",((char*)(right_value151=charp_to_string(fun_name_130))),((char*)(right_value152=int_to_string(i_153)))))),list$1sTypephp_operator_load_element(lambda_type_140->mParamTypes,i_153-1),come_value_162->type,come_value_162,(_Bool)0,(_Bool)1,info);
                right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional239=list$1sTypephp_operator_load_element(lambda_type_140->mParamTypes,i_153-1)->mHeap&&come_value_162->type->mHeap,                _if_conditional239) {
                    std_move(list$1sTypephp_operator_load_element(lambda_type_140->mParamTypes,i_153-1),come_value_162->type,come_value_162,info);
                }
                list$1CVALUEph_push_back(come_params_152,(struct CVALUE*)come_increment_ref_count(come_value_162));
                i_153++;
                dec_stack_ptr(1,info);
                come_call_finalizer2(CVALUE_finalize,come_value_162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            label_160 = come_decrement_ref_count2(label_160, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_161) { node_161 = come_decrement_ref_count2(node_161, ((struct sNode*)node_161)->finalize, ((struct sNode*)node_161)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        buf_166=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value155=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value154=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 295, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_166,((char*)(right_value156=xsprintf("%s->%s",obj_value_136->c_value,fun_name_130))));
        right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_166,"(");
        j_167=0;
        for(        o2_saved_168=(struct list$1CVALUEph*)come_increment_ref_count((come_params_152)),it_171=list$1CVALUEph_begin((o2_saved_168));        !list$1CVALUEph_end((o2_saved_168));        it_171=list$1CVALUEph_next((o2_saved_168))        ){
            if(_if_conditional244=j_167==0,            _if_conditional244) {
                __dec_obj60=it_171->c_value;
                it_171->c_value=(char*)come_increment_ref_count(((char*)(right_value157=xsprintf("%s->_protocol_obj",it_171->c_value))));
                __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            buffer_append_str(buf_166,it_171->c_value);
            if(_if_conditional245=j_167!=list$1CVALUEph_length(come_params_152)-1,            _if_conditional245) {
                buffer_append_str(buf_166,",");
            }
            j_167++;
        }
        come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_166,")");
        come_value2_174=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value158=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 315, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj61=come_value2_174->c_value;
        come_value2_174->c_value=(char*)come_increment_ref_count(((char*)(right_value159=buffer_to_string(buf_166))));
        __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type2_175=(struct sType*)come_increment_ref_count(((struct sType*)(right_value160=solve_generics(result_type_149,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(result_type2_175->mHeap) {
            __dec_obj62=come_value2_174->c_value;
            come_value2_174->c_value=(char*)come_increment_ref_count(((char*)(right_value162=append_object_to_right_values(((char*)(right_value161=buffer_to_string(buf_166))),(struct sType*)come_increment_ref_count(result_type2_175),info))));
            __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __dec_obj63=come_value2_174->type;
        come_value2_174->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value163=sType_clone(result_type2_175))));
        come_call_finalizer2(sType_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value2_174->type->mStatic=(_Bool)0;
        come_value2_174->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value2_174->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_174));
        come_call_finalizer2(sType_finalize,result_type_149, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1CVALUEphp_finalize,come_params_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,buf_166, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,come_value2_174, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type2_175, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        generics_fun_name_176=(char*)come_increment_ref_count(((char*)(right_value166=string_to_string(((char*)(right_value165=make_generics_function(obj_type_137,(char*)come_increment_ref_count(((char*)(right_value164=__builtin_string(fun_name_130)))),info,(_Bool)1)))))));
        right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_177=((void*)0);
        for(        i_178=128;        i_178>=1;        i_178--        ){
            new_fun_name_179=(char*)come_increment_ref_count(((char*)(right_value167=xsprintf("%s_v%d",generics_fun_name_176,i_178))));
            right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            fun_177=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_179);
            if(_if_conditional266=fun_177!=((void*)0),            _if_conditional266) {
                __dec_obj64=generics_fun_name_176;
                generics_fun_name_176=(char*)come_increment_ref_count(((char*)(right_value168=__builtin_string(new_fun_name_179))));
                __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                new_fun_name_179 = come_decrement_ref_count2(new_fun_name_179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_179 = come_decrement_ref_count2(new_fun_name_179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional267=fun_177==((void*)0),        _if_conditional267) {
            obj_array_type_183=obj_type_137->mOriginalLoadVarType->v1;
            if(_if_conditional268=obj_array_type_183&&list$1sNodeph_length(obj_array_type_183->mArrayNum)>0,            _if_conditional268) {
                array_method_name_184=(char*)come_increment_ref_count(((char*)(right_value169=create_method_name(obj_array_type_183,(_Bool)0,fun_name_130,info,(_Bool)0))));
                right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                fun_177=map$2charphsFunph_at(info->funcs,array_method_name_184,((void*)0));
                if(fun_177) {
                    __dec_obj65=generics_fun_name_176;
                    generics_fun_name_176=(char*)come_increment_ref_count(((char*)(right_value170=__builtin_string(array_method_name_184))));
                    __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    generics_fun_name_187=(char*)come_increment_ref_count(((char*)(right_value173=string_to_string(((char*)(right_value172=make_generics_function(obj_array_type_183,(char*)come_increment_ref_count(((char*)(right_value171=__builtin_string(fun_name_130)))),info,(_Bool)0)))))));
                    right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    fun_188=((void*)0);
                    for(                    i_189=128;                    i_189>=1;                    i_189--                    ){
                        new_fun_name_190=(char*)come_increment_ref_count(((char*)(right_value174=xsprintf("%s_v%d",generics_fun_name_187,i_189))));
                        right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        fun_188=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_190);
                        if(_if_conditional274=fun_188!=((void*)0),                        _if_conditional274) {
                            __dec_obj66=generics_fun_name_187;
                            generics_fun_name_187=(char*)come_increment_ref_count(((char*)(right_value175=__builtin_string(new_fun_name_190))));
                            __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            new_fun_name_190 = come_decrement_ref_count2(new_fun_name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        new_fun_name_190 = come_decrement_ref_count2(new_fun_name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    fun_188=map$2charphsFunph_at(info->funcs,generics_fun_name_187,((void*)0));
                    if(_if_conditional275=fun_188==((void*)0),                    _if_conditional275) {
                        __dec_obj67=generics_fun_name_187;
                        generics_fun_name_187=(char*)come_increment_ref_count(((char*)(right_value177=create_method_name(obj_type_137,(_Bool)0,((char*)(right_value176=__builtin_string(fun_name_130))),info,(_Bool)1))));
                        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        fun_188=map$2charphsFunph_at(info->funcs,generics_fun_name_187,((void*)0));
                        if(_if_conditional276=fun_188==((void*)0),                        _if_conditional276) {
                            err_msg(info,"function not found(%s) at method(%s)(Z)\n",generics_fun_name_187,info->come_fun->mName);
                            __result141__ = (_Bool)1;
                            generics_fun_name_187 = come_decrement_ref_count2(generics_fun_name_187, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            array_method_name_184 = come_decrement_ref_count2(array_method_name_184, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            generics_fun_name_176 = come_decrement_ref_count2(generics_fun_name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(CVALUE_finalize,obj_value_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,obj_type_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result141__;
                        }
                    }
                    generics_fun_name_187 = come_decrement_ref_count2(generics_fun_name_187, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                array_method_name_184 = come_decrement_ref_count2(array_method_name_184, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                fun_177=map$2charphsFunph_at(info->funcs,generics_fun_name_176,((void*)0));
                if(_if_conditional277=fun_177==((void*)0),                _if_conditional277) {
                    __dec_obj68=generics_fun_name_176;
                    generics_fun_name_176=(char*)come_increment_ref_count(((char*)(right_value179=create_method_name(obj_type_137,(_Bool)0,((char*)(right_value178=__builtin_string(fun_name_130))),info,(_Bool)1))));
                    __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    fun_177=map$2charphsFunph_at(info->funcs,generics_fun_name_176,((void*)0));
                    if(_if_conditional278=fun_177==((void*)0),                    _if_conditional278) {
                        err_msg(info,"function not found(%s) at method(%s)(Z)\n",generics_fun_name_176,info->come_fun->mName);
                        __result142__ = (_Bool)1;
                        generics_fun_name_176 = come_decrement_ref_count2(generics_fun_name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(CVALUE_finalize,obj_value_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,obj_type_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result142__;
                    }
                }
            }
        }
        if(_if_conditional279=list$1sTypeph_length(fun_177->mParamTypes)==0,        _if_conditional279) {
            err_msg(info,"Method require function parametor");
            __result144__ = (_Bool)1;
            generics_fun_name_176 = come_decrement_ref_count2(generics_fun_name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,obj_value_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,obj_type_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result144__;
        }
        result_type_191=(struct sType*)come_increment_ref_count(((struct sType*)(right_value180=sType_clone(fun_177->mResultType))));
        come_call_finalizer2(sType_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_191->mStatic=(_Bool)0;
        result_type2_192=(struct sType*)come_increment_ref_count(((struct sType*)(right_value181=solve_generics(result_type_191,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_types_193=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value183=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value182=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "20method.c", 416, "list$1sTypeph"))))))));
        come_call_finalizer2(list$1sTypephp_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_194=(struct list$1sTypeph*)come_increment_ref_count((fun_177->mParamTypes)),it_197=list$1sTypeph_begin((o2_saved_194));        !list$1sTypeph_end((o2_saved_194));        it_197=list$1sTypeph_next((o2_saved_194))        ){
            if(_if_conditional284=it_197==((void*)0),            _if_conditional284) {
                list$1sTypeph_push_back(param_types_193,it_197);
            }
            else {
                it2_203=(struct sType*)come_increment_ref_count(((struct sType*)(right_value187=solve_generics(it_197,info->generics_type,info))));
                come_call_finalizer2(sType_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                list$1sTypeph_push_back(param_types_193,(struct sType*)come_increment_ref_count(((struct sType*)(right_value188=sType_clone(it2_203)))));
                come_call_finalizer2(sType_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,it2_203, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_params_204=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value190=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value189=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 428, "list$1CVALUEph"))))))));
        come_call_finalizer2(list$1CVALUEphp_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1CVALUEphp_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        label_params_208=(struct map$2charphCVALUEph*)come_increment_ref_count(((struct map$2charphCVALUEph*)(right_value197=map$2charphCVALUEph_initialize((struct map$2charphCVALUEph*)come_increment_ref_count(((struct map$2charphCVALUEph*)(right_value191=(struct map$2charphCVALUEph*)come_calloc(1, sizeof(struct map$2charphCVALUEph)*(1), "20method.c", 430, "map$2charphCVALUEph"))))))));
        come_call_finalizer2(map$2charphCVALUEphp_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(map$2charphCVALUEphp_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        i_209=0;
        for(        o2_saved_210=(params_131),it_211=list$1tuple2$2charphsNodephph_begin((o2_saved_210));        !list$1tuple2$2charphsNodephph_end((o2_saved_210));        it_211=list$1tuple2$2charphsNodephph_next((o2_saved_210))        ){
            multiple_assign_var3=it_211;
            label_212=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            node_213=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
            if(_if_conditional291=i_209==0,            _if_conditional291) {
                check_assign_type(((char*)(right_value200=xsprintf("\%s param num \%s is assinged to",((char*)(right_value198=charp_to_string(fun_name_130))),((char*)(right_value199=int_to_string(i_209)))))),list$1sTypephp_operator_load_element(param_types_193,i_209),obj_value_136->type,obj_value_136,(_Bool)0,(_Bool)1,info);
                right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional292=list$1sTypephp_operator_load_element(param_types_193,i_209)->mHeap&&obj_value_136->type->mHeap,                _if_conditional292) {
                    std_move(list$1sTypephp_operator_load_element(param_types_193,i_209),obj_value_136->type,obj_value_136,info);
                }
                else {
                    if(_if_conditional293=list$1sTypephp_operator_load_element(param_types_193,i_209)->mHeap&&!obj_value_136->type->mHeap&&!gComeGC,                    _if_conditional293) {
                        err_msg(info,"require heap parametor(%s)",list$1charphp_operator_load_element(fun_177->mParamNames,i_209));
                        exit(2);
                    }
                }
                list$1CVALUEph_push_back(come_params_204,(struct CVALUE*)come_increment_ref_count(obj_value_136));
                i_209++;
            }
            else {
                if(_if_conditional296=!node_compile(node_213,info),                _if_conditional296) {
                    __result157__ = (_Bool)0;
                    label_212 = come_decrement_ref_count2(label_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_213) { node_213 = come_decrement_ref_count2(node_213, ((struct sNode*)node_213)->finalize, ((struct sNode*)node_213)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    generics_fun_name_176 = come_decrement_ref_count2(generics_fun_name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,result_type_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,result_type2_192, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,param_types_193, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1CVALUEphp_finalize,come_params_204, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_208, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,obj_value_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,obj_type_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result157__;
                }
                come_value_217=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value201=get_value_from_stack(-1,info))));
                come_call_finalizer2(CVALUE_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional297=label_212!=((void*)0),                _if_conditional297) {
                    n_218=0;
                    for(                    o2_saved_219=(struct list$1charph*)come_increment_ref_count((fun_177->mParamNames)),it_222=list$1charph_begin((o2_saved_219));                    !list$1charph_end((o2_saved_219));                    it_222=list$1charph_next((o2_saved_219))                    ){
                        if(_if_conditional302=string_operator_equals(label_212,it_222),                        _if_conditional302) {
                            break;
                        }
                        n_218++;
                    }
                    come_call_finalizer2(list$1charphp_finalize,o2_saved_219, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    if(_if_conditional303=list$1sTypephp_operator_load_element(param_types_193,n_218),                    _if_conditional303) {
                        check_assign_type(((char*)(right_value204=xsprintf("\%s param num \%s is assinged to",((char*)(right_value202=charp_to_string(fun_name_130))),((char*)(right_value203=int_to_string(i_209)))))),list$1sTypephp_operator_load_element(param_types_193,n_218),come_value_217->type,come_value_217,(_Bool)0,(_Bool)1,info);
                        right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional304=list$1sTypephp_operator_load_element(param_types_193,n_218)&&list$1sTypephp_operator_load_element(param_types_193,n_218)->mHeap&&come_value_217->type->mHeap,                    _if_conditional304) {
                        std_move(list$1sTypephp_operator_load_element(param_types_193,n_218),come_value_217->type,come_value_217,info);
                    }
                }
                else {
                    if(_if_conditional305=list$1sTypephp_operator_load_element(param_types_193,i_209),                    _if_conditional305) {
                        check_assign_type(((char*)(right_value207=xsprintf("\%s param num \%s is assinged to",((char*)(right_value205=charp_to_string(fun_name_130))),((char*)(right_value206=int_to_string(i_209)))))),list$1sTypephp_operator_load_element(param_types_193,i_209),come_value_217->type,come_value_217,(_Bool)0,(_Bool)1,info);
                        right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional306=list$1sTypephp_operator_load_element(param_types_193,i_209)&&list$1sTypephp_operator_load_element(param_types_193,i_209)->mHeap&&come_value_217->type->mHeap,                    _if_conditional306) {
                        std_move(list$1sTypephp_operator_load_element(param_types_193,i_209),come_value_217->type,come_value_217,info);
                    }
                }
                if(_if_conditional307=label_212==((void*)0),                _if_conditional307) {
                    list$1CVALUEph_push_back(come_params_204,(struct CVALUE*)come_increment_ref_count(come_value_217));
                    i_209++;
                }
                else {
                    map$2charphCVALUEph_insert(label_params_208,(char*)come_increment_ref_count(((char*)(right_value211=__builtin_string(label_212)))),(struct CVALUE*)come_increment_ref_count(come_value_217));
                    right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                dec_stack_ptr(1,info);
                come_call_finalizer2(CVALUE_finalize,come_value_217, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            label_212 = come_decrement_ref_count2(label_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_213) { node_213 = come_decrement_ref_count2(node_213, ((struct sNode*)node_213)->finalize, ((struct sNode*)node_213)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        obj_array_type_246=obj_type_137->mOriginalLoadVarType->v1;
        if(_if_conditional330=obj_array_type_246&&list$1sNodeph_length(obj_array_type_246->mArrayNum)>0,        _if_conditional330) {
            if(_if_conditional331=charp_operator_equals(fun_name_130,"to_pointer"),            _if_conditional331) {
                buf_247=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value213=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value212=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 497, "buffer"))))))));
                come_call_finalizer2(buffer_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(buffer_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                i_248=0;
                for(                o2_saved_249=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_246->mArrayNum)),it_252=list$1sNodeph_begin((o2_saved_249));                !list$1sNodeph_end((o2_saved_249));                it_252=list$1sNodeph_next((o2_saved_249))                ){
                    if(_if_conditional336=!node_compile(it_252,info),                    _if_conditional336) {
                        err_msg(info,"invalid array num");
                        exit(1);
                    }
                    come_value_255=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value214=get_value_from_stack(-1,info))));
                    come_call_finalizer2(CVALUE_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    dec_stack_ptr(1,info);
                    buffer_append_str(buf_247,((char*)(right_value215=xsprintf("%s",come_value_255->c_value))));
                    right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(_if_conditional337=i_248!=list$1sNodeph_length(obj_array_type_246->mArrayNum)-1,                    _if_conditional337) {
                        buffer_append_str(buf_247,"*");
                    }
                    i_248++;
                    come_call_finalizer2(CVALUE_finalize,come_value_255, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer2(list$1sNodephp_finalize,o2_saved_249, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_value_256=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value216=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 516, "CVALUE"))));
                come_call_finalizer2(CVALUE_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                __dec_obj73=come_value_256->c_value;
                come_value_256->c_value=(char*)come_increment_ref_count(((char*)(right_value217=buffer_to_string(buf_247))));
                __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_value_256->var=((void*)0);
                __dec_obj74=come_value_256->type;
                come_value_256->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value219=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value218=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 520, "sType")))),"long",(_Bool)0,info))));
                come_call_finalizer2(sType_finalize,__dec_obj74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                list$1CVALUEph_push_back(come_params_204,(struct CVALUE*)come_increment_ref_count(come_value_256));
                list$1tuple2$2charphsNodephph_push_back(params_131,(struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value225=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value224=(struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 523, "struct tuple2$2charphvoidp")))),(char*)come_increment_ref_count(((char*)(right_value223=xsprintf("len")))),((void*)0))))));
                right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple2$2charphvoidpp_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(buffer_finalize,buf_247, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,come_value_256, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
        if(_if_conditional341=list$1tuple2$2charphsNodephph_length(params_131)<list$1sTypeph_length(fun_177->mParamTypes)+(method_block_133?-2:0),        _if_conditional341) {
            for(            ;            i_209<list$1sTypeph_length(fun_177->mParamTypes)+(method_block_133?-2:0);            i_209++            ){
                default_param_260=(char*)come_increment_ref_count(((char*)(right_value226=string_clone(list$1charphp_operator_load_element(fun_177->mParamDefaultParametors,i_209)))));
                right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                param_name_261=list$1charphp_operator_load_element(fun_177->mParamNames,i_209);
                come_value_265=map$2charphCVALUEphp_operator_load_element(label_params_208,param_name_261);
                if(_if_conditional346=default_param_260&&string_operator_not_equals(default_param_260,""),                _if_conditional346) {
                    source_266=(struct buffer*)come_increment_ref_count(info->source);
                    p_267=info->p;
                    head_268=info->head;
                    sline_269=info->sline;
                    __dec_obj79=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value227=string_to_buffer(default_param_260))));
                    come_call_finalizer2(buffer_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(buffer_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    info->p=info->source->buf;
                    info->head=info->source->buf;
                    node_270=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value228=expression_v13(info))));
                    if(right_value228) { right_value228 = come_decrement_ref_count2(right_value228, ((struct sNode*)right_value228)->finalize, ((struct sNode*)right_value228)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    if(_if_conditional347=!node_compile(node_270,info),                    _if_conditional347) {
                        __result191__ = (_Bool)0;
                        come_call_finalizer2(buffer_finalize,source_266, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        if(node_270) { node_270 = come_decrement_ref_count2(node_270, ((struct sNode*)node_270)->finalize, ((struct sNode*)node_270)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        default_param_260 = come_decrement_ref_count2(default_param_260, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        generics_fun_name_176 = come_decrement_ref_count2(generics_fun_name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type2_192, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,param_types_193, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1CVALUEphp_finalize,come_params_204, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_208, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(CVALUE_finalize,obj_value_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,obj_type_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result191__;
                    }
                    __dec_obj80=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(source_266);
                    come_call_finalizer2(buffer_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    info->p=p_267;
                    info->head=head_268;
                    info->sline=sline_269;
                    come_value_271=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value229=get_value_from_stack(-1,info))));
                    come_call_finalizer2(CVALUE_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional348=list$1sTypephp_operator_load_element(param_types_193,i_209),                    _if_conditional348) {
                        check_assign_type(((char*)(right_value232=xsprintf("\%s param num \%s is assinged to",((char*)(right_value230=charp_to_string(fun_name_130))),((char*)(right_value231=int_to_string(i_209)))))),list$1sTypephp_operator_load_element(param_types_193,i_209),come_value_271->type,come_value_271,(_Bool)0,(_Bool)1,info);
                        right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional349=list$1sTypephp_operator_load_element(param_types_193,i_209)&&list$1sTypephp_operator_load_element(param_types_193,i_209)->mHeap&&come_value_271->type->mHeap,                    _if_conditional349) {
                        std_move(list$1sTypephp_operator_load_element(param_types_193,i_209),come_value_271->type,come_value_271,info);
                    }
                    list$1CVALUEph_push_back(come_params_204,(struct CVALUE*)come_increment_ref_count(come_value_271));
                    dec_stack_ptr(1,info);
                    come_call_finalizer2(buffer_finalize,source_266, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    if(node_270) { node_270 = come_decrement_ref_count2(node_270, ((struct sNode*)node_270)->finalize, ((struct sNode*)node_270)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(CVALUE_finalize,come_value_271, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(come_value_265) {
                        list$1CVALUEph_push_back(come_params_204,((void*)0));
                    }
                    else {
                        err_msg(info,"require parametor(%s)",fun_177->mName);
                        __result192__ = (_Bool)0;
                        default_param_260 = come_decrement_ref_count2(default_param_260, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        generics_fun_name_176 = come_decrement_ref_count2(generics_fun_name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type2_192, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,param_types_193, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1CVALUEphp_finalize,come_params_204, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_208, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(CVALUE_finalize,obj_value_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,obj_type_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result192__;
                    }
                }
                default_param_260 = come_decrement_ref_count2(default_param_260, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        if(_if_conditional351=map$2charphCVALUEph_length(label_params_208)>0,        _if_conditional351) {
            for(            i_209=0;            i_209<list$1charph_length(fun_177->mParamNames)+(method_block_133?-2:0);            i_209++            ){
                param_name_272=list$1charphp_operator_load_element(fun_177->mParamNames,i_209);
                come_value_273=map$2charphCVALUEphp_operator_load_element(label_params_208,param_name_272);
                if(come_value_273) {
                    list$1CVALUEph_replace(come_params_204,i_209,(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value236=CVALUE_clone(come_value_273)))));
                    come_call_finalizer2(CVALUE_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
            }
        }
        if(method_block_133) {
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 594, "struct sNode");
            _inf_obj_value1=come_increment_ref_count(((struct sCurrentNode*)(right_value238=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value237=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 594, "sCurrentNode")))),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sCurrentNode_finalize;
            _inf_value1->clone=(void*)sCurrentNode_clone;
            _inf_value1->compile=(void*)sCurrentNode_compile;
            _inf_value1->sline=(void*)sCurrentNode_sline;
            _inf_value1->sname=(void*)sCurrentNode_sname;
            _inf_value1->terminated=(void*)sCurrentNode_terminated;
            _inf_value1->kind=(void*)sCurrentNode_kind;
            current_stack_frame_node_278=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value241=_inf_value1)));
            come_call_finalizer2(sCurrentNode_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sCurrentNode_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value241) { right_value241 = come_decrement_ref_count2(right_value241, ((struct sNode*)right_value241)->finalize, ((struct sNode*)right_value241)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            if(_if_conditional365=!node_compile(current_stack_frame_node_278,info),            _if_conditional365) {
                __result201__ = (_Bool)0;
                if(current_stack_frame_node_278) { current_stack_frame_node_278 = come_decrement_ref_count2(current_stack_frame_node_278, ((struct sNode*)current_stack_frame_node_278)->finalize, ((struct sNode*)current_stack_frame_node_278)->_protocol_obj, 0, 0, 0, (void*)0); } 
                generics_fun_name_176 = come_decrement_ref_count2(generics_fun_name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type2_192, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_193, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,come_params_204, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_208, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,obj_value_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result201__;
            }
            come_value_279=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value242=get_value_from_stack(-1,info))));
            come_call_finalizer2(CVALUE_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            list$1CVALUEph_push_back(come_params_204,(struct CVALUE*)come_increment_ref_count(come_value_279));
            dec_stack_ptr(1,info);
            method_block2_280=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value244=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value243=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 604, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            method_block_type_281=(struct sType*)come_increment_ref_count(((struct sType*)(right_value245=sType_clone(list$1sTypephp_operator_load_element(fun_177->mParamTypes,-1)))));
            come_call_finalizer2(sType_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            class_name_282=(char*)come_increment_ref_count(((char*)(right_value246=xsprintf("__current_stack%d__",info->current_stack_num))));
            right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            list$1sTypephp_operator_load_element(method_block_type_281->mParamTypes,0)->mClass=map$2charphsClassphp_operator_load_element(info->classes,class_name_282);
            current_stack_frame_struct_286=info->current_stack_frame_struct;
            info->current_stack_frame_struct=map$2charphsClassphp_operator_load_element(info->classes,class_name_282);
            info->num_method_block++;
            if(_if_conditional370=string_operator_not_equals(method_block_type_281->mClass->mName,"lambda"),            _if_conditional370) {
                err_msg(info,"This function does not have method block(%s)",fun_name_130);
                __result206__ = (_Bool)0;
                if(current_stack_frame_node_278) { current_stack_frame_node_278 = come_decrement_ref_count2(current_stack_frame_node_278, ((struct sNode*)current_stack_frame_node_278)->finalize, ((struct sNode*)current_stack_frame_node_278)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(CVALUE_finalize,come_value_279, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,method_block2_280, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,method_block_type_281, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                class_name_282 = come_decrement_ref_count2(class_name_282, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                generics_fun_name_176 = come_decrement_ref_count2(generics_fun_name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type2_192, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_193, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,come_params_204, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_208, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,obj_value_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result206__;
            }
            result_type_287=(struct sType*)come_increment_ref_count(((struct sType*)(right_value247=sType_clone(method_block_type_281->mResultType->v1))));
            come_call_finalizer2(sType_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            result_type_287->mStatic=(_Bool)0;
            param_types_288=method_block_type_281->mParamTypes;
            param_names_289=method_block_type_281->mParamNames;
            all_alhabet_sname_290=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value249=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value248=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 625, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            {
                p_291=info->sname;
                while(_while_condtional33=*p_291,                _while_condtional33) {
                    if(_if_conditional371=xisalnum(*p_291),                    _if_conditional371) {
                        buffer_append_char(all_alhabet_sname_290,*p_291++);
                    }
                    else {
                        p_291++;
                    }
                }
            }
            buffer_append_str(method_block2_280,((char*)(right_value252=xsprintf("%s method_block%d_%s(",((char*)(right_value250=make_type_name_string(result_type_287,(_Bool)0,(_Bool)0,(_Bool)0,info))),info->num_method_block,((char*)(right_value251=buffer_to_string(all_alhabet_sname_290)))))));
            right_value250 = come_decrement_ref_count2(right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value252 = come_decrement_ref_count2(right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            i_292=0;
            for(            o2_saved_293=(param_types_288),it_294=list$1sTypeph_begin((o2_saved_293));            !list$1sTypeph_end((o2_saved_293));            it_294=list$1sTypeph_next((o2_saved_293))            ){
                param_type_295=it_294;
                if(_if_conditional372=i_292==0,                _if_conditional372) {
                    param_name_296=(char*)come_increment_ref_count(((char*)(right_value253=xsprintf("parent"))));
                    right_value253 = come_decrement_ref_count2(right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    buffer_append_str(method_block2_280,((char*)(right_value255=xsprintf("%s",((char*)(right_value254=make_define_var(param_type_295,param_name_296,(_Bool)0,info)))))));
                    right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    param_name_296 = come_decrement_ref_count2(param_name_296, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(_if_conditional373=i_292==1,                    _if_conditional373) {
                        param_name_297=(char*)come_increment_ref_count(((char*)(right_value256=xsprintf("it"))));
                        right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        buffer_append_str(method_block2_280,((char*)(right_value258=xsprintf("%s",((char*)(right_value257=make_define_var(param_type_295,param_name_297,(_Bool)0,info)))))));
                        right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        param_name_297 = come_decrement_ref_count2(param_name_297, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        param_name_298=(char*)come_increment_ref_count(((char*)(right_value259=xsprintf("it%d",i_292))));
                        right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        buffer_append_str(method_block2_280,((char*)(right_value261=xsprintf("%s",((char*)(right_value260=make_define_var(param_type_295,param_name_298,(_Bool)0,info)))))));
                        right_value260 = come_decrement_ref_count2(right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        param_name_298 = come_decrement_ref_count2(param_name_298, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                if(_if_conditional374=i_292!=list$1sTypeph_length(param_types_288)-1,                _if_conditional374) {
                    buffer_append_str(method_block2_280,",");
                }
                i_292++;
            }
            buffer_append_str(method_block2_280,")\n");
            buffer_append_str(method_block2_280,((char*)(right_value262=buffer_to_string(method_block_133))));
            right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            source3_299=(struct buffer*)come_increment_ref_count(info->source);
            p_300=info->p;
            head_301=info->head;
            sline_302=info->sline;
            __dec_obj85=info->source;
            info->source=(struct buffer*)come_increment_ref_count(method_block2_280);
            come_call_finalizer2(buffer_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            info->p=info->source->buf;
            info->head=info->source->buf;
            info->sline=method_block_sline_134;
            node_303=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value263=parse_function(info))));
            if(right_value263) { right_value263 = come_decrement_ref_count2(right_value263, ((struct sNode*)right_value263)->finalize, ((struct sNode*)right_value263)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            if(_if_conditional375=!node_compile(node_303,info),            _if_conditional375) {
                __result207__ = (_Bool)0;
                if(current_stack_frame_node_278) { current_stack_frame_node_278 = come_decrement_ref_count2(current_stack_frame_node_278, ((struct sNode*)current_stack_frame_node_278)->finalize, ((struct sNode*)current_stack_frame_node_278)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(CVALUE_finalize,come_value_279, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,method_block2_280, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,method_block_type_281, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                class_name_282 = come_decrement_ref_count2(class_name_282, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_287, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,all_alhabet_sname_290, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,source3_299, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                if(node_303) { node_303 = come_decrement_ref_count2(node_303, ((struct sNode*)node_303)->finalize, ((struct sNode*)node_303)->_protocol_obj, 0, 0, 0, (void*)0); } 
                generics_fun_name_176 = come_decrement_ref_count2(generics_fun_name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type2_192, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_193, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,come_params_204, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_208, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,obj_value_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result207__;
            }
            method_block_name_304=(char*)come_increment_ref_count(((char*)(right_value265=xsprintf("method_block%d_%s",info->num_method_block,((char*)(right_value264=buffer_to_string(all_alhabet_sname_290)))))));
            right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_value2_305=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value266=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 689, "CVALUE"))));
            come_call_finalizer2(CVALUE_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            fun2_306=map$2charphsFunph_at(info->funcs,method_block_name_304,((void*)0));
            if(_if_conditional376=fun2_306==((void*)0),            _if_conditional376) {
                err_msg(info,"method block function not found(%s)",method_block_name_304);
                __result208__ = (_Bool)1;
                if(current_stack_frame_node_278) { current_stack_frame_node_278 = come_decrement_ref_count2(current_stack_frame_node_278, ((struct sNode*)current_stack_frame_node_278)->finalize, ((struct sNode*)current_stack_frame_node_278)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(CVALUE_finalize,come_value_279, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,method_block2_280, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,method_block_type_281, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                class_name_282 = come_decrement_ref_count2(class_name_282, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_287, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,all_alhabet_sname_290, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,source3_299, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                if(node_303) { node_303 = come_decrement_ref_count2(node_303, ((struct sNode*)node_303)->finalize, ((struct sNode*)node_303)->_protocol_obj, 0, 0, 0, (void*)0); } 
                method_block_name_304 = come_decrement_ref_count2(method_block_name_304, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,come_value2_305, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                generics_fun_name_176 = come_decrement_ref_count2(generics_fun_name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type2_192, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_193, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,come_params_204, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_208, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,obj_value_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result208__;
            }
            method_block_type2_307=fun2_306->mLambdaType;
            __dec_obj86=come_value2_305->c_value;
            come_value2_305->c_value=(char*)come_increment_ref_count(((char*)(right_value267=xsprintf("(void*)%s",method_block_name_304))));
            __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj87=come_value2_305->type;
            come_value2_305->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value268=sType_clone(method_block_type2_307))));
            come_call_finalizer2(sType_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_value2_305->var=((void*)0);
            list$1CVALUEph_push_back(come_params_204,(struct CVALUE*)come_increment_ref_count(come_value2_305));
            __dec_obj88=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source3_299);
            come_call_finalizer2(buffer_finalize,__dec_obj88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            info->p=p_300;
            info->head=head_301;
            info->sline=sline_302;
            info->current_stack_frame_struct=current_stack_frame_struct_286;
            if(current_stack_frame_node_278) { current_stack_frame_node_278 = come_decrement_ref_count2(current_stack_frame_node_278, ((struct sNode*)current_stack_frame_node_278)->finalize, ((struct sNode*)current_stack_frame_node_278)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(CVALUE_finalize,come_value_279, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,method_block2_280, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,method_block_type_281, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            class_name_282 = come_decrement_ref_count2(class_name_282, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type_287, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,all_alhabet_sname_290, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,source3_299, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            if(node_303) { node_303 = come_decrement_ref_count2(node_303, ((struct sNode*)node_303)->finalize, ((struct sNode*)node_303)->_protocol_obj, 0, 0, 0, (void*)0); } 
            method_block_name_304 = come_decrement_ref_count2(method_block_name_304, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,come_value2_305, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        buf_308=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value270=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value269=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 714, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_308,generics_fun_name_176);
        buffer_append_str(buf_308,"(");
        j_309=0;
        for(        o2_saved_310=(struct list$1CVALUEph*)come_increment_ref_count((come_params_204)),it_311=list$1CVALUEph_begin((o2_saved_310));        !list$1CVALUEph_end((o2_saved_310));        it_311=list$1CVALUEph_next((o2_saved_310))        ){
            buffer_append_str(buf_308,it_311->c_value);
            if(_if_conditional377=j_309!=list$1CVALUEph_length(come_params_204)-1,            _if_conditional377) {
                buffer_append_str(buf_308,",");
            }
            j_309++;
        }
        come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_310, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_308,")");
        come_value2_312=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value271=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 732, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj89=come_value2_312->c_value;
        come_value2_312->c_value=(char*)come_increment_ref_count(((char*)(right_value272=buffer_to_string(buf_308))));
        __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value272 = come_decrement_ref_count2(right_value272, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj90=come_value2_312->type;
        come_value2_312->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value273=sType_clone(result_type2_192))));
        come_call_finalizer2(sType_finalize,__dec_obj90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value2_312->type->mStatic=(_Bool)0;
        come_value2_312->var=((void*)0);
        if(result_type2_192->mHeap) {
            __dec_obj91=come_value2_312->c_value;
            come_value2_312->c_value=(char*)come_increment_ref_count(((char*)(right_value274=append_object_to_right_values(come_value2_312->c_value,(struct sType*)come_increment_ref_count(result_type2_192),info))));
            __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value274 = come_decrement_ref_count2(right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __dec_obj92=come_value2_312->c_value;
        come_value2_312->c_value=(char*)come_increment_ref_count(((char*)(right_value275=append_stackframe(come_value2_312->c_value,come_value2_312->type,info))));
        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        add_come_last_code(info,"%s;\n",come_value2_312->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_312));
        if(method_block_133) {
            var_name_313=(char*)come_increment_ref_count(((char*)(right_value276=xsprintf("__current_stack%d__",info->num_current_stack))));
            right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            result_type_314=(struct sType*)come_increment_ref_count(((struct sType*)(right_value277=sType_clone(info->come_fun->mResultType))));
            come_call_finalizer2(sType_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            result_type2_315=(struct sType*)come_increment_ref_count(((struct sType*)(right_value278=solve_generics(result_type_314,info->generics_type,info))));
            come_call_finalizer2(sType_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            result_type3_316=result_type2_315->mNoSolvedGenericsType->v1;
            if(result_type2_315->mNoSolvedGenericsType->v1) {
                result_type3_316=result_type2_315->mNoSolvedGenericsType->v1;
            }
            else {
                result_type3_316=result_type2_315;
            }
            if(info->in_loop) {
                if(_if_conditional382=string_operator_equals(result_type3_316->mClass->mName,"void")&&result_type3_316->mPointerNum==0,                _if_conditional382) {
                    add_come_last_code3(info,((char*)(right_value282=xsprintf("                        if(\%s.__method_block_result_kind__ == 1)\n                        {\n                            break;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 2)\n                        {\n                            continue;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 4)\n                        {\n                            return;\n                        }\n",((char*)(right_value279=string_to_string(var_name_313))),((char*)(right_value280=string_to_string(var_name_313))),((char*)(right_value281=string_to_string(var_name_313)))))));
                    right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value280 = come_decrement_ref_count2(right_value280, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value281 = come_decrement_ref_count2(right_value281, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value282 = come_decrement_ref_count2(right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    add_come_last_code3(info,((char*)(right_value289=xsprintf("                        if(\%s.__method_block_result_kind__ == 1)\n                        {\n                            break;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 2)\n                        {\n                            continue;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 3)\n                        {\n                            return (\%s)\%s.__method_block_return_value__;\n                        }\n",((char*)(right_value283=string_to_string(var_name_313))),((char*)(right_value284=string_to_string(var_name_313))),((char*)(right_value285=string_to_string(var_name_313))),((char*)(right_value287=string_to_string(((char*)(right_value286=make_type_name_string(result_type2_315,(_Bool)0,(_Bool)0,(_Bool)0,info)))))),((char*)(right_value288=string_to_string(var_name_313)))))));
                    right_value283 = come_decrement_ref_count2(right_value283, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value285 = come_decrement_ref_count2(right_value285, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value288 = come_decrement_ref_count2(right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value289 = come_decrement_ref_count2(right_value289, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            else {
                if(_if_conditional383=string_operator_equals(result_type3_316->mClass->mName,"void")&&result_type3_316->mPointerNum==0,                _if_conditional383) {
                    add_come_last_code3(info,((char*)(right_value291=xsprintf("                    if(\%s.__method_block_result_kind__ == 4)\n                    {\n                        return;\n                    }\n",((char*)(right_value290=string_to_string(var_name_313)))))));
                    right_value290 = come_decrement_ref_count2(right_value290, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value291 = come_decrement_ref_count2(right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    add_come_last_code3(info,((char*)(right_value296=xsprintf("                    if(\%s.__method_block_result_kind__ == 3)\n                    {\n                        return (\%s)\%s.__method_block_return_value__;\n                    }\n",((char*)(right_value292=string_to_string(var_name_313))),((char*)(right_value294=string_to_string(((char*)(right_value293=make_type_name_string(result_type2_315,(_Bool)0,(_Bool)0,(_Bool)0,info)))))),((char*)(right_value295=string_to_string(var_name_313)))))));
                    right_value292 = come_decrement_ref_count2(right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value293 = come_decrement_ref_count2(right_value293, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value294 = come_decrement_ref_count2(right_value294, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value295 = come_decrement_ref_count2(right_value295, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value296 = come_decrement_ref_count2(right_value296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            var_name_313 = come_decrement_ref_count2(var_name_313, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type_314, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type2_315, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        generics_fun_name_176 = come_decrement_ref_count2(generics_fun_name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type2_192, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_193, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1CVALUEphp_finalize,come_params_204, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_208, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,buf_308, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,come_value2_312, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1sTypephp_finalize,info->method_generics_types, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj93=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_135);
    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __result209__ = (_Bool)1;
    come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,obj_value_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,obj_type_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result209__;
    come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,obj_value_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,obj_type_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional225;
struct tuple2$2charphsTypeph* result_142;
struct tuple2$2charphsTypeph* __result107__;
_Bool _if_conditional226;
struct tuple2$2charphsTypeph* __result108__;
struct tuple2$2charphsTypeph* result_143;
struct tuple2$2charphsTypeph* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_142, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_143, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional225=self==((void*)0),        _if_conditional225) {
            memset(&result_142,0,sizeof(struct tuple2$2charphsTypeph*));
            __result107__ = __result_obj__ = result_142;
            return __result107__;
        }
        self->it=self->head;
        if(self->it) {
            __result108__ = __result_obj__ = self->it->item;
            return __result108__;
        }
        memset(&result_143,0,sizeof(struct tuple2$2charphsTypeph*));
        __result109__ = __result_obj__ = result_143;
        return __result109__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result110__;
memset(&__result_obj__, 0, sizeof(void*));
        __result110__ = self==((void*)0)||self->it==((void*)0);
        return __result110__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional227;
struct tuple2$2charphsTypeph* result_145;
struct tuple2$2charphsTypeph* __result111__;
_Bool _if_conditional228;
struct tuple2$2charphsTypeph* __result112__;
struct tuple2$2charphsTypeph* result_146;
struct tuple2$2charphsTypeph* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_145, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_146, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional227=self==((void*)0)||self->it==((void*)0),        _if_conditional227) {
            memset(&result_145,0,sizeof(struct tuple2$2charphsTypeph*));
            __result111__ = __result_obj__ = result_145;
            return __result111__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result112__ = __result_obj__ = self->it->item;
            return __result112__;
        }
        memset(&result_146,0,sizeof(struct tuple2$2charphsTypeph*));
        __result113__ = __result_obj__ = result_146;
        return __result113__;
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result114__ = __result_obj__ = self;
            come_call_finalizer2(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result114__;
            come_call_finalizer2(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_150;
_Bool _while_condtional22;
struct list_item$1CVALUEph* prev_it_151;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_150, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_151, 0, sizeof(struct list_item$1CVALUEph*));
                it_150=self->head;
                while(_while_condtional22=it_150!=((void*)0),                _while_condtional22) {
                    prev_it_151=it_150;
                    it_150=it_150->next;
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_151, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional231;
struct tuple2$2charphsNodeph* result_155;
struct tuple2$2charphsNodeph* __result115__;
_Bool _if_conditional232;
struct tuple2$2charphsNodeph* __result116__;
struct tuple2$2charphsNodeph* result_156;
struct tuple2$2charphsNodeph* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_155, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_156, 0, sizeof(struct tuple2$2charphsNodeph*));
            if(_if_conditional231=self==((void*)0),            _if_conditional231) {
                memset(&result_155,0,sizeof(struct tuple2$2charphsNodeph*));
                __result115__ = __result_obj__ = result_155;
                return __result115__;
            }
            self->it=self->head;
            if(self->it) {
                __result116__ = __result_obj__ = self->it->item;
                return __result116__;
            }
            memset(&result_156,0,sizeof(struct tuple2$2charphsNodeph*));
            __result117__ = __result_obj__ = result_156;
            return __result117__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __result118__;
memset(&__result_obj__, 0, sizeof(void*));
            __result118__ = self==((void*)0)||self->it==((void*)0);
            return __result118__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional233;
struct tuple2$2charphsNodeph* result_158;
struct tuple2$2charphsNodeph* __result119__;
_Bool _if_conditional234;
struct tuple2$2charphsNodeph* __result120__;
struct tuple2$2charphsNodeph* result_159;
struct tuple2$2charphsNodeph* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_158, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_159, 0, sizeof(struct tuple2$2charphsNodeph*));
            if(_if_conditional233=self==((void*)0)||self->it==((void*)0),            _if_conditional233) {
                memset(&result_158,0,sizeof(struct tuple2$2charphsNodeph*));
                __result119__ = __result_obj__ = result_158;
                return __result119__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result120__ = __result_obj__ = self->it->item;
                return __result120__;
            }
            memset(&result_159,0,sizeof(struct tuple2$2charphsNodeph*));
            __result121__ = __result_obj__ = result_159;
            return __result121__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional237;
struct list_item$1sTypeph* it_163;
int i_164;
_Bool _while_condtional23;
_Bool _if_conditional238;
struct sType* __result123__;
struct sType* default_value_165;
struct sType* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_163, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_164, 0, sizeof(int));
memset(&default_value_165, 0, sizeof(struct sType*));
                    if(_if_conditional237=position<0,                    _if_conditional237) {
                        position+=self->len;
                    }
                    it_163=self->head;
                    i_164=0;
                    while(_while_condtional23=it_163!=((void*)0),                    _while_condtional23) {
                        if(_if_conditional238=position==i_164,                        _if_conditional238) {
                            __result123__ = __result_obj__ = it_163->item;
                            return __result123__;
                        }
                        it_163=it_163->next;
                        i_164++;
                    }
                    memset(&default_value_165,0,sizeof(struct sType*));
                    __result124__ = __result_obj__ = default_value_165;
                    come_call_finalizer2(sType_finalize,default_value_165, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result124__;
                    come_call_finalizer2(sType_finalize,default_value_165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional240;
struct CVALUE* result_169;
struct CVALUE* __result125__;
_Bool _if_conditional241;
struct CVALUE* __result126__;
struct CVALUE* result_170;
struct CVALUE* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_169, 0, sizeof(struct CVALUE*));
memset(&result_170, 0, sizeof(struct CVALUE*));
            if(_if_conditional240=self==((void*)0),            _if_conditional240) {
                memset(&result_169,0,sizeof(struct CVALUE*));
                __result125__ = __result_obj__ = result_169;
                return __result125__;
            }
            self->it=self->head;
            if(self->it) {
                __result126__ = __result_obj__ = self->it->item;
                return __result126__;
            }
            memset(&result_170,0,sizeof(struct CVALUE*));
            __result127__ = __result_obj__ = result_170;
            return __result127__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __result128__;
memset(&__result_obj__, 0, sizeof(void*));
            __result128__ = self==((void*)0)||self->it==((void*)0);
            return __result128__;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional242;
struct CVALUE* result_172;
struct CVALUE* __result129__;
_Bool _if_conditional243;
struct CVALUE* __result130__;
struct CVALUE* result_173;
struct CVALUE* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_172, 0, sizeof(struct CVALUE*));
memset(&result_173, 0, sizeof(struct CVALUE*));
            if(_if_conditional242=self==((void*)0)||self->it==((void*)0),            _if_conditional242) {
                memset(&result_172,0,sizeof(struct CVALUE*));
                __result129__ = __result_obj__ = result_172;
                return __result129__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result130__ = __result_obj__ = self->it->item;
                return __result130__;
            }
            memset(&result_173,0,sizeof(struct CVALUE*));
            __result131__ = __result_obj__ = result_173;
            return __result131__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
int __result132__;
memset(&__result_obj__, 0, sizeof(void*));
                __result132__ = self->len;
                return __result132__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_180;
unsigned int hash_181;
unsigned int it_182;
_Bool _while_condtional24;
_Bool _if_conditional247;
_Bool _if_conditional248;
struct sFun* __result133__;
_Bool _if_conditional264;
_Bool _if_conditional265;
struct sFun* __result134__;
struct sFun* __result135__;
struct sFun* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_180, 0, sizeof(struct sFun*));
memset(&hash_181, 0, sizeof(unsigned int));
memset(&it_182, 0, sizeof(unsigned int));
                memset(&default_value_180,0,sizeof(struct sFun*));
                hash_181=string_get_hash_key(((char*)key))%self->size;
                it_182=hash_181;
                while(_while_condtional24=(_Bool)1,                _while_condtional24) {
                    if(_if_conditional247=self->item_existance[it_182],                    _if_conditional247) {
                        if(_if_conditional248=string_equals(self->keys[it_182],key),                        _if_conditional248) {
                            __result133__ = __result_obj__ = self->items[it_182];
                            come_call_finalizer2(sFun_finalize,default_value_180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result133__;
                        }
                        it_182++;
                        if(_if_conditional264=it_182>=self->size,                        _if_conditional264) {
                            it_182=0;
                        }
                        else {
                            if(_if_conditional265=it_182==hash_181,                            _if_conditional265) {
                                __result134__ = __result_obj__ = default_value_180;
                                come_call_finalizer2(sFun_finalize,default_value_180, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result134__;
                            }
                        }
                    }
                    else {
                        __result135__ = __result_obj__ = default_value_180;
                        come_call_finalizer2(sFun_finalize,default_value_180, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result135__;
                    }
                }
                __result136__ = __result_obj__ = default_value_180;
                come_call_finalizer2(sFun_finalize,default_value_180, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result136__;
                come_call_finalizer2(sFun_finalize,default_value_180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
unsigned int hash_185;
unsigned int it_186;
_Bool _while_condtional25;
_Bool _if_conditional269;
_Bool _if_conditional270;
struct sFun* __result137__;
_Bool _if_conditional271;
_Bool _if_conditional272;
struct sFun* __result138__;
struct sFun* __result139__;
struct sFun* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_185, 0, sizeof(unsigned int));
memset(&it_186, 0, sizeof(unsigned int));
                    hash_185=string_get_hash_key(((char*)key))%self->size;
                    it_186=hash_185;
                    while(_while_condtional25=(_Bool)1,                    _while_condtional25) {
                        if(_if_conditional269=self->item_existance[it_186],                        _if_conditional269) {
                            if(_if_conditional270=string_equals(self->keys[it_186],key),                            _if_conditional270) {
                                __result137__ = __result_obj__ = self->items[it_186];
                                come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result137__;
                            }
                            it_186++;
                            if(_if_conditional271=it_186>=self->size,                            _if_conditional271) {
                                it_186=0;
                            }
                            else {
                                if(_if_conditional272=it_186==hash_185,                                _if_conditional272) {
                                    __result138__ = __result_obj__ = default_value;
                                    come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result138__;
                                }
                            }
                        }
                        else {
                            __result139__ = __result_obj__ = default_value;
                            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result139__;
                        }
                    }
                    __result140__ = __result_obj__ = default_value;
                    come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result140__;
                    come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
int __result143__;
memset(&__result_obj__, 0, sizeof(void*));
            __result143__ = self->len;
            return __result143__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional280;
struct sType* result_195;
struct sType* __result145__;
_Bool _if_conditional281;
struct sType* __result146__;
struct sType* result_196;
struct sType* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_195, 0, sizeof(struct sType*));
memset(&result_196, 0, sizeof(struct sType*));
            if(_if_conditional280=self==((void*)0),            _if_conditional280) {
                memset(&result_195,0,sizeof(struct sType*));
                __result145__ = __result_obj__ = result_195;
                return __result145__;
            }
            self->it=self->head;
            if(self->it) {
                __result146__ = __result_obj__ = self->it->item;
                return __result146__;
            }
            memset(&result_196,0,sizeof(struct sType*));
            __result147__ = __result_obj__ = result_196;
            return __result147__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result148__;
memset(&__result_obj__, 0, sizeof(void*));
            __result148__ = self==((void*)0)||self->it==((void*)0);
            return __result148__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional282;
struct sType* result_198;
struct sType* __result149__;
_Bool _if_conditional283;
struct sType* __result150__;
struct sType* result_199;
struct sType* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_198, 0, sizeof(struct sType*));
memset(&result_199, 0, sizeof(struct sType*));
            if(_if_conditional282=self==((void*)0)||self->it==((void*)0),            _if_conditional282) {
                memset(&result_198,0,sizeof(struct sType*));
                __result149__ = __result_obj__ = result_198;
                return __result149__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result150__ = __result_obj__ = self->it->item;
                return __result150__;
            }
            memset(&result_199,0,sizeof(struct sType*));
            __result151__ = __result_obj__ = result_199;
            return __result151__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional285;
void* right_value184;
struct list_item$1sTypeph* litem_200;
struct sType* __dec_obj69;
_Bool _if_conditional286;
void* right_value185;
struct list_item$1sTypeph* litem_201;
struct sType* __dec_obj70;
void* right_value186;
struct list_item$1sTypeph* litem_202;
struct sType* __dec_obj71;
struct list$1sTypeph* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
right_value184 = (void*)0;
memset(&litem_200, 0, sizeof(struct list_item$1sTypeph*));
right_value185 = (void*)0;
memset(&litem_201, 0, sizeof(struct list_item$1sTypeph*));
right_value186 = (void*)0;
memset(&litem_202, 0, sizeof(struct list_item$1sTypeph*));
                    if(_if_conditional285=self->len==0,                    _if_conditional285) {
                        litem_200=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value184=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 226, "list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_200->prev=((void*)0);
                        litem_200->next=((void*)0);
                        __dec_obj69=litem_200->item;
                        litem_200->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_200;
                        self->head=litem_200;
                    }
                    else {
                        if(_if_conditional286=self->len==1,                        _if_conditional286) {
                            litem_201=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value185=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 236, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_201->prev=self->head;
                            litem_201->next=((void*)0);
                            __dec_obj70=litem_201->item;
                            litem_201->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_201;
                            self->head->next=litem_201;
                        }
                        else {
                            litem_202=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value186=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 246, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_202->prev=self->tail;
                            litem_202->next=((void*)0);
                            __dec_obj71=litem_202->item;
                            litem_202->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail->next=litem_202;
                            self->tail=litem_202;
                        }
                    }
                    self->len++;
                    __result152__ = __result_obj__ = self;
                    come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result152__;
                    come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphCVALUEph* map$2charphCVALUEph_initialize(struct map$2charphCVALUEph* self){
void* __result_obj__;
void* right_value192;
void* right_value193;
void* right_value194;
int i_205;
void* right_value195;
void* right_value196;
struct list$1charp* __dec_obj72;
struct map$2charphCVALUEph* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
right_value192 = (void*)0;
right_value193 = (void*)0;
right_value194 = (void*)0;
memset(&i_205, 0, sizeof(int));
right_value195 = (void*)0;
right_value196 = (void*)0;
            self->keys=(char**)come_increment_ref_count(((char**)(right_value192=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1084, "char*%"))));
            right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            self->items=(struct CVALUE**)come_increment_ref_count(((struct CVALUE**)(right_value193=(struct CVALUE**)come_calloc(1, sizeof(struct CVALUE*)*(1*(1024)), "./comelang2.h", 1085, "CVALUE*%"))));
            come_call_finalizer2(CVALUE_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value194=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1086, "bool"))));
            right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            i_205=0;            i_205<1024;            i_205++            ){
                self->item_existance[i_205]=(_Bool)0;
            }
            self->size=1024;
            self->len=0;
            __dec_obj72=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value196=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value195=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1096, "list$1charp"))))))));
            come_call_finalizer2(list$1charp_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charpp_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charpp_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            self->it=0;
            __result154__ = __result_obj__ = self;
            come_call_finalizer2(map$2charphCVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result154__;
            come_call_finalizer2(map$2charphCVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result153__ = __result_obj__ = self;
                come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result153__;
                come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1charp_finalize(struct list$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void map$2charphCVALUEphp_finalize(struct map$2charphCVALUEph* self){
void* __result_obj__;
int i_206;
_Bool _if_conditional287;
_Bool _if_conditional288;
int i_207;
_Bool _if_conditional289;
_Bool _if_conditional290;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_206, 0, sizeof(int));
memset(&i_207, 0, sizeof(int));
                for(                i_206=0;                i_206<self->size;                i_206++                ){
                    if(_if_conditional287=self->item_existance[i_206],                    _if_conditional287) {
                        if(_if_conditional288=1,                        _if_conditional288) {
                            come_call_finalizer2(CVALUE_finalize,self->items[i_206], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->items);
                for(                i_207=0;                i_207<self->size;                i_207++                ){
                    if(_if_conditional289=self->item_existance[i_207],                    _if_conditional289) {
                        if(_if_conditional290=1,                        _if_conditional290) {
                            self->keys[i_207] = come_decrement_ref_count2(self->keys[i_207], (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
struct list_item$1charph* it_214;
int i_215;
_Bool _while_condtional26;
_Bool _if_conditional295;
char* __result155__;
char* default_value_216;
char* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_214, 0, sizeof(struct list_item$1charph*));
memset(&i_215, 0, sizeof(int));
memset(&default_value_216, 0, sizeof(char*));
                            if(_if_conditional294=position<0,                            _if_conditional294) {
                                position+=self->len;
                            }
                            it_214=self->head;
                            i_215=0;
                            while(_while_condtional26=it_214!=((void*)0),                            _while_condtional26) {
                                if(_if_conditional295=position==i_215,                                _if_conditional295) {
                                    __result155__ = __result_obj__ = it_214->item;
                                    return __result155__;
                                }
                                it_214=it_214->next;
                                i_215++;
                            }
                            memset(&default_value_216,0,sizeof(char*));
                            __result156__ = __result_obj__ = default_value_216;
                            default_value_216 = come_decrement_ref_count2(default_value_216, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result156__;
                            default_value_216 = come_decrement_ref_count2(default_value_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional298;
char* result_220;
char* __result158__;
_Bool _if_conditional299;
char* __result159__;
char* result_221;
char* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_220, 0, sizeof(char*));
memset(&result_221, 0, sizeof(char*));
                        if(_if_conditional298=self==((void*)0),                        _if_conditional298) {
                            memset(&result_220,0,sizeof(char*));
                            __result158__ = __result_obj__ = result_220;
                            return __result158__;
                        }
                        self->it=self->head;
                        if(self->it) {
                            __result159__ = __result_obj__ = self->it->item;
                            return __result159__;
                        }
                        memset(&result_221,0,sizeof(char*));
                        __result160__ = __result_obj__ = result_221;
                        return __result160__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result161__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result161__ = self==((void*)0)||self->it==((void*)0);
                        return __result161__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional300;
char* result_223;
char* __result162__;
_Bool _if_conditional301;
char* __result163__;
char* result_224;
char* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_223, 0, sizeof(char*));
memset(&result_224, 0, sizeof(char*));
                        if(_if_conditional300=self==((void*)0)||self->it==((void*)0),                        _if_conditional300) {
                            memset(&result_223,0,sizeof(char*));
                            __result162__ = __result_obj__ = result_223;
                            return __result162__;
                        }
                        self->it=self->it->next;
                        if(self->it) {
                            __result163__ = __result_obj__ = self->it->item;
                            return __result163__;
                        }
                        memset(&result_224,0,sizeof(char*));
                        __result164__ = __result_obj__ = result_224;
                        return __result164__;
}

static struct map$2charphCVALUEph* map$2charphCVALUEph_insert(struct map$2charphCVALUEph* self, char* key, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional308;
unsigned int hash_242;
unsigned int it_243;
_Bool _while_condtional29;
_Bool _if_conditional320;
_Bool _if_conditional321;
_Bool _if_conditional322;
_Bool _if_conditional323;
_Bool _if_conditional324;
_Bool _if_conditional325;
_Bool _if_conditional326;
_Bool _if_conditional327;
_Bool same_key_exist_244;
char* it2_245;
_Bool _if_conditional328;
_Bool _if_conditional329;
struct map$2charphCVALUEph* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_242, 0, sizeof(unsigned int));
memset(&it_243, 0, sizeof(unsigned int));
memset(&same_key_exist_244, 0, sizeof(_Bool));
memset(&it2_245, 0, sizeof(char*));
                        if(_if_conditional308=self->len*10>=self->size,                        _if_conditional308) {
                            map$2charphCVALUEph_rehash(self);
                        }
                        hash_242=string_get_hash_key(key)%self->size;
                        it_243=hash_242;
                        while(_while_condtional29=(_Bool)1,                        _while_condtional29) {
                            if(_if_conditional320=self->item_existance[it_243],                            _if_conditional320) {
                                if(_if_conditional321=string_equals(self->keys[it_243],key),                                _if_conditional321) {
                                    if(_if_conditional322=1,                                    _if_conditional322) {
                                        list$1charp_remove(self->key_list,self->keys[it_243]);
                                        self->keys[it_243] = come_decrement_ref_count2(self->keys[it_243], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        self->keys[it_243]=(char*)come_increment_ref_count(key);
                                    }
                                    else {
                                        list$1charp_remove(self->key_list,self->keys[it_243]);
                                        self->keys[it_243]=key;
                                    }
                                    if(_if_conditional323=1,                                    _if_conditional323) {
                                        come_call_finalizer2(CVALUE_finalize,self->items[it_243], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        self->items[it_243]=(struct CVALUE*)come_increment_ref_count(item);
                                    }
                                    else {
                                        self->items[it_243]=item;
                                    }
                                    break;
                                }
                                it_243++;
                                if(_if_conditional324=it_243>=self->size,                                _if_conditional324) {
                                    it_243=0;
                                }
                                else {
                                    if(_if_conditional325=it_243==hash_242,                                    _if_conditional325) {
                                        printf("unexpected error in map.insert\n");
                                        stackframe();
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                self->item_existance[it_243]=(_Bool)1;
                                if(_if_conditional326=1,                                _if_conditional326) {
                                    self->keys[it_243]=(char*)come_increment_ref_count(key);
                                }
                                else {
                                    self->keys[it_243]=key;
                                }
                                if(_if_conditional327=1,                                _if_conditional327) {
                                    self->items[it_243]=(struct CVALUE*)come_increment_ref_count(item);
                                }
                                else {
                                    self->items[it_243]=item;
                                }
                                self->len++;
                                break;
                            }
                        }
                        same_key_exist_244=(_Bool)0;
                        for(                        it2_245=list$1charp_begin(self->key_list);                        !list$1charp_end(self->key_list);                        it2_245=list$1charp_next(self->key_list)                        ){
                            if(_if_conditional328=string_equals(it2_245,key),                            _if_conditional328) {
                                puts("SAME KEY");
                                same_key_exist_244=(_Bool)1;
                            }
                        }
                        if(_if_conditional329=!same_key_exist_244,                        _if_conditional329) {
                            list$1charp_push_back(self->key_list,key);
                        }
                        __result176__ = __result_obj__ = self;
                        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result176__;
                        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphCVALUEph_rehash(struct map$2charphCVALUEph* self){
void* __result_obj__;
int size_225;
void* right_value208;
char** keys_226;
void* right_value209;
struct CVALUE** items_227;
void* right_value210;
_Bool* item_existance_228;
int len_229;
char* it_232;
struct CVALUE* default_value_235;
struct CVALUE* it2_238;
unsigned int hash_239;
int n_240;
_Bool _while_condtional28;
_Bool _if_conditional317;
_Bool _if_conditional318;
_Bool _if_conditional319;
struct CVALUE* default_value_241;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_225, 0, sizeof(int));
right_value208 = (void*)0;
memset(&keys_226, 0, sizeof(char**));
right_value209 = (void*)0;
memset(&items_227, 0, sizeof(struct CVALUE**));
right_value210 = (void*)0;
memset(&item_existance_228, 0, sizeof(_Bool*));
memset(&len_229, 0, sizeof(int));
memset(&it_232, 0, sizeof(char*));
memset(&default_value_235, 0, sizeof(struct CVALUE*));
memset(&it2_238, 0, sizeof(struct CVALUE*));
memset(&hash_239, 0, sizeof(unsigned int));
memset(&n_240, 0, sizeof(int));
memset(&default_value_241, 0, sizeof(struct CVALUE*));
                                size_225=self->size*10;
                                keys_226=(char**)come_increment_ref_count(((char**)(right_value208=(char**)come_calloc(1, sizeof(char*)*(1*(size_225)), "./comelang2.h", 1335, "char*%"))));
                                right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                items_227=(struct CVALUE**)come_increment_ref_count(((struct CVALUE**)(right_value209=(struct CVALUE**)come_calloc(1, sizeof(struct CVALUE*)*(1*(size_225)), "./comelang2.h", 1336, "CVALUE*%"))));
                                come_call_finalizer2(CVALUE_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                item_existance_228=(_Bool*)come_increment_ref_count(((_Bool*)(right_value210=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_225)), "./comelang2.h", 1337, "bool"))));
                                right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                len_229=0;
                                for(                                it_232=map$2charphCVALUEph_begin(self);                                !map$2charphCVALUEph_end(self);                                it_232=map$2charphCVALUEph_next(self)                                ){
                                    memset(&default_value_235,0,sizeof(struct CVALUE*));
                                    it2_238=map$2charphCVALUEph_at(self,it_232,default_value_235);
                                    hash_239=string_get_hash_key(it_232)%size_225;
                                    n_240=hash_239;
                                    while(_while_condtional28=(_Bool)1,                                    _while_condtional28) {
                                        if(_if_conditional317=item_existance_228[n_240],                                        _if_conditional317) {
                                            n_240++;
                                            if(_if_conditional318=n_240>=size_225,                                            _if_conditional318) {
                                                n_240=0;
                                            }
                                            else {
                                                if(_if_conditional319=n_240==hash_239,                                                _if_conditional319) {
                                                    printf("unexpected error in map.rehash(1)\n");
                                                    stackframe();
                                                    exit(2);
                                                }
                                            }
                                        }
                                        else {
                                            item_existance_228[n_240]=(_Bool)1;
                                            keys_226[n_240]=it_232;
                                            items_227[n_240]=map$2charphCVALUEph_at(self,it_232,default_value_241);
                                            len_229++;
                                            break;
                                        }
                                    }
                                }
                                come_free((char*)self->items);
                                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_free((char*)self->keys);
                                self->keys=keys_226;
                                self->items=items_227;
                                self->item_existance=item_existance_228;
                                self->size=size_225;
                                self->len=len_229;
}

static char* map$2charphCVALUEph_begin(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool _if_conditional309;
char* result_230;
char* __result165__;
_Bool _if_conditional310;
char* __result166__;
char* result_231;
char* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_230, 0, sizeof(char*));
memset(&result_231, 0, sizeof(char*));
                                    if(_if_conditional309=self==((void*)0),                                    _if_conditional309) {
                                        memset(&result_230,0,sizeof(char*));
                                        __result165__ = __result_obj__ = result_230;
                                        return __result165__;
                                    }
                                    self->key_list->it=self->key_list->head;
                                    if(self->key_list->it) {
                                        __result166__ = __result_obj__ = self->key_list->it->item;
                                        return __result166__;
                                    }
                                    memset(&result_231,0,sizeof(char*));
                                    __result167__ = __result_obj__ = result_231;
                                    return __result167__;
}

static _Bool map$2charphCVALUEph_end(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool __result168__;
memset(&__result_obj__, 0, sizeof(void*));
                                    __result168__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                                    return __result168__;
}

static char* map$2charphCVALUEph_next(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool _if_conditional311;
char* result_233;
char* __result169__;
_Bool _if_conditional312;
char* __result170__;
char* result_234;
char* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_233, 0, sizeof(char*));
memset(&result_234, 0, sizeof(char*));
                                    if(_if_conditional311=self==((void*)0)||self->key_list->it==((void*)0),                                    _if_conditional311) {
                                        memset(&result_233,0,sizeof(char*));
                                        __result169__ = __result_obj__ = result_233;
                                        return __result169__;
                                    }
                                    self->key_list->it=self->key_list->it->next;
                                    if(self->key_list->it) {
                                        __result170__ = __result_obj__ = self->key_list->it->item;
                                        return __result170__;
                                    }
                                    memset(&result_234,0,sizeof(char*));
                                    __result171__ = __result_obj__ = result_234;
                                    return __result171__;
}

static struct CVALUE* map$2charphCVALUEph_at(struct map$2charphCVALUEph* self, char* key, struct CVALUE* default_value){
void* __result_obj__;
unsigned int hash_236;
unsigned int it_237;
_Bool _while_condtional27;
_Bool _if_conditional313;
_Bool _if_conditional314;
struct CVALUE* __result172__;
_Bool _if_conditional315;
_Bool _if_conditional316;
struct CVALUE* __result173__;
struct CVALUE* __result174__;
struct CVALUE* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_236, 0, sizeof(unsigned int));
memset(&it_237, 0, sizeof(unsigned int));
                                        hash_236=string_get_hash_key(((char*)key))%self->size;
                                        it_237=hash_236;
                                        while(_while_condtional27=(_Bool)1,                                        _while_condtional27) {
                                            if(_if_conditional313=self->item_existance[it_237],                                            _if_conditional313) {
                                                if(_if_conditional314=string_equals(self->keys[it_237],key),                                                _if_conditional314) {
                                                    __result172__ = __result_obj__ = self->items[it_237];
                                                    come_call_finalizer2(CVALUE_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                    return __result172__;
                                                }
                                                it_237++;
                                                if(_if_conditional315=it_237>=self->size,                                                _if_conditional315) {
                                                    it_237=0;
                                                }
                                                else {
                                                    if(_if_conditional316=it_237==hash_236,                                                    _if_conditional316) {
                                                        __result173__ = __result_obj__ = default_value;
                                                        come_call_finalizer2(CVALUE_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                        return __result173__;
                                                    }
                                                }
                                            }
                                            else {
                                                __result174__ = __result_obj__ = default_value;
                                                come_call_finalizer2(CVALUE_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result174__;
                                            }
                                        }
                                        __result175__ = __result_obj__ = default_value;
                                        come_call_finalizer2(CVALUE_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result175__;
                                        come_call_finalizer2(CVALUE_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional332;
struct sNode* result_250;
struct sNode* __result177__;
_Bool _if_conditional333;
struct sNode* __result178__;
struct sNode* result_251;
struct sNode* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_250, 0, sizeof(struct sNode*));
memset(&result_251, 0, sizeof(struct sNode*));
                    if(_if_conditional332=self==((void*)0),                    _if_conditional332) {
                        memset(&result_250,0,sizeof(struct sNode*));
                        __result177__ = __result_obj__ = result_250;
                        return __result177__;
                    }
                    self->it=self->head;
                    if(self->it) {
                        __result178__ = __result_obj__ = self->it->item;
                        return __result178__;
                    }
                    memset(&result_251,0,sizeof(struct sNode*));
                    __result179__ = __result_obj__ = result_251;
                    return __result179__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result180__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result180__ = self==((void*)0)||self->it==((void*)0);
                    return __result180__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional334;
struct sNode* result_253;
struct sNode* __result181__;
_Bool _if_conditional335;
struct sNode* __result182__;
struct sNode* result_254;
struct sNode* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_253, 0, sizeof(struct sNode*));
memset(&result_254, 0, sizeof(struct sNode*));
                    if(_if_conditional334=self==((void*)0)||self->it==((void*)0),                    _if_conditional334) {
                        memset(&result_253,0,sizeof(struct sNode*));
                        __result181__ = __result_obj__ = result_253;
                        return __result181__;
                    }
                    self->it=self->it->next;
                    if(self->it) {
                        __result182__ = __result_obj__ = self->it->item;
                        return __result182__;
                    }
                    memset(&result_254,0,sizeof(struct sNode*));
                    __result183__ = __result_obj__ = result_254;
                    return __result183__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional338;
void* right_value220;
struct list_item$1tuple2$2charphsNodephph* litem_257;
struct tuple2$2charphsNodeph* __dec_obj75;
_Bool _if_conditional339;
void* right_value221;
struct list_item$1tuple2$2charphsNodephph* litem_258;
struct tuple2$2charphsNodeph* __dec_obj76;
void* right_value222;
struct list_item$1tuple2$2charphsNodephph* litem_259;
struct tuple2$2charphsNodeph* __dec_obj77;
struct list$1tuple2$2charphsNodephph* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
right_value220 = (void*)0;
memset(&litem_257, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value221 = (void*)0;
memset(&litem_258, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value222 = (void*)0;
memset(&litem_259, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                    if(_if_conditional338=self->len==0,                    _if_conditional338) {
                        litem_257=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value220=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 226, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_257->prev=((void*)0);
                        litem_257->next=((void*)0);
                        __dec_obj75=litem_257->item;
                        litem_257->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_257;
                        self->head=litem_257;
                    }
                    else {
                        if(_if_conditional339=self->len==1,                        _if_conditional339) {
                            litem_258=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value221=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 236, "list_item$1tuple2$2charphsNodephph"))));
                            come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_258->prev=self->head;
                            litem_258->next=((void*)0);
                            __dec_obj76=litem_258->item;
                            litem_258->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_258;
                            self->head->next=litem_258;
                        }
                        else {
                            litem_259=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value222=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 246, "list_item$1tuple2$2charphsNodephph"))));
                            come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_259->prev=self->tail;
                            litem_259->next=((void*)0);
                            __dec_obj77=litem_259->item;
                            litem_259->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail->next=litem_259;
                            self->tail=litem_259;
                        }
                    }
                    self->len++;
                    __result184__ = __result_obj__ = self;
                    come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result184__;
                    come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphvoidp* tuple2$2charphvoidp_initialize(struct tuple2$2charphvoidp* self, char* v1, void* v2){
void* __result_obj__;
char* __dec_obj78;
struct tuple2$2charphvoidp* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
                    __dec_obj78=self->v1;
                    self->v1=(char*)come_increment_ref_count(v1);
                    __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
                    self->v2=v2;
                    __result185__ = __result_obj__ = self;
                    come_call_finalizer2(tuple2$2charphvoidpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result185__;
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
int __result186__;
memset(&__result_obj__, 0, sizeof(void*));
            __result186__ = self->len;
            return __result186__;
}

static struct CVALUE* map$2charphCVALUEphp_operator_load_element(struct map$2charphCVALUEph* self, char* key){
void* __result_obj__;
struct CVALUE* default_value_262;
unsigned int hash_263;
unsigned int it_264;
_Bool _while_condtional30;
_Bool _if_conditional342;
_Bool _if_conditional343;
struct CVALUE* __result187__;
_Bool _if_conditional344;
_Bool _if_conditional345;
struct CVALUE* __result188__;
struct CVALUE* __result189__;
struct CVALUE* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_262, 0, sizeof(struct CVALUE*));
memset(&hash_263, 0, sizeof(unsigned int));
memset(&it_264, 0, sizeof(unsigned int));
                    memset(&default_value_262,0,sizeof(struct CVALUE*));
                    hash_263=string_get_hash_key(((char*)key))%self->size;
                    it_264=hash_263;
                    while(_while_condtional30=(_Bool)1,                    _while_condtional30) {
                        if(_if_conditional342=self->item_existance[it_264],                        _if_conditional342) {
                            if(_if_conditional343=string_equals(self->keys[it_264],key),                            _if_conditional343) {
                                __result187__ = __result_obj__ = self->items[it_264];
                                come_call_finalizer2(CVALUE_finalize,default_value_262, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                return __result187__;
                            }
                            it_264++;
                            if(_if_conditional344=it_264>=self->size,                            _if_conditional344) {
                                it_264=0;
                            }
                            else {
                                if(_if_conditional345=it_264==hash_263,                                _if_conditional345) {
                                    __result188__ = __result_obj__ = default_value_262;
                                    come_call_finalizer2(CVALUE_finalize,default_value_262, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result188__;
                                }
                            }
                        }
                        else {
                            __result189__ = __result_obj__ = default_value_262;
                            come_call_finalizer2(CVALUE_finalize,default_value_262, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result189__;
                        }
                    }
                    __result190__ = __result_obj__ = default_value_262;
                    come_call_finalizer2(CVALUE_finalize,default_value_262, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result190__;
                    come_call_finalizer2(CVALUE_finalize,default_value_262, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int map$2charphCVALUEph_length(struct map$2charphCVALUEph* self){
void* __result_obj__;
int __result193__;
memset(&__result_obj__, 0, sizeof(void*));
            __result193__ = self->len;
            return __result193__;
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
int __result194__;
memset(&__result_obj__, 0, sizeof(void*));
                __result194__ = self->len;
                return __result194__;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional353;
_Bool _if_conditional354;
struct list$1CVALUEph* __result195__;
struct list_item$1CVALUEph* it_274;
int i_275;
_Bool _while_condtional31;
_Bool _if_conditional355;
struct CVALUE* __dec_obj81;
struct list$1CVALUEph* __result196__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_274, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_275, 0, sizeof(int));
                        if(_if_conditional353=position<0,                        _if_conditional353) {
                            position+=self->len;
                        }
                        if(_if_conditional354=position>=self->len,                        _if_conditional354) {
                            list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
                            __result195__ = __result_obj__ = self;
                            come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result195__;
                        }
                        it_274=self->head;
                        i_275=0;
                        while(_while_condtional31=it_274!=((void*)0),                        _while_condtional31) {
                            if(_if_conditional355=position==i_275,                            _if_conditional355) {
                                __dec_obj81=it_274->item;
                                it_274->item=(struct CVALUE*)come_increment_ref_count(item);
                                come_call_finalizer2(CVALUE_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                break;
                            }
                            it_274=it_274->next;
                            i_275++;
                        }
                        __result196__ = __result_obj__ = self;
                        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result196__;
                        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional356;
struct CVALUE* __result197__;
void* right_value233;
struct CVALUE* result_276;
_Bool _if_conditional357;
void* right_value234;
char* __dec_obj82;
_Bool _if_conditional358;
void* right_value235;
struct sType* __dec_obj83;
_Bool _if_conditional359;
struct CVALUE* __result198__;
memset(&__result_obj__, 0, sizeof(void*));
right_value233 = (void*)0;
memset(&result_276, 0, sizeof(struct CVALUE*));
right_value234 = (void*)0;
right_value235 = (void*)0;
                        if(_if_conditional356=self==(void*)0,                        _if_conditional356) {
                            __result197__ = __result_obj__ = (void*)0;
                            return __result197__;
                        }
                        result_276=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value233=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"))));
                        come_call_finalizer2(CVALUE_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional357=self!=((void*)0)&&self->c_value!=((void*)0),                        _if_conditional357) {
                            __dec_obj82=result_276->c_value;
                            result_276->c_value=(char*)come_increment_ref_count(((char*)(right_value234=string_clone(self->c_value))));
                            __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional358=self!=((void*)0)&&self->type!=((void*)0),                        _if_conditional358) {
                            __dec_obj83=result_276->type;
                            result_276->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value235=sType_clone(self->type))));
                            come_call_finalizer2(sType_finalize,__dec_obj83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional359=self!=((void*)0),                        _if_conditional359) {
                            result_276->var=self->var;
                        }
                        __result198__ = __result_obj__ = result_276;
                        come_call_finalizer2(CVALUE_finalize,result_276, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result198__;
                        come_call_finalizer2(CVALUE_finalize,result_276, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_283;
unsigned int hash_284;
unsigned int it_285;
_Bool _while_condtional32;
_Bool _if_conditional366;
_Bool _if_conditional367;
struct sClass* __result202__;
_Bool _if_conditional368;
_Bool _if_conditional369;
struct sClass* __result203__;
struct sClass* __result204__;
struct sClass* __result205__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_283, 0, sizeof(struct sClass*));
memset(&hash_284, 0, sizeof(unsigned int));
memset(&it_285, 0, sizeof(unsigned int));
                memset(&default_value_283,0,sizeof(struct sClass*));
                hash_284=string_get_hash_key(((char*)key))%self->size;
                it_285=hash_284;
                while(_while_condtional32=(_Bool)1,                _while_condtional32) {
                    if(_if_conditional366=self->item_existance[it_285],                    _if_conditional366) {
                        if(_if_conditional367=string_equals(self->keys[it_285],key),                        _if_conditional367) {
                            __result202__ = __result_obj__ = self->items[it_285];
                            come_call_finalizer2(sClass_finalize,default_value_283, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result202__;
                        }
                        it_285++;
                        if(_if_conditional368=it_285>=self->size,                        _if_conditional368) {
                            it_285=0;
                        }
                        else {
                            if(_if_conditional369=it_285==hash_284,                            _if_conditional369) {
                                __result203__ = __result_obj__ = default_value_283;
                                come_call_finalizer2(sClass_finalize,default_value_283, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result203__;
                            }
                        }
                    }
                    else {
                        __result204__ = __result_obj__ = default_value_283;
                        come_call_finalizer2(sClass_finalize,default_value_283, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result204__;
                    }
                }
                __result205__ = __result_obj__ = default_value_283;
                come_call_finalizer2(sClass_finalize,default_value_283, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result205__;
                come_call_finalizer2(sClass_finalize,default_value_283, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__;
void* right_value297;
void* right_value298;
struct list$1tuple2$2charphsNodephph* params_317;
void* right_value299;
void* right_value300;
void* right_value301;
_Bool _if_conditional384;
_Bool parse_method_generics_type_318;
char* p_319;
int sline_320;
_Bool _if_conditional385;
_Bool _if_conditional386;
void* right_value302;
char* word_321;
_Bool _if_conditional387;
void* right_value303;
void* right_value304;
struct list$1sTypeph* method_generics_types_322;
_Bool _if_conditional388;
_Bool _while_condtional34;
_Bool _if_conditional389;
_Bool _if_conditional390;
_Bool _if_conditional391;
void* right_value305;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* type_323;
char* name_324;
_Bool err_325;
_Bool _if_conditional394;
void* right_value306;
_Bool _if_conditional395;
_Bool _while_condtional35;
_Bool _if_conditional396;
char* p_326;
int sline_327;
_Bool err_flag_328;
void* right_value307;
char* label_329;
_Bool _if_conditional397;
void* right_value308;
char* __dec_obj96;
_Bool _if_conditional398;
char* __dec_obj97;
_Bool no_comma_330;
void* right_value309;
struct sNode* node_331;
void* right_value310;
struct sNode* __dec_obj98;
void* right_value311;
void* right_value312;
_Bool _if_conditional399;
_Bool _if_conditional400;
struct buffer* method_block_332;
int method_block_sline_333;
_Bool _if_conditional401;
char* head_334;
void* right_value313;
char* tail_335;
void* right_value314;
void* right_value315;
struct buffer* __dec_obj99;
int len_336;
void* right_value316;
char* mem_337;
_Bool _if_conditional402;
void* right_value317;
void* right_value318;
void* right_value319;
struct sNode* _inf_value2;
struct sMethodCallNode* _inf_obj_value2;
void* right_value327;
struct sNode* node_339;
struct sNode* __result213__;
memset(&__result_obj__, 0, sizeof(void*));
right_value297 = (void*)0;
right_value298 = (void*)0;
memset(&params_317, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
right_value299 = (void*)0;
right_value300 = (void*)0;
right_value301 = (void*)0;
memset(&parse_method_generics_type_318, 0, sizeof(_Bool));
memset(&p_319, 0, sizeof(char*));
memset(&sline_320, 0, sizeof(int));
right_value302 = (void*)0;
memset(&word_321, 0, sizeof(char*));
right_value303 = (void*)0;
right_value304 = (void*)0;
memset(&method_generics_types_322, 0, sizeof(struct list$1sTypeph*));
right_value305 = (void*)0;
memset(&type_323, 0, sizeof(struct sType*));
memset(&name_324, 0, sizeof(char*));
memset(&err_325, 0, sizeof(_Bool));
memset(&type_323, 0, sizeof(struct sType*));
memset(&name_324, 0, sizeof(char*));
memset(&err_325, 0, sizeof(_Bool));
right_value306 = (void*)0;
memset(&p_326, 0, sizeof(char*));
memset(&sline_327, 0, sizeof(int));
memset(&err_flag_328, 0, sizeof(_Bool));
right_value307 = (void*)0;
memset(&label_329, 0, sizeof(char*));
right_value308 = (void*)0;
memset(&no_comma_330, 0, sizeof(_Bool));
right_value309 = (void*)0;
memset(&node_331, 0, sizeof(struct sNode*));
right_value310 = (void*)0;
right_value311 = (void*)0;
right_value312 = (void*)0;
memset(&method_block_332, 0, sizeof(struct buffer*));
memset(&method_block_sline_333, 0, sizeof(int));
memset(&head_334, 0, sizeof(char*));
right_value313 = (void*)0;
memset(&tail_335, 0, sizeof(char*));
right_value314 = (void*)0;
right_value315 = (void*)0;
memset(&len_336, 0, sizeof(int));
right_value316 = (void*)0;
memset(&mem_337, 0, sizeof(char*));
right_value317 = (void*)0;
right_value318 = (void*)0;
right_value319 = (void*)0;
right_value327 = (void*)0;
memset(&node_339, 0, sizeof(struct sNode*));
    params_317=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value298=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value297=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "20method.c", 825, "list$1tuple2$2charphsNodephph"))))))));
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    list$1tuple2$2charphsNodephph_push_back(params_317,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value301=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value299=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 826, "tuple2$2charphsNodeph")))),((void*)0),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value300=sNode_clone(obj)))))))));
    come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value300) { right_value300 = come_decrement_ref_count2(right_value300, ((struct sNode*)right_value300)->finalize, ((struct sNode*)right_value300)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional384=*info->p==45&&*(info->p+1)==62,    _if_conditional384) {
        info->p+=2;
        skip_spaces_and_lf(info);
    }
    parse_method_generics_type_318=(_Bool)0;
    {
        p_319=info->p;
        sline_320=info->sline;
        if(_if_conditional385=*info->p==60,        _if_conditional385) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional386=xisalpha(*info->p)||*info->p==95,            _if_conditional386) {
                word_321=(char*)come_increment_ref_count(((char*)(right_value302=parse_word(info))));
                right_value302 = come_decrement_ref_count2(right_value302, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional387=is_type_name(word_321,info),                _if_conditional387) {
                    parse_method_generics_type_318=(_Bool)1;
                }
                word_321 = come_decrement_ref_count2(word_321, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_319;
        info->sline=sline_320;
    }
    method_generics_types_322=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value304=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value303=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "20method.c", 855, "list$1sTypeph"))))))));
    come_call_finalizer2(list$1sTypephp_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional388=parse_method_generics_type_318&&*info->p==60,    _if_conditional388) {
        info->p++;
        skip_spaces_and_lf(info);
        while(_while_condtional34=(_Bool)1,        _while_condtional34) {
            if(_if_conditional389=*info->p==0,            _if_conditional389) {
                err_msg(info,"unexpected source end");
                exit(2);
            }
            else {
                if(_if_conditional390=*info->p==62,                _if_conditional390) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else {
                    if(_if_conditional391=*info->p==44,                    _if_conditional391) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value305=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        type_323=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                        name_324=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                        err_325=multiple_assign_var4->v3;
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional394=!err_325,                        _if_conditional394) {
                            err_msg(info,"invalid method generics paramtor type");
                            exit(2);
                        }
                        list$1sTypeph_push_back(method_generics_types_322,(struct sType*)come_increment_ref_count(((struct sType*)(right_value306=sType_clone(type_323)))));
                        come_call_finalizer2(sType_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sType_finalize,type_323, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        name_324 = come_decrement_ref_count2(name_324, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
    }
    if(_if_conditional395=*info->p!=123,    _if_conditional395) {
        expected_next_character(40,info);
        while(_while_condtional35=(_Bool)1,        _while_condtional35) {
            if(_if_conditional396=*info->p==41,            _if_conditional396) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_326=info->p;
            sline_327=info->sline;
            err_flag_328=(_Bool)0;
            label_329=(char*)come_increment_ref_count(((char*)(right_value307=__builtin_string(""))));
            right_value307 = come_decrement_ref_count2(right_value307, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional397=xisalpha(*info->p)||*info->p==95,            _if_conditional397) {
                __dec_obj96=label_329;
                label_329=(char*)come_increment_ref_count(((char*)(right_value308=parse_word(info))));
                __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value308 = come_decrement_ref_count2(right_value308, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                err_flag_328=(_Bool)1;
            }
            if(_if_conditional398=err_flag_328==(_Bool)1&&*info->p==58,            _if_conditional398) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj97=label_329;
                label_329=((void*)0);
                __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->p=p_326;
                info->sline=sline_327;
            }
            no_comma_330=info->no_comma;
            info->no_comma=(_Bool)1;
            node_331=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value309=expression_v13(info))));
            if(right_value309) { right_value309 = come_decrement_ref_count2(right_value309, ((struct sNode*)right_value309)->finalize, ((struct sNode*)right_value309)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            __dec_obj98=node_331;
            node_331=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value310=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_331),info))));
            if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count2(__dec_obj98, ((struct sNode*)__dec_obj98)->finalize, ((struct sNode*)__dec_obj98)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value310) { right_value310 = come_decrement_ref_count2(right_value310, ((struct sNode*)right_value310)->finalize, ((struct sNode*)right_value310)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            info->no_comma=no_comma_330;
            list$1tuple2$2charphsNodephph_push_back(params_317,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value312=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value311=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 927, "tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(label_329),(struct sNode*)come_increment_ref_count(node_331))))));
            come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional399=*info->p==44,            _if_conditional399) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                if(_if_conditional400=*info->p==41,                _if_conditional400) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    label_329 = come_decrement_ref_count2(label_329, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_331) { node_331 = come_decrement_ref_count2(node_331, ((struct sNode*)node_331)->finalize, ((struct sNode*)node_331)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
            }
            label_329 = come_decrement_ref_count2(label_329, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_331) { node_331 = come_decrement_ref_count2(node_331, ((struct sNode*)node_331)->finalize, ((struct sNode*)node_331)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    method_block_332=((void*)0);
    method_block_sline_333=0;
    if(_if_conditional401=*info->p==123,    _if_conditional401) {
        head_334=info->p;
        method_block_sline_333=info->sline;
        ((char*)(right_value313=skip_block(info)));
        right_value313 = come_decrement_ref_count2(right_value313, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        tail_335=info->p;
        __dec_obj99=method_block_332;
        method_block_332=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value315=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value314=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 951, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj99, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        len_336=tail_335-head_334;
        mem_337=(char*)come_increment_ref_count(((char*)(right_value316=(char*)come_calloc(1, sizeof(char)*(1*(len_336+1)), "20method.c", 954, "char"))));
        right_value316 = come_decrement_ref_count2(right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(mem_337,head_334,len_336);
        mem_337[len_336]=0;
        buffer_append_str(method_block_332,mem_337);
        buffer_append_str(method_block_332,"\n");
        mem_337 = come_decrement_ref_count2(mem_337, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    if(_if_conditional402=*info->p==60,    _if_conditional402) {
    }
    parse_sharp_v5(info);
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 969, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sMethodCallNode*)(right_value319=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(right_value317=(struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 969, "sMethodCallNode")))),fun_name,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value318=sNode_clone(obj)))),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_317),method_block_332,method_block_sline_333,method_generics_types_322,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sMethodCallNode_finalize;
    _inf_value2->clone=(void*)sMethodCallNode_clone;
    _inf_value2->compile=(void*)sMethodCallNode_compile;
    _inf_value2->sline=(void*)sMethodCallNode_sline;
    _inf_value2->sname=(void*)sMethodCallNode_sname;
    _inf_value2->terminated=(void*)sMethodCallNode_terminated;
    _inf_value2->kind=(void*)sMethodCallNode_kind;
    node_339=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value327=_inf_value2)));
    come_call_finalizer2(sMethodCallNode_finalize,right_value317, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value318) { right_value318 = come_decrement_ref_count2(right_value318, ((struct sNode*)right_value318)->finalize, ((struct sNode*)right_value318)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    come_call_finalizer2(sMethodCallNode_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value327) { right_value327 = come_decrement_ref_count2(right_value327, ((struct sNode*)right_value327)->finalize, ((struct sNode*)right_value327)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result213__ = __result_obj__ = node_339;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,params_317, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_322, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,method_block_332, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(node_339) { node_339 = come_decrement_ref_count2(node_339, ((struct sNode*)node_339)->finalize, ((struct sNode*)node_339)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result213__;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,params_317, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_322, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,method_block_332, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(node_339) { node_339 = come_decrement_ref_count2(node_339, ((struct sNode*)node_339)->finalize, ((struct sNode*)node_339)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__;
char* __dec_obj94;
struct sNode* __dec_obj95;
struct tuple2$2charphsNodeph* __result210__;
memset(&__result_obj__, 0, sizeof(void*));
        __dec_obj94=self->v1;
        self->v1=(char*)come_increment_ref_count(v1);
        __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj95=self->v2;
        self->v2=(struct sNode*)come_increment_ref_count(v2);
        if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count2(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0,0,0, (void*)0); }
        __result210__ = __result_obj__ = self;
        come_call_finalizer2(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result210__;
        come_call_finalizer2(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional392;
_Bool _if_conditional393;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional392=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional392) {
                                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional393=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional393) {
                                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static void sMethodCallNode_finalize(struct sMethodCallNode* self){
void* __result_obj__;
_Bool _if_conditional403;
_Bool _if_conditional404;
_Bool _if_conditional405;
_Bool _if_conditional406;
_Bool _if_conditional407;
_Bool _if_conditional408;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional403=self!=((void*)0)&&self->obj!=((void*)0),        _if_conditional403) {
            if(self->obj) { self->obj = come_decrement_ref_count2(self->obj, ((struct sNode*)self->obj)->finalize, ((struct sNode*)self->obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(_if_conditional404=self!=((void*)0)&&self->fun_name!=((void*)0),        _if_conditional404) {
            self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional405=self!=((void*)0)&&self->params!=((void*)0),        _if_conditional405) {
            come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,self->params, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional406=self!=((void*)0)&&self->method_block!=((void*)0),        _if_conditional406) {
            come_call_finalizer2(buffer_finalize,self->method_block, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional407=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional407) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional408=self!=((void*)0)&&self->method_generics_types!=((void*)0),        _if_conditional408) {
            come_call_finalizer2(list$1sTypephp_finalize,self->method_generics_types, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self){
void* __result_obj__;
_Bool _if_conditional409;
struct sMethodCallNode* __result211__;
void* right_value320;
struct sMethodCallNode* result_338;
_Bool _if_conditional410;
void* right_value321;
struct sNode* __dec_obj100;
_Bool _if_conditional411;
void* right_value322;
char* __dec_obj101;
_Bool _if_conditional412;
void* right_value323;
struct list$1tuple2$2charphsNodephph* __dec_obj102;
_Bool _if_conditional413;
void* right_value324;
struct buffer* __dec_obj103;
_Bool _if_conditional414;
_Bool _if_conditional415;
void* right_value325;
char* __dec_obj104;
_Bool _if_conditional416;
_Bool _if_conditional417;
void* right_value326;
struct list$1sTypeph* __dec_obj105;
struct sMethodCallNode* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
right_value320 = (void*)0;
memset(&result_338, 0, sizeof(struct sMethodCallNode*));
right_value321 = (void*)0;
right_value322 = (void*)0;
right_value323 = (void*)0;
right_value324 = (void*)0;
right_value325 = (void*)0;
right_value326 = (void*)0;
        if(_if_conditional409=self==(void*)0,        _if_conditional409) {
            __result211__ = __result_obj__ = (void*)0;
            return __result211__;
        }
        result_338=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(right_value320=(struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "sMethodCallNode_clone", 3, "sMethodCallNode"))));
        come_call_finalizer2(sMethodCallNode_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional410=self!=((void*)0)&&self->obj!=((void*)0),        _if_conditional410) {
            __dec_obj100=result_338->obj;
            result_338->obj=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value321=sNode_clone(self->obj))));
            if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count2(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value321) { right_value321 = come_decrement_ref_count2(right_value321, ((struct sNode*)right_value321)->finalize, ((struct sNode*)right_value321)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional411=self!=((void*)0)&&self->fun_name!=((void*)0),        _if_conditional411) {
            __dec_obj101=result_338->fun_name;
            result_338->fun_name=(char*)come_increment_ref_count(((char*)(right_value322=string_clone(self->fun_name))));
            __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value322 = come_decrement_ref_count2(right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional412=self!=((void*)0)&&self->params!=((void*)0),        _if_conditional412) {
            __dec_obj102=result_338->params;
            result_338->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value323=list$1tuple2$2charphsNodephphp_clone(self->params))));
            come_call_finalizer2(list$1tuple2$2charphsNodephph_finalize,__dec_obj102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional413=self!=((void*)0)&&self->method_block!=((void*)0),        _if_conditional413) {
            __dec_obj103=result_338->method_block;
            result_338->method_block=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value324=buffer_clone(self->method_block))));
            come_call_finalizer2(buffer_finalize,__dec_obj103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional414=self!=((void*)0),        _if_conditional414) {
            result_338->sline=self->sline;
        }
        if(_if_conditional415=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional415) {
            __dec_obj104=result_338->sname;
            result_338->sname=(char*)come_increment_ref_count(((char*)(right_value325=string_clone(self->sname))));
            __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value325 = come_decrement_ref_count2(right_value325, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional416=self!=((void*)0),        _if_conditional416) {
            result_338->method_block_sline=self->method_block_sline;
        }
        if(_if_conditional417=self!=((void*)0)&&self->method_generics_types!=((void*)0),        _if_conditional417) {
            __dec_obj105=result_338->method_generics_types;
            result_338->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value326=list$1sTypephp_clone(self->method_generics_types))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        __result212__ = __result_obj__ = result_338;
        come_call_finalizer2(sMethodCallNode_finalize,result_338, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result212__;
        come_call_finalizer2(sMethodCallNode_finalize,result_338, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional418;
void* right_value328;
void* right_value329;
struct sNode* _inf_value3;
struct sCurrentNode* _inf_obj_value3;
void* right_value332;
struct sNode* __result216__;
void* right_value333;
struct sNode* __result217__;
memset(&__result_obj__, 0, sizeof(void*));
right_value328 = (void*)0;
right_value329 = (void*)0;
right_value332 = (void*)0;
right_value333 = (void*)0;
    if(_if_conditional418=charp_operator_equals(buf,"__current__"),    _if_conditional418) {
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 977, "struct sNode");
        _inf_obj_value3=come_increment_ref_count(((struct sCurrentNode*)(right_value329=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value328=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 977, "sCurrentNode")))),info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sCurrentNode_finalize;
        _inf_value3->clone=(void*)sCurrentNode_clone;
        _inf_value3->compile=(void*)sCurrentNode_compile;
        _inf_value3->sline=(void*)sCurrentNode_sline;
        _inf_value3->sname=(void*)sCurrentNode_sname;
        _inf_value3->terminated=(void*)sCurrentNode_terminated;
        _inf_value3->kind=(void*)sCurrentNode_kind;
        __result216__ = __result_obj__ = ((struct sNode*)(right_value332=_inf_value3));
        come_call_finalizer2(sCurrentNode_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sCurrentNode_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value332) { right_value332 = come_decrement_ref_count2(right_value332, ((struct sNode*)right_value332)->finalize, ((struct sNode*)right_value332)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result216__;
    }
    __result217__ = __result_obj__ = ((struct sNode*)(right_value333=string_node_v15(buf,head,head_sline,info)));
    if(right_value333) { right_value333 = come_decrement_ref_count2(right_value333, ((struct sNode*)right_value333)->finalize, ((struct sNode*)right_value333)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result217__;
}

static void sCurrentNode_finalize(struct sCurrentNode* self){
void* __result_obj__;
_Bool _if_conditional419;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional419=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional419) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self){
void* __result_obj__;
_Bool _if_conditional420;
struct sCurrentNode* __result214__;
void* right_value330;
struct sCurrentNode* result_340;
_Bool _if_conditional421;
_Bool _if_conditional422;
void* right_value331;
char* __dec_obj106;
struct sCurrentNode* __result215__;
memset(&__result_obj__, 0, sizeof(void*));
right_value330 = (void*)0;
memset(&result_340, 0, sizeof(struct sCurrentNode*));
right_value331 = (void*)0;
            if(_if_conditional420=self==(void*)0,            _if_conditional420) {
                __result214__ = __result_obj__ = (void*)0;
                return __result214__;
            }
            result_340=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value330=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3, "sCurrentNode"))));
            come_call_finalizer2(sCurrentNode_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional421=self!=((void*)0),            _if_conditional421) {
                result_340->sline=self->sline;
            }
            if(_if_conditional422=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional422) {
                __dec_obj106=result_340->sname;
                result_340->sname=(char*)come_increment_ref_count(((char*)(right_value331=string_clone(self->sname))));
                __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value331 = come_decrement_ref_count2(right_value331, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result215__ = __result_obj__ = result_340;
            come_call_finalizer2(sCurrentNode_finalize,result_340, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result215__;
            come_call_finalizer2(sCurrentNode_finalize,result_340, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* post_position_operator3_v20(struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value334;
struct sNode* __result218__;
memset(&__result_obj__, 0, sizeof(void*));
right_value334 = (void*)0;
    __result218__ = __result_obj__ = ((struct sNode*)(right_value334=post_position_operator3_v5((struct sNode*)come_increment_ref_count(node),info)));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right_value334) { right_value334 = come_decrement_ref_count2(right_value334, ((struct sNode*)right_value334)->finalize, ((struct sNode*)right_value334)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result218__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

