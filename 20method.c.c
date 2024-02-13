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
struct sCurrentNode
{
    int sline;
    char* sname;
};
struct optional$2sVarphbool
{
    struct sVar* v1;
    _Bool v2;
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
struct optional$2sFunphbool
{
    struct sFun* v1;
    _Bool v2;
};
struct optional$2CVALUEphbool
{
    struct CVALUE* v1;
    _Bool v2;
};
struct optional$2sClassphbool
{
    struct sClass* v1;
    _Bool v2;
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

void exception_stackframe();

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

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);

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

char* append_exception_value(char* c_value, struct sType* type, struct sInfo* info);

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

struct sNode* create_none_object(struct sNode* exp, struct sInfo* info);

struct sNode* create_some_object(struct sNode* exp, struct sInfo* info);

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
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
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
static struct optional$2sVarphbool* optional$2sVarphbool_initialize(struct optional$2sVarphbool* self, struct sVar* v1, _Bool v2);
static void optional$2sVarphboolp_finalize(struct optional$2sVarphbool* self);
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
struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct sInfo* info);

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

char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info);

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
static struct optional$2sFunphbool* optional$2sFunphbool_initialize(struct optional$2sFunphbool* self, struct sFun* v1, _Bool v2);
static void optional$2sFunphboolp_finalize(struct optional$2sFunphbool* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
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
static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct CVALUE* map$2charphCVALUEphp_operator_load_element(struct map$2charphCVALUEph* self, char* key);
static struct optional$2CVALUEphbool* optional$2CVALUEphbool_initialize(struct optional$2CVALUEphbool* self, struct CVALUE* v1, _Bool v2);
static void optional$2CVALUEphboolp_finalize(struct optional$2CVALUEphbool* self);
static int map$2charphCVALUEph_length(struct map$2charphCVALUEph* self);
static int list$1charph_length(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static struct optional$2sClassphbool* optional$2sClassphbool_initialize(struct optional$2sClassphbool* self, struct sClass* v1, _Bool v2);
static void optional$2sClassphboolp_finalize(struct optional$2sClassphbool* self);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
static void sMethodCallNode_finalize(struct sMethodCallNode* self);
static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);

static void sCurrentNode_finalize(struct sCurrentNode* self);
static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self);
struct sNode* post_position_operator3_v20(struct sNode* node, struct sInfo* info);

// inline function
static inline _Bool die(char* msg){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result1__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    perror(msg);
    stackframe();
    exit(4);
    __result1__ = (_Bool)0;
    return __result1__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value0;
struct smart_pointer$1char* result_0;
void* right_value1;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result2__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value0 = (void*)0;
memset(&result_0, 0, sizeof(struct smart_pointer$1char*));
right_value1 = (void*)0;
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2008, "struct smart_pointer$1char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value0);
    if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value0, right_value0 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj1=result_0->memory;
    result_0->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_clone(self))));
    if(__dec_obj1) { come_call_finalizer(buffer_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value1);
    if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value1, right_value1 = (void*)0;
    __freed_obj__ = 0;
    result_0->p=result_0->memory->buf;
    __result2__ = __result_obj__ = result_0;
    if(result_0 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_0, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result2__;
    if(result_0 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_0, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value2;
struct smart_pointer$1char* result_1;
void* right_value3;
struct buffer* __dec_obj2;
struct smart_pointer$1char* __result3__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value2 = (void*)0;
memset(&result_1, 0, sizeof(struct smart_pointer$1char*));
right_value3 = (void*)0;
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2018, "struct smart_pointer$1char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value2);
    if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value2, right_value2 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj2=result_1->memory;
    result_1->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_clone(self))));
    if(__dec_obj2) { come_call_finalizer(buffer_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value3);
    if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value3, right_value3 = (void*)0;
    __freed_obj__ = 0;
    result_1->p=(char*)result_1->memory->buf;
    __result3__ = __result_obj__ = result_1;
    if(result_1 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_1, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result3__;
    if(result_1 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_1, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value4;
struct smart_pointer$1short* result_2;
void* right_value5;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result4__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value4 = (void*)0;
memset(&result_2, 0, sizeof(struct smart_pointer$1short*));
right_value5 = (void*)0;
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2028, "struct smart_pointer$1short"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value4);
    if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value4, right_value4 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj3=result_2->memory;
    result_2->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_clone(self))));
    if(__dec_obj3) { come_call_finalizer(buffer_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value5);
    if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value5, right_value5 = (void*)0;
    __freed_obj__ = 0;
    result_2->p=(short short*)result_2->memory->buf;
    __result4__ = __result_obj__ = result_2;
    if(result_2 && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,result_2, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result4__;
    if(result_2 && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,result_2, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value6;
struct smart_pointer$1int* result_3;
void* right_value7;
struct buffer* __dec_obj4;
struct smart_pointer$1int* __result5__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value6 = (void*)0;
memset(&result_3, 0, sizeof(struct smart_pointer$1int*));
right_value7 = (void*)0;
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2038, "struct smart_pointer$1int"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value6);
    if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value6, right_value6 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj4=result_3->memory;
    result_3->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_clone(self))));
    if(__dec_obj4) { come_call_finalizer(buffer_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value7);
    if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value7, right_value7 = (void*)0;
    __freed_obj__ = 0;
    result_3->p=(int*)result_3->memory->buf;
    __result5__ = __result_obj__ = result_3;
    if(result_3 && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,result_3, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result5__;
    if(result_3 && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,result_3, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value8;
struct smart_pointer$1long* result_4;
void* right_value9;
struct buffer* __dec_obj5;
struct smart_pointer$1long* __result6__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value8 = (void*)0;
memset(&result_4, 0, sizeof(struct smart_pointer$1long*));
right_value9 = (void*)0;
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2048, "struct smart_pointer$1long"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value8);
    if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value8, right_value8 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj5=result_4->memory;
    result_4->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_clone(self))));
    if(__dec_obj5) { come_call_finalizer(buffer_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value9);
    if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value9, right_value9 = (void*)0;
    __freed_obj__ = 0;
    result_4->p=(long*)result_4->memory->buf;
    __result6__ = __result_obj__ = result_4;
    if(result_4 && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,result_4, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result6__;
    if(result_4 && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,result_4, (void*)0, (void*)0, 0, 0, 0, 0); }
}

// body function


