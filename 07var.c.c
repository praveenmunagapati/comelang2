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
struct tuple3$3sTypephcharphsNodeph
{
    struct sType* v1;
    char* v2;
    struct sNode* v3;
};
struct list_item$1tuple3$3sTypephcharphsNodephph
{
    struct tuple3$3sTypephcharphsNodeph* item;
    struct list_item$1tuple3$3sTypephcharphsNodephph* prev;
    struct list_item$1tuple3$3sTypephcharphsNodephph* next;
};
struct list$1tuple3$3sTypephcharphsNodephph
{
    struct list_item$1tuple3$3sTypephcharphsNodephph* head;
    struct list_item$1tuple3$3sTypephcharphsNodephph* tail;
    int len;
    struct list_item$1tuple3$3sTypephcharphsNodephph* it;
};
struct sStoreNode
{
    char* name;
    struct list$1charph* multiple_assign;
    struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare;
    struct sNode* right_value;
    struct sType* type;
    char* array_initializer;
    _Bool alloc;
    int sline;
    char* sname;
};
struct sLoadNode
{
    char* name;
    int sline;
    char* sname;
};
struct sFunLoadNode
{
    char* name;
    int sline;
    char* sname;
};
struct tuple3$3sTypephcharphvoidp
{
    struct sType* v1;
    char* v2;
    void* v3;
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

struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, char* array_initializer, struct sInfo* info);

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
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_clone(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_initialize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void list$1tuple3$3sTypephcharphsNodephphp_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void list_item$1tuple3$3sTypephcharphsNodephphp_finalize(struct list_item$1tuple3$3sTypephcharphsNodephph* self);
static void tuple3$3sTypephcharphsNodephp_finalize(struct tuple3$3sTypephcharphsNodeph* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_add(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item);
static void tuple3$3sTypephcharphsNodeph_finalize(struct tuple3$3sTypephcharphsNodeph* self);
static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodephp_clone(struct tuple3$3sTypephcharphsNodeph* self);
static void list$1tuple3$3sTypephcharphsNodephph_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self);
_Bool sStoreNode_terminated();

char* sStoreNode_kind();

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info);

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static void sVar_finalize(struct sVar* self);
static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_begin(struct list$1tuple3$3sTypephcharphsNodephph* self);
static _Bool list$1tuple3$3sTypephcharphsNodephph_end(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_next(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void CVALUE_finalize(struct CVALUE* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
int sStoreNode_sline(struct sStoreNode* self, struct sInfo* info);

char* sStoreNode_sname(struct sStoreNode* self, struct sInfo* info);

struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct sType* type, _Bool alloc, struct sNode* right_node, struct sInfo* info);

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info);

_Bool sLoadNode_terminated();

char* sLoadNode_kind();

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info);

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
int sLoadNode_sline(struct sLoadNode* self, struct sInfo* info);

char* sLoadNode_sname(struct sLoadNode* self, struct sInfo* info);

struct sNode* load_var(char* name, struct sInfo* info);

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info);

static void sFunLoadNode_finalize(struct sFunLoadNode* self);
_Bool sFunLoadNode_terminated();

char* sFunLoadNode_kind();

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info);

int sFunLoadNode_sline(struct sFunLoadNode* self, struct sInfo* info);

char* sFunLoadNode_sname(struct sFunLoadNode* self, struct sInfo* info);

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info);

