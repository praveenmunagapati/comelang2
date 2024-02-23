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
struct sSwitchNode
{
    struct sNode* mExpressionNode;
    struct sBlock* mBlock;
    int sline;
    char* sname;
};
struct sCaseNode
{
    struct sNode* mNode;
    int sline;
    char* sname;
};
struct sDefaultNode
{
    int sline;
    char* sname;
};
struct sBreakNode
{
    int sline;
    char* sname;
};
struct sContinueNode
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

struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info);

struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info);

struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info);

struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info);

struct sNode* string_node_v9(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* string_node_v10(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* string_node_v11(char* buf, char* head, int head_sline, struct sInfo* info);

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

struct sSwitchNode* sSwitchNode_initialize(struct sSwitchNode* self, struct sNode* expression_node, struct sBlock* block, struct sInfo* info);

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
_Bool sSwitchNode_terminated();

char* sSwitchNode_kind();

_Bool sSwitchNode_compile(struct sSwitchNode* self, struct sInfo* info);

static void CVALUE_finalize(struct CVALUE* self);
int sSwitchNode_sline(struct sSwitchNode* self, struct sInfo* info);

char* sSwitchNode_sname(struct sSwitchNode* self, struct sInfo* info);

struct sCaseNode* sCaseNode_initialize(struct sCaseNode* self, struct sNode* node, struct sInfo* info);

_Bool sCaseNode_terminated();

char* sCaseNode_kind();

_Bool sCaseNode_compile(struct sCaseNode* self, struct sInfo* info);

int sCaseNode_sline(struct sCaseNode* self, struct sInfo* info);

char* sCaseNode_sname(struct sCaseNode* self, struct sInfo* info);

struct sDefaultNode* sDefaultNode_initialize(struct sDefaultNode* self, struct sInfo* info);

_Bool sDefaultNode_terminated();

char* sDefaultNode_kind();

_Bool sDefaultNode_compile(struct sDefaultNode* self, struct sInfo* info);

int sDefaultNode_sline(struct sDefaultNode* self, struct sInfo* info);

char* sDefaultNode_sname(struct sDefaultNode* self, struct sInfo* info);

struct sBreakNode* sBreakNode_initialize(struct sBreakNode* self, struct sInfo* info);

_Bool sBreakNode_terminated();

char* sBreakNode_kind();

_Bool sBreakNode_compile(struct sBreakNode* self, struct sInfo* info);

int sBreakNode_sline(struct sBreakNode* self, struct sInfo* info);

char* sBreakNode_sname(struct sBreakNode* self, struct sInfo* info);

struct sContinueNode* sContinueNode_initialize(struct sContinueNode* self, struct sInfo* info);

_Bool sContinueNode_terminated();

char* sContinueNode_kind();

_Bool sContinueNode_compile(struct sContinueNode* self, struct sInfo* info);

int sContinueNode_sline(struct sContinueNode* self, struct sInfo* info);

char* sContinueNode_sname(struct sContinueNode* self, struct sInfo* info);

struct sNode* string_node_v12(char* buf, char* head, int head_sline, struct sInfo* info);

static void sCaseNode_finalize(struct sCaseNode* self);
static struct sCaseNode* sCaseNode_clone(struct sCaseNode* self);
static void sDefaultNode_finalize(struct sDefaultNode* self);
static struct sDefaultNode* sDefaultNode_clone(struct sDefaultNode* self);
static void sBreakNode_finalize(struct sBreakNode* self);
static struct sBreakNode* sBreakNode_clone(struct sBreakNode* self);
static void sContinueNode_finalize(struct sContinueNode* self);
static struct sContinueNode* sContinueNode_clone(struct sContinueNode* self);
static void sSwitchNode_finalize(struct sSwitchNode* self);
static struct sSwitchNode* sSwitchNode_clone(struct sSwitchNode* self);
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
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1961, "struct smart_pointer$1char"))));
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
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 1971, "struct smart_pointer$1short"))));
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
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 1981, "struct smart_pointer$1int"))));
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
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 1991, "struct smart_pointer$1long"))));
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

// body function


static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
void* __result_obj__;
_Bool _if_conditional1;
memset(&__result_obj__, 0, sizeof(void*));
        if(self!=((void*)0)&&self->memory!=((void*)0)) {
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}