static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional1;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional1=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional1) {
            if(self->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}



static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional2=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional2) {
            if(self->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}


static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional3=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional3) {
            if(self->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}


static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional4=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional4) {
            if(self->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}

struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value10;
char* __dec_obj6;
struct sCurrentNode* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value10 = (void*)0;
    self->sline=info->sline;
    __dec_obj6=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value10=__builtin_string(info->sname))));
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
    if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value10, right_value10 = (void*)0;
    __freed_obj__ = 0;
    __result7__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result7__;
    if(self && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result8__ = self->sline;
    return __result8__;
}

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value11;
char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value11 = (void*)0;
    __result9__ = __result_obj__ = ((char*)(right_value11=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value11);
    if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { right_value11 = come_decrement_ref_count(right_value11, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value11, right_value11 = (void*)0;
    __freed_obj__ = 0;
    return __result9__;
}

_Bool sCurrentNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result10__ = (_Bool)0;
    return __result10__;
}

char* sCurrentNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value12;
char* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value12 = (void*)0;
    __result11__ = __result_obj__ = ((char*)(right_value12=__builtin_string("sCurrentNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { right_value12 = come_decrement_ref_count(right_value12, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value12, right_value12 = (void*)0;
    __freed_obj__ = 0;
    return __result11__;
}

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value13;
char* class_name_5;
void* right_value14;
void* right_value15;
struct sClass* current_stack_6;
void* right_value16;
void* right_value17;
void* right_value18;
void* right_value19;
void* right_value20;
struct tuple2$2charphsTypeph* result_kind_15;
void* right_value61;
void* right_value62;
void* right_value63;
void* right_value64;
void* right_value65;
void* right_value66;
struct tuple2$2charphsTypeph* return_value_38;
void* right_value67;
struct sVarTable* vtable_39;
_Bool _while_condtional8;
struct map$2charphsVarph* o2_saved_40;
char* it_43;
_Bool _for_condtionalA1;
char* key_46;
void* right_value70;
struct sVar* value_50;
void* right_value71;
struct sType* type2_51;
void* right_value72;
void* right_value73;
void* right_value74;
struct tuple2$2charphsTypeph* item_52;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
void* right_value75;
struct sType* type3_53;
void* right_value76;
void* right_value77;
void* right_value78;
struct tuple2$2charphsTypeph* item2_56;
void* right_value79;
void* right_value80;
static int num_current_stack_105=0;
_Bool _while_condtional20;
struct map$2charphsVarph* o2_saved_106;
char* it_107;
_Bool _for_condtionalA6;
char* key_108;
void* right_value89;
struct sVar* value_109;
void* right_value90;
struct sType* type2_110;
void* right_value91;
void* right_value92;
struct tuple2$2charphsTypeph* item_111;
_Bool _if_conditional175;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _if_conditional180;
void* right_value93;
struct CVALUE* come_value_112;
void* right_value94;
char* __dec_obj37;
void* right_value95;
void* right_value96;
struct sType* __dec_obj38;
_Bool __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value13 = (void*)0;
memset(&class_name_5, 0, sizeof(char*));
right_value14 = (void*)0;
right_value15 = (void*)0;
memset(&current_stack_6, 0, sizeof(struct sClass*));
right_value16 = (void*)0;
right_value17 = (void*)0;
right_value18 = (void*)0;
right_value19 = (void*)0;
right_value20 = (void*)0;
memset(&result_kind_15, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value61 = (void*)0;
right_value62 = (void*)0;
right_value63 = (void*)0;
right_value64 = (void*)0;
right_value65 = (void*)0;
right_value66 = (void*)0;
memset(&return_value_38, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value67 = (void*)0;
memset(&vtable_39, 0, sizeof(struct sVarTable*));
memset(&o2_saved_40, 0, sizeof(struct map$2charphsVarph*));
memset(&it_43, 0, sizeof(char*));
memset(&key_46, 0, sizeof(char*));
right_value70 = (void*)0;
memset(&value_50, 0, sizeof(struct sVar*));
right_value71 = (void*)0;
memset(&type2_51, 0, sizeof(struct sType*));
right_value72 = (void*)0;
right_value73 = (void*)0;
right_value74 = (void*)0;
memset(&item_52, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value75 = (void*)0;
memset(&type3_53, 0, sizeof(struct sType*));
right_value76 = (void*)0;
right_value77 = (void*)0;
right_value78 = (void*)0;
memset(&item2_56, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value79 = (void*)0;
right_value80 = (void*)0;
memset(&o2_saved_106, 0, sizeof(struct map$2charphsVarph*));
memset(&it_107, 0, sizeof(char*));
memset(&key_108, 0, sizeof(char*));
right_value89 = (void*)0;
memset(&value_109, 0, sizeof(struct sVar*));
right_value90 = (void*)0;
memset(&type2_110, 0, sizeof(struct sType*));
right_value91 = (void*)0;
right_value92 = (void*)0;
memset(&item_111, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value93 = (void*)0;
memset(&come_value_112, 0, sizeof(struct CVALUE*));
right_value94 = (void*)0;
right_value95 = (void*)0;
right_value96 = (void*)0;
    info->current_stack_num++;
    class_name_5=(char*)come_increment_ref_count(((char*)(right_value13=xsprintf("__current_stack%d__",info->current_stack_num))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value13);
    if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { right_value13 = come_decrement_ref_count(right_value13, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value13, right_value13 = (void*)0;
    __freed_obj__ = 0;
    current_stack_6=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value15=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value14=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "20method.c", 40, "struct sClass")))),class_name_5,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value14);
    if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value14, right_value14 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value15);
    if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value15, right_value15 = (void*)0;
    __freed_obj__ = 0;
    result_kind_15=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value20=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value19=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 42, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value16=xsprintf("__method_block_result_kind__")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value18=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value17=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 42, "struct sType")))),"int",(_Bool)0,info))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
    if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { right_value16 = come_decrement_ref_count(right_value16, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value16, right_value16 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value17);
    if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value17, right_value17 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value18);
    if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value18, right_value18 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value19);
    if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { right_value19 = come_decrement_ref_count(right_value19, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value19, right_value19 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value20);
    if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value20, right_value20 = (void*)0;
    __freed_obj__ = 0;
    list$1tuple2$2charphsTypephph_push_back(current_stack_6->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value61=tuple2$2charphsTypephp_clone(result_kind_15)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value61);
    if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value61, right_value61 = (void*)0;
    __freed_obj__ = 0;
    return_value_38=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value66=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value65=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 45, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value62=xsprintf("__method_block_return_value__")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value64=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value63=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 45, "struct sType")))),"void*",(_Bool)0,info))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
    if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { right_value62 = come_decrement_ref_count(right_value62, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value62, right_value62 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value63);
    if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value63, right_value63 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value64);
    if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value64, right_value64 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value65);
    if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value65, right_value65 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value66);
    if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value66, right_value66 = (void*)0;
    __freed_obj__ = 0;
    list$1tuple2$2charphsTypephph_push_back(current_stack_6->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value67=tuple2$2charphsTypephp_clone(return_value_38)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
    if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value67, right_value67 = (void*)0;
    __freed_obj__ = 0;
    vtable_39=info->lv_table;
    while(_while_condtional8=vtable_39,    _while_condtional8) {
        for(
        o2_saved_40=(struct map$2charphsVarph*)come_increment_ref_count((vtable_39->mVars)),it_43=map$2charphsVarph_begin((o2_saved_40)) ,        0;        _for_condtionalA1=        !map$2charphsVarph_end((o2_saved_40)) ,        _for_condtionalA1;        it_43=map$2charphsVarph_next((o2_saved_40)) ,        0        ){
            key_46=it_43;
            value_50=((struct sVar*)(right_value70=map$2charphsVarphp_operator_load_element(vtable_39->mVars,key_46)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70);
            if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value70, right_value70 = (void*)0;
            __freed_obj__ = 0;
            type2_51=(struct sType*)come_increment_ref_count(((struct sType*)(right_value71=sType_clone(value_50->mType))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value71);
            if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value71, right_value71 = (void*)0;
            __freed_obj__ = 0;
            type2_51->mPointerNum++;
            item_52=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value74=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value73=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 59, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value72=__builtin_string(value_50->mCValueName)))),(struct sType*)come_increment_ref_count(type2_51)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value72);
            if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { right_value72 = come_decrement_ref_count(right_value72, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value72, right_value72 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value73);
            if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value73, right_value73 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value74);
            if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value74, right_value74 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional118=value_50->mCValueName!=((void*)0),            _if_conditional118) {
                if(_if_conditional119=strcmp(value_50->mCValueName,"__list_values")==0,                _if_conditional119) {
                }
                else {
                    if(_if_conditional120=strcmp(value_50->mCValueName,"__map_keys")==0,                    _if_conditional120) {
                    }
                    else {
                        if(_if_conditional121=strcmp(value_50->mCValueName,"__map_element")==0,                        _if_conditional121) {
                        }
                        else {
                            if(_if_conditional122=string_operator_equals(value_50->mType->mClass->mName,"va_list")||string_operator_equals(value_50->mType->mClass->mName,"__builtin_va_list"),                            _if_conditional122) {
                            }
                            else {
                                if(_if_conditional123=list$1sNodeph_length(type2_51->mArrayNum)==1,                                _if_conditional123) {
                                    type3_53=(struct sType*)come_increment_ref_count(((struct sType*)(right_value75=sType_clone(type2_51))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value75);
                                    if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value75, right_value75 = (void*)0;
                                    __freed_obj__ = 0;
                                    list$1sNodeph_reset(type3_53->mArrayNum);
                                    type3_53->mPointerNum++;
                                    item2_56=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value78=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value77=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 78, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value76=__builtin_string(value_50->mCValueName)))),(struct sType*)come_increment_ref_count(type3_53)))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value76);
                                    if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { right_value76 = come_decrement_ref_count(right_value76, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value76, right_value76 = (void*)0;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value77);
                                    if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value77, right_value77 = (void*)0;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value78);
                                    if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[2] = right_value78, right_value78 = (void*)0;
                                    __freed_obj__ = 0;
                                    list$1tuple2$2charphsTypephph_push_back(current_stack_6->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value79=tuple2$2charphsTypephp_clone(item2_56)))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
                                    if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value79, right_value79 = (void*)0;
                                    __freed_obj__ = 0;
                                    if(type3_53 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_53, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(item2_56 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item2_56, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                else {
                                    list$1tuple2$2charphsTypephph_push_back(current_stack_6->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value80=tuple2$2charphsTypephp_clone(item_52)))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value80);
                                    if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value80, right_value80 = (void*)0;
                                    __freed_obj__ = 0;
                                }
                            }
                        }
                    }
                }
            }
            if(type2_51 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_51, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(item_52 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item_52, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_40 && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,o2_saved_40, (void*)0, (void*)0, 0, 0, 0, 0); }
        vtable_39=vtable_39->mParent;
    }
    output_struct(current_stack_6,info);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(class_name_5),(struct sClass*)come_increment_ref_count(current_stack_6));
    num_current_stack_105++;
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_5,num_current_stack_105);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",num_current_stack_105,class_name_5);
    vtable_39=info->lv_table;
    while(_while_condtional20=vtable_39,    _while_condtional20) {
        for(
        o2_saved_106=(struct map$2charphsVarph*)come_increment_ref_count((vtable_39->mVars)),it_107=map$2charphsVarph_begin((o2_saved_106)) ,        0;        _for_condtionalA6=        !map$2charphsVarph_end((o2_saved_106)) ,        _for_condtionalA6;        it_107=map$2charphsVarph_next((o2_saved_106)) ,        0        ){
            key_108=it_107;
            value_109=((struct sVar*)(right_value89=map$2charphsVarphp_operator_load_element(vtable_39->mVars,key_108)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value89);
            if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value89, right_value89 = (void*)0;
            __freed_obj__ = 0;
            type2_110=(struct sType*)come_increment_ref_count(((struct sType*)(right_value90=sType_clone(value_109->mType))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
            if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value90, right_value90 = (void*)0;
            __freed_obj__ = 0;
            item_111=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value92=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value91=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 108, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(value_109->mCValueName),(struct sType*)come_increment_ref_count(type2_110)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value91);
            if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value91, right_value91 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value92);
            if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value92, right_value92 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional175=value_109->mCValueName!=((void*)0),            _if_conditional175) {
                if(_if_conditional176=strcmp(value_109->mCValueName,"__list_values")==0,                _if_conditional176) {
                }
                else {
                    if(_if_conditional177=strcmp(value_109->mCValueName,"__map_keys")==0,                    _if_conditional177) {
                    }
                    else {
                        if(_if_conditional178=strcmp(value_109->mCValueName,"__map_element")==0,                        _if_conditional178) {
                        }
                        else {
                            if(_if_conditional179=string_operator_equals(value_109->mType->mClass->mName,"va_list")||string_operator_equals(value_109->mType->mClass->mName,"__builtin_va_list"),                            _if_conditional179) {
                            }
                            else {
                                if(_if_conditional180=string_operator_equals(type2_110->mClass->mName,"lambda"),                                _if_conditional180) {
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
            if(type2_110 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_110, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(item_111 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item_111, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_106 && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,o2_saved_106, (void*)0, (void*)0, 0, 0, 0, 0); }
        vtable_39=vtable_39->mParent;
    }
    come_value_112=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value93=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 137, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
    if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value93, right_value93 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj37=come_value_112->c_value;
    come_value_112->c_value=(char*)come_increment_ref_count(((char*)(right_value94=xsprintf("&__current_stack%d__",num_current_stack_105))));
    if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94);
    if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { right_value94 = come_decrement_ref_count(right_value94, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value94, right_value94 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj38=come_value_112->type;
    come_value_112->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value96=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value95=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 140, "struct sType")))),class_name_5,(_Bool)0,info))));
    if(__dec_obj38) { come_call_finalizer(sType_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
    if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value95, right_value95 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value96);
    if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value96, right_value96 = (void*)0;
    __freed_obj__ = 0;
    come_value_112->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_112->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_112));
    info->num_current_stack=num_current_stack_105;
    __result73__ = (_Bool)1;
    if(class_name_5 && !__freed_obj__) { class_name_5 = come_decrement_ref_count(class_name_5, (void*)0, (void*)0, 0, 0, 0); }
    if(current_stack_6 && !__freed_obj__) { come_call_finalizer(sClass_finalize,current_stack_6, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_kind_15 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,result_kind_15, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(return_value_38 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,return_value_38, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_112 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_112, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result73__;
    if(class_name_5 && !__freed_obj__) { class_name_5 = come_decrement_ref_count(class_name_5, (void*)0, (void*)0, 0, 0, 0); }
    if(current_stack_6 && !__freed_obj__) { come_call_finalizer(sClass_finalize,current_stack_6, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_kind_15 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,result_kind_15, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(return_value_38 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,return_value_38, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_112 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_112, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional6;
_Bool _if_conditional7;
_Bool _if_conditional27;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional6=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional6) {
            if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional7=self!=((void*)0)&&self->mFields!=((void*)0),        _if_conditional7) {
            if(self->mFields && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional27=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional27) {
            if(self->mDeclareSName && !__freed_obj__) { self->mDeclareSName = come_decrement_ref_count(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphsTypephph* it_7;
_Bool _while_condtional1;
struct list_item$1tuple2$2charphsTypephph* prev_it_8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_7, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_8, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                it_7=self->head;
                while(_while_condtional1=it_7!=((void*)0),                _while_condtional1) {
                    prev_it_8=it_7;
                    it_7=it_7->next;
                    if(prev_it_8 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_8, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional8=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional8) {
                            if(self->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional9;
_Bool _if_conditional10;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional9=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional9) {
                                    if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(_if_conditional10=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional10) {
                                    if(self->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional11;
_Bool _if_conditional13;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _if_conditional17;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional25;
_Bool _if_conditional26;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        if(_if_conditional11=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                        _if_conditional11) {
                                            if(self->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        if(_if_conditional13=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                        _if_conditional13) {
                                            if(self->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        if(_if_conditional14=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                        _if_conditional14) {
                                            if(self->mGenericsName && !__freed_obj__) { self->mGenericsName = come_decrement_ref_count(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                                        }
                                        if(_if_conditional15=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                        _if_conditional15) {
                                            if(self->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        if(_if_conditional17=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                        _if_conditional17) {
                                            if(self->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        if(_if_conditional19=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                        _if_conditional19) {
                                            if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        if(_if_conditional20=self!=((void*)0)&&self->mParamNames!=((void*)0),                                        _if_conditional20) {
                                            if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        if(_if_conditional22=self!=((void*)0)&&self->mResultType!=((void*)0),                                        _if_conditional22) {
                                            if(self->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        if(_if_conditional23=self!=((void*)0)&&self->mAlignas!=((void*)0),                                        _if_conditional23) {
                                            if(self->mAlignas && !__freed_obj__) { self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0); } 
                                        }
                                        if(_if_conditional24=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                        _if_conditional24) {
                                            if(self->mSizeNum && !__freed_obj__) { self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                                        }
                                        if(_if_conditional25=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                        _if_conditional25) {
                                            if(self->mOriginalTypeName && !__freed_obj__) { self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                                        }
                                        if(_if_conditional26=self!=((void*)0)&&self->mAsmName!=((void*)0),                                        _if_conditional26) {
                                            if(self->mAsmName && !__freed_obj__) { self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                                        }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                if(_if_conditional12=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional12) {
                                                    if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sTypeph* it_9;
_Bool _while_condtional2;
struct list_item$1sTypeph* prev_it_10;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_9, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_10, 0, sizeof(struct list_item$1sTypeph*));
                                                it_9=self->head;
                                                while(_while_condtional2=it_9!=((void*)0),                                                _while_condtional2) {
                                                    prev_it_10=it_9;
                                                    it_9=it_9->next;
                                                    if(prev_it_10 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_10, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        if(_if_conditional16=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional16) {
                                                            if(self->item && !__freed_obj__) { come_call_finalizer(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_11;
_Bool _while_condtional3;
struct list_item$1sNodeph* prev_it_12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_11, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_12, 0, sizeof(struct list_item$1sNodeph*));
                                                it_11=self->head;
                                                while(_while_condtional3=it_11!=((void*)0),                                                _while_condtional3) {
                                                    prev_it_12=it_11;
                                                    it_11=it_11->next;
                                                    if(prev_it_12 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_12, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional18;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        if(_if_conditional18=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional18) {
                                                            if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0); } 
                                                        }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_13;
_Bool _while_condtional4;
struct list_item$1charph* prev_it_14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_13, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_14, 0, sizeof(struct list_item$1charph*));
                                                it_13=self->head;
                                                while(_while_condtional4=it_13!=((void*)0),                                                _while_condtional4) {
                                                    prev_it_14=it_13;
                                                    it_13=it_13->next;
                                                    if(prev_it_14 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_14, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        if(_if_conditional21=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional21) {
                                                            if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, 0); }
                                                        }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __dec_obj7;
struct sType* __dec_obj8;
struct tuple2$2charphsTypeph* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __dec_obj7=self->v1;
        self->v1=(char*)come_increment_ref_count(v1);
        if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0,0); }
        __dec_obj8=self->v2;
        self->v2=(struct sType*)come_increment_ref_count(v2);
        if(__dec_obj8) { come_call_finalizer(sType_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
        __result12__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result12__;
        if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional28;
void* right_value21;
struct list_item$1tuple2$2charphsTypephph* litem_16;
struct tuple2$2charphsTypeph* __dec_obj9;
_Bool _if_conditional31;
void* right_value22;
struct list_item$1tuple2$2charphsTypephph* litem_17;
struct tuple2$2charphsTypeph* __dec_obj10;
void* right_value23;
struct list_item$1tuple2$2charphsTypephph* litem_18;
struct tuple2$2charphsTypeph* __dec_obj11;
struct list$1tuple2$2charphsTypephph* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value21 = (void*)0;
memset(&litem_16, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value22 = (void*)0;
memset(&litem_17, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value23 = (void*)0;
memset(&litem_18, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
        if(_if_conditional28=self->len==0,        _if_conditional28) {
            litem_16=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value21=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 282, "struct list_item$1tuple2$2charphsTypephph"))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
            if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value21, right_value21 = (void*)0;
            __freed_obj__ = 0;
            litem_16->prev=((void*)0);
            litem_16->next=((void*)0);
            __dec_obj9=litem_16->item;
            litem_16->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
            if(__dec_obj9) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
            self->tail=litem_16;
            self->head=litem_16;
        }
        else {
            if(_if_conditional31=self->len==1,            _if_conditional31) {
                litem_17=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value22=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 292, "struct list_item$1tuple2$2charphsTypephph"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
                if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value22, right_value22 = (void*)0;
                __freed_obj__ = 0;
                litem_17->prev=self->head;
                litem_17->next=((void*)0);
                __dec_obj10=litem_17->item;
                litem_17->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                if(__dec_obj10) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail=litem_17;
                self->head->next=litem_17;
            }
            else {
                litem_18=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value23=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 302, "struct list_item$1tuple2$2charphsTypephph"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
                if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value23, right_value23 = (void*)0;
                __freed_obj__ = 0;
                litem_18->prev=self->tail;
                litem_18->next=((void*)0);
                __dec_obj11=litem_18->item;
                litem_18->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                if(__dec_obj11) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail->next=litem_18;
                self->tail=litem_18;
            }
        }
        self->len++;
        __result13__ = __result_obj__ = self;
        if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result13__;
        if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional29;
_Bool _if_conditional30;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional29=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional29) {
                    if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(_if_conditional30=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional30) {
                    if(self->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional32;
struct tuple2$2charphsTypeph* __result14__;
void* right_value24;
struct tuple2$2charphsTypeph* result_19;
_Bool _if_conditional33;
void* right_value25;
char* __dec_obj12;
_Bool _if_conditional34;
void* right_value60;
struct sType* __dec_obj35;
struct tuple2$2charphsTypeph* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value24 = (void*)0;
memset(&result_19, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value25 = (void*)0;
right_value60 = (void*)0;
        if(_if_conditional32=self==(void*)0,        _if_conditional32) {
            __result14__ = __result_obj__ = (void*)0;
            return __result14__;
        }
        result_19=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value24=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "struct tuple2$2charphsTypeph"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value24);
        if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value24, right_value24 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional33=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional33) {
            __dec_obj12=result_19->v1;
            result_19->v1=(char*)come_increment_ref_count(((char*)(right_value25=string_clone(self->v1))));
            if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
            if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { right_value25 = come_decrement_ref_count(right_value25, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value25, right_value25 = (void*)0;
            __freed_obj__ = 0;
        }
        if(_if_conditional34=self!=((void*)0)&&self->v2!=((void*)0),        _if_conditional34) {
            __dec_obj35=result_19->v2;
            result_19->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value60=sType_clone(self->v2))));
            if(__dec_obj35) { come_call_finalizer(sType_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value60);
            if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value60, right_value60 = (void*)0;
            __freed_obj__ = 0;
        }
        __result33__ = __result_obj__ = result_19;
        if(result_19 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,result_19, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result33__;
        if(result_19 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,result_19, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional35;
struct sType* __result15__;
void* right_value26;
struct sType* result_20;
_Bool _if_conditional36;
_Bool _if_conditional37;
void* right_value29;
struct tuple1$1sTypeph* __dec_obj14;
_Bool _if_conditional41;
void* right_value30;
struct tuple1$1sTypeph* __dec_obj15;
_Bool _if_conditional42;
void* right_value31;
char* __dec_obj16;
_Bool _if_conditional43;
void* right_value38;
struct list$1sTypeph* __dec_obj20;
_Bool _if_conditional47;
void* right_value46;
struct list$1sNodeph* __dec_obj24;
_Bool _if_conditional60;
_Bool _if_conditional61;
void* right_value47;
struct list$1sTypeph* __dec_obj25;
_Bool _if_conditional62;
void* right_value54;
struct list$1charph* __dec_obj29;
_Bool _if_conditional66;
void* right_value55;
struct tuple1$1sTypeph* __dec_obj30;
_Bool _if_conditional67;
_Bool _if_conditional68;
void* right_value56;
struct sNode* __dec_obj31;
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
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool _if_conditional92;
void* right_value57;
struct sNode* __dec_obj32;
_Bool _if_conditional93;
_Bool _if_conditional94;
_Bool _if_conditional95;
void* right_value58;
char* __dec_obj33;
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
_Bool _if_conditional101;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
void* right_value59;
char* __dec_obj34;
struct sType* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value26 = (void*)0;
memset(&result_20, 0, sizeof(struct sType*));
right_value29 = (void*)0;
right_value30 = (void*)0;
right_value31 = (void*)0;
right_value38 = (void*)0;
right_value46 = (void*)0;
right_value47 = (void*)0;
right_value54 = (void*)0;
right_value55 = (void*)0;
right_value56 = (void*)0;
right_value57 = (void*)0;
right_value58 = (void*)0;
right_value59 = (void*)0;
                if(_if_conditional35=self==(void*)0,                _if_conditional35) {
                    __result15__ = __result_obj__ = (void*)0;
                    return __result15__;
                }
                result_20=(struct sType*)come_increment_ref_count(((struct sType*)(right_value26=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value26);
                if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value26, right_value26 = (void*)0;
                __freed_obj__ = 0;
                if(_if_conditional36=self!=((void*)0),                _if_conditional36) {
                    result_20->mClass=self->mClass;
                }
                if(_if_conditional37=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional37) {
                    __dec_obj14=result_20->mNoSolvedGenericsType;
                    result_20->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value29=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                    if(__dec_obj14) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
                    if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value29, right_value29 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional41=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional41) {
                    __dec_obj15=result_20->mOriginalLoadVarType;
                    result_20->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value30=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                    if(__dec_obj15) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
                    if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value30, right_value30 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional42=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional42) {
                    __dec_obj16=result_20->mGenericsName;
                    result_20->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value31=string_clone(self->mGenericsName))));
                    if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
                    if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { right_value31 = come_decrement_ref_count(right_value31, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value31, right_value31 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional43=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional43) {
                    __dec_obj20=result_20->mGenericsTypes;
                    result_20->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value38=list$1sTypephp_clone(self->mGenericsTypes))));
                    if(__dec_obj20) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
                    if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value38, right_value38 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional47=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional47) {
                    __dec_obj24=result_20->mArrayNum;
                    result_20->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value46=list$1sNodephp_clone(self->mArrayNum))));
                    if(__dec_obj24) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value46);
                    if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value46, right_value46 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional60=self!=((void*)0),                _if_conditional60) {
                    result_20->mOmitArrayNum=self->mOmitArrayNum;
                }
                if(_if_conditional61=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional61) {
                    __dec_obj25=result_20->mParamTypes;
                    result_20->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value47=list$1sTypephp_clone(self->mParamTypes))));
                    if(__dec_obj25) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value47);
                    if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value47, right_value47 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional62=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional62) {
                    __dec_obj29=result_20->mParamNames;
                    result_20->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value54=list$1charphp_clone(self->mParamNames))));
                    if(__dec_obj29) { come_call_finalizer(list$1charph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
                    if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value54, right_value54 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional66=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional66) {
                    __dec_obj30=result_20->mResultType;
                    result_20->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value55=tuple1$1sTypephp_clone(self->mResultType))));
                    if(__dec_obj30) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
                    if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value55, right_value55 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional67=self!=((void*)0),                _if_conditional67) {
                    result_20->mVarArgs=self->mVarArgs;
                }
                if(_if_conditional68=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional68) {
                    __dec_obj31=result_20->mAlignas;
                    result_20->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value56=sNode_clone(self->mAlignas))));
                    if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
                    if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { right_value56 = come_decrement_ref_count(right_value56, ((struct sNode*)right_value56)->finalize, ((struct sNode*)right_value56)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value56, right_value56 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional69=self!=((void*)0),                _if_conditional69) {
                    result_20->mUnsigned=self->mUnsigned;
                }
                if(_if_conditional70=self!=((void*)0),                _if_conditional70) {
                    result_20->mShort=self->mShort;
                }
                if(_if_conditional71=self!=((void*)0),                _if_conditional71) {
                    result_20->mLong=self->mLong;
                }
                if(_if_conditional72=self!=((void*)0),                _if_conditional72) {
                    result_20->mLongLong=self->mLongLong;
                }
                if(_if_conditional73=self!=((void*)0),                _if_conditional73) {
                    result_20->mConstant=self->mConstant;
                }
                if(_if_conditional74=self!=((void*)0),                _if_conditional74) {
                    result_20->mRegister=self->mRegister;
                }
                if(_if_conditional75=self!=((void*)0),                _if_conditional75) {
                    result_20->mVolatile=self->mVolatile;
                }
                if(_if_conditional76=self!=((void*)0),                _if_conditional76) {
                    result_20->mStatic=self->mStatic;
                }
                if(_if_conditional77=self!=((void*)0),                _if_conditional77) {
                    result_20->mExtern=self->mExtern;
                }
                if(_if_conditional78=self!=((void*)0),                _if_conditional78) {
                    result_20->mRestrict=self->mRestrict;
                }
                if(_if_conditional79=self!=((void*)0),                _if_conditional79) {
                    result_20->mImmutable=self->mImmutable;
                }
                if(_if_conditional80=self!=((void*)0),                _if_conditional80) {
                    result_20->mHeap=self->mHeap;
                }
                if(_if_conditional81=self!=((void*)0),                _if_conditional81) {
                    result_20->mDummyHeap=self->mDummyHeap;
                }
                if(_if_conditional82=self!=((void*)0),                _if_conditional82) {
                    result_20->mDelegate=self->mDelegate;
                }
                if(_if_conditional83=self!=((void*)0),                _if_conditional83) {
                    result_20->mShare=self->mShare;
                }
                if(_if_conditional84=self!=((void*)0),                _if_conditional84) {
                    result_20->mClone=self->mClone;
                }
                if(_if_conditional85=self!=((void*)0),                _if_conditional85) {
                    result_20->mNoHeap=self->mNoHeap;
                }
                if(_if_conditional86=self!=((void*)0),                _if_conditional86) {
                    result_20->mNoCallingDestructor=self->mNoCallingDestructor;
                }
                if(_if_conditional87=self!=((void*)0),                _if_conditional87) {
                    result_20->mRefference=self->mRefference;
                }
                if(_if_conditional88=self!=((void*)0),                _if_conditional88) {
                    result_20->mException=self->mException;
                }
                if(_if_conditional89=self!=((void*)0),                _if_conditional89) {
                    result_20->mPointerNum=self->mPointerNum;
                }
                if(_if_conditional90=self!=((void*)0),                _if_conditional90) {
                    result_20->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                }
                if(_if_conditional91=self!=((void*)0),                _if_conditional91) {
                    result_20->mNoArrayPointerNum=self->mNoArrayPointerNum;
                }
                if(_if_conditional92=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional92) {
                    __dec_obj32=result_20->mSizeNum;
                    result_20->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value57=sNode_clone(self->mSizeNum))));
                    if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
                    if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { right_value57 = come_decrement_ref_count(right_value57, ((struct sNode*)right_value57)->finalize, ((struct sNode*)right_value57)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value57, right_value57 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional93=self!=((void*)0),                _if_conditional93) {
                    result_20->mDynamicArrayNum=self->mDynamicArrayNum;
                }
                if(_if_conditional94=self!=((void*)0),                _if_conditional94) {
                    result_20->mTypeOfExpression=self->mTypeOfExpression;
                }
                if(_if_conditional95=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional95) {
                    __dec_obj33=result_20->mOriginalTypeName;
                    result_20->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value58=string_clone(self->mOriginalTypeName))));
                    if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
                    if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value58, right_value58 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional96=self!=((void*)0),                _if_conditional96) {
                    result_20->mOriginalPointerNum=self->mOriginalPointerNum;
                }
                if(_if_conditional97=self!=((void*)0),                _if_conditional97) {
                    result_20->mFunctionParam=self->mFunctionParam;
                }
                if(_if_conditional98=self!=((void*)0),                _if_conditional98) {
                    result_20->mAllocaValue=self->mAllocaValue;
                }
                if(_if_conditional99=self!=((void*)0),                _if_conditional99) {
                    result_20->mGenericsStruct=self->mGenericsStruct;
                }
                if(_if_conditional100=self!=((void*)0),                _if_conditional100) {
                    result_20->mSolvedGenericsName=self->mSolvedGenericsName;
                }
                if(_if_conditional101=self!=((void*)0),                _if_conditional101) {
                    result_20->mComeMemCore=self->mComeMemCore;
                }
                if(_if_conditional102=self!=((void*)0),                _if_conditional102) {
                    result_20->mInline=self->mInline;
                }
                if(_if_conditional103=self!=((void*)0),                _if_conditional103) {
                    result_20->mNullValue=self->mNullValue;
                }
                if(_if_conditional104=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional104) {
                    __dec_obj34=result_20->mAsmName;
                    result_20->mAsmName=(char*)come_increment_ref_count(((char*)(right_value59=string_clone(self->mAsmName))));
                    if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59);
                    if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value59, right_value59 = (void*)0;
                    __freed_obj__ = 0;
                }
                __result32__ = __result_obj__ = result_20;
                if(result_20 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_20, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result32__;
                if(result_20 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_20, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional38;
struct tuple1$1sTypeph* __result16__;
void* right_value27;
struct tuple1$1sTypeph* result_21;
_Bool _if_conditional40;
void* right_value28;
struct sType* __dec_obj13;
struct tuple1$1sTypeph* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value27 = (void*)0;
memset(&result_21, 0, sizeof(struct tuple1$1sTypeph*));
right_value28 = (void*)0;
                        if(_if_conditional38=self==(void*)0,                        _if_conditional38) {
                            __result16__ = __result_obj__ = (void*)0;
                            return __result16__;
                        }
                        result_21=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value27=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
                        if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value27, right_value27 = (void*)0;
                        __freed_obj__ = 0;
                        if(_if_conditional40=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional40) {
                            __dec_obj13=result_21->v1;
                            result_21->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value28=sType_clone(self->v1))));
                            if(__dec_obj13) { come_call_finalizer(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
                            if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value28, right_value28 = (void*)0;
                            __freed_obj__ = 0;
                        }
                        __result17__ = __result_obj__ = result_21;
                        if(result_21 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_21, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result17__;
                        if(result_21 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_21, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional39;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional39=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional39) {
                                if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional44;
struct list$1sTypeph* __result18__;
void* right_value32;
void* right_value33;
struct list$1sTypeph* result_22;
struct list_item$1sTypeph* it_23;
_Bool _while_condtional5;
void* right_value37;
struct list$1sTypeph* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value32 = (void*)0;
right_value33 = (void*)0;
memset(&result_22, 0, sizeof(struct list$1sTypeph*));
memset(&it_23, 0, sizeof(struct list_item$1sTypeph*));
right_value37 = (void*)0;
                        if(_if_conditional44=self==((void*)0),                        _if_conditional44) {
                            __result18__ = __result_obj__ = ((void*)0);
                            return __result18__;
                        }
                        result_22=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value33=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value32=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 198, "struct list$1sTypeph"))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
                        if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value32, right_value32 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value33);
                        if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value33, right_value33 = (void*)0;
                        __freed_obj__ = 0;
                        it_23=self->head;
                        while(_while_condtional5=it_23!=((void*)0),                        _while_condtional5) {
                            list$1sTypeph_add(result_22,(struct sType*)come_increment_ref_count(((struct sType*)(right_value37=sType_clone(it_23->item)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
                            if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value37, right_value37 = (void*)0;
                            __freed_obj__ = 0;
                            it_23=it_23->next;
                        }
                        __result21__ = __result_obj__ = result_22;
                        if(result_22 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_22, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result21__;
                        if(result_22 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_22, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            __result19__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result19__;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional45;
void* right_value34;
struct list_item$1sTypeph* litem_24;
struct sType* __dec_obj17;
_Bool _if_conditional46;
void* right_value35;
struct list_item$1sTypeph* litem_25;
struct sType* __dec_obj18;
void* right_value36;
struct list_item$1sTypeph* litem_26;
struct sType* __dec_obj19;
struct list$1sTypeph* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value34 = (void*)0;
memset(&litem_24, 0, sizeof(struct list_item$1sTypeph*));
right_value35 = (void*)0;
memset(&litem_25, 0, sizeof(struct list_item$1sTypeph*));
right_value36 = (void*)0;
memset(&litem_26, 0, sizeof(struct list_item$1sTypeph*));
                                if(_if_conditional45=self->len==0,                                _if_conditional45) {
                                    litem_24=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value34=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 212, "struct list_item$1sTypeph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
                                    if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value34, right_value34 = (void*)0;
                                    __freed_obj__ = 0;
                                    litem_24->prev=((void*)0);
                                    litem_24->next=((void*)0);
                                    __dec_obj17=litem_24->item;
                                    litem_24->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj17) { come_call_finalizer(sType_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    self->tail=litem_24;
                                    self->head=litem_24;
                                }
                                else {
                                    if(_if_conditional46=self->len==1,                                    _if_conditional46) {
                                        litem_25=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value35=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 222, "struct list_item$1sTypeph"))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
                                        if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value35, right_value35 = (void*)0;
                                        __freed_obj__ = 0;
                                        litem_25->prev=self->head;
                                        litem_25->next=((void*)0);
                                        __dec_obj18=litem_25->item;
                                        litem_25->item=(struct sType*)come_increment_ref_count(item);
                                        if(__dec_obj18) { come_call_finalizer(sType_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        self->tail=litem_25;
                                        self->head->next=litem_25;
                                    }
                                    else {
                                        litem_26=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value36=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 232, "struct list_item$1sTypeph"))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
                                        if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value36, right_value36 = (void*)0;
                                        __freed_obj__ = 0;
                                        litem_26->prev=self->tail;
                                        litem_26->next=((void*)0);
                                        __dec_obj19=litem_26->item;
                                        litem_26->item=(struct sType*)come_increment_ref_count(item);
                                        if(__dec_obj19) { come_call_finalizer(sType_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        self->tail->next=litem_26;
                                        self->tail=litem_26;
                                    }
                                }
                                self->len++;
                                __result20__ = __result_obj__ = self;
                                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result20__;
                                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional48;
struct list$1sNodeph* __result22__;
void* right_value39;
void* right_value40;
struct list$1sNodeph* result_27;
struct list_item$1sNodeph* it_28;
_Bool _while_condtional6;
void* right_value45;
struct list$1sNodeph* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value39 = (void*)0;
right_value40 = (void*)0;
memset(&result_27, 0, sizeof(struct list$1sNodeph*));
memset(&it_28, 0, sizeof(struct list_item$1sNodeph*));
right_value45 = (void*)0;
                        if(_if_conditional48=self==((void*)0),                        _if_conditional48) {
                            __result22__ = __result_obj__ = ((void*)0);
                            return __result22__;
                        }
                        result_27=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value40=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value39=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 198, "struct list$1sNodeph"))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
                        if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value39, right_value39 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value40);
                        if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value40, right_value40 = (void*)0;
                        __freed_obj__ = 0;
                        it_28=self->head;
                        while(_while_condtional6=it_28!=((void*)0),                        _while_condtional6) {
                            list$1sNodeph_add(result_27,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value45=sNode_clone(it_28->item)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
                            if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { right_value45 = come_decrement_ref_count(right_value45, ((struct sNode*)right_value45)->finalize, ((struct sNode*)right_value45)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value45, right_value45 = (void*)0;
                            __freed_obj__ = 0;
                            it_28=it_28->next;
                        }
                        __result27__ = __result_obj__ = result_27;
                        if(result_27 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_27, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result27__;
                        if(result_27 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_27, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            __result23__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result23__;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional49;
void* right_value41;
struct list_item$1sNodeph* litem_29;
struct sNode* __dec_obj21;
_Bool _if_conditional50;
void* right_value42;
struct list_item$1sNodeph* litem_30;
struct sNode* __dec_obj22;
void* right_value43;
struct list_item$1sNodeph* litem_31;
struct sNode* __dec_obj23;
struct list$1sNodeph* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value41 = (void*)0;
memset(&litem_29, 0, sizeof(struct list_item$1sNodeph*));
right_value42 = (void*)0;
memset(&litem_30, 0, sizeof(struct list_item$1sNodeph*));
right_value43 = (void*)0;
memset(&litem_31, 0, sizeof(struct list_item$1sNodeph*));
                                if(_if_conditional49=self->len==0,                                _if_conditional49) {
                                    litem_29=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value41=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 212, "struct list_item$1sNodeph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
                                    if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value41, right_value41 = (void*)0;
                                    __freed_obj__ = 0;
                                    litem_29->prev=((void*)0);
                                    litem_29->next=((void*)0);
                                    __dec_obj21=litem_29->item;
                                    litem_29->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0); }
                                    self->tail=litem_29;
                                    self->head=litem_29;
                                }
                                else {
                                    if(_if_conditional50=self->len==1,                                    _if_conditional50) {
                                        litem_30=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value42=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 222, "struct list_item$1sNodeph"))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
                                        if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value42, right_value42 = (void*)0;
                                        __freed_obj__ = 0;
                                        litem_30->prev=self->head;
                                        litem_30->next=((void*)0);
                                        __dec_obj22=litem_30->item;
                                        litem_30->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0); }
                                        self->tail=litem_30;
                                        self->head->next=litem_30;
                                    }
                                    else {
                                        litem_31=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value43=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 232, "struct list_item$1sNodeph"))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
                                        if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value43, right_value43 = (void*)0;
                                        __freed_obj__ = 0;
                                        litem_31->prev=self->tail;
                                        litem_31->next=((void*)0);
                                        __dec_obj23=litem_31->item;
                                        litem_31->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0); }
                                        self->tail->next=litem_31;
                                        self->tail=litem_31;
                                    }
                                }
                                self->len++;
                                __result24__ = __result_obj__ = self;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                                return __result24__;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional51;
struct sNode* __result25__;
void* right_value44;
struct sNode* result_32;
_Bool _if_conditional52;
_Bool _if_conditional53;
_Bool _if_conditional54;
_Bool _if_conditional55;
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
struct sNode* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value44 = (void*)0;
memset(&result_32, 0, sizeof(struct sNode*));
                                if(_if_conditional51=self==(void*)0,                                _if_conditional51) {
                                    __result25__ = __result_obj__ = (void*)0;
                                    return __result25__;
                                }
                                result_32=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value44=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
                                if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { right_value44 = come_decrement_ref_count(right_value44, ((struct sNode*)right_value44)->finalize, ((struct sNode*)right_value44)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value44, right_value44 = (void*)0;
                                __freed_obj__ = 0;
                                if(_if_conditional52=self!=((void*)0)&&self->clone!=((void*)0),                                _if_conditional52) {
                                    result_32->_protocol_obj=self->clone(self->_protocol_obj);
                                }
                                if(_if_conditional53=self!=((void*)0),                                _if_conditional53) {
                                    result_32->finalize=self->finalize;
                                }
                                if(_if_conditional54=self!=((void*)0),                                _if_conditional54) {
                                    result_32->clone=self->clone;
                                }
                                if(_if_conditional55=self!=((void*)0),                                _if_conditional55) {
                                    result_32->compile=self->compile;
                                }
                                if(_if_conditional56=self!=((void*)0),                                _if_conditional56) {
                                    result_32->sline=self->sline;
                                }
                                if(_if_conditional57=self!=((void*)0),                                _if_conditional57) {
                                    result_32->sname=self->sname;
                                }
                                if(_if_conditional58=self!=((void*)0),                                _if_conditional58) {
                                    result_32->terminated=self->terminated;
                                }
                                if(_if_conditional59=self!=((void*)0),                                _if_conditional59) {
                                    result_32->kind=self->kind;
                                }
                                __result26__ = __result_obj__ = result_32;
                                if(result_32 && !__freed_obj__) { result_32 = come_decrement_ref_count(result_32, ((struct sNode*)result_32)->finalize, ((struct sNode*)result_32)->_protocol_obj, 0, 1, 0); } 
                                return __result26__;
                                if(result_32 && !__freed_obj__) { result_32 = come_decrement_ref_count(result_32, ((struct sNode*)result_32)->finalize, ((struct sNode*)result_32)->_protocol_obj, 0, 0, 0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional63;
struct list$1charph* __result28__;
void* right_value48;
void* right_value49;
struct list$1charph* result_33;
struct list_item$1charph* it_34;
_Bool _while_condtional7;
void* right_value53;
struct list$1charph* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value48 = (void*)0;
right_value49 = (void*)0;
memset(&result_33, 0, sizeof(struct list$1charph*));
memset(&it_34, 0, sizeof(struct list_item$1charph*));
right_value53 = (void*)0;
                        if(_if_conditional63=self==((void*)0),                        _if_conditional63) {
                            __result28__ = __result_obj__ = ((void*)0);
                            return __result28__;
                        }
                        result_33=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value49=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value48=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 198, "struct list$1charph"))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value48);
                        if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value48, right_value48 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value49);
                        if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value49, right_value49 = (void*)0;
                        __freed_obj__ = 0;
                        it_34=self->head;
                        while(_while_condtional7=it_34!=((void*)0),                        _while_condtional7) {
                            list$1charph_add(result_33,(char*)come_increment_ref_count(((char*)(right_value53=string_clone(it_34->item)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
                            if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { right_value53 = come_decrement_ref_count(right_value53, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value53, right_value53 = (void*)0;
                            __freed_obj__ = 0;
                            it_34=it_34->next;
                        }
                        __result31__ = __result_obj__ = result_33;
                        if(result_33 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_33, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result31__;
                        if(result_33 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_33, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            __result29__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result29__;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional64;
void* right_value50;
struct list_item$1charph* litem_35;
char* __dec_obj26;
_Bool _if_conditional65;
void* right_value51;
struct list_item$1charph* litem_36;
char* __dec_obj27;
void* right_value52;
struct list_item$1charph* litem_37;
char* __dec_obj28;
struct list$1charph* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value50 = (void*)0;
memset(&litem_35, 0, sizeof(struct list_item$1charph*));
right_value51 = (void*)0;
memset(&litem_36, 0, sizeof(struct list_item$1charph*));
right_value52 = (void*)0;
memset(&litem_37, 0, sizeof(struct list_item$1charph*));
                                if(_if_conditional64=self->len==0,                                _if_conditional64) {
                                    litem_35=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value50=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 212, "struct list_item$1charph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50);
                                    if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value50, right_value50 = (void*)0;
                                    __freed_obj__ = 0;
                                    litem_35->prev=((void*)0);
                                    litem_35->next=((void*)0);
                                    __dec_obj26=litem_35->item;
                                    litem_35->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0,0); }
                                    self->tail=litem_35;
                                    self->head=litem_35;
                                }
                                else {
                                    if(_if_conditional65=self->len==1,                                    _if_conditional65) {
                                        litem_36=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value51=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 222, "struct list_item$1charph"))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
                                        if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value51, right_value51 = (void*)0;
                                        __freed_obj__ = 0;
                                        litem_36->prev=self->head;
                                        litem_36->next=((void*)0);
                                        __dec_obj27=litem_36->item;
                                        litem_36->item=(char*)come_increment_ref_count(item);
                                        if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0,0); }
                                        self->tail=litem_36;
                                        self->head->next=litem_36;
                                    }
                                    else {
                                        litem_37=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value52=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 232, "struct list_item$1charph"))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52);
                                        if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value52, right_value52 = (void*)0;
                                        __freed_obj__ = 0;
                                        litem_37->prev=self->tail;
                                        litem_37->next=((void*)0);
                                        __dec_obj28=litem_37->item;
                                        litem_37->item=(char*)come_increment_ref_count(item);
                                        if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0,0); }
                                        self->tail->next=litem_37;
                                        self->tail=litem_37;
                                    }
                                }
                                self->len++;
                                __result30__ = __result_obj__ = self;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                                return __result30__;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional105;
char* result_41;
char* __result34__;
_Bool _if_conditional106;
char* __result35__;
char* result_42;
char* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_41, 0, sizeof(char*));
memset(&result_42, 0, sizeof(char*));
            if(_if_conditional105=self==((void*)0),            _if_conditional105) {
                memset(&result_41,0,sizeof(char*));
                __result34__ = __result_obj__ = result_41;
                return __result34__;
            }
            self->key_list->it=self->key_list->head;
            if(_if_conditional106=self->key_list->it,            _if_conditional106) {
                __result35__ = __result_obj__ = self->key_list->it->item;
                return __result35__;
            }
            memset(&result_42,0,sizeof(char*));
            __result36__ = __result_obj__ = result_42;
            return __result36__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result37__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
            return __result37__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional107;
char* result_44;
char* __result38__;
_Bool _if_conditional108;
char* __result39__;
char* result_45;
char* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_44, 0, sizeof(char*));
memset(&result_45, 0, sizeof(char*));
            if(_if_conditional107=self==((void*)0)||self->key_list->it==((void*)0),            _if_conditional107) {
                memset(&result_44,0,sizeof(char*));
                __result38__ = __result_obj__ = result_44;
                return __result38__;
            }
            self->key_list->it=self->key_list->it->next;
            if(_if_conditional108=self->key_list->it,            _if_conditional108) {
                __result39__ = __result_obj__ = self->key_list->it->item;
                return __result39__;
            }
            memset(&result_45,0,sizeof(char*));
            __result40__ = __result_obj__ = result_45;
            return __result40__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sVar* default_value_47;
unsigned int hash_48;
unsigned int it_49;
_Bool _while_condtional9;
_Bool _if_conditional109;
_Bool _if_conditional110;
struct sVar* __result41__;
_Bool _if_conditional115;
_Bool _if_conditional116;
struct sVar* __result42__;
struct sVar* __result43__;
void* right_value68;
void* right_value69;
struct sVar* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_47, 0, sizeof(struct sVar*));
memset(&hash_48, 0, sizeof(unsigned int));
memset(&it_49, 0, sizeof(unsigned int));
right_value68 = (void*)0;
right_value69 = (void*)0;
                memset(&default_value_47,0,sizeof(struct sVar*));
                hash_48=string_get_hash_key(((char*)key))%self->size;
                it_49=hash_48;
                while(_while_condtional9=(_Bool)1,                _while_condtional9) {
                    if(_if_conditional109=self->item_existance[it_49],                    _if_conditional109) {
                        if(_if_conditional110=string_equals(self->keys[it_49],key),                        _if_conditional110) {
                            __result41__ = __result_obj__ = self->items[it_49];
                            if(default_value_47 && !__freed_obj__) { come_call_finalizer(sVar_finalize,default_value_47, (void*)0, (void*)0, 0, 0, 0, 0); }
                            return __result41__;
                        }
                        it_49++;
                        if(_if_conditional115=it_49>=self->size,                        _if_conditional115) {
                            it_49=0;
                        }
                        else {
                            if(_if_conditional116=it_49==hash_48,                            _if_conditional116) {
                                __result42__ = __result_obj__ = default_value_47;
                                if(default_value_47 && !__freed_obj__) { come_call_finalizer(sVar_finalize,default_value_47, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result42__;
                            }
                        }
                    }
                    else {
                        __result43__ = __result_obj__ = default_value_47;
                        if(default_value_47 && !__freed_obj__) { come_call_finalizer(sVar_finalize,default_value_47, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result43__;
                    }
                }
                __result45__ = __result_obj__ = ((struct optional$2sVarphbool*)(right_value69=optional$2sVarphbool_initialize(((struct optional$2sVarphbool*)(right_value68=(struct optional$2sVarphbool*)come_calloc(1, sizeof(struct optional$2sVarphbool)*(1), "./comelang2.h", 1630, "struct optional$2sVarphbool"))),(struct sVar*)come_increment_ref_count(default_value_47),(_Bool)0)));
                if(default_value_47 && !__freed_obj__) { come_call_finalizer(sVar_finalize,default_value_47, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value68);
                if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value68, right_value68 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value69);
                if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarphboolp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value69, right_value69 = (void*)0;
                __freed_obj__ = 0;
                return __result45__;
                if(default_value_47 && !__freed_obj__) { come_call_finalizer(sVar_finalize,default_value_47, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional111=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional111) {
                                    if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(_if_conditional112=self!=((void*)0)&&self->mCValueName!=((void*)0),                                _if_conditional112) {
                                    if(self->mCValueName && !__freed_obj__) { self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(_if_conditional113=self!=((void*)0)&&self->mType!=((void*)0),                                _if_conditional113) {
                                    if(self->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional114=self!=((void*)0)&&self->mFunName!=((void*)0),                                _if_conditional114) {
                                    if(self->mFunName && !__freed_obj__) { self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static struct optional$2sVarphbool* optional$2sVarphbool_initialize(struct optional$2sVarphbool* self, struct sVar* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sVar* __dec_obj36;
struct optional$2sVarphbool* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __dec_obj36=self->v1;
                    self->v1=(struct sVar*)come_increment_ref_count(v1);
                    if(__dec_obj36) { come_call_finalizer(sVar_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->v2=v2;
                    __result44__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sVarphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(sVar_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result44__;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sVarphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(sVar_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sVarphboolp_finalize(struct optional$2sVarphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional117;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional117=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional117) {
                            if(self->v1 && !__freed_obj__) { come_call_finalizer(sVar_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    __result46__ = self->len;
                                    return __result46__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_54;
_Bool _while_condtional10;
struct list_item$1sNodeph* prev_it_55;
struct list$1sNodeph* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_54, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_55, 0, sizeof(struct list_item$1sNodeph*));
                                        it_54=self->head;
                                        while(_while_condtional10=it_54!=((void*)0),                                        _while_condtional10) {
                                            prev_it_55=it_54;
                                            it_54=it_54->next;
                                            if(prev_it_55 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_55, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        self->head=((void*)0);
                                        self->tail=((void*)0);
                                        self->len=0;
                                        __result47__ = __result_obj__ = self;
                                        return __result47__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_57;
_Bool _for_condtionalA2;
_Bool _if_conditional124;
_Bool _if_conditional125;
int i_58;
_Bool _for_condtionalA3;
_Bool _if_conditional126;
_Bool _if_conditional127;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_57, 0, sizeof(int));
memset(&i_58, 0, sizeof(int));
            for(
            i_57=0 ,            0;            _for_condtionalA2=            i_57<self->size ,            _for_condtionalA2;            i_57++ ,            0            ){
                if(_if_conditional124=self->item_existance[i_57],                _if_conditional124) {
                    if(_if_conditional125=1,                    _if_conditional125) {
                        if(self->items[i_57] && !__freed_obj__) { come_call_finalizer(sVar_finalize,self->items[i_57], (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                }
            }
            come_free((char*)self->items);
            for(
            i_58=0 ,            0;            _for_condtionalA3=            i_58<self->size ,            _for_condtionalA3;            i_58++ ,            0            ){
                if(_if_conditional126=self->item_existance[i_58],                _if_conditional126) {
                    if(_if_conditional127=1,                    _if_conditional127) {
                        if(self->keys[i_58] && !__freed_obj__) { self->keys[i_58] = come_decrement_ref_count(self->keys[i_58], (void*)0, (void*)0, 0, 0, 0); }
                    }
                }
            }
            come_free((char*)self->keys);
            if(self->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_59;
_Bool _while_condtional11;
struct list_item$1charp* prev_it_60;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_59, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_60, 0, sizeof(struct list_item$1charp*));
                it_59=self->head;
                while(_while_condtional11=it_59!=((void*)0),                _while_condtional11) {
                    prev_it_60=it_59;
                    it_59=it_59->next;
                    if(prev_it_60 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_60, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional128;
unsigned int hash_78;
unsigned int it_79;
_Bool _while_condtional14;
_Bool _if_conditional140;
_Bool _if_conditional141;
_Bool _if_conditional142;
_Bool _if_conditional162;
_Bool _if_conditional163;
_Bool _if_conditional164;
_Bool _if_conditional165;
_Bool _if_conditional166;
_Bool same_key_exist_96;
char* it2_99;
_Bool _for_condtionalA5;
_Bool _if_conditional171;
_Bool _if_conditional172;
struct map$2charphsClassph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_78, 0, sizeof(unsigned int));
memset(&it_79, 0, sizeof(unsigned int));
memset(&same_key_exist_96, 0, sizeof(_Bool));
memset(&it2_99, 0, sizeof(char*));
        if(_if_conditional128=self->len*10>=self->size,        _if_conditional128) {
            map$2charphsClassph_rehash(self);
        }
        hash_78=string_get_hash_key(key)%self->size;
        it_79=hash_78;
        while(_while_condtional14=(_Bool)1,        _while_condtional14) {
            if(_if_conditional140=self->item_existance[it_79],            _if_conditional140) {
                if(_if_conditional141=string_equals(self->keys[it_79],key),                _if_conditional141) {
                    if(_if_conditional142=1,                    _if_conditional142) {
                        list$1charp_remove(self->key_list,self->keys[it_79]);
                        if(self->keys[it_79] && !__freed_obj__) { self->keys[it_79] = come_decrement_ref_count(self->keys[it_79], (void*)0, (void*)0, 0, 0, 0); }
                        self->keys[it_79]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charp_remove(self->key_list,self->keys[it_79]);
                        self->keys[it_79]=key;
                    }
                    if(_if_conditional162=1,                    _if_conditional162) {
                        if(self->items[it_79] && !__freed_obj__) { come_call_finalizer(sClass_finalize,self->items[it_79], (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->items[it_79]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_79]=item;
                    }
                    break;
                }
                it_79++;
                if(_if_conditional163=it_79>=self->size,                _if_conditional163) {
                    it_79=0;
                }
                else {
                    if(_if_conditional164=it_79==hash_78,                    _if_conditional164) {
                        printf("unexpected error in map.insert\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                self->item_existance[it_79]=(_Bool)1;
                if(_if_conditional165=1,                _if_conditional165) {
                    self->keys[it_79]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_79]=key;
                }
                if(_if_conditional166=1,                _if_conditional166) {
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
        for(
        it2_99=list$1charp_begin(self->key_list) ,        0;        _for_condtionalA5=        !list$1charp_end(self->key_list) ,        _for_condtionalA5;        it2_99=list$1charp_next(self->key_list) ,        0        ){
            if(_if_conditional171=string_equals(it2_99,key),            _if_conditional171) {
                same_key_exist_96=(_Bool)1;
            }
        }
        if(_if_conditional172=!same_key_exist_96,        _if_conditional172) {
            list$1charp_push_back(self->key_list,key);
        }
        __result71__ = __result_obj__ = self;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result71__;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_61;
void* right_value81;
char** keys_62;
void* right_value82;
struct sClass** items_63;
void* right_value83;
_Bool* item_existance_64;
int len_65;
char* it_68;
_Bool _for_condtionalA4;
struct sClass* default_value_71;
void* right_value84;
struct sClass* it2_74;
unsigned int hash_75;
int n_76;
_Bool _while_condtional13;
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool _if_conditional139;
struct sClass* default_value_77;
void* right_value85;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_61, 0, sizeof(int));
right_value81 = (void*)0;
memset(&keys_62, 0, sizeof(char**));
right_value82 = (void*)0;
memset(&items_63, 0, sizeof(struct sClass**));
right_value83 = (void*)0;
memset(&item_existance_64, 0, sizeof(_Bool*));
memset(&len_65, 0, sizeof(int));
memset(&it_68, 0, sizeof(char*));
memset(&default_value_71, 0, sizeof(struct sClass*));
right_value84 = (void*)0;
memset(&it2_74, 0, sizeof(struct sClass*));
memset(&hash_75, 0, sizeof(unsigned int));
memset(&n_76, 0, sizeof(int));
memset(&default_value_77, 0, sizeof(struct sClass*));
right_value85 = (void*)0;
                size_61=self->size*10;
                keys_62=(char**)come_increment_ref_count(((char**)(right_value81=(char**)come_calloc(1, sizeof(char*)*(1*(size_61)), "./comelang2.h", 1388, "char*"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
                if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { right_value81 = come_decrement_ref_count(right_value81, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value81, right_value81 = (void*)0;
                __freed_obj__ = 0;
                items_63=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value82=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_61)), "./comelang2.h", 1389, "struct sClass*"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value82);
                if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value82, right_value82 = (void*)0;
                __freed_obj__ = 0;
                item_existance_64=(_Bool*)come_increment_ref_count(((_Bool*)(right_value83=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_61)), "./comelang2.h", 1390, "_Bool"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
                if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value83, right_value83 = (void*)0;
                __freed_obj__ = 0;
                len_65=0;
                for(
                it_68=map$2charphsClassph_begin(self) ,                0;                _for_condtionalA4=                !map$2charphsClassph_end(self) ,                _for_condtionalA4;                it_68=map$2charphsClassph_next(self) ,                0                ){
                    memset(&default_value_71,0,sizeof(struct sClass*));
                    it2_74=((struct sClass*)(right_value84=map$2charphsClassph_at(self,it_68,default_value_71)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value84);
                    if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value84, right_value84 = (void*)0;
                    __freed_obj__ = 0;
                    hash_75=string_get_hash_key(it_68)%size_61;
                    n_76=hash_75;
                    while(_while_condtional13=(_Bool)1,                    _while_condtional13) {
                        if(_if_conditional137=item_existance_64[n_76],                        _if_conditional137) {
                            n_76++;
                            if(_if_conditional138=n_76>=size_61,                            _if_conditional138) {
                                n_76=0;
                            }
                            else {
                                if(_if_conditional139=n_76==hash_75,                                _if_conditional139) {
                                    printf("unexpected error in map.rehash(1)\n");
                                    stackframe();
                                    exit(2);
                                }
                            }
                        }
                        else {
                            item_existance_64[n_76]=(_Bool)1;
                            keys_62[n_76]=it_68;
                            items_63[n_76]=((struct sClass*)(right_value85=map$2charphsClassph_at(self,it_68,default_value_77)));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value85);
                            if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value85, right_value85 = (void*)0;
                            __freed_obj__ = 0;
                            len_65++;
                            break;
                        }
                    }
                }
                come_free((char*)self->items);
                if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                come_free((char*)self->keys);
                self->keys=keys_62;
                self->items=items_63;
                self->item_existance=item_existance_64;
                self->size=size_61;
                self->len=len_65;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional129;
char* result_66;
char* __result48__;
_Bool _if_conditional130;
char* __result49__;
char* result_67;
char* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_66, 0, sizeof(char*));
memset(&result_67, 0, sizeof(char*));
                    if(_if_conditional129=self==((void*)0),                    _if_conditional129) {
                        memset(&result_66,0,sizeof(char*));
                        __result48__ = __result_obj__ = result_66;
                        return __result48__;
                    }
                    self->key_list->it=self->key_list->head;
                    if(_if_conditional130=self->key_list->it,                    _if_conditional130) {
                        __result49__ = __result_obj__ = self->key_list->it->item;
                        return __result49__;
                    }
                    memset(&result_67,0,sizeof(char*));
                    __result50__ = __result_obj__ = result_67;
                    return __result50__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __result51__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result51__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional131;
char* result_69;
char* __result52__;
_Bool _if_conditional132;
char* __result53__;
char* result_70;
char* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_69, 0, sizeof(char*));
memset(&result_70, 0, sizeof(char*));
                    if(_if_conditional131=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional131) {
                        memset(&result_69,0,sizeof(char*));
                        __result52__ = __result_obj__ = result_69;
                        return __result52__;
                    }
                    self->key_list->it=self->key_list->it->next;
                    if(_if_conditional132=self->key_list->it,                    _if_conditional132) {
                        __result53__ = __result_obj__ = self->key_list->it->item;
                        return __result53__;
                    }
                    memset(&result_70,0,sizeof(char*));
                    __result54__ = __result_obj__ = result_70;
                    return __result54__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_72;
unsigned int it_73;
_Bool _while_condtional12;
_Bool _if_conditional133;
_Bool _if_conditional134;
struct sClass* __result55__;
_Bool _if_conditional135;
_Bool _if_conditional136;
struct sClass* __result56__;
struct sClass* __result57__;
struct sClass* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_72, 0, sizeof(unsigned int));
memset(&it_73, 0, sizeof(unsigned int));
                        hash_72=string_get_hash_key(((char*)key))%self->size;
                        it_73=hash_72;
                        while(_while_condtional12=(_Bool)1,                        _while_condtional12) {
                            if(_if_conditional133=self->item_existance[it_73],                            _if_conditional133) {
                                if(_if_conditional134=string_equals(self->keys[it_73],key),                                _if_conditional134) {
                                    __result55__ = __result_obj__ = self->items[it_73];
                                    if(default_value && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    return __result55__;
                                }
                                it_73++;
                                if(_if_conditional135=it_73>=self->size,                                _if_conditional135) {
                                    it_73=0;
                                }
                                else {
                                    if(_if_conditional136=it_73==hash_72,                                    _if_conditional136) {
                                        __result56__ = __result_obj__ = default_value;
                                        if(default_value && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        return __result56__;
                                    }
                                }
                            }
                            else {
                                __result57__ = __result_obj__ = default_value;
                                if(default_value && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result57__;
                            }
                        }
                        __result58__ = __result_obj__ = default_value;
                        if(default_value && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result58__;
                        if(default_value && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int it2_80;
struct list_item$1charp* it_81;
_Bool _while_condtional15;
_Bool _if_conditional143;
struct list$1charp* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_80, 0, sizeof(int));
memset(&it_81, 0, sizeof(struct list_item$1charp*));
                            it2_80=0;
                            it_81=self->head;
                            while(_while_condtional15=it_81!=((void*)0),                            _while_condtional15) {
                                if(_if_conditional143=string_equals(it_81->item,item),                                _if_conditional143) {
                                    list$1charp_delete(self,it2_80,it2_80+1);
                                    break;
                                }
                                it2_80++;
                                it_81=it_81->next;
                            }
                            __result62__ = __result_obj__ = self;
                            return __result62__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional146;
int tmp_82;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
struct list$1charp* __result59__;
_Bool _if_conditional150;
_Bool _if_conditional151;
struct list_item$1charp* it_85;
int i_86;
_Bool _while_condtional17;
_Bool _if_conditional152;
struct list_item$1charp* prev_it_87;
_Bool _if_conditional153;
_Bool _if_conditional154;
struct list_item$1charp* it_88;
int i_89;
_Bool _while_condtional18;
_Bool _if_conditional155;
_Bool _if_conditional156;
struct list_item$1charp* prev_it_90;
struct list_item$1charp* it_91;
struct list_item$1charp* head_prev_it_92;
struct list_item$1charp* tail_it_93;
int i_94;
_Bool _while_condtional19;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional159;
struct list_item$1charp* prev_it_95;
_Bool _if_conditional160;
_Bool _if_conditional161;
struct list$1charp* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
                                        if(_if_conditional144=head<0,                                        _if_conditional144) {
                                            head+=self->len;
                                        }
                                        if(_if_conditional145=tail<0,                                        _if_conditional145) {
                                            tail+=self->len+1;
                                        }
                                        if(_if_conditional146=head>tail,                                        _if_conditional146) {
                                            tmp_82=tail;
                                            tail=head;
                                            head=tmp_82;
                                        }
                                        if(_if_conditional147=head<0,                                        _if_conditional147) {
                                            head=0;
                                        }
                                        if(_if_conditional148=tail>self->len,                                        _if_conditional148) {
                                            tail=self->len;
                                        }
                                        if(_if_conditional149=head==tail,                                        _if_conditional149) {
                                            __result59__ = __result_obj__ = self;
                                            return __result59__;
                                        }
                                        if(_if_conditional150=head==0&&tail==self->len,                                        _if_conditional150) {
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            if(_if_conditional151=head==0,                                            _if_conditional151) {
                                                it_85=self->head;
                                                i_86=0;
                                                while(_while_condtional17=it_85!=((void*)0),                                                _while_condtional17) {
                                                    if(_if_conditional152=i_86<tail,                                                    _if_conditional152) {
                                                        prev_it_87=it_85;
                                                        it_85=it_85->next;
                                                        i_86++;
                                                        if(prev_it_87 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_87, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        self->len--;
                                                    }
                                                    else {
                                                        if(_if_conditional153=i_86==tail,                                                        _if_conditional153) {
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
                                                if(_if_conditional154=tail==self->len,                                                _if_conditional154) {
                                                    it_88=self->head;
                                                    i_89=0;
                                                    while(_while_condtional18=it_88!=((void*)0),                                                    _while_condtional18) {
                                                        if(_if_conditional155=i_89==head,                                                        _if_conditional155) {
                                                            self->tail=it_88->prev;
                                                            self->tail->next=((void*)0);
                                                        }
                                                        if(_if_conditional156=i_89>=head,                                                        _if_conditional156) {
                                                            prev_it_90=it_88;
                                                            it_88=it_88->next;
                                                            i_89++;
                                                            if(prev_it_90 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_90, (void*)0, (void*)0, 0, 0, 0, 0); }
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
                                                    while(_while_condtional19=it_91!=((void*)0),                                                    _while_condtional19) {
                                                        if(_if_conditional157=i_94==head,                                                        _if_conditional157) {
                                                            head_prev_it_92=it_91->prev;
                                                        }
                                                        if(_if_conditional158=i_94==tail,                                                        _if_conditional158) {
                                                            tail_it_93=it_91;
                                                        }
                                                        if(_if_conditional159=i_94>=head&&i_94<tail,                                                        _if_conditional159) {
                                                            prev_it_95=it_91;
                                                            it_91=it_91->next;
                                                            i_94++;
                                                            if(prev_it_95 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_95, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_91=it_91->next;
                                                            i_94++;
                                                        }
                                                    }
                                                    if(_if_conditional160=head_prev_it_92!=((void*)0),                                                    _if_conditional160) {
                                                        head_prev_it_92->next=tail_it_93;
                                                    }
                                                    if(_if_conditional161=tail_it_93!=((void*)0),                                                    _if_conditional161) {
                                                        tail_it_93->prev=head_prev_it_92;
                                                    }
                                                }
                                            }
                                        }
                                        __result61__ = __result_obj__ = self;
                                        return __result61__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_83;
_Bool _while_condtional16;
struct list_item$1charp* prev_it_84;
struct list$1charp* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_83, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_84, 0, sizeof(struct list_item$1charp*));
                                                it_83=self->head;
                                                while(_while_condtional16=it_83!=((void*)0),                                                _while_condtional16) {
                                                    prev_it_84=it_83;
                                                    it_83=it_83->next;
                                                    if(prev_it_84 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_84, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                }
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                __result60__ = __result_obj__ = self;
                                                return __result60__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional167;
char* result_97;
char* __result63__;
_Bool _if_conditional168;
char* __result64__;
char* result_98;
char* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_97, 0, sizeof(char*));
memset(&result_98, 0, sizeof(char*));
            if(_if_conditional167=self==((void*)0),            _if_conditional167) {
                memset(&result_97,0,sizeof(char*));
                __result63__ = __result_obj__ = result_97;
                return __result63__;
            }
            self->it=self->head;
            if(_if_conditional168=self->it,            _if_conditional168) {
                __result64__ = __result_obj__ = self->it->item;
                return __result64__;
            }
            memset(&result_98,0,sizeof(char*));
            __result65__ = __result_obj__ = result_98;
            return __result65__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result66__ = self==((void*)0)||self->it==((void*)0);
            return __result66__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional169;
char* result_100;
char* __result67__;
_Bool _if_conditional170;
char* __result68__;
char* result_101;
char* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_100, 0, sizeof(char*));
memset(&result_101, 0, sizeof(char*));
            if(_if_conditional169=self==((void*)0)||self->it==((void*)0),            _if_conditional169) {
                memset(&result_100,0,sizeof(char*));
                __result67__ = __result_obj__ = result_100;
                return __result67__;
            }
            self->it=self->it->next;
            if(_if_conditional170=self->it,            _if_conditional170) {
                __result68__ = __result_obj__ = self->it->item;
                return __result68__;
            }
            memset(&result_101,0,sizeof(char*));
            __result69__ = __result_obj__ = result_101;
            return __result69__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional173;
void* right_value86;
struct list_item$1charp* litem_102;
_Bool _if_conditional174;
void* right_value87;
struct list_item$1charp* litem_103;
void* right_value88;
struct list_item$1charp* litem_104;
struct list$1charp* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value86 = (void*)0;
memset(&litem_102, 0, sizeof(struct list_item$1charp*));
right_value87 = (void*)0;
memset(&litem_103, 0, sizeof(struct list_item$1charp*));
right_value88 = (void*)0;
memset(&litem_104, 0, sizeof(struct list_item$1charp*));
                if(_if_conditional173=self->len==0,                _if_conditional173) {
                    litem_102=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value86=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 282, "struct list_item$1charp"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value86);
                    if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value86, right_value86 = (void*)0;
                    __freed_obj__ = 0;
                    litem_102->prev=((void*)0);
                    litem_102->next=((void*)0);
                    litem_102->item=item;
                    self->tail=litem_102;
                    self->head=litem_102;
                }
                else {
                    if(_if_conditional174=self->len==1,                    _if_conditional174) {
                        litem_103=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value87=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 292, "struct list_item$1charp"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value87);
                        if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value87, right_value87 = (void*)0;
                        __freed_obj__ = 0;
                        litem_103->prev=self->head;
                        litem_103->next=((void*)0);
                        litem_103->item=item;
                        self->tail=litem_103;
                        self->head->next=litem_103;
                    }
                    else {
                        litem_104=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value88=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 302, "struct list_item$1charp"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value88);
                        if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value88, right_value88 = (void*)0;
                        __freed_obj__ = 0;
                        litem_104->prev=self->tail;
                        litem_104->next=((void*)0);
                        litem_104->item=item;
                        self->tail->next=litem_104;
                        self->tail=litem_104;
                    }
                }
                self->len++;
                __result70__ = __result_obj__ = self;
                return __result70__;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional181;
_Bool _if_conditional182;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional181=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional181) {
            if(self->c_value && !__freed_obj__) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional182=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional182) {
            if(self->type && !__freed_obj__) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional183;
void* right_value97;
struct list_item$1CVALUEph* litem_113;
struct CVALUE* __dec_obj39;
_Bool _if_conditional185;
void* right_value98;
struct list_item$1CVALUEph* litem_114;
struct CVALUE* __dec_obj40;
void* right_value99;
struct list_item$1CVALUEph* litem_115;
struct CVALUE* __dec_obj41;
struct list$1CVALUEph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value97 = (void*)0;
memset(&litem_113, 0, sizeof(struct list_item$1CVALUEph*));
right_value98 = (void*)0;
memset(&litem_114, 0, sizeof(struct list_item$1CVALUEph*));
right_value99 = (void*)0;
memset(&litem_115, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional183=self->len==0,        _if_conditional183) {
            litem_113=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value97=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 282, "struct list_item$1CVALUEph"))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97);
            if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value97, right_value97 = (void*)0;
            __freed_obj__ = 0;
            litem_113->prev=((void*)0);
            litem_113->next=((void*)0);
            __dec_obj39=litem_113->item;
            litem_113->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj39) { come_call_finalizer(CVALUE_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0); }
            self->tail=litem_113;
            self->head=litem_113;
        }
        else {
            if(_if_conditional185=self->len==1,            _if_conditional185) {
                litem_114=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value98=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 292, "struct list_item$1CVALUEph"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value98);
                if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value98, right_value98 = (void*)0;
                __freed_obj__ = 0;
                litem_114->prev=self->head;
                litem_114->next=((void*)0);
                __dec_obj40=litem_114->item;
                litem_114->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj40) { come_call_finalizer(CVALUE_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail=litem_114;
                self->head->next=litem_114;
            }
            else {
                litem_115=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value99=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 302, "struct list_item$1CVALUEph"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value99);
                if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value99, right_value99 = (void*)0;
                __freed_obj__ = 0;
                litem_115->prev=self->tail;
                litem_115->next=((void*)0);
                __dec_obj41=litem_115->item;
                litem_115->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj41) { come_call_finalizer(CVALUE_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail->next=litem_115;
                self->tail=litem_115;
            }
        }
        self->len++;
        __result72__ = __result_obj__ = self;
        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result72__;
        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional184;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional184=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional184) {
                    if(self->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value100;
struct sNode* __dec_obj42;
void* right_value101;
char* __dec_obj43;
void* right_value111;
struct list$1tuple2$2charphsNodephph* __dec_obj49;
void* right_value112;
struct buffer* __dec_obj50;
void* right_value113;
char* __dec_obj51;
struct sMethodCallNode* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value100 = (void*)0;
right_value101 = (void*)0;
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
    __dec_obj42=self->obj;
    self->obj=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value100=sNode_clone(obj))));
    if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, ((struct sNode*)__dec_obj42)->finalize, ((struct sNode*)__dec_obj42)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { right_value100 = come_decrement_ref_count(right_value100, ((struct sNode*)right_value100)->finalize, ((struct sNode*)right_value100)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value100, right_value100 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj43=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(((char*)(right_value101=__builtin_string(fun_name))));
    if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value101);
    if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { right_value101 = come_decrement_ref_count(right_value101, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value101, right_value101 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj49=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value111=list$1tuple2$2charphsNodephphp_clone(params))));
    if(__dec_obj49) { come_call_finalizer(list$1tuple2$2charphsNodephph_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value111);
    if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value111, right_value111 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj50=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value112=buffer_clone(method_block))));
    if(__dec_obj50) { come_call_finalizer(buffer_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value112);
    if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value112, right_value112 = (void*)0;
    __freed_obj__ = 0;
    self->sline=info->sline;
    __dec_obj51=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value113=__builtin_string(info->sname))));
    if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
    if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { right_value113 = come_decrement_ref_count(right_value113, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value113, right_value113 = (void*)0;
    __freed_obj__ = 0;
    self->method_block_sline=method_block_sline;
    __result80__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sMethodCallNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0); } 
    if(params && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,params, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result80__;
    if(self && !__freed_obj__) { come_call_finalizer(sMethodCallNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0); } 
    if(params && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,params, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional186;
struct list$1tuple2$2charphsNodephph* __result74__;
void* right_value102;
void* right_value103;
struct list$1tuple2$2charphsNodephph* result_118;
struct list_item$1tuple2$2charphsNodephph* it_119;
_Bool _while_condtional22;
void* right_value110;
struct list$1tuple2$2charphsNodephph* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value102 = (void*)0;
right_value103 = (void*)0;
memset(&result_118, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_119, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value110 = (void*)0;
        if(_if_conditional186=self==((void*)0),        _if_conditional186) {
            __result74__ = __result_obj__ = ((void*)0);
            return __result74__;
        }
        result_118=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value103=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value102=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 198, "struct list$1tuple2$2charphsNodephph"))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value102);
        if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value102, right_value102 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value103);
        if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value103, right_value103 = (void*)0;
        __freed_obj__ = 0;
        it_119=self->head;
        while(_while_condtional22=it_119!=((void*)0),        _while_condtional22) {
            list$1tuple2$2charphsNodephph_add(result_118,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value110=tuple2$2charphsNodephp_clone(it_119->item)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value110);
            if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value110, right_value110 = (void*)0;
            __freed_obj__ = 0;
            it_119=it_119->next;
        }
        __result79__ = __result_obj__ = result_118;
        if(result_118 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,result_118, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result79__;
        if(result_118 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,result_118, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1tuple2$2charphsNodephph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result75__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result75__;
            if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphsNodephph* it_116;
_Bool _while_condtional21;
struct list_item$1tuple2$2charphsNodephph* prev_it_117;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_116, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&prev_it_117, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                it_116=self->head;
                while(_while_condtional21=it_116!=((void*)0),                _while_condtional21) {
                    prev_it_117=it_116;
                    it_116=it_116->next;
                    if(prev_it_117 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,prev_it_117, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional187;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional187=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional187) {
                            if(self->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional188;
_Bool _if_conditional189;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional188=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional188) {
                                    if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(_if_conditional189=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional189) {
                                    if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0); } 
                                }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional190;
void* right_value104;
struct list_item$1tuple2$2charphsNodephph* litem_120;
struct tuple2$2charphsNodeph* __dec_obj44;
_Bool _if_conditional193;
void* right_value105;
struct list_item$1tuple2$2charphsNodephph* litem_121;
struct tuple2$2charphsNodeph* __dec_obj45;
void* right_value106;
struct list_item$1tuple2$2charphsNodephph* litem_122;
struct tuple2$2charphsNodeph* __dec_obj46;
struct list$1tuple2$2charphsNodephph* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value104 = (void*)0;
memset(&litem_120, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value105 = (void*)0;
memset(&litem_121, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value106 = (void*)0;
memset(&litem_122, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                if(_if_conditional190=self->len==0,                _if_conditional190) {
                    litem_120=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value104=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 212, "struct list_item$1tuple2$2charphsNodephph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value104);
                    if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value104, right_value104 = (void*)0;
                    __freed_obj__ = 0;
                    litem_120->prev=((void*)0);
                    litem_120->next=((void*)0);
                    __dec_obj44=litem_120->item;
                    litem_120->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    if(__dec_obj44) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->tail=litem_120;
                    self->head=litem_120;
                }
                else {
                    if(_if_conditional193=self->len==1,                    _if_conditional193) {
                        litem_121=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value105=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 222, "struct list_item$1tuple2$2charphsNodephph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
                        if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value105, right_value105 = (void*)0;
                        __freed_obj__ = 0;
                        litem_121->prev=self->head;
                        litem_121->next=((void*)0);
                        __dec_obj45=litem_121->item;
                        litem_121->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        if(__dec_obj45) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail=litem_121;
                        self->head->next=litem_121;
                    }
                    else {
                        litem_122=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value106=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 232, "struct list_item$1tuple2$2charphsNodephph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
                        if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value106, right_value106 = (void*)0;
                        __freed_obj__ = 0;
                        litem_122->prev=self->tail;
                        litem_122->next=((void*)0);
                        __dec_obj46=litem_122->item;
                        litem_122->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        if(__dec_obj46) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail->next=litem_122;
                        self->tail=litem_122;
                    }
                }
                self->len++;
                __result76__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result76__;
                if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional191;
_Bool _if_conditional192;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional191=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional191) {
                            if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        if(_if_conditional192=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional192) {
                            if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0); } 
                        }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional194;
struct tuple2$2charphsNodeph* __result77__;
void* right_value107;
struct tuple2$2charphsNodeph* result_123;
_Bool _if_conditional195;
void* right_value108;
char* __dec_obj47;
_Bool _if_conditional196;
void* right_value109;
struct sNode* __dec_obj48;
struct tuple2$2charphsNodeph* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value107 = (void*)0;
memset(&result_123, 0, sizeof(struct tuple2$2charphsNodeph*));
right_value108 = (void*)0;
right_value109 = (void*)0;
                if(_if_conditional194=self==(void*)0,                _if_conditional194) {
                    __result77__ = __result_obj__ = (void*)0;
                    return __result77__;
                }
                result_123=(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value107=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "struct tuple2$2charphsNodeph"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
                if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodeph_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value107, right_value107 = (void*)0;
                __freed_obj__ = 0;
                if(_if_conditional195=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional195) {
                    __dec_obj47=result_123->v1;
                    result_123->v1=(char*)come_increment_ref_count(((char*)(right_value108=string_clone(self->v1))));
                    if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value108);
                    if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value108, right_value108 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional196=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional196) {
                    __dec_obj48=result_123->v2;
                    result_123->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value109=sNode_clone(self->v2))));
                    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
                    if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { right_value109 = come_decrement_ref_count(right_value109, ((struct sNode*)right_value109)->finalize, ((struct sNode*)right_value109)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value109, right_value109 = (void*)0;
                    __freed_obj__ = 0;
                }
                __result78__ = __result_obj__ = result_123;
                if(result_123 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodeph_finalize,result_123, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result78__;
                if(result_123 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodeph_finalize,result_123, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

int sMethodCallNode_sline(struct sMethodCallNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result81__ = self->sline;
    return __result81__;
}

char* sMethodCallNode_sname(struct sMethodCallNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value114;
char* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value114 = (void*)0;
    __result82__ = __result_obj__ = ((char*)(right_value114=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value114);
    if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { right_value114 = come_decrement_ref_count(right_value114, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value114, right_value114 = (void*)0;
    __freed_obj__ = 0;
    return __result82__;
}

char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value115;
char* none_generics_name_124;
void* right_value116;
char* fun_name2_125;
void* right_value117;
char* fun_name3_126;
void* right_value118;
struct sGenericsFun* generics_fun_129;
_Bool _if_conditional215;
void* right_value119;
_Bool _if_conditional216;
void* right_value120;
char* __result87__;
char* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value115 = (void*)0;
memset(&none_generics_name_124, 0, sizeof(char*));
right_value116 = (void*)0;
memset(&fun_name2_125, 0, sizeof(char*));
right_value117 = (void*)0;
memset(&fun_name3_126, 0, sizeof(char*));
right_value118 = (void*)0;
memset(&generics_fun_129, 0, sizeof(struct sGenericsFun*));
right_value119 = (void*)0;
right_value120 = (void*)0;
    none_generics_name_124=(char*)come_increment_ref_count(((char*)(right_value115=get_none_generics_name(type->mClass->mName))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
    if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value115, right_value115 = (void*)0;
    __freed_obj__ = 0;
    fun_name2_125=(char*)come_increment_ref_count(((char*)(right_value116=create_method_name(type,(_Bool)0,fun_name,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value116);
    if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { right_value116 = come_decrement_ref_count(right_value116, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value116, right_value116 = (void*)0;
    __freed_obj__ = 0;
    fun_name3_126=(char*)come_increment_ref_count(((char*)(right_value117=xsprintf("%s_%s",none_generics_name_124,fun_name))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
    if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value117, right_value117 = (void*)0;
    __freed_obj__ = 0;
    generics_fun_129=((struct sGenericsFun*)(right_value118=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_126,((void*)0))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value118, right_value118 = (void*)0;
    __freed_obj__ = 0;
    if(_if_conditional215=generics_fun_129,    _if_conditional215) {
        if(_if_conditional216=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value119=__builtin_string(fun_name2_125)))),generics_fun_129,type,info),        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value119),
        (right_value119 && right_value119 != __result_obj__ && !__freed_obj__) ? right_value119 = come_decrement_ref_count(right_value119, (void*)0, (void*)0, 1, 0, 0):0,
        __right_value_freed_obj[0] = right_value119, right_value119 = (void*)0, 
        __freed_obj__ = 0, 
        _if_conditional216) {
            err_msg(info,"%s not found",fun_name3_126);
            __result87__ = __result_obj__ = ((char*)(right_value120=__builtin_string("")));
            if(fun_name && !__freed_obj__) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
            if(none_generics_name_124 && !__freed_obj__) { none_generics_name_124 = come_decrement_ref_count(none_generics_name_124, (void*)0, (void*)0, 0, 0, 0); }
            if(fun_name2_125 && !__freed_obj__) { fun_name2_125 = come_decrement_ref_count(fun_name2_125, (void*)0, (void*)0, 0, 0, 0); }
            if(fun_name3_126 && !__freed_obj__) { fun_name3_126 = come_decrement_ref_count(fun_name3_126, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120);
            if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { right_value120 = come_decrement_ref_count(right_value120, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value120, right_value120 = (void*)0;
            __freed_obj__ = 0;
            return __result87__;
        }
    }
    __result88__ = __result_obj__ = fun_name2_125;
    if(fun_name && !__freed_obj__) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
    if(none_generics_name_124 && !__freed_obj__) { none_generics_name_124 = come_decrement_ref_count(none_generics_name_124, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_name2_125 && !__freed_obj__) { fun_name2_125 = come_decrement_ref_count(fun_name2_125, (void*)0, (void*)0, 0, 1, 0); }
    if(fun_name3_126 && !__freed_obj__) { fun_name3_126 = come_decrement_ref_count(fun_name3_126, (void*)0, (void*)0, 0, 0, 0); }
    return __result88__;
    if(fun_name && !__freed_obj__) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
    if(none_generics_name_124 && !__freed_obj__) { none_generics_name_124 = come_decrement_ref_count(none_generics_name_124, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_name2_125 && !__freed_obj__) { fun_name2_125 = come_decrement_ref_count(fun_name2_125, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_name3_126 && !__freed_obj__) { fun_name3_126 = come_decrement_ref_count(fun_name3_126, (void*)0, (void*)0, 0, 0, 0); }
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_127;
unsigned int it_128;
_Bool _while_condtional23;
_Bool _if_conditional202;
_Bool _if_conditional203;
struct sGenericsFun* __result83__;
_Bool _if_conditional213;
_Bool _if_conditional214;
struct sGenericsFun* __result84__;
struct sGenericsFun* __result85__;
struct sGenericsFun* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_127, 0, sizeof(unsigned int));
memset(&it_128, 0, sizeof(unsigned int));
        hash_127=string_get_hash_key(((char*)key))%self->size;
        it_128=hash_127;
        while(_while_condtional23=(_Bool)1,        _while_condtional23) {
            if(_if_conditional202=self->item_existance[it_128],            _if_conditional202) {
                if(_if_conditional203=string_equals(self->keys[it_128],key),                _if_conditional203) {
                    __result83__ = __result_obj__ = self->items[it_128];
                    if(default_value && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result83__;
                }
                it_128++;
                if(_if_conditional213=it_128>=self->size,                _if_conditional213) {
                    it_128=0;
                }
                else {
                    if(_if_conditional214=it_128==hash_127,                    _if_conditional214) {
                        __result84__ = __result_obj__ = default_value;
                        if(default_value && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result84__;
                    }
                }
            }
            else {
                __result85__ = __result_obj__ = default_value;
                if(default_value && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result85__;
            }
        }
        __result86__ = __result_obj__ = default_value;
        if(default_value && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result86__;
        if(default_value && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional204;
_Bool _if_conditional205;
_Bool _if_conditional206;
_Bool _if_conditional207;
_Bool _if_conditional208;
_Bool _if_conditional209;
_Bool _if_conditional210;
_Bool _if_conditional211;
_Bool _if_conditional212;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional204=self!=((void*)0)&&self->mImplType!=((void*)0),                        _if_conditional204) {
                            if(self->mImplType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mImplType, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        if(_if_conditional205=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                        _if_conditional205) {
                            if(self->mGenericsTypeNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        if(_if_conditional206=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional206) {
                            if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        if(_if_conditional207=self!=((void*)0)&&self->mResultType!=((void*)0),                        _if_conditional207) {
                            if(self->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        if(_if_conditional208=self!=((void*)0)&&self->mParamTypes!=((void*)0),                        _if_conditional208) {
                            if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        if(_if_conditional209=self!=((void*)0)&&self->mParamNames!=((void*)0),                        _if_conditional209) {
                            if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        if(_if_conditional210=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                        _if_conditional210) {
                            if(self->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        if(_if_conditional211=self!=((void*)0)&&self->mBlock!=((void*)0),                        _if_conditional211) {
                            if(self->mBlock && !__freed_obj__) { self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        if(_if_conditional212=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                        _if_conditional212) {
                            if(self->mGenericsSName && !__freed_obj__) { self->mGenericsSName = come_decrement_ref_count(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

_Bool sMethodCallNode_terminated(struct sMethodCallNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional217;
_Bool __result89__;
_Bool __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional217=self->method_block,    _if_conditional217) {
        __result89__ = (_Bool)1;
        return __result89__;
    }
    else {
        __result90__ = (_Bool)0;
        return __result90__;
    }
}

char* sMethodCallNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value121;
char* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value121 = (void*)0;
    __result91__ = __result_obj__ = ((char*)(right_value121=__builtin_string("sMethodCallNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value121);
    if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { right_value121 = come_decrement_ref_count(right_value121, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value121, right_value121 = (void*)0;
    __freed_obj__ = 0;
    return __result91__;
}

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* fun_name_130;
struct list$1tuple2$2charphsNodephph* params_131;
struct sNode* obj_132;
struct buffer* method_block_133;
int method_block_sline_134;
_Bool _if_conditional218;
_Bool __result92__;
void* right_value122;
struct CVALUE* obj_value_135;
void* right_value123;
struct sType* obj_type_136;
struct sClass* klass_137;
_Bool calling_dynamic_method_138;
struct sType* lambda_type_139;
struct list$1tuple2$2charphsTypephph* o2_saved_140;
struct tuple2$2charphsTypeph* it_143;
_Bool _for_condtionalA7;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* field_name_146;
struct sType* field_type_147;
_Bool _if_conditional223;
_Bool _if_conditional224;
void* right_value124;
struct sType* result_type_148;
void* right_value125;
void* right_value126;
struct list$1CVALUEph* come_params_151;
int i_152;
struct list$1tuple2$2charphsNodephph* o2_saved_153;
struct tuple2$2charphsNodeph* it_156;
_Bool _for_condtionalA8;
struct tuple2$2charphsNodeph* multiple_assign_var2;
char* label_159;
struct sNode* node_160;
_Bool _if_conditional229;
_Bool _if_conditional230;
_Bool __result108__;
void* right_value127;
struct CVALUE* come_value_161;
void* right_value128;
void* right_value129;
void* right_value130;
void* right_value131;
void* right_value132;
_Bool _if_conditional233;
void* right_value133;
void* right_value134;
void* right_value135;
struct buffer* buf_165;
void* right_value136;
int j_166;
struct list$1CVALUEph* o2_saved_167;
struct CVALUE* it_170;
_Bool _for_condtionalA9;
_Bool _if_conditional238;
void* right_value137;
char* __dec_obj52;
_Bool _if_conditional239;
void* right_value138;
struct CVALUE* come_value2_173;
void* right_value139;
char* __dec_obj53;
void* right_value140;
struct sType* result_type2_174;
_Bool _if_conditional240;
void* right_value141;
void* right_value142;
char* __dec_obj54;
void* right_value143;
struct sType* __dec_obj55;
void* right_value144;
void* right_value145;
void* right_value146;
char* generics_fun_name_175;
struct sFun* fun_176;
int i_177;
_Bool _for_condtionalA10;
void* right_value147;
char* new_fun_name_178;
void* right_value150;
_Bool _if_conditional261;
void* right_value151;
char* __dec_obj57;
_Bool _if_conditional262;
void* right_value152;
_Bool _if_conditional267;
void* right_value153;
void* right_value154;
char* __dec_obj58;
void* right_value155;
_Bool _if_conditional268;
_Bool __result128__;
void* right_value156;
struct sType* result_type_184;
void* right_value157;
struct sType* result_type2_185;
void* right_value158;
void* right_value159;
struct list$1sTypeph* param_types_186;
struct list$1sTypeph* o2_saved_187;
struct sType* it_190;
_Bool _for_condtionalA11;
_Bool _if_conditional273;
void* right_value163;
struct sType* it2_196;
void* right_value164;
void* right_value165;
void* right_value166;
struct list$1CVALUEph* come_params_197;
void* right_value167;
void* right_value173;
struct map$2charphCVALUEph* label_params_201;
int i_202;
struct list$1tuple2$2charphsNodephph* o2_saved_203;
struct tuple2$2charphsNodeph* it_204;
_Bool _for_condtionalA15;
struct tuple2$2charphsNodeph* multiple_assign_var3;
char* label_205;
struct sNode* node_206;
_Bool _if_conditional280;
void* right_value174;
void* right_value175;
void* right_value176;
void* right_value177;
void* right_value178;
_Bool _if_conditional281;
void* right_value179;
void* right_value180;
_Bool _if_conditional282;
void* right_value181;
_Bool _if_conditional285;
_Bool __result141__;
void* right_value182;
struct CVALUE* come_value_210;
_Bool _if_conditional286;
int n_211;
struct list$1charph* o2_saved_212;
char* it_215;
_Bool _for_condtionalA16;
_Bool _if_conditional291;
void* right_value183;
_Bool _if_conditional292;
void* right_value184;
void* right_value185;
void* right_value186;
void* right_value187;
void* right_value188;
void* right_value189;
_Bool _if_conditional293;
void* right_value190;
void* right_value191;
_Bool _if_conditional294;
void* right_value192;
void* right_value193;
void* right_value194;
void* right_value195;
void* right_value196;
void* right_value197;
_Bool _if_conditional295;
void* right_value198;
_Bool _if_conditional296;
void* right_value204;
_Bool _if_conditional319;
_Bool _for_condtionalA19;
void* right_value205;
void* right_value206;
char* default_param_239;
void* right_value207;
char* param_name_240;
void* right_value210;
struct CVALUE* come_value_244;
_Bool _if_conditional325;
struct buffer* source_245;
char* p_246;
char* head_247;
int sline_248;
void* right_value211;
struct buffer* __dec_obj64;
void* right_value212;
struct sNode* node_249;
_Bool _if_conditional326;
_Bool __result168__;
struct buffer* __dec_obj65;
void* right_value213;
struct CVALUE* come_value_250;
void* right_value214;
_Bool _if_conditional327;
void* right_value215;
void* right_value216;
void* right_value217;
void* right_value218;
void* right_value219;
void* right_value220;
_Bool _if_conditional328;
void* right_value221;
_Bool _if_conditional329;
_Bool __result169__;
_Bool _if_conditional330;
_Bool _for_condtionalA20;
void* right_value222;
char* param_name_251;
void* right_value223;
struct CVALUE* come_value_252;
_Bool _if_conditional331;
void* right_value227;
_Bool _if_conditional339;
void* right_value228;
void* right_value229;
struct sNode* _inf_value1;
struct sCurrentNode* _inf_obj_value1;
void* right_value232;
struct sNode* current_stack_frame_node_257;
_Bool _if_conditional344;
_Bool __result178__;
void* right_value233;
struct CVALUE* come_value_258;
void* right_value234;
void* right_value235;
struct buffer* method_block2_259;
void* right_value236;
void* right_value237;
struct sType* method_block_type_260;
void* right_value238;
char* class_name_261;
void* right_value239;
void* right_value242;
struct sClass* current_stack_frame_struct_265;
void* right_value243;
_Bool _if_conditional350;
_Bool __result184__;
void* right_value244;
struct sType* result_type_266;
struct list$1sTypeph* param_types_267;
struct list$1charph* param_names_268;
void* right_value245;
void* right_value246;
struct buffer* all_alhabet_sname_269;
char* p_270;
_Bool _while_condtional35;
_Bool _if_conditional351;
void* right_value247;
void* right_value248;
void* right_value249;
int i_271;
struct list$1sTypeph* o2_saved_272;
struct sType* it_273;
_Bool _for_condtionalA21;
struct sType* param_type_274;
_Bool _if_conditional352;
void* right_value250;
char* param_name_275;
void* right_value251;
void* right_value252;
_Bool _if_conditional353;
void* right_value253;
char* param_name_276;
void* right_value254;
void* right_value255;
void* right_value256;
char* param_name_277;
void* right_value257;
void* right_value258;
_Bool _if_conditional354;
void* right_value259;
struct buffer* source3_278;
char* p_279;
char* head_280;
int sline_281;
struct buffer* __dec_obj71;
void* right_value260;
struct sNode* node_282;
_Bool _if_conditional355;
_Bool __result185__;
void* right_value261;
void* right_value262;
char* method_block_name_283;
void* right_value263;
struct CVALUE* come_value2_284;
void* right_value264;
struct sFun* fun2_285;
_Bool _if_conditional356;
_Bool __result186__;
struct sType* method_block_type2_286;
void* right_value265;
char* __dec_obj72;
void* right_value266;
struct sType* __dec_obj73;
struct buffer* __dec_obj74;
void* right_value267;
void* right_value268;
struct buffer* buf_287;
int j_288;
struct list$1CVALUEph* o2_saved_289;
struct CVALUE* it_290;
_Bool _for_condtionalA22;
_Bool _if_conditional357;
void* right_value269;
struct CVALUE* come_value2_291;
void* right_value270;
char* __dec_obj75;
void* right_value271;
struct sType* __dec_obj76;
_Bool _if_conditional358;
void* right_value272;
char* __dec_obj77;
void* right_value273;
char* __dec_obj78;
_Bool _if_conditional359;
void* right_value274;
char* var_name_292;
void* right_value275;
struct sType* result_type_293;
void* right_value276;
struct sType* result_type2_294;
struct sType* result_type3_295;
_Bool _if_conditional360;
_Bool _if_conditional361;
_Bool _if_conditional362;
void* right_value277;
void* right_value278;
void* right_value279;
void* right_value280;
void* right_value281;
void* right_value282;
void* right_value283;
void* right_value284;
void* right_value285;
void* right_value286;
void* right_value287;
_Bool _if_conditional363;
void* right_value288;
void* right_value289;
void* right_value290;
void* right_value291;
void* right_value292;
void* right_value293;
void* right_value294;
_Bool __result187__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&fun_name_130, 0, sizeof(char*));
memset(&params_131, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&obj_132, 0, sizeof(struct sNode*));
memset(&method_block_133, 0, sizeof(struct buffer*));
memset(&method_block_sline_134, 0, sizeof(int));
right_value122 = (void*)0;
memset(&obj_value_135, 0, sizeof(struct CVALUE*));
right_value123 = (void*)0;
memset(&obj_type_136, 0, sizeof(struct sType*));
memset(&klass_137, 0, sizeof(struct sClass*));
memset(&calling_dynamic_method_138, 0, sizeof(_Bool));
memset(&lambda_type_139, 0, sizeof(struct sType*));
memset(&o2_saved_140, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_143, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_146, 0, sizeof(char*));
memset(&field_type_147, 0, sizeof(struct sType*));
memset(&field_name_146, 0, sizeof(char*));
memset(&field_type_147, 0, sizeof(struct sType*));
right_value124 = (void*)0;
memset(&result_type_148, 0, sizeof(struct sType*));
right_value125 = (void*)0;
right_value126 = (void*)0;
memset(&come_params_151, 0, sizeof(struct list$1CVALUEph*));
memset(&i_152, 0, sizeof(int));
memset(&o2_saved_153, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_156, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_159, 0, sizeof(char*));
memset(&node_160, 0, sizeof(struct sNode*));
memset(&label_159, 0, sizeof(char*));
memset(&node_160, 0, sizeof(struct sNode*));
right_value127 = (void*)0;
memset(&come_value_161, 0, sizeof(struct CVALUE*));
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
right_value134 = (void*)0;
right_value135 = (void*)0;
memset(&buf_165, 0, sizeof(struct buffer*));
right_value136 = (void*)0;
memset(&j_166, 0, sizeof(int));
memset(&o2_saved_167, 0, sizeof(struct list$1CVALUEph*));
memset(&it_170, 0, sizeof(struct CVALUE*));
right_value137 = (void*)0;
right_value138 = (void*)0;
memset(&come_value2_173, 0, sizeof(struct CVALUE*));
right_value139 = (void*)0;
right_value140 = (void*)0;
memset(&result_type2_174, 0, sizeof(struct sType*));
right_value141 = (void*)0;
right_value142 = (void*)0;
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
right_value146 = (void*)0;
memset(&generics_fun_name_175, 0, sizeof(char*));
memset(&fun_176, 0, sizeof(struct sFun*));
memset(&i_177, 0, sizeof(int));
right_value147 = (void*)0;
memset(&new_fun_name_178, 0, sizeof(char*));
right_value150 = (void*)0;
right_value151 = (void*)0;
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
right_value155 = (void*)0;
right_value156 = (void*)0;
memset(&result_type_184, 0, sizeof(struct sType*));
right_value157 = (void*)0;
memset(&result_type2_185, 0, sizeof(struct sType*));
right_value158 = (void*)0;
right_value159 = (void*)0;
memset(&param_types_186, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_187, 0, sizeof(struct list$1sTypeph*));
memset(&it_190, 0, sizeof(struct sType*));
right_value163 = (void*)0;
memset(&it2_196, 0, sizeof(struct sType*));
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
memset(&come_params_197, 0, sizeof(struct list$1CVALUEph*));
right_value167 = (void*)0;
right_value173 = (void*)0;
memset(&label_params_201, 0, sizeof(struct map$2charphCVALUEph*));
memset(&i_202, 0, sizeof(int));
memset(&o2_saved_203, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_204, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_205, 0, sizeof(char*));
memset(&node_206, 0, sizeof(struct sNode*));
memset(&label_205, 0, sizeof(char*));
memset(&node_206, 0, sizeof(struct sNode*));
right_value174 = (void*)0;
right_value175 = (void*)0;
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
right_value182 = (void*)0;
memset(&come_value_210, 0, sizeof(struct CVALUE*));
memset(&n_211, 0, sizeof(int));
memset(&o2_saved_212, 0, sizeof(struct list$1charph*));
memset(&it_215, 0, sizeof(char*));
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value185 = (void*)0;
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
right_value198 = (void*)0;
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
memset(&default_param_239, 0, sizeof(char*));
right_value207 = (void*)0;
memset(&param_name_240, 0, sizeof(char*));
right_value210 = (void*)0;
memset(&come_value_244, 0, sizeof(struct CVALUE*));
memset(&source_245, 0, sizeof(struct buffer*));
memset(&p_246, 0, sizeof(char*));
memset(&head_247, 0, sizeof(char*));
memset(&sline_248, 0, sizeof(int));
right_value211 = (void*)0;
right_value212 = (void*)0;
memset(&node_249, 0, sizeof(struct sNode*));
right_value213 = (void*)0;
memset(&come_value_250, 0, sizeof(struct CVALUE*));
right_value214 = (void*)0;
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
right_value218 = (void*)0;
right_value219 = (void*)0;
right_value220 = (void*)0;
right_value221 = (void*)0;
right_value222 = (void*)0;
memset(&param_name_251, 0, sizeof(char*));
right_value223 = (void*)0;
memset(&come_value_252, 0, sizeof(struct CVALUE*));
right_value227 = (void*)0;
right_value228 = (void*)0;
right_value229 = (void*)0;
right_value232 = (void*)0;
memset(&current_stack_frame_node_257, 0, sizeof(struct sNode*));
right_value233 = (void*)0;
memset(&come_value_258, 0, sizeof(struct CVALUE*));
right_value234 = (void*)0;
right_value235 = (void*)0;
memset(&method_block2_259, 0, sizeof(struct buffer*));
right_value236 = (void*)0;
right_value237 = (void*)0;
memset(&method_block_type_260, 0, sizeof(struct sType*));
right_value238 = (void*)0;
memset(&class_name_261, 0, sizeof(char*));
right_value239 = (void*)0;
right_value242 = (void*)0;
memset(&current_stack_frame_struct_265, 0, sizeof(struct sClass*));
right_value243 = (void*)0;
right_value244 = (void*)0;
memset(&result_type_266, 0, sizeof(struct sType*));
memset(&param_types_267, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_268, 0, sizeof(struct list$1charph*));
right_value245 = (void*)0;
right_value246 = (void*)0;
memset(&all_alhabet_sname_269, 0, sizeof(struct buffer*));
memset(&p_270, 0, sizeof(char*));
right_value247 = (void*)0;
right_value248 = (void*)0;
right_value249 = (void*)0;
memset(&i_271, 0, sizeof(int));
memset(&o2_saved_272, 0, sizeof(struct list$1sTypeph*));
memset(&it_273, 0, sizeof(struct sType*));
memset(&param_type_274, 0, sizeof(struct sType*));
right_value250 = (void*)0;
memset(&param_name_275, 0, sizeof(char*));
right_value251 = (void*)0;
right_value252 = (void*)0;
right_value253 = (void*)0;
memset(&param_name_276, 0, sizeof(char*));
right_value254 = (void*)0;
right_value255 = (void*)0;
right_value256 = (void*)0;
memset(&param_name_277, 0, sizeof(char*));
right_value257 = (void*)0;
right_value258 = (void*)0;
right_value259 = (void*)0;
memset(&source3_278, 0, sizeof(struct buffer*));
memset(&p_279, 0, sizeof(char*));
memset(&head_280, 0, sizeof(char*));
memset(&sline_281, 0, sizeof(int));
right_value260 = (void*)0;
memset(&node_282, 0, sizeof(struct sNode*));
right_value261 = (void*)0;
right_value262 = (void*)0;
memset(&method_block_name_283, 0, sizeof(char*));
right_value263 = (void*)0;
memset(&come_value2_284, 0, sizeof(struct CVALUE*));
right_value264 = (void*)0;
memset(&fun2_285, 0, sizeof(struct sFun*));
memset(&method_block_type2_286, 0, sizeof(struct sType*));
right_value265 = (void*)0;
right_value266 = (void*)0;
right_value267 = (void*)0;
right_value268 = (void*)0;
memset(&buf_287, 0, sizeof(struct buffer*));
memset(&j_288, 0, sizeof(int));
memset(&o2_saved_289, 0, sizeof(struct list$1CVALUEph*));
memset(&it_290, 0, sizeof(struct CVALUE*));
right_value269 = (void*)0;
memset(&come_value2_291, 0, sizeof(struct CVALUE*));
right_value270 = (void*)0;
right_value271 = (void*)0;
right_value272 = (void*)0;
right_value273 = (void*)0;
right_value274 = (void*)0;
memset(&var_name_292, 0, sizeof(char*));
right_value275 = (void*)0;
memset(&result_type_293, 0, sizeof(struct sType*));
right_value276 = (void*)0;
memset(&result_type2_294, 0, sizeof(struct sType*));
memset(&result_type3_295, 0, sizeof(struct sType*));
right_value277 = (void*)0;
right_value278 = (void*)0;
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
    fun_name_130=self->fun_name;
    params_131=self->params;
    obj_132=self->obj;
    method_block_133=self->method_block;
    method_block_sline_134=self->method_block_sline;
    if(_if_conditional218=!node_compile(obj_132,info),    _if_conditional218) {
        __result92__ = (_Bool)0;
        return __result92__;
    }
    obj_value_135=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value122=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value122, right_value122 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    obj_type_136=(struct sType*)come_increment_ref_count(((struct sType*)(right_value123=sType_clone(obj_value_135->type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value123);
    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value123, right_value123 = (void*)0;
    __freed_obj__ = 0;
    klass_137=obj_type_136->mClass;
    calling_dynamic_method_138=(_Bool)0;
    lambda_type_139=((void*)0);
    for(
    o2_saved_140=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_137->mFields)),it_143=list$1tuple2$2charphsTypephph_begin((o2_saved_140)) ,    0;    _for_condtionalA7=    !list$1tuple2$2charphsTypephph_end((o2_saved_140)) ,    _for_condtionalA7;    it_143=list$1tuple2$2charphsTypephph_next((o2_saved_140)) ,    0    ){
        multiple_assign_var1=it_143;
        field_name_146=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        field_type_147=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        if(_if_conditional223=string_operator_equals(field_name_146,fun_name_130)&&string_operator_equals(field_type_147->mClass->mName,"lambda"),        _if_conditional223) {
            calling_dynamic_method_138=(_Bool)1;
            lambda_type_139=field_type_147;
            if(field_name_146 && !__freed_obj__) { field_name_146 = come_decrement_ref_count(field_name_146, (void*)0, (void*)0, 0, 0, 0); }
            if(field_type_147 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_147, (void*)0, (void*)0, 0, 0, 0, 0); }
            break;
        }
        if(field_name_146 && !__freed_obj__) { field_name_146 = come_decrement_ref_count(field_name_146, (void*)0, (void*)0, 0, 0, 0); }
        if(field_type_147 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_147, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(o2_saved_140 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_140, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(_if_conditional224=calling_dynamic_method_138,    _if_conditional224) {
        result_type_148=(struct sType*)come_increment_ref_count(((struct sType*)(right_value124=sType_clone(lambda_type_139->mResultType->v1))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value124);
        if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value124, right_value124 = (void*)0;
        __freed_obj__ = 0;
        result_type_148->mStatic=(_Bool)0;
        come_params_151=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value126=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value125=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 260, "struct list$1CVALUEph"))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
        if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value125, right_value125 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value126);
        if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value126, right_value126 = (void*)0;
        __freed_obj__ = 0;
        i_152=0;
        for(
        o2_saved_153=(params_131),it_156=list$1tuple2$2charphsNodephph_begin((o2_saved_153)) ,        0;        _for_condtionalA8=        !list$1tuple2$2charphsNodephph_end((o2_saved_153)) ,        _for_condtionalA8;        it_156=list$1tuple2$2charphsNodephph_next((o2_saved_153)) ,        0        ){
            multiple_assign_var2=it_156;
            label_159=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            node_160=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
            if(_if_conditional229=i_152==0,            _if_conditional229) {
                list$1CVALUEph_push_back(come_params_151,(struct CVALUE*)come_increment_ref_count(obj_value_135));
                i_152++;
            }
            else {
                if(_if_conditional230=!node_compile(node_160,info),                _if_conditional230) {
                    __result108__ = (_Bool)0;
                    if(label_159 && !__freed_obj__) { label_159 = come_decrement_ref_count(label_159, (void*)0, (void*)0, 0, 0, 0); }
                    if(node_160 && !__freed_obj__) { node_160 = come_decrement_ref_count(node_160, ((struct sNode*)node_160)->finalize, ((struct sNode*)node_160)->_protocol_obj, 0, 0, 0); } 
                    if(result_type_148 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_148, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(come_params_151 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_151, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(obj_value_135 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_135, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(obj_type_136 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_136, (void*)0, (void*)0, 0, 0, 0, 0); }
                    return __result108__;
                }
                come_value_161=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value127=get_value_from_stack(-1,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
                if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value127, right_value127 = (void*)0;
                __freed_obj__ = 0;
                check_assign_type(((char*)(right_value130=xsprintf("\%s param num \%s is assinged to",((char*)(right_value128=charp_to_string(fun_name_130))),((char*)(right_value129=int_to_string(i_152)))))),((struct sType*)(right_value131=list$1sTypephp_operator_load_element(lambda_type_139->mParamTypes,i_152-1))),come_value_161->type,come_value_161,(_Bool)0,info);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value128);
                if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { right_value128 = come_decrement_ref_count(right_value128, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value128, right_value128 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value129);
                if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value129, right_value129 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value130);
                if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value130, right_value130 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value131);
                if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value131, right_value131 = (void*)0;
                __freed_obj__ = 0;
                if(_if_conditional233=((struct sType*)(right_value132=list$1sTypephp_operator_load_element(lambda_type_139->mParamTypes,i_152-1)))->mHeap&&come_value_161->type->mHeap,                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value132),
                (right_value132 && right_value132 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sType_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value132, right_value132 = (void*)0, 
                __freed_obj__ = 0, 
                _if_conditional233) {
                    std_move(((struct sType*)(right_value133=list$1sTypephp_operator_load_element(lambda_type_139->mParamTypes,i_152-1))),come_value_161->type,come_value_161,info);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133);
                    if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value133, right_value133 = (void*)0;
                    __freed_obj__ = 0;
                }
                list$1CVALUEph_push_back(come_params_151,(struct CVALUE*)come_increment_ref_count(come_value_161));
                i_152++;
                dec_stack_ptr(1,info);
                if(come_value_161 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_161, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(label_159 && !__freed_obj__) { label_159 = come_decrement_ref_count(label_159, (void*)0, (void*)0, 0, 0, 0); }
            if(node_160 && !__freed_obj__) { node_160 = come_decrement_ref_count(node_160, ((struct sNode*)node_160)->finalize, ((struct sNode*)node_160)->_protocol_obj, 0, 0, 0); } 
        }
        buf_165=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value135=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value134=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 290, "struct buffer"))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value134);
        if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value134, right_value134 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value135);
        if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value135, right_value135 = (void*)0;
        __freed_obj__ = 0;
        buffer_append_str(buf_165,((char*)(right_value136=xsprintf("%s->%s",obj_value_135->c_value,fun_name_130))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value136);
        if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value136, right_value136 = (void*)0;
        __freed_obj__ = 0;
        buffer_append_str(buf_165,"(");
        j_166=0;
        for(
        o2_saved_167=(struct list$1CVALUEph*)come_increment_ref_count((come_params_151)),it_170=list$1CVALUEph_begin((o2_saved_167)) ,        0;        _for_condtionalA9=        !list$1CVALUEph_end((o2_saved_167)) ,        _for_condtionalA9;        it_170=list$1CVALUEph_next((o2_saved_167)) ,        0        ){
            if(_if_conditional238=j_166==0,            _if_conditional238) {
                __dec_obj52=it_170->c_value;
                it_170->c_value=(char*)come_increment_ref_count(((char*)(right_value137=xsprintf("%s->_protocol_obj",it_170->c_value))));
                if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value137);
                if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value137, right_value137 = (void*)0;
                __freed_obj__ = 0;
            }
            buffer_append_str(buf_165,it_170->c_value);
            if(_if_conditional239=j_166!=list$1CVALUEph_length(come_params_151)-1,            _if_conditional239) {
                buffer_append_str(buf_165,",");
            }
            j_166++;
        }
        if(o2_saved_167 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_167, (void*)0, (void*)0, 0, 0, 0, 0); }
        buffer_append_str(buf_165,")");
        come_value2_173=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value138=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 310, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value138);
        if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value138, right_value138 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj53=come_value2_173->c_value;
        come_value2_173->c_value=(char*)come_increment_ref_count(((char*)(right_value139=buffer_to_string(buf_165))));
        if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value139);
        if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value139, right_value139 = (void*)0;
        __freed_obj__ = 0;
        result_type2_174=(struct sType*)come_increment_ref_count(((struct sType*)(right_value140=solve_generics(result_type_148,info->generics_type,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value140);
        if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value140, right_value140 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional240=result_type2_174->mHeap,        _if_conditional240) {
            __dec_obj54=come_value2_173->c_value;
            come_value2_173->c_value=(char*)come_increment_ref_count(((char*)(right_value142=append_object_to_right_values(((char*)(right_value141=buffer_to_string(buf_165))),(struct sType*)come_increment_ref_count(result_type2_174),info))));
            if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value141);
            if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value141, right_value141 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value142);
            if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value142, right_value142 = (void*)0;
            __freed_obj__ = 0;
        }
        __dec_obj55=come_value2_173->type;
        come_value2_173->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value143=sType_clone(result_type2_174))));
        if(__dec_obj55) { come_call_finalizer(sType_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value143);
        if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value143, right_value143 = (void*)0;
        __freed_obj__ = 0;
        come_value2_173->type->mStatic=(_Bool)0;
        come_value2_173->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value2_173->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_173));
        if(result_type_148 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_148, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_params_151 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_151, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_165 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_165, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_value2_173 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_173, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_type2_174 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_174, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        generics_fun_name_175=(char*)come_increment_ref_count(((char*)(right_value146=string_to_string(((char*)(right_value145=make_generics_function(obj_type_136,(char*)come_increment_ref_count(((char*)(right_value144=__builtin_string(fun_name_130)))),info)))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value144);
        if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { right_value144 = come_decrement_ref_count(right_value144, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value144, right_value144 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value145);
        if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value145, right_value145 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value146);
        if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value146, right_value146 = (void*)0;
        __freed_obj__ = 0;
        fun_176=((void*)0);
        for(
        i_177=128 ,        0;        _for_condtionalA10=        i_177>=1 ,        _for_condtionalA10;        i_177-- ,        0        ){
            new_fun_name_178=(char*)come_increment_ref_count(((char*)(right_value147=xsprintf("%s_v%d",generics_fun_name_175,i_177))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value147);
            if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value147, right_value147 = (void*)0;
            __freed_obj__ = 0;
            fun_176=((struct sFun*)(right_value150=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_178)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value150);
            if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value150, right_value150 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional261=fun_176!=((void*)0),            _if_conditional261) {
                __dec_obj57=generics_fun_name_175;
                generics_fun_name_175=(char*)come_increment_ref_count(((char*)(right_value151=__builtin_string(new_fun_name_178))));
                if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value151);
                if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value151, right_value151 = (void*)0;
                __freed_obj__ = 0;
                if(new_fun_name_178 && !__freed_obj__) { new_fun_name_178 = come_decrement_ref_count(new_fun_name_178, (void*)0, (void*)0, 0, 0, 0); }
                break;
            }
            if(new_fun_name_178 && !__freed_obj__) { new_fun_name_178 = come_decrement_ref_count(new_fun_name_178, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional262=fun_176==((void*)0),        _if_conditional262) {
            fun_176=((struct sFun*)(right_value152=map$2charphsFunph_at(info->funcs,generics_fun_name_175,((void*)0))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value152);
            if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value152, right_value152 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional267=fun_176==((void*)0),            _if_conditional267) {
                __dec_obj58=generics_fun_name_175;
                generics_fun_name_175=(char*)come_increment_ref_count(((char*)(right_value154=create_method_name(obj_type_136,(_Bool)0,((char*)(right_value153=__builtin_string(fun_name_130))),info))));
                if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value153);
                if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value153, right_value153 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value154);
                if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { right_value154 = come_decrement_ref_count(right_value154, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value154, right_value154 = (void*)0;
                __freed_obj__ = 0;
                fun_176=((struct sFun*)(right_value155=map$2charphsFunph_at(info->funcs,generics_fun_name_175,((void*)0))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value155);
                if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value155, right_value155 = (void*)0;
                __freed_obj__ = 0;
                if(_if_conditional268=fun_176==((void*)0),                _if_conditional268) {
                    err_msg(info,"function not found(%s) at method(%s)(Z)\n",generics_fun_name_175,info->come_fun->mName);
                    __result128__ = (_Bool)1;
                    if(generics_fun_name_175 && !__freed_obj__) { generics_fun_name_175 = come_decrement_ref_count(generics_fun_name_175, (void*)0, (void*)0, 0, 0, 0); }
                    if(obj_value_135 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_135, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(obj_type_136 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_136, (void*)0, (void*)0, 0, 0, 0, 0); }
                    return __result128__;
                }
            }
        }
        result_type_184=(struct sType*)come_increment_ref_count(((struct sType*)(right_value156=sType_clone(fun_176->mResultType))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value156);
        if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value156, right_value156 = (void*)0;
        __freed_obj__ = 0;
        result_type_184->mStatic=(_Bool)0;
        result_type2_185=(struct sType*)come_increment_ref_count(((struct sType*)(right_value157=solve_generics(result_type_184,info->generics_type,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value157);
        if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value157, right_value157 = (void*)0;
        __freed_obj__ = 0;
        param_types_186=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value159=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value158=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "20method.c", 364, "struct list$1sTypeph"))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value158);
        if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value158, right_value158 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value159);
        if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value159, right_value159 = (void*)0;
        __freed_obj__ = 0;
        for(
        o2_saved_187=(struct list$1sTypeph*)come_increment_ref_count((fun_176->mParamTypes)),it_190=list$1sTypeph_begin((o2_saved_187)) ,        0;        _for_condtionalA11=        !list$1sTypeph_end((o2_saved_187)) ,        _for_condtionalA11;        it_190=list$1sTypeph_next((o2_saved_187)) ,        0        ){
            if(_if_conditional273=it_190==((void*)0),            _if_conditional273) {
                list$1sTypeph_push_back(param_types_186,it_190);
            }
            else {
                it2_196=(struct sType*)come_increment_ref_count(((struct sType*)(right_value163=solve_generics(it_190,info->generics_type,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value163);
                if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value163, right_value163 = (void*)0;
                __freed_obj__ = 0;
                list$1sTypeph_push_back(param_types_186,(struct sType*)come_increment_ref_count(((struct sType*)(right_value164=sType_clone(it2_196)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value164);
                if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value164, right_value164 = (void*)0;
                __freed_obj__ = 0;
                if(it2_196 && !__freed_obj__) { come_call_finalizer(sType_finalize,it2_196, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
        }
        if(o2_saved_187 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_187, (void*)0, (void*)0, 0, 0, 0, 0); }
        come_params_197=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value166=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value165=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 376, "struct list$1CVALUEph"))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value165);
        if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value165, right_value165 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value166);
        if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value166, right_value166 = (void*)0;
        __freed_obj__ = 0;
        label_params_201=(struct map$2charphCVALUEph*)come_increment_ref_count(((struct map$2charphCVALUEph*)(right_value173=map$2charphCVALUEph_initialize((struct map$2charphCVALUEph*)come_increment_ref_count(((struct map$2charphCVALUEph*)(right_value167=(struct map$2charphCVALUEph*)come_calloc(1, sizeof(struct map$2charphCVALUEph)*(1), "20method.c", 378, "struct map$2charphCVALUEph"))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value167);
        if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value167, right_value167 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value173);
        if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value173, right_value173 = (void*)0;
        __freed_obj__ = 0;
        i_202=0;
        for(
        o2_saved_203=(params_131),it_204=list$1tuple2$2charphsNodephph_begin((o2_saved_203)) ,        0;        _for_condtionalA15=        !list$1tuple2$2charphsNodephph_end((o2_saved_203)) ,        _for_condtionalA15;        it_204=list$1tuple2$2charphsNodephph_next((o2_saved_203)) ,        0        ){
            multiple_assign_var3=it_204;
            label_205=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            node_206=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
            if(_if_conditional280=i_202==0,            _if_conditional280) {
                check_assign_type(((char*)(right_value176=xsprintf("\%s param num \%s is assinged to",((char*)(right_value174=charp_to_string(fun_name_130))),((char*)(right_value175=int_to_string(i_202)))))),((struct sType*)(right_value177=list$1sTypephp_operator_load_element(param_types_186,i_202))),obj_value_135->type,obj_value_135,(_Bool)0,info);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value174);
                if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { right_value174 = come_decrement_ref_count(right_value174, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value174, right_value174 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value175);
                if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { right_value175 = come_decrement_ref_count(right_value175, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value175, right_value175 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value176);
                if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { right_value176 = come_decrement_ref_count(right_value176, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value176, right_value176 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value177);
                if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value177, right_value177 = (void*)0;
                __freed_obj__ = 0;
                if(_if_conditional281=((struct sType*)(right_value178=list$1sTypephp_operator_load_element(param_types_186,i_202)))->mHeap&&obj_value_135->type->mHeap,                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value178),
                (right_value178 && right_value178 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sType_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value178, right_value178 = (void*)0, 
                __freed_obj__ = 0, 
                _if_conditional281) {
                    std_move(((struct sType*)(right_value179=list$1sTypephp_operator_load_element(param_types_186,i_202))),obj_value_135->type,obj_value_135,info);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value179);
                    if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value179, right_value179 = (void*)0;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional282=((struct sType*)(right_value180=list$1sTypephp_operator_load_element(param_types_186,i_202)))->mHeap&&!obj_value_135->type->mHeap&&!gComeGC,                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180),
                    (right_value180 && right_value180 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sType_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value180, right_value180 = (void*)0, 
                    __freed_obj__ = 0, 
                    _if_conditional282) {
                        err_msg(info,"require heap parametor(%s)",((char*)(right_value181=list$1charphp_operator_load_element(fun_176->mParamNames,i_202))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value181);
                        if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { right_value181 = come_decrement_ref_count(right_value181, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value181, right_value181 = (void*)0;
                        __freed_obj__ = 0;
                        exit(2);
                    }
                }
                list$1CVALUEph_push_back(come_params_197,(struct CVALUE*)come_increment_ref_count(obj_value_135));
                i_202++;
            }
            else {
                if(_if_conditional285=!node_compile(node_206,info),                _if_conditional285) {
                    __result141__ = (_Bool)0;
                    if(label_205 && !__freed_obj__) { label_205 = come_decrement_ref_count(label_205, (void*)0, (void*)0, 0, 0, 0); }
                    if(node_206 && !__freed_obj__) { node_206 = come_decrement_ref_count(node_206, ((struct sNode*)node_206)->finalize, ((struct sNode*)node_206)->_protocol_obj, 0, 0, 0); } 
                    if(generics_fun_name_175 && !__freed_obj__) { generics_fun_name_175 = come_decrement_ref_count(generics_fun_name_175, (void*)0, (void*)0, 0, 0, 0); }
                    if(result_type_184 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_184, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(result_type2_185 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_185, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(param_types_186 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_186, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(come_params_197 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_197, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(label_params_201 && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_201, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(obj_value_135 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_135, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(obj_type_136 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_136, (void*)0, (void*)0, 0, 0, 0, 0); }
                    return __result141__;
                }
                come_value_210=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value182=get_value_from_stack(-1,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value182);
                if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value182, right_value182 = (void*)0;
                __freed_obj__ = 0;
                if(_if_conditional286=label_205!=((void*)0),                _if_conditional286) {
                    n_211=0;
                    for(
                    o2_saved_212=(struct list$1charph*)come_increment_ref_count((fun_176->mParamNames)),it_215=list$1charph_begin((o2_saved_212)) ,                    0;                    _for_condtionalA16=                    !list$1charph_end((o2_saved_212)) ,                    _for_condtionalA16;                    it_215=list$1charph_next((o2_saved_212)) ,                    0                    ){
                        if(_if_conditional291=string_operator_equals(label_205,it_215),                        _if_conditional291) {
                            break;
                        }
                        n_211++;
                    }
                    if(o2_saved_212 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,o2_saved_212, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(_if_conditional292=((struct sType*)(right_value183=list$1sTypephp_operator_load_element(param_types_186,n_211))),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value183),
                    (right_value183 && right_value183 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sType_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value183, right_value183 = (void*)0, 
                    __freed_obj__ = 0, 
                    _if_conditional292) {
                        check_assign_type(((char*)(right_value186=xsprintf("\%s param num \%s is assinged to",((char*)(right_value184=charp_to_string(fun_name_130))),((char*)(right_value185=int_to_string(i_202)))))),((struct sType*)(right_value187=list$1sTypephp_operator_load_element(param_types_186,n_211))),come_value_210->type,come_value_210,(_Bool)0,info);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value184);
                        if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { right_value184 = come_decrement_ref_count(right_value184, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value184, right_value184 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value185);
                        if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { right_value185 = come_decrement_ref_count(right_value185, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value185, right_value185 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value186);
                        if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { right_value186 = come_decrement_ref_count(right_value186, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value186, right_value186 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value187);
                        if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value187, right_value187 = (void*)0;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional293=((struct sType*)(right_value188=list$1sTypephp_operator_load_element(param_types_186,n_211)))&&((struct sType*)(right_value189=list$1sTypephp_operator_load_element(param_types_186,n_211)))->mHeap&&come_value_210->type->mHeap,                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value188),
                    (right_value188 && right_value188 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sType_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value188, right_value188 = (void*)0, 
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value189),
                    (right_value189 && right_value189 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sType_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[1] = right_value189, right_value189 = (void*)0, 
                    __freed_obj__ = 0, 
                    _if_conditional293) {
                        std_move(((struct sType*)(right_value190=list$1sTypephp_operator_load_element(param_types_186,n_211))),come_value_210->type,come_value_210,info);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value190);
                        if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value190, right_value190 = (void*)0;
                        __freed_obj__ = 0;
                    }
                }
                else {
                    if(_if_conditional294=((struct sType*)(right_value191=list$1sTypephp_operator_load_element(param_types_186,i_202))),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value191),
                    (right_value191 && right_value191 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sType_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value191, right_value191 = (void*)0, 
                    __freed_obj__ = 0, 
                    _if_conditional294) {
                        check_assign_type(((char*)(right_value194=xsprintf("\%s param num \%s is assinged to",((char*)(right_value192=charp_to_string(fun_name_130))),((char*)(right_value193=int_to_string(i_202)))))),((struct sType*)(right_value195=list$1sTypephp_operator_load_element(param_types_186,i_202))),come_value_210->type,come_value_210,(_Bool)0,info);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value192);
                        if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { right_value192 = come_decrement_ref_count(right_value192, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value192, right_value192 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value193);
                        if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { right_value193 = come_decrement_ref_count(right_value193, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value193, right_value193 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value194);
                        if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { right_value194 = come_decrement_ref_count(right_value194, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value194, right_value194 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value195);
                        if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value195, right_value195 = (void*)0;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional295=((struct sType*)(right_value196=list$1sTypephp_operator_load_element(param_types_186,i_202)))&&((struct sType*)(right_value197=list$1sTypephp_operator_load_element(param_types_186,i_202)))->mHeap&&come_value_210->type->mHeap,                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value196),
                    (right_value196 && right_value196 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sType_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value196, right_value196 = (void*)0, 
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value197),
                    (right_value197 && right_value197 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sType_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[1] = right_value197, right_value197 = (void*)0, 
                    __freed_obj__ = 0, 
                    _if_conditional295) {
                        std_move(((struct sType*)(right_value198=list$1sTypephp_operator_load_element(param_types_186,i_202))),come_value_210->type,come_value_210,info);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value198);
                        if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value198, right_value198 = (void*)0;
                        __freed_obj__ = 0;
                    }
                }
                if(_if_conditional296=label_205==((void*)0),                _if_conditional296) {
                    list$1CVALUEph_push_back(come_params_197,(struct CVALUE*)come_increment_ref_count(come_value_210));
                    i_202++;
                }
                else {
                    map$2charphCVALUEph_insert(label_params_201,(char*)come_increment_ref_count(((char*)(right_value204=__builtin_string(label_205)))),(struct CVALUE*)come_increment_ref_count(come_value_210));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value204);
                    if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { right_value204 = come_decrement_ref_count(right_value204, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value204, right_value204 = (void*)0;
                    __freed_obj__ = 0;
                }
                dec_stack_ptr(1,info);
                if(come_value_210 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_210, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(label_205 && !__freed_obj__) { label_205 = come_decrement_ref_count(label_205, (void*)0, (void*)0, 0, 0, 0); }
            if(node_206 && !__freed_obj__) { node_206 = come_decrement_ref_count(node_206, ((struct sNode*)node_206)->finalize, ((struct sNode*)node_206)->_protocol_obj, 0, 0, 0); } 
        }
        if(_if_conditional319=list$1tuple2$2charphsNodephph_length(params_131)<list$1sTypeph_length(fun_176->mParamTypes)+(method_block_133?-2:0),        _if_conditional319) {
            for(
            ;            _for_condtionalA19=            i_202<list$1sTypeph_length(fun_176->mParamTypes)+(method_block_133?-2:0) ,            _for_condtionalA19;            i_202++ ,            0            ){
                default_param_239=(char*)come_increment_ref_count(((char*)(right_value206=string_clone(((char*)(right_value205=list$1charphp_operator_load_element(fun_176->mParamDefaultParametors,i_202)))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value205);
                if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { right_value205 = come_decrement_ref_count(right_value205, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value205, right_value205 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value206);
                if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value206, right_value206 = (void*)0;
                __freed_obj__ = 0;
                param_name_240=((char*)(right_value207=list$1charphp_operator_load_element(fun_176->mParamNames,i_202)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value207);
                if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { right_value207 = come_decrement_ref_count(right_value207, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value207, right_value207 = (void*)0;
                __freed_obj__ = 0;
                come_value_244=((struct CVALUE*)(right_value210=map$2charphCVALUEphp_operator_load_element(label_params_201,param_name_240)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value210);
                if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value210, right_value210 = (void*)0;
                __freed_obj__ = 0;
                if(_if_conditional325=default_param_239&&string_operator_not_equals(default_param_239,""),                _if_conditional325) {
                    source_245=(struct buffer*)come_increment_ref_count(info->source);
                    p_246=info->p;
                    head_247=info->head;
                    sline_248=info->sline;
                    __dec_obj64=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value211=string_to_buffer(default_param_239))));
                    if(__dec_obj64) { come_call_finalizer(buffer_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value211);
                    if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value211, right_value211 = (void*)0;
                    __freed_obj__ = 0;
                    info->p=info->source->buf;
                    info->head=info->source->buf;
                    node_249=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value212=expression_v13(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value212);
                    if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { right_value212 = come_decrement_ref_count(right_value212, ((struct sNode*)right_value212)->finalize, ((struct sNode*)right_value212)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value212, right_value212 = (void*)0;
                    __freed_obj__ = 0;
                    if(_if_conditional326=!node_compile(node_249,info),                    _if_conditional326) {
                        __result168__ = (_Bool)0;
                        if(source_245 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_245, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(node_249 && !__freed_obj__) { node_249 = come_decrement_ref_count(node_249, ((struct sNode*)node_249)->finalize, ((struct sNode*)node_249)->_protocol_obj, 0, 0, 0); } 
                        if(default_param_239 && !__freed_obj__) { default_param_239 = come_decrement_ref_count(default_param_239, (void*)0, (void*)0, 0, 0, 0); }
                        if(generics_fun_name_175 && !__freed_obj__) { generics_fun_name_175 = come_decrement_ref_count(generics_fun_name_175, (void*)0, (void*)0, 0, 0, 0); }
                        if(result_type_184 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_184, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(result_type2_185 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_185, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(param_types_186 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_186, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(come_params_197 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_197, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(label_params_201 && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_201, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(obj_value_135 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_135, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(obj_type_136 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_136, (void*)0, (void*)0, 0, 0, 0, 0); }
                        return __result168__;
                    }
                    __dec_obj65=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(source_245);
                    if(__dec_obj65) { come_call_finalizer(buffer_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0); }
                    info->p=p_246;
                    info->head=head_247;
                    info->sline=sline_248;
                    come_value_250=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value213=get_value_from_stack(-1,info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value213);
                    if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value213, right_value213 = (void*)0;
                    __freed_obj__ = 0;
                    if(_if_conditional327=((struct sType*)(right_value214=list$1sTypephp_operator_load_element(param_types_186,i_202))),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value214),
                    (right_value214 && right_value214 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sType_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value214, right_value214 = (void*)0, 
                    __freed_obj__ = 0, 
                    _if_conditional327) {
                        check_assign_type(((char*)(right_value217=xsprintf("\%s param num \%s is assinged to",((char*)(right_value215=charp_to_string(fun_name_130))),((char*)(right_value216=int_to_string(i_202)))))),((struct sType*)(right_value218=list$1sTypephp_operator_load_element(param_types_186,i_202))),come_value_250->type,come_value_250,(_Bool)0,info);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value215);
                        if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { right_value215 = come_decrement_ref_count(right_value215, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value215, right_value215 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value216);
                        if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { right_value216 = come_decrement_ref_count(right_value216, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value216, right_value216 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value217);
                        if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { right_value217 = come_decrement_ref_count(right_value217, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value217, right_value217 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value218);
                        if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value218, right_value218 = (void*)0;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional328=((struct sType*)(right_value219=list$1sTypephp_operator_load_element(param_types_186,i_202)))&&((struct sType*)(right_value220=list$1sTypephp_operator_load_element(param_types_186,i_202)))->mHeap&&come_value_250->type->mHeap,                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value219),
                    (right_value219 && right_value219 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sType_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value219, right_value219 = (void*)0, 
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value220),
                    (right_value220 && right_value220 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sType_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[1] = right_value220, right_value220 = (void*)0, 
                    __freed_obj__ = 0, 
                    _if_conditional328) {
                        std_move(((struct sType*)(right_value221=list$1sTypephp_operator_load_element(param_types_186,i_202))),come_value_250->type,come_value_250,info);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value221);
                        if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value221, right_value221 = (void*)0;
                        __freed_obj__ = 0;
                    }
                    list$1CVALUEph_push_back(come_params_197,(struct CVALUE*)come_increment_ref_count(come_value_250));
                    dec_stack_ptr(1,info);
                    if(source_245 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_245, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(node_249 && !__freed_obj__) { node_249 = come_decrement_ref_count(node_249, ((struct sNode*)node_249)->finalize, ((struct sNode*)node_249)->_protocol_obj, 0, 0, 0); } 
                    if(come_value_250 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_250, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                else {
                    if(_if_conditional329=come_value_244,                    _if_conditional329) {
                        list$1CVALUEph_push_back(come_params_197,((void*)0));
                    }
                    else {
                        err_msg(info,"require parametor(%s)",fun_176->mName);
                        __result169__ = (_Bool)0;
                        if(default_param_239 && !__freed_obj__) { default_param_239 = come_decrement_ref_count(default_param_239, (void*)0, (void*)0, 0, 0, 0); }
                        if(generics_fun_name_175 && !__freed_obj__) { generics_fun_name_175 = come_decrement_ref_count(generics_fun_name_175, (void*)0, (void*)0, 0, 0, 0); }
                        if(result_type_184 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_184, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(result_type2_185 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_185, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(param_types_186 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_186, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(come_params_197 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_197, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(label_params_201 && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_201, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(obj_value_135 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_135, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(obj_type_136 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_136, (void*)0, (void*)0, 0, 0, 0, 0); }
                        return __result169__;
                    }
                }
                if(default_param_239 && !__freed_obj__) { default_param_239 = come_decrement_ref_count(default_param_239, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        if(_if_conditional330=map$2charphCVALUEph_length(label_params_201)>0,        _if_conditional330) {
            for(
            i_202=0 ,            0;            _for_condtionalA20=            i_202<list$1charph_length(fun_176->mParamNames)+(method_block_133?-2:0) ,            _for_condtionalA20;            i_202++ ,            0            ){
                param_name_251=((char*)(right_value222=list$1charphp_operator_load_element(fun_176->mParamNames,i_202)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value222);
                if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { right_value222 = come_decrement_ref_count(right_value222, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value222, right_value222 = (void*)0;
                __freed_obj__ = 0;
                come_value_252=((struct CVALUE*)(right_value223=map$2charphCVALUEphp_operator_load_element(label_params_201,param_name_251)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value223);
                if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value223, right_value223 = (void*)0;
                __freed_obj__ = 0;
                if(_if_conditional331=come_value_252,                _if_conditional331) {
                    list$1CVALUEph_replace(come_params_197,i_202,(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value227=CVALUE_clone(come_value_252)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value227);
                    if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value227, right_value227 = (void*)0;
                    __freed_obj__ = 0;
                }
            }
        }
        if(_if_conditional339=method_block_133,        _if_conditional339) {
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 509, "struct sNode");
            _inf_obj_value1=come_increment_ref_count(((struct sCurrentNode*)(right_value229=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value228=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 509, "struct sCurrentNode")))),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sCurrentNode_finalize;
            _inf_value1->clone=(void*)sCurrentNode_clone;
            _inf_value1->compile=(void*)sCurrentNode_compile;
            _inf_value1->sline=(void*)sCurrentNode_sline;
            _inf_value1->sname=(void*)sCurrentNode_sname;
            _inf_value1->terminated=(void*)sCurrentNode_terminated;
            _inf_value1->kind=(void*)sCurrentNode_kind;
            current_stack_frame_node_257=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value232=_inf_value1)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value228);
            if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value228, right_value228 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value229);
            if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value229, right_value229 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value232);
            if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { right_value232 = come_decrement_ref_count(right_value232, ((struct sNode*)right_value232)->finalize, ((struct sNode*)right_value232)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value232, right_value232 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional344=!node_compile(current_stack_frame_node_257,info),            _if_conditional344) {
                __result178__ = (_Bool)0;
                if(current_stack_frame_node_257 && !__freed_obj__) { current_stack_frame_node_257 = come_decrement_ref_count(current_stack_frame_node_257, ((struct sNode*)current_stack_frame_node_257)->finalize, ((struct sNode*)current_stack_frame_node_257)->_protocol_obj, 0, 0, 0); } 
                if(generics_fun_name_175 && !__freed_obj__) { generics_fun_name_175 = come_decrement_ref_count(generics_fun_name_175, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type_184 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_184, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_type2_185 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_185, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_types_186 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_186, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_params_197 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_197, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(label_params_201 && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_201, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_value_135 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_135, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_type_136 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_136, (void*)0, (void*)0, 0, 0, 0, 0); }
                return __result178__;
            }
            come_value_258=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value233=get_value_from_stack(-1,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value233);
            if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value233, right_value233 = (void*)0;
            __freed_obj__ = 0;
            list$1CVALUEph_push_back(come_params_197,(struct CVALUE*)come_increment_ref_count(come_value_258));
            dec_stack_ptr(1,info);
            method_block2_259=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value235=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value234=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 519, "struct buffer"))))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value234);
            if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value234, right_value234 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value235);
            if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value235, right_value235 = (void*)0;
            __freed_obj__ = 0;
            method_block_type_260=(struct sType*)come_increment_ref_count(((struct sType*)(right_value237=sType_clone(((struct sType*)(right_value236=list$1sTypephp_operator_load_element(fun_176->mParamTypes,-1)))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value236);
            if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value236, right_value236 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value237);
            if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value237, right_value237 = (void*)0;
            __freed_obj__ = 0;
            class_name_261=(char*)come_increment_ref_count(((char*)(right_value238=xsprintf("__current_stack%d__",info->current_stack_num))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value238);
            if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { right_value238 = come_decrement_ref_count(right_value238, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value238, right_value238 = (void*)0;
            __freed_obj__ = 0;
            ((struct sType*)(right_value239=list$1sTypephp_operator_load_element(method_block_type_260->mParamTypes,0)))->mClass=((struct sClass*)(right_value242=map$2charphsClassphp_operator_load_element(info->classes,class_name_261)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value239);
            if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value239, right_value239 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value242);
            if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value242, right_value242 = (void*)0;
            __freed_obj__ = 0;
            current_stack_frame_struct_265=info->current_stack_frame_struct;
            info->current_stack_frame_struct=((struct sClass*)(right_value243=map$2charphsClassphp_operator_load_element(info->classes,class_name_261)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value243);
            if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value243, right_value243 = (void*)0;
            __freed_obj__ = 0;
            info->num_method_block++;
            if(_if_conditional350=string_operator_not_equals(method_block_type_260->mClass->mName,"lambda"),            _if_conditional350) {
                err_msg(info,"This function does not have method block(%s)",fun_name_130);
                __result184__ = (_Bool)0;
                if(current_stack_frame_node_257 && !__freed_obj__) { current_stack_frame_node_257 = come_decrement_ref_count(current_stack_frame_node_257, ((struct sNode*)current_stack_frame_node_257)->finalize, ((struct sNode*)current_stack_frame_node_257)->_protocol_obj, 0, 0, 0); } 
                if(come_value_258 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_258, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(method_block2_259 && !__freed_obj__) { come_call_finalizer(buffer_finalize,method_block2_259, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(method_block_type_260 && !__freed_obj__) { come_call_finalizer(sType_finalize,method_block_type_260, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(class_name_261 && !__freed_obj__) { class_name_261 = come_decrement_ref_count(class_name_261, (void*)0, (void*)0, 0, 0, 0); }
                if(generics_fun_name_175 && !__freed_obj__) { generics_fun_name_175 = come_decrement_ref_count(generics_fun_name_175, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type_184 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_184, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_type2_185 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_185, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_types_186 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_186, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_params_197 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_197, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(label_params_201 && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_201, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_value_135 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_135, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_type_136 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_136, (void*)0, (void*)0, 0, 0, 0, 0); }
                return __result184__;
            }
            result_type_266=(struct sType*)come_increment_ref_count(((struct sType*)(right_value244=sType_clone(method_block_type_260->mResultType->v1))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value244);
            if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value244, right_value244 = (void*)0;
            __freed_obj__ = 0;
            result_type_266->mStatic=(_Bool)0;
            param_types_267=method_block_type_260->mParamTypes;
            param_names_268=method_block_type_260->mParamNames;
            all_alhabet_sname_269=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value246=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value245=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 540, "struct buffer"))))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value245);
            if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value245, right_value245 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value246);
            if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value246, right_value246 = (void*)0;
            __freed_obj__ = 0;
            {
                p_270=info->sname;
                while(_while_condtional35=*p_270,                _while_condtional35) {
                    if(_if_conditional351=xisalnum(*p_270),                    _if_conditional351) {
                        buffer_append_char(all_alhabet_sname_269,*p_270++);
                    }
                    else {
                        p_270++;
                    }
                }
            }
            buffer_append_str(method_block2_259,((char*)(right_value249=xsprintf("%s method_block%d_%s(",((char*)(right_value247=make_type_name_string(result_type_266,(_Bool)0,(_Bool)0,(_Bool)0,info))),info->num_method_block,((char*)(right_value248=buffer_to_string(all_alhabet_sname_269)))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value247);
            if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { right_value247 = come_decrement_ref_count(right_value247, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value247, right_value247 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value248);
            if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { right_value248 = come_decrement_ref_count(right_value248, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value248, right_value248 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value249);
            if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { right_value249 = come_decrement_ref_count(right_value249, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value249, right_value249 = (void*)0;
            __freed_obj__ = 0;
            i_271=0;
            for(
            o2_saved_272=(param_types_267),it_273=list$1sTypeph_begin((o2_saved_272)) ,            0;            _for_condtionalA21=            !list$1sTypeph_end((o2_saved_272)) ,            _for_condtionalA21;            it_273=list$1sTypeph_next((o2_saved_272)) ,            0            ){
                param_type_274=it_273;
                if(_if_conditional352=i_271==0,                _if_conditional352) {
                    param_name_275=(char*)come_increment_ref_count(((char*)(right_value250=xsprintf("parent"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value250);
                    if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { right_value250 = come_decrement_ref_count(right_value250, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value250, right_value250 = (void*)0;
                    __freed_obj__ = 0;
                    buffer_append_str(method_block2_259,((char*)(right_value252=xsprintf("%s",((char*)(right_value251=make_define_var(param_type_274,param_name_275,(_Bool)0,info)))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value251);
                    if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { right_value251 = come_decrement_ref_count(right_value251, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value251, right_value251 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value252);
                    if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { right_value252 = come_decrement_ref_count(right_value252, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value252, right_value252 = (void*)0;
                    __freed_obj__ = 0;
                    if(param_name_275 && !__freed_obj__) { param_name_275 = come_decrement_ref_count(param_name_275, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    if(_if_conditional353=i_271==1,                    _if_conditional353) {
                        param_name_276=(char*)come_increment_ref_count(((char*)(right_value253=xsprintf("it"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value253);
                        if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { right_value253 = come_decrement_ref_count(right_value253, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value253, right_value253 = (void*)0;
                        __freed_obj__ = 0;
                        buffer_append_str(method_block2_259,((char*)(right_value255=xsprintf("%s",((char*)(right_value254=make_define_var(param_type_274,param_name_276,(_Bool)0,info)))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value254);
                        if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { right_value254 = come_decrement_ref_count(right_value254, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value254, right_value254 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value255);
                        if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { right_value255 = come_decrement_ref_count(right_value255, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value255, right_value255 = (void*)0;
                        __freed_obj__ = 0;
                        if(param_name_276 && !__freed_obj__) { param_name_276 = come_decrement_ref_count(param_name_276, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    else {
                        param_name_277=(char*)come_increment_ref_count(((char*)(right_value256=xsprintf("it%d",i_271))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value256);
                        if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { right_value256 = come_decrement_ref_count(right_value256, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value256, right_value256 = (void*)0;
                        __freed_obj__ = 0;
                        buffer_append_str(method_block2_259,((char*)(right_value258=xsprintf("%s",((char*)(right_value257=make_define_var(param_type_274,param_name_277,(_Bool)0,info)))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value257);
                        if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { right_value257 = come_decrement_ref_count(right_value257, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value257, right_value257 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value258);
                        if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { right_value258 = come_decrement_ref_count(right_value258, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value258, right_value258 = (void*)0;
                        __freed_obj__ = 0;
                        if(param_name_277 && !__freed_obj__) { param_name_277 = come_decrement_ref_count(param_name_277, (void*)0, (void*)0, 0, 0, 0); }
                    }
                }
                if(_if_conditional354=i_271!=list$1sTypeph_length(param_types_267)-1,                _if_conditional354) {
                    buffer_append_str(method_block2_259,",");
                }
                i_271++;
            }
            buffer_append_str(method_block2_259,")\n");
            buffer_append_str(method_block2_259,((char*)(right_value259=buffer_to_string(method_block_133))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value259);
            if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { right_value259 = come_decrement_ref_count(right_value259, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value259, right_value259 = (void*)0;
            __freed_obj__ = 0;
            source3_278=(struct buffer*)come_increment_ref_count(info->source);
            p_279=info->p;
            head_280=info->head;
            sline_281=info->sline;
            __dec_obj71=info->source;
            info->source=(struct buffer*)come_increment_ref_count(method_block2_259);
            if(__dec_obj71) { come_call_finalizer(buffer_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0); }
            info->p=info->source->buf;
            info->head=info->source->buf;
            info->sline=method_block_sline_134;
            node_282=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value260=parse_function(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value260);
            if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { right_value260 = come_decrement_ref_count(right_value260, ((struct sNode*)right_value260)->finalize, ((struct sNode*)right_value260)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value260, right_value260 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional355=!node_compile(node_282,info),            _if_conditional355) {
                __result185__ = (_Bool)0;
                if(current_stack_frame_node_257 && !__freed_obj__) { current_stack_frame_node_257 = come_decrement_ref_count(current_stack_frame_node_257, ((struct sNode*)current_stack_frame_node_257)->finalize, ((struct sNode*)current_stack_frame_node_257)->_protocol_obj, 0, 0, 0); } 
                if(come_value_258 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_258, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(method_block2_259 && !__freed_obj__) { come_call_finalizer(buffer_finalize,method_block2_259, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(method_block_type_260 && !__freed_obj__) { come_call_finalizer(sType_finalize,method_block_type_260, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(class_name_261 && !__freed_obj__) { class_name_261 = come_decrement_ref_count(class_name_261, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type_266 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_266, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(all_alhabet_sname_269 && !__freed_obj__) { come_call_finalizer(buffer_finalize,all_alhabet_sname_269, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(source3_278 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source3_278, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(node_282 && !__freed_obj__) { node_282 = come_decrement_ref_count(node_282, ((struct sNode*)node_282)->finalize, ((struct sNode*)node_282)->_protocol_obj, 0, 0, 0); } 
                if(generics_fun_name_175 && !__freed_obj__) { generics_fun_name_175 = come_decrement_ref_count(generics_fun_name_175, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type_184 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_184, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_type2_185 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_185, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_types_186 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_186, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_params_197 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_197, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(label_params_201 && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_201, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_value_135 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_135, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_type_136 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_136, (void*)0, (void*)0, 0, 0, 0, 0); }
                return __result185__;
            }
            method_block_name_283=(char*)come_increment_ref_count(((char*)(right_value262=xsprintf("method_block%d_%s",info->num_method_block,((char*)(right_value261=buffer_to_string(all_alhabet_sname_269)))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value261);
            if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { right_value261 = come_decrement_ref_count(right_value261, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value261, right_value261 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value262);
            if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { right_value262 = come_decrement_ref_count(right_value262, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value262, right_value262 = (void*)0;
            __freed_obj__ = 0;
            come_value2_284=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value263=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 604, "struct CVALUE"))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value263);
            if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value263, right_value263 = (void*)0;
            __freed_obj__ = 0;
            fun2_285=((struct sFun*)(right_value264=map$2charphsFunph_at(info->funcs,method_block_name_283,((void*)0))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value264);
            if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value264, right_value264 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional356=fun2_285==((void*)0),            _if_conditional356) {
                err_msg(info,"method block function not found(%s)",method_block_name_283);
                __result186__ = (_Bool)1;
                if(current_stack_frame_node_257 && !__freed_obj__) { current_stack_frame_node_257 = come_decrement_ref_count(current_stack_frame_node_257, ((struct sNode*)current_stack_frame_node_257)->finalize, ((struct sNode*)current_stack_frame_node_257)->_protocol_obj, 0, 0, 0); } 
                if(come_value_258 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_258, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(method_block2_259 && !__freed_obj__) { come_call_finalizer(buffer_finalize,method_block2_259, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(method_block_type_260 && !__freed_obj__) { come_call_finalizer(sType_finalize,method_block_type_260, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(class_name_261 && !__freed_obj__) { class_name_261 = come_decrement_ref_count(class_name_261, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type_266 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_266, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(all_alhabet_sname_269 && !__freed_obj__) { come_call_finalizer(buffer_finalize,all_alhabet_sname_269, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(source3_278 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source3_278, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(node_282 && !__freed_obj__) { node_282 = come_decrement_ref_count(node_282, ((struct sNode*)node_282)->finalize, ((struct sNode*)node_282)->_protocol_obj, 0, 0, 0); } 
                if(method_block_name_283 && !__freed_obj__) { method_block_name_283 = come_decrement_ref_count(method_block_name_283, (void*)0, (void*)0, 0, 0, 0); }
                if(come_value2_284 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_284, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(generics_fun_name_175 && !__freed_obj__) { generics_fun_name_175 = come_decrement_ref_count(generics_fun_name_175, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type_184 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_184, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_type2_185 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_185, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_types_186 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_186, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_params_197 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_197, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(label_params_201 && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_201, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_value_135 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_135, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_type_136 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_136, (void*)0, (void*)0, 0, 0, 0, 0); }
                return __result186__;
            }
            method_block_type2_286=fun2_285->mLambdaType;
            __dec_obj72=come_value2_284->c_value;
            come_value2_284->c_value=(char*)come_increment_ref_count(((char*)(right_value265=xsprintf("(void*)%s",method_block_name_283))));
            if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value265);
            if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { right_value265 = come_decrement_ref_count(right_value265, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value265, right_value265 = (void*)0;
            __freed_obj__ = 0;
            __dec_obj73=come_value2_284->type;
            come_value2_284->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value266=sType_clone(method_block_type2_286))));
            if(__dec_obj73) { come_call_finalizer(sType_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value266);
            if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value266, right_value266 = (void*)0;
            __freed_obj__ = 0;
            come_value2_284->var=((void*)0);
            list$1CVALUEph_push_back(come_params_197,(struct CVALUE*)come_increment_ref_count(come_value2_284));
            __dec_obj74=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source3_278);
            if(__dec_obj74) { come_call_finalizer(buffer_finalize,__dec_obj74, (void*)0, (void*)0, 0, 0, 0, 0); }
            info->p=p_279;
            info->head=head_280;
            info->sline=sline_281;
            info->current_stack_frame_struct=current_stack_frame_struct_265;
            if(current_stack_frame_node_257 && !__freed_obj__) { current_stack_frame_node_257 = come_decrement_ref_count(current_stack_frame_node_257, ((struct sNode*)current_stack_frame_node_257)->finalize, ((struct sNode*)current_stack_frame_node_257)->_protocol_obj, 0, 0, 0); } 
            if(come_value_258 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_258, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(method_block2_259 && !__freed_obj__) { come_call_finalizer(buffer_finalize,method_block2_259, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(method_block_type_260 && !__freed_obj__) { come_call_finalizer(sType_finalize,method_block_type_260, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(class_name_261 && !__freed_obj__) { class_name_261 = come_decrement_ref_count(class_name_261, (void*)0, (void*)0, 0, 0, 0); }
            if(result_type_266 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_266, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(all_alhabet_sname_269 && !__freed_obj__) { come_call_finalizer(buffer_finalize,all_alhabet_sname_269, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(source3_278 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source3_278, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(node_282 && !__freed_obj__) { node_282 = come_decrement_ref_count(node_282, ((struct sNode*)node_282)->finalize, ((struct sNode*)node_282)->_protocol_obj, 0, 0, 0); } 
            if(method_block_name_283 && !__freed_obj__) { method_block_name_283 = come_decrement_ref_count(method_block_name_283, (void*)0, (void*)0, 0, 0, 0); }
            if(come_value2_284 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_284, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        buf_287=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value268=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value267=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 629, "struct buffer"))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value267);
        if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value267, right_value267 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value268);
        if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value268, right_value268 = (void*)0;
        __freed_obj__ = 0;
        buffer_append_str(buf_287,generics_fun_name_175);
        buffer_append_str(buf_287,"(");
        j_288=0;
        for(
        o2_saved_289=(struct list$1CVALUEph*)come_increment_ref_count((come_params_197)),it_290=list$1CVALUEph_begin((o2_saved_289)) ,        0;        _for_condtionalA22=        !list$1CVALUEph_end((o2_saved_289)) ,        _for_condtionalA22;        it_290=list$1CVALUEph_next((o2_saved_289)) ,        0        ){
            buffer_append_str(buf_287,it_290->c_value);
            if(_if_conditional357=j_288!=list$1CVALUEph_length(come_params_197)-1,            _if_conditional357) {
                buffer_append_str(buf_287,",");
            }
            j_288++;
        }
        if(o2_saved_289 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_289, (void*)0, (void*)0, 0, 0, 0, 0); }
        buffer_append_str(buf_287,")");
        come_value2_291=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value269=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 647, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value269);
        if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value269, right_value269 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj75=come_value2_291->c_value;
        come_value2_291->c_value=(char*)come_increment_ref_count(((char*)(right_value270=buffer_to_string(buf_287))));
        if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value270);
        if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { right_value270 = come_decrement_ref_count(right_value270, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value270, right_value270 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj76=come_value2_291->type;
        come_value2_291->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value271=sType_clone(result_type2_185))));
        if(__dec_obj76) { come_call_finalizer(sType_finalize,__dec_obj76, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value271);
        if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value271, right_value271 = (void*)0;
        __freed_obj__ = 0;
        come_value2_291->type->mStatic=(_Bool)0;
        come_value2_291->var=((void*)0);
        if(_if_conditional358=result_type2_185->mHeap,        _if_conditional358) {
            __dec_obj77=come_value2_291->c_value;
            come_value2_291->c_value=(char*)come_increment_ref_count(((char*)(right_value272=append_object_to_right_values(come_value2_291->c_value,(struct sType*)come_increment_ref_count(result_type2_185),info))));
            if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value272);
            if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { right_value272 = come_decrement_ref_count(right_value272, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value272, right_value272 = (void*)0;
            __freed_obj__ = 0;
        }
        __dec_obj78=come_value2_291->c_value;
        come_value2_291->c_value=(char*)come_increment_ref_count(((char*)(right_value273=append_exception_value(come_value2_291->c_value,come_value2_291->type,info))));
        if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value273);
        if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { right_value273 = come_decrement_ref_count(right_value273, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value273, right_value273 = (void*)0;
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",come_value2_291->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_291));
        if(_if_conditional359=method_block_133,        _if_conditional359) {
            var_name_292=(char*)come_increment_ref_count(((char*)(right_value274=xsprintf("__current_stack%d__",info->num_current_stack))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value274);
            if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { right_value274 = come_decrement_ref_count(right_value274, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value274, right_value274 = (void*)0;
            __freed_obj__ = 0;
            result_type_293=(struct sType*)come_increment_ref_count(((struct sType*)(right_value275=sType_clone(info->come_fun->mResultType))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value275);
            if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value275, right_value275 = (void*)0;
            __freed_obj__ = 0;
            result_type2_294=(struct sType*)come_increment_ref_count(((struct sType*)(right_value276=solve_generics(result_type_293,info->generics_type,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value276);
            if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value276, right_value276 = (void*)0;
            __freed_obj__ = 0;
            result_type3_295=result_type2_294->mNoSolvedGenericsType->v1;
            if(_if_conditional360=result_type2_294->mNoSolvedGenericsType->v1,            _if_conditional360) {
                result_type3_295=result_type2_294->mNoSolvedGenericsType->v1;
            }
            else {
                result_type3_295=result_type2_294;
            }
            if(_if_conditional361=info->in_loop,            _if_conditional361) {
                if(_if_conditional362=string_operator_equals(result_type3_295->mClass->mName,"void")&&result_type3_295->mPointerNum==0,                _if_conditional362) {
                    add_come_last_code3(info,((char*)(right_value280=xsprintf("                        if(\%s.__method_block_result_kind__ == 1)\n                        {\n                            break;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 2)\n                        {\n                            continue;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 4)\n                        {\n                            return;\n                        }\n",((char*)(right_value277=string_to_string(var_name_292))),((char*)(right_value278=string_to_string(var_name_292))),((char*)(right_value279=string_to_string(var_name_292)))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value277);
                    if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { right_value277 = come_decrement_ref_count(right_value277, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value277, right_value277 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value278);
                    if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { right_value278 = come_decrement_ref_count(right_value278, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value278, right_value278 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value279);
                    if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { right_value279 = come_decrement_ref_count(right_value279, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value279, right_value279 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value280);
                    if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { right_value280 = come_decrement_ref_count(right_value280, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[3] = right_value280, right_value280 = (void*)0;
                    __freed_obj__ = 0;
                }
                else {
                    add_come_last_code3(info,((char*)(right_value287=xsprintf("                        if(\%s.__method_block_result_kind__ == 1)\n                        {\n                            break;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 2)\n                        {\n                            continue;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 3)\n                        {\n                            return (\%s)\%s.__method_block_return_value__;\n                        }\n",((char*)(right_value281=string_to_string(var_name_292))),((char*)(right_value282=string_to_string(var_name_292))),((char*)(right_value283=string_to_string(var_name_292))),((char*)(right_value285=string_to_string(((char*)(right_value284=make_type_name_string(result_type2_294,(_Bool)0,(_Bool)0,(_Bool)0,info)))))),((char*)(right_value286=string_to_string(var_name_292)))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value281);
                    if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { right_value281 = come_decrement_ref_count(right_value281, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value281, right_value281 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value282);
                    if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { right_value282 = come_decrement_ref_count(right_value282, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value282, right_value282 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value283);
                    if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { right_value283 = come_decrement_ref_count(right_value283, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value283, right_value283 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value284);
                    if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { right_value284 = come_decrement_ref_count(right_value284, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[3] = right_value284, right_value284 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value285);
                    if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { right_value285 = come_decrement_ref_count(right_value285, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[4] = right_value285, right_value285 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value286);
                    if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { right_value286 = come_decrement_ref_count(right_value286, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[5] = right_value286, right_value286 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value287);
                    if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { right_value287 = come_decrement_ref_count(right_value287, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[6] = right_value287, right_value287 = (void*)0;
                    __freed_obj__ = 0;
                }
            }
            else {
                if(_if_conditional363=string_operator_equals(result_type3_295->mClass->mName,"void")&&result_type3_295->mPointerNum==0,                _if_conditional363) {
                    add_come_last_code3(info,((char*)(right_value289=xsprintf("                    if(\%s.__method_block_result_kind__ == 4)\n                    {\n                        return;\n                    }\n",((char*)(right_value288=string_to_string(var_name_292)))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value288);
                    if(right_value288 && right_value288 != __result_obj__ && !__freed_obj__) { right_value288 = come_decrement_ref_count(right_value288, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value288, right_value288 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value289);
                    if(right_value289 && right_value289 != __result_obj__ && !__freed_obj__) { right_value289 = come_decrement_ref_count(right_value289, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value289, right_value289 = (void*)0;
                    __freed_obj__ = 0;
                }
                else {
                    add_come_last_code3(info,((char*)(right_value294=xsprintf("                    if(\%s.__method_block_result_kind__ == 3)\n                    {\n                        return (\%s)\%s.__method_block_return_value__;\n                    }\n",((char*)(right_value290=string_to_string(var_name_292))),((char*)(right_value292=string_to_string(((char*)(right_value291=make_type_name_string(result_type2_294,(_Bool)0,(_Bool)0,(_Bool)0,info)))))),((char*)(right_value293=string_to_string(var_name_292)))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value290);
                    if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { right_value290 = come_decrement_ref_count(right_value290, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value290, right_value290 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value291);
                    if(right_value291 && right_value291 != __result_obj__ && !__freed_obj__) { right_value291 = come_decrement_ref_count(right_value291, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value291, right_value291 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value292);
                    if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { right_value292 = come_decrement_ref_count(right_value292, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value292, right_value292 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value293);
                    if(right_value293 && right_value293 != __result_obj__ && !__freed_obj__) { right_value293 = come_decrement_ref_count(right_value293, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[3] = right_value293, right_value293 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value294);
                    if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { right_value294 = come_decrement_ref_count(right_value294, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[4] = right_value294, right_value294 = (void*)0;
                    __freed_obj__ = 0;
                }
            }
            if(var_name_292 && !__freed_obj__) { var_name_292 = come_decrement_ref_count(var_name_292, (void*)0, (void*)0, 0, 0, 0); }
            if(result_type_293 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_293, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(result_type2_294 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_294, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(generics_fun_name_175 && !__freed_obj__) { generics_fun_name_175 = come_decrement_ref_count(generics_fun_name_175, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_184 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_184, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_type2_185 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_185, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_types_186 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_186, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_params_197 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_197, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(label_params_201 && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_201, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_287 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_287, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_value2_291 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_291, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result187__ = (_Bool)1;
    if(obj_value_135 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_135, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_136 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_136, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result187__;
    if(obj_value_135 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_135, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_136 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_136, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional219;
struct tuple2$2charphsTypeph* result_141;
struct tuple2$2charphsTypeph* __result93__;
_Bool _if_conditional220;
struct tuple2$2charphsTypeph* __result94__;
struct tuple2$2charphsTypeph* result_142;
struct tuple2$2charphsTypeph* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_141, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_142, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional219=self==((void*)0),        _if_conditional219) {
            memset(&result_141,0,sizeof(struct tuple2$2charphsTypeph*));
            __result93__ = __result_obj__ = result_141;
            return __result93__;
        }
        self->it=self->head;
        if(_if_conditional220=self->it,        _if_conditional220) {
            __result94__ = __result_obj__ = self->it->item;
            return __result94__;
        }
        memset(&result_142,0,sizeof(struct tuple2$2charphsTypeph*));
        __result95__ = __result_obj__ = result_142;
        return __result95__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result96__ = self==((void*)0)||self->it==((void*)0);
        return __result96__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional221;
struct tuple2$2charphsTypeph* result_144;
struct tuple2$2charphsTypeph* __result97__;
_Bool _if_conditional222;
struct tuple2$2charphsTypeph* __result98__;
struct tuple2$2charphsTypeph* result_145;
struct tuple2$2charphsTypeph* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_144, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_145, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional221=self==((void*)0)||self->it==((void*)0),        _if_conditional221) {
            memset(&result_144,0,sizeof(struct tuple2$2charphsTypeph*));
            __result97__ = __result_obj__ = result_144;
            return __result97__;
        }
        self->it=self->it->next;
        if(_if_conditional222=self->it,        _if_conditional222) {
            __result98__ = __result_obj__ = self->it->item;
            return __result98__;
        }
        memset(&result_145,0,sizeof(struct tuple2$2charphsTypeph*));
        __result99__ = __result_obj__ = result_145;
        return __result99__;
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1CVALUEph* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result100__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result100__;
            if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1CVALUEph* it_149;
_Bool _while_condtional24;
struct list_item$1CVALUEph* prev_it_150;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_149, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_150, 0, sizeof(struct list_item$1CVALUEph*));
                it_149=self->head;
                while(_while_condtional24=it_149!=((void*)0),                _while_condtional24) {
                    prev_it_150=it_149;
                    it_149=it_149->next;
                    if(prev_it_150 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_150, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional225;
struct tuple2$2charphsNodeph* result_154;
struct tuple2$2charphsNodeph* __result101__;
_Bool _if_conditional226;
struct tuple2$2charphsNodeph* __result102__;
struct tuple2$2charphsNodeph* result_155;
struct tuple2$2charphsNodeph* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_154, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_155, 0, sizeof(struct tuple2$2charphsNodeph*));
            if(_if_conditional225=self==((void*)0),            _if_conditional225) {
                memset(&result_154,0,sizeof(struct tuple2$2charphsNodeph*));
                __result101__ = __result_obj__ = result_154;
                return __result101__;
            }
            self->it=self->head;
            if(_if_conditional226=self->it,            _if_conditional226) {
                __result102__ = __result_obj__ = self->it->item;
                return __result102__;
            }
            memset(&result_155,0,sizeof(struct tuple2$2charphsNodeph*));
            __result103__ = __result_obj__ = result_155;
            return __result103__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result104__ = self==((void*)0)||self->it==((void*)0);
            return __result104__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional227;
struct tuple2$2charphsNodeph* result_157;
struct tuple2$2charphsNodeph* __result105__;
_Bool _if_conditional228;
struct tuple2$2charphsNodeph* __result106__;
struct tuple2$2charphsNodeph* result_158;
struct tuple2$2charphsNodeph* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_157, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_158, 0, sizeof(struct tuple2$2charphsNodeph*));
            if(_if_conditional227=self==((void*)0)||self->it==((void*)0),            _if_conditional227) {
                memset(&result_157,0,sizeof(struct tuple2$2charphsNodeph*));
                __result105__ = __result_obj__ = result_157;
                return __result105__;
            }
            self->it=self->it->next;
            if(_if_conditional228=self->it,            _if_conditional228) {
                __result106__ = __result_obj__ = self->it->item;
                return __result106__;
            }
            memset(&result_158,0,sizeof(struct tuple2$2charphsNodeph*));
            __result107__ = __result_obj__ = result_158;
            return __result107__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional231;
struct list_item$1sTypeph* it_162;
int i_163;
_Bool _while_condtional25;
_Bool _if_conditional232;
struct sType* __result109__;
struct sType* default_value_164;
struct sType* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_162, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_163, 0, sizeof(int));
memset(&default_value_164, 0, sizeof(struct sType*));
                    if(_if_conditional231=position<0,                    _if_conditional231) {
                        position+=self->len;
                    }
                    it_162=self->head;
                    i_163=0;
                    while(_while_condtional25=it_162!=((void*)0),                    _while_condtional25) {
                        if(_if_conditional232=position==i_163,                        _if_conditional232) {
                            __result109__ = __result_obj__ = it_162->item;
                            return __result109__;
                        }
                        it_162=it_162->next;
                        i_163++;
                    }
                    memset(&default_value_164,0,sizeof(struct sType*));
                    __result110__ = __result_obj__ = default_value_164;
                    if(default_value_164 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_164, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result110__;
                    if(default_value_164 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_164, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional234;
struct CVALUE* result_168;
struct CVALUE* __result111__;
_Bool _if_conditional235;
struct CVALUE* __result112__;
struct CVALUE* result_169;
struct CVALUE* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_168, 0, sizeof(struct CVALUE*));
memset(&result_169, 0, sizeof(struct CVALUE*));
            if(_if_conditional234=self==((void*)0),            _if_conditional234) {
                memset(&result_168,0,sizeof(struct CVALUE*));
                __result111__ = __result_obj__ = result_168;
                return __result111__;
            }
            self->it=self->head;
            if(_if_conditional235=self->it,            _if_conditional235) {
                __result112__ = __result_obj__ = self->it->item;
                return __result112__;
            }
            memset(&result_169,0,sizeof(struct CVALUE*));
            __result113__ = __result_obj__ = result_169;
            return __result113__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result114__ = self==((void*)0)||self->it==((void*)0);
            return __result114__;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional236;
struct CVALUE* result_171;
struct CVALUE* __result115__;
_Bool _if_conditional237;
struct CVALUE* __result116__;
struct CVALUE* result_172;
struct CVALUE* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_171, 0, sizeof(struct CVALUE*));
memset(&result_172, 0, sizeof(struct CVALUE*));
            if(_if_conditional236=self==((void*)0)||self->it==((void*)0),            _if_conditional236) {
                memset(&result_171,0,sizeof(struct CVALUE*));
                __result115__ = __result_obj__ = result_171;
                return __result115__;
            }
            self->it=self->it->next;
            if(_if_conditional237=self->it,            _if_conditional237) {
                __result116__ = __result_obj__ = self->it->item;
                return __result116__;
            }
            memset(&result_172,0,sizeof(struct CVALUE*));
            __result117__ = __result_obj__ = result_172;
            return __result117__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __result118__ = self->len;
                return __result118__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sFun* default_value_179;
unsigned int hash_180;
unsigned int it_181;
_Bool _while_condtional26;
_Bool _if_conditional241;
_Bool _if_conditional242;
struct sFun* __result119__;
_Bool _if_conditional258;
_Bool _if_conditional259;
struct sFun* __result120__;
struct sFun* __result121__;
void* right_value148;
void* right_value149;
struct sFun* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_179, 0, sizeof(struct sFun*));
memset(&hash_180, 0, sizeof(unsigned int));
memset(&it_181, 0, sizeof(unsigned int));
right_value148 = (void*)0;
right_value149 = (void*)0;
                memset(&default_value_179,0,sizeof(struct sFun*));
                hash_180=string_get_hash_key(((char*)key))%self->size;
                it_181=hash_180;
                while(_while_condtional26=(_Bool)1,                _while_condtional26) {
                    if(_if_conditional241=self->item_existance[it_181],                    _if_conditional241) {
                        if(_if_conditional242=string_equals(self->keys[it_181],key),                        _if_conditional242) {
                            __result119__ = __result_obj__ = self->items[it_181];
                            if(default_value_179 && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value_179, (void*)0, (void*)0, 0, 0, 0, 0); }
                            return __result119__;
                        }
                        it_181++;
                        if(_if_conditional258=it_181>=self->size,                        _if_conditional258) {
                            it_181=0;
                        }
                        else {
                            if(_if_conditional259=it_181==hash_180,                            _if_conditional259) {
                                __result120__ = __result_obj__ = default_value_179;
                                if(default_value_179 && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value_179, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result120__;
                            }
                        }
                    }
                    else {
                        __result121__ = __result_obj__ = default_value_179;
                        if(default_value_179 && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value_179, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result121__;
                    }
                }
                __result123__ = __result_obj__ = ((struct optional$2sFunphbool*)(right_value149=optional$2sFunphbool_initialize(((struct optional$2sFunphbool*)(right_value148=(struct optional$2sFunphbool*)come_calloc(1, sizeof(struct optional$2sFunphbool)*(1), "./comelang2.h", 1630, "struct optional$2sFunphbool"))),(struct sFun*)come_increment_ref_count(default_value_179),(_Bool)0)));
                if(default_value_179 && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value_179, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value148);
                if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value148, right_value148 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value149);
                if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunphboolp_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value149, right_value149 = (void*)0;
                __freed_obj__ = 0;
                return __result123__;
                if(default_value_179 && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value_179, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional243;
_Bool _if_conditional244;
_Bool _if_conditional245;
_Bool _if_conditional246;
_Bool _if_conditional247;
_Bool _if_conditional248;
_Bool _if_conditional249;
_Bool _if_conditional252;
_Bool _if_conditional253;
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool _if_conditional256;
_Bool _if_conditional257;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional243=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional243) {
                                    if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(_if_conditional244=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional244) {
                                    if(self->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional245=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional245) {
                                    if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional246=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional246) {
                                    if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional247=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                _if_conditional247) {
                                    if(self->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional248=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                _if_conditional248) {
                                    if(self->mLambdaType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional249=self!=((void*)0)&&self->mBlock!=((void*)0),                                _if_conditional249) {
                                    if(self->mBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional252=self!=((void*)0)&&self->mSource!=((void*)0),                                _if_conditional252) {
                                    if(self->mSource && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional253=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                _if_conditional253) {
                                    if(self->mSourceHead && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional254=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                _if_conditional254) {
                                    if(self->mSourceHead2 && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional255=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                _if_conditional255) {
                                    if(self->mSourceDefer && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional256=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                _if_conditional256) {
                                    if(self->mComeHeader && !__freed_obj__) { self->mComeHeader = come_decrement_ref_count(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(_if_conditional257=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional257) {
                                    if(self->mDeclareSName && !__freed_obj__) { self->mDeclareSName = come_decrement_ref_count(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional250;
_Bool _if_conditional251;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        if(_if_conditional250=self!=((void*)0)&&self->mNodes!=((void*)0),                                        _if_conditional250) {
                                            if(self->mNodes && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        if(_if_conditional251=self!=((void*)0)&&self->mVarTable!=((void*)0),                                        _if_conditional251) {
                                            if(self->mVarTable && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
}

static struct optional$2sFunphbool* optional$2sFunphbool_initialize(struct optional$2sFunphbool* self, struct sFun* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sFun* __dec_obj56;
struct optional$2sFunphbool* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __dec_obj56=self->v1;
                    self->v1=(struct sFun*)come_increment_ref_count(v1);
                    if(__dec_obj56) { come_call_finalizer(sFun_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->v2=v2;
                    __result122__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(sFun_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result122__;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(sFun_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sFunphboolp_finalize(struct optional$2sFunphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional260;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional260=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional260) {
                            if(self->v1 && !__freed_obj__) { come_call_finalizer(sFun_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_182;
unsigned int it_183;
_Bool _while_condtional27;
_Bool _if_conditional263;
_Bool _if_conditional264;
struct sFun* __result124__;
_Bool _if_conditional265;
_Bool _if_conditional266;
struct sFun* __result125__;
struct sFun* __result126__;
struct sFun* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_182, 0, sizeof(unsigned int));
memset(&it_183, 0, sizeof(unsigned int));
                hash_182=string_get_hash_key(((char*)key))%self->size;
                it_183=hash_182;
                while(_while_condtional27=(_Bool)1,                _while_condtional27) {
                    if(_if_conditional263=self->item_existance[it_183],                    _if_conditional263) {
                        if(_if_conditional264=string_equals(self->keys[it_183],key),                        _if_conditional264) {
                            __result124__ = __result_obj__ = self->items[it_183];
                            if(default_value && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result124__;
                        }
                        it_183++;
                        if(_if_conditional265=it_183>=self->size,                        _if_conditional265) {
                            it_183=0;
                        }
                        else {
                            if(_if_conditional266=it_183==hash_182,                            _if_conditional266) {
                                __result125__ = __result_obj__ = default_value;
                                if(default_value && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result125__;
                            }
                        }
                    }
                    else {
                        __result126__ = __result_obj__ = default_value;
                        if(default_value && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result126__;
                    }
                }
                __result127__ = __result_obj__ = default_value;
                if(default_value && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result127__;
                if(default_value && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional269;
struct sType* result_188;
struct sType* __result129__;
_Bool _if_conditional270;
struct sType* __result130__;
struct sType* result_189;
struct sType* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_188, 0, sizeof(struct sType*));
memset(&result_189, 0, sizeof(struct sType*));
            if(_if_conditional269=self==((void*)0),            _if_conditional269) {
                memset(&result_188,0,sizeof(struct sType*));
                __result129__ = __result_obj__ = result_188;
                return __result129__;
            }
            self->it=self->head;
            if(_if_conditional270=self->it,            _if_conditional270) {
                __result130__ = __result_obj__ = self->it->item;
                return __result130__;
            }
            memset(&result_189,0,sizeof(struct sType*));
            __result131__ = __result_obj__ = result_189;
            return __result131__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result132__ = self==((void*)0)||self->it==((void*)0);
            return __result132__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional271;
struct sType* result_191;
struct sType* __result133__;
_Bool _if_conditional272;
struct sType* __result134__;
struct sType* result_192;
struct sType* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_191, 0, sizeof(struct sType*));
memset(&result_192, 0, sizeof(struct sType*));
            if(_if_conditional271=self==((void*)0)||self->it==((void*)0),            _if_conditional271) {
                memset(&result_191,0,sizeof(struct sType*));
                __result133__ = __result_obj__ = result_191;
                return __result133__;
            }
            self->it=self->it->next;
            if(_if_conditional272=self->it,            _if_conditional272) {
                __result134__ = __result_obj__ = self->it->item;
                return __result134__;
            }
            memset(&result_192,0,sizeof(struct sType*));
            __result135__ = __result_obj__ = result_192;
            return __result135__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional274;
void* right_value160;
struct list_item$1sTypeph* litem_193;
struct sType* __dec_obj59;
_Bool _if_conditional275;
void* right_value161;
struct list_item$1sTypeph* litem_194;
struct sType* __dec_obj60;
void* right_value162;
struct list_item$1sTypeph* litem_195;
struct sType* __dec_obj61;
struct list$1sTypeph* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value160 = (void*)0;
memset(&litem_193, 0, sizeof(struct list_item$1sTypeph*));
right_value161 = (void*)0;
memset(&litem_194, 0, sizeof(struct list_item$1sTypeph*));
right_value162 = (void*)0;
memset(&litem_195, 0, sizeof(struct list_item$1sTypeph*));
                    if(_if_conditional274=self->len==0,                    _if_conditional274) {
                        litem_193=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value160=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 282, "struct list_item$1sTypeph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value160);
                        if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value160, right_value160 = (void*)0;
                        __freed_obj__ = 0;
                        litem_193->prev=((void*)0);
                        litem_193->next=((void*)0);
                        __dec_obj59=litem_193->item;
                        litem_193->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj59) { come_call_finalizer(sType_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail=litem_193;
                        self->head=litem_193;
                    }
                    else {
                        if(_if_conditional275=self->len==1,                        _if_conditional275) {
                            litem_194=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value161=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 292, "struct list_item$1sTypeph"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value161);
                            if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value161, right_value161 = (void*)0;
                            __freed_obj__ = 0;
                            litem_194->prev=self->head;
                            litem_194->next=((void*)0);
                            __dec_obj60=litem_194->item;
                            litem_194->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj60) { come_call_finalizer(sType_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->tail=litem_194;
                            self->head->next=litem_194;
                        }
                        else {
                            litem_195=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value162=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 302, "struct list_item$1sTypeph"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value162);
                            if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value162, right_value162 = (void*)0;
                            __freed_obj__ = 0;
                            litem_195->prev=self->tail;
                            litem_195->next=((void*)0);
                            __dec_obj61=litem_195->item;
                            litem_195->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj61) { come_call_finalizer(sType_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->tail->next=litem_195;
                            self->tail=litem_195;
                        }
                    }
                    self->len++;
                    __result136__ = __result_obj__ = self;
                    if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result136__;
                    if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct map$2charphCVALUEph* map$2charphCVALUEph_initialize(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value168;
void* right_value169;
void* right_value170;
int i_198;
_Bool _for_condtionalA12;
void* right_value171;
void* right_value172;
struct list$1charp* __dec_obj62;
struct map$2charphCVALUEph* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value168 = (void*)0;
right_value169 = (void*)0;
right_value170 = (void*)0;
memset(&i_198, 0, sizeof(int));
right_value171 = (void*)0;
right_value172 = (void*)0;
            self->keys=(char**)come_increment_ref_count(((char**)(right_value168=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1140, "char*"))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value168);
            if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value168, right_value168 = (void*)0;
            __freed_obj__ = 0;
            self->items=(struct CVALUE**)come_increment_ref_count(((struct CVALUE**)(right_value169=(struct CVALUE**)come_calloc(1, sizeof(struct CVALUE*)*(1*(1024)), "./comelang2.h", 1141, "struct CVALUE*"))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value169);
            if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value169, right_value169 = (void*)0;
            __freed_obj__ = 0;
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value170=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1142, "_Bool"))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value170);
            if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { right_value170 = come_decrement_ref_count(right_value170, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value170, right_value170 = (void*)0;
            __freed_obj__ = 0;
            for(
            i_198=0 ,            0;            _for_condtionalA12=            i_198<1024 ,            _for_condtionalA12;            i_198++ ,            0            ){
                self->item_existance[i_198]=(_Bool)0;
            }
            self->size=1024;
            self->len=0;
            __dec_obj62=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value172=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value171=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1152, "struct list$1charp"))))))));
            if(__dec_obj62) { come_call_finalizer(list$1charp_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value171);
            if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value171, right_value171 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value172);
            if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value172, right_value172 = (void*)0;
            __freed_obj__ = 0;
            self->it=0;
            __result138__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result138__;
            if(self && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charp* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result137__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result137__;
                if(self && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1charp_finalize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void map$2charphCVALUEphp_finalize(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_199;
_Bool _for_condtionalA13;
_Bool _if_conditional276;
_Bool _if_conditional277;
int i_200;
_Bool _for_condtionalA14;
_Bool _if_conditional278;
_Bool _if_conditional279;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_199, 0, sizeof(int));
memset(&i_200, 0, sizeof(int));
                for(
                i_199=0 ,                0;                _for_condtionalA13=                i_199<self->size ,                _for_condtionalA13;                i_199++ ,                0                ){
                    if(_if_conditional276=self->item_existance[i_199],                    _if_conditional276) {
                        if(_if_conditional277=1,                        _if_conditional277) {
                            if(self->items[i_199] && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,self->items[i_199], (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                    }
                }
                come_free((char*)self->items);
                for(
                i_200=0 ,                0;                _for_condtionalA14=                i_200<self->size ,                _for_condtionalA14;                i_200++ ,                0                ){
                    if(_if_conditional278=self->item_existance[i_200],                    _if_conditional278) {
                        if(_if_conditional279=1,                        _if_conditional279) {
                            if(self->keys[i_200] && !__freed_obj__) { self->keys[i_200] = come_decrement_ref_count(self->keys[i_200], (void*)0, (void*)0, 0, 0, 0); }
                        }
                    }
                }
                come_free((char*)self->keys);
                if(self->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional283;
struct list_item$1charph* it_207;
int i_208;
_Bool _while_condtional28;
_Bool _if_conditional284;
char* __result139__;
char* default_value_209;
char* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_207, 0, sizeof(struct list_item$1charph*));
memset(&i_208, 0, sizeof(int));
memset(&default_value_209, 0, sizeof(char*));
                            if(_if_conditional283=position<0,                            _if_conditional283) {
                                position+=self->len;
                            }
                            it_207=self->head;
                            i_208=0;
                            while(_while_condtional28=it_207!=((void*)0),                            _while_condtional28) {
                                if(_if_conditional284=position==i_208,                                _if_conditional284) {
                                    __result139__ = __result_obj__ = it_207->item;
                                    return __result139__;
                                }
                                it_207=it_207->next;
                                i_208++;
                            }
                            memset(&default_value_209,0,sizeof(char*));
                            __result140__ = __result_obj__ = default_value_209;
                            if(default_value_209 && !__freed_obj__) { default_value_209 = come_decrement_ref_count(default_value_209, (void*)0, (void*)0, 0, 1, 0); }
                            return __result140__;
                            if(default_value_209 && !__freed_obj__) { default_value_209 = come_decrement_ref_count(default_value_209, (void*)0, (void*)0, 0, 0, 0); }
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional287;
char* result_213;
char* __result142__;
_Bool _if_conditional288;
char* __result143__;
char* result_214;
char* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_213, 0, sizeof(char*));
memset(&result_214, 0, sizeof(char*));
                        if(_if_conditional287=self==((void*)0),                        _if_conditional287) {
                            memset(&result_213,0,sizeof(char*));
                            __result142__ = __result_obj__ = result_213;
                            return __result142__;
                        }
                        self->it=self->head;
                        if(_if_conditional288=self->it,                        _if_conditional288) {
                            __result143__ = __result_obj__ = self->it->item;
                            return __result143__;
                        }
                        memset(&result_214,0,sizeof(char*));
                        __result144__ = __result_obj__ = result_214;
                        return __result144__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result145__ = self==((void*)0)||self->it==((void*)0);
                        return __result145__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional289;
char* result_216;
char* __result146__;
_Bool _if_conditional290;
char* __result147__;
char* result_217;
char* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_216, 0, sizeof(char*));
memset(&result_217, 0, sizeof(char*));
                        if(_if_conditional289=self==((void*)0)||self->it==((void*)0),                        _if_conditional289) {
                            memset(&result_216,0,sizeof(char*));
                            __result146__ = __result_obj__ = result_216;
                            return __result146__;
                        }
                        self->it=self->it->next;
                        if(_if_conditional290=self->it,                        _if_conditional290) {
                            __result147__ = __result_obj__ = self->it->item;
                            return __result147__;
                        }
                        memset(&result_217,0,sizeof(char*));
                        __result148__ = __result_obj__ = result_217;
                        return __result148__;
}

static struct map$2charphCVALUEph* map$2charphCVALUEph_insert(struct map$2charphCVALUEph* self, char* key, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional297;
unsigned int hash_235;
unsigned int it_236;
_Bool _while_condtional31;
_Bool _if_conditional309;
_Bool _if_conditional310;
_Bool _if_conditional311;
_Bool _if_conditional312;
_Bool _if_conditional313;
_Bool _if_conditional314;
_Bool _if_conditional315;
_Bool _if_conditional316;
_Bool same_key_exist_237;
char* it2_238;
_Bool _for_condtionalA18;
_Bool _if_conditional317;
_Bool _if_conditional318;
struct map$2charphCVALUEph* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_235, 0, sizeof(unsigned int));
memset(&it_236, 0, sizeof(unsigned int));
memset(&same_key_exist_237, 0, sizeof(_Bool));
memset(&it2_238, 0, sizeof(char*));
                        if(_if_conditional297=self->len*10>=self->size,                        _if_conditional297) {
                            map$2charphCVALUEph_rehash(self);
                        }
                        hash_235=string_get_hash_key(key)%self->size;
                        it_236=hash_235;
                        while(_while_condtional31=(_Bool)1,                        _while_condtional31) {
                            if(_if_conditional309=self->item_existance[it_236],                            _if_conditional309) {
                                if(_if_conditional310=string_equals(self->keys[it_236],key),                                _if_conditional310) {
                                    if(_if_conditional311=1,                                    _if_conditional311) {
                                        list$1charp_remove(self->key_list,self->keys[it_236]);
                                        if(self->keys[it_236] && !__freed_obj__) { self->keys[it_236] = come_decrement_ref_count(self->keys[it_236], (void*)0, (void*)0, 0, 0, 0); }
                                        self->keys[it_236]=(char*)come_increment_ref_count(key);
                                    }
                                    else {
                                        list$1charp_remove(self->key_list,self->keys[it_236]);
                                        self->keys[it_236]=key;
                                    }
                                    if(_if_conditional312=1,                                    _if_conditional312) {
                                        if(self->items[it_236] && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,self->items[it_236], (void*)0, (void*)0, 0, 0, 0, 0); }
                                        self->items[it_236]=(struct CVALUE*)come_increment_ref_count(item);
                                    }
                                    else {
                                        self->items[it_236]=item;
                                    }
                                    break;
                                }
                                it_236++;
                                if(_if_conditional313=it_236>=self->size,                                _if_conditional313) {
                                    it_236=0;
                                }
                                else {
                                    if(_if_conditional314=it_236==hash_235,                                    _if_conditional314) {
                                        printf("unexpected error in map.insert\n");
                                        stackframe();
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                self->item_existance[it_236]=(_Bool)1;
                                if(_if_conditional315=1,                                _if_conditional315) {
                                    self->keys[it_236]=(char*)come_increment_ref_count(key);
                                }
                                else {
                                    self->keys[it_236]=key;
                                }
                                if(_if_conditional316=1,                                _if_conditional316) {
                                    self->items[it_236]=(struct CVALUE*)come_increment_ref_count(item);
                                }
                                else {
                                    self->items[it_236]=item;
                                }
                                self->len++;
                                break;
                            }
                        }
                        same_key_exist_237=(_Bool)0;
                        for(
                        it2_238=list$1charp_begin(self->key_list) ,                        0;                        _for_condtionalA18=                        !list$1charp_end(self->key_list) ,                        _for_condtionalA18;                        it2_238=list$1charp_next(self->key_list) ,                        0                        ){
                            if(_if_conditional317=string_equals(it2_238,key),                            _if_conditional317) {
                                same_key_exist_237=(_Bool)1;
                            }
                        }
                        if(_if_conditional318=!same_key_exist_237,                        _if_conditional318) {
                            list$1charp_push_back(self->key_list,key);
                        }
                        __result160__ = __result_obj__ = self;
                        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result160__;
                        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphCVALUEph_rehash(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_218;
void* right_value199;
char** keys_219;
void* right_value200;
struct CVALUE** items_220;
void* right_value201;
_Bool* item_existance_221;
int len_222;
char* it_225;
_Bool _for_condtionalA17;
struct CVALUE* default_value_228;
void* right_value202;
struct CVALUE* it2_231;
unsigned int hash_232;
int n_233;
_Bool _while_condtional30;
_Bool _if_conditional306;
_Bool _if_conditional307;
_Bool _if_conditional308;
struct CVALUE* default_value_234;
void* right_value203;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_218, 0, sizeof(int));
right_value199 = (void*)0;
memset(&keys_219, 0, sizeof(char**));
right_value200 = (void*)0;
memset(&items_220, 0, sizeof(struct CVALUE**));
right_value201 = (void*)0;
memset(&item_existance_221, 0, sizeof(_Bool*));
memset(&len_222, 0, sizeof(int));
memset(&it_225, 0, sizeof(char*));
memset(&default_value_228, 0, sizeof(struct CVALUE*));
right_value202 = (void*)0;
memset(&it2_231, 0, sizeof(struct CVALUE*));
memset(&hash_232, 0, sizeof(unsigned int));
memset(&n_233, 0, sizeof(int));
memset(&default_value_234, 0, sizeof(struct CVALUE*));
right_value203 = (void*)0;
                                size_218=self->size*10;
                                keys_219=(char**)come_increment_ref_count(((char**)(right_value199=(char**)come_calloc(1, sizeof(char*)*(1*(size_218)), "./comelang2.h", 1388, "char*"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value199);
                                if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { right_value199 = come_decrement_ref_count(right_value199, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value199, right_value199 = (void*)0;
                                __freed_obj__ = 0;
                                items_220=(struct CVALUE**)come_increment_ref_count(((struct CVALUE**)(right_value200=(struct CVALUE**)come_calloc(1, sizeof(struct CVALUE*)*(1*(size_218)), "./comelang2.h", 1389, "struct CVALUE*"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value200);
                                if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value200, right_value200 = (void*)0;
                                __freed_obj__ = 0;
                                item_existance_221=(_Bool*)come_increment_ref_count(((_Bool*)(right_value201=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_218)), "./comelang2.h", 1390, "_Bool"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value201);
                                if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { right_value201 = come_decrement_ref_count(right_value201, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value201, right_value201 = (void*)0;
                                __freed_obj__ = 0;
                                len_222=0;
                                for(
                                it_225=map$2charphCVALUEph_begin(self) ,                                0;                                _for_condtionalA17=                                !map$2charphCVALUEph_end(self) ,                                _for_condtionalA17;                                it_225=map$2charphCVALUEph_next(self) ,                                0                                ){
                                    memset(&default_value_228,0,sizeof(struct CVALUE*));
                                    it2_231=((struct CVALUE*)(right_value202=map$2charphCVALUEph_at(self,it_225,default_value_228)));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value202);
                                    if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value202, right_value202 = (void*)0;
                                    __freed_obj__ = 0;
                                    hash_232=string_get_hash_key(it_225)%size_218;
                                    n_233=hash_232;
                                    while(_while_condtional30=(_Bool)1,                                    _while_condtional30) {
                                        if(_if_conditional306=item_existance_221[n_233],                                        _if_conditional306) {
                                            n_233++;
                                            if(_if_conditional307=n_233>=size_218,                                            _if_conditional307) {
                                                n_233=0;
                                            }
                                            else {
                                                if(_if_conditional308=n_233==hash_232,                                                _if_conditional308) {
                                                    printf("unexpected error in map.rehash(1)\n");
                                                    stackframe();
                                                    exit(2);
                                                }
                                            }
                                        }
                                        else {
                                            item_existance_221[n_233]=(_Bool)1;
                                            keys_219[n_233]=it_225;
                                            items_220[n_233]=((struct CVALUE*)(right_value203=map$2charphCVALUEph_at(self,it_225,default_value_234)));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value203);
                                            if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value203, right_value203 = (void*)0;
                                            __freed_obj__ = 0;
                                            len_222++;
                                            break;
                                        }
                                    }
                                }
                                come_free((char*)self->items);
                                if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                                come_free((char*)self->keys);
                                self->keys=keys_219;
                                self->items=items_220;
                                self->item_existance=item_existance_221;
                                self->size=size_218;
                                self->len=len_222;
}

static char* map$2charphCVALUEph_begin(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional298;
char* result_223;
char* __result149__;
_Bool _if_conditional299;
char* __result150__;
char* result_224;
char* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_223, 0, sizeof(char*));
memset(&result_224, 0, sizeof(char*));
                                    if(_if_conditional298=self==((void*)0),                                    _if_conditional298) {
                                        memset(&result_223,0,sizeof(char*));
                                        __result149__ = __result_obj__ = result_223;
                                        return __result149__;
                                    }
                                    self->key_list->it=self->key_list->head;
                                    if(_if_conditional299=self->key_list->it,                                    _if_conditional299) {
                                        __result150__ = __result_obj__ = self->key_list->it->item;
                                        return __result150__;
                                    }
                                    memset(&result_224,0,sizeof(char*));
                                    __result151__ = __result_obj__ = result_224;
                                    return __result151__;
}

static _Bool map$2charphCVALUEph_end(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    __result152__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                                    return __result152__;
}

static char* map$2charphCVALUEph_next(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional300;
char* result_226;
char* __result153__;
_Bool _if_conditional301;
char* __result154__;
char* result_227;
char* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_226, 0, sizeof(char*));
memset(&result_227, 0, sizeof(char*));
                                    if(_if_conditional300=self==((void*)0)||self->key_list->it==((void*)0),                                    _if_conditional300) {
                                        memset(&result_226,0,sizeof(char*));
                                        __result153__ = __result_obj__ = result_226;
                                        return __result153__;
                                    }
                                    self->key_list->it=self->key_list->it->next;
                                    if(_if_conditional301=self->key_list->it,                                    _if_conditional301) {
                                        __result154__ = __result_obj__ = self->key_list->it->item;
                                        return __result154__;
                                    }
                                    memset(&result_227,0,sizeof(char*));
                                    __result155__ = __result_obj__ = result_227;
                                    return __result155__;
}

static struct CVALUE* map$2charphCVALUEph_at(struct map$2charphCVALUEph* self, char* key, struct CVALUE* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_229;
unsigned int it_230;
_Bool _while_condtional29;
_Bool _if_conditional302;
_Bool _if_conditional303;
struct CVALUE* __result156__;
_Bool _if_conditional304;
_Bool _if_conditional305;
struct CVALUE* __result157__;
struct CVALUE* __result158__;
struct CVALUE* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_229, 0, sizeof(unsigned int));
memset(&it_230, 0, sizeof(unsigned int));
                                        hash_229=string_get_hash_key(((char*)key))%self->size;
                                        it_230=hash_229;
                                        while(_while_condtional29=(_Bool)1,                                        _while_condtional29) {
                                            if(_if_conditional302=self->item_existance[it_230],                                            _if_conditional302) {
                                                if(_if_conditional303=string_equals(self->keys[it_230],key),                                                _if_conditional303) {
                                                    __result156__ = __result_obj__ = self->items[it_230];
                                                    if(default_value && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                    return __result156__;
                                                }
                                                it_230++;
                                                if(_if_conditional304=it_230>=self->size,                                                _if_conditional304) {
                                                    it_230=0;
                                                }
                                                else {
                                                    if(_if_conditional305=it_230==hash_229,                                                    _if_conditional305) {
                                                        __result157__ = __result_obj__ = default_value;
                                                        if(default_value && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                        return __result157__;
                                                    }
                                                }
                                            }
                                            else {
                                                __result158__ = __result_obj__ = default_value;
                                                if(default_value && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                return __result158__;
                                            }
                                        }
                                        __result159__ = __result_obj__ = default_value;
                                        if(default_value && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        return __result159__;
                                        if(default_value && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result161__ = self->len;
            return __result161__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result162__ = self->len;
            return __result162__;
}

static struct CVALUE* map$2charphCVALUEphp_operator_load_element(struct map$2charphCVALUEph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct CVALUE* default_value_241;
unsigned int hash_242;
unsigned int it_243;
_Bool _while_condtional32;
_Bool _if_conditional320;
_Bool _if_conditional321;
struct CVALUE* __result163__;
_Bool _if_conditional322;
_Bool _if_conditional323;
struct CVALUE* __result164__;
struct CVALUE* __result165__;
void* right_value208;
void* right_value209;
struct CVALUE* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_241, 0, sizeof(struct CVALUE*));
memset(&hash_242, 0, sizeof(unsigned int));
memset(&it_243, 0, sizeof(unsigned int));
right_value208 = (void*)0;
right_value209 = (void*)0;
                    memset(&default_value_241,0,sizeof(struct CVALUE*));
                    hash_242=string_get_hash_key(((char*)key))%self->size;
                    it_243=hash_242;
                    while(_while_condtional32=(_Bool)1,                    _while_condtional32) {
                        if(_if_conditional320=self->item_existance[it_243],                        _if_conditional320) {
                            if(_if_conditional321=string_equals(self->keys[it_243],key),                            _if_conditional321) {
                                __result163__ = __result_obj__ = self->items[it_243];
                                if(default_value_241 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_241, (void*)0, (void*)0, 0, 0, 0, 0); }
                                return __result163__;
                            }
                            it_243++;
                            if(_if_conditional322=it_243>=self->size,                            _if_conditional322) {
                                it_243=0;
                            }
                            else {
                                if(_if_conditional323=it_243==hash_242,                                _if_conditional323) {
                                    __result164__ = __result_obj__ = default_value_241;
                                    if(default_value_241 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_241, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    return __result164__;
                                }
                            }
                        }
                        else {
                            __result165__ = __result_obj__ = default_value_241;
                            if(default_value_241 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_241, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result165__;
                        }
                    }
                    __result167__ = __result_obj__ = ((struct optional$2CVALUEphbool*)(right_value209=optional$2CVALUEphbool_initialize(((struct optional$2CVALUEphbool*)(right_value208=(struct optional$2CVALUEphbool*)come_calloc(1, sizeof(struct optional$2CVALUEphbool)*(1), "./comelang2.h", 1630, "struct optional$2CVALUEphbool"))),(struct CVALUE*)come_increment_ref_count(default_value_241),(_Bool)0)));
                    if(default_value_241 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_241, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value208);
                    if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { right_value208 = come_decrement_ref_count(right_value208, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value208, right_value208 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value209);
                    if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value209, right_value209 = (void*)0;
                    __freed_obj__ = 0;
                    return __result167__;
                    if(default_value_241 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_241, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2CVALUEphbool* optional$2CVALUEphbool_initialize(struct optional$2CVALUEphbool* self, struct CVALUE* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct CVALUE* __dec_obj63;
struct optional$2CVALUEphbool* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __dec_obj63=self->v1;
                        self->v1=(struct CVALUE*)come_increment_ref_count(v1);
                        if(__dec_obj63) { come_call_finalizer(CVALUE_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->v2=v2;
                        __result166__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result166__;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2CVALUEphboolp_finalize(struct optional$2CVALUEphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional324;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional324=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional324) {
                                if(self->v1 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static int map$2charphCVALUEph_length(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result170__ = self->len;
            return __result170__;
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __result171__ = self->len;
                return __result171__;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional332;
_Bool _if_conditional333;
struct list$1CVALUEph* __result172__;
struct list_item$1CVALUEph* it_253;
int i_254;
_Bool _while_condtional33;
_Bool _if_conditional334;
struct CVALUE* __dec_obj66;
struct list$1CVALUEph* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_253, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_254, 0, sizeof(int));
                        if(_if_conditional332=position<0,                        _if_conditional332) {
                            position+=self->len;
                        }
                        if(_if_conditional333=position>=self->len,                        _if_conditional333) {
                            list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
                            __result172__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result172__;
                        }
                        it_253=self->head;
                        i_254=0;
                        while(_while_condtional33=it_253!=((void*)0),                        _while_condtional33) {
                            if(_if_conditional334=position==i_254,                            _if_conditional334) {
                                __dec_obj66=it_253->item;
                                it_253->item=(struct CVALUE*)come_increment_ref_count(item);
                                if(__dec_obj66) { come_call_finalizer(CVALUE_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0, 0); }
                                break;
                            }
                            it_253=it_253->next;
                            i_254++;
                        }
                        __result173__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result173__;
                        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional335;
struct CVALUE* __result174__;
void* right_value224;
struct CVALUE* result_255;
_Bool _if_conditional336;
void* right_value225;
char* __dec_obj67;
_Bool _if_conditional337;
void* right_value226;
struct sType* __dec_obj68;
_Bool _if_conditional338;
struct CVALUE* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value224 = (void*)0;
memset(&result_255, 0, sizeof(struct CVALUE*));
right_value225 = (void*)0;
right_value226 = (void*)0;
                        if(_if_conditional335=self==(void*)0,                        _if_conditional335) {
                            __result174__ = __result_obj__ = (void*)0;
                            return __result174__;
                        }
                        result_255=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value224=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value224);
                        if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value224, right_value224 = (void*)0;
                        __freed_obj__ = 0;
                        if(_if_conditional336=self!=((void*)0)&&self->c_value!=((void*)0),                        _if_conditional336) {
                            __dec_obj67=result_255->c_value;
                            result_255->c_value=(char*)come_increment_ref_count(((char*)(right_value225=string_clone(self->c_value))));
                            if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value225);
                            if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { right_value225 = come_decrement_ref_count(right_value225, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value225, right_value225 = (void*)0;
                            __freed_obj__ = 0;
                        }
                        if(_if_conditional337=self!=((void*)0)&&self->type!=((void*)0),                        _if_conditional337) {
                            __dec_obj68=result_255->type;
                            result_255->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value226=sType_clone(self->type))));
                            if(__dec_obj68) { come_call_finalizer(sType_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value226);
                            if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value226, right_value226 = (void*)0;
                            __freed_obj__ = 0;
                        }
                        if(_if_conditional338=self!=((void*)0),                        _if_conditional338) {
                            result_255->var=self->var;
                        }
                        __result175__ = __result_obj__ = result_255;
                        if(result_255 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,result_255, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result175__;
                        if(result_255 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,result_255, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* default_value_262;
unsigned int hash_263;
unsigned int it_264;
_Bool _while_condtional34;
_Bool _if_conditional345;
_Bool _if_conditional346;
struct sClass* __result179__;
_Bool _if_conditional347;
_Bool _if_conditional348;
struct sClass* __result180__;
struct sClass* __result181__;
void* right_value240;
void* right_value241;
struct sClass* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_262, 0, sizeof(struct sClass*));
memset(&hash_263, 0, sizeof(unsigned int));
memset(&it_264, 0, sizeof(unsigned int));
right_value240 = (void*)0;
right_value241 = (void*)0;
                memset(&default_value_262,0,sizeof(struct sClass*));
                hash_263=string_get_hash_key(((char*)key))%self->size;
                it_264=hash_263;
                while(_while_condtional34=(_Bool)1,                _while_condtional34) {
                    if(_if_conditional345=self->item_existance[it_264],                    _if_conditional345) {
                        if(_if_conditional346=string_equals(self->keys[it_264],key),                        _if_conditional346) {
                            __result179__ = __result_obj__ = self->items[it_264];
                            if(default_value_262 && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value_262, (void*)0, (void*)0, 0, 0, 0, 0); }
                            return __result179__;
                        }
                        it_264++;
                        if(_if_conditional347=it_264>=self->size,                        _if_conditional347) {
                            it_264=0;
                        }
                        else {
                            if(_if_conditional348=it_264==hash_263,                            _if_conditional348) {
                                __result180__ = __result_obj__ = default_value_262;
                                if(default_value_262 && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value_262, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result180__;
                            }
                        }
                    }
                    else {
                        __result181__ = __result_obj__ = default_value_262;
                        if(default_value_262 && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value_262, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result181__;
                    }
                }
                __result183__ = __result_obj__ = ((struct optional$2sClassphbool*)(right_value241=optional$2sClassphbool_initialize(((struct optional$2sClassphbool*)(right_value240=(struct optional$2sClassphbool*)come_calloc(1, sizeof(struct optional$2sClassphbool)*(1), "./comelang2.h", 1630, "struct optional$2sClassphbool"))),(struct sClass*)come_increment_ref_count(default_value_262),(_Bool)0)));
                if(default_value_262 && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value_262, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value240);
                if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { right_value240 = come_decrement_ref_count(right_value240, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value240, right_value240 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value241);
                if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClassphboolp_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value241, right_value241 = (void*)0;
                __freed_obj__ = 0;
                return __result183__;
                if(default_value_262 && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value_262, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sClassphbool* optional$2sClassphbool_initialize(struct optional$2sClassphbool* self, struct sClass* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* __dec_obj70;
struct optional$2sClassphbool* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __dec_obj70=self->v1;
                    self->v1=(struct sClass*)come_increment_ref_count(v1);
                    if(__dec_obj70) { come_call_finalizer(sClass_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->v2=v2;
                    __result182__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sClassphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(sClass_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result182__;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sClassphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(sClass_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sClassphboolp_finalize(struct optional$2sClassphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional349;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional349=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional349) {
                            if(self->v1 && !__freed_obj__) { come_call_finalizer(sClass_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value295;
void* right_value296;
struct list$1tuple2$2charphsNodephph* params_296;
void* right_value300;
void* right_value301;
void* right_value302;
_Bool _if_conditional366;
_Bool _if_conditional367;
_Bool _while_condtional36;
_Bool _if_conditional368;
char* p_300;
int sline_301;
_Bool err_flag_302;
void* right_value303;
char* label_303;
_Bool _if_conditional369;
void* right_value304;
char* __dec_obj84;
_Bool _if_conditional370;
char* __dec_obj85;
_Bool no_comma_304;
void* right_value305;
struct sNode* node_305;
void* right_value306;
struct sNode* __dec_obj86;
void* right_value307;
void* right_value308;
_Bool _if_conditional371;
_Bool _if_conditional372;
struct buffer* method_block_306;
int method_block_sline_307;
_Bool _if_conditional373;
char* head_308;
void* right_value309;
char* tail_309;
void* right_value310;
void* right_value311;
struct buffer* __dec_obj87;
int len_310;
void* right_value312;
char* mem_311;
void* right_value313;
void* right_value314;
void* right_value315;
struct sNode* _inf_value2;
struct sMethodCallNode* _inf_obj_value2;
void* right_value322;
struct sNode* node_313;
void* right_value323;
struct sNode* __dec_obj93;
struct sNode* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value295 = (void*)0;
right_value296 = (void*)0;
memset(&params_296, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
right_value300 = (void*)0;
right_value301 = (void*)0;
right_value302 = (void*)0;
memset(&p_300, 0, sizeof(char*));
memset(&sline_301, 0, sizeof(int));
memset(&err_flag_302, 0, sizeof(_Bool));
right_value303 = (void*)0;
memset(&label_303, 0, sizeof(char*));
right_value304 = (void*)0;
memset(&no_comma_304, 0, sizeof(_Bool));
right_value305 = (void*)0;
memset(&node_305, 0, sizeof(struct sNode*));
right_value306 = (void*)0;
right_value307 = (void*)0;
right_value308 = (void*)0;
memset(&method_block_306, 0, sizeof(struct buffer*));
memset(&method_block_sline_307, 0, sizeof(int));
memset(&head_308, 0, sizeof(char*));
right_value309 = (void*)0;
memset(&tail_309, 0, sizeof(char*));
right_value310 = (void*)0;
right_value311 = (void*)0;
memset(&len_310, 0, sizeof(int));
right_value312 = (void*)0;
memset(&mem_311, 0, sizeof(char*));
right_value313 = (void*)0;
right_value314 = (void*)0;
right_value315 = (void*)0;
right_value322 = (void*)0;
memset(&node_313, 0, sizeof(struct sNode*));
right_value323 = (void*)0;
    params_296=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value296=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value295=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "20method.c", 737, "struct list$1tuple2$2charphsNodephph"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value295);
    if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value295, right_value295 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value296);
    if(right_value296 && right_value296 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value296, right_value296 = (void*)0;
    __freed_obj__ = 0;
    list$1tuple2$2charphsNodephph_push_back(params_296,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value302=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value300=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 738, "struct tuple2$2charphsNodeph")))),((void*)0),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value301=sNode_clone(obj)))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value300);
    if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value300, right_value300 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value301);
    if(right_value301 && right_value301 != __result_obj__ && !__freed_obj__) { right_value301 = come_decrement_ref_count(right_value301, ((struct sNode*)right_value301)->finalize, ((struct sNode*)right_value301)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value301, right_value301 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value302);
    if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value302, right_value302 = (void*)0;
    __freed_obj__ = 0;
    if(_if_conditional366=*info->p==45&&*(info->p+1)==62,    _if_conditional366) {
        info->p+=2;
        skip_spaces_and_lf(info);
    }
    if(_if_conditional367=*info->p!=123,    _if_conditional367) {
        expected_next_character(40,info);
        while(_while_condtional36=(_Bool)1,        _while_condtional36) {
            if(_if_conditional368=*info->p==41,            _if_conditional368) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_300=info->p;
            sline_301=info->sline;
            err_flag_302=(_Bool)0;
            label_303=(char*)come_increment_ref_count(((char*)(right_value303=__builtin_string(""))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value303);
            if(right_value303 && right_value303 != __result_obj__ && !__freed_obj__) { right_value303 = come_decrement_ref_count(right_value303, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value303, right_value303 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional369=xisalpha(*info->p)||*info->p==95,            _if_conditional369) {
                __dec_obj84=label_303;
                label_303=(char*)come_increment_ref_count(((char*)(right_value304=parse_word(info))));
                if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value304);
                if(right_value304 && right_value304 != __result_obj__ && !__freed_obj__) { right_value304 = come_decrement_ref_count(right_value304, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value304, right_value304 = (void*)0;
                __freed_obj__ = 0;
                err_flag_302=(_Bool)1;
            }
            if(_if_conditional370=err_flag_302==(_Bool)1&&*info->p==58,            _if_conditional370) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj85=label_303;
                label_303=((void*)0);
                if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0,0); }
                info->p=p_300;
                info->sline=sline_301;
            }
            no_comma_304=info->no_comma;
            info->no_comma=(_Bool)1;
            node_305=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value305=expression_v13(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value305);
            if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { right_value305 = come_decrement_ref_count(right_value305, ((struct sNode*)right_value305)->finalize, ((struct sNode*)right_value305)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value305, right_value305 = (void*)0;
            __freed_obj__ = 0;
            __dec_obj86=node_305;
            node_305=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value306=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_305),info))));
            if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value306);
            if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { right_value306 = come_decrement_ref_count(right_value306, ((struct sNode*)right_value306)->finalize, ((struct sNode*)right_value306)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value306, right_value306 = (void*)0;
            __freed_obj__ = 0;
            info->no_comma=no_comma_304;
            list$1tuple2$2charphsNodephph_push_back(params_296,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value308=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value307=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 785, "struct tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(label_303),(struct sNode*)come_increment_ref_count(node_305))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value307);
            if(right_value307 && right_value307 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value307, right_value307 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value308);
            if(right_value308 && right_value308 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value308, right_value308 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional371=*info->p==44,            _if_conditional371) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                if(_if_conditional372=*info->p==41,                _if_conditional372) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(label_303 && !__freed_obj__) { label_303 = come_decrement_ref_count(label_303, (void*)0, (void*)0, 0, 0, 0); }
                    if(node_305 && !__freed_obj__) { node_305 = come_decrement_ref_count(node_305, ((struct sNode*)node_305)->finalize, ((struct sNode*)node_305)->_protocol_obj, 0, 0, 0); } 
                    break;
                }
            }
            if(label_303 && !__freed_obj__) { label_303 = come_decrement_ref_count(label_303, (void*)0, (void*)0, 0, 0, 0); }
            if(node_305 && !__freed_obj__) { node_305 = come_decrement_ref_count(node_305, ((struct sNode*)node_305)->finalize, ((struct sNode*)node_305)->_protocol_obj, 0, 0, 0); } 
        }
    }
    parse_sharp_v5(info);
    method_block_306=((void*)0);
    method_block_sline_307=0;
    if(_if_conditional373=*info->p==123,    _if_conditional373) {
        head_308=info->p;
        method_block_sline_307=info->sline;
        ((char*)(right_value309=skip_block(info)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value309);
        if(right_value309 && right_value309 != __result_obj__ && !__freed_obj__) { right_value309 = come_decrement_ref_count(right_value309, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value309, right_value309 = (void*)0;
        __freed_obj__ = 0;
        tail_309=info->p;
        __dec_obj87=method_block_306;
        method_block_306=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value311=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value310=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 811, "struct buffer"))))))));
        if(__dec_obj87) { come_call_finalizer(buffer_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value310);
        if(right_value310 && right_value310 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value310, right_value310 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value311);
        if(right_value311 && right_value311 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value311, right_value311 = (void*)0;
        __freed_obj__ = 0;
        len_310=tail_309-head_308;
        mem_311=(char*)come_increment_ref_count(((char*)(right_value312=(char*)come_calloc(1, sizeof(char)*(1*(len_310+1)), "20method.c", 814, "char"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value312);
        if(right_value312 && right_value312 != __result_obj__ && !__freed_obj__) { right_value312 = come_decrement_ref_count(right_value312, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value312, right_value312 = (void*)0;
        __freed_obj__ = 0;
        memcpy(mem_311,head_308,len_310);
        mem_311[len_310]=0;
        buffer_append_str(method_block_306,mem_311);
        buffer_append_str(method_block_306,"\n");
        if(mem_311 && !__freed_obj__) { mem_311 = come_decrement_ref_count(mem_311, (void*)0, (void*)0, 0, 0, 0); }
    }
    parse_sharp_v5(info);
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 824, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sMethodCallNode*)(right_value315=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(right_value313=(struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 824, "struct sMethodCallNode")))),fun_name,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value314=sNode_clone(obj)))),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_296),method_block_306,method_block_sline_307,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sMethodCallNode_finalize;
    _inf_value2->clone=(void*)sMethodCallNode_clone;
    _inf_value2->compile=(void*)sMethodCallNode_compile;
    _inf_value2->sline=(void*)sMethodCallNode_sline;
    _inf_value2->sname=(void*)sMethodCallNode_sname;
    _inf_value2->terminated=(void*)sMethodCallNode_terminated;
    _inf_value2->kind=(void*)sMethodCallNode_kind;
    node_313=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value322=_inf_value2)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value313);
    if(right_value313 && right_value313 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMethodCallNode_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value313, right_value313 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value314);
    if(right_value314 && right_value314 != __result_obj__ && !__freed_obj__) { right_value314 = come_decrement_ref_count(right_value314, ((struct sNode*)right_value314)->finalize, ((struct sNode*)right_value314)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value314, right_value314 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value315);
    if(right_value315 && right_value315 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMethodCallNode_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value315, right_value315 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value322);
    if(right_value322 && right_value322 != __result_obj__ && !__freed_obj__) { right_value322 = come_decrement_ref_count(right_value322, ((struct sNode*)right_value322)->finalize, ((struct sNode*)right_value322)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[3] = right_value322, right_value322 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj93=node_313;
    node_313=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value323=exception_get_value((struct sNode*)come_increment_ref_count(node_313),info))));
    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value323);
    if(right_value323 && right_value323 != __result_obj__ && !__freed_obj__) { right_value323 = come_decrement_ref_count(right_value323, ((struct sNode*)right_value323)->finalize, ((struct sNode*)right_value323)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value323, right_value323 = (void*)0;
    __freed_obj__ = 0;
    __result192__ = __result_obj__ = node_313;
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0); } 
    if(fun_name && !__freed_obj__) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
    if(params_296 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,params_296, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(method_block_306 && !__freed_obj__) { come_call_finalizer(buffer_finalize,method_block_306, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(node_313 && !__freed_obj__) { node_313 = come_decrement_ref_count(node_313, ((struct sNode*)node_313)->finalize, ((struct sNode*)node_313)->_protocol_obj, 0, 1, 0); } 
    return __result192__;
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0); } 
    if(fun_name && !__freed_obj__) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
    if(params_296 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,params_296, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(method_block_306 && !__freed_obj__) { come_call_finalizer(buffer_finalize,method_block_306, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(node_313 && !__freed_obj__) { node_313 = come_decrement_ref_count(node_313, ((struct sNode*)node_313)->finalize, ((struct sNode*)node_313)->_protocol_obj, 0, 0, 0); } 
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional364;
void* right_value297;
struct list_item$1tuple2$2charphsNodephph* litem_297;
struct tuple2$2charphsNodeph* __dec_obj79;
_Bool _if_conditional365;
void* right_value298;
struct list_item$1tuple2$2charphsNodephph* litem_298;
struct tuple2$2charphsNodeph* __dec_obj80;
void* right_value299;
struct list_item$1tuple2$2charphsNodephph* litem_299;
struct tuple2$2charphsNodeph* __dec_obj81;
struct list$1tuple2$2charphsNodephph* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value297 = (void*)0;
memset(&litem_297, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value298 = (void*)0;
memset(&litem_298, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value299 = (void*)0;
memset(&litem_299, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
        if(_if_conditional364=self->len==0,        _if_conditional364) {
            litem_297=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value297=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 282, "struct list_item$1tuple2$2charphsNodephph"))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value297);
            if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value297, right_value297 = (void*)0;
            __freed_obj__ = 0;
            litem_297->prev=((void*)0);
            litem_297->next=((void*)0);
            __dec_obj79=litem_297->item;
            litem_297->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
            if(__dec_obj79) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0, 0); }
            self->tail=litem_297;
            self->head=litem_297;
        }
        else {
            if(_if_conditional365=self->len==1,            _if_conditional365) {
                litem_298=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value298=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 292, "struct list_item$1tuple2$2charphsNodephph"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value298);
                if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value298, right_value298 = (void*)0;
                __freed_obj__ = 0;
                litem_298->prev=self->head;
                litem_298->next=((void*)0);
                __dec_obj80=litem_298->item;
                litem_298->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                if(__dec_obj80) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail=litem_298;
                self->head->next=litem_298;
            }
            else {
                litem_299=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value299=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 302, "struct list_item$1tuple2$2charphsNodephph"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value299);
                if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value299, right_value299 = (void*)0;
                __freed_obj__ = 0;
                litem_299->prev=self->tail;
                litem_299->next=((void*)0);
                __dec_obj81=litem_299->item;
                litem_299->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                if(__dec_obj81) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail->next=litem_299;
                self->tail=litem_299;
            }
        }
        self->len++;
        __result188__ = __result_obj__ = self;
        if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result188__;
        if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __dec_obj82;
struct sNode* __dec_obj83;
struct tuple2$2charphsNodeph* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __dec_obj82=self->v1;
        self->v1=(char*)come_increment_ref_count(v1);
        if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0,0); }
        __dec_obj83=self->v2;
        self->v2=(struct sNode*)come_increment_ref_count(v2);
        if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0,0); }
        __result189__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0); } 
        return __result189__;
        if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0); } 
}

static void sMethodCallNode_finalize(struct sMethodCallNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional374;
_Bool _if_conditional375;
_Bool _if_conditional376;
_Bool _if_conditional377;
_Bool _if_conditional378;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional374=self!=((void*)0)&&self->obj!=((void*)0),        _if_conditional374) {
            if(self->obj && !__freed_obj__) { self->obj = come_decrement_ref_count(self->obj, ((struct sNode*)self->obj)->finalize, ((struct sNode*)self->obj)->_protocol_obj, 0, 0, 0); } 
        }
        if(_if_conditional375=self!=((void*)0)&&self->fun_name!=((void*)0),        _if_conditional375) {
            if(self->fun_name && !__freed_obj__) { self->fun_name = come_decrement_ref_count(self->fun_name, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional376=self!=((void*)0)&&self->params!=((void*)0),        _if_conditional376) {
            if(self->params && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,self->params, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional377=self!=((void*)0)&&self->method_block!=((void*)0),        _if_conditional377) {
            if(self->method_block && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->method_block, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional378=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional378) {
            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
        }
}

static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional379;
struct sMethodCallNode* __result190__;
void* right_value316;
struct sMethodCallNode* result_312;
_Bool _if_conditional380;
void* right_value317;
struct sNode* __dec_obj88;
_Bool _if_conditional381;
void* right_value318;
char* __dec_obj89;
_Bool _if_conditional382;
void* right_value319;
struct list$1tuple2$2charphsNodephph* __dec_obj90;
_Bool _if_conditional383;
void* right_value320;
struct buffer* __dec_obj91;
_Bool _if_conditional384;
_Bool _if_conditional385;
void* right_value321;
char* __dec_obj92;
_Bool _if_conditional386;
struct sMethodCallNode* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value316 = (void*)0;
memset(&result_312, 0, sizeof(struct sMethodCallNode*));
right_value317 = (void*)0;
right_value318 = (void*)0;
right_value319 = (void*)0;
right_value320 = (void*)0;
right_value321 = (void*)0;
        if(_if_conditional379=self==(void*)0,        _if_conditional379) {
            __result190__ = __result_obj__ = (void*)0;
            return __result190__;
        }
        result_312=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(right_value316=(struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "sMethodCallNode_clone", 3, "struct sMethodCallNode"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value316);
        if(right_value316 && right_value316 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMethodCallNode_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value316, right_value316 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional380=self!=((void*)0)&&self->obj!=((void*)0),        _if_conditional380) {
            __dec_obj88=result_312->obj;
            result_312->obj=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value317=sNode_clone(self->obj))));
            if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value317);
            if(right_value317 && right_value317 != __result_obj__ && !__freed_obj__) { right_value317 = come_decrement_ref_count(right_value317, ((struct sNode*)right_value317)->finalize, ((struct sNode*)right_value317)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value317, right_value317 = (void*)0;
            __freed_obj__ = 0;
        }
        if(_if_conditional381=self!=((void*)0)&&self->fun_name!=((void*)0),        _if_conditional381) {
            __dec_obj89=result_312->fun_name;
            result_312->fun_name=(char*)come_increment_ref_count(((char*)(right_value318=string_clone(self->fun_name))));
            if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value318);
            if(right_value318 && right_value318 != __result_obj__ && !__freed_obj__) { right_value318 = come_decrement_ref_count(right_value318, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value318, right_value318 = (void*)0;
            __freed_obj__ = 0;
        }
        if(_if_conditional382=self!=((void*)0)&&self->params!=((void*)0),        _if_conditional382) {
            __dec_obj90=result_312->params;
            result_312->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value319=list$1tuple2$2charphsNodephphp_clone(self->params))));
            if(__dec_obj90) { come_call_finalizer(list$1tuple2$2charphsNodephph_finalize,__dec_obj90, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value319);
            if(right_value319 && right_value319 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value319, right_value319 = (void*)0;
            __freed_obj__ = 0;
        }
        if(_if_conditional383=self!=((void*)0)&&self->method_block!=((void*)0),        _if_conditional383) {
            __dec_obj91=result_312->method_block;
            result_312->method_block=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value320=buffer_clone(self->method_block))));
            if(__dec_obj91) { come_call_finalizer(buffer_finalize,__dec_obj91, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value320);
            if(right_value320 && right_value320 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value320, right_value320 = (void*)0;
            __freed_obj__ = 0;
        }
        if(_if_conditional384=self!=((void*)0),        _if_conditional384) {
            result_312->sline=self->sline;
        }
        if(_if_conditional385=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional385) {
            __dec_obj92=result_312->sname;
            result_312->sname=(char*)come_increment_ref_count(((char*)(right_value321=string_clone(self->sname))));
            if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value321);
            if(right_value321 && right_value321 != __result_obj__ && !__freed_obj__) { right_value321 = come_decrement_ref_count(right_value321, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value321, right_value321 = (void*)0;
            __freed_obj__ = 0;
        }
        if(_if_conditional386=self!=((void*)0),        _if_conditional386) {
            result_312->method_block_sline=self->method_block_sline;
        }
        __result191__ = __result_obj__ = result_312;
        if(result_312 && !__freed_obj__) { come_call_finalizer(sMethodCallNode_finalize,result_312, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result191__;
        if(result_312 && !__freed_obj__) { come_call_finalizer(sMethodCallNode_finalize,result_312, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional387;
void* right_value324;
void* right_value325;
struct sNode* _inf_value3;
struct sCurrentNode* _inf_obj_value3;
void* right_value328;
struct sNode* __result195__;
void* right_value329;
struct sNode* __result196__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value324 = (void*)0;
right_value325 = (void*)0;
right_value328 = (void*)0;
right_value329 = (void*)0;
    if(_if_conditional387=charp_operator_equals(buf,"__current__"),    _if_conditional387) {
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 833, "struct sNode");
        _inf_obj_value3=come_increment_ref_count(((struct sCurrentNode*)(right_value325=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value324=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 833, "struct sCurrentNode")))),info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sCurrentNode_finalize;
        _inf_value3->clone=(void*)sCurrentNode_clone;
        _inf_value3->compile=(void*)sCurrentNode_compile;
        _inf_value3->sline=(void*)sCurrentNode_sline;
        _inf_value3->sname=(void*)sCurrentNode_sname;
        _inf_value3->terminated=(void*)sCurrentNode_terminated;
        _inf_value3->kind=(void*)sCurrentNode_kind;
        __result195__ = __result_obj__ = ((struct sNode*)(right_value328=_inf_value3));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value324);
        if(right_value324 && right_value324 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value324, right_value324 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value325);
        if(right_value325 && right_value325 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value325, right_value325 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value328);
        if(right_value328 && right_value328 != __result_obj__ && !__freed_obj__) { right_value328 = come_decrement_ref_count(right_value328, ((struct sNode*)right_value328)->finalize, ((struct sNode*)right_value328)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[2] = right_value328, right_value328 = (void*)0;
        __freed_obj__ = 0;
        return __result195__;
    }
    __result196__ = __result_obj__ = ((struct sNode*)(right_value329=string_node_v15(buf,head,head_sline,info)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value329);
    if(right_value329 && right_value329 != __result_obj__ && !__freed_obj__) { right_value329 = come_decrement_ref_count(right_value329, ((struct sNode*)right_value329)->finalize, ((struct sNode*)right_value329)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value329, right_value329 = (void*)0;
    __freed_obj__ = 0;
    return __result196__;
}

static void sCurrentNode_finalize(struct sCurrentNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional388;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional388=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional388) {
                if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional389;
struct sCurrentNode* __result193__;
void* right_value326;
struct sCurrentNode* result_314;
_Bool _if_conditional390;
_Bool _if_conditional391;
void* right_value327;
char* __dec_obj94;
struct sCurrentNode* __result194__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value326 = (void*)0;
memset(&result_314, 0, sizeof(struct sCurrentNode*));
right_value327 = (void*)0;
            if(_if_conditional389=self==(void*)0,            _if_conditional389) {
                __result193__ = __result_obj__ = (void*)0;
                return __result193__;
            }
            result_314=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value326=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3, "struct sCurrentNode"))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value326);
            if(right_value326 && right_value326 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value326, right_value326 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional390=self!=((void*)0),            _if_conditional390) {
                result_314->sline=self->sline;
            }
            if(_if_conditional391=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional391) {
                __dec_obj94=result_314->sname;
                result_314->sname=(char*)come_increment_ref_count(((char*)(right_value327=string_clone(self->sname))));
                if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value327);
                if(right_value327 && right_value327 != __result_obj__ && !__freed_obj__) { right_value327 = come_decrement_ref_count(right_value327, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value327, right_value327 = (void*)0;
                __freed_obj__ = 0;
            }
            __result194__ = __result_obj__ = result_314;
            if(result_314 && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,result_314, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result194__;
            if(result_314 && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,result_314, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* post_position_operator3_v20(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value330;
struct sNode* __result197__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value330 = (void*)0;
    __result197__ = __result_obj__ = ((struct sNode*)(right_value330=post_position_operator3_v5((struct sNode*)come_increment_ref_count(node),info)));
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value330);
    if(right_value330 && right_value330 != __result_obj__ && !__freed_obj__) { right_value330 = come_decrement_ref_count(right_value330, ((struct sNode*)right_value330)->finalize, ((struct sNode*)right_value330)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value330, right_value330 = (void*)0;
    __freed_obj__ = 0;
    return __result197__;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