static struct map$2charphsVarph* map$2charphsVarph_insert(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3);
static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item);
static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3);
static void sLoadNode_finalize(struct sLoadNode* self);
static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self);
static void sStoreNode_finalize(struct sStoreNode* self);
static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self);
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
    result_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1950, "buffer"))))))));
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
    result_1=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1957, "buffer"))))))));
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
    result_2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1964, "buffer"))))))));
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
    result_3=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1971, "buffer"))))))));
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
    result_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1978, "buffer"))))))));
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
    result_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1985, "buffer"))))))));
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
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2000, "smart_pointer$1char"))));
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
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2010, "smart_pointer$1char"))));
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
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2020, "smart_pointer$1short"))));
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
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2030, "smart_pointer$1int"))));
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
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2040, "smart_pointer$1long"))));
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
    __result14__ = __result_obj__ = ((struct smart_pointer$1char*)(right_value25=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value22=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2208, "smart_pointer$1char")))),self,sizeof(char)*len)));
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
    __result16__ = __result_obj__ = ((struct smart_pointer$1short*)(right_value29=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value26=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2213, "smart_pointer$1short")))),self,sizeof(short short)*len)));
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
    __result18__ = __result_obj__ = ((struct smart_pointer$1int*)(right_value33=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value30=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2218, "smart_pointer$1int")))),self,sizeof(int)*len)));
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
    __result20__ = __result_obj__ = ((struct smart_pointer$1long*)(right_value37=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value34=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2223, "smart_pointer$1long")))),self,sizeof(long)*len)));
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
    __result22__ = __result_obj__ = ((struct smart_pointer$1float*)(right_value41=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)(right_value38=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang2.h", 2228, "smart_pointer$1float")))),self,sizeof(float)*len)));
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
    __result24__ = __result_obj__ = ((struct smart_pointer$1double*)(right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang2.h", 2233, "smart_pointer$1double")))),self,sizeof(double)*len)));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2052, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2052, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2052, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2052, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2052, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2052, "buffer"))))))));
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










struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, char* array_initializer, struct sInfo* info){
void* __result_obj__;
void* right_value49;
char* __dec_obj12;
_Bool _if_conditional7;
void* right_value85;
struct sType* __dec_obj36;
struct sType* __dec_obj37;
struct sNode* __dec_obj38;
_Bool _if_conditional98;
void* right_value86;
struct list$1charph* __dec_obj39;
struct list$1charph* __dec_obj40;
_Bool _if_conditional99;
void* right_value97;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj47;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj48;
char* __dec_obj49;
void* right_value98;
char* __dec_obj50;
struct sStoreNode* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value49 = (void*)0;
right_value85 = (void*)0;
right_value86 = (void*)0;
right_value97 = (void*)0;
right_value98 = (void*)0;
    __dec_obj12=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value49=__builtin_string(name))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value49 = come_decrement_ref_count2(right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->alloc=alloc;
    if(type) {
        __dec_obj36=self->type;
        self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value85=sType_clone(type))));
        come_call_finalizer2(sType_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj37=self->type;
        self->type=((void*)0);
        come_call_finalizer2(sType_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __dec_obj38=self->right_value;
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0, (void*)0); }
    if(multiple_assign) {
        __dec_obj39=self->multiple_assign;
        self->multiple_assign=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value86=list$1charphp_clone(multiple_assign))));
        come_call_finalizer2(list$1charph_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj40=self->multiple_assign;
        self->multiple_assign=((void*)0);
        come_call_finalizer2(list$1charph_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    if(multiple_declare) {
        __dec_obj47=self->multiple_declare;
        self->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value97=list$1tuple3$3sTypephcharphsNodephphp_clone(multiple_declare))));
        come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephph_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj48=self->multiple_declare;
        self->multiple_declare=((void*)0);
        come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephph_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __dec_obj49=self->array_initializer;
    self->array_initializer=(char*)come_increment_ref_count(array_initializer);
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->sline=info->sline;
    __dec_obj50=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value98=__builtin_string(info->sname))));
    __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result58__ = __result_obj__ = self;
    come_call_finalizer2(sStoreNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,multiple_assign, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(right_value) { right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    array_initializer = come_decrement_ref_count2(array_initializer, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result58__;
    come_call_finalizer2(sStoreNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,multiple_assign, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(right_value) { right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    array_initializer = come_decrement_ref_count2(array_initializer, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional8;
struct sType* __result34__;
void* right_value50;
struct sType* result_11;
_Bool _if_conditional26;
_Bool _if_conditional27;
void* right_value57;
struct list$1sTypeph* __dec_obj16;
_Bool _if_conditional31;
void* right_value60;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional35;
void* right_value61;
struct tuple1$1sTypeph* __dec_obj19;
_Bool _if_conditional36;
void* right_value62;
char* __dec_obj20;
_Bool _if_conditional37;
void* right_value63;
struct list$1sTypeph* __dec_obj21;
_Bool _if_conditional38;
void* right_value71;
struct list$1sNodeph* __dec_obj25;
_Bool _if_conditional51;
_Bool _if_conditional52;
void* right_value72;
struct list$1sTypeph* __dec_obj26;
_Bool _if_conditional53;
void* right_value79;
struct list$1charph* __dec_obj30;
_Bool _if_conditional57;
void* right_value80;
struct tuple1$1sTypeph* __dec_obj31;
_Bool _if_conditional58;
_Bool _if_conditional59;
void* right_value81;
struct sNode* __dec_obj32;
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
_Bool _if_conditional83;
void* right_value82;
struct sNode* __dec_obj33;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
void* right_value83;
char* __dec_obj34;
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
void* right_value84;
char* __dec_obj35;
_Bool _if_conditional97;
struct sType* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
right_value50 = (void*)0;
memset(&result_11, 0, sizeof(struct sType*));
right_value57 = (void*)0;
right_value60 = (void*)0;
right_value61 = (void*)0;
right_value62 = (void*)0;
right_value63 = (void*)0;
right_value71 = (void*)0;
right_value72 = (void*)0;
right_value79 = (void*)0;
right_value80 = (void*)0;
right_value81 = (void*)0;
right_value82 = (void*)0;
right_value83 = (void*)0;
right_value84 = (void*)0;
            if(_if_conditional8=self==(void*)0,            _if_conditional8) {
                __result34__ = __result_obj__ = (void*)0;
                return __result34__;
            }
            result_11=(struct sType*)come_increment_ref_count(((struct sType*)(right_value50=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
            come_call_finalizer2(sType_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional26=self!=((void*)0),            _if_conditional26) {
                result_11->mClass=self->mClass;
            }
            if(_if_conditional27=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional27) {
                __dec_obj16=result_11->mMultipleTypes;
                result_11->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value57=list$1sTypephp_clone(self->mMultipleTypes))));
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional31=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional31) {
                __dec_obj18=result_11->mNoSolvedGenericsType;
                result_11->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value60=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional35=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional35) {
                __dec_obj19=result_11->mOriginalLoadVarType;
                result_11->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value61=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional36=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional36) {
                __dec_obj20=result_11->mGenericsName;
                result_11->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value62=string_clone(self->mGenericsName))));
                __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value62 = come_decrement_ref_count2(right_value62, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional37=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional37) {
                __dec_obj21=result_11->mGenericsTypes;
                result_11->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value63=list$1sTypephp_clone(self->mGenericsTypes))));
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional38=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional38) {
                __dec_obj25=result_11->mArrayNum;
                result_11->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value71=list$1sNodephp_clone(self->mArrayNum))));
                come_call_finalizer2(list$1sNodeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sNodephp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional51=self!=((void*)0),            _if_conditional51) {
                result_11->mOmitArrayNum=self->mOmitArrayNum;
            }
            if(_if_conditional52=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional52) {
                __dec_obj26=result_11->mParamTypes;
                result_11->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value72=list$1sTypephp_clone(self->mParamTypes))));
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional53=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional53) {
                __dec_obj30=result_11->mParamNames;
                result_11->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value79=list$1charphp_clone(self->mParamNames))));
                come_call_finalizer2(list$1charph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional57=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional57) {
                __dec_obj31=result_11->mResultType;
                result_11->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value80=tuple1$1sTypephp_clone(self->mResultType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional58=self!=((void*)0),            _if_conditional58) {
                result_11->mVarArgs=self->mVarArgs;
            }
            if(_if_conditional59=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional59) {
                __dec_obj32=result_11->mAlignas;
                result_11->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value81=sNode_clone(self->mAlignas))));
                if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value81) { right_value81 = come_decrement_ref_count2(right_value81, ((struct sNode*)right_value81)->finalize, ((struct sNode*)right_value81)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional60=self!=((void*)0),            _if_conditional60) {
                result_11->mUnsigned=self->mUnsigned;
            }
            if(_if_conditional61=self!=((void*)0),            _if_conditional61) {
                result_11->mShort=self->mShort;
            }
            if(_if_conditional62=self!=((void*)0),            _if_conditional62) {
                result_11->mLong=self->mLong;
            }
            if(_if_conditional63=self!=((void*)0),            _if_conditional63) {
                result_11->mLongLong=self->mLongLong;
            }
            if(_if_conditional64=self!=((void*)0),            _if_conditional64) {
                result_11->mConstant=self->mConstant;
            }
            if(_if_conditional65=self!=((void*)0),            _if_conditional65) {
                result_11->mRegister=self->mRegister;
            }
            if(_if_conditional66=self!=((void*)0),            _if_conditional66) {
                result_11->mVolatile=self->mVolatile;
            }
            if(_if_conditional67=self!=((void*)0),            _if_conditional67) {
                result_11->mStatic=self->mStatic;
            }
            if(_if_conditional68=self!=((void*)0),            _if_conditional68) {
                result_11->mExtern=self->mExtern;
            }
            if(_if_conditional69=self!=((void*)0),            _if_conditional69) {
                result_11->mRestrict=self->mRestrict;
            }
            if(_if_conditional70=self!=((void*)0),            _if_conditional70) {
                result_11->mImmutable=self->mImmutable;
            }
            if(_if_conditional71=self!=((void*)0),            _if_conditional71) {
                result_11->mHeap=self->mHeap;
            }
            if(_if_conditional72=self!=((void*)0),            _if_conditional72) {
                result_11->mDummyHeap=self->mDummyHeap;
            }
            if(_if_conditional73=self!=((void*)0),            _if_conditional73) {
                result_11->mDelegate=self->mDelegate;
            }
            if(_if_conditional74=self!=((void*)0),            _if_conditional74) {
                result_11->mShare=self->mShare;
            }
            if(_if_conditional75=self!=((void*)0),            _if_conditional75) {
                result_11->mClone=self->mClone;
            }
            if(_if_conditional76=self!=((void*)0),            _if_conditional76) {
                result_11->mNoHeap=self->mNoHeap;
            }
            if(_if_conditional77=self!=((void*)0),            _if_conditional77) {
                result_11->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            if(_if_conditional78=self!=((void*)0),            _if_conditional78) {
                result_11->mRefference=self->mRefference;
            }
            if(_if_conditional79=self!=((void*)0),            _if_conditional79) {
                result_11->mException=self->mException;
            }
            if(_if_conditional80=self!=((void*)0),            _if_conditional80) {
                result_11->mPointerNum=self->mPointerNum;
            }
            if(_if_conditional81=self!=((void*)0),            _if_conditional81) {
                result_11->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
            }
            if(_if_conditional82=self!=((void*)0),            _if_conditional82) {
                result_11->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            if(_if_conditional83=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional83) {
                __dec_obj33=result_11->mSizeNum;
                result_11->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value82=sNode_clone(self->mSizeNum))));
                if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value82) { right_value82 = come_decrement_ref_count2(right_value82, ((struct sNode*)right_value82)->finalize, ((struct sNode*)right_value82)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional84=self!=((void*)0),            _if_conditional84) {
                result_11->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            if(_if_conditional85=self!=((void*)0),            _if_conditional85) {
                result_11->mTypeOfExpression=self->mTypeOfExpression;
            }
            if(_if_conditional86=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional86) {
                __dec_obj34=result_11->mOriginalTypeName;
                result_11->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value83=string_clone(self->mOriginalTypeName))));
                __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional87=self!=((void*)0),            _if_conditional87) {
                result_11->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            if(_if_conditional88=self!=((void*)0),            _if_conditional88) {
                result_11->mFunctionParam=self->mFunctionParam;
            }
            if(_if_conditional89=self!=((void*)0),            _if_conditional89) {
                result_11->mAllocaValue=self->mAllocaValue;
            }
            if(_if_conditional90=self!=((void*)0),            _if_conditional90) {
                result_11->mGenericsStruct=self->mGenericsStruct;
            }
            if(_if_conditional91=self!=((void*)0),            _if_conditional91) {
                result_11->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            if(_if_conditional92=self!=((void*)0),            _if_conditional92) {
                result_11->mComeMemCore=self->mComeMemCore;
            }
            if(_if_conditional93=self!=((void*)0),            _if_conditional93) {
                result_11->mInline=self->mInline;
            }
            if(_if_conditional94=self!=((void*)0),            _if_conditional94) {
                result_11->mNullValue=self->mNullValue;
            }
            if(_if_conditional95=self!=((void*)0),            _if_conditional95) {
                result_11->mGuardValue=self->mGuardValue;
            }
            if(_if_conditional96=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional96) {
                __dec_obj35=result_11->mAsmName;
                result_11->mAsmName=(char*)come_increment_ref_count(((char*)(right_value84=string_clone(self->mAsmName))));
                __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional97=self!=((void*)0),            _if_conditional97) {
                result_11->mArrayPointerType=self->mArrayPointerType;
            }
            __result51__ = __result_obj__ = result_11;
            come_call_finalizer2(sType_finalize,result_11, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result51__;
            come_call_finalizer2(sType_finalize,result_11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional9;
_Bool _if_conditional11;
_Bool _if_conditional13;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _if_conditional16;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional9=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                _if_conditional9) {
                    come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional11=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional11) {
                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional13=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional13) {
                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional14=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional14) {
                    self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional15=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional15) {
                    come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional16=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional16) {
                    come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional18=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional18) {
                    come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional19=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional19) {
                    come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional21=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional21) {
                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional22=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional22) {
                    if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional23=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional23) {
                    if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional24=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional24) {
                    self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional25=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional25) {
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
                        it_12=self->head;
                        while(_while_condtional1=it_12!=((void*)0),                        _while_condtional1) {
                            prev_it_13=it_12;
                            it_12=it_12->next;
                            come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional10;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional10=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional10) {
                                    come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional12;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional12=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional12) {
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
                        it_14=self->head;
                        while(_while_condtional2=it_14!=((void*)0),                        _while_condtional2) {
                            prev_it_15=it_14;
                            it_14=it_14->next;
                            come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional17=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional17) {
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
                        it_16=self->head;
                        while(_while_condtional3=it_16!=((void*)0),                        _while_condtional3) {
                            prev_it_17=it_16;
                            it_16=it_16->next;
                            come_call_finalizer2(list_item$1charphp_finalize,prev_it_17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional20;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional20=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional20) {
                                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional28;
struct list$1sTypeph* __result35__;
void* right_value51;
void* right_value52;
struct list$1sTypeph* result_18;
struct list_item$1sTypeph* it_19;
_Bool _while_condtional4;
void* right_value56;
struct list$1sTypeph* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
right_value51 = (void*)0;
right_value52 = (void*)0;
memset(&result_18, 0, sizeof(struct list$1sTypeph*));
memset(&it_19, 0, sizeof(struct list_item$1sTypeph*));
right_value56 = (void*)0;
                    if(_if_conditional28=self==((void*)0),                    _if_conditional28) {
                        __result35__ = __result_obj__ = ((void*)0);
                        return __result35__;
                    }
                    result_18=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value52=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value51=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 142, "list$1sTypeph"))))))));
                    come_call_finalizer2(list$1sTypephp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_19=self->head;
                    while(_while_condtional4=it_19!=((void*)0),                    _while_condtional4) {
                        list$1sTypeph_add(result_18,(struct sType*)come_increment_ref_count(((struct sType*)(right_value56=sType_clone(it_19->item)))));
                        come_call_finalizer2(sType_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        it_19=it_19->next;
                    }
                    __result38__ = __result_obj__ = result_18;
                    come_call_finalizer2(list$1sTypephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result38__;
                    come_call_finalizer2(list$1sTypephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result36__ = __result_obj__ = self;
                        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result36__;
                        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional29;
void* right_value53;
struct list_item$1sTypeph* litem_20;
struct sType* __dec_obj13;
_Bool _if_conditional30;
void* right_value54;
struct list_item$1sTypeph* litem_21;
struct sType* __dec_obj14;
void* right_value55;
struct list_item$1sTypeph* litem_22;
struct sType* __dec_obj15;
struct list$1sTypeph* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
right_value53 = (void*)0;
memset(&litem_20, 0, sizeof(struct list_item$1sTypeph*));
right_value54 = (void*)0;
memset(&litem_21, 0, sizeof(struct list_item$1sTypeph*));
right_value55 = (void*)0;
memset(&litem_22, 0, sizeof(struct list_item$1sTypeph*));
                            if(_if_conditional29=self->len==0,                            _if_conditional29) {
                                litem_20=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value53=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 156, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_20->prev=((void*)0);
                                litem_20->next=((void*)0);
                                __dec_obj13=litem_20->item;
                                litem_20->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_20;
                                self->head=litem_20;
                            }
                            else {
                                if(_if_conditional30=self->len==1,                                _if_conditional30) {
                                    litem_21=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value54=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 166, "list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_21->prev=self->head;
                                    litem_21->next=((void*)0);
                                    __dec_obj14=litem_21->item;
                                    litem_21->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    self->tail=litem_21;
                                    self->head->next=litem_21;
                                }
                                else {
                                    litem_22=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value55=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 176, "list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_22->prev=self->tail;
                                    litem_22->next=((void*)0);
                                    __dec_obj15=litem_22->item;
                                    litem_22->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    self->tail->next=litem_22;
                                    self->tail=litem_22;
                                }
                            }
                            self->len++;
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
_Bool _if_conditional32;
struct tuple1$1sTypeph* __result39__;
void* right_value58;
struct tuple1$1sTypeph* result_23;
_Bool _if_conditional34;
void* right_value59;
struct sType* __dec_obj17;
struct tuple1$1sTypeph* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
right_value58 = (void*)0;
memset(&result_23, 0, sizeof(struct tuple1$1sTypeph*));
right_value59 = (void*)0;
                    if(_if_conditional32=self==(void*)0,                    _if_conditional32) {
                        __result39__ = __result_obj__ = (void*)0;
                        return __result39__;
                    }
                    result_23=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value58=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional34=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional34) {
                        __dec_obj17=result_23->v1;
                        result_23->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value59=sType_clone(self->v1))));
                        come_call_finalizer2(sType_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    __result40__ = __result_obj__ = result_23;
                    come_call_finalizer2(tuple1$1sTypeph_finalize,result_23, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result40__;
                    come_call_finalizer2(tuple1$1sTypeph_finalize,result_23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional33;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional33=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional33) {
                            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional39;
struct list$1sNodeph* __result41__;
void* right_value64;
void* right_value65;
struct list$1sNodeph* result_24;
struct list_item$1sNodeph* it_25;
_Bool _while_condtional5;
void* right_value70;
struct list$1sNodeph* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
right_value64 = (void*)0;
right_value65 = (void*)0;
memset(&result_24, 0, sizeof(struct list$1sNodeph*));
memset(&it_25, 0, sizeof(struct list_item$1sNodeph*));
right_value70 = (void*)0;
                    if(_if_conditional39=self==((void*)0),                    _if_conditional39) {
                        __result41__ = __result_obj__ = ((void*)0);
                        return __result41__;
                    }
                    result_24=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value65=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value64=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 142, "list$1sNodeph"))))))));
                    come_call_finalizer2(list$1sNodephp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1sNodephp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_25=self->head;
                    while(_while_condtional5=it_25!=((void*)0),                    _while_condtional5) {
                        list$1sNodeph_add(result_24,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value70=sNode_clone(it_25->item)))));
                        if(right_value70) { right_value70 = come_decrement_ref_count2(right_value70, ((struct sNode*)right_value70)->finalize, ((struct sNode*)right_value70)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        it_25=it_25->next;
                    }
                    __result46__ = __result_obj__ = result_24;
                    come_call_finalizer2(list$1sNodephp_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result46__;
                    come_call_finalizer2(list$1sNodephp_finalize,result_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result42__ = __result_obj__ = self;
                        come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result42__;
                        come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional40;
void* right_value66;
struct list_item$1sNodeph* litem_26;
struct sNode* __dec_obj22;
_Bool _if_conditional41;
void* right_value67;
struct list_item$1sNodeph* litem_27;
struct sNode* __dec_obj23;
void* right_value68;
struct list_item$1sNodeph* litem_28;
struct sNode* __dec_obj24;
struct list$1sNodeph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
right_value66 = (void*)0;
memset(&litem_26, 0, sizeof(struct list_item$1sNodeph*));
right_value67 = (void*)0;
memset(&litem_27, 0, sizeof(struct list_item$1sNodeph*));
right_value68 = (void*)0;
memset(&litem_28, 0, sizeof(struct list_item$1sNodeph*));
                            if(_if_conditional40=self->len==0,                            _if_conditional40) {
                                litem_26=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value66=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 156, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_26->prev=((void*)0);
                                litem_26->next=((void*)0);
                                __dec_obj22=litem_26->item;
                                litem_26->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_26;
                                self->head=litem_26;
                            }
                            else {
                                if(_if_conditional41=self->len==1,                                _if_conditional41) {
                                    litem_27=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value67=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 166, "list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_27->prev=self->head;
                                    litem_27->next=((void*)0);
                                    __dec_obj23=litem_27->item;
                                    litem_27->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail=litem_27;
                                    self->head->next=litem_27;
                                }
                                else {
                                    litem_28=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value68=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 176, "list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_28->prev=self->tail;
                                    litem_28->next=((void*)0);
                                    __dec_obj24=litem_28->item;
                                    litem_28->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail->next=litem_28;
                                    self->tail=litem_28;
                                }
                            }
                            self->len++;
                            __result43__ = __result_obj__ = self;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result43__;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional42;
struct sNode* __result44__;
void* right_value69;
struct sNode* result_29;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _if_conditional49;
_Bool _if_conditional50;
struct sNode* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
right_value69 = (void*)0;
memset(&result_29, 0, sizeof(struct sNode*));
                            if(_if_conditional42=self==(void*)0,                            _if_conditional42) {
                                __result44__ = __result_obj__ = (void*)0;
                                return __result44__;
                            }
                            result_29=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value69=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                            if(right_value69) { right_value69 = come_decrement_ref_count2(right_value69, ((struct sNode*)right_value69)->finalize, ((struct sNode*)right_value69)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            if(_if_conditional43=self!=((void*)0)&&self->clone!=((void*)0),                            _if_conditional43) {
                                result_29->_protocol_obj=self->clone(self->_protocol_obj);
                            }
                            if(_if_conditional44=self!=((void*)0),                            _if_conditional44) {
                                result_29->finalize=self->finalize;
                            }
                            if(_if_conditional45=self!=((void*)0),                            _if_conditional45) {
                                result_29->clone=self->clone;
                            }
                            if(_if_conditional46=self!=((void*)0),                            _if_conditional46) {
                                result_29->compile=self->compile;
                            }
                            if(_if_conditional47=self!=((void*)0),                            _if_conditional47) {
                                result_29->sline=self->sline;
                            }
                            if(_if_conditional48=self!=((void*)0),                            _if_conditional48) {
                                result_29->sname=self->sname;
                            }
                            if(_if_conditional49=self!=((void*)0),                            _if_conditional49) {
                                result_29->terminated=self->terminated;
                            }
                            if(_if_conditional50=self!=((void*)0),                            _if_conditional50) {
                                result_29->kind=self->kind;
                            }
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
_Bool _if_conditional54;
struct list$1charph* __result47__;
void* right_value73;
void* right_value74;
struct list$1charph* result_30;
struct list_item$1charph* it_31;
_Bool _while_condtional6;
void* right_value78;
struct list$1charph* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
right_value73 = (void*)0;
right_value74 = (void*)0;
memset(&result_30, 0, sizeof(struct list$1charph*));
memset(&it_31, 0, sizeof(struct list_item$1charph*));
right_value78 = (void*)0;
                    if(_if_conditional54=self==((void*)0),                    _if_conditional54) {
                        __result47__ = __result_obj__ = ((void*)0);
                        return __result47__;
                    }
                    result_30=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value74=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value73=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 142, "list$1charph"))))))));
                    come_call_finalizer2(list$1charphp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1charphp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_31=self->head;
                    while(_while_condtional6=it_31!=((void*)0),                    _while_condtional6) {
                        list$1charph_add(result_30,(char*)come_increment_ref_count(((char*)(right_value78=string_clone(it_31->item)))));
                        right_value78 = come_decrement_ref_count2(right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        it_31=it_31->next;
                    }
                    __result50__ = __result_obj__ = result_30;
                    come_call_finalizer2(list$1charphp_finalize,result_30, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result50__;
                    come_call_finalizer2(list$1charphp_finalize,result_30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result48__ = __result_obj__ = self;
                        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result48__;
                        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional55;
void* right_value75;
struct list_item$1charph* litem_32;
char* __dec_obj27;
_Bool _if_conditional56;
void* right_value76;
struct list_item$1charph* litem_33;
char* __dec_obj28;
void* right_value77;
struct list_item$1charph* litem_34;
char* __dec_obj29;
struct list$1charph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
right_value75 = (void*)0;
memset(&litem_32, 0, sizeof(struct list_item$1charph*));
right_value76 = (void*)0;
memset(&litem_33, 0, sizeof(struct list_item$1charph*));
right_value77 = (void*)0;
memset(&litem_34, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional55=self->len==0,                            _if_conditional55) {
                                litem_32=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value75=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 156, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_32->prev=((void*)0);
                                litem_32->next=((void*)0);
                                __dec_obj27=litem_32->item;
                                litem_32->item=(char*)come_increment_ref_count(item);
                                __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_32;
                                self->head=litem_32;
                            }
                            else {
                                if(_if_conditional56=self->len==1,                                _if_conditional56) {
                                    litem_33=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value76=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 166, "list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_33->prev=self->head;
                                    litem_33->next=((void*)0);
                                    __dec_obj28=litem_33->item;
                                    litem_33->item=(char*)come_increment_ref_count(item);
                                    __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail=litem_33;
                                    self->head->next=litem_33;
                                }
                                else {
                                    litem_34=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value77=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 176, "list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_34->prev=self->tail;
                                    litem_34->next=((void*)0);
                                    __dec_obj29=litem_34->item;
                                    litem_34->item=(char*)come_increment_ref_count(item);
                                    __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail->next=litem_34;
                                    self->tail=litem_34;
                                }
                            }
                            self->len++;
                            __result49__ = __result_obj__ = self;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result49__;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_clone(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional100;
struct list$1tuple3$3sTypephcharphsNodephph* __result52__;
void* right_value87;
void* right_value88;
struct list$1tuple3$3sTypephcharphsNodephph* result_37;
struct list_item$1tuple3$3sTypephcharphsNodephph* it_38;
_Bool _while_condtional8;
void* right_value96;
struct list$1tuple3$3sTypephcharphsNodephph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
right_value87 = (void*)0;
right_value88 = (void*)0;
memset(&result_37, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
memset(&it_38, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value96 = (void*)0;
            if(_if_conditional100=self==((void*)0),            _if_conditional100) {
                __result52__ = __result_obj__ = ((void*)0);
                return __result52__;
            }
            result_37=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value88=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value87=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 142, "list$1tuple3$3sTypephcharphsNodephph"))))))));
            come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            it_38=self->head;
            while(_while_condtional8=it_38!=((void*)0),            _while_condtional8) {
                list$1tuple3$3sTypephcharphsNodephph_add(result_37,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value96=tuple3$3sTypephcharphsNodephp_clone(it_38->item)))));
                come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_38=it_38->next;
            }
            __result57__ = __result_obj__ = result_37;
            come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,result_37, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result57__;
            come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,result_37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_initialize(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
struct list$1tuple3$3sTypephcharphsNodephph* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result53__ = __result_obj__ = self;
                come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result53__;
                come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1tuple3$3sTypephcharphsNodephphp_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
struct list_item$1tuple3$3sTypephcharphsNodephph* it_35;
_Bool _while_condtional7;
struct list_item$1tuple3$3sTypephcharphsNodephph* prev_it_36;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_35, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&prev_it_36, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                    it_35=self->head;
                    while(_while_condtional7=it_35!=((void*)0),                    _while_condtional7) {
                        prev_it_36=it_35;
                        it_35=it_35->next;
                        come_call_finalizer2(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,prev_it_36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1tuple3$3sTypephcharphsNodephphp_finalize(struct list_item$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional101;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional101=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional101) {
                                come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void tuple3$3sTypephcharphsNodephp_finalize(struct tuple3$3sTypephcharphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional102=self!=((void*)0)&&self->v1!=((void*)0),                                    _if_conditional102) {
                                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional103=self!=((void*)0)&&self->v2!=((void*)0),                                    _if_conditional103) {
                                        self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional104=self!=((void*)0)&&self->v3!=((void*)0),                                    _if_conditional104) {
                                        if(self->v3) { self->v3 = come_decrement_ref_count2(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_add(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional105;
void* right_value89;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_39;
struct tuple3$3sTypephcharphsNodeph* __dec_obj41;
_Bool _if_conditional109;
void* right_value90;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_40;
struct tuple3$3sTypephcharphsNodeph* __dec_obj42;
void* right_value91;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_41;
struct tuple3$3sTypephcharphsNodeph* __dec_obj43;
struct list$1tuple3$3sTypephcharphsNodephph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value89 = (void*)0;
memset(&litem_39, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value90 = (void*)0;
memset(&litem_40, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value91 = (void*)0;
memset(&litem_41, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                    if(_if_conditional105=self->len==0,                    _if_conditional105) {
                        litem_39=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value89=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 156, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                        come_call_finalizer2(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_39->prev=((void*)0);
                        litem_39->next=((void*)0);
                        __dec_obj41=litem_39->item;
                        litem_39->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_39;
                        self->head=litem_39;
                    }
                    else {
                        if(_if_conditional109=self->len==1,                        _if_conditional109) {
                            litem_40=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value90=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 166, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                            come_call_finalizer2(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_40->prev=self->head;
                            litem_40->next=((void*)0);
                            __dec_obj42=litem_40->item;
                            litem_40->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer2(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_40;
                            self->head->next=litem_40;
                        }
                        else {
                            litem_41=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value91=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 176, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                            come_call_finalizer2(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_41->prev=self->tail;
                            litem_41->next=((void*)0);
                            __dec_obj43=litem_41->item;
                            litem_41->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer2(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail->next=litem_41;
                            self->tail=litem_41;
                        }
                    }
                    self->len++;
                    __result54__ = __result_obj__ = self;
                    come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result54__;
                    come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple3$3sTypephcharphsNodeph_finalize(struct tuple3$3sTypephcharphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional106=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional106) {
                                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional107=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional107) {
                                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional108=self!=((void*)0)&&self->v3!=((void*)0),                            _if_conditional108) {
                                if(self->v3) { self->v3 = come_decrement_ref_count2(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodephp_clone(struct tuple3$3sTypephcharphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional110;
struct tuple3$3sTypephcharphsNodeph* __result55__;
void* right_value92;
struct tuple3$3sTypephcharphsNodeph* result_42;
_Bool _if_conditional111;
void* right_value93;
struct sType* __dec_obj44;
_Bool _if_conditional112;
void* right_value94;
char* __dec_obj45;
_Bool _if_conditional113;
void* right_value95;
struct sNode* __dec_obj46;
struct tuple3$3sTypephcharphsNodeph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value92 = (void*)0;
memset(&result_42, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
right_value93 = (void*)0;
right_value94 = (void*)0;
right_value95 = (void*)0;
                    if(_if_conditional110=self==(void*)0,                    _if_conditional110) {
                        __result55__ = __result_obj__ = (void*)0;
                        return __result55__;
                    }
                    result_42=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value92=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "tuple3$3sTypephcharphsNodephp_clone", 3, "tuple3$3sTypephcharphsNodeph"))));
                    come_call_finalizer2(tuple3$3sTypephcharphsNodeph_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional111=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional111) {
                        __dec_obj44=result_42->v1;
                        result_42->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value93=sType_clone(self->v1))));
                        come_call_finalizer2(sType_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional112=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional112) {
                        __dec_obj45=result_42->v2;
                        result_42->v2=(char*)come_increment_ref_count(((char*)(right_value94=string_clone(self->v2))));
                        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional113=self!=((void*)0)&&self->v3!=((void*)0),                    _if_conditional113) {
                        __dec_obj46=result_42->v3;
                        result_42->v3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value95=sNode_clone(self->v3))));
                        if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count2(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value95) { right_value95 = come_decrement_ref_count2(right_value95, ((struct sNode*)right_value95)->finalize, ((struct sNode*)right_value95)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    __result56__ = __result_obj__ = result_42;
                    come_call_finalizer2(tuple3$3sTypephcharphsNodeph_finalize,result_42, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result56__;
                    come_call_finalizer2(tuple3$3sTypephcharphsNodeph_finalize,result_42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void list$1tuple3$3sTypephcharphsNodephph_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

_Bool sStoreNode_terminated(){
void* __result_obj__;
_Bool __result59__;
memset(&__result_obj__, 0, sizeof(void*));
    __result59__ = (_Bool)0;
    return __result59__;
}

char* sStoreNode_kind(){
void* __result_obj__;
void* right_value99;
char* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value99 = (void*)0;
    __result60__ = __result_obj__ = ((char*)(right_value99=__builtin_string("sStoreNode")));
    right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result60__;
}

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value100;
char* array_initializer_43;
_Bool _if_conditional121;
struct sVar* var__47;
_Bool _if_conditional130;
_Bool __result65__;
_Bool _if_conditional131;
_Bool __result66__;
void* right_value101;
struct sType* type_48;
void* right_value102;
void* right_value103;
struct sType* var_type_49;
void* right_value104;
_Bool _if_conditional132;
struct sVar* var__50;
_Bool _if_conditional133;
_Bool __result67__;
_Bool _if_conditional134;
_Bool __result68__;
void* right_value105;
struct sType* type_51;
_Bool _if_conditional135;
struct list$1tuple3$3sTypephcharphsNodephph* o2_saved_52;
struct tuple3$3sTypephcharphsNodeph* it_55;
struct tuple3$3sTypephcharphsNodeph* multiple_assign_var1;
struct sType* type_58;
char* var_name_59;
struct sNode* right_value_60;
void* right_value106;
_Bool _if_conditional140;
_Bool __result76__;
void* right_value107;
struct sType* left_type_61;
void* right_value108;
_Bool _if_conditional141;
_Bool _if_conditional142;
_Bool __result77__;
void* right_value109;
struct CVALUE* come_value_62;
void* right_value110;
struct sType* left_type2_63;
_Bool _if_conditional145;
_Bool _if_conditional147;
void* right_value111;
struct list$1sNodeph* o2_saved_64;
struct sNode* it_67;
_Bool _if_conditional152;
void* right_value112;
struct CVALUE* come_value_70;
void* right_value113;
void* right_value114;
_Bool _if_conditional153;
_Bool _if_conditional154;
_Bool __result87__;
void* right_value115;
struct sType* left_type_71;
_Bool _if_conditional155;
void* right_value116;
_Bool _if_conditional156;
_Bool _if_conditional157;
void* right_value117;
struct list$1sNodeph* o2_saved_72;
struct sNode* it_73;
_Bool _if_conditional158;
void* right_value118;
struct CVALUE* come_value_74;
void* right_value119;
void* right_value120;
struct sType* left_type2_75;
_Bool _if_conditional159;
_Bool _if_conditional160;
void* right_value121;
struct list$1sNodeph* o2_saved_76;
struct sNode* it_77;
_Bool _if_conditional161;
void* right_value122;
struct CVALUE* come_value_78;
void* right_value123;
void* right_value124;
struct CVALUE* come_value_79;
void* right_value125;
char* __dec_obj51;
void* right_value126;
struct sType* __dec_obj52;
_Bool _if_conditional165;
_Bool _if_conditional166;
_Bool __result89__;
void* right_value130;
struct CVALUE* right_value_83;
struct sType* right_type_84;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool _if_conditional169;
struct sVar* var__85;
_Bool _if_conditional170;
_Bool __result90__;
_Bool _if_conditional171;
int i_86;
struct list$1charph* o2_saved_87;
char* it_90;
_Bool _if_conditional177;
struct sType* right_type2_96;
void* right_value131;
void* right_value132;
struct sType* var_type_97;
_Bool _if_conditional180;
_Bool _if_conditional181;
void* right_value133;
struct list$1sNodeph* o2_saved_98;
struct sNode* it_99;
_Bool _if_conditional182;
void* right_value134;
struct CVALUE* come_value_100;
void* right_value135;
_Bool _if_conditional183;
void* right_value136;
void* right_value137;
struct sType* type_101;
void* right_value138;
void* right_value139;
struct sType* var_type_102;
_Bool _if_conditional184;
_Bool _if_conditional185;
void* right_value140;
struct list$1sNodeph* o2_saved_103;
struct sNode* it_104;
_Bool _if_conditional186;
void* right_value141;
struct CVALUE* come_value_105;
void* right_value142;
struct sClass* current_stack_frame_struct_106;
_Bool _if_conditional187;
struct sVar* parent_var_107;
_Bool _if_conditional188;
_Bool _if_conditional189;
void* right_value143;
struct CVALUE* come_value_108;
struct sType* left_type_109;
_Bool _if_conditional190;
void* right_value144;
char* c_value_110;
void* right_value145;
char* __dec_obj56;
int right_value_id_111;
_Bool _if_conditional191;
_Bool _if_conditional192;
void* right_value146;
char* c_value_112;
void* right_value147;
char* __dec_obj57;
void* right_value148;
char* __dec_obj58;
void* right_value149;
struct sType* __dec_obj59;
void* right_value150;
void* right_value151;
_Bool __result102__;
_Bool _if_conditional193;
static int num_multiple_var_113=0;
void* right_value152;
char* multiple_var_name_114;
void* right_value153;
void* right_value154;
char* __dec_obj60;
int i_115;
struct list$1charph* o2_saved_116;
char* it_117;
_Bool _if_conditional194;
void* right_value155;
struct sType* right_type2_118;
struct sVar* var__119;
void* right_value156;
struct sType* var_type_120;
_Bool _if_conditional195;
_Bool _if_conditional196;
void* right_value157;
struct list$1sNodeph* o2_saved_121;
struct sNode* it_122;
_Bool _if_conditional197;
void* right_value158;
struct CVALUE* come_value_123;
void* right_value159;
void* right_value160;
struct sType* left_type_124;
void* right_value161;
struct CVALUE* right_value2_125;
void* right_value162;
char* __dec_obj61;
void* right_value163;
struct sType* __dec_obj62;
void* right_value164;
struct CVALUE* come_value_126;
void* right_value165;
void* right_value166;
_Bool _if_conditional198;
_Bool _if_conditional199;
void* right_value167;
char* __dec_obj63;
int right_value_id_127;
_Bool _if_conditional200;
void* right_value168;
char* __dec_obj64;
void* right_value169;
struct sType* __dec_obj65;
_Bool _if_conditional201;
void* right_value170;
struct sVar* var__128;
_Bool _if_conditional202;
_Bool _if_conditional203;
_Bool __result103__;
_Bool _if_conditional204;
void* right_value171;
struct sType* __dec_obj66;
void* right_value172;
struct sType* left_type_129;
void* right_value173;
struct CVALUE* come_value_130;
_Bool _if_conditional205;
void* right_value174;
void* right_value175;
void* right_value176;
void* right_value177;
char* __dec_obj67;
_Bool _if_conditional206;
void* right_value178;
void* right_value179;
_Bool _if_conditional207;
void* right_value180;
void* right_value181;
char* __dec_obj68;
_Bool _if_conditional208;
void* right_value182;
void* right_value183;
_Bool _if_conditional209;
void* right_value184;
char* __dec_obj69;
void* right_value185;
char* __dec_obj70;
int right_value_id_131;
_Bool _if_conditional210;
void* right_value186;
struct sType* __dec_obj71;
_Bool _if_conditional211;
void* right_value187;
void* right_value188;
_Bool _if_conditional212;
void* right_value189;
char* __dec_obj72;
void* right_value190;
char* __dec_obj73;
void* right_value191;
struct sType* __dec_obj74;
void* right_value192;
void* right_value193;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool __result104__;
void* right_value194;
char* __dec_obj75;
void* right_value195;
struct sType* __dec_obj76;
_Bool _if_conditional216;
_Bool _if_conditional217;
void* right_value196;
void* right_value197;
_Bool __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value100 = (void*)0;
memset(&array_initializer_43, 0, sizeof(char*));
memset(&var__47, 0, sizeof(struct sVar*));
right_value101 = (void*)0;
memset(&type_48, 0, sizeof(struct sType*));
right_value102 = (void*)0;
right_value103 = (void*)0;
memset(&var_type_49, 0, sizeof(struct sType*));
right_value104 = (void*)0;
memset(&var__50, 0, sizeof(struct sVar*));
right_value105 = (void*)0;
memset(&type_51, 0, sizeof(struct sType*));
memset(&o2_saved_52, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
memset(&it_55, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&type_58, 0, sizeof(struct sType*));
memset(&var_name_59, 0, sizeof(char*));
memset(&right_value_60, 0, sizeof(struct sNode*));
memset(&type_58, 0, sizeof(struct sType*));
memset(&var_name_59, 0, sizeof(char*));
memset(&right_value_60, 0, sizeof(struct sNode*));
right_value106 = (void*)0;
right_value107 = (void*)0;
memset(&left_type_61, 0, sizeof(struct sType*));
right_value108 = (void*)0;
right_value109 = (void*)0;
memset(&come_value_62, 0, sizeof(struct CVALUE*));
right_value110 = (void*)0;
memset(&left_type2_63, 0, sizeof(struct sType*));
right_value111 = (void*)0;
memset(&o2_saved_64, 0, sizeof(struct list$1sNodeph*));
memset(&it_67, 0, sizeof(struct sNode*));
right_value112 = (void*)0;
memset(&come_value_70, 0, sizeof(struct CVALUE*));
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
memset(&left_type_71, 0, sizeof(struct sType*));
right_value116 = (void*)0;
right_value117 = (void*)0;
memset(&o2_saved_72, 0, sizeof(struct list$1sNodeph*));
memset(&it_73, 0, sizeof(struct sNode*));
right_value118 = (void*)0;
memset(&come_value_74, 0, sizeof(struct CVALUE*));
right_value119 = (void*)0;
right_value120 = (void*)0;
memset(&left_type2_75, 0, sizeof(struct sType*));
right_value121 = (void*)0;
memset(&o2_saved_76, 0, sizeof(struct list$1sNodeph*));
memset(&it_77, 0, sizeof(struct sNode*));
right_value122 = (void*)0;
memset(&come_value_78, 0, sizeof(struct CVALUE*));
right_value123 = (void*)0;
right_value124 = (void*)0;
memset(&come_value_79, 0, sizeof(struct CVALUE*));
right_value125 = (void*)0;
right_value126 = (void*)0;
right_value130 = (void*)0;
memset(&right_value_83, 0, sizeof(struct CVALUE*));
memset(&right_type_84, 0, sizeof(struct sType*));
memset(&var__85, 0, sizeof(struct sVar*));
memset(&i_86, 0, sizeof(int));
memset(&o2_saved_87, 0, sizeof(struct list$1charph*));
memset(&it_90, 0, sizeof(char*));
memset(&right_type2_96, 0, sizeof(struct sType*));
right_value131 = (void*)0;
right_value132 = (void*)0;
memset(&var_type_97, 0, sizeof(struct sType*));
right_value133 = (void*)0;
memset(&o2_saved_98, 0, sizeof(struct list$1sNodeph*));
memset(&it_99, 0, sizeof(struct sNode*));
right_value134 = (void*)0;
memset(&come_value_100, 0, sizeof(struct CVALUE*));
right_value135 = (void*)0;
right_value136 = (void*)0;
right_value137 = (void*)0;
memset(&type_101, 0, sizeof(struct sType*));
right_value138 = (void*)0;
right_value139 = (void*)0;
memset(&var_type_102, 0, sizeof(struct sType*));
right_value140 = (void*)0;
memset(&o2_saved_103, 0, sizeof(struct list$1sNodeph*));
memset(&it_104, 0, sizeof(struct sNode*));
right_value141 = (void*)0;
memset(&come_value_105, 0, sizeof(struct CVALUE*));
right_value142 = (void*)0;
memset(&current_stack_frame_struct_106, 0, sizeof(struct sClass*));
memset(&parent_var_107, 0, sizeof(struct sVar*));
right_value143 = (void*)0;
memset(&come_value_108, 0, sizeof(struct CVALUE*));
memset(&left_type_109, 0, sizeof(struct sType*));
right_value144 = (void*)0;
memset(&c_value_110, 0, sizeof(char*));
right_value145 = (void*)0;
memset(&right_value_id_111, 0, sizeof(int));
right_value146 = (void*)0;
memset(&c_value_112, 0, sizeof(char*));
right_value147 = (void*)0;
right_value148 = (void*)0;
right_value149 = (void*)0;
right_value150 = (void*)0;
right_value151 = (void*)0;
right_value152 = (void*)0;
memset(&multiple_var_name_114, 0, sizeof(char*));
right_value153 = (void*)0;
right_value154 = (void*)0;
memset(&i_115, 0, sizeof(int));
memset(&o2_saved_116, 0, sizeof(struct list$1charph*));
memset(&it_117, 0, sizeof(char*));
right_value155 = (void*)0;
memset(&right_type2_118, 0, sizeof(struct sType*));
memset(&var__119, 0, sizeof(struct sVar*));
right_value156 = (void*)0;
memset(&var_type_120, 0, sizeof(struct sType*));
right_value157 = (void*)0;
memset(&o2_saved_121, 0, sizeof(struct list$1sNodeph*));
memset(&it_122, 0, sizeof(struct sNode*));
right_value158 = (void*)0;
memset(&come_value_123, 0, sizeof(struct CVALUE*));
right_value159 = (void*)0;
right_value160 = (void*)0;
memset(&left_type_124, 0, sizeof(struct sType*));
right_value161 = (void*)0;
memset(&right_value2_125, 0, sizeof(struct CVALUE*));
right_value162 = (void*)0;
right_value163 = (void*)0;
right_value164 = (void*)0;
memset(&come_value_126, 0, sizeof(struct CVALUE*));
right_value165 = (void*)0;
right_value166 = (void*)0;
right_value167 = (void*)0;
memset(&right_value_id_127, 0, sizeof(int));
right_value168 = (void*)0;
right_value169 = (void*)0;
right_value170 = (void*)0;
memset(&var__128, 0, sizeof(struct sVar*));
right_value171 = (void*)0;
right_value172 = (void*)0;
memset(&left_type_129, 0, sizeof(struct sType*));
right_value173 = (void*)0;
memset(&come_value_130, 0, sizeof(struct CVALUE*));
right_value174 = (void*)0;
right_value175 = (void*)0;
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
right_value182 = (void*)0;
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value185 = (void*)0;
memset(&right_value_id_131, 0, sizeof(int));
right_value186 = (void*)0;
right_value187 = (void*)0;
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
right_value192 = (void*)0;
right_value193 = (void*)0;
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value196 = (void*)0;
right_value197 = (void*)0;
    array_initializer_43=(char*)come_increment_ref_count(((char*)(right_value100=string_clone(self->array_initializer))));
    right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(array_initializer_43) {
        var__47=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name);
        if(var__47) {
            err_msg(info,"Already appended this var name(%s)(2)",self->name);
            __result65__ = (_Bool)0;
            array_initializer_43 = come_decrement_ref_count2(array_initializer_43, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result65__;
        }
        if(_if_conditional131=self->type==((void*)0),        _if_conditional131) {
            err_msg(info,"Require type name(%s)",self->name);
            __result66__ = (_Bool)0;
            array_initializer_43 = come_decrement_ref_count2(array_initializer_43, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result66__;
        }
        else {
            type_48=(struct sType*)come_increment_ref_count(((struct sType*)(right_value101=solve_generics(self->type,info->generics_type,info))));
            come_call_finalizer2(sType_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            type_48->mFunctionParam=(_Bool)0;
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value102=sType_clone(type_48)))),info);
            come_call_finalizer2(sType_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,type_48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        var__47=get_variable_from_table(info->lv_table,self->name);
        var_type_49=(struct sType*)come_increment_ref_count(((struct sType*)(right_value103=sType_clone(var__47->mType))));
        come_call_finalizer2(sType_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        var_type_49->mStatic=(_Bool)0;
        add_come_code(info,"%s=%s;\n",((char*)(right_value104=make_define_var(var_type_49,var__47->mCValueName,(_Bool)0,info))),array_initializer_43);
        right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,var_type_49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional132=self->right_value==((void*)0),        _if_conditional132) {
            var__50=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name);
            if(var__50) {
                err_msg(info,"Already appended this var name(%s)(1)",self->name);
                __result67__ = (_Bool)0;
                array_initializer_43 = come_decrement_ref_count2(array_initializer_43, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result67__;
            }
            if(_if_conditional134=self->type==((void*)0),            _if_conditional134) {
                err_msg(info,"Require concrete variable type(%s)",self->name);
                __result68__ = (_Bool)0;
                array_initializer_43 = come_decrement_ref_count2(array_initializer_43, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result68__;
            }
            type_51=(struct sType*)come_increment_ref_count(((struct sType*)(right_value105=solve_generics(self->type,info->generics_type,info))));
            come_call_finalizer2(sType_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            type_51->mFunctionParam=(_Bool)0;
            if(self->multiple_declare) {
                for(                o2_saved_52=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count((self->multiple_declare)),it_55=list$1tuple3$3sTypephcharphsNodephph_begin((o2_saved_52));                !list$1tuple3$3sTypephcharphsNodephph_end((o2_saved_52));                it_55=list$1tuple3$3sTypephcharphsNodephph_next((o2_saved_52))                ){
                    multiple_assign_var1=it_55;
                    type_58=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
                    var_name_59=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                    right_value_60=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v3);
                    add_variable_to_table(var_name_59,(struct sType*)come_increment_ref_count(((struct sType*)(right_value106=sType_clone(type_58)))),info);
                    come_call_finalizer2(sType_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    var__50=get_variable_from_table(info->lv_table,var_name_59);
                    if(_if_conditional140=var__50==((void*)0),                    _if_conditional140) {
                        err_msg(info,"var not found(%s)(ZY) at definition of variable\n",it_55);
                        __result76__ = (_Bool)1;
                        come_call_finalizer2(sType_finalize,type_58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        var_name_59 = come_decrement_ref_count2(var_name_59, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(right_value_60) { right_value_60 = come_decrement_ref_count2(right_value_60, ((struct sNode*)right_value_60)->finalize, ((struct sNode*)right_value_60)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,o2_saved_52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,type_51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        array_initializer_43 = come_decrement_ref_count2(array_initializer_43, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result76__;
                    }
                    left_type_61=(struct sType*)come_increment_ref_count(((struct sType*)(right_value107=sType_clone(var__50->mType))));
                    come_call_finalizer2(sType_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value108=make_define_var(left_type_61,var__50->mCValueName,(_Bool)0,info))));
                    right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(right_value_60) {
                        if(_if_conditional142=!node_compile(right_value_60,info),                        _if_conditional142) {
                            __result77__ = (_Bool)0;
                            come_call_finalizer2(sType_finalize,type_58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            var_name_59 = come_decrement_ref_count2(var_name_59, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(right_value_60) { right_value_60 = come_decrement_ref_count2(right_value_60, ((struct sNode*)right_value_60)->finalize, ((struct sNode*)right_value_60)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(sType_finalize,left_type_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,o2_saved_52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,type_51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            array_initializer_43 = come_decrement_ref_count2(array_initializer_43, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            return __result77__;
                        }
                        come_value_62=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value109=get_value_from_stack(-1,info))));
                        come_call_finalizer2(CVALUE_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        dec_stack_ptr(1,info);
                        add_come_code(info,"%s=%s;\n",var__50->mCValueName,come_value_62->c_value);
                        come_call_finalizer2(CVALUE_finalize,come_value_62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    left_type2_63=(struct sType*)come_increment_ref_count(((struct sType*)(right_value110=sType_clone(left_type_61))));
                    come_call_finalizer2(sType_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    left_type2_63->mStatic=(_Bool)0;
                    if(_if_conditional145=!var__50->mType->mConstant&&!var__50->mType->mStatic,                    _if_conditional145) {
                        if(_if_conditional147=list$1sNodeph_length(left_type2_63->mArrayNum)>0,                        _if_conditional147) {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__50->mCValueName,((char*)(right_value111=make_type_name_string(left_type2_63,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            for(                            o2_saved_64=(struct list$1sNodeph*)come_increment_ref_count((left_type2_63->mArrayNum)),it_67=list$1sNodeph_begin((o2_saved_64));                            !list$1sNodeph_end((o2_saved_64));                            it_67=list$1sNodeph_next((o2_saved_64))                            ){
                                if(_if_conditional152=!node_compile(it_67,info),                                _if_conditional152) {
                                    err_msg(info,"invalid array num");
                                    exit(1);
                                }
                                come_value_70=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value112=get_value_from_stack(-1,info))));
                                come_call_finalizer2(CVALUE_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                dec_stack_ptr(1,info);
                                add_come_code(info,"*(%s)",come_value_70->c_value);
                                come_call_finalizer2(CVALUE_finalize,come_value_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            come_call_finalizer2(list$1sNodephp_finalize,o2_saved_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            add_come_code(info,");\n");
                        }
                        else {
                            add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__50->mCValueName,((char*)(right_value113=make_type_name_string(left_type2_63,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                    }
                    come_call_finalizer2(sType_finalize,type_58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    var_name_59 = come_decrement_ref_count2(var_name_59, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(right_value_60) { right_value_60 = come_decrement_ref_count2(right_value_60, ((struct sNode*)right_value_60)->finalize, ((struct sNode*)right_value_60)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sType_finalize,left_type_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,left_type2_63, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,o2_saved_52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value114=sType_clone(type_51)))),info);
                come_call_finalizer2(sType_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                var__50=get_variable_from_table(info->lv_table,self->name);
                if(_if_conditional153=var__50==((void*)0),                _if_conditional153) {
                    var__50=get_variable_from_table(info->gv_table,self->name);
                    if(_if_conditional154=var__50==((void*)0),                    _if_conditional154) {
                        err_msg(info,"var not found(%s)(Y) at definition of variable\n",self->name);
                        __result87__ = (_Bool)1;
                        come_call_finalizer2(sType_finalize,type_51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        array_initializer_43 = come_decrement_ref_count2(array_initializer_43, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result87__;
                    }
                }
                left_type_71=(struct sType*)come_increment_ref_count(((struct sType*)(right_value115=sType_clone(var__50->mType))));
                come_call_finalizer2(sType_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional155=list$1sNodeph_length(left_type_71->mArrayNum)>0,                _if_conditional155) {
                    add_come_code(info,"%s;\n",((char*)(right_value116=make_define_var(left_type_71,var__50->mCValueName,(_Bool)0,info))));
                    right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(_if_conditional156=!left_type_71->mStatic,                    _if_conditional156) {
                        if(_if_conditional157=list$1sNodeph_length(left_type_71->mArrayNum)>0,                        _if_conditional157) {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__50->mCValueName,((char*)(right_value117=make_type_name_string(left_type_71,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            for(                            o2_saved_72=(struct list$1sNodeph*)come_increment_ref_count((left_type_71->mArrayNum)),it_73=list$1sNodeph_begin((o2_saved_72));                            !list$1sNodeph_end((o2_saved_72));                            it_73=list$1sNodeph_next((o2_saved_72))                            ){
                                if(_if_conditional158=!node_compile(it_73,info),                                _if_conditional158) {
                                    err_msg(info,"invalid array num");
                                    exit(1);
                                }
                                come_value_74=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value118=get_value_from_stack(-1,info))));
                                come_call_finalizer2(CVALUE_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                dec_stack_ptr(1,info);
                                add_come_code(info,"*(%s)",come_value_74->c_value);
                                come_call_finalizer2(CVALUE_finalize,come_value_74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            come_call_finalizer2(list$1sNodephp_finalize,o2_saved_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            add_come_code(info,");\n");
                        }
                        else {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)); /* aaa */\n",var__50->mCValueName,var__50->mCValueName);
                        }
                    }
                }
                else {
                    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value119=make_define_var(left_type_71,var__50->mCValueName,(_Bool)0,info))));
                    right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    left_type2_75=(struct sType*)come_increment_ref_count(((struct sType*)(right_value120=sType_clone(left_type_71))));
                    come_call_finalizer2(sType_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    left_type2_75->mStatic=(_Bool)0;
                    if(_if_conditional159=!var__50->mType->mConstant&&!var__50->mType->mStatic,                    _if_conditional159) {
                        if(_if_conditional160=list$1sNodeph_length(left_type2_75->mArrayNum)>0,                        _if_conditional160) {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__50->mCValueName,((char*)(right_value121=make_type_name_string(left_type2_75,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            for(                            o2_saved_76=(struct list$1sNodeph*)come_increment_ref_count((left_type2_75->mArrayNum)),it_77=list$1sNodeph_begin((o2_saved_76));                            !list$1sNodeph_end((o2_saved_76));                            it_77=list$1sNodeph_next((o2_saved_76))                            ){
                                if(_if_conditional161=!node_compile(it_77,info),                                _if_conditional161) {
                                    err_msg(info,"invalid array num");
                                    exit(1);
                                }
                                come_value_78=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value122=get_value_from_stack(-1,info))));
                                come_call_finalizer2(CVALUE_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                dec_stack_ptr(1,info);
                                add_come_code(info,"*(%s)",come_value_78->c_value);
                                come_call_finalizer2(CVALUE_finalize,come_value_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            come_call_finalizer2(list$1sNodephp_finalize,o2_saved_76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            add_come_code(info,");\n");
                        }
                        else {
                            add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__50->mCValueName,((char*)(right_value123=make_type_name_string(left_type2_75,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                    }
                    come_call_finalizer2(sType_finalize,left_type2_75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                come_value_79=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value124=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 216, "CVALUE"))));
                come_call_finalizer2(CVALUE_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                __dec_obj51=come_value_79->c_value;
                come_value_79->c_value=(char*)come_increment_ref_count(((char*)(right_value125=xsprintf("%s",var__50->mCValueName))));
                __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                __dec_obj52=come_value_79->type;
                come_value_79->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value126=sType_clone(left_type_71))));
                come_call_finalizer2(sType_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_value_79->var=var__50;
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_79));
                if(_if_conditional165=self->alloc&&!left_type_71->mClass->mNumber&&left_type_71->mPointerNum==0,                _if_conditional165) {
                    var__50->mType->mAllocaValue=(_Bool)1;
                }
                come_call_finalizer2(sType_finalize,left_type_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,come_value_79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(sType_finalize,type_51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional166=!node_compile(self->right_value,info),            _if_conditional166) {
                __result89__ = (_Bool)0;
                array_initializer_43 = come_decrement_ref_count2(array_initializer_43, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result89__;
            }
            right_value_83=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value130=get_value_from_stack(-1,info))));
            come_call_finalizer2(CVALUE_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            right_type_84=right_value_83->type;
            dec_stack_ptr(1,info);
            if(self->multiple_assign) {
                if(right_type_84->mNoSolvedGenericsType->v1) {
                    right_type_84=right_type_84->mNoSolvedGenericsType->v1;
                }
            }
            if(self->alloc) {
                var__85=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name);
                if(var__85) {
                    err_msg(info,"Already appended this var name(%s)(2)",self->name);
                    __result90__ = (_Bool)0;
                    come_call_finalizer2(CVALUE_finalize,right_value_83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    array_initializer_43 = come_decrement_ref_count2(array_initializer_43, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result90__;
                }
                if(self->multiple_assign) {
                    i_86=0;
                    for(                    o2_saved_87=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_90=list$1charph_begin((o2_saved_87));                    !list$1charph_end((o2_saved_87));                    it_90=list$1charph_next((o2_saved_87))                    ){
                        if(_if_conditional177=i_86<list$1sTypeph_length(right_type_84->mGenericsTypes),                        _if_conditional177) {
                            right_type2_96=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(right_type_84->mGenericsTypes,i_86), "07var.c", 255, 0));
                            right_type2_96->mFunctionParam=(_Bool)0;
                            add_variable_to_table(it_90,(struct sType*)come_increment_ref_count(((struct sType*)(right_value131=sType_clone(right_type2_96)))),info);
                            come_call_finalizer2(sType_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            var__85=get_variable_from_table(info->lv_table,it_90);
                            var_type_97=(struct sType*)come_increment_ref_count(((struct sType*)(right_value132=sType_clone(var__85->mType))));
                            come_call_finalizer2(sType_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            var_type_97->mStatic=(_Bool)0;
                            if(_if_conditional180=!var_type_97->mConstant&&!var_type_97->mStatic,                            _if_conditional180) {
                                if(_if_conditional181=list$1sNodeph_length(var_type_97->mArrayNum)>0,                                _if_conditional181) {
                                    add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__85->mCValueName,((char*)(right_value133=make_type_name_string(var_type_97,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                                    right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    for(                                    o2_saved_98=(struct list$1sNodeph*)come_increment_ref_count((var_type_97->mArrayNum)),it_99=list$1sNodeph_begin((o2_saved_98));                                    !list$1sNodeph_end((o2_saved_98));                                    it_99=list$1sNodeph_next((o2_saved_98))                                    ){
                                        if(_if_conditional182=!node_compile(it_99,info),                                        _if_conditional182) {
                                            err_msg(info,"invalid array num");
                                            exit(1);
                                        }
                                        come_value_100=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value134=get_value_from_stack(-1,info))));
                                        come_call_finalizer2(CVALUE_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        dec_stack_ptr(1,info);
                                        add_come_code(info,"*(%s)",come_value_100->c_value);
                                        come_call_finalizer2(CVALUE_finalize,come_value_100, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    come_call_finalizer2(list$1sNodephp_finalize,o2_saved_98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    add_come_code(info,");\n");
                                }
                                else {
                                    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__85->mCValueName,((char*)(right_value135=make_type_name_string(var_type_97,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                                    right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                            }
                            come_call_finalizer2(sType_finalize,var_type_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        i_86++;
                    }
                    come_call_finalizer2(list$1charphp_finalize,o2_saved_87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(_if_conditional183=self->type==((void*)0),                    _if_conditional183) {
                        right_type_84->mFunctionParam=(_Bool)0;
                        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value136=sType_clone(right_type_84)))),info);
                        come_call_finalizer2(sType_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        type_101=(struct sType*)come_increment_ref_count(((struct sType*)(right_value137=solve_generics(self->type,info->generics_type,info))));
                        come_call_finalizer2(sType_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        type_101->mFunctionParam=(_Bool)0;
                        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value138=sType_clone(type_101)))),info);
                        come_call_finalizer2(sType_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sType_finalize,type_101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    var__85=get_variable_from_table(info->lv_table,self->name);
                    var_type_102=(struct sType*)come_increment_ref_count(((struct sType*)(right_value139=sType_clone(var__85->mType))));
                    come_call_finalizer2(sType_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    var_type_102->mStatic=(_Bool)0;
                    if(_if_conditional184=!var__85->mType->mStatic&&!var_type_102->mConstant&&list$1sNodeph_length(var_type_102->mArrayNum)==0,                    _if_conditional184) {
                        if(_if_conditional185=list$1sNodeph_length(var_type_102->mArrayNum)>0,                        _if_conditional185) {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__85->mCValueName,((char*)(right_value140=make_type_name_string(var_type_102,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            for(                            o2_saved_103=(struct list$1sNodeph*)come_increment_ref_count((var_type_102->mArrayNum)),it_104=list$1sNodeph_begin((o2_saved_103));                            !list$1sNodeph_end((o2_saved_103));                            it_104=list$1sNodeph_next((o2_saved_103))                            ){
                                if(_if_conditional186=!node_compile(it_104,info),                                _if_conditional186) {
                                    err_msg(info,"invalid array num");
                                    exit(1);
                                }
                                come_value_105=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value141=get_value_from_stack(-1,info))));
                                come_call_finalizer2(CVALUE_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                dec_stack_ptr(1,info);
                                add_come_code(info,"*(%s)",come_value_105->c_value);
                                come_call_finalizer2(CVALUE_finalize,come_value_105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            come_call_finalizer2(list$1sNodephp_finalize,o2_saved_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            add_come_code(info,");\n");
                        }
                        else {
                            add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__85->mCValueName,((char*)(right_value142=make_type_name_string(var_type_102,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                    }
                    come_call_finalizer2(sType_finalize,var_type_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
            }
            current_stack_frame_struct_106=info->current_stack_frame_struct;
            if(_if_conditional187=current_stack_frame_struct_106&&map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)==((void*)0),            _if_conditional187) {
                parent_var_107=get_variable_from_table(info->lv_table->mParent,self->name);
                if(_if_conditional188=parent_var_107!=((void*)0),                _if_conditional188) {
                    if(_if_conditional189=string_operator_not_equals(parent_var_107->mFunName,info->come_fun->mName),                    _if_conditional189) {
                        come_value_108=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value143=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 335, "CVALUE"))));
                        come_call_finalizer2(CVALUE_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        left_type_109=parent_var_107->mType;
                        if(_if_conditional190=left_type_109->mPointerNum>0&&right_type_84->mPointerNum>0&&right_type_84->mHeap&&left_type_109->mHeap,                        _if_conditional190) {
                            c_value_110=(char*)come_increment_ref_count(((char*)(right_value144=xsprintf("*(parent->%s)",parent_var_107->mCValueName))));
                            right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            decrement_ref_count_object(parent_var_107->mType,c_value_110,info,(_Bool)0);
                            std_move(left_type_109,right_type_84,right_value_83,info);
                            __dec_obj56=come_value_108->c_value;
                            come_value_108->c_value=(char*)come_increment_ref_count(((char*)(right_value145=xsprintf("(*(parent->%s))=%s",parent_var_107->mCValueName,right_value_83->c_value))));
                            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value_id_111=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_83->c_value));
                            if(_if_conditional191=right_value_id_111!=-1,                            _if_conditional191) {
                                remove_object_from_right_values(right_value_id_111,info);
                            }
                            c_value_110 = come_decrement_ref_count2(c_value_110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        else {
                            if(_if_conditional192=left_type_109->mPointerNum>0&&right_type_84->mPointerNum>0&&string_operator_equals(right_type_84->mClass->mName,"void")&&left_type_109->mHeap,                            _if_conditional192) {
                                c_value_112=(char*)come_increment_ref_count(((char*)(right_value146=xsprintf("*(parent->%s)",parent_var_107->mCValueName))));
                                right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                decrement_ref_count_object(parent_var_107->mType,c_value_112,info,(_Bool)0);
                                __dec_obj57=come_value_108->c_value;
                                come_value_108->c_value=(char*)come_increment_ref_count(((char*)(right_value147=xsprintf("(*(parent->%s))=%s",parent_var_107->mCValueName,right_value_83->c_value))));
                                __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                c_value_112 = come_decrement_ref_count2(c_value_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                __dec_obj58=come_value_108->c_value;
                                come_value_108->c_value=(char*)come_increment_ref_count(((char*)(right_value148=xsprintf("(*(parent->%s))=%s",parent_var_107->mCValueName,right_value_83->c_value))));
                                __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                        __dec_obj59=come_value_108->type;
                        come_value_108->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value149=sType_clone(left_type_109))));
                        come_call_finalizer2(sType_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_value_108->var=((void*)0);
                        check_assign_type(((char*)(right_value151=xsprintf("\%s is assigning to",((char*)(right_value150=string_to_string(self->name)))))),left_type_109,right_type_84,come_value_108,(_Bool)0,(_Bool)1,info);
                        right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        add_come_last_code(info,"%s;\n",come_value_108->c_value);
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_108));
                        __result102__ = (_Bool)1;
                        come_call_finalizer2(CVALUE_finalize,come_value_108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(CVALUE_finalize,right_value_83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        array_initializer_43 = come_decrement_ref_count2(array_initializer_43, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result102__;
                        come_call_finalizer2(CVALUE_finalize,come_value_108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            if(self->multiple_assign) {
                multiple_var_name_114=(char*)come_increment_ref_count(((char*)(right_value152=xsprintf("multiple_assign_var%d",++num_multiple_var_113))));
                right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                add_come_code_at_function_head(info,"%s;\n",((char*)(right_value153=make_define_var(right_value_83->type,multiple_var_name_114,(_Bool)0,info))));
                right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                add_come_code(info,"%s=%s;\n",multiple_var_name_114,right_value_83->c_value);
                __dec_obj60=right_value_83->c_value;
                right_value_83->c_value=(char*)come_increment_ref_count(((char*)(right_value154=string_clone(multiple_var_name_114))));
                __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                i_115=0;
                for(                o2_saved_116=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_117=list$1charph_begin((o2_saved_116));                !list$1charph_end((o2_saved_116));                it_117=list$1charph_next((o2_saved_116))                ){
                    if(_if_conditional194=i_115<list$1sTypeph_length(right_type_84->mGenericsTypes),                    _if_conditional194) {
                        right_type2_118=(struct sType*)come_increment_ref_count(((struct sType*)(right_value155=sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(right_type_84->mGenericsTypes,i_115), "07var.c", 389, 1))))));
                        come_call_finalizer2(sType_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        var__119=get_variable_from_table(info->lv_table,it_117);
                        var_type_120=(struct sType*)come_increment_ref_count(((struct sType*)(right_value156=sType_clone(var__119->mType))));
                        come_call_finalizer2(sType_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        var_type_120->mStatic=(_Bool)0;
                        if(_if_conditional195=!var_type_120->mConstant,                        _if_conditional195) {
                            if(_if_conditional196=list$1sNodeph_length(var_type_120->mArrayNum)>0,                            _if_conditional196) {
                                add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__119->mCValueName,((char*)(right_value157=make_type_name_string(var_type_120,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                                right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                for(                                o2_saved_121=(struct list$1sNodeph*)come_increment_ref_count((var_type_120->mArrayNum)),it_122=list$1sNodeph_begin((o2_saved_121));                                !list$1sNodeph_end((o2_saved_121));                                it_122=list$1sNodeph_next((o2_saved_121))                                ){
                                    if(_if_conditional197=!node_compile(it_122,info),                                    _if_conditional197) {
                                        err_msg(info,"invalid array num");
                                        exit(1);
                                    }
                                    come_value_123=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value158=get_value_from_stack(-1,info))));
                                    come_call_finalizer2(CVALUE_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    dec_stack_ptr(1,info);
                                    add_come_code(info,"*(%s)",come_value_123->c_value);
                                    come_call_finalizer2(CVALUE_finalize,come_value_123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                come_call_finalizer2(list$1sNodephp_finalize,o2_saved_121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                add_come_code(info,");\n");
                            }
                            else {
                                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__119->mCValueName,((char*)(right_value159=make_type_name_string(var_type_120,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                                right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                        left_type_124=(struct sType*)come_increment_ref_count(((struct sType*)(right_value160=sType_clone(var__119->mType))));
                        come_call_finalizer2(sType_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        right_value2_125=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value161=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 418, "CVALUE"))));
                        come_call_finalizer2(CVALUE_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        __dec_obj61=right_value2_125->c_value;
                        right_value2_125->c_value=(char*)come_increment_ref_count(((char*)(right_value162=xsprintf("%s->v%d",right_value_83->c_value,i_115+1))));
                        __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        __dec_obj62=right_value2_125->type;
                        right_value2_125->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value163=sType_clone(right_type2_118))));
                        come_call_finalizer2(sType_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        right_value2_125->var=((void*)0);
                        come_value_126=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value164=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 424, "CVALUE"))));
                        come_call_finalizer2(CVALUE_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        check_assign_type(((char*)(right_value166=xsprintf("\%s is assining to}",((char*)(right_value165=string_to_string(self->name)))))),left_type_124,right_type2_118,come_value_126,(_Bool)0,(_Bool)1,info);
                        right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional198=right_type2_118->mHeap&&left_type_124->mHeap&&left_type_124->mPointerNum>0&&right_type2_118->mPointerNum>0,                        _if_conditional198) {
                            if(self->alloc) {
                                std_move(left_type_124,right_type2_118,right_value2_125,info);
                                __dec_obj63=come_value_126->c_value;
                                come_value_126->c_value=(char*)come_increment_ref_count(((char*)(right_value167=xsprintf("%s=%s",var__119->mCValueName,right_value2_125->c_value))));
                                __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            right_value_id_127=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value2_125->c_value));
                            if(_if_conditional200=right_value_id_127!=-1,                            _if_conditional200) {
                                remove_object_from_right_values(right_value_id_127,info);
                            }
                        }
                        else {
                            __dec_obj64=come_value_126->c_value;
                            come_value_126->c_value=(char*)come_increment_ref_count(((char*)(right_value168=xsprintf("%s=%s",var__119->mCValueName,right_value2_125->c_value))));
                            __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        __dec_obj65=come_value_126->type;
                        come_value_126->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value169=sType_clone(left_type_124))));
                        come_call_finalizer2(sType_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_value_126->var=var__119;
                        if(self->alloc) {
                            add_come_code_at_function_head(info,"%s;\n",((char*)(right_value170=make_define_var(left_type_124,var__119->mCValueName,(_Bool)0,info))));
                            right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            add_come_code(info,"%s;\n",come_value_126->c_value);
                        }
                        else {
                            add_come_code(info,"%s;\n",come_value_126->c_value);
                        }
                        come_call_finalizer2(sType_finalize,right_type2_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,var_type_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,left_type_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(CVALUE_finalize,right_value2_125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(CVALUE_finalize,come_value_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    i_115++;
                }
                come_call_finalizer2(list$1charphp_finalize,o2_saved_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                multiple_var_name_114 = come_decrement_ref_count2(multiple_var_name_114, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                var__128=get_variable_from_table(info->lv_table,self->name);
                if(_if_conditional202=var__128==((void*)0),                _if_conditional202) {
                    var__128=get_variable_from_table(info->gv_table,self->name);
                    if(_if_conditional203=var__128==((void*)0),                    _if_conditional203) {
                        err_msg(info,"var not found(%s)(X) at storing variable\n",self->name);
                        __result103__ = (_Bool)1;
                        come_call_finalizer2(CVALUE_finalize,right_value_83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        array_initializer_43 = come_decrement_ref_count2(array_initializer_43, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result103__;
                    }
                }
                if(_if_conditional204=var__128->mType==((void*)0),                _if_conditional204) {
                    __dec_obj66=var__128->mType;
                    var__128->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value171=sType_clone(right_type_84))));
                    come_call_finalizer2(sType_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                left_type_129=(struct sType*)come_increment_ref_count(((struct sType*)(right_value172=sType_clone(var__128->mType))));
                come_call_finalizer2(sType_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_value_130=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value173=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 477, "CVALUE"))));
                come_call_finalizer2(CVALUE_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional205=var__128->mType->mStatic&&!var__128->mGlobal,                _if_conditional205) {
                    check_assign_type(((char*)(right_value175=xsprintf("\%s is assining to",((char*)(right_value174=string_to_string(self->name)))))),left_type_129,right_type_84,right_value_83,(_Bool)0,(_Bool)1,info);
                    right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    add_come_code_at_function_head(info,"%s=%s;\n",((char*)(right_value176=make_define_var(left_type_129,var__128->mCValueName,(_Bool)0,info))),right_value_83->c_value);
                    right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    __dec_obj67=come_value_130->c_value;
                    come_value_130->c_value=(char*)come_increment_ref_count(((char*)(right_value177=__builtin_string(""))));
                    __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_130));
                    transpiler_clear_last_code(info);
                }
                else {
                    if(var__128->mType->mConstant) {
                        check_assign_type(((char*)(right_value179=xsprintf("\%s is assining to",((char*)(right_value178=string_to_string(self->name)))))),left_type_129,right_type_84,right_value_83,(_Bool)0,(_Bool)1,info);
                        right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(self->alloc) {
                            add_come_code_at_function_head(info,"%s=%s;\n",((char*)(right_value180=make_define_var(left_type_129,var__128->mCValueName,(_Bool)0,info))),right_value_83->c_value);
                            right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            add_come_code_at_function_head(info,"%s=%s;\n",var__128->mCValueName,right_value_83->c_value);
                        }
                        __dec_obj68=come_value_130->c_value;
                        come_value_130->c_value=(char*)come_increment_ref_count(((char*)(right_value181=__builtin_string(""))));
                        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_130));
                        transpiler_clear_last_code(info);
                    }
                    else {
                        if(_if_conditional208=right_type_84->mHeap&&left_type_129->mHeap&&left_type_129->mPointerNum>0&&right_type_84->mPointerNum>0,                        _if_conditional208) {
                            check_assign_type(((char*)(right_value183=xsprintf("\%s is assining to",((char*)(right_value182=string_to_string(self->name)))))),left_type_129,right_type_84,right_value_83,(_Bool)0,(_Bool)1,info);
                            right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(self->alloc) {
                                std_move(left_type_129,right_type_84,right_value_83,info);
                                __dec_obj69=come_value_130->c_value;
                                come_value_130->c_value=(char*)come_increment_ref_count(((char*)(right_value184=xsprintf("%s=%s",var__128->mCValueName,right_value_83->c_value))));
                                __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                decrement_ref_count_object(left_type_129,var__128->mCValueName,info,(_Bool)0);
                                std_move(left_type_129,right_type_84,right_value_83,info);
                                __dec_obj70=come_value_130->c_value;
                                come_value_130->c_value=(char*)come_increment_ref_count(((char*)(right_value185=xsprintf("%s=%s",var__128->mCValueName,right_value_83->c_value))));
                                __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            right_value_id_131=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_83->c_value));
                            if(_if_conditional210=right_value_id_131!=-1,                            _if_conditional210) {
                                remove_object_from_right_values(right_value_id_131,info);
                            }
                            __dec_obj71=come_value_130->type;
                            come_value_130->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value186=sType_clone(left_type_129))));
                            come_call_finalizer2(sType_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_value_130->var=var__128;
                            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_130));
                            add_come_last_code(info,"%s;\n",come_value_130->c_value);
                        }
                        else {
                            if(_if_conditional211=string_operator_equals(right_type_84->mClass->mName,"void")&&left_type_129->mHeap&&left_type_129->mPointerNum>0&&right_type_84->mPointerNum>0,                            _if_conditional211) {
                                check_assign_type(((char*)(right_value188=xsprintf("\%s is assining to",((char*)(right_value187=string_to_string(self->name)))))),left_type_129,right_type_84,right_value_83,(_Bool)0,(_Bool)1,info);
                                right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                if(self->alloc) {
                                    __dec_obj72=come_value_130->c_value;
                                    come_value_130->c_value=(char*)come_increment_ref_count(((char*)(right_value189=xsprintf("%s=%s",var__128->mCValueName,right_value_83->c_value))));
                                    __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    decrement_ref_count_object(left_type_129,var__128->mCValueName,info,(_Bool)0);
                                    __dec_obj73=come_value_130->c_value;
                                    come_value_130->c_value=(char*)come_increment_ref_count(((char*)(right_value190=xsprintf("%s=%s",var__128->mCValueName,right_value_83->c_value))));
                                    __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                __dec_obj74=come_value_130->type;
                                come_value_130->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value191=sType_clone(left_type_129))));
                                come_call_finalizer2(sType_finalize,__dec_obj74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_value_130->var=var__128;
                                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_130));
                                add_come_last_code(info,"%s;\n",come_value_130->c_value);
                            }
                            else {
                                check_assign_type(((char*)(right_value193=xsprintf("\%s is assining to",((char*)(right_value192=string_to_string(self->name)))))),left_type_129,right_type_84,right_value_83,(_Bool)0,(_Bool)1,info);
                                right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                if(_if_conditional213=left_type_129->mHeap&&!right_value_83->type->mHeap,                                _if_conditional213) {
                                    if(_if_conditional214=string_operator_equals(right_value_83->type->mClass->mName,"void")&&right_value_83->type->mPointerNum==1,                                    _if_conditional214) {
                                    }
                                    else {
                                        if(_if_conditional215=!right_value_83->type->mDelegate&&!right_value_83->type->mShare&&!gComeGC,                                        _if_conditional215) {
                                            err_msg(info,"require right value as heap object(%s)",self->name);
                                            __result104__ = (_Bool)0;
                                            come_call_finalizer2(sType_finalize,left_type_129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(CVALUE_finalize,come_value_130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(CVALUE_finalize,right_value_83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            array_initializer_43 = come_decrement_ref_count2(array_initializer_43, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            return __result104__;
                                        }
                                    }
                                }
                                __dec_obj75=come_value_130->c_value;
                                come_value_130->c_value=(char*)come_increment_ref_count(((char*)(right_value194=xsprintf("%s=%s",var__128->mCValueName,right_value_83->c_value))));
                                __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                __dec_obj76=come_value_130->type;
                                come_value_130->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value195=sType_clone(left_type_129))));
                                come_call_finalizer2(sType_finalize,__dec_obj76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_value_130->var=var__128;
                                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_130));
                                add_come_last_code(info,"%s;\n",come_value_130->c_value);
                            }
                        }
                    }
                }
                if(_if_conditional216=self->alloc&&!left_type_129->mConstant&&!left_type_129->mStatic,                _if_conditional216) {
                    if(_if_conditional217=list$1sNodeph_length(left_type_129->mArrayNum)>0,                    _if_conditional217) {
                        add_come_code(info,"%s;\n",((char*)(right_value196=make_define_var(left_type_129,var__128->mCValueName,(_Bool)0,info))));
                        right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        add_come_code_at_function_head(info,"%s;\n",((char*)(right_value197=make_define_var(left_type_129,var__128->mCValueName,(_Bool)0,info))));
                        right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                }
                come_call_finalizer2(sType_finalize,left_type_129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,come_value_130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(CVALUE_finalize,right_value_83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
    __result105__ = (_Bool)1;
    array_initializer_43 = come_decrement_ref_count2(array_initializer_43, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result105__;
    array_initializer_43 = come_decrement_ref_count2(array_initializer_43, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
struct sVar* default_value_44;
unsigned int hash_45;
unsigned int it_46;
_Bool _while_condtional9;
_Bool _if_conditional122;
_Bool _if_conditional123;
struct sVar* __result61__;
_Bool _if_conditional128;
_Bool _if_conditional129;
struct sVar* __result62__;
struct sVar* __result63__;
struct sVar* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_44, 0, sizeof(struct sVar*));
memset(&hash_45, 0, sizeof(unsigned int));
memset(&it_46, 0, sizeof(unsigned int));
            memset(&default_value_44,0,sizeof(struct sVar*));
            hash_45=string_get_hash_key(((char*)key))%self->size;
            it_46=hash_45;
            while(_while_condtional9=(_Bool)1,            _while_condtional9) {
                if(_if_conditional122=self->item_existance[it_46],                _if_conditional122) {
                    if(_if_conditional123=string_equals(self->keys[it_46],key),                    _if_conditional123) {
                        __result61__ = __result_obj__ = self->items[it_46];
                        come_call_finalizer2(sVar_finalize,default_value_44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result61__;
                    }
                    it_46++;
                    if(_if_conditional128=it_46>=self->size,                    _if_conditional128) {
                        it_46=0;
                    }
                    else {
                        if(_if_conditional129=it_46==hash_45,                        _if_conditional129) {
                            __result62__ = __result_obj__ = default_value_44;
                            come_call_finalizer2(sVar_finalize,default_value_44, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result62__;
                        }
                    }
                }
                else {
                    __result63__ = __result_obj__ = default_value_44;
                    come_call_finalizer2(sVar_finalize,default_value_44, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result63__;
                }
            }
            __result64__ = __result_obj__ = default_value_44;
            come_call_finalizer2(sVar_finalize,default_value_44, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result64__;
            come_call_finalizer2(sVar_finalize,default_value_44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
_Bool _if_conditional127;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional124=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional124) {
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional125=self!=((void*)0)&&self->mCValueName!=((void*)0),                            _if_conditional125) {
                                self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional126=self!=((void*)0)&&self->mType!=((void*)0),                            _if_conditional126) {
                                come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional127=self!=((void*)0)&&self->mFunName!=((void*)0),                            _if_conditional127) {
                                self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_begin(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional136;
struct tuple3$3sTypephcharphsNodeph* result_53;
struct tuple3$3sTypephcharphsNodeph* __result69__;
_Bool _if_conditional137;
struct tuple3$3sTypephcharphsNodeph* __result70__;
struct tuple3$3sTypephcharphsNodeph* result_54;
struct tuple3$3sTypephcharphsNodeph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_53, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&result_54, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    if(_if_conditional136=self==((void*)0),                    _if_conditional136) {
                        memset(&result_53,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                        __result69__ = __result_obj__ = result_53;
                        return __result69__;
                    }
                    self->it=self->head;
                    if(self->it) {
                        __result70__ = __result_obj__ = self->it->item;
                        return __result70__;
                    }
                    memset(&result_54,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    __result71__ = __result_obj__ = result_54;
                    return __result71__;
}

static _Bool list$1tuple3$3sTypephcharphsNodephph_end(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool __result72__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result72__ = self==((void*)0)||self->it==((void*)0);
                    return __result72__;
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_next(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional138;
struct tuple3$3sTypephcharphsNodeph* result_56;
struct tuple3$3sTypephcharphsNodeph* __result73__;
_Bool _if_conditional139;
struct tuple3$3sTypephcharphsNodeph* __result74__;
struct tuple3$3sTypephcharphsNodeph* result_57;
struct tuple3$3sTypephcharphsNodeph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_56, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&result_57, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    if(_if_conditional138=self==((void*)0)||self->it==((void*)0),                    _if_conditional138) {
                        memset(&result_56,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                        __result73__ = __result_obj__ = result_56;
                        return __result73__;
                    }
                    self->it=self->it->next;
                    if(self->it) {
                        __result74__ = __result_obj__ = self->it->item;
                        return __result74__;
                    }
                    memset(&result_57,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    __result75__ = __result_obj__ = result_57;
                    return __result75__;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional143;
_Bool _if_conditional144;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional143=self!=((void*)0)&&self->c_value!=((void*)0),                            _if_conditional143) {
                                self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional144=self!=((void*)0)&&self->type!=((void*)0),                            _if_conditional144) {
                                come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional146;
int __result78__;
int __result79__;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional146=self==((void*)0),                            _if_conditional146) {
                                __result78__ = 0;
                                return __result78__;
                            }
                            __result79__ = self->len;
                            return __result79__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional148;
struct sNode* result_65;
struct sNode* __result80__;
_Bool _if_conditional149;
struct sNode* __result81__;
struct sNode* result_66;
struct sNode* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_65, 0, sizeof(struct sNode*));
memset(&result_66, 0, sizeof(struct sNode*));
                                if(_if_conditional148=self==((void*)0),                                _if_conditional148) {
                                    memset(&result_65,0,sizeof(struct sNode*));
                                    __result80__ = __result_obj__ = result_65;
                                    return __result80__;
                                }
                                self->it=self->head;
                                if(self->it) {
                                    __result81__ = __result_obj__ = self->it->item;
                                    return __result81__;
                                }
                                memset(&result_66,0,sizeof(struct sNode*));
                                __result82__ = __result_obj__ = result_66;
                                return __result82__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result83__;
memset(&__result_obj__, 0, sizeof(void*));
                                __result83__ = self==((void*)0)||self->it==((void*)0);
                                return __result83__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional150;
struct sNode* result_68;
struct sNode* __result84__;
_Bool _if_conditional151;
struct sNode* __result85__;
struct sNode* result_69;
struct sNode* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_68, 0, sizeof(struct sNode*));
memset(&result_69, 0, sizeof(struct sNode*));
                                if(_if_conditional150=self==((void*)0)||self->it==((void*)0),                                _if_conditional150) {
                                    memset(&result_68,0,sizeof(struct sNode*));
                                    __result84__ = __result_obj__ = result_68;
                                    return __result84__;
                                }
                                self->it=self->it->next;
                                if(self->it) {
                                    __result85__ = __result_obj__ = self->it->item;
                                    return __result85__;
                                }
                                memset(&result_69,0,sizeof(struct sNode*));
                                __result86__ = __result_obj__ = result_69;
                                return __result86__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional162;
void* right_value127;
struct list_item$1CVALUEph* litem_80;
struct CVALUE* __dec_obj53;
_Bool _if_conditional164;
void* right_value128;
struct list_item$1CVALUEph* litem_81;
struct CVALUE* __dec_obj54;
void* right_value129;
struct list_item$1CVALUEph* litem_82;
struct CVALUE* __dec_obj55;
struct list$1CVALUEph* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value127 = (void*)0;
memset(&litem_80, 0, sizeof(struct list_item$1CVALUEph*));
right_value128 = (void*)0;
memset(&litem_81, 0, sizeof(struct list_item$1CVALUEph*));
right_value129 = (void*)0;
memset(&litem_82, 0, sizeof(struct list_item$1CVALUEph*));
                    if(_if_conditional162=self->len==0,                    _if_conditional162) {
                        litem_80=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value127=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 226, "list_item$1CVALUEph"))));
                        come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_80->prev=((void*)0);
                        litem_80->next=((void*)0);
                        __dec_obj53=litem_80->item;
                        litem_80->item=(struct CVALUE*)come_increment_ref_count(item);
                        come_call_finalizer2(CVALUE_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_80;
                        self->head=litem_80;
                    }
                    else {
                        if(_if_conditional164=self->len==1,                        _if_conditional164) {
                            litem_81=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value128=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 236, "list_item$1CVALUEph"))));
                            come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_81->prev=self->head;
                            litem_81->next=((void*)0);
                            __dec_obj54=litem_81->item;
                            litem_81->item=(struct CVALUE*)come_increment_ref_count(item);
                            come_call_finalizer2(CVALUE_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_81;
                            self->head->next=litem_81;
                        }
                        else {
                            litem_82=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value129=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 246, "list_item$1CVALUEph"))));
                            come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_82->prev=self->tail;
                            litem_82->next=((void*)0);
                            __dec_obj55=litem_82->item;
                            litem_82->item=(struct CVALUE*)come_increment_ref_count(item);
                            come_call_finalizer2(CVALUE_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail->next=litem_82;
                            self->tail=litem_82;
                        }
                    }
                    self->len++;
                    __result88__ = __result_obj__ = self;
                    come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result88__;
                    come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional163;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional163=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional163) {
                                come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional172;
char* result_88;
char* __result91__;
_Bool _if_conditional173;
char* __result92__;
char* result_89;
char* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_88, 0, sizeof(char*));
memset(&result_89, 0, sizeof(char*));
                        if(_if_conditional172=self==((void*)0),                        _if_conditional172) {
                            memset(&result_88,0,sizeof(char*));
                            __result91__ = __result_obj__ = result_88;
                            return __result91__;
                        }
                        self->it=self->head;
                        if(self->it) {
                            __result92__ = __result_obj__ = self->it->item;
                            return __result92__;
                        }
                        memset(&result_89,0,sizeof(char*));
                        __result93__ = __result_obj__ = result_89;
                        return __result93__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result94__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result94__ = self==((void*)0)||self->it==((void*)0);
                        return __result94__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional174;
char* result_91;
char* __result95__;
_Bool _if_conditional175;
char* __result96__;
char* result_92;
char* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_91, 0, sizeof(char*));
memset(&result_92, 0, sizeof(char*));
                        if(_if_conditional174=self==((void*)0)||self->it==((void*)0),                        _if_conditional174) {
                            memset(&result_91,0,sizeof(char*));
                            __result95__ = __result_obj__ = result_91;
                            return __result95__;
                        }
                        self->it=self->it->next;
                        if(self->it) {
                            __result96__ = __result_obj__ = self->it->item;
                            return __result96__;
                        }
                        memset(&result_92,0,sizeof(char*));
                        __result97__ = __result_obj__ = result_92;
                        return __result97__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional176;
int __result98__;
int __result99__;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional176=self==((void*)0),                            _if_conditional176) {
                                __result98__ = 0;
                                return __result98__;
                            }
                            __result99__ = self->len;
                            return __result99__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional178;
struct list_item$1sTypeph* it_93;
int i_94;
_Bool _while_condtional10;
_Bool _if_conditional179;
struct sType* __result100__;
struct sType* default_value_95;
struct sType* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_93, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_94, 0, sizeof(int));
memset(&default_value_95, 0, sizeof(struct sType*));
                                if(_if_conditional178=position<0,                                _if_conditional178) {
                                    position+=self->len;
                                }
                                it_93=self->head;
                                i_94=0;
                                while(_while_condtional10=it_93!=((void*)0),                                _while_condtional10) {
                                    if(_if_conditional179=position==i_94,                                    _if_conditional179) {
                                        __result100__ = __result_obj__ = it_93->item;
                                        return __result100__;
                                    }
                                    it_93=it_93->next;
                                    i_94++;
                                }
                                memset(&default_value_95,0,sizeof(struct sType*));
                                __result101__ = __result_obj__ = default_value_95;
                                come_call_finalizer2(sType_finalize,default_value_95, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result101__;
                                come_call_finalizer2(sType_finalize,default_value_95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sStoreNode_sline(struct sStoreNode* self, struct sInfo* info){
void* __result_obj__;
int __result106__;
memset(&__result_obj__, 0, sizeof(void*));
    __result106__ = self->sline;
    return __result106__;
}

char* sStoreNode_sname(struct sStoreNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value198;
char* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
right_value198 = (void*)0;
    __result107__ = __result_obj__ = ((char*)(right_value198=__builtin_string(self->sname)));
    right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result107__;
}

struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct sType* type, _Bool alloc, struct sNode* right_node, struct sInfo* info){
void* __result_obj__;
void* right_value199;
void* right_value200;
struct sNode* _inf_value1;
struct sStoreNode* _inf_obj_value1;
void* right_value209;
struct sNode* result_133;
struct sNode* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
right_value199 = (void*)0;
right_value200 = (void*)0;
right_value209 = (void*)0;
memset(&result_133, 0, sizeof(struct sNode*));
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 594, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sStoreNode*)(right_value200=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value199=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 594, "sStoreNode")))),(char*)come_increment_ref_count(name),(struct list$1charph*)come_increment_ref_count(multiple_assign),((void*)0),(struct sType*)come_increment_ref_count(type),alloc,(struct sNode*)come_increment_ref_count(right_node),((void*)0),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreNode_finalize;
    _inf_value1->clone=(void*)sStoreNode_clone;
    _inf_value1->compile=(void*)sStoreNode_compile;
    _inf_value1->sline=(void*)sStoreNode_sline;
    _inf_value1->sname=(void*)sStoreNode_sname;
    _inf_value1->terminated=(void*)sStoreNode_terminated;
    _inf_value1->kind=(void*)sStoreNode_kind;
    result_133=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value209=_inf_value1)));
    come_call_finalizer2(sStoreNode_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sStoreNode_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value209) { right_value209 = come_decrement_ref_count2(right_value209, ((struct sNode*)right_value209)->finalize, ((struct sNode*)right_value209)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result110__ = __result_obj__ = result_133;
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,multiple_assign, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(right_node) { right_node = come_decrement_ref_count2(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(result_133) { result_133 = come_decrement_ref_count2(result_133, ((struct sNode*)result_133)->finalize, ((struct sNode*)result_133)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result110__;
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,multiple_assign, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(right_node) { right_node = come_decrement_ref_count2(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(result_133) { result_133 = come_decrement_ref_count2(result_133, ((struct sNode*)result_133)->finalize, ((struct sNode*)result_133)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value210;
char* __dec_obj84;
void* right_value211;
char* __dec_obj85;
struct sLoadNode* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value210 = (void*)0;
right_value211 = (void*)0;
    __dec_obj84=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value210=__builtin_string(name))));
    __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj85=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value211=__builtin_string(info->sname))));
    __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result111__ = __result_obj__ = self;
    come_call_finalizer2(sLoadNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result111__;
    come_call_finalizer2(sLoadNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sLoadNode_terminated(){
void* __result_obj__;
_Bool __result112__;
memset(&__result_obj__, 0, sizeof(void*));
    __result112__ = (_Bool)0;
    return __result112__;
}

char* sLoadNode_kind(){
void* __result_obj__;
void* right_value212;
char* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
right_value212 = (void*)0;
    __result113__ = __result_obj__ = ((char*)(right_value212=__builtin_string("sLoadNode")));
    right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result113__;
}

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info){
void* __result_obj__;
struct sClass* current_stack_frame_struct_134;
_Bool _if_conditional237;
struct sVar* parent_var_135;
_Bool _if_conditional238;
_Bool _if_conditional239;
void* right_value213;
struct CVALUE* come_value_136;
struct sType* type_137;
void* right_value214;
char* __dec_obj86;
void* right_value215;
struct sType* __dec_obj87;
_Bool __result114__;
struct sVar* var__138;
_Bool _if_conditional240;
_Bool _if_conditional241;
struct sFun* fun_142;
_Bool _if_conditional261;
void* right_value216;
struct CVALUE* come_value_143;
void* right_value217;
char* __dec_obj88;
struct sType* __dec_obj89;
_Bool __result119__;
_Bool __result120__;
void* right_value218;
struct CVALUE* come_value_144;
void* right_value219;
char* __dec_obj90;
void* right_value220;
struct sType* __dec_obj91;
_Bool _if_conditional262;
void* right_value221;
struct sType* __dec_obj92;
_Bool __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&current_stack_frame_struct_134, 0, sizeof(struct sClass*));
memset(&parent_var_135, 0, sizeof(struct sVar*));
right_value213 = (void*)0;
memset(&come_value_136, 0, sizeof(struct CVALUE*));
memset(&type_137, 0, sizeof(struct sType*));
right_value214 = (void*)0;
right_value215 = (void*)0;
memset(&var__138, 0, sizeof(struct sVar*));
memset(&fun_142, 0, sizeof(struct sFun*));
right_value216 = (void*)0;
memset(&come_value_143, 0, sizeof(struct CVALUE*));
right_value217 = (void*)0;
right_value218 = (void*)0;
memset(&come_value_144, 0, sizeof(struct CVALUE*));
right_value219 = (void*)0;
right_value220 = (void*)0;
right_value221 = (void*)0;
    current_stack_frame_struct_134=info->current_stack_frame_struct;
    if(_if_conditional237=current_stack_frame_struct_134&&map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)==((void*)0),    _if_conditional237) {
        parent_var_135=get_variable_from_table(info->lv_table->mParent,self->name);
        if(_if_conditional238=parent_var_135!=((void*)0),        _if_conditional238) {
            if(_if_conditional239=string_operator_not_equals(parent_var_135->mFunName,info->come_fun->mName),            _if_conditional239) {
                come_value_136=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value213=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 637, "CVALUE"))));
                come_call_finalizer2(CVALUE_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                type_137=parent_var_135->mType;
                __dec_obj86=come_value_136->c_value;
                come_value_136->c_value=(char*)come_increment_ref_count(((char*)(right_value214=xsprintf("(*(parent->%s))",parent_var_135->mCValueName))));
                __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                __dec_obj87=come_value_136->type;
                come_value_136->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value215=sType_clone(type_137))));
                come_call_finalizer2(sType_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_value_136->var=((void*)0);
                add_come_last_code(info,"%s;\n",come_value_136->c_value);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_136));
                __result114__ = (_Bool)1;
                come_call_finalizer2(CVALUE_finalize,come_value_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result114__;
                come_call_finalizer2(CVALUE_finalize,come_value_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    var__138=get_variable_from_table(info->lv_table,self->name);
    if(_if_conditional240=var__138==((void*)0),    _if_conditional240) {
        var__138=get_variable_from_table(info->gv_table,self->name);
        if(_if_conditional241=var__138==((void*)0),        _if_conditional241) {
            fun_142=map$2charphsFunphp_operator_load_element(info->funcs,self->name);
            if(fun_142) {
                come_value_143=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value216=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 664, "CVALUE"))));
                come_call_finalizer2(CVALUE_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                __dec_obj88=come_value_143->c_value;
                come_value_143->c_value=(char*)come_increment_ref_count(((char*)(right_value217=xsprintf("%s",fun_142->mName))));
                __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                __dec_obj89=come_value_143->type;
                come_value_143->type=(struct sType*)come_increment_ref_count(fun_142->mLambdaType);
                come_call_finalizer2(sType_finalize,__dec_obj89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_value_143->var=((void*)0);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_143));
                __result119__ = (_Bool)1;
                come_call_finalizer2(CVALUE_finalize,come_value_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result119__;
                come_call_finalizer2(CVALUE_finalize,come_value_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                err_msg(info,"var not found(%s)(Z) at loading variable\n",self->name);
                __result120__ = (_Bool)1;
                return __result120__;
            }
        }
    }
    come_value_144=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value218=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 681, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj90=come_value_144->c_value;
    come_value_144->c_value=(char*)come_increment_ref_count(((char*)(right_value219=xsprintf("%s",var__138->mCValueName))));
    __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj91=come_value_144->type;
    come_value_144->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value220=sType_clone(var__138->mType))));
    come_call_finalizer2(sType_finalize,__dec_obj91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_144->var=var__138;
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_144));
    if(_if_conditional262=list$1sNodeph_length(come_value_144->type->mArrayNum)==1,    _if_conditional262) {
        __dec_obj92=come_value_144->type->mOriginalLoadVarType->v1;
        come_value_144->type->mOriginalLoadVarType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value221=sType_clone(come_value_144->type))));
        come_call_finalizer2(sType_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1sNodeph_reset(come_value_144->type->mArrayNum);
        come_value_144->type->mPointerNum++;
        come_value_144->type->mOriginalTypeNamePointerNum=come_value_144->type->mPointerNum;
    }
    __result122__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result122__;
    come_call_finalizer2(CVALUE_finalize,come_value_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_139;
unsigned int hash_140;
unsigned int it_141;
_Bool _while_condtional11;
_Bool _if_conditional242;
_Bool _if_conditional243;
struct sFun* __result115__;
_Bool _if_conditional259;
_Bool _if_conditional260;
struct sFun* __result116__;
struct sFun* __result117__;
struct sFun* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_139, 0, sizeof(struct sFun*));
memset(&hash_140, 0, sizeof(unsigned int));
memset(&it_141, 0, sizeof(unsigned int));
                memset(&default_value_139,0,sizeof(struct sFun*));
                hash_140=string_get_hash_key(((char*)key))%self->size;
                it_141=hash_140;
                while(_while_condtional11=(_Bool)1,                _while_condtional11) {
                    if(_if_conditional242=self->item_existance[it_141],                    _if_conditional242) {
                        if(_if_conditional243=string_equals(self->keys[it_141],key),                        _if_conditional243) {
                            __result115__ = __result_obj__ = self->items[it_141];
                            come_call_finalizer2(sFun_finalize,default_value_139, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result115__;
                        }
                        it_141++;
                        if(_if_conditional259=it_141>=self->size,                        _if_conditional259) {
                            it_141=0;
                        }
                        else {
                            if(_if_conditional260=it_141==hash_140,                            _if_conditional260) {
                                __result116__ = __result_obj__ = default_value_139;
                                come_call_finalizer2(sFun_finalize,default_value_139, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result116__;
                            }
                        }
                    }
                    else {
                        __result117__ = __result_obj__ = default_value_139;
                        come_call_finalizer2(sFun_finalize,default_value_139, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result117__;
                    }
                }
                __result118__ = __result_obj__ = default_value_139;
                come_call_finalizer2(sFun_finalize,default_value_139, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result118__;
                come_call_finalizer2(sFun_finalize,default_value_139, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional244;
_Bool _if_conditional245;
_Bool _if_conditional246;
_Bool _if_conditional247;
_Bool _if_conditional248;
_Bool _if_conditional249;
_Bool _if_conditional250;
_Bool _if_conditional253;
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool _if_conditional256;
_Bool _if_conditional257;
_Bool _if_conditional258;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional244=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional244) {
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional245=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional245) {
                                    come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional246=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional246) {
                                    come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional247=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional247) {
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional248=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                _if_conditional248) {
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional249=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                _if_conditional249) {
                                    come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional250=self!=((void*)0)&&self->mBlock!=((void*)0),                                _if_conditional250) {
                                    come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional253=self!=((void*)0)&&self->mSource!=((void*)0),                                _if_conditional253) {
                                    come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional254=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                _if_conditional254) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional255=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                _if_conditional255) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional256=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                _if_conditional256) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional257=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                _if_conditional257) {
                                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional258=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional258) {
                                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional251;
_Bool _if_conditional252;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional251=self!=((void*)0)&&self->mNodes!=((void*)0),                                        _if_conditional251) {
                                            come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional252=self!=((void*)0)&&self->mVarTable!=((void*)0),                                        _if_conditional252) {
                                            come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_145;
_Bool _while_condtional12;
struct list_item$1sNodeph* prev_it_146;
struct list$1sNodeph* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_145, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_146, 0, sizeof(struct list_item$1sNodeph*));
            it_145=self->head;
            while(_while_condtional12=it_145!=((void*)0),            _while_condtional12) {
                prev_it_146=it_145;
                it_145=it_145->next;
                come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_146, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result121__ = __result_obj__ = self;
            return __result121__;
}

int sLoadNode_sline(struct sLoadNode* self, struct sInfo* info){
void* __result_obj__;
int __result123__;
memset(&__result_obj__, 0, sizeof(void*));
    __result123__ = self->sline;
    return __result123__;
}

char* sLoadNode_sname(struct sLoadNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value222;
char* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
right_value222 = (void*)0;
    __result124__ = __result_obj__ = ((char*)(right_value222=__builtin_string(self->sname)));
    right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result124__;
}

struct sNode* load_var(char* name, struct sInfo* info){
void* __result_obj__;
void* right_value223;
void* right_value224;
struct sNode* _inf_value2;
struct sLoadNode* _inf_obj_value2;
void* right_value228;
struct sNode* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
right_value223 = (void*)0;
right_value224 = (void*)0;
right_value228 = (void*)0;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 711, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sLoadNode*)(right_value224=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value223=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 711, "sLoadNode")))),(char*)come_increment_ref_count(name),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLoadNode_finalize;
    _inf_value2->clone=(void*)sLoadNode_clone;
    _inf_value2->compile=(void*)sLoadNode_compile;
    _inf_value2->sline=(void*)sLoadNode_sline;
    _inf_value2->sname=(void*)sLoadNode_sname;
    _inf_value2->terminated=(void*)sLoadNode_terminated;
    _inf_value2->kind=(void*)sLoadNode_kind;
    __result127__ = __result_obj__ = ((struct sNode*)(right_value228=_inf_value2));
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sLoadNode_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sLoadNode_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value228) { right_value228 = come_decrement_ref_count2(right_value228, ((struct sNode*)right_value228)->finalize, ((struct sNode*)right_value228)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result127__;
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value229;
char* __dec_obj95;
void* right_value230;
char* __dec_obj96;
struct sFunLoadNode* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
right_value229 = (void*)0;
right_value230 = (void*)0;
    __dec_obj95=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value229=__builtin_string(name))));
    __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj96=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value230=__builtin_string(info->sname))));
    __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result128__ = __result_obj__ = self;
    come_call_finalizer2(sFunLoadNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result128__;
    come_call_finalizer2(sFunLoadNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void sFunLoadNode_finalize(struct sFunLoadNode* self){
void* __result_obj__;
_Bool _if_conditional269;
_Bool _if_conditional270;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional269=self!=((void*)0)&&self->name!=((void*)0),        _if_conditional269) {
            self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional270=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional270) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

_Bool sFunLoadNode_terminated(){
void* __result_obj__;
_Bool __result129__;
memset(&__result_obj__, 0, sizeof(void*));
    __result129__ = (_Bool)0;
    return __result129__;
}

char* sFunLoadNode_kind(){
void* __result_obj__;
void* right_value231;
char* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
right_value231 = (void*)0;
    __result130__ = __result_obj__ = ((char*)(right_value231=__builtin_string("sFunLoadNode")));
    right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result130__;
}

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info){
void* __result_obj__;
struct sFun* fun_148;
_Bool _if_conditional271;
_Bool __result131__;
void* right_value232;
struct CVALUE* come_value_149;
void* right_value233;
char* __dec_obj97;
struct sType* __dec_obj98;
_Bool __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&fun_148, 0, sizeof(struct sFun*));
right_value232 = (void*)0;
memset(&come_value_149, 0, sizeof(struct CVALUE*));
right_value233 = (void*)0;
    fun_148=map$2charphsFunphp_operator_load_element(info->funcs,self->name);
    if(_if_conditional271=fun_148==((void*)0),    _if_conditional271) {
        err_msg(info,"fun not found(%s) at loading variable\n",self->name);
        __result131__ = (_Bool)0;
        return __result131__;
    }
    else {
        come_value_149=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value232=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 750, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj97=come_value_149->c_value;
        come_value_149->c_value=(char*)come_increment_ref_count(((char*)(right_value233=xsprintf("%s",fun_148->mName))));
        __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj98=come_value_149->type;
        come_value_149->type=(struct sType*)come_increment_ref_count(fun_148->mLambdaType);
        come_call_finalizer2(sType_finalize,__dec_obj98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_value_149->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_149));
        come_call_finalizer2(CVALUE_finalize,come_value_149, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result132__ = (_Bool)1;
    return __result132__;
}

int sFunLoadNode_sline(struct sFunLoadNode* self, struct sInfo* info){
void* __result_obj__;
int __result133__;
memset(&__result_obj__, 0, sizeof(void*));
    __result133__ = self->sline;
    return __result133__;
}

char* sFunLoadNode_sname(struct sFunLoadNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value234;
char* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
right_value234 = (void*)0;
    __result134__ = __result_obj__ = ((char*)(right_value234=__builtin_string(self->sname)));
    right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result134__;
}

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value235;
struct sVar* self_150;
void* right_value236;
char* __dec_obj99;
void* right_value237;
struct sType* __dec_obj100;
_Bool _if_conditional272;
void* right_value238;
char* __dec_obj101;
static int n_151=0;
void* right_value239;
char* __dec_obj102;
_Bool _if_conditional273;
void* right_value240;
char* __dec_obj103;
char* __dec_obj104;
void* right_value247;
memset(&__result_obj__, 0, sizeof(void*));
right_value235 = (void*)0;
memset(&self_150, 0, sizeof(struct sVar*));
right_value236 = (void*)0;
right_value237 = (void*)0;
right_value238 = (void*)0;
right_value239 = (void*)0;
right_value240 = (void*)0;
right_value247 = (void*)0;
    self_150=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value235=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 775, "sVar"))));
    come_call_finalizer2(sVar_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj99=self_150->mName;
    self_150->mName=(char*)come_increment_ref_count(((char*)(right_value236=__builtin_string(name))));
    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj100=self_150->mType;
    self_150->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value237=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj100, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(type->mFunctionParam) {
        __dec_obj101=self_150->mCValueName;
        self_150->mCValueName=(char*)come_increment_ref_count(((char*)(right_value238=__builtin_string(name))));
        __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj102=self_150->mCValueName;
        self_150->mCValueName=(char*)come_increment_ref_count(((char*)(right_value239=xsprintf("%s_%d",name,n_151++))));
        __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    self_150->mBlockLevel=info->block_level;
    self_150->mAllocaValue=(_Bool)0;
    self_150->mFunctionParam=(_Bool)0;
    self_150->mNoFree=(_Bool)0;
    if(info->come_fun) {
        __dec_obj103=self_150->mFunName;
        self_150->mFunName=(char*)come_increment_ref_count(((char*)(right_value240=string_clone(info->come_fun->mName))));
        __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj104=self_150->mFunName;
        self_150->mFunName=((void*)0);
        __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    map$2charphsVarph_insert(info->lv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value247=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_150));
    right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sVar_finalize,self_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool _if_conditional274;
_Bool _if_conditional286;
_Bool _if_conditional287;
unsigned int hash_169;
unsigned int it_170;
_Bool _while_condtional15;
_Bool _if_conditional288;
_Bool _if_conditional289;
_Bool _if_conditional290;
_Bool _if_conditional310;
_Bool _if_conditional311;
_Bool _if_conditional312;
_Bool _if_conditional313;
_Bool _if_conditional314;
_Bool same_key_exist_187;
char* it2_190;
_Bool _if_conditional319;
_Bool _if_conditional320;
struct map$2charphsVarph* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_169, 0, sizeof(unsigned int));
memset(&it_170, 0, sizeof(unsigned int));
memset(&same_key_exist_187, 0, sizeof(_Bool));
memset(&it2_190, 0, sizeof(char*));
        if(_if_conditional274=self->len*10>=self->size,        _if_conditional274) {
            map$2charphsVarph_rehash(self);
        }
        if(_if_conditional286=1,        _if_conditional286) {
            if(_if_conditional287=key==((void*)0),            _if_conditional287) {
                stackframe();
                puts("key is null");
                exit(2);
            }
        }
        hash_169=string_get_hash_key(key)%self->size;
        it_170=hash_169;
        while(_while_condtional15=(_Bool)1,        _while_condtional15) {
            if(_if_conditional288=self->item_existance[it_170],            _if_conditional288) {
                if(_if_conditional289=string_equals(self->keys[it_170],key),                _if_conditional289) {
                    if(_if_conditional290=1,                    _if_conditional290) {
                        list$1charp_remove(self->key_list,self->keys[it_170]);
                        self->keys[it_170] = come_decrement_ref_count2(self->keys[it_170], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        self->keys[it_170]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charp_remove(self->key_list,self->keys[it_170]);
                        self->keys[it_170]=key;
                    }
                    if(_if_conditional310=1,                    _if_conditional310) {
                        come_call_finalizer2(sVar_finalize,self->items[it_170], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->items[it_170]=(struct sVar*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_170]=item;
                    }
                    break;
                }
                it_170++;
                if(_if_conditional311=it_170>=self->size,                _if_conditional311) {
                    it_170=0;
                }
                else {
                    if(_if_conditional312=it_170==hash_169,                    _if_conditional312) {
                        printf("unexpected error in map.insert\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                self->item_existance[it_170]=(_Bool)1;
                if(_if_conditional313=1,                _if_conditional313) {
                    self->keys[it_170]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_170]=key;
                }
                if(_if_conditional314=1,                _if_conditional314) {
                    self->items[it_170]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_170]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_187=(_Bool)0;
        for(        it2_190=list$1charp_begin(self->key_list);        !list$1charp_end(self->key_list);        it2_190=list$1charp_next(self->key_list)        ){
            if(_if_conditional319=string_equals(it2_190,key),            _if_conditional319) {
                puts("SAME KEY");
                same_key_exist_187=(_Bool)1;
            }
        }
        if(_if_conditional320=!same_key_exist_187,        _if_conditional320) {
            list$1charp_push_back(self->key_list,key);
        }
        __result158__ = __result_obj__ = self;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result158__;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
int size_152;
void* right_value241;
char** keys_153;
void* right_value242;
struct sVar** items_154;
void* right_value243;
_Bool* item_existance_155;
int len_156;
char* it_159;
struct sVar* default_value_162;
struct sVar* it2_165;
unsigned int hash_166;
int n_167;
_Bool _while_condtional14;
_Bool _if_conditional283;
_Bool _if_conditional284;
_Bool _if_conditional285;
struct sVar* default_value_168;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_152, 0, sizeof(int));
right_value241 = (void*)0;
memset(&keys_153, 0, sizeof(char**));
right_value242 = (void*)0;
memset(&items_154, 0, sizeof(struct sVar**));
right_value243 = (void*)0;
memset(&item_existance_155, 0, sizeof(_Bool*));
memset(&len_156, 0, sizeof(int));
memset(&it_159, 0, sizeof(char*));
memset(&default_value_162, 0, sizeof(struct sVar*));
memset(&it2_165, 0, sizeof(struct sVar*));
memset(&hash_166, 0, sizeof(unsigned int));
memset(&n_167, 0, sizeof(int));
memset(&default_value_168, 0, sizeof(struct sVar*));
                size_152=self->size*10;
                keys_153=(char**)come_increment_ref_count(((char**)(right_value241=(char**)come_calloc(1, sizeof(char*)*(1*(size_152)), "./comelang2.h", 1338, "char*%"))));
                right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                items_154=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value242=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_152)), "./comelang2.h", 1339, "sVar*%"))));
                come_call_finalizer2(sVar_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                item_existance_155=(_Bool*)come_increment_ref_count(((_Bool*)(right_value243=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_152)), "./comelang2.h", 1340, "bool"))));
                right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                len_156=0;
                for(                it_159=map$2charphsVarph_begin(self);                !map$2charphsVarph_end(self);                it_159=map$2charphsVarph_next(self)                ){
                    memset(&default_value_162,0,sizeof(struct sVar*));
                    it2_165=map$2charphsVarph_at(self,it_159,default_value_162);
                    hash_166=string_get_hash_key(it_159)%size_152;
                    n_167=hash_166;
                    while(_while_condtional14=(_Bool)1,                    _while_condtional14) {
                        if(_if_conditional283=item_existance_155[n_167],                        _if_conditional283) {
                            n_167++;
                            if(_if_conditional284=n_167>=size_152,                            _if_conditional284) {
                                n_167=0;
                            }
                            else {
                                if(_if_conditional285=n_167==hash_166,                                _if_conditional285) {
                                    printf("unexpected error in map.rehash(1)\n");
                                    stackframe();
                                    exit(2);
                                }
                            }
                        }
                        else {
                            item_existance_155[n_167]=(_Bool)1;
                            keys_153[n_167]=it_159;
                            items_154[n_167]=map$2charphsVarph_at(self,it_159,default_value_168);
                            len_156++;
                            break;
                        }
                    }
                }
                come_free((char*)self->items);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_free((char*)self->keys);
                self->keys=keys_153;
                self->items=items_154;
                self->item_existance=item_existance_155;
                self->size=size_152;
                self->len=len_156;
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional275;
char* result_157;
char* __result135__;
_Bool _if_conditional276;
char* __result136__;
char* result_158;
char* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_157, 0, sizeof(char*));
memset(&result_158, 0, sizeof(char*));
                    if(_if_conditional275=self==((void*)0),                    _if_conditional275) {
                        memset(&result_157,0,sizeof(char*));
                        __result135__ = __result_obj__ = result_157;
                        return __result135__;
                    }
                    self->key_list->it=self->key_list->head;
                    if(self->key_list->it) {
                        __result136__ = __result_obj__ = self->key_list->it->item;
                        return __result136__;
                    }
                    memset(&result_158,0,sizeof(char*));
                    __result137__ = __result_obj__ = result_158;
                    return __result137__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result138__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result138__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result138__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional277;
char* result_160;
char* __result139__;
_Bool _if_conditional278;
char* __result140__;
char* result_161;
char* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_160, 0, sizeof(char*));
memset(&result_161, 0, sizeof(char*));
                    if(_if_conditional277=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional277) {
                        memset(&result_160,0,sizeof(char*));
                        __result139__ = __result_obj__ = result_160;
                        return __result139__;
                    }
                    self->key_list->it=self->key_list->it->next;
                    if(self->key_list->it) {
                        __result140__ = __result_obj__ = self->key_list->it->item;
                        return __result140__;
                    }
                    memset(&result_161,0,sizeof(char*));
                    __result141__ = __result_obj__ = result_161;
                    return __result141__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_163;
unsigned int it_164;
_Bool _while_condtional13;
_Bool _if_conditional279;
_Bool _if_conditional280;
struct sVar* __result142__;
_Bool _if_conditional281;
_Bool _if_conditional282;
struct sVar* __result143__;
struct sVar* __result144__;
struct sVar* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_163, 0, sizeof(unsigned int));
memset(&it_164, 0, sizeof(unsigned int));
                        hash_163=string_get_hash_key(((char*)key))%self->size;
                        it_164=hash_163;
                        while(_while_condtional13=(_Bool)1,                        _while_condtional13) {
                            if(_if_conditional279=self->item_existance[it_164],                            _if_conditional279) {
                                if(_if_conditional280=string_equals(self->keys[it_164],key),                                _if_conditional280) {
                                    __result142__ = __result_obj__ = self->items[it_164];
                                    come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result142__;
                                }
                                it_164++;
                                if(_if_conditional281=it_164>=self->size,                                _if_conditional281) {
                                    it_164=0;
                                }
                                else {
                                    if(_if_conditional282=it_164==hash_163,                                    _if_conditional282) {
                                        __result143__ = __result_obj__ = default_value;
                                        come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result143__;
                                    }
                                }
                            }
                            else {
                                __result144__ = __result_obj__ = default_value;
                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result144__;
                            }
                        }
                        __result145__ = __result_obj__ = default_value;
                        come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result145__;
                        come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_171;
struct list_item$1charp* it_172;
_Bool _while_condtional16;
_Bool _if_conditional291;
struct list$1charp* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_171, 0, sizeof(int));
memset(&it_172, 0, sizeof(struct list_item$1charp*));
                            it2_171=0;
                            it_172=self->head;
                            while(_while_condtional16=it_172!=((void*)0),                            _while_condtional16) {
                                if(_if_conditional291=string_equals(it_172->item,item),                                _if_conditional291) {
                                    list$1charp_delete(self,it2_171,it2_171+1);
                                    break;
                                }
                                it2_171++;
                                it_172=it_172->next;
                            }
                            __result149__ = __result_obj__ = self;
                            return __result149__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional292;
_Bool _if_conditional293;
_Bool _if_conditional294;
int tmp_173;
_Bool _if_conditional295;
_Bool _if_conditional296;
_Bool _if_conditional297;
struct list$1charp* __result146__;
_Bool _if_conditional298;
_Bool _if_conditional299;
struct list_item$1charp* it_176;
int i_177;
_Bool _while_condtional18;
_Bool _if_conditional300;
struct list_item$1charp* prev_it_178;
_Bool _if_conditional301;
_Bool _if_conditional302;
struct list_item$1charp* it_179;
int i_180;
_Bool _while_condtional19;
_Bool _if_conditional303;
_Bool _if_conditional304;
struct list_item$1charp* prev_it_181;
struct list_item$1charp* it_182;
struct list_item$1charp* head_prev_it_183;
struct list_item$1charp* tail_it_184;
int i_185;
_Bool _while_condtional20;
_Bool _if_conditional305;
_Bool _if_conditional306;
_Bool _if_conditional307;
struct list_item$1charp* prev_it_186;
_Bool _if_conditional308;
_Bool _if_conditional309;
struct list$1charp* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_173, 0, sizeof(int));
memset(&it_176, 0, sizeof(struct list_item$1charp*));
memset(&i_177, 0, sizeof(int));
memset(&prev_it_178, 0, sizeof(struct list_item$1charp*));
memset(&it_179, 0, sizeof(struct list_item$1charp*));
memset(&i_180, 0, sizeof(int));
memset(&prev_it_181, 0, sizeof(struct list_item$1charp*));
memset(&it_182, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_183, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_184, 0, sizeof(struct list_item$1charp*));
memset(&i_185, 0, sizeof(int));
memset(&prev_it_186, 0, sizeof(struct list_item$1charp*));
                                        if(_if_conditional292=head<0,                                        _if_conditional292) {
                                            head+=self->len;
                                        }
                                        if(_if_conditional293=tail<0,                                        _if_conditional293) {
                                            tail+=self->len+1;
                                        }
                                        if(_if_conditional294=head>tail,                                        _if_conditional294) {
                                            tmp_173=tail;
                                            tail=head;
                                            head=tmp_173;
                                        }
                                        if(_if_conditional295=head<0,                                        _if_conditional295) {
                                            head=0;
                                        }
                                        if(_if_conditional296=tail>self->len,                                        _if_conditional296) {
                                            tail=self->len;
                                        }
                                        if(_if_conditional297=head==tail,                                        _if_conditional297) {
                                            __result146__ = __result_obj__ = self;
                                            return __result146__;
                                        }
                                        if(_if_conditional298=head==0&&tail==self->len,                                        _if_conditional298) {
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            if(_if_conditional299=head==0,                                            _if_conditional299) {
                                                it_176=self->head;
                                                i_177=0;
                                                while(_while_condtional18=it_176!=((void*)0),                                                _while_condtional18) {
                                                    if(_if_conditional300=i_177<tail,                                                    _if_conditional300) {
                                                        prev_it_178=it_176;
                                                        it_176=it_176->next;
                                                        i_177++;
                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_178, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        self->len--;
                                                    }
                                                    else {
                                                        if(_if_conditional301=i_177==tail,                                                        _if_conditional301) {
                                                            self->head=it_176;
                                                            self->head->prev=((void*)0);
                                                            break;
                                                        }
                                                        else {
                                                            it_176=it_176->next;
                                                            i_177++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                if(_if_conditional302=tail==self->len,                                                _if_conditional302) {
                                                    it_179=self->head;
                                                    i_180=0;
                                                    while(_while_condtional19=it_179!=((void*)0),                                                    _while_condtional19) {
                                                        if(_if_conditional303=i_180==head,                                                        _if_conditional303) {
                                                            self->tail=it_179->prev;
                                                            self->tail->next=((void*)0);
                                                        }
                                                        if(_if_conditional304=i_180>=head,                                                        _if_conditional304) {
                                                            prev_it_181=it_179;
                                                            it_179=it_179->next;
                                                            i_180++;
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_181, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_179=it_179->next;
                                                            i_180++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    it_182=self->head;
                                                    head_prev_it_183=((void*)0);
                                                    tail_it_184=((void*)0);
                                                    i_185=0;
                                                    while(_while_condtional20=it_182!=((void*)0),                                                    _while_condtional20) {
                                                        if(_if_conditional305=i_185==head,                                                        _if_conditional305) {
                                                            head_prev_it_183=it_182->prev;
                                                        }
                                                        if(_if_conditional306=i_185==tail,                                                        _if_conditional306) {
                                                            tail_it_184=it_182;
                                                        }
                                                        if(_if_conditional307=i_185>=head&&i_185<tail,                                                        _if_conditional307) {
                                                            prev_it_186=it_182;
                                                            it_182=it_182->next;
                                                            i_185++;
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_186, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_182=it_182->next;
                                                            i_185++;
                                                        }
                                                    }
                                                    if(_if_conditional308=head_prev_it_183!=((void*)0),                                                    _if_conditional308) {
                                                        head_prev_it_183->next=tail_it_184;
                                                    }
                                                    if(_if_conditional309=tail_it_184!=((void*)0),                                                    _if_conditional309) {
                                                        tail_it_184->prev=head_prev_it_183;
                                                    }
                                                }
                                            }
                                        }
                                        __result148__ = __result_obj__ = self;
                                        return __result148__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_174;
_Bool _while_condtional17;
struct list_item$1charp* prev_it_175;
struct list$1charp* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_174, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_175, 0, sizeof(struct list_item$1charp*));
                                                it_174=self->head;
                                                while(_while_condtional17=it_174!=((void*)0),                                                _while_condtional17) {
                                                    prev_it_175=it_174;
                                                    it_174=it_174->next;
                                                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_175, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                __result147__ = __result_obj__ = self;
                                                return __result147__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional315;
char* result_188;
char* __result150__;
_Bool _if_conditional316;
char* __result151__;
char* result_189;
char* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_188, 0, sizeof(char*));
memset(&result_189, 0, sizeof(char*));
            if(_if_conditional315=self==((void*)0),            _if_conditional315) {
                memset(&result_188,0,sizeof(char*));
                __result150__ = __result_obj__ = result_188;
                return __result150__;
            }
            self->it=self->head;
            if(self->it) {
                __result151__ = __result_obj__ = self->it->item;
                return __result151__;
            }
            memset(&result_189,0,sizeof(char*));
            __result152__ = __result_obj__ = result_189;
            return __result152__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result153__;
memset(&__result_obj__, 0, sizeof(void*));
            __result153__ = self==((void*)0)||self->it==((void*)0);
            return __result153__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional317;
char* result_191;
char* __result154__;
_Bool _if_conditional318;
char* __result155__;
char* result_192;
char* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_191, 0, sizeof(char*));
memset(&result_192, 0, sizeof(char*));
            if(_if_conditional317=self==((void*)0)||self->it==((void*)0),            _if_conditional317) {
                memset(&result_191,0,sizeof(char*));
                __result154__ = __result_obj__ = result_191;
                return __result154__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result155__ = __result_obj__ = self->it->item;
                return __result155__;
            }
            memset(&result_192,0,sizeof(char*));
            __result156__ = __result_obj__ = result_192;
            return __result156__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional321;
void* right_value244;
struct list_item$1charp* litem_193;
_Bool _if_conditional322;
void* right_value245;
struct list_item$1charp* litem_194;
void* right_value246;
struct list_item$1charp* litem_195;
struct list$1charp* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
right_value244 = (void*)0;
memset(&litem_193, 0, sizeof(struct list_item$1charp*));
right_value245 = (void*)0;
memset(&litem_194, 0, sizeof(struct list_item$1charp*));
right_value246 = (void*)0;
memset(&litem_195, 0, sizeof(struct list_item$1charp*));
                if(_if_conditional321=self->len==0,                _if_conditional321) {
                    litem_193=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value244=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 226, "list_item$1charp"))));
                    come_call_finalizer2(list_item$1charpp_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_193->prev=((void*)0);
                    litem_193->next=((void*)0);
                    litem_193->item=item;
                    self->tail=litem_193;
                    self->head=litem_193;
                }
                else {
                    if(_if_conditional322=self->len==1,                    _if_conditional322) {
                        litem_194=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value245=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 236, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_194->prev=self->head;
                        litem_194->next=((void*)0);
                        litem_194->item=item;
                        self->tail=litem_194;
                        self->head->next=litem_194;
                    }
                    else {
                        litem_195=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value246=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 246, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_195->prev=self->tail;
                        litem_195->next=((void*)0);
                        litem_195->item=item;
                        self->tail->next=litem_195;
                        self->tail=litem_195;
                    }
                }
                self->len++;
                __result157__ = __result_obj__ = self;
                return __result157__;
}

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value248;
struct sVar* self_196;
void* right_value249;
char* __dec_obj105;
void* right_value250;
struct sType* __dec_obj106;
void* right_value251;
char* __dec_obj107;
void* right_value252;
memset(&__result_obj__, 0, sizeof(void*));
right_value248 = (void*)0;
memset(&self_196, 0, sizeof(struct sVar*));
right_value249 = (void*)0;
right_value250 = (void*)0;
right_value251 = (void*)0;
right_value252 = (void*)0;
    self_196=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value248=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 804, "sVar"))));
    come_call_finalizer2(sVar_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj105=self_196->mName;
    self_196->mName=(char*)come_increment_ref_count(((char*)(right_value249=__builtin_string(name))));
    __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj106=self_196->mType;
    self_196->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value250=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self_196->mGlobal=(_Bool)1;
    __dec_obj107=self_196->mCValueName;
    self_196->mCValueName=(char*)come_increment_ref_count(((char*)(right_value251=__builtin_string(name))));
    __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self_196->mBlockLevel=info->block_level;
    self_196->mAllocaValue=(_Bool)0;
    self_196->mFunctionParam=(_Bool)0;
    self_196->mNoFree=(_Bool)0;
    map$2charphsVarph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value252=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_196));
    right_value252 = come_decrement_ref_count2(right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sVar_finalize,self_196, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info){
void* __result_obj__;
void* right_value253;
struct sVar* self_197;
void* right_value254;
char* __dec_obj108;
void* right_value255;
struct sType* __dec_obj109;
void* right_value256;
char* __dec_obj110;
void* right_value257;
memset(&__result_obj__, 0, sizeof(void*));
right_value253 = (void*)0;
memset(&self_197, 0, sizeof(struct sVar*));
right_value254 = (void*)0;
right_value255 = (void*)0;
right_value256 = (void*)0;
right_value257 = (void*)0;
    self_197=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value253=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 823, "sVar"))));
    come_call_finalizer2(sVar_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj108=self_197->mName;
    self_197->mName=(char*)come_increment_ref_count(((char*)(right_value254=__builtin_string(name))));
    __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj109=self_197->mType;
    self_197->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value255=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self_197->mGlobal=(_Bool)1;
    __dec_obj110=self_197->mCValueName;
    self_197->mCValueName=(char*)come_increment_ref_count(((char*)(right_value256=__builtin_string(c_value))));
    __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self_197->mBlockLevel=info->block_level;
    self_197->mAllocaValue=(_Bool)0;
    self_197->mFunctionParam=(_Bool)0;
    self_197->mNoFree=(_Bool)0;
    map$2charphsVarph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value257=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_197));
    right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sVar_finalize,self_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool is_type_name_flag_198;
_Bool multiple_declare_199;
_Bool _if_conditional323;
char* p_200;
int sline_201;
void* right_value258;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* type_202;
char* name_203;
_Bool err_204;
_Bool _if_conditional326;
_Bool multiple_declare2_205;
_Bool _if_conditional327;
char* p_206;
int sline_207;
void* right_value259;
struct tuple3$3sTypephcharphbool* multiple_assign_var3;
struct sType* type_208;
char* name_209;
_Bool err_210;
_Bool _if_conditional328;
_Bool _if_conditional329;
_Bool no_output_err_211;
_Bool no_comma_212;
_Bool no_output_come_code_213;
void* right_value260;
struct sNode* exp_214;
_Bool _if_conditional330;
struct sFun* fun_215;
_Bool _if_conditional331;
void* right_value261;
char* buf2_216;
struct list$1charph* multiple_assign_217;
_Bool _if_conditional332;
void* right_value262;
void* right_value263;
struct list$1charph* __dec_obj111;
void* right_value267;
_Bool _while_condtional21;
void* right_value268;
char* buf3_221;
void* right_value269;
_Bool _if_conditional335;
_Bool no_comma_222;
void* right_value270;
struct sNode* right_value_223;
void* right_value271;
struct sNode* __dec_obj115;
void* right_value272;
void* right_value273;
void* right_value274;
struct sNode* _inf_value3;
struct sStoreNode* _inf_obj_value3;
void* right_value283;
struct sNode* result_225;
struct sNode* __result162__;
_Bool _if_conditional353;
void* right_value284;
void* right_value285;
struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare_226;
void* right_value286;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* base_type_227;
char* name_228;
_Bool err_229;
void* right_value287;
struct tuple2$2sTypephcharph* variable_name_230;
void* right_value288;
void* right_value289;
struct tuple3$3sTypephcharphsNodeph* variable_name2_231;
_Bool _while_condtional22;
void* right_value293;
struct tuple2$2sTypephcharph* variable_name_235;
void* right_value294;
void* right_value295;
struct tuple3$3sTypephcharphsNodeph* variable_name2_236;
void* right_value296;
void* right_value297;
void* right_value298;
struct sNode* _inf_value4;
struct sStoreNode* _inf_obj_value4;
void* right_value307;
struct sNode* result_238;
struct sNode* __result167__;
_Bool _if_conditional377;
void* right_value308;
void* right_value309;
struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare_239;
void* right_value310;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* base_type_240;
char* name_241;
_Bool err_242;
void* right_value311;
struct tuple2$2sTypephcharph* variable_name_243;
_Bool _if_conditional378;
_Bool no_comma_244;
void* right_value312;
struct sNode* exp_245;
void* right_value313;
void* right_value314;
struct tuple3$3sTypephcharphsNodeph* variable_name2_246;
_Bool _while_condtional23;
void* right_value315;
struct tuple2$2sTypephcharph* variable_name_247;
_Bool _if_conditional379;
_Bool no_comma_248;
void* right_value316;
struct sNode* exp_249;
void* right_value317;
void* right_value318;
struct tuple3$3sTypephcharphsNodeph* variable_name2_250;
void* right_value319;
void* right_value320;
void* right_value321;
struct sNode* _inf_value5;
struct sStoreNode* _inf_obj_value5;
void* right_value330;
struct sNode* result_252;
struct sNode* __result171__;
_Bool _if_conditional397;
void* right_value331;
struct sNode* right_value_253;
void* right_value332;
struct sNode* __dec_obj145;
void* right_value333;
void* right_value334;
void* right_value335;
struct sNode* _inf_value6;
struct sStoreNode* _inf_obj_value6;
void* right_value344;
struct sNode* result_255;
struct sNode* __result174__;
_Bool _if_conditional415;
void* right_value345;
void* right_value346;
void* right_value347;
struct sNode* _inf_value7;
struct sLoadNode* _inf_obj_value7;
void* right_value351;
struct sNode* node_257;
void* right_value352;
struct sNode* __dec_obj155;
void* right_value353;
struct sNode* __dec_obj156;
struct sNode* __result177__;
void* right_value354;
char* word_258;
_Bool _if_conditional422;
void* right_value355;
char* __dec_obj157;
_Bool is_type_name_flag_259;
_Bool _if_conditional423;
void* right_value356;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* type_260;
char* name_261;
_Bool err_262;
_Bool _if_conditional424;
_Bool _if_conditional425;
_Bool _if_conditional426;
void* right_value357;
void* right_value358;
struct buffer* buf2_263;
_Bool squort_264;
_Bool dquort_265;
int nest_266;
_Bool _while_condtional24;
_Bool _if_conditional427;
_Bool _if_conditional428;
_Bool _if_conditional429;
_Bool _if_conditional430;
_Bool _if_conditional431;
_Bool _if_conditional432;
_Bool _if_conditional433;
_Bool _if_conditional434;
void* right_value359;
char* array_initializer_267;
void* right_value360;
void* right_value361;
struct sNode* _inf_value8;
struct sStoreNode* _inf_obj_value8;
void* right_value370;
struct sNode* result_269;
struct sNode* __result180__;
void* right_value371;
struct sNode* right_value_270;
void* right_value372;
void* right_value373;
struct list$1sNodeph* right_values_271;
_Bool _while_condtional25;
char* anonymous_var_nameX2099_272;
void* right_value374;
struct sNode* __dec_obj165;
void* right_value375;
void* right_value376;
struct sNode* _inf_value9;
struct sStoreNode* _inf_obj_value9;
void* right_value385;
struct sNode* result_274;
struct sNode* __result183__;
void* right_value386;
void* right_value387;
struct sNode* _inf_value10;
struct sStoreNode* _inf_obj_value10;
void* right_value396;
struct sNode* result_276;
struct sNode* __result186__;
void* right_value397;
struct sNode* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&is_type_name_flag_198, 0, sizeof(_Bool));
memset(&multiple_declare_199, 0, sizeof(_Bool));
memset(&p_200, 0, sizeof(char*));
memset(&sline_201, 0, sizeof(int));
right_value258 = (void*)0;
memset(&type_202, 0, sizeof(struct sType*));
memset(&name_203, 0, sizeof(char*));
memset(&err_204, 0, sizeof(_Bool));
memset(&type_202, 0, sizeof(struct sType*));
memset(&name_203, 0, sizeof(char*));
memset(&err_204, 0, sizeof(_Bool));
memset(&multiple_declare2_205, 0, sizeof(_Bool));
memset(&p_206, 0, sizeof(char*));
memset(&sline_207, 0, sizeof(int));
right_value259 = (void*)0;
memset(&type_208, 0, sizeof(struct sType*));
memset(&name_209, 0, sizeof(char*));
memset(&err_210, 0, sizeof(_Bool));
memset(&type_208, 0, sizeof(struct sType*));
memset(&name_209, 0, sizeof(char*));
memset(&err_210, 0, sizeof(_Bool));
memset(&no_output_err_211, 0, sizeof(_Bool));
memset(&no_comma_212, 0, sizeof(_Bool));
memset(&no_output_come_code_213, 0, sizeof(_Bool));
right_value260 = (void*)0;
memset(&exp_214, 0, sizeof(struct sNode*));
memset(&fun_215, 0, sizeof(struct sFun*));
right_value261 = (void*)0;
memset(&buf2_216, 0, sizeof(char*));
memset(&multiple_assign_217, 0, sizeof(struct list$1charph*));
right_value262 = (void*)0;
right_value263 = (void*)0;
right_value267 = (void*)0;
right_value268 = (void*)0;
memset(&buf3_221, 0, sizeof(char*));
right_value269 = (void*)0;
memset(&no_comma_222, 0, sizeof(_Bool));
right_value270 = (void*)0;
memset(&right_value_223, 0, sizeof(struct sNode*));
right_value271 = (void*)0;
right_value272 = (void*)0;
right_value273 = (void*)0;
right_value274 = (void*)0;
right_value283 = (void*)0;
memset(&result_225, 0, sizeof(struct sNode*));
right_value284 = (void*)0;
right_value285 = (void*)0;
memset(&multiple_declare_226, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
right_value286 = (void*)0;
memset(&base_type_227, 0, sizeof(struct sType*));
memset(&name_228, 0, sizeof(char*));
memset(&err_229, 0, sizeof(_Bool));
memset(&base_type_227, 0, sizeof(struct sType*));
memset(&name_228, 0, sizeof(char*));
memset(&err_229, 0, sizeof(_Bool));
right_value287 = (void*)0;
memset(&variable_name_230, 0, sizeof(struct tuple2$2sTypephcharph*));
right_value288 = (void*)0;
right_value289 = (void*)0;
memset(&variable_name2_231, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
right_value293 = (void*)0;
memset(&variable_name_235, 0, sizeof(struct tuple2$2sTypephcharph*));
right_value294 = (void*)0;
right_value295 = (void*)0;
memset(&variable_name2_236, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
right_value296 = (void*)0;
right_value297 = (void*)0;
right_value298 = (void*)0;
right_value307 = (void*)0;
memset(&result_238, 0, sizeof(struct sNode*));
right_value308 = (void*)0;
right_value309 = (void*)0;
memset(&multiple_declare_239, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
right_value310 = (void*)0;
memset(&base_type_240, 0, sizeof(struct sType*));
memset(&name_241, 0, sizeof(char*));
memset(&err_242, 0, sizeof(_Bool));
memset(&base_type_240, 0, sizeof(struct sType*));
memset(&name_241, 0, sizeof(char*));
memset(&err_242, 0, sizeof(_Bool));
right_value311 = (void*)0;
memset(&variable_name_243, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&no_comma_244, 0, sizeof(_Bool));
right_value312 = (void*)0;
memset(&exp_245, 0, sizeof(struct sNode*));
right_value313 = (void*)0;
right_value314 = (void*)0;
memset(&variable_name2_246, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
right_value315 = (void*)0;
memset(&variable_name_247, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&no_comma_248, 0, sizeof(_Bool));
right_value316 = (void*)0;
memset(&exp_249, 0, sizeof(struct sNode*));
right_value317 = (void*)0;
right_value318 = (void*)0;
memset(&variable_name2_250, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
right_value319 = (void*)0;
right_value320 = (void*)0;
right_value321 = (void*)0;
right_value330 = (void*)0;
memset(&result_252, 0, sizeof(struct sNode*));
right_value331 = (void*)0;
memset(&right_value_253, 0, sizeof(struct sNode*));
right_value332 = (void*)0;
right_value333 = (void*)0;
right_value334 = (void*)0;
right_value335 = (void*)0;
right_value344 = (void*)0;
memset(&result_255, 0, sizeof(struct sNode*));
right_value345 = (void*)0;
right_value346 = (void*)0;
right_value347 = (void*)0;
right_value351 = (void*)0;
memset(&node_257, 0, sizeof(struct sNode*));
right_value352 = (void*)0;
right_value353 = (void*)0;
right_value354 = (void*)0;
memset(&word_258, 0, sizeof(char*));
right_value355 = (void*)0;
memset(&is_type_name_flag_259, 0, sizeof(_Bool));
right_value356 = (void*)0;
memset(&type_260, 0, sizeof(struct sType*));
memset(&name_261, 0, sizeof(char*));
memset(&err_262, 0, sizeof(_Bool));
memset(&type_260, 0, sizeof(struct sType*));
memset(&name_261, 0, sizeof(char*));
memset(&err_262, 0, sizeof(_Bool));
right_value357 = (void*)0;
right_value358 = (void*)0;
memset(&buf2_263, 0, sizeof(struct buffer*));
memset(&squort_264, 0, sizeof(_Bool));
memset(&dquort_265, 0, sizeof(_Bool));
memset(&nest_266, 0, sizeof(int));
right_value359 = (void*)0;
memset(&array_initializer_267, 0, sizeof(char*));
right_value360 = (void*)0;
right_value361 = (void*)0;
right_value370 = (void*)0;
memset(&result_269, 0, sizeof(struct sNode*));
right_value371 = (void*)0;
memset(&right_value_270, 0, sizeof(struct sNode*));
right_value372 = (void*)0;
right_value373 = (void*)0;
memset(&right_values_271, 0, sizeof(struct list$1sNodeph*));
memset(&anonymous_var_nameX2099_272, 0, sizeof(char*));
right_value374 = (void*)0;
right_value375 = (void*)0;
right_value376 = (void*)0;
right_value385 = (void*)0;
memset(&result_274, 0, sizeof(struct sNode*));
right_value386 = (void*)0;
right_value387 = (void*)0;
right_value396 = (void*)0;
memset(&result_276, 0, sizeof(struct sNode*));
right_value397 = (void*)0;
    is_type_name_flag_198=is_type_name(buf,info);
    multiple_declare_199=(_Bool)0;
    if(is_type_name_flag_198) {
        p_200=info->p;
        sline_201=info->sline;
        info->p=head;
        info->sline=head_sline;
        multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(right_value258=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
        type_202=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
        name_203=(char*)come_increment_ref_count(multiple_assign_var2->v2);
        err_204=multiple_assign_var2->v3;
        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional326=err_204&&*info->p==44,        _if_conditional326) {
            multiple_declare_199=(_Bool)1;
        }
        info->p=p_200;
        info->sline=sline_201;
        come_call_finalizer2(sType_finalize,type_202, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_203 = come_decrement_ref_count2(name_203, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    multiple_declare2_205=(_Bool)0;
    if(is_type_name_flag_198) {
        p_206=info->p;
        sline_207=info->sline;
        info->p=head;
        info->sline=head_sline;
        multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(right_value259=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
        type_208=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
        name_209=(char*)come_increment_ref_count(multiple_assign_var3->v2);
        err_210=multiple_assign_var3->v3;
        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(_if_conditional328=err_210&&*info->p==61,        _if_conditional328) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            if(_if_conditional329=*info->p==123,            _if_conditional329) {
            }
            else {
                no_output_err_211=info->no_output_err;
                no_comma_212=info->no_comma;
                no_output_come_code_213=info->no_output_come_code;
                info->no_output_err=(_Bool)1;
                info->no_comma=(_Bool)1;
                info->no_output_come_code=(_Bool)1;
                exp_214=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value260=expression_v13(info))));
                if(right_value260) { right_value260 = come_decrement_ref_count2(right_value260, ((struct sNode*)right_value260)->finalize, ((struct sNode*)right_value260)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                info->no_comma=no_comma_212;
                info->no_output_err=no_output_err_211;
                info->no_output_come_code=no_output_come_code_213;
                if(_if_conditional330=*info->p==44,                _if_conditional330) {
                    multiple_declare2_205=(_Bool)1;
                }
                if(exp_214) { exp_214 = come_decrement_ref_count2(exp_214, ((struct sNode*)exp_214)->finalize, ((struct sNode*)exp_214)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
        }
        info->p=p_206;
        info->sline=sline_207;
        come_call_finalizer2(sType_finalize,type_208, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_209 = come_decrement_ref_count2(name_209, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    fun_215=map$2charphsFunphp_operator_load_element(info->funcs,buf);
    if(_if_conditional331=charp_operator_equals(buf,"var")||charp_operator_equals(buf,"auto"),    _if_conditional331) {
        parse_sharp_v5(info);
        buf2_216=(char*)come_increment_ref_count(((char*)(right_value261=parse_word(info))));
        right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        multiple_assign_217=((void*)0);
        if(_if_conditional332=*info->p==44,        _if_conditional332) {
            __dec_obj111=multiple_assign_217;
            multiple_assign_217=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value263=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value262=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "07var.c", 921, "list$1charph"))))))));
            come_call_finalizer2(list$1charph_finalize,__dec_obj111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            list$1charph_push_back(multiple_assign_217,(char*)come_increment_ref_count(((char*)(right_value267=string_clone(buf2_216)))));
            right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            while(_while_condtional21=*info->p==44,            _while_condtional21) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                buf3_221=(char*)come_increment_ref_count(((char*)(right_value268=parse_word(info))));
                right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                parse_sharp_v5(info);
                list$1charph_push_back(multiple_assign_217,(char*)come_increment_ref_count(((char*)(right_value269=string_clone(buf3_221)))));
                right_value269 = come_decrement_ref_count2(right_value269, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buf3_221 = come_decrement_ref_count2(buf3_221, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        parse_sharp_v5(info);
        if(_if_conditional335=*info->p==61&&*(info->p+1)!=61,        _if_conditional335) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            no_comma_222=info->no_comma;
            info->no_comma=(_Bool)1;
            right_value_223=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value270=expression_v13(info))));
            if(right_value270) { right_value270 = come_decrement_ref_count2(right_value270, ((struct sNode*)right_value270)->finalize, ((struct sNode*)right_value270)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            info->no_comma=no_comma_222;
            parse_sharp_v5(info);
            __dec_obj115=right_value_223;
            right_value_223=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value271=post_position_operator3_v21((struct sNode*)come_increment_ref_count(right_value_223),info))));
            if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count2(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value271) { right_value271 = come_decrement_ref_count2(right_value271, ((struct sNode*)right_value271)->finalize, ((struct sNode*)right_value271)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            parse_sharp_v5(info);
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 951, "struct sNode");
            _inf_obj_value3=come_increment_ref_count(((struct sStoreNode*)(right_value274=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value272=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 951, "sStoreNode")))),(char*)come_increment_ref_count(((char*)(right_value273=__builtin_string(buf2_216)))),(struct list$1charph*)come_increment_ref_count(multiple_assign_217),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_223),((void*)0),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sStoreNode_finalize;
            _inf_value3->clone=(void*)sStoreNode_clone;
            _inf_value3->compile=(void*)sStoreNode_compile;
            _inf_value3->sline=(void*)sStoreNode_sline;
            _inf_value3->sname=(void*)sStoreNode_sname;
            _inf_value3->terminated=(void*)sStoreNode_terminated;
            _inf_value3->kind=(void*)sStoreNode_kind;
            result_225=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value283=_inf_value3)));
            come_call_finalizer2(sStoreNode_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sStoreNode_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value283) { right_value283 = come_decrement_ref_count2(right_value283, ((struct sNode*)right_value283)->finalize, ((struct sNode*)right_value283)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            __result162__ = __result_obj__ = result_225;
            if(right_value_223) { right_value_223 = come_decrement_ref_count2(right_value_223, ((struct sNode*)right_value_223)->finalize, ((struct sNode*)right_value_223)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(result_225) { result_225 = come_decrement_ref_count2(result_225, ((struct sNode*)result_225)->finalize, ((struct sNode*)result_225)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf2_216 = come_decrement_ref_count2(buf2_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,multiple_assign_217, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result162__;
            if(right_value_223) { right_value_223 = come_decrement_ref_count2(right_value_223, ((struct sNode*)right_value_223)->finalize, ((struct sNode*)right_value_223)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(result_225) { result_225 = come_decrement_ref_count2(result_225, ((struct sNode*)result_225)->finalize, ((struct sNode*)result_225)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            err_msg(info,"var requires a right value(%c)",*info->p);
            exit(1);
        }
        buf2_216 = come_decrement_ref_count2(buf2_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,multiple_assign_217, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(multiple_declare_199) {
            info->p=head;
            info->sline=head_sline;
            multiple_declare_226=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value285=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value284=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "07var.c", 966, "list$1tuple3$3sTypephcharphsNodephph"))))))));
            come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value286=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            base_type_227=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
            name_228=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            err_229=multiple_assign_var4->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            variable_name_230=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value287=parse_variable_name((struct sType*)come_increment_ref_count(base_type_227),(_Bool)1,info))));
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            variable_name2_231=(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value289=tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value288=(struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 972, "struct tuple3$3sTypephcharphvoidp")))),(struct sType*)come_increment_ref_count(variable_name_230->v1),(char*)come_increment_ref_count(variable_name_230->v2),((void*)0)))));
            right_value288 = come_decrement_ref_count2(right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple3$3sTypephcharphvoidpp_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_226,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_231));
            while(_while_condtional22=*info->p==44,            _while_condtional22) {
                info->p++;
                skip_spaces_and_lf(info);
                variable_name_235=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value293=parse_variable_name((struct sType*)come_increment_ref_count(base_type_227),(_Bool)0,info))));
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                variable_name2_236=(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value295=tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value294=(struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 982, "struct tuple3$3sTypephcharphvoidp")))),(struct sType*)come_increment_ref_count(variable_name_235->v1),(char*)come_increment_ref_count(variable_name_235->v2),((void*)0)))));
                right_value294 = come_decrement_ref_count2(right_value294, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple3$3sTypephcharphvoidpp_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_226,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_236));
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,variable_name_235, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_236, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 987, "struct sNode");
            _inf_obj_value4=come_increment_ref_count(((struct sStoreNode*)(right_value298=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value296=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 987, "sStoreNode")))),(char*)come_increment_ref_count(((char*)(right_value297=__builtin_string(buf)))),((void*)0),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare_226),(struct sType*)come_increment_ref_count(base_type_227),(_Bool)1,((void*)0),((void*)0),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sStoreNode_finalize;
            _inf_value4->clone=(void*)sStoreNode_clone;
            _inf_value4->compile=(void*)sStoreNode_compile;
            _inf_value4->sline=(void*)sStoreNode_sline;
            _inf_value4->sname=(void*)sStoreNode_sname;
            _inf_value4->terminated=(void*)sStoreNode_terminated;
            _inf_value4->kind=(void*)sStoreNode_kind;
            result_238=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value307=_inf_value4)));
            come_call_finalizer2(sStoreNode_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            right_value297 = come_decrement_ref_count2(right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sStoreNode_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value307) { right_value307 = come_decrement_ref_count2(right_value307, ((struct sNode*)right_value307)->finalize, ((struct sNode*)right_value307)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            __result167__ = __result_obj__ = result_238;
            come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare_226, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,base_type_227, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_228 = come_decrement_ref_count2(name_228, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,variable_name_230, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            if(result_238) { result_238 = come_decrement_ref_count2(result_238, ((struct sNode*)result_238)->finalize, ((struct sNode*)result_238)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result167__;
            come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare_226, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,base_type_227, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_228 = come_decrement_ref_count2(name_228, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,variable_name_230, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            if(result_238) { result_238 = come_decrement_ref_count2(result_238, ((struct sNode*)result_238)->finalize, ((struct sNode*)result_238)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(multiple_declare2_205) {
                info->p=head;
                info->sline=head_sline;
                multiple_declare_239=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value309=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value308=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "07var.c", 997, "list$1tuple3$3sTypephcharphsNodephph"))))))));
                come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value310=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                base_type_240=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                name_241=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                err_242=multiple_assign_var5->v3;
                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                variable_name_243=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value311=parse_variable_name((struct sType*)come_increment_ref_count(base_type_240),(_Bool)1,info))));
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                parse_sharp_v5(info);
                if(_if_conditional378=*info->p==61,                _if_conditional378) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    no_comma_244=info->no_comma;
                    info->no_comma=(_Bool)1;
                    exp_245=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value312=expression_v13(info))));
                    if(right_value312) { right_value312 = come_decrement_ref_count2(right_value312, ((struct sNode*)right_value312)->finalize, ((struct sNode*)right_value312)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    info->no_comma=no_comma_244;
                    variable_name2_246=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value314=tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value313=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1016, "struct tuple3$3sTypephcharphsNodeph")))),(struct sType*)come_increment_ref_count(variable_name_243->v1),(char*)come_increment_ref_count(variable_name_243->v2),(struct sNode*)come_increment_ref_count(exp_245)))));
                    come_call_finalizer2(tuple3$3sTypephcharphsNodeph_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_239,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_246));
                    if(exp_245) { exp_245 = come_decrement_ref_count2(exp_245, ((struct sNode*)exp_245)->finalize, ((struct sNode*)exp_245)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_246, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                while(_while_condtional23=*info->p==44,                _while_condtional23) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    variable_name_247=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value315=parse_variable_name((struct sType*)come_increment_ref_count(base_type_240),(_Bool)0,info))));
                    come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    parse_sharp_v5(info);
                    if(_if_conditional379=*info->p==61,                    _if_conditional379) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        parse_sharp_v5(info);
                        no_comma_248=info->no_comma;
                        info->no_comma=(_Bool)1;
                        exp_249=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value316=expression_v13(info))));
                        if(right_value316) { right_value316 = come_decrement_ref_count2(right_value316, ((struct sNode*)right_value316)->finalize, ((struct sNode*)right_value316)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        info->no_comma=no_comma_248;
                        variable_name2_250=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value318=tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value317=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1040, "struct tuple3$3sTypephcharphsNodeph")))),(struct sType*)come_increment_ref_count(variable_name_247->v1),(char*)come_increment_ref_count(variable_name_247->v2),(struct sNode*)come_increment_ref_count(exp_249)))));
                        come_call_finalizer2(tuple3$3sTypephcharphsNodeph_finalize,right_value317, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_239,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_250));
                        if(exp_249) { exp_249 = come_decrement_ref_count2(exp_249, ((struct sNode*)exp_249)->finalize, ((struct sNode*)exp_249)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_250, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        come_call_finalizer2(tuple2$2sTypephcharphp_finalize,variable_name_247, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        break;
                    }
                    come_call_finalizer2(tuple2$2sTypephcharphp_finalize,variable_name_247, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1049, "struct sNode");
                _inf_obj_value5=come_increment_ref_count(((struct sStoreNode*)(right_value321=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value319=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1049, "sStoreNode")))),(char*)come_increment_ref_count(((char*)(right_value320=__builtin_string(buf)))),((void*)0),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare_239),(struct sType*)come_increment_ref_count(base_type_240),(_Bool)1,((void*)0),((void*)0),info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sStoreNode_finalize;
                _inf_value5->clone=(void*)sStoreNode_clone;
                _inf_value5->compile=(void*)sStoreNode_compile;
                _inf_value5->sline=(void*)sStoreNode_sline;
                _inf_value5->sname=(void*)sStoreNode_sname;
                _inf_value5->terminated=(void*)sStoreNode_terminated;
                _inf_value5->kind=(void*)sStoreNode_kind;
                result_252=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value330=_inf_value5)));
                come_call_finalizer2(sStoreNode_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                right_value320 = come_decrement_ref_count2(right_value320, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sStoreNode_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value330) { right_value330 = come_decrement_ref_count2(right_value330, ((struct sNode*)right_value330)->finalize, ((struct sNode*)right_value330)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                __result171__ = __result_obj__ = result_252;
                come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare_239, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,base_type_240, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                name_241 = come_decrement_ref_count2(name_241, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,variable_name_243, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                if(result_252) { result_252 = come_decrement_ref_count2(result_252, ((struct sNode*)result_252)->finalize, ((struct sNode*)result_252)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result171__;
                come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare_239, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,base_type_240, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                name_241 = come_decrement_ref_count2(name_241, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,variable_name_243, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                if(result_252) { result_252 = come_decrement_ref_count2(result_252, ((struct sNode*)result_252)->finalize, ((struct sNode*)result_252)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(_if_conditional397=!is_type_name_flag_198&&*info->p==61&&*(info->p+1)!=61&&!info->no_assign,                _if_conditional397) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    right_value_253=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value331=expression_v13(info))));
                    if(right_value331) { right_value331 = come_decrement_ref_count2(right_value331, ((struct sNode*)right_value331)->finalize, ((struct sNode*)right_value331)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    parse_sharp_v5(info);
                    __dec_obj145=right_value_253;
                    right_value_253=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value332=post_position_operator3_v21((struct sNode*)come_increment_ref_count(right_value_253),info))));
                    if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count2(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value332) { right_value332 = come_decrement_ref_count2(right_value332, ((struct sNode*)right_value332)->finalize, ((struct sNode*)right_value332)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    parse_sharp_v5(info);
                    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1067, "struct sNode");
                    _inf_obj_value6=come_increment_ref_count(((struct sStoreNode*)(right_value335=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value333=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1067, "sStoreNode")))),(char*)come_increment_ref_count(((char*)(right_value334=__builtin_string(buf)))),((void*)0),((void*)0),((void*)0),(_Bool)0,(struct sNode*)come_increment_ref_count(right_value_253),((void*)0),info))));
                    _inf_value6->_protocol_obj=_inf_obj_value6;
                    _inf_value6->finalize=(void*)sStoreNode_finalize;
                    _inf_value6->clone=(void*)sStoreNode_clone;
                    _inf_value6->compile=(void*)sStoreNode_compile;
                    _inf_value6->sline=(void*)sStoreNode_sline;
                    _inf_value6->sname=(void*)sStoreNode_sname;
                    _inf_value6->terminated=(void*)sStoreNode_terminated;
                    _inf_value6->kind=(void*)sStoreNode_kind;
                    result_255=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value344=_inf_value6)));
                    come_call_finalizer2(sStoreNode_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    right_value334 = come_decrement_ref_count2(right_value334, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sStoreNode_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value344) { right_value344 = come_decrement_ref_count2(right_value344, ((struct sNode*)right_value344)->finalize, ((struct sNode*)right_value344)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    __result174__ = __result_obj__ = result_255;
                    if(right_value_253) { right_value_253 = come_decrement_ref_count2(right_value_253, ((struct sNode*)right_value_253)->finalize, ((struct sNode*)right_value_253)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(result_255) { result_255 = come_decrement_ref_count2(result_255, ((struct sNode*)result_255)->finalize, ((struct sNode*)result_255)->_protocol_obj, 0, 1, 0, (void*)0); } 
                    return __result174__;
                    if(right_value_253) { right_value_253 = come_decrement_ref_count2(right_value_253, ((struct sNode*)right_value_253)->finalize, ((struct sNode*)right_value_253)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(result_255) { result_255 = come_decrement_ref_count2(result_255, ((struct sNode*)result_255)->finalize, ((struct sNode*)result_255)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional415=!is_type_name_flag_198||map$2charphsFunphp_operator_load_element(info->funcs,buf),                    _if_conditional415) {
                        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1074, "struct sNode");
                        _inf_obj_value7=come_increment_ref_count(((struct sLoadNode*)(right_value347=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value345=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1074, "sLoadNode")))),(char*)come_increment_ref_count(((char*)(right_value346=__builtin_string(buf)))),info))));
                        _inf_value7->_protocol_obj=_inf_obj_value7;
                        _inf_value7->finalize=(void*)sLoadNode_finalize;
                        _inf_value7->clone=(void*)sLoadNode_clone;
                        _inf_value7->compile=(void*)sLoadNode_compile;
                        _inf_value7->sline=(void*)sLoadNode_sline;
                        _inf_value7->sname=(void*)sLoadNode_sname;
                        _inf_value7->terminated=(void*)sLoadNode_terminated;
                        _inf_value7->kind=(void*)sLoadNode_kind;
                        node_257=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value351=_inf_value7)));
                        come_call_finalizer2(sLoadNode_finalize,right_value345, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        right_value346 = come_decrement_ref_count2(right_value346, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sLoadNode_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value351) { right_value351 = come_decrement_ref_count2(right_value351, ((struct sNode*)right_value351)->finalize, ((struct sNode*)right_value351)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        __dec_obj155=node_257;
                        node_257=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value352=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_257),info))));
                        if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count2(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value352) { right_value352 = come_decrement_ref_count2(right_value352, ((struct sNode*)right_value352)->finalize, ((struct sNode*)right_value352)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        __dec_obj156=node_257;
                        node_257=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value353=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_257),info))));
                        if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value353) { right_value353 = come_decrement_ref_count2(right_value353, ((struct sNode*)right_value353)->finalize, ((struct sNode*)right_value353)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        __result177__ = __result_obj__ = node_257;
                        if(node_257) { node_257 = come_decrement_ref_count2(node_257, ((struct sNode*)node_257)->finalize, ((struct sNode*)node_257)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result177__;
                        if(node_257) { node_257 = come_decrement_ref_count2(node_257, ((struct sNode*)node_257)->finalize, ((struct sNode*)node_257)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        info->p=head;
                        info->sline=head_sline;
                        word_258=(char*)come_increment_ref_count(((char*)(right_value354=__builtin_string(""))));
                        right_value354 = come_decrement_ref_count2(right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional422=xisalpha(*info->p)||*info->p==95,                        _if_conditional422) {
                            __dec_obj157=word_258;
                            word_258=(char*)come_increment_ref_count(((char*)(right_value355=parse_word(info))));
                            __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value355 = come_decrement_ref_count2(right_value355, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        is_type_name_flag_259=is_type_name(word_258,info);
                        info->p=head;
                        info->sline=head_sline;
                        if(is_type_name_flag_259) {
                            parse_sharp_v5(info);
                            multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(right_value356=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                            type_260=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                            name_261=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                            err_262=multiple_assign_var6->v3;
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional424=!err_262,                            _if_conditional424) {
                                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                                exit(2);
                            }
                            parse_sharp_v5(info);
                            if(_if_conditional425=*info->p==61,                            _if_conditional425) {
                                info->p++;
                                skip_spaces_and_lf(info);
                                parse_sharp_v5(info);
                                if(_if_conditional426=*info->p==123,                                _if_conditional426) {
                                    buf2_263=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value358=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value357=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 1113, "buffer"))))))));
                                    come_call_finalizer2(buffer_finalize,right_value357, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(buffer_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    buffer_append_char(buf2_263,*info->p);
                                    info->p++;
                                    squort_264=(_Bool)0;
                                    dquort_265=(_Bool)0;
                                    nest_266=1;
                                    while(_while_condtional24=1,                                    _while_condtional24) {
                                        if(_if_conditional427=*info->p==0,                                        _if_conditional427) {
                                            err_msg(info,"unexpected source end in array initiailizer");
                                            exit(2);
                                        }
                                        else {
                                            if(_if_conditional428=*info->p==92,                                            _if_conditional428) {
                                                buffer_append_char(buf2_263,*info->p);
                                                info->p++;
                                                buffer_append_char(buf2_263,*info->p);
                                                info->p++;
                                            }
                                            else {
                                                if(_if_conditional429=!squort_264&&*info->p==34,                                                _if_conditional429) {
                                                    buffer_append_char(buf2_263,*info->p);
                                                    info->p++;
                                                    dquort_265=!dquort_265;
                                                }
                                                else {
                                                    if(_if_conditional430=!dquort_265&&*info->p==39,                                                    _if_conditional430) {
                                                        buffer_append_char(buf2_263,*info->p);
                                                        info->p++;
                                                        squort_264=!squort_264;
                                                    }
                                                    else {
                                                        if(_if_conditional431=squort_264||dquort_265,                                                        _if_conditional431) {
                                                            buffer_append_char(buf2_263,*info->p);
                                                            info->p++;
                                                        }
                                                        else {
                                                            if(_if_conditional432=*info->p==123,                                                            _if_conditional432) {
                                                                nest_266++;
                                                                buffer_append_char(buf2_263,*info->p);
                                                                info->p++;
                                                            }
                                                            else {
                                                                if(_if_conditional433=*info->p==125,                                                                _if_conditional433) {
                                                                    nest_266--;
                                                                    buffer_append_char(buf2_263,*info->p);
                                                                    info->p++;
                                                                    if(_if_conditional434=nest_266==0,                                                                    _if_conditional434) {
                                                                        skip_spaces_and_lf(info);
                                                                        break;
                                                                    }
                                                                }
                                                                else {
                                                                    buffer_append_char(buf2_263,*info->p);
                                                                    info->p++;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    array_initializer_267=(char*)come_increment_ref_count(((char*)(right_value359=buffer_to_string(buf2_263))));
                                    right_value359 = come_decrement_ref_count2(right_value359, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1168, "struct sNode");
                                    _inf_obj_value8=come_increment_ref_count(((struct sStoreNode*)(right_value361=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value360=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1168, "sStoreNode")))),(char*)come_increment_ref_count(name_261),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_260),(_Bool)1,((void*)0),(char*)come_increment_ref_count(array_initializer_267),info))));
                                    _inf_value8->_protocol_obj=_inf_obj_value8;
                                    _inf_value8->finalize=(void*)sStoreNode_finalize;
                                    _inf_value8->clone=(void*)sStoreNode_clone;
                                    _inf_value8->compile=(void*)sStoreNode_compile;
                                    _inf_value8->sline=(void*)sStoreNode_sline;
                                    _inf_value8->sname=(void*)sStoreNode_sname;
                                    _inf_value8->terminated=(void*)sStoreNode_terminated;
                                    _inf_value8->kind=(void*)sStoreNode_kind;
                                    result_269=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value370=_inf_value8)));
                                    come_call_finalizer2(sStoreNode_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sStoreNode_finalize,right_value361, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(right_value370) { right_value370 = come_decrement_ref_count2(right_value370, ((struct sNode*)right_value370)->finalize, ((struct sNode*)right_value370)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    __result180__ = __result_obj__ = result_269;
                                    come_call_finalizer2(buffer_finalize,buf2_263, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    array_initializer_267 = come_decrement_ref_count2(array_initializer_267, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    if(result_269) { result_269 = come_decrement_ref_count2(result_269, ((struct sNode*)result_269)->finalize, ((struct sNode*)result_269)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                    come_call_finalizer2(sType_finalize,type_260, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    name_261 = come_decrement_ref_count2(name_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    word_258 = come_decrement_ref_count2(word_258, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    return __result180__;
                                    come_call_finalizer2(buffer_finalize,buf2_263, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    array_initializer_267 = come_decrement_ref_count2(array_initializer_267, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    if(result_269) { result_269 = come_decrement_ref_count2(result_269, ((struct sNode*)result_269)->finalize, ((struct sNode*)result_269)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    parse_sharp_v5(info);
                                    right_value_270=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value371=expression_v13(info))));
                                    if(right_value371) { right_value371 = come_decrement_ref_count2(right_value371, ((struct sNode*)right_value371)->finalize, ((struct sNode*)right_value371)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    parse_sharp_v5(info);
                                    right_values_271=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value373=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value372=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "07var.c", 1179, "list$1sNodeph"))))))));
                                    come_call_finalizer2(list$1sNodephp_finalize,right_value372, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(list$1sNodephp_finalize,right_value373, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    while(_while_condtional25=*info->p==44,                                    _while_condtional25) {
                                        anonymous_var_nameX2099_272 = come_decrement_ref_count2(anonymous_var_nameX2099_272, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    __dec_obj165=right_value_270;
                                    right_value_270=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value374=post_position_operator3_v21((struct sNode*)come_increment_ref_count(right_value_270),info))));
                                    if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count2(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value374) { right_value374 = come_decrement_ref_count2(right_value374, ((struct sNode*)right_value374)->finalize, ((struct sNode*)right_value374)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1186, "struct sNode");
                                    _inf_obj_value9=come_increment_ref_count(((struct sStoreNode*)(right_value376=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value375=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1186, "sStoreNode")))),(char*)come_increment_ref_count(name_261),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_260),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_270),((void*)0),info))));
                                    _inf_value9->_protocol_obj=_inf_obj_value9;
                                    _inf_value9->finalize=(void*)sStoreNode_finalize;
                                    _inf_value9->clone=(void*)sStoreNode_clone;
                                    _inf_value9->compile=(void*)sStoreNode_compile;
                                    _inf_value9->sline=(void*)sStoreNode_sline;
                                    _inf_value9->sname=(void*)sStoreNode_sname;
                                    _inf_value9->terminated=(void*)sStoreNode_terminated;
                                    _inf_value9->kind=(void*)sStoreNode_kind;
                                    result_274=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value385=_inf_value9)));
                                    come_call_finalizer2(sStoreNode_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sStoreNode_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(right_value385) { right_value385 = come_decrement_ref_count2(right_value385, ((struct sNode*)right_value385)->finalize, ((struct sNode*)right_value385)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    __result183__ = __result_obj__ = result_274;
                                    if(right_value_270) { right_value_270 = come_decrement_ref_count2(right_value_270, ((struct sNode*)right_value_270)->finalize, ((struct sNode*)right_value_270)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer2(list$1sNodephp_finalize,right_values_271, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    if(result_274) { result_274 = come_decrement_ref_count2(result_274, ((struct sNode*)result_274)->finalize, ((struct sNode*)result_274)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                    come_call_finalizer2(sType_finalize,type_260, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    name_261 = come_decrement_ref_count2(name_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    word_258 = come_decrement_ref_count2(word_258, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    return __result183__;
                                    if(right_value_270) { right_value_270 = come_decrement_ref_count2(right_value_270, ((struct sNode*)right_value_270)->finalize, ((struct sNode*)right_value_270)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer2(list$1sNodephp_finalize,right_values_271, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    if(result_274) { result_274 = come_decrement_ref_count2(result_274, ((struct sNode*)result_274)->finalize, ((struct sNode*)result_274)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                            }
                            else {
                                _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1194, "struct sNode");
                                _inf_obj_value10=come_increment_ref_count(((struct sStoreNode*)(right_value387=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value386=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1194, "sStoreNode")))),(char*)come_increment_ref_count(name_261),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_260),(_Bool)1,((void*)0),((void*)0),info))));
                                _inf_value10->_protocol_obj=_inf_obj_value10;
                                _inf_value10->finalize=(void*)sStoreNode_finalize;
                                _inf_value10->clone=(void*)sStoreNode_clone;
                                _inf_value10->compile=(void*)sStoreNode_compile;
                                _inf_value10->sline=(void*)sStoreNode_sline;
                                _inf_value10->sname=(void*)sStoreNode_sname;
                                _inf_value10->terminated=(void*)sStoreNode_terminated;
                                _inf_value10->kind=(void*)sStoreNode_kind;
                                result_276=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value396=_inf_value10)));
                                come_call_finalizer2(sStoreNode_finalize,right_value386, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sStoreNode_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(right_value396) { right_value396 = come_decrement_ref_count2(right_value396, ((struct sNode*)right_value396)->finalize, ((struct sNode*)right_value396)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                __result186__ = __result_obj__ = result_276;
                                if(result_276) { result_276 = come_decrement_ref_count2(result_276, ((struct sNode*)result_276)->finalize, ((struct sNode*)result_276)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                come_call_finalizer2(sType_finalize,type_260, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                name_261 = come_decrement_ref_count2(name_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                word_258 = come_decrement_ref_count2(word_258, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                return __result186__;
                                if(result_276) { result_276 = come_decrement_ref_count2(result_276, ((struct sNode*)result_276)->finalize, ((struct sNode*)result_276)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            come_call_finalizer2(sType_finalize,type_260, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            name_261 = come_decrement_ref_count2(name_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        word_258 = come_decrement_ref_count2(word_258, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
    }
    __result187__ = __result_obj__ = ((struct sNode*)(right_value397=string_node_v5(buf,head,head_sline,info)));
    if(right_value397) { right_value397 = come_decrement_ref_count2(right_value397, ((struct sNode*)right_value397)->finalize, ((struct sNode*)right_value397)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result187__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional324;
_Bool _if_conditional325;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional324=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional324) {
                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional325=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional325) {
                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional333;
void* right_value264;
struct list_item$1charph* litem_218;
char* __dec_obj112;
_Bool _if_conditional334;
void* right_value265;
struct list_item$1charph* litem_219;
char* __dec_obj113;
void* right_value266;
struct list_item$1charph* litem_220;
char* __dec_obj114;
struct list$1charph* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
right_value264 = (void*)0;
memset(&litem_218, 0, sizeof(struct list_item$1charph*));
right_value265 = (void*)0;
memset(&litem_219, 0, sizeof(struct list_item$1charph*));
right_value266 = (void*)0;
memset(&litem_220, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional333=self->len==0,                _if_conditional333) {
                    litem_218=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value264=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 226, "list_item$1charph"))));
                    come_call_finalizer2(list_item$1charphp_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_218->prev=((void*)0);
                    litem_218->next=((void*)0);
                    __dec_obj112=litem_218->item;
                    litem_218->item=(char*)come_increment_ref_count(item);
                    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
                    self->tail=litem_218;
                    self->head=litem_218;
                }
                else {
                    if(_if_conditional334=self->len==1,                    _if_conditional334) {
                        litem_219=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value265=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 236, "list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_219->prev=self->head;
                        litem_219->next=((void*)0);
                        __dec_obj113=litem_219->item;
                        litem_219->item=(char*)come_increment_ref_count(item);
                        __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail=litem_219;
                        self->head->next=litem_219;
                    }
                    else {
                        litem_220=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value266=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 246, "list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_220->prev=self->tail;
                        litem_220->next=((void*)0);
                        __dec_obj114=litem_220->item;
                        litem_220->item=(char*)come_increment_ref_count(item);
                        __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail->next=litem_220;
                        self->tail=litem_220;
                    }
                }
                self->len++;
                __result159__ = __result_obj__ = self;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result159__;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional354;
_Bool _if_conditional355;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional354=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional354) {
                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional355=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional355) {
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3){
void* __result_obj__;
struct sType* __dec_obj123;
char* __dec_obj124;
struct tuple3$3sTypephcharphvoidp* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
                __dec_obj123=self->v1;
                self->v1=(struct sType*)come_increment_ref_count(v1);
                come_call_finalizer2(sType_finalize,__dec_obj123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                __dec_obj124=self->v2;
                self->v2=(char*)come_increment_ref_count(v2);
                __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
                self->v3=v3;
                __result163__ = __result_obj__ = self;
                come_call_finalizer2(tuple3$3sTypephcharphvoidpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result163__;
                come_call_finalizer2(tuple3$3sTypephcharphvoidpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self){
void* __result_obj__;
_Bool _if_conditional356;
_Bool _if_conditional357;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional356=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional356) {
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional357=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional357) {
                        self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional358;
void* right_value290;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_232;
struct tuple3$3sTypephcharphsNodeph* __dec_obj125;
_Bool _if_conditional359;
void* right_value291;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_233;
struct tuple3$3sTypephcharphsNodeph* __dec_obj126;
void* right_value292;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_234;
struct tuple3$3sTypephcharphsNodeph* __dec_obj127;
struct list$1tuple3$3sTypephcharphsNodephph* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
right_value290 = (void*)0;
memset(&litem_232, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value291 = (void*)0;
memset(&litem_233, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value292 = (void*)0;
memset(&litem_234, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                if(_if_conditional358=self->len==0,                _if_conditional358) {
                    litem_232=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value290=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 226, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                    come_call_finalizer2(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_232->prev=((void*)0);
                    litem_232->next=((void*)0);
                    __dec_obj125=litem_232->item;
                    litem_232->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_232;
                    self->head=litem_232;
                }
                else {
                    if(_if_conditional359=self->len==1,                    _if_conditional359) {
                        litem_233=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value291=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 236, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                        come_call_finalizer2(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_233->prev=self->head;
                        litem_233->next=((void*)0);
                        __dec_obj126=litem_233->item;
                        litem_233->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_233;
                        self->head->next=litem_233;
                    }
                    else {
                        litem_234=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value292=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 246, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                        come_call_finalizer2(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_234->prev=self->tail;
                        litem_234->next=((void*)0);
                        __dec_obj127=litem_234->item;
                        litem_234->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_234;
                        self->tail=litem_234;
                    }
                }
                self->len++;
                __result164__ = __result_obj__ = self;
                come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result164__;
                come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3){
void* __result_obj__;
struct sType* __dec_obj135;
char* __dec_obj136;
struct sNode* __dec_obj137;
struct tuple3$3sTypephcharphsNodeph* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
                        __dec_obj135=self->v1;
                        self->v1=(struct sType*)come_increment_ref_count(v1);
                        come_call_finalizer2(sType_finalize,__dec_obj135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        __dec_obj136=self->v2;
                        self->v2=(char*)come_increment_ref_count(v2);
                        __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
                        __dec_obj137=self->v3;
                        self->v3=(struct sNode*)come_increment_ref_count(v3);
                        if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count2(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0,0, (void*)0); }
                        __result168__ = __result_obj__ = self;
                        come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        if(v3) { v3 = come_decrement_ref_count2(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result168__;
                        come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        if(v3) { v3 = come_decrement_ref_count2(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sLoadNode_finalize(struct sLoadNode* self){
void* __result_obj__;
_Bool _if_conditional416;
_Bool _if_conditional417;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional416=self!=((void*)0)&&self->name!=((void*)0),                            _if_conditional416) {
                                self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional417=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional417) {
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self){
void* __result_obj__;
_Bool _if_conditional418;
struct sLoadNode* __result175__;
void* right_value348;
struct sLoadNode* result_256;
_Bool _if_conditional419;
void* right_value349;
char* __dec_obj153;
_Bool _if_conditional420;
_Bool _if_conditional421;
void* right_value350;
char* __dec_obj154;
struct sLoadNode* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
right_value348 = (void*)0;
memset(&result_256, 0, sizeof(struct sLoadNode*));
right_value349 = (void*)0;
right_value350 = (void*)0;
                            if(_if_conditional418=self==(void*)0,                            _if_conditional418) {
                                __result175__ = __result_obj__ = (void*)0;
                                return __result175__;
                            }
                            result_256=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value348=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "sLoadNode_clone", 3, "sLoadNode"))));
                            come_call_finalizer2(sLoadNode_finalize,right_value348, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional419=self!=((void*)0)&&self->name!=((void*)0),                            _if_conditional419) {
                                __dec_obj153=result_256->name;
                                result_256->name=(char*)come_increment_ref_count(((char*)(right_value349=string_clone(self->name))));
                                __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value349 = come_decrement_ref_count2(right_value349, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(_if_conditional420=self!=((void*)0),                            _if_conditional420) {
                                result_256->sline=self->sline;
                            }
                            if(_if_conditional421=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional421) {
                                __dec_obj154=result_256->sname;
                                result_256->sname=(char*)come_increment_ref_count(((char*)(right_value350=string_clone(self->sname))));
                                __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value350 = come_decrement_ref_count2(right_value350, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            __result176__ = __result_obj__ = result_256;
                            come_call_finalizer2(sLoadNode_finalize,result_256, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result176__;
                            come_call_finalizer2(sLoadNode_finalize,result_256, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sStoreNode_finalize(struct sStoreNode* self){
void* __result_obj__;
_Bool _if_conditional469;
_Bool _if_conditional470;
_Bool _if_conditional471;
_Bool _if_conditional472;
_Bool _if_conditional473;
_Bool _if_conditional474;
_Bool _if_conditional475;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional469=self!=((void*)0)&&self->name!=((void*)0),                                    _if_conditional469) {
                                        self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional470=self!=((void*)0)&&self->multiple_assign!=((void*)0),                                    _if_conditional470) {
                                        come_call_finalizer2(list$1charphp_finalize,self->multiple_assign, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional471=self!=((void*)0)&&self->multiple_declare!=((void*)0),                                    _if_conditional471) {
                                        come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,self->multiple_declare, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional472=self!=((void*)0)&&self->right_value!=((void*)0),                                    _if_conditional472) {
                                        if(self->right_value) { self->right_value = come_decrement_ref_count2(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional473=self!=((void*)0)&&self->type!=((void*)0),                                    _if_conditional473) {
                                        come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional474=self!=((void*)0)&&self->array_initializer!=((void*)0),                                    _if_conditional474) {
                                        self->array_initializer = come_decrement_ref_count2(self->array_initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional475=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional475) {
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self){
void* __result_obj__;
_Bool _if_conditional476;
struct sStoreNode* __result184__;
void* right_value388;
struct sStoreNode* result_275;
_Bool _if_conditional477;
void* right_value389;
char* __dec_obj173;
_Bool _if_conditional478;
void* right_value390;
struct list$1charph* __dec_obj174;
_Bool _if_conditional479;
void* right_value391;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj175;
_Bool _if_conditional480;
void* right_value392;
struct sNode* __dec_obj176;
_Bool _if_conditional481;
void* right_value393;
struct sType* __dec_obj177;
_Bool _if_conditional482;
void* right_value394;
char* __dec_obj178;
_Bool _if_conditional483;
_Bool _if_conditional484;
_Bool _if_conditional485;
void* right_value395;
char* __dec_obj179;
struct sStoreNode* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
right_value388 = (void*)0;
memset(&result_275, 0, sizeof(struct sStoreNode*));
right_value389 = (void*)0;
right_value390 = (void*)0;
right_value391 = (void*)0;
right_value392 = (void*)0;
right_value393 = (void*)0;
right_value394 = (void*)0;
right_value395 = (void*)0;
                                    if(_if_conditional476=self==(void*)0,                                    _if_conditional476) {
                                        __result184__ = __result_obj__ = (void*)0;
                                        return __result184__;
                                    }
                                    result_275=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value388=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "sStoreNode_clone", 3, "sStoreNode"))));
                                    come_call_finalizer2(sStoreNode_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional477=self!=((void*)0)&&self->name!=((void*)0),                                    _if_conditional477) {
                                        __dec_obj173=result_275->name;
                                        result_275->name=(char*)come_increment_ref_count(((char*)(right_value389=string_clone(self->name))));
                                        __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value389 = come_decrement_ref_count2(right_value389, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional478=self!=((void*)0)&&self->multiple_assign!=((void*)0),                                    _if_conditional478) {
                                        __dec_obj174=result_275->multiple_assign;
                                        result_275->multiple_assign=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value390=list$1charphp_clone(self->multiple_assign))));
                                        come_call_finalizer2(list$1charph_finalize,__dec_obj174, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(list$1charphp_finalize,right_value390, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional479=self!=((void*)0)&&self->multiple_declare!=((void*)0),                                    _if_conditional479) {
                                        __dec_obj175=result_275->multiple_declare;
                                        result_275->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value391=list$1tuple3$3sTypephcharphsNodephphp_clone(self->multiple_declare))));
                                        come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephph_finalize,__dec_obj175, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value391, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional480=self!=((void*)0)&&self->right_value!=((void*)0),                                    _if_conditional480) {
                                        __dec_obj176=result_275->right_value;
                                        result_275->right_value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value392=sNode_clone(self->right_value))));
                                        if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count2(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value392) { right_value392 = come_decrement_ref_count2(right_value392, ((struct sNode*)right_value392)->finalize, ((struct sNode*)right_value392)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional481=self!=((void*)0)&&self->type!=((void*)0),                                    _if_conditional481) {
                                        __dec_obj177=result_275->type;
                                        result_275->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value393=sType_clone(self->type))));
                                        come_call_finalizer2(sType_finalize,__dec_obj177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(sType_finalize,right_value393, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional482=self!=((void*)0)&&self->array_initializer!=((void*)0),                                    _if_conditional482) {
                                        __dec_obj178=result_275->array_initializer;
                                        result_275->array_initializer=(char*)come_increment_ref_count(((char*)(right_value394=string_clone(self->array_initializer))));
                                        __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value394 = come_decrement_ref_count2(right_value394, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional483=self!=((void*)0),                                    _if_conditional483) {
                                        result_275->alloc=self->alloc;
                                    }
                                    if(_if_conditional484=self!=((void*)0),                                    _if_conditional484) {
                                        result_275->sline=self->sline;
                                    }
                                    if(_if_conditional485=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional485) {
                                        __dec_obj179=result_275->sname;
                                        result_275->sname=(char*)come_increment_ref_count(((char*)(right_value395=string_clone(self->sname))));
                                        __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value395 = come_decrement_ref_count2(right_value395, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    __result185__ = __result_obj__ = result_275;
                                    come_call_finalizer2(sStoreNode_finalize,result_275, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result185__;
                                    come_call_finalizer2(sStoreNode_finalize,result_275, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