static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
void* __result_obj__;
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
        if(self!=((void*)0)&&self->memory!=((void*)0)) {
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
void* __result_obj__;
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
        if(self!=((void*)0)&&self->memory!=((void*)0)) {
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
void* __result_obj__;
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
        if(self!=((void*)0)&&self->memory!=((void*)0)) {
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

struct sSwitchNode* sSwitchNode_initialize(struct sSwitchNode* self, struct sNode* expression_node, struct sBlock* block, struct sInfo* info){
void* __result_obj__;
void* right_value10;
char* __dec_obj6;
void* right_value12;
struct sNode* __dec_obj7;
void* right_value80;
struct sBlock* __dec_obj40;
struct sSwitchNode* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
right_value12 = (void*)0;
right_value80 = (void*)0;
    self->sline=info->sline;
    __dec_obj6=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value10=__builtin_string(info->sname))));
    __dec_obj6 = come_decrement_ref_count2(__dec_obj6, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value10 = come_decrement_ref_count2(right_value10, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj7=self->mExpressionNode;
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value12=sNode_clone(expression_node))));
    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count2(__dec_obj7, ((struct sNode*)__dec_obj7)->finalize, ((struct sNode*)__dec_obj7)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value12) { right_value12 = come_decrement_ref_count2(right_value12, ((struct sNode*)right_value12)->finalize, ((struct sNode*)right_value12)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj40=self->mBlock;
    self->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value80=sBlock_clone(block))));
    come_call_finalizer2(sBlock_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __result65__ = __result_obj__ = self;
    come_call_finalizer2(sSwitchNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result65__;
    come_call_finalizer2(sSwitchNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
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
        if(self==(void*)0) {
            __result7__ = __result_obj__ = (void*)0;
            return __result7__;
        }
        result_5=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
        if(right_value11) { right_value11 = come_decrement_ref_count2(right_value11, ((struct sNode*)right_value11)->finalize, ((struct sNode*)right_value11)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(self!=((void*)0)&&self->clone!=((void*)0)) {
            result_5->_protocol_obj=self->clone(self->_protocol_obj);
        }
        if(self!=((void*)0)) {
            result_5->finalize=self->finalize;
        }
        if(self!=((void*)0)) {
            result_5->clone=self->clone;
        }
        if(self!=((void*)0)) {
            result_5->compile=self->compile;
        }
        if(self!=((void*)0)) {
            result_5->sline=self->sline;
        }
        if(self!=((void*)0)) {
            result_5->sname=self->sname;
        }
        if(self!=((void*)0)) {
            result_5->terminated=self->terminated;
        }
        if(self!=((void*)0)) {
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
        if(self==(void*)0) {
            __result9__ = __result_obj__ = (void*)0;
            return __result9__;
        }
        result_6=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value13=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock"))));
        come_call_finalizer2(sBlock_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
            __dec_obj11=result_6->mNodes;
            result_6->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value20=list$1sNodephp_clone(self->mNodes))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
            __dec_obj39=result_6->mVarTable;
            result_6->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value79=sVarTable_clone(self->mVarTable))));
            come_call_finalizer2(sVarTable_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sVarTable_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        __result64__ = __result_obj__ = result_6;
        come_call_finalizer2(sBlock_finalize,result_6, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result64__;
        come_call_finalizer2(sBlock_finalize,result_6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional15;
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
            if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
                come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
                come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_7;
struct list_item$1sNodeph* prev_it_8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_7, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_8, 0, sizeof(struct list_item$1sNodeph*));
                    it_7=self->head;
                    while(it_7!=((void*)0)) {
                        prev_it_8=it_7;
                        it_7=it_7->next;
                        come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
                            if(self!=((void*)0)&&self->item!=((void*)0)) {
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
void* right_value19;
struct list$1sNodeph* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
right_value14 = (void*)0;
right_value15 = (void*)0;
memset(&result_9, 0, sizeof(struct list$1sNodeph*));
memset(&it_10, 0, sizeof(struct list_item$1sNodeph*));
right_value19 = (void*)0;
                if(self==((void*)0)) {
                    __result10__ = __result_obj__ = ((void*)0);
                    return __result10__;
                }
                result_9=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value15=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value14=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 141, "struct list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_10=self->head;
                while(it_10!=((void*)0)) {
                    list$1sNodeph_add(result_9,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value19=sNode_clone(it_10->item)))));
                    if(right_value19) { right_value19 = come_decrement_ref_count2(right_value19, ((struct sNode*)right_value19)->finalize, ((struct sNode*)right_value19)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    it_10=it_10->next;
                }
                __result13__ = __result_obj__ = result_9;
                come_call_finalizer2(list$1sNodephp_finalize,result_9, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result13__;
                come_call_finalizer2(list$1sNodephp_finalize,result_9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result11__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result11__;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
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
                        if(self->len==0) {
                            litem_11=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value16=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 155, "struct list_item$1sNodeph"))));
                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_11->prev=((void*)0);
                            litem_11->next=((void*)0);
                            __dec_obj8=litem_11->item;
                            litem_11->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count2(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0,0,0, (void*)0); }
                            self->tail=litem_11;
                            self->head=litem_11;
                        }
                        else {
                            if(self->len==1) {
                                litem_12=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value17=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 165, "struct list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
                if(self==(void*)0) {
                    __result14__ = __result_obj__ = (void*)0;
                    return __result14__;
                }
                result_14=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value21=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable"))));
                come_call_finalizer2(sVarTable_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(self!=((void*)0)&&self->mVars!=((void*)0)) {
                    __dec_obj38=result_14->mVars;
                    result_14->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value78=map$2charphsVarphp_clone(self->mVars))));
                    come_call_finalizer2(map$2charphsVarph_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(map$2charphsVarphp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(self!=((void*)0)) {
                    result_14->mGlobal=self->mGlobal;
                }
                if(self!=((void*)0)) {
                    result_14->mParent=self->mParent;
                }
                if(self!=((void*)0)) {
                    result_14->mID=self->mID;
                }
                __result63__ = __result_obj__ = result_14;
                come_call_finalizer2(sVarTable_finalize,result_14, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result63__;
                come_call_finalizer2(sVarTable_finalize,result_14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional25;
struct map$2charphsVarph* __result15__;
void* right_value22;
void* right_value28;
struct map$2charphsVarph* result_24;
char* it_27;
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
                        if(self==((void*)0)) {
                            __result15__ = __result_obj__ = ((void*)0);
                            return __result15__;
                        }
                        result_24=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value28=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value22=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang2.h", 1176, "struct map$2charphsVarph"))))))));
                        come_call_finalizer2(map$2charphsVarphp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(map$2charphsVarphp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        for(                        it_27=map$2charphsVarph_begin(self);                        !map$2charphsVarph_end(self);                        it_27=map$2charphsVarph_next(self)                        ){
                            memset(&default_value_30,0,sizeof(struct sVar*));
                            it2_33=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value29=map$2charphsVarph_at(self,it_27,default_value_30))));
                            come_call_finalizer2(sVar_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            map$2charphsVarph_insert2(result_24,it_27,(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value77=sVar_clone(it2_33)))));
                            come_call_finalizer2(sVar_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sVar_finalize,it2_33, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        __result62__ = __result_obj__ = result_24;
                        come_call_finalizer2(map$2charphsVarphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result62__;
                        come_call_finalizer2(map$2charphsVarphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
void* right_value23;
void* right_value24;
void* right_value25;
int i_19;
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
                            right_value23 = come_decrement_ref_count2(right_value23, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value24=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(1024)), "./comelang2.h", 1084, "struct sVar*"))));
                            come_call_finalizer2(sVar_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value25=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1085, "_Bool"))));
                            right_value25 = come_decrement_ref_count2(right_value25, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            for(                            i_19=0;                            i_19<1024;                            i_19++                            ){
                                self->item_existance[i_19]=(_Bool)0;
                            }
                            self->size=1024;
                            self->len=0;
                            __dec_obj12=self->key_list;
                            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value27=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value26=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1095, "struct list$1charp"))))))));
                            come_call_finalizer2(list$1charp_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charpp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(list$1charpp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            self->it=0;
                            __result17__ = __result_obj__ = self;
                            come_call_finalizer2(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result17__;
                            come_call_finalizer2(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional44;
memset(&__result_obj__, 0, sizeof(void*));
                                if(self!=((void*)0)&&self->mName!=((void*)0)) {
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
                                    self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(self!=((void*)0)&&self->mType!=((void*)0)) {
                                    come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
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
                                        if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
                                            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
                                            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
                                            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
                                            come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                                            come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                                            come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                                            come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                                            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
                                            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
                                            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
                                            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
                                            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional30;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                                                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_15;
struct list_item$1sTypeph* prev_it_16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_15, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_16, 0, sizeof(struct list_item$1sTypeph*));
                                                it_15=self->head;
                                                while(it_15!=((void*)0)) {
                                                    prev_it_16=it_15;
                                                    it_15=it_15->next;
                                                    come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional34;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(self!=((void*)0)&&self->item!=((void*)0)) {
                                                            come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_17;
struct list_item$1charph* prev_it_18;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_17, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_18, 0, sizeof(struct list_item$1charph*));
                                                it_17=self->head;
                                                while(it_17!=((void*)0)) {
                                                    prev_it_18=it_17;
                                                    it_17=it_17->next;
                                                    come_call_finalizer2(list_item$1charphp_finalize,prev_it_18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional38;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(self!=((void*)0)&&self->item!=((void*)0)) {
                                                            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
                                come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result16__;
                                come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_20;
struct list_item$1charp* prev_it_21;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_20, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_21, 0, sizeof(struct list_item$1charp*));
                                    it_20=self->head;
                                    while(it_20!=((void*)0)) {
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
                                    if(self->item_existance[i_22]) {
                                        if(1) {
                                            come_call_finalizer2(sVar_finalize,self->items[i_22], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                }
                                come_free((char*)self->items);
                                for(                                i_23=0;                                i_23<self->size;                                i_23++                                ){
                                    if(self->item_existance[i_23]) {
                                        if(1) {
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
char* __result18__;
_Bool _if_conditional50;
char* __result19__;
char* result_26;
char* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_25, 0, sizeof(char*));
memset(&result_26, 0, sizeof(char*));
                            if(self==((void*)0)) {
                                memset(&result_25,0,sizeof(char*));
                                __result18__ = __result_obj__ = result_25;
                                return __result18__;
                            }
                            self->key_list->it=self->key_list->head;
                            if(self->key_list->it) {
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
                            if(self==((void*)0)||self->key_list->it==((void*)0)) {
                                memset(&result_28,0,sizeof(char*));
                                __result22__ = __result_obj__ = result_28;
                                return __result22__;
                            }
                            self->key_list->it=self->key_list->it->next;
                            if(self->key_list->it) {
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
                                while((_Bool)1) {
                                    if(self->item_existance[it_32]) {
                                        if(string_equals(self->keys[it_32],key)) {
                                            __result25__ = __result_obj__ = self->items[it_32];
                                            come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result25__;
                                        }
                                        it_32++;
                                        if(it_32>=self->size) {
                                            it_32=0;
                                        }
                                        else {
                                            if(it_32==hash_31) {
                                                __result26__ = __result_obj__ = default_value;
                                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result26__;
                                            }
                                        }
                                    }
                                    else {
                                        __result27__ = __result_obj__ = default_value;
                                        come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result27__;
                                    }
                                }
                                __result28__ = __result_obj__ = default_value;
                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result28__;
                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool _if_conditional57;
unsigned int hash_45;
int it_46;
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
struct map$2charphsVarph* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_45, 0, sizeof(unsigned int));
memset(&it_46, 0, sizeof(int));
memset(&same_key_exist_63, 0, sizeof(_Bool));
memset(&it2_66, 0, sizeof(char*));
                                if(self->len*2>=self->size) {
                                    map$2charphsVarph_rehash(self);
                                }
                                hash_45=string_get_hash_key(key)%self->size;
                                it_46=hash_45;
                                while((_Bool)1) {
                                    if(self->item_existance[it_46]) {
                                        if(string_equals(self->keys[it_46],key)) {
                                            if(1) {
                                                self->keys[it_46] = come_decrement_ref_count2(self->keys[it_46], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                list$1charp_remove(self->key_list,self->keys[it_46]);
                                                self->keys[it_46]=(char*)come_increment_ref_count(key);
                                            }
                                            else {
                                                list$1charp_remove(self->key_list,self->keys[it_46]);
                                                self->keys[it_46]=key;
                                            }
                                            if(1) {
                                                come_call_finalizer2(sVar_finalize,self->items[it_46], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                self->items[it_46]=(struct sVar*)come_increment_ref_count(item);
                                            }
                                            else {
                                                self->items[it_46]=item;
                                            }
                                            break;
                                        }
                                        it_46++;
                                        if(it_46>=self->size) {
                                            it_46=0;
                                        }
                                        else {
                                            if(it_46==hash_45) {
                                                printf("unexpected error in map.insert\n");
                                                stackframe();
                                                exit(2);
                                            }
                                        }
                                    }
                                    else {
                                        self->item_existance[it_46]=(_Bool)1;
                                        if(1) {
                                            self->keys[it_46]=(char*)come_increment_ref_count(key);
                                        }
                                        else {
                                            self->keys[it_46]=key;
                                        }
                                        if(1) {
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
                                    if(string_equals(it2_66,key)) {
                                        same_key_exist_63=(_Bool)1;
                                    }
                                }
                                if(!same_key_exist_63) {
                                    list$1charp_push_back(self->key_list,key);
                                }
                                __result41__ = __result_obj__ = self;
                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result41__;
                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
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
struct sVar* default_value_40;
void* right_value33;
struct sVar* it2_41;
unsigned int hash_42;
int n_43;
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
                                        right_value30 = come_decrement_ref_count2(right_value30, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        items_36=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value31=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_34)), "./comelang2.h", 1332, "struct sVar*"))));
                                        come_call_finalizer2(sVar_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        item_existance_37=(_Bool*)come_increment_ref_count(((_Bool*)(right_value32=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_34)), "./comelang2.h", 1333, "_Bool"))));
                                        right_value32 = come_decrement_ref_count2(right_value32, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        len_38=0;
                                        for(                                        it_39=map$2charphsVarph_begin(self);                                        !map$2charphsVarph_end(self);                                        it_39=map$2charphsVarph_next(self)                                        ){
                                            memset(&default_value_40,0,sizeof(struct sVar*));
                                            it2_41=((struct sVar*)(right_value33=map$2charphsVarph_at(self,it_39,default_value_40)));
                                            come_call_finalizer2(sVar_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            hash_42=string_get_hash_key(it_39)%size_34;
                                            n_43=hash_42;
                                            while((_Bool)1) {
                                                if(item_existance_37[n_43]) {
                                                    n_43++;
                                                    if(n_43>=size_34) {
                                                        n_43=0;
                                                    }
                                                    else {
                                                        if(n_43==hash_42) {
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
                                                    come_call_finalizer2(sVar_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
_Bool _if_conditional64;
struct list$1charp* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_47, 0, sizeof(int));
memset(&it_48, 0, sizeof(struct list_item$1charp*));
                                                    it2_47=0;
                                                    it_48=self->head;
                                                    while(it_48!=((void*)0)) {
                                                        if(string_equals(it_48->item,item)) {
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
_Bool _if_conditional73;
struct list_item$1charp* prev_it_54;
_Bool _if_conditional74;
_Bool _if_conditional75;
struct list_item$1charp* it_55;
int i_56;
_Bool _if_conditional76;
_Bool _if_conditional77;
struct list_item$1charp* prev_it_57;
struct list_item$1charp* it_58;
struct list_item$1charp* head_prev_it_59;
struct list_item$1charp* tail_it_60;
int i_61;
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
                                                                if(head<0) {
                                                                    head+=self->len;
                                                                }
                                                                if(tail<0) {
                                                                    tail+=self->len+1;
                                                                }
                                                                if(head>tail) {
                                                                    tmp_49=tail;
                                                                    tail=head;
                                                                    head=tmp_49;
                                                                }
                                                                if(head<0) {
                                                                    head=0;
                                                                }
                                                                if(tail>self->len) {
                                                                    tail=self->len;
                                                                }
                                                                if(head==tail) {
                                                                    __result29__ = __result_obj__ = self;
                                                                    return __result29__;
                                                                }
                                                                if(head==0&&tail==self->len) {
                                                                    list$1charp_reset(self);
                                                                }
                                                                else {
                                                                    if(head==0) {
                                                                        it_52=self->head;
                                                                        i_53=0;
                                                                        while(it_52!=((void*)0)) {
                                                                            if(i_53<tail) {
                                                                                prev_it_54=it_52;
                                                                                it_52=it_52->next;
                                                                                i_53++;
                                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                self->len--;
                                                                            }
                                                                            else {
                                                                                if(i_53==tail) {
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
                                                                        if(tail==self->len) {
                                                                            it_55=self->head;
                                                                            i_56=0;
                                                                            while(it_55!=((void*)0)) {
                                                                                if(i_56==head) {
                                                                                    self->tail=it_55->prev;
                                                                                    self->tail->next=((void*)0);
                                                                                }
                                                                                if(i_56>=head) {
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
                                                                            while(it_58!=((void*)0)) {
                                                                                if(i_61==head) {
                                                                                    head_prev_it_59=it_58->prev;
                                                                                }
                                                                                if(i_61==tail) {
                                                                                    tail_it_60=it_58;
                                                                                }
                                                                                if(i_61>=head&&i_61<tail) {
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
                                                                            if(head_prev_it_59!=((void*)0)) {
                                                                                head_prev_it_59->next=tail_it_60;
                                                                            }
                                                                            if(tail_it_60!=((void*)0)) {
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
struct list_item$1charp* prev_it_51;
struct list$1charp* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_50, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_51, 0, sizeof(struct list_item$1charp*));
                                                                        it_50=self->head;
                                                                        while(it_50!=((void*)0)) {
                                                                            prev_it_51=it_50;
                                                                            it_50=it_50->next;
                                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
                                    if(self==((void*)0)) {
                                        memset(&result_64,0,sizeof(char*));
                                        __result33__ = __result_obj__ = result_64;
                                        return __result33__;
                                    }
                                    self->it=self->head;
                                    if(self->it) {
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
                                    if(self==((void*)0)||self->it==((void*)0)) {
                                        memset(&result_67,0,sizeof(char*));
                                        __result37__ = __result_obj__ = result_67;
                                        return __result37__;
                                    }
                                    self->it=self->it->next;
                                    if(self->it) {
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
                                        if(self->len==0) {
                                            litem_69=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value35=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 225, "struct list_item$1charp"))));
                                            come_call_finalizer2(list_item$1charpp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            litem_69->prev=((void*)0);
                                            litem_69->next=((void*)0);
                                            litem_69->item=item;
                                            self->tail=litem_69;
                                            self->head=litem_69;
                                        }
                                        else {
                                            if(self->len==1) {
                                                litem_70=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value36=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 235, "struct list_item$1charp"))));
                                                come_call_finalizer2(list_item$1charpp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                litem_70->prev=self->head;
                                                litem_70->next=((void*)0);
                                                litem_70->item=item;
                                                self->tail=litem_70;
                                                self->head->next=litem_70;
                                            }
                                            else {
                                                litem_71=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value37=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 245, "struct list_item$1charp"))));
                                                come_call_finalizer2(list_item$1charpp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
                                if(self==(void*)0) {
                                    __result42__ = __result_obj__ = (void*)0;
                                    return __result42__;
                                }
                                result_72=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value38=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar"))));
                                come_call_finalizer2(sVar_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(self!=((void*)0)&&self->mName!=((void*)0)) {
                                    __dec_obj13=result_72->mName;
                                    result_72->mName=(char*)come_increment_ref_count(((char*)(right_value39=string_clone(self->mName))));
                                    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value39 = come_decrement_ref_count2(right_value39, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
                                    __dec_obj14=result_72->mCValueName;
                                    result_72->mCValueName=(char*)come_increment_ref_count(((char*)(right_value40=string_clone(self->mCValueName))));
                                    __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value40 = come_decrement_ref_count2(right_value40, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(self!=((void*)0)&&self->mType!=((void*)0)) {
                                    __dec_obj36=result_72->mType;
                                    result_72->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value75=sType_clone(self->mType))));
                                    come_call_finalizer2(sType_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(sType_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                }
                                if(self!=((void*)0)) {
                                    result_72->mBlockLevel=self->mBlockLevel;
                                }
                                if(self!=((void*)0)) {
                                    result_72->mGlobal=self->mGlobal;
                                }
                                if(self!=((void*)0)) {
                                    result_72->mAllocaValue=self->mAllocaValue;
                                }
                                if(self!=((void*)0)) {
                                    result_72->mFunctionParam=self->mFunctionParam;
                                }
                                if(self!=((void*)0)) {
                                    result_72->mNoFree=self->mNoFree;
                                }
                                if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
                                    __dec_obj37=result_72->mFunName;
                                    result_72->mFunName=(char*)come_increment_ref_count(((char*)(right_value76=string_clone(self->mFunName))));
                                    __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value76 = come_decrement_ref_count2(right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                __result61__ = __result_obj__ = result_72;
                                come_call_finalizer2(sVar_finalize,result_72, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result61__;
                                come_call_finalizer2(sVar_finalize,result_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
                                        if(self==(void*)0) {
                                            __result43__ = __result_obj__ = (void*)0;
                                            return __result43__;
                                        }
                                        result_73=(struct sType*)come_increment_ref_count(((struct sType*)(right_value41=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
                                        come_call_finalizer2(sType_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(self!=((void*)0)) {
                                            result_73->mClass=self->mClass;
                                        }
                                        if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
                                            __dec_obj16=result_73->mNoSolvedGenericsType;
                                            result_73->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value44=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                                            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
                                            __dec_obj18=result_73->mOriginalLoadVarType;
                                            result_73->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value47=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                                            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
                                            __dec_obj19=result_73->mGenericsName;
                                            result_73->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value48=string_clone(self->mGenericsName))));
                                            __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value48 = come_decrement_ref_count2(right_value48, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
                                            __dec_obj23=result_73->mGenericsTypes;
                                            result_73->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value55=list$1sTypeph_clone(self->mGenericsTypes))));
                                            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(list$1sTypephp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                                            __dec_obj24=result_73->mArrayNum;
                                            result_73->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value59=list$1sNodeph_clone(self->mArrayNum))));
                                            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(list$1sNodephp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(self!=((void*)0)) {
                                            result_73->mOmitArrayNum=self->mOmitArrayNum;
                                        }
                                        if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                                            __dec_obj25=result_73->mParamTypes;
                                            result_73->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value60=list$1sTypeph_clone(self->mParamTypes))));
                                            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(list$1sTypephp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                                            __dec_obj29=result_73->mParamNames;
                                            result_73->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value67=list$1charph_clone(self->mParamNames))));
                                            come_call_finalizer2(list$1charph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(list$1charphp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                                            __dec_obj31=result_73->mResultType;
                                            result_73->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value70=tuple1$1sTypephp_clone(self->mResultType))));
                                            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(self!=((void*)0)) {
                                            result_73->mVarArgs=self->mVarArgs;
                                        }
                                        if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
                                            __dec_obj32=result_73->mAlignas;
                                            result_73->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value71=sNode_clone(self->mAlignas))));
                                            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value71) { right_value71 = come_decrement_ref_count2(right_value71, ((struct sNode*)right_value71)->finalize, ((struct sNode*)right_value71)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(self!=((void*)0)) {
                                            result_73->mUnsigned=self->mUnsigned;
                                        }
                                        if(self!=((void*)0)) {
                                            result_73->mShort=self->mShort;
                                        }
                                        if(self!=((void*)0)) {
                                            result_73->mLong=self->mLong;
                                        }
                                        if(self!=((void*)0)) {
                                            result_73->mLongLong=self->mLongLong;
                                        }
                                        if(self!=((void*)0)) {
                                            result_73->mConstant=self->mConstant;
                                        }
                                        if(self!=((void*)0)) {
                                            result_73->mRegister=self->mRegister;
                                        }
                                        if(self!=((void*)0)) {
                                            result_73->mVolatile=self->mVolatile;
                                        }
                                        if(self!=((void*)0)) {
                                            result_73->mStatic=self->mStatic;
                                        }
                                        if(self!=((void*)0)) {
                                            result_73->mExtern=self->mExtern;
                                        }
                                        if(self!=((void*)0)) {
                                            result_73->mRestrict=self->mRestrict;
                                        }
                                        if(self!=((void*)0)) {
                                            result_73->mImmutable=self->mImmutable;
                                        }
                                        if(self!=((void*)0)) {
                                            result_73->mHeap=self->mHeap;
                                        }
                                        if(self!=((void*)0)) {
                                            result_73->mDummyHeap=self->mDummyHeap;
                                        }
                                        if(self!=((void*)0)) {
                                            result_73->mDelegate=self->mDelegate;
                                        }
                                        if(self!=((void*)0)) {
                                            result_73->mShare=self->mShare;
                                        }
                                        if(self!=((void*)0)) {
                                            result_73->mClone=self->mClone;
                                        }
                                        if(self!=((void*)0)) {
                                            result_73->mNoHeap=self->mNoHeap;
                                        }
                                        if(self!=((void*)0)) {
                                            result_73->mNoCallingDestructor=self->mNoCallingDestructor;
                                        }
                                        if(self!=((void*)0)) {
                                            result_73->mRefference=self->mRefference;
                                        }
                                        if(self!=((void*)0)) {
                                            result_73->mException=self->mException;
                                        }
                                        if(self!=((void*)0)) {
                                            result_73->mPointerNum=self->mPointerNum;
                                        }
                                        if(self!=((void*)0)) {
                                            result_73->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                                        }
                                        if(self!=((void*)0)) {
                                            result_73->mNoArrayPointerNum=self->mNoArrayPointerNum;
                                        }
                                        if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
                                            __dec_obj33=result_73->mSizeNum;
                                            result_73->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value72=sNode_clone(self->mSizeNum))));
                                            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value72) { right_value72 = come_decrement_ref_count2(right_value72, ((struct sNode*)right_value72)->finalize, ((struct sNode*)right_value72)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(self!=((void*)0)) {
                                            result_73->mDynamicArrayNum=self->mDynamicArrayNum;
                                        }
                                        if(self!=((void*)0)) {
                                            result_73->mTypeOfExpression=self->mTypeOfExpression;
                                        }
                                        if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
                                            __dec_obj34=result_73->mOriginalTypeName;
                                            result_73->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value73=string_clone(self->mOriginalTypeName))));
                                            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value73 = come_decrement_ref_count2(right_value73, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        if(self!=((void*)0)) {
                                            result_73->mOriginalPointerNum=self->mOriginalPointerNum;
                                        }
                                        if(self!=((void*)0)) {
                                            result_73->mFunctionParam=self->mFunctionParam;
                                        }
                                        if(self!=((void*)0)) {
                                            result_73->mAllocaValue=self->mAllocaValue;
                                        }
                                        if(self!=((void*)0)) {
                                            result_73->mGenericsStruct=self->mGenericsStruct;
                                        }
                                        if(self!=((void*)0)) {
                                            result_73->mSolvedGenericsName=self->mSolvedGenericsName;
                                        }
                                        if(self!=((void*)0)) {
                                            result_73->mComeMemCore=self->mComeMemCore;
                                        }
                                        if(self!=((void*)0)) {
                                            result_73->mInline=self->mInline;
                                        }
                                        if(self!=((void*)0)) {
                                            result_73->mNullValue=self->mNullValue;
                                        }
                                        if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
                                            __dec_obj35=result_73->mAsmName;
                                            result_73->mAsmName=(char*)come_increment_ref_count(((char*)(right_value74=string_clone(self->mAsmName))));
                                            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value74 = come_decrement_ref_count2(right_value74, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        __result60__ = __result_obj__ = result_73;
                                        come_call_finalizer2(sType_finalize,result_73, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result60__;
                                        come_call_finalizer2(sType_finalize,result_73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional104;
memset(&__result_obj__, 0, sizeof(void*));
                                                    if(self!=((void*)0)&&self->v1!=((void*)0)) {
                                                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
void* right_value54;
struct list$1sTypeph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
right_value49 = (void*)0;
right_value50 = (void*)0;
memset(&result_76, 0, sizeof(struct list$1sTypeph*));
memset(&it_77, 0, sizeof(struct list_item$1sTypeph*));
right_value54 = (void*)0;
                                                if(self==((void*)0)) {
                                                    __result48__ = __result_obj__ = ((void*)0);
                                                    return __result48__;
                                                }
                                                result_76=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value50=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value49=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 141, "struct list$1sTypeph"))))))));
                                                come_call_finalizer2(list$1sTypephp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                come_call_finalizer2(list$1sTypephp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                it_77=self->head;
                                                while(it_77!=((void*)0)) {
                                                    list$1sTypeph_add(result_76,(struct sType*)come_increment_ref_count(((struct sType*)(right_value54=sType_clone(it_77->item)))));
                                                    come_call_finalizer2(sType_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    it_77=it_77->next;
                                                }
                                                __result51__ = __result_obj__ = result_76;
                                                come_call_finalizer2(list$1sTypephp_finalize,result_76, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result51__;
                                                come_call_finalizer2(list$1sTypephp_finalize,result_76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
                                                    self->head=((void*)0);
                                                    self->tail=((void*)0);
                                                    self->len=0;
                                                    __result49__ = __result_obj__ = self;
                                                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                    return __result49__;
                                                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
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
                                                        if(self->len==0) {
                                                            litem_78=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value51=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 155, "struct list_item$1sTypeph"))));
                                                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            litem_78->prev=((void*)0);
                                                            litem_78->next=((void*)0);
                                                            __dec_obj20=litem_78->item;
                                                            litem_78->item=(struct sType*)come_increment_ref_count(item);
                                                            come_call_finalizer2(sType_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            self->tail=litem_78;
                                                            self->head=litem_78;
                                                        }
                                                        else {
                                                            if(self->len==1) {
                                                                litem_79=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value52=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 165, "struct list_item$1sTypeph"))));
                                                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                litem_79->prev=self->head;
                                                                litem_79->next=((void*)0);
                                                                __dec_obj21=litem_79->item;
                                                                litem_79->item=(struct sType*)come_increment_ref_count(item);
                                                                come_call_finalizer2(sType_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                self->tail=litem_79;
                                                                self->head->next=litem_79;
                                                            }
                                                            else {
                                                                litem_80=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value53=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 175, "struct list_item$1sTypeph"))));
                                                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                litem_80->prev=self->tail;
                                                                litem_80->next=((void*)0);
                                                                __dec_obj22=litem_80->item;
                                                                litem_80->item=(struct sType*)come_increment_ref_count(item);
                                                                come_call_finalizer2(sType_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                self->tail->next=litem_80;
                                                                self->tail=litem_80;
                                                            }
                                                        }
                                                        self->len++;
                                                        __result50__ = __result_obj__ = self;
                                                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                        return __result50__;
                                                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
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
void* right_value58;
struct list$1sNodeph* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
right_value56 = (void*)0;
right_value57 = (void*)0;
memset(&result_81, 0, sizeof(struct list$1sNodeph*));
memset(&it_82, 0, sizeof(struct list_item$1sNodeph*));
right_value58 = (void*)0;
                                                if(self==((void*)0)) {
                                                    __result52__ = __result_obj__ = ((void*)0);
                                                    return __result52__;
                                                }
                                                result_81=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value57=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value56=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 141, "struct list$1sNodeph"))))))));
                                                come_call_finalizer2(list$1sNodephp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                come_call_finalizer2(list$1sNodephp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                it_82=self->head;
                                                while(it_82!=((void*)0)) {
                                                    list$1sNodeph_add(result_81,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value58=sNode_clone(it_82->item)))));
                                                    if(right_value58) { right_value58 = come_decrement_ref_count2(right_value58, ((struct sNode*)right_value58)->finalize, ((struct sNode*)right_value58)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    it_82=it_82->next;
                                                }
                                                __result53__ = __result_obj__ = result_81;
                                                come_call_finalizer2(list$1sNodephp_finalize,result_81, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result53__;
                                                come_call_finalizer2(list$1sNodephp_finalize,result_81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional119;
struct list$1charph* __result54__;
void* right_value61;
void* right_value62;
struct list$1charph* result_83;
struct list_item$1charph* it_84;
void* right_value66;
struct list$1charph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
right_value61 = (void*)0;
right_value62 = (void*)0;
memset(&result_83, 0, sizeof(struct list$1charph*));
memset(&it_84, 0, sizeof(struct list_item$1charph*));
right_value66 = (void*)0;
                                                if(self==((void*)0)) {
                                                    __result54__ = __result_obj__ = ((void*)0);
                                                    return __result54__;
                                                }
                                                result_83=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value62=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value61=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 141, "struct list$1charph"))))))));
                                                come_call_finalizer2(list$1charphp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                come_call_finalizer2(list$1charphp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                it_84=self->head;
                                                while(it_84!=((void*)0)) {
                                                    list$1charph_add(result_83,(char*)come_increment_ref_count(((char*)(right_value66=string_clone(it_84->item)))));
                                                    right_value66 = come_decrement_ref_count2(right_value66, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    it_84=it_84->next;
                                                }
                                                __result57__ = __result_obj__ = result_83;
                                                come_call_finalizer2(list$1charphp_finalize,result_83, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result57__;
                                                come_call_finalizer2(list$1charphp_finalize,result_83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
                                                    self->head=((void*)0);
                                                    self->tail=((void*)0);
                                                    self->len=0;
                                                    __result55__ = __result_obj__ = self;
                                                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                    return __result55__;
                                                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
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
                                                        if(self->len==0) {
                                                            litem_85=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value63=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 155, "struct list_item$1charph"))));
                                                            come_call_finalizer2(list_item$1charphp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            litem_85->prev=((void*)0);
                                                            litem_85->next=((void*)0);
                                                            __dec_obj26=litem_85->item;
                                                            litem_85->item=(char*)come_increment_ref_count(item);
                                                            __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            self->tail=litem_85;
                                                            self->head=litem_85;
                                                        }
                                                        else {
                                                            if(self->len==1) {
                                                                litem_86=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value64=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 165, "struct list_item$1charph"))));
                                                                come_call_finalizer2(list_item$1charphp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                litem_86->prev=self->head;
                                                                litem_86->next=((void*)0);
                                                                __dec_obj27=litem_86->item;
                                                                litem_86->item=(char*)come_increment_ref_count(item);
                                                                __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                self->tail=litem_86;
                                                                self->head->next=litem_86;
                                                            }
                                                            else {
                                                                litem_87=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value65=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 175, "struct list_item$1charph"))));
                                                                come_call_finalizer2(list_item$1charphp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                litem_87->prev=self->tail;
                                                                litem_87->next=((void*)0);
                                                                __dec_obj28=litem_87->item;
                                                                litem_87->item=(char*)come_increment_ref_count(item);
                                                                __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                self->tail->next=litem_87;
                                                                self->tail=litem_87;
                                                            }
                                                        }
                                                        self->len++;
                                                        __result56__ = __result_obj__ = self;
                                                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                        return __result56__;
                                                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
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
                                                if(self==(void*)0) {
                                                    __result58__ = __result_obj__ = (void*)0;
                                                    return __result58__;
                                                }
                                                result_88=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value68=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                                                come_call_finalizer2(tuple1$1sTypeph_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                                                    __dec_obj30=result_88->v1;
                                                    result_88->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value69=sType_clone(self->v1))));
                                                    come_call_finalizer2(sType_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer2(sType_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                }
                                                __result59__ = __result_obj__ = result_88;
                                                come_call_finalizer2(tuple1$1sTypeph_finalize,result_88, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result59__;
                                                come_call_finalizer2(tuple1$1sTypeph_finalize,result_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional169;
memset(&__result_obj__, 0, sizeof(void*));
                        if(self!=((void*)0)&&self->key_list!=((void*)0)) {
                            come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

_Bool sSwitchNode_terminated(){
void* __result_obj__;
_Bool __result66__;
memset(&__result_obj__, 0, sizeof(void*));
    __result66__ = (_Bool)1;
    return __result66__;
}

char* sSwitchNode_kind(){
void* __result_obj__;
void* right_value81;
char* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
    __result67__ = __result_obj__ = ((char*)(right_value81=__builtin_string("sSwitchNode")));
    right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result67__;
}

_Bool sSwitchNode_compile(struct sSwitchNode* self, struct sInfo* info){
void* __result_obj__;
struct sBlock* block_89;
struct sNode* expression_node_90;
_Bool _if_conditional176;
_Bool __result68__;
void* right_value82;
struct CVALUE* conditional_value_91;
_Bool __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&block_89, 0, sizeof(struct sBlock*));
memset(&expression_node_90, 0, sizeof(struct sNode*));
right_value82 = (void*)0;
memset(&conditional_value_91, 0, sizeof(struct CVALUE*));
    block_89=self->mBlock;
    expression_node_90=self->mExpressionNode;
    if(!node_compile(expression_node_90,info)) {
        __result68__ = (_Bool)0;
        return __result68__;
    }
    conditional_value_91=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value82=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    add_come_code(info,"switch (%s) {\n",conditional_value_91->c_value);
    transpile_block(block_89,((void*)0),((void*)0),info,(_Bool)0,(_Bool)1);
    add_come_code(info,"}\n");
    transpiler_clear_last_code(info);
    __result69__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,conditional_value_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result69__;
    come_call_finalizer2(CVALUE_finalize,conditional_value_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional177;
_Bool _if_conditional178;
memset(&__result_obj__, 0, sizeof(void*));
        if(self!=((void*)0)&&self->c_value!=((void*)0)) {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->type!=((void*)0)) {
            come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

int sSwitchNode_sline(struct sSwitchNode* self, struct sInfo* info){
void* __result_obj__;
int __result70__;
memset(&__result_obj__, 0, sizeof(void*));
    __result70__ = self->sline;
    return __result70__;
}

char* sSwitchNode_sname(struct sSwitchNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value83;
char* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
right_value83 = (void*)0;
    __result71__ = __result_obj__ = ((char*)(right_value83=__builtin_string(self->sname)));
    right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result71__;
}

struct sCaseNode* sCaseNode_initialize(struct sCaseNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value84;
char* __dec_obj41;
void* right_value85;
struct sNode* __dec_obj42;
struct sCaseNode* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value84 = (void*)0;
right_value85 = (void*)0;
    self->sline=info->sline;
    __dec_obj41=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value84=__builtin_string(info->sname))));
    __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj42=self->mNode;
    self->mNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value85=sNode_clone(node))));
    if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count2(__dec_obj42, ((struct sNode*)__dec_obj42)->finalize, ((struct sNode*)__dec_obj42)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value85) { right_value85 = come_decrement_ref_count2(right_value85, ((struct sNode*)right_value85)->finalize, ((struct sNode*)right_value85)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result72__ = __result_obj__ = self;
    come_call_finalizer2(sCaseNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result72__;
    come_call_finalizer2(sCaseNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sCaseNode_terminated(){
void* __result_obj__;
_Bool __result73__;
memset(&__result_obj__, 0, sizeof(void*));
    __result73__ = (_Bool)0;
    return __result73__;
}

char* sCaseNode_kind(){
void* __result_obj__;
void* right_value86;
char* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value86 = (void*)0;
    __result74__ = __result_obj__ = ((char*)(right_value86=__builtin_string("sCaseNode")));
    right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result74__;
}

_Bool sCaseNode_compile(struct sCaseNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_92;
_Bool _if_conditional181;
_Bool __result75__;
void* right_value87;
struct CVALUE* label_value_93;
_Bool __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_92, 0, sizeof(struct sNode*));
right_value87 = (void*)0;
memset(&label_value_93, 0, sizeof(struct CVALUE*));
    node_92=self->mNode;
    if(!node_compile(node_92,info)) {
        __result75__ = (_Bool)0;
        return __result75__;
    }
    label_value_93=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value87=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    add_come_code(info,"case %s:\n",label_value_93->c_value);
    transpiler_clear_last_code(info);
    __result76__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,label_value_93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result76__;
    come_call_finalizer2(CVALUE_finalize,label_value_93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sCaseNode_sline(struct sCaseNode* self, struct sInfo* info){
void* __result_obj__;
int __result77__;
memset(&__result_obj__, 0, sizeof(void*));
    __result77__ = self->sline;
    return __result77__;
}

char* sCaseNode_sname(struct sCaseNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value88;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
    __result78__ = __result_obj__ = ((char*)(right_value88=__builtin_string(self->sname)));
    right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result78__;
}

struct sDefaultNode* sDefaultNode_initialize(struct sDefaultNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value89;
char* __dec_obj43;
struct sDefaultNode* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value89 = (void*)0;
    self->sline=info->sline;
    __dec_obj43=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value89=__builtin_string(info->sname))));
    __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result79__ = __result_obj__ = self;
    come_call_finalizer2(sDefaultNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result79__;
    come_call_finalizer2(sDefaultNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sDefaultNode_terminated(){
void* __result_obj__;
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
    __result80__ = (_Bool)0;
    return __result80__;
}

char* sDefaultNode_kind(){
void* __result_obj__;
void* right_value90;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
right_value90 = (void*)0;
    __result81__ = __result_obj__ = ((char*)(right_value90=__builtin_string("sDefaultNode")));
    right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result81__;
}

_Bool sDefaultNode_compile(struct sDefaultNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __result82__;
memset(&__result_obj__, 0, sizeof(void*));
    add_come_code(info,"default:\n");
    transpiler_clear_last_code(info);
    __result82__ = (_Bool)1;
    return __result82__;
}

int sDefaultNode_sline(struct sDefaultNode* self, struct sInfo* info){
void* __result_obj__;
int __result83__;
memset(&__result_obj__, 0, sizeof(void*));
    __result83__ = self->sline;
    return __result83__;
}

char* sDefaultNode_sname(struct sDefaultNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value91;
char* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value91 = (void*)0;
    __result84__ = __result_obj__ = ((char*)(right_value91=__builtin_string(self->sname)));
    right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result84__;
}

struct sBreakNode* sBreakNode_initialize(struct sBreakNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value92;
char* __dec_obj44;
struct sBreakNode* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value92 = (void*)0;
    self->sline=info->sline;
    __dec_obj44=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value92=__builtin_string(info->sname))));
    __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result85__ = __result_obj__ = self;
    come_call_finalizer2(sBreakNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result85__;
    come_call_finalizer2(sBreakNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sBreakNode_terminated(){
void* __result_obj__;
_Bool __result86__;
memset(&__result_obj__, 0, sizeof(void*));
    __result86__ = (_Bool)0;
    return __result86__;
}

char* sBreakNode_kind(){
void* __result_obj__;
void* right_value93;
char* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
    __result87__ = __result_obj__ = ((char*)(right_value93=__builtin_string("sBreakNode")));
    right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result87__;
}

_Bool sBreakNode_compile(struct sBreakNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __result88__;
memset(&__result_obj__, 0, sizeof(void*));
    free_objects_on_break(info);
    add_come_code(info,"break;\n");
    transpiler_clear_last_code(info);
    __result88__ = (_Bool)1;
    return __result88__;
}

int sBreakNode_sline(struct sBreakNode* self, struct sInfo* info){
void* __result_obj__;
int __result89__;
memset(&__result_obj__, 0, sizeof(void*));
    __result89__ = self->sline;
    return __result89__;
}

char* sBreakNode_sname(struct sBreakNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value94;
char* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value94 = (void*)0;
    __result90__ = __result_obj__ = ((char*)(right_value94=__builtin_string(self->sname)));
    right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result90__;
}

struct sContinueNode* sContinueNode_initialize(struct sContinueNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value95;
char* __dec_obj45;
struct sContinueNode* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value95 = (void*)0;
    self->sline=info->sline;
    __dec_obj45=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value95=__builtin_string(info->sname))));
    __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result91__ = __result_obj__ = self;
    come_call_finalizer2(sContinueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result91__;
    come_call_finalizer2(sContinueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sContinueNode_terminated(){
void* __result_obj__;
_Bool __result92__;
memset(&__result_obj__, 0, sizeof(void*));
    __result92__ = (_Bool)0;
    return __result92__;
}

char* sContinueNode_kind(){
void* __result_obj__;
void* right_value96;
char* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
right_value96 = (void*)0;
    __result93__ = __result_obj__ = ((char*)(right_value96=__builtin_string("sContinueNode")));
    right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result93__;
}

_Bool sContinueNode_compile(struct sContinueNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __result94__;
memset(&__result_obj__, 0, sizeof(void*));
    free_objects_on_break(info);
    add_come_code(info,"continue;\n");
    transpiler_clear_last_code(info);
    __result94__ = (_Bool)1;
    return __result94__;
}

int sContinueNode_sline(struct sContinueNode* self, struct sInfo* info){
void* __result_obj__;
int __result95__;
memset(&__result_obj__, 0, sizeof(void*));
    __result95__ = self->sline;
    return __result95__;
}

char* sContinueNode_sname(struct sContinueNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value97;
char* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value97 = (void*)0;
    __result96__ = __result_obj__ = ((char*)(right_value97=__builtin_string(self->sname)));
    right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result96__;
}

struct sNode* string_node_v12(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional185;
void* right_value98;
struct sNode* node_94;
void* right_value99;
void* right_value100;
struct sNode* _inf_value1;
struct sCaseNode* _inf_obj_value1;
void* right_value104;
struct sNode* __result99__;
_Bool _if_conditional192;
void* right_value105;
void* right_value106;
struct sNode* _inf_value2;
struct sDefaultNode* _inf_obj_value2;
void* right_value109;
struct sNode* __result102__;
_Bool _if_conditional197;
void* right_value110;
void* right_value111;
struct sNode* _inf_value3;
struct sBreakNode* _inf_obj_value3;
void* right_value114;
struct sNode* __result105__;
_Bool _if_conditional202;
void* right_value115;
void* right_value116;
struct sNode* _inf_value4;
struct sContinueNode* _inf_obj_value4;
void* right_value119;
struct sNode* __result108__;
_Bool _if_conditional207;
void* right_value120;
struct sNode* expression_node_99;
void* right_value121;
struct sBlock* block_100;
void* right_value122;
void* right_value123;
struct sNode* _inf_value5;
struct sSwitchNode* _inf_obj_value5;
void* right_value128;
struct sNode* __result111__;
void* right_value129;
struct sNode* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
right_value98 = (void*)0;
memset(&node_94, 0, sizeof(struct sNode*));
right_value99 = (void*)0;
right_value100 = (void*)0;
right_value104 = (void*)0;
right_value105 = (void*)0;
right_value106 = (void*)0;
right_value109 = (void*)0;
right_value110 = (void*)0;
right_value111 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
right_value119 = (void*)0;
right_value120 = (void*)0;
memset(&expression_node_99, 0, sizeof(struct sNode*));
right_value121 = (void*)0;
memset(&block_100, 0, sizeof(struct sBlock*));
right_value122 = (void*)0;
right_value123 = (void*)0;
right_value128 = (void*)0;
right_value129 = (void*)0;
    if(charp_operator_equals(buf,"case")) {
        node_94=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value98=expression_v13(info))));
        if(right_value98) { right_value98 = come_decrement_ref_count2(right_value98, ((struct sNode*)right_value98)->finalize, ((struct sNode*)right_value98)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        expected_next_character(58,info);
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12switch.c", 273, "struct sNode");
        _inf_obj_value1=come_increment_ref_count(((struct sCaseNode*)(right_value100=sCaseNode_initialize((struct sCaseNode*)come_increment_ref_count(((struct sCaseNode*)(right_value99=(struct sCaseNode*)come_calloc(1, sizeof(struct sCaseNode)*(1), "12switch.c", 273, "struct sCaseNode")))),(struct sNode*)come_increment_ref_count(node_94),info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sCaseNode_finalize;
        _inf_value1->clone=(void*)sCaseNode_clone;
        _inf_value1->compile=(void*)sCaseNode_compile;
        _inf_value1->sline=(void*)sCaseNode_sline;
        _inf_value1->sname=(void*)sCaseNode_sname;
        _inf_value1->terminated=(void*)sCaseNode_terminated;
        _inf_value1->kind=(void*)sCaseNode_kind;
        __result99__ = __result_obj__ = ((struct sNode*)(right_value104=_inf_value1));
        if(node_94) { node_94 = come_decrement_ref_count2(node_94, ((struct sNode*)node_94)->finalize, ((struct sNode*)node_94)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer2(sCaseNode_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sCaseNode_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value104) { right_value104 = come_decrement_ref_count2(right_value104, ((struct sNode*)right_value104)->finalize, ((struct sNode*)right_value104)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result99__;
        if(node_94) { node_94 = come_decrement_ref_count2(node_94, ((struct sNode*)node_94)->finalize, ((struct sNode*)node_94)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else {
        if(charp_operator_equals(buf,"default")) {
            expected_next_character(58,info);
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12switch.c", 278, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sDefaultNode*)(right_value106=sDefaultNode_initialize((struct sDefaultNode*)come_increment_ref_count(((struct sDefaultNode*)(right_value105=(struct sDefaultNode*)come_calloc(1, sizeof(struct sDefaultNode)*(1), "12switch.c", 278, "struct sDefaultNode")))),info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sDefaultNode_finalize;
            _inf_value2->clone=(void*)sDefaultNode_clone;
            _inf_value2->compile=(void*)sDefaultNode_compile;
            _inf_value2->sline=(void*)sDefaultNode_sline;
            _inf_value2->sname=(void*)sDefaultNode_sname;
            _inf_value2->terminated=(void*)sDefaultNode_terminated;
            _inf_value2->kind=(void*)sDefaultNode_kind;
            __result102__ = __result_obj__ = ((struct sNode*)(right_value109=_inf_value2));
            come_call_finalizer2(sDefaultNode_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sDefaultNode_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value109) { right_value109 = come_decrement_ref_count2(right_value109, ((struct sNode*)right_value109)->finalize, ((struct sNode*)right_value109)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result102__;
        }
        else {
            if(charp_operator_equals(buf,"break")) {
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12switch.c", 281, "struct sNode");
                _inf_obj_value3=come_increment_ref_count(((struct sBreakNode*)(right_value111=sBreakNode_initialize((struct sBreakNode*)come_increment_ref_count(((struct sBreakNode*)(right_value110=(struct sBreakNode*)come_calloc(1, sizeof(struct sBreakNode)*(1), "12switch.c", 281, "struct sBreakNode")))),info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sBreakNode_finalize;
                _inf_value3->clone=(void*)sBreakNode_clone;
                _inf_value3->compile=(void*)sBreakNode_compile;
                _inf_value3->sline=(void*)sBreakNode_sline;
                _inf_value3->sname=(void*)sBreakNode_sname;
                _inf_value3->terminated=(void*)sBreakNode_terminated;
                _inf_value3->kind=(void*)sBreakNode_kind;
                __result105__ = __result_obj__ = ((struct sNode*)(right_value114=_inf_value3));
                come_call_finalizer2(sBreakNode_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sBreakNode_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value114) { right_value114 = come_decrement_ref_count2(right_value114, ((struct sNode*)right_value114)->finalize, ((struct sNode*)right_value114)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result105__;
            }
            else {
                if(charp_operator_equals(buf,"continue")) {
                    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12switch.c", 284, "struct sNode");
                    _inf_obj_value4=come_increment_ref_count(((struct sContinueNode*)(right_value116=sContinueNode_initialize((struct sContinueNode*)come_increment_ref_count(((struct sContinueNode*)(right_value115=(struct sContinueNode*)come_calloc(1, sizeof(struct sContinueNode)*(1), "12switch.c", 284, "struct sContinueNode")))),info))));
                    _inf_value4->_protocol_obj=_inf_obj_value4;
                    _inf_value4->finalize=(void*)sContinueNode_finalize;
                    _inf_value4->clone=(void*)sContinueNode_clone;
                    _inf_value4->compile=(void*)sContinueNode_compile;
                    _inf_value4->sline=(void*)sContinueNode_sline;
                    _inf_value4->sname=(void*)sContinueNode_sname;
                    _inf_value4->terminated=(void*)sContinueNode_terminated;
                    _inf_value4->kind=(void*)sContinueNode_kind;
                    __result108__ = __result_obj__ = ((struct sNode*)(right_value119=_inf_value4));
                    come_call_finalizer2(sContinueNode_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sContinueNode_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value119) { right_value119 = come_decrement_ref_count2(right_value119, ((struct sNode*)right_value119)->finalize, ((struct sNode*)right_value119)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result108__;
                }
                else {
                    if(charp_operator_equals(buf,"switch")) {
                        expected_next_character(40,info);
                        expression_node_99=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value120=expression_v13(info))));
                        if(right_value120) { right_value120 = come_decrement_ref_count2(right_value120, ((struct sNode*)right_value120)->finalize, ((struct sNode*)right_value120)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        expected_next_character(41,info);
                        block_100=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value121=parse_block(info,(_Bool)0))));
                        come_call_finalizer2(sBlock_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12switch.c", 295, "struct sNode");
                        _inf_obj_value5=come_increment_ref_count(((struct sSwitchNode*)(right_value123=sSwitchNode_initialize((struct sSwitchNode*)come_increment_ref_count(((struct sSwitchNode*)(right_value122=(struct sSwitchNode*)come_calloc(1, sizeof(struct sSwitchNode)*(1), "12switch.c", 295, "struct sSwitchNode")))),(struct sNode*)come_increment_ref_count(expression_node_99),block_100,info))));
                        _inf_value5->_protocol_obj=_inf_obj_value5;
                        _inf_value5->finalize=(void*)sSwitchNode_finalize;
                        _inf_value5->clone=(void*)sSwitchNode_clone;
                        _inf_value5->compile=(void*)sSwitchNode_compile;
                        _inf_value5->sline=(void*)sSwitchNode_sline;
                        _inf_value5->sname=(void*)sSwitchNode_sname;
                        _inf_value5->terminated=(void*)sSwitchNode_terminated;
                        _inf_value5->kind=(void*)sSwitchNode_kind;
                        __result111__ = __result_obj__ = ((struct sNode*)(right_value128=_inf_value5));
                        if(expression_node_99) { expression_node_99 = come_decrement_ref_count2(expression_node_99, ((struct sNode*)expression_node_99)->finalize, ((struct sNode*)expression_node_99)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sBlock_finalize,block_100, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sSwitchNode_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sSwitchNode_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value128) { right_value128 = come_decrement_ref_count2(right_value128, ((struct sNode*)right_value128)->finalize, ((struct sNode*)right_value128)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result111__;
                        if(expression_node_99) { expression_node_99 = come_decrement_ref_count2(expression_node_99, ((struct sNode*)expression_node_99)->finalize, ((struct sNode*)expression_node_99)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sBlock_finalize,block_100, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
    }
    __result112__ = __result_obj__ = ((struct sNode*)(right_value129=string_node_v11(buf,head,head_sline,info)));
    if(right_value129) { right_value129 = come_decrement_ref_count2(right_value129, ((struct sNode*)right_value129)->finalize, ((struct sNode*)right_value129)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result112__;
}

static void sCaseNode_finalize(struct sCaseNode* self){
void* __result_obj__;
_Bool _if_conditional186;
_Bool _if_conditional187;
memset(&__result_obj__, 0, sizeof(void*));
            if(self!=((void*)0)&&self->mNode!=((void*)0)) {
                if(self->mNode) { self->mNode = come_decrement_ref_count2(self->mNode, ((struct sNode*)self->mNode)->finalize, ((struct sNode*)self->mNode)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sCaseNode* sCaseNode_clone(struct sCaseNode* self){
void* __result_obj__;
_Bool _if_conditional188;
struct sCaseNode* __result97__;
void* right_value101;
struct sCaseNode* result_95;
_Bool _if_conditional189;
void* right_value102;
struct sNode* __dec_obj46;
_Bool _if_conditional190;
_Bool _if_conditional191;
void* right_value103;
char* __dec_obj47;
struct sCaseNode* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
right_value101 = (void*)0;
memset(&result_95, 0, sizeof(struct sCaseNode*));
right_value102 = (void*)0;
right_value103 = (void*)0;
            if(self==(void*)0) {
                __result97__ = __result_obj__ = (void*)0;
                return __result97__;
            }
            result_95=(struct sCaseNode*)come_increment_ref_count(((struct sCaseNode*)(right_value101=(struct sCaseNode*)come_calloc(1, sizeof(struct sCaseNode)*(1), "sCaseNode_clone", 3, "struct sCaseNode"))));
            come_call_finalizer2(sCaseNode_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(self!=((void*)0)&&self->mNode!=((void*)0)) {
                __dec_obj46=result_95->mNode;
                result_95->mNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value102=sNode_clone(self->mNode))));
                if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count2(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value102) { right_value102 = come_decrement_ref_count2(right_value102, ((struct sNode*)right_value102)->finalize, ((struct sNode*)right_value102)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(self!=((void*)0)) {
                result_95->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj47=result_95->sname;
                result_95->sname=(char*)come_increment_ref_count(((char*)(right_value103=string_clone(self->sname))));
                __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result98__ = __result_obj__ = result_95;
            come_call_finalizer2(sCaseNode_finalize,result_95, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result98__;
            come_call_finalizer2(sCaseNode_finalize,result_95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sDefaultNode_finalize(struct sDefaultNode* self){
void* __result_obj__;
_Bool _if_conditional193;
memset(&__result_obj__, 0, sizeof(void*));
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sDefaultNode* sDefaultNode_clone(struct sDefaultNode* self){
void* __result_obj__;
_Bool _if_conditional194;
struct sDefaultNode* __result100__;
void* right_value107;
struct sDefaultNode* result_96;
_Bool _if_conditional195;
_Bool _if_conditional196;
void* right_value108;
char* __dec_obj48;
struct sDefaultNode* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value107 = (void*)0;
memset(&result_96, 0, sizeof(struct sDefaultNode*));
right_value108 = (void*)0;
                if(self==(void*)0) {
                    __result100__ = __result_obj__ = (void*)0;
                    return __result100__;
                }
                result_96=(struct sDefaultNode*)come_increment_ref_count(((struct sDefaultNode*)(right_value107=(struct sDefaultNode*)come_calloc(1, sizeof(struct sDefaultNode)*(1), "sDefaultNode_clone", 3, "struct sDefaultNode"))));
                come_call_finalizer2(sDefaultNode_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(self!=((void*)0)) {
                    result_96->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj48=result_96->sname;
                    result_96->sname=(char*)come_increment_ref_count(((char*)(right_value108=string_clone(self->sname))));
                    __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result101__ = __result_obj__ = result_96;
                come_call_finalizer2(sDefaultNode_finalize,result_96, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result101__;
                come_call_finalizer2(sDefaultNode_finalize,result_96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sBreakNode_finalize(struct sBreakNode* self){
void* __result_obj__;
_Bool _if_conditional198;
memset(&__result_obj__, 0, sizeof(void*));
                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sBreakNode* sBreakNode_clone(struct sBreakNode* self){
void* __result_obj__;
_Bool _if_conditional199;
struct sBreakNode* __result103__;
void* right_value112;
struct sBreakNode* result_97;
_Bool _if_conditional200;
_Bool _if_conditional201;
void* right_value113;
char* __dec_obj49;
struct sBreakNode* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
right_value112 = (void*)0;
memset(&result_97, 0, sizeof(struct sBreakNode*));
right_value113 = (void*)0;
                    if(self==(void*)0) {
                        __result103__ = __result_obj__ = (void*)0;
                        return __result103__;
                    }
                    result_97=(struct sBreakNode*)come_increment_ref_count(((struct sBreakNode*)(right_value112=(struct sBreakNode*)come_calloc(1, sizeof(struct sBreakNode)*(1), "sBreakNode_clone", 3, "struct sBreakNode"))));
                    come_call_finalizer2(sBreakNode_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(self!=((void*)0)) {
                        result_97->sline=self->sline;
                    }
                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                        __dec_obj49=result_97->sname;
                        result_97->sname=(char*)come_increment_ref_count(((char*)(right_value113=string_clone(self->sname))));
                        __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    __result104__ = __result_obj__ = result_97;
                    come_call_finalizer2(sBreakNode_finalize,result_97, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result104__;
                    come_call_finalizer2(sBreakNode_finalize,result_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sContinueNode_finalize(struct sContinueNode* self){
void* __result_obj__;
_Bool _if_conditional203;
memset(&__result_obj__, 0, sizeof(void*));
                        if(self!=((void*)0)&&self->sname!=((void*)0)) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sContinueNode* sContinueNode_clone(struct sContinueNode* self){
void* __result_obj__;
_Bool _if_conditional204;
struct sContinueNode* __result106__;
void* right_value117;
struct sContinueNode* result_98;
_Bool _if_conditional205;
_Bool _if_conditional206;
void* right_value118;
char* __dec_obj50;
struct sContinueNode* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
right_value117 = (void*)0;
memset(&result_98, 0, sizeof(struct sContinueNode*));
right_value118 = (void*)0;
                        if(self==(void*)0) {
                            __result106__ = __result_obj__ = (void*)0;
                            return __result106__;
                        }
                        result_98=(struct sContinueNode*)come_increment_ref_count(((struct sContinueNode*)(right_value117=(struct sContinueNode*)come_calloc(1, sizeof(struct sContinueNode)*(1), "sContinueNode_clone", 3, "struct sContinueNode"))));
                        come_call_finalizer2(sContinueNode_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(self!=((void*)0)) {
                            result_98->sline=self->sline;
                        }
                        if(self!=((void*)0)&&self->sname!=((void*)0)) {
                            __dec_obj50=result_98->sname;
                            result_98->sname=(char*)come_increment_ref_count(((char*)(right_value118=string_clone(self->sname))));
                            __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        __result107__ = __result_obj__ = result_98;
                        come_call_finalizer2(sContinueNode_finalize,result_98, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result107__;
                        come_call_finalizer2(sContinueNode_finalize,result_98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sSwitchNode_finalize(struct sSwitchNode* self){
void* __result_obj__;
_Bool _if_conditional208;
_Bool _if_conditional209;
_Bool _if_conditional210;
memset(&__result_obj__, 0, sizeof(void*));
                            if(self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
                                if(self->mExpressionNode) { self->mExpressionNode = come_decrement_ref_count2(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
                                come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sSwitchNode* sSwitchNode_clone(struct sSwitchNode* self){
void* __result_obj__;
_Bool _if_conditional211;
struct sSwitchNode* __result109__;
void* right_value124;
struct sSwitchNode* result_101;
_Bool _if_conditional212;
void* right_value125;
struct sNode* __dec_obj51;
_Bool _if_conditional213;
void* right_value126;
struct sBlock* __dec_obj52;
_Bool _if_conditional214;
_Bool _if_conditional215;
void* right_value127;
char* __dec_obj53;
struct sSwitchNode* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
right_value124 = (void*)0;
memset(&result_101, 0, sizeof(struct sSwitchNode*));
right_value125 = (void*)0;
right_value126 = (void*)0;
right_value127 = (void*)0;
                            if(self==(void*)0) {
                                __result109__ = __result_obj__ = (void*)0;
                                return __result109__;
                            }
                            result_101=(struct sSwitchNode*)come_increment_ref_count(((struct sSwitchNode*)(right_value124=(struct sSwitchNode*)come_calloc(1, sizeof(struct sSwitchNode)*(1), "sSwitchNode_clone", 3, "struct sSwitchNode"))));
                            come_call_finalizer2(sSwitchNode_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
                                __dec_obj51=result_101->mExpressionNode;
                                result_101->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value125=sNode_clone(self->mExpressionNode))));
                                if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count2(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value125) { right_value125 = come_decrement_ref_count2(right_value125, ((struct sNode*)right_value125)->finalize, ((struct sNode*)right_value125)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
                                __dec_obj52=result_101->mBlock;
                                result_101->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value126=sBlock_clone(self->mBlock))));
                                come_call_finalizer2(sBlock_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sBlock_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            }
                            if(self!=((void*)0)) {
                                result_101->sline=self->sline;
                            }
                            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                __dec_obj53=result_101->sname;
                                result_101->sname=(char*)come_increment_ref_count(((char*)(right_value127=string_clone(self->sname))));
                                __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            __result110__ = __result_obj__ = result_101;
                            come_call_finalizer2(sSwitchNode_finalize,result_101, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result110__;
                            come_call_finalizer2(sSwitchNode_finalize,result_101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

