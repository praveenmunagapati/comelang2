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
struct buffer
{
    char* buf;
    int len;
    int size;
};
struct optional$2intbool
{
    int v1;
    _Bool v2;
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
struct optional$2boolbool
{
    _Bool v1;
    _Bool v2;
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
struct optional$2charphbool
{
    char* v1;
    _Bool v2;
};
struct optional$2intpbool
{
    int* v1;
    _Bool v2;
};
struct optional$2list$1charphphbool
{
    struct list$1charph* v1;
    _Bool v2;
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

struct optional$2intbool* buffer_compare(struct buffer* left, struct buffer* right);

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

struct optional$2boolbool* charp_equals(char* self, char* right);

struct optional$2boolbool* string_equals(char* self, char* right);

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

struct optional$2intbool* FILE_write(struct _IO_FILE* f, char* str);

struct optional$2charphbool* FILE_read(struct _IO_FILE* f);

struct optional$2intbool* FILE_fclose(struct _IO_FILE* f);

struct optional$2intpbool* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...);

struct optional$2list$1charphphbool* FILE_readlines(struct _IO_FILE* f);

struct optional$2intbool* fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*));

struct optional$2intbool* string_write(char* self, char* file_name, _Bool append);

struct optional$2intbool* charp_write(char* self, char* file_name, _Bool append);

struct optional$2charphbool* charp_read(char* file_name);

struct optional$2charphbool* string_read(char* file_name);

struct optional$2charphbool* charp_puts(char* self);

struct optional$2charphbool* string_puts(char* self);

int int_printf(int self, char* msg);

struct optional$2charphbool* string_printf(char* self, ...);

struct optional$2charphbool* charp_printf(char* self, ...);

struct optional$2charphbool* charp_print(char* self);

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
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
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
memset(&right_value0, 0, sizeof(void*));
memset(&result_0, 0, sizeof(struct smart_pointer$1char*));
memset(&right_value1, 0, sizeof(void*));
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2000, "struct smart_pointer$1char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value0);
    if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value0;
    __freed_obj__ = 0;
    __dec_obj1=result_0->memory;
    result_0->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_clone(self))));
    if(__dec_obj1) { come_call_finalizer(buffer_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value1);
    if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value1;
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
memset(&right_value2, 0, sizeof(void*));
memset(&result_1, 0, sizeof(struct smart_pointer$1char*));
memset(&right_value3, 0, sizeof(void*));
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2010, "struct smart_pointer$1char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value2);
    if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value2;
    __freed_obj__ = 0;
    __dec_obj2=result_1->memory;
    result_1->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_clone(self))));
    if(__dec_obj2) { come_call_finalizer(buffer_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value3);
    if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value3;
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
memset(&right_value4, 0, sizeof(void*));
memset(&result_2, 0, sizeof(struct smart_pointer$1short*));
memset(&right_value5, 0, sizeof(void*));
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2020, "struct smart_pointer$1short"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value4);
    if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value4;
    __freed_obj__ = 0;
    __dec_obj3=result_2->memory;
    result_2->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_clone(self))));
    if(__dec_obj3) { come_call_finalizer(buffer_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value5);
    if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value5;
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
memset(&right_value6, 0, sizeof(void*));
memset(&result_3, 0, sizeof(struct smart_pointer$1int*));
memset(&right_value7, 0, sizeof(void*));
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2030, "struct smart_pointer$1int"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value6);
    if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value6;
    __freed_obj__ = 0;
    __dec_obj4=result_3->memory;
    result_3->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_clone(self))));
    if(__dec_obj4) { come_call_finalizer(buffer_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value7);
    if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value7;
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
memset(&right_value8, 0, sizeof(void*));
memset(&result_4, 0, sizeof(struct smart_pointer$1long*));
memset(&right_value9, 0, sizeof(void*));
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2040, "struct smart_pointer$1long"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value8);
    if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value8;
    __freed_obj__ = 0;
    __dec_obj5=result_4->memory;
    result_4->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_clone(self))));
    if(__dec_obj5) { come_call_finalizer(buffer_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value9);
    if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value9;
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

struct sSwitchNode* sSwitchNode_initialize(struct sSwitchNode* self, struct sNode* expression_node, struct sBlock* block, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value10;
char* __dec_obj6;
void* right_value12;
struct sNode* __dec_obj7;
void* right_value84;
struct sBlock* __dec_obj40;
struct sSwitchNode* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
memset(&right_value12, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj6=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value10=__builtin_string(info->sname))));
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
    if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value10;
    __freed_obj__ = 0;
    __dec_obj7=self->mExpressionNode;
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value12=sNode_clone(expression_node))));
    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, ((struct sNode*)__dec_obj7)->finalize, ((struct sNode*)__dec_obj7)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { right_value12 = come_decrement_ref_count(right_value12, ((struct sNode*)right_value12)->finalize, ((struct sNode*)right_value12)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value12;
    __freed_obj__ = 0;
    __dec_obj40=self->mBlock;
    self->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value84=sBlock_clone(block))));
    if(__dec_obj40) { come_call_finalizer(sBlock_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value84);
    if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value84;
    __freed_obj__ = 0;
    __result67__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sSwitchNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(expression_node && !__freed_obj__) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
    return __result67__;
    if(self && !__freed_obj__) { come_call_finalizer(sSwitchNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(expression_node && !__freed_obj__) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value11, 0, sizeof(void*));
memset(&result_5, 0, sizeof(struct sNode*));
        if(_if_conditional5=self==(void*)0,        _if_conditional5) {
            __result7__ = __result_obj__ = (void*)0;
            return __result7__;
        }
        result_5=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value11);
        if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { right_value11 = come_decrement_ref_count(right_value11, ((struct sNode*)right_value11)->finalize, ((struct sNode*)right_value11)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[0] = right_value11;
        __freed_obj__ = 0;
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
        __result8__ = __result_obj__ = result_5;
        if(result_5 && !__freed_obj__) { result_5 = come_decrement_ref_count(result_5, ((struct sNode*)result_5)->finalize, ((struct sNode*)result_5)->_protocol_obj, 0, 1, 0); } 
        return __result8__;
        if(result_5 && !__freed_obj__) { result_5 = come_decrement_ref_count(result_5, ((struct sNode*)result_5)->finalize, ((struct sNode*)result_5)->_protocol_obj, 0, 0, 0); } 
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional14;
struct sBlock* __result9__;
void* right_value13;
struct sBlock* result_6;
_Bool _if_conditional18;
void* right_value20;
struct list$1sNodeph* __dec_obj11;
_Bool _if_conditional22;
void* right_value83;
struct sVarTable* __dec_obj39;
struct sBlock* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value13, 0, sizeof(void*));
memset(&result_6, 0, sizeof(struct sBlock*));
memset(&right_value20, 0, sizeof(void*));
memset(&right_value83, 0, sizeof(void*));
        if(_if_conditional14=self==(void*)0,        _if_conditional14) {
            __result9__ = __result_obj__ = (void*)0;
            return __result9__;
        }
        result_6=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value13=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value13);
        if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value13;
        __freed_obj__ = 0;
        if(_if_conditional18=self!=((void*)0)&&self->mNodes!=((void*)0),        _if_conditional18) {
            __dec_obj11=result_6->mNodes;
            result_6->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value20=list$1sNodephp_clone(self->mNodes))));
            if(__dec_obj11) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
            if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value20;
            __freed_obj__ = 0;
        }
        if(_if_conditional22=self!=((void*)0)&&self->mVarTable!=((void*)0),        _if_conditional22) {
            __dec_obj39=result_6->mVarTable;
            result_6->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value83=sVarTable_clone(self->mVarTable))));
            if(__dec_obj39) { come_call_finalizer(sVarTable_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
            if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value83;
            __freed_obj__ = 0;
        }
        __result66__ = __result_obj__ = result_6;
        if(result_6 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,result_6, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result66__;
        if(result_6 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,result_6, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional15;
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional15=self!=((void*)0)&&self->mNodes!=((void*)0),            _if_conditional15) {
                if(self->mNodes && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional17=self!=((void*)0)&&self->mVarTable!=((void*)0),            _if_conditional17) {
                if(self->mVarTable && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_7;
_Bool _while_condtional1;
struct list_item$1sNodeph* prev_it_8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_7, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_8, 0, sizeof(struct list_item$1sNodeph*));
                    it_7=self->head;
                    while(_while_condtional1=it_7!=((void*)0),                    _while_condtional1) {
                        prev_it_8=it_7;
                        it_7=it_7->next;
                        if(prev_it_8 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_8, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional16=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional16) {
                                if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0); } 
                            }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional19;
struct list$1sNodeph* __result10__;
void* right_value14;
void* right_value15;
struct list$1sNodeph* result_9;
struct list_item$1sNodeph* it_10;
_Bool _while_condtional2;
void* right_value19;
struct list$1sNodeph* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value14, 0, sizeof(void*));
memset(&right_value15, 0, sizeof(void*));
memset(&result_9, 0, sizeof(struct list$1sNodeph*));
memset(&it_10, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value19, 0, sizeof(void*));
                if(_if_conditional19=self==((void*)0),                _if_conditional19) {
                    __result10__ = __result_obj__ = ((void*)0);
                    return __result10__;
                }
                result_9=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value15=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value14=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 198, "struct list$1sNodeph"))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value14);
                if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value14;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value15);
                if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value15;
                __freed_obj__ = 0;
                it_10=self->head;
                while(_while_condtional2=it_10!=((void*)0),                _while_condtional2) {
                    list$1sNodeph_add(result_9,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value19=sNode_clone(it_10->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19);
                    if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { right_value19 = come_decrement_ref_count(right_value19, ((struct sNode*)right_value19)->finalize, ((struct sNode*)right_value19)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value19;
                    __freed_obj__ = 0;
                    it_10=it_10->next;
                }
                __result13__ = __result_obj__ = result_9;
                if(result_9 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_9, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result13__;
                if(result_9 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_9, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result11__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result11__;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value16, 0, sizeof(void*));
memset(&litem_11, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value17, 0, sizeof(void*));
memset(&litem_12, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value18, 0, sizeof(void*));
memset(&litem_13, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional20=self->len==0,                        _if_conditional20) {
                            litem_11=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value16=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 212, "struct list_item$1sNodeph"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
                            if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value16;
                            __freed_obj__ = 0;
                            litem_11->prev=((void*)0);
                            litem_11->next=((void*)0);
                            __dec_obj8=litem_11->item;
                            litem_11->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0,0,0); }
                            self->tail=litem_11;
                            self->head=litem_11;
                        }
                        else {
                            if(_if_conditional21=self->len==1,                            _if_conditional21) {
                                litem_12=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value17=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 222, "struct list_item$1sNodeph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value17);
                                if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value17;
                                __freed_obj__ = 0;
                                litem_12->prev=self->head;
                                litem_12->next=((void*)0);
                                __dec_obj9=litem_12->item;
                                litem_12->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0,0); }
                                self->tail=litem_12;
                                self->head->next=litem_12;
                            }
                            else {
                                litem_13=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value18=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 232, "struct list_item$1sNodeph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
                                if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value18;
                                __freed_obj__ = 0;
                                litem_13->prev=self->tail;
                                litem_13->next=((void*)0);
                                __dec_obj10=litem_13->item;
                                litem_13->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0,0); }
                                self->tail->next=litem_13;
                                self->tail=litem_13;
                            }
                        }
                        self->len++;
                        __result12__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                        return __result12__;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional23;
struct sVarTable* __result14__;
void* right_value21;
struct sVarTable* result_14;
_Bool _if_conditional24;
void* right_value82;
struct map$2charphsVarph* __dec_obj38;
_Bool _if_conditional171;
_Bool _if_conditional172;
_Bool _if_conditional173;
struct sVarTable* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value21, 0, sizeof(void*));
memset(&result_14, 0, sizeof(struct sVarTable*));
memset(&right_value82, 0, sizeof(void*));
                if(_if_conditional23=self==(void*)0,                _if_conditional23) {
                    __result14__ = __result_obj__ = (void*)0;
                    return __result14__;
                }
                result_14=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value21=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
                if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value21;
                __freed_obj__ = 0;
                if(_if_conditional24=self!=((void*)0)&&self->mVars!=((void*)0),                _if_conditional24) {
                    __dec_obj38=result_14->mVars;
                    result_14->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value82=map$2charphsVarphp_clone(self->mVars))));
                    if(__dec_obj38) { come_call_finalizer(map$2charphsVarph_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value82);
                    if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value82;
                    __freed_obj__ = 0;
                }
                if(_if_conditional171=self!=((void*)0),                _if_conditional171) {
                    result_14->mGlobal=self->mGlobal;
                }
                if(_if_conditional172=self!=((void*)0),                _if_conditional172) {
                    result_14->mParent=self->mParent;
                }
                if(_if_conditional173=self!=((void*)0),                _if_conditional173) {
                    result_14->mID=self->mID;
                }
                __result65__ = __result_obj__ = result_14;
                if(result_14 && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,result_14, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result65__;
                if(result_14 && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,result_14, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional25;
struct map$2charphsVarph* __result15__;
void* right_value22;
void* right_value28;
struct map$2charphsVarph* result_24;
char* it_27;
_Bool _for_condtionalA4;
struct sVar* default_value_30;
void* right_value30;
struct sVar* it2_34;
void* right_value81;
struct map$2charphsVarph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value22, 0, sizeof(void*));
memset(&right_value28, 0, sizeof(void*));
memset(&result_24, 0, sizeof(struct map$2charphsVarph*));
memset(&it_27, 0, sizeof(char*));
memset(&default_value_30, 0, sizeof(struct sVar*));
memset(&right_value30, 0, sizeof(void*));
memset(&it2_34, 0, sizeof(struct sVar*));
memset(&right_value81, 0, sizeof(void*));
                        if(_if_conditional25=self==((void*)0),                        _if_conditional25) {
                            __result15__ = __result_obj__ = ((void*)0);
                            return __result15__;
                        }
                        result_24=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value28=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value22=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang2.h", 1225, "struct map$2charphsVarph"))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
                        if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value22;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value28);
                        if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value28;
                        __freed_obj__ = 0;
                        for(
                        it_27=map$2charphsVarph_begin(self) ,                        0;                        _for_condtionalA4=                        !map$2charphsVarph_end(self) ,                        _for_condtionalA4;                        it_27=map$2charphsVarph_next(self) ,                        0                        ){
                            memset(&default_value_30,0,sizeof(struct sVar*));
                            it2_34=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value30=map$2charphsVarph_at(self,it_27,default_value_30))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
                            if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value30;
                            __freed_obj__ = 0;
                            map$2charphsVarph_insert2(result_24,it_27,(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value81=sVar_clone(it2_34)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
                            if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value81;
                            __freed_obj__ = 0;
                            if(it2_34 && !__freed_obj__) { come_call_finalizer(sVar_finalize,it2_34, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        __result64__ = __result_obj__ = result_24;
                        if(result_24 && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result64__;
                        if(result_24 && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value23;
void* right_value24;
void* right_value25;
int i_19;
_Bool _for_condtionalA1;
void* right_value26;
void* right_value27;
struct list$1charp* __dec_obj12;
struct map$2charphsVarph* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value23, 0, sizeof(void*));
memset(&right_value24, 0, sizeof(void*));
memset(&right_value25, 0, sizeof(void*));
memset(&i_19, 0, sizeof(int));
memset(&right_value26, 0, sizeof(void*));
memset(&right_value27, 0, sizeof(void*));
                            self->keys=(char**)come_increment_ref_count(((char**)(right_value23=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1132, "char*"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
                            if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { right_value23 = come_decrement_ref_count(right_value23, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value23;
                            __freed_obj__ = 0;
                            self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value24=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(1024)), "./comelang2.h", 1133, "struct sVar*"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value24);
                            if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value24;
                            __freed_obj__ = 0;
                            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value25=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1134, "_Bool"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
                            if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { right_value25 = come_decrement_ref_count(right_value25, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value25;
                            __freed_obj__ = 0;
                            for(
                            i_19=0 ,                            0;                            _for_condtionalA1=                            i_19<1024 ,                            _for_condtionalA1;                            i_19++ ,                            0                            ){
                                self->item_existance[i_19]=(_Bool)0;
                            }
                            self->size=1024;
                            self->len=0;
                            __dec_obj12=self->key_list;
                            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value27=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value26=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1144, "struct list$1charp"))))))));
                            if(__dec_obj12) { come_call_finalizer(list$1charp_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value26);
                            if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value26;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value27);
                            if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value27;
                            __freed_obj__ = 0;
                            self->it=0;
                            __result17__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result17__;
                            if(self && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional44;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional26=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional26) {
                                    if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(_if_conditional27=self!=((void*)0)&&self->mCValueName!=((void*)0),                                _if_conditional27) {
                                    if(self->mCValueName && !__freed_obj__) { self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(_if_conditional28=self!=((void*)0)&&self->mType!=((void*)0),                                _if_conditional28) {
                                    if(self->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional44=self!=((void*)0)&&self->mFunName!=((void*)0),                                _if_conditional44) {
                                    if(self->mFunName && !__freed_obj__) { self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        if(_if_conditional29=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                        _if_conditional29) {
                                            if(self->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        if(_if_conditional31=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                        _if_conditional31) {
                                            if(self->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        if(_if_conditional32=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                        _if_conditional32) {
                                            if(self->mGenericsName && !__freed_obj__) { self->mGenericsName = come_decrement_ref_count(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                                        }
                                        if(_if_conditional33=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                        _if_conditional33) {
                                            if(self->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        if(_if_conditional35=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                        _if_conditional35) {
                                            if(self->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        if(_if_conditional36=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                        _if_conditional36) {
                                            if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        if(_if_conditional37=self!=((void*)0)&&self->mParamNames!=((void*)0),                                        _if_conditional37) {
                                            if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        if(_if_conditional39=self!=((void*)0)&&self->mResultType!=((void*)0),                                        _if_conditional39) {
                                            if(self->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        if(_if_conditional40=self!=((void*)0)&&self->mAlignas!=((void*)0),                                        _if_conditional40) {
                                            if(self->mAlignas && !__freed_obj__) { self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0); } 
                                        }
                                        if(_if_conditional41=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                        _if_conditional41) {
                                            if(self->mSizeNum && !__freed_obj__) { self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                                        }
                                        if(_if_conditional42=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                        _if_conditional42) {
                                            if(self->mOriginalTypeName && !__freed_obj__) { self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                                        }
                                        if(_if_conditional43=self!=((void*)0)&&self->mAsmName!=((void*)0),                                        _if_conditional43) {
                                            if(self->mAsmName && !__freed_obj__) { self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                                        }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional30;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                if(_if_conditional30=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional30) {
                                                    if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sTypeph* it_15;
_Bool _while_condtional3;
struct list_item$1sTypeph* prev_it_16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_15, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_16, 0, sizeof(struct list_item$1sTypeph*));
                                                it_15=self->head;
                                                while(_while_condtional3=it_15!=((void*)0),                                                _while_condtional3) {
                                                    prev_it_16=it_15;
                                                    it_15=it_15->next;
                                                    if(prev_it_16 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_16, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional34;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        if(_if_conditional34=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional34) {
                                                            if(self->item && !__freed_obj__) { come_call_finalizer(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_17;
_Bool _while_condtional4;
struct list_item$1charph* prev_it_18;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_17, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_18, 0, sizeof(struct list_item$1charph*));
                                                it_17=self->head;
                                                while(_while_condtional4=it_17!=((void*)0),                                                _while_condtional4) {
                                                    prev_it_18=it_17;
                                                    it_17=it_17->next;
                                                    if(prev_it_18 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_18, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional38;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        if(_if_conditional38=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional38) {
                                                            if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, 0); }
                                                        }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charp* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                self->head=((void*)0);
                                self->tail=((void*)0);
                                self->len=0;
                                __result16__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result16__;
                                if(self && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_20;
_Bool _while_condtional5;
struct list_item$1charp* prev_it_21;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_20, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_21, 0, sizeof(struct list_item$1charp*));
                                    it_20=self->head;
                                    while(_while_condtional5=it_20!=((void*)0),                                    _while_condtional5) {
                                        prev_it_21=it_20;
                                        it_20=it_20->next;
                                        if(prev_it_21 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_21, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void list$1charp_finalize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_22;
_Bool _for_condtionalA2;
_Bool _if_conditional45;
_Bool _if_conditional46;
int i_23;
_Bool _for_condtionalA3;
_Bool _if_conditional47;
_Bool _if_conditional48;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_22, 0, sizeof(int));
memset(&i_23, 0, sizeof(int));
                                for(
                                i_22=0 ,                                0;                                _for_condtionalA2=                                i_22<self->size ,                                _for_condtionalA2;                                i_22++ ,                                0                                ){
                                    if(_if_conditional45=self->item_existance[i_22],                                    _if_conditional45) {
                                        if(_if_conditional46=1,                                        _if_conditional46) {
                                            if(self->items[i_22] && !__freed_obj__) { come_call_finalizer(sVar_finalize,self->items[i_22], (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                    }
                                }
                                come_free((char*)self->items);
                                for(
                                i_23=0 ,                                0;                                _for_condtionalA3=                                i_23<self->size ,                                _for_condtionalA3;                                i_23++ ,                                0                                ){
                                    if(_if_conditional47=self->item_existance[i_23],                                    _if_conditional47) {
                                        if(_if_conditional48=1,                                        _if_conditional48) {
                                            if(self->keys[i_23] && !__freed_obj__) { self->keys[i_23] = come_decrement_ref_count(self->keys[i_23], (void*)0, (void*)0, 0, 0, 0); }
                                        }
                                    }
                                }
                                come_free((char*)self->keys);
                                if(self->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional49;
char* result_25;
char* __result18__;
_Bool _if_conditional50;
char* __result19__;
char* result_26;
char* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_25, 0, sizeof(char*));
memset(&result_26, 0, sizeof(char*));
                            if(_if_conditional49=self==((void*)0),                            _if_conditional49) {
                                memset(&result_25,0,sizeof(char*));
                                __result18__ = __result_obj__ = result_25;
                                return __result18__;
                            }
                            self->key_list->it=self->key_list->head;
                            if(_if_conditional50=self->key_list->it,                            _if_conditional50) {
                                __result19__ = __result_obj__ = self->key_list->it->item;
                                return __result19__;
                            }
                            memset(&result_26,0,sizeof(char*));
                            __result20__ = __result_obj__ = result_26;
                            return __result20__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __result21__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                            return __result21__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional51;
char* result_28;
char* __result22__;
_Bool _if_conditional52;
char* __result23__;
char* result_29;
char* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_28, 0, sizeof(char*));
memset(&result_29, 0, sizeof(char*));
                            if(_if_conditional51=self==((void*)0)||self->key_list->it==((void*)0),                            _if_conditional51) {
                                memset(&result_28,0,sizeof(char*));
                                __result22__ = __result_obj__ = result_28;
                                return __result22__;
                            }
                            self->key_list->it=self->key_list->it->next;
                            if(_if_conditional52=self->key_list->it,                            _if_conditional52) {
                                __result23__ = __result_obj__ = self->key_list->it->item;
                                return __result23__;
                            }
                            memset(&result_29,0,sizeof(char*));
                            __result24__ = __result_obj__ = result_29;
                            return __result24__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_31;
unsigned int it_32;
_Bool _while_condtional6;
_Bool _if_conditional53;
void* right_value29;
_Bool _if_conditional55;
struct sVar* __result27__;
_Bool _if_conditional56;
_Bool _if_conditional57;
struct sVar* __result28__;
struct sVar* __result29__;
struct sVar* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_31, 0, sizeof(unsigned int));
memset(&it_32, 0, sizeof(unsigned int));
memset(&right_value29, 0, sizeof(void*));
                                hash_31=string_get_hash_key(((char*)key))%self->size;
                                it_32=hash_31;
                                while(_while_condtional6=(_Bool)1,                                _while_condtional6) {
                                    if(_if_conditional53=self->item_existance[it_32],                                    _if_conditional53) {
                                        if(_if_conditional55=optional$2boolbool_value(((struct optional$2boolbool*)(right_value29=string_equals(self->keys[it_32],key)))),                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29),
                                        (right_value29 && right_value29 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                        __right_value_freed_obj[0] = right_value29, 
                                        __freed_obj__ = 0, 
                                        _if_conditional55) {
                                            __result27__ = __result_obj__ = self->items[it_32];
                                            if(default_value && !__freed_obj__) { come_call_finalizer(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            return __result27__;
                                        }
                                        it_32++;
                                        if(_if_conditional56=it_32>=self->size,                                        _if_conditional56) {
                                            it_32=0;
                                        }
                                        else {
                                            if(_if_conditional57=it_32==hash_31,                                            _if_conditional57) {
                                                __result28__ = __result_obj__ = default_value;
                                                if(default_value && !__freed_obj__) { come_call_finalizer(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                return __result28__;
                                            }
                                        }
                                    }
                                    else {
                                        __result29__ = __result_obj__ = default_value;
                                        if(default_value && !__freed_obj__) { come_call_finalizer(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        return __result29__;
                                    }
                                }
                                __result30__ = __result_obj__ = default_value;
                                if(default_value && !__freed_obj__) { come_call_finalizer(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result30__;
                                if(default_value && !__freed_obj__) { come_call_finalizer(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional54;
_Bool default_value_33;
_Bool __result25__;
_Bool __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_33, 0, sizeof(_Bool));
                                            if(_if_conditional54=self==((void*)0),                                            _if_conditional54) {
                                                memset(&default_value_33,0,sizeof(_Bool));
                                                __result25__ = default_value_33;
                                                return __result25__;
                                            }
                                            else {
                                                __result26__ = self->v1;
                                                return __result26__;
                                            }
}

static void optional$2boolboolp_finalize(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional58;
unsigned int hash_46;
int it_47;
_Bool _while_condtional8;
_Bool _if_conditional62;
void* right_value36;
_Bool _if_conditional63;
_Bool _if_conditional64;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool same_key_exist_64;
char* it2_67;
_Bool _for_condtionalA6;
void* right_value38;
_Bool _if_conditional93;
_Bool _if_conditional94;
struct map$2charphsVarph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_46, 0, sizeof(unsigned int));
memset(&it_47, 0, sizeof(int));
memset(&right_value36, 0, sizeof(void*));
memset(&same_key_exist_64, 0, sizeof(_Bool));
memset(&it2_67, 0, sizeof(char*));
memset(&right_value38, 0, sizeof(void*));
                                if(_if_conditional58=self->len*2>=self->size,                                _if_conditional58) {
                                    map$2charphsVarph_rehash(self);
                                }
                                hash_46=string_get_hash_key(key)%self->size;
                                it_47=hash_46;
                                while(_while_condtional8=(_Bool)1,                                _while_condtional8) {
                                    if(_if_conditional62=self->item_existance[it_47],                                    _if_conditional62) {
                                        if(_if_conditional63=optional$2boolbool_value(((struct optional$2boolbool*)(right_value36=string_equals(self->keys[it_47],key)))),                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36),
                                        (right_value36 && right_value36 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                        __right_value_freed_obj[0] = right_value36, 
                                        __freed_obj__ = 0, 
                                        _if_conditional63) {
                                            if(_if_conditional64=1,                                            _if_conditional64) {
                                                if(self->keys[it_47] && !__freed_obj__) { self->keys[it_47] = come_decrement_ref_count(self->keys[it_47], (void*)0, (void*)0, 0, 0, 0); }
                                                list$1charp_remove(self->key_list,self->keys[it_47]);
                                                self->keys[it_47]=(char*)come_increment_ref_count(key);
                                            }
                                            else {
                                                list$1charp_remove(self->key_list,self->keys[it_47]);
                                                self->keys[it_47]=key;
                                            }
                                            if(_if_conditional84=1,                                            _if_conditional84) {
                                                if(self->items[it_47] && !__freed_obj__) { come_call_finalizer(sVar_finalize,self->items[it_47], (void*)0, (void*)0, 0, 0, 0, 0); }
                                                self->items[it_47]=(struct sVar*)come_increment_ref_count(item);
                                            }
                                            else {
                                                self->items[it_47]=item;
                                            }
                                            break;
                                        }
                                        it_47++;
                                        if(_if_conditional85=it_47>=self->size,                                        _if_conditional85) {
                                            it_47=0;
                                        }
                                        else {
                                            if(_if_conditional86=it_47==hash_46,                                            _if_conditional86) {
                                                printf("unexpected error in map.insert\n");
                                                stackframe();
                                                exit(2);
                                            }
                                        }
                                    }
                                    else {
                                        self->item_existance[it_47]=(_Bool)1;
                                        if(_if_conditional87=1,                                        _if_conditional87) {
                                            self->keys[it_47]=(char*)come_increment_ref_count(key);
                                        }
                                        else {
                                            self->keys[it_47]=key;
                                        }
                                        if(_if_conditional88=1,                                        _if_conditional88) {
                                            self->items[it_47]=(struct sVar*)come_increment_ref_count(item);
                                        }
                                        else {
                                            self->items[it_47]=item;
                                        }
                                        self->len++;
                                        break;
                                    }
                                }
                                same_key_exist_64=(_Bool)0;
                                for(
                                it2_67=list$1charp_begin(self->key_list) ,                                0;                                _for_condtionalA6=                                !list$1charp_end(self->key_list) ,                                _for_condtionalA6;                                it2_67=list$1charp_next(self->key_list) ,                                0                                ){
                                    if(_if_conditional93=optional$2boolbool_value(((struct optional$2boolbool*)(right_value38=string_equals(it2_67,key)))),                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38),
                                    (right_value38 && right_value38 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                    __right_value_freed_obj[0] = right_value38, 
                                    __freed_obj__ = 0, 
                                    _if_conditional93) {
                                        same_key_exist_64=(_Bool)1;
                                    }
                                }
                                if(_if_conditional94=!same_key_exist_64,                                _if_conditional94) {
                                    list$1charp_push_back(self->key_list,key);
                                }
                                __result43__ = __result_obj__ = self;
                                if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                                if(item && !__freed_obj__) { come_call_finalizer(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result43__;
                                if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                                if(item && !__freed_obj__) { come_call_finalizer(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_35;
void* right_value31;
char** keys_36;
void* right_value32;
struct sVar** items_37;
void* right_value33;
_Bool* item_existance_38;
int len_39;
char* it_40;
_Bool _for_condtionalA5;
struct sVar* default_value_41;
void* right_value34;
struct sVar* it2_42;
unsigned int hash_43;
int n_44;
_Bool _while_condtional7;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
struct sVar* default_value_45;
void* right_value35;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_35, 0, sizeof(int));
memset(&right_value31, 0, sizeof(void*));
memset(&keys_36, 0, sizeof(char**));
memset(&right_value32, 0, sizeof(void*));
memset(&items_37, 0, sizeof(struct sVar**));
memset(&right_value33, 0, sizeof(void*));
memset(&item_existance_38, 0, sizeof(_Bool*));
memset(&len_39, 0, sizeof(int));
memset(&it_40, 0, sizeof(char*));
memset(&default_value_41, 0, sizeof(struct sVar*));
memset(&right_value34, 0, sizeof(void*));
memset(&it2_42, 0, sizeof(struct sVar*));
memset(&hash_43, 0, sizeof(unsigned int));
memset(&n_44, 0, sizeof(int));
memset(&default_value_45, 0, sizeof(struct sVar*));
memset(&right_value35, 0, sizeof(void*));
                                        size_35=self->size*10;
                                        keys_36=(char**)come_increment_ref_count(((char**)(right_value31=(char**)come_calloc(1, sizeof(char*)*(1*(size_35)), "./comelang2.h", 1380, "char*"))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
                                        if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { right_value31 = come_decrement_ref_count(right_value31, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value31;
                                        __freed_obj__ = 0;
                                        items_37=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value32=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_35)), "./comelang2.h", 1381, "struct sVar*"))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
                                        if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value32;
                                        __freed_obj__ = 0;
                                        item_existance_38=(_Bool*)come_increment_ref_count(((_Bool*)(right_value33=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_35)), "./comelang2.h", 1382, "_Bool"))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value33);
                                        if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value33;
                                        __freed_obj__ = 0;
                                        len_39=0;
                                        for(
                                        it_40=map$2charphsVarph_begin(self) ,                                        0;                                        _for_condtionalA5=                                        !map$2charphsVarph_end(self) ,                                        _for_condtionalA5;                                        it_40=map$2charphsVarph_next(self) ,                                        0                                        ){
                                            memset(&default_value_41,0,sizeof(struct sVar*));
                                            it2_42=((struct sVar*)(right_value34=map$2charphsVarph_at(self,it_40,default_value_41)));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
                                            if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value34;
                                            __freed_obj__ = 0;
                                            hash_43=string_get_hash_key(it_40)%size_35;
                                            n_44=hash_43;
                                            while(_while_condtional7=(_Bool)1,                                            _while_condtional7) {
                                                if(_if_conditional59=item_existance_38[n_44],                                                _if_conditional59) {
                                                    n_44++;
                                                    if(_if_conditional60=n_44>=size_35,                                                    _if_conditional60) {
                                                        n_44=0;
                                                    }
                                                    else {
                                                        if(_if_conditional61=n_44==hash_43,                                                        _if_conditional61) {
                                                            printf("unexpected error in map.rehash(1)\n");
                                                            stackframe();
                                                            exit(2);
                                                        }
                                                    }
                                                }
                                                else {
                                                    item_existance_38[n_44]=(_Bool)1;
                                                    keys_36[n_44]=it_40;
                                                    items_37[n_44]=((struct sVar*)(right_value35=map$2charphsVarph_at(self,it_40,default_value_45)));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
                                                    if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value35;
                                                    __freed_obj__ = 0;
                                                    len_39++;
                                                    break;
                                                }
                                            }
                                        }
                                        come_free((char*)self->items);
                                        if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                                        come_free((char*)self->keys);
                                        self->keys=keys_36;
                                        self->items=items_37;
                                        self->item_existance=item_existance_38;
                                        self->size=size_35;
                                        self->len=len_39;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int it2_48;
struct list_item$1charp* it_49;
_Bool _while_condtional9;
void* right_value37;
_Bool _if_conditional65;
struct list$1charp* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_48, 0, sizeof(int));
memset(&it_49, 0, sizeof(struct list_item$1charp*));
memset(&right_value37, 0, sizeof(void*));
                                                    it2_48=0;
                                                    it_49=self->head;
                                                    while(_while_condtional9=it_49!=((void*)0),                                                    _while_condtional9) {
                                                        if(_if_conditional65=optional$2boolbool_value(((struct optional$2boolbool*)(right_value37=string_equals(it_49->item,item)))),                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37),
                                                        (right_value37 && right_value37 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                        __right_value_freed_obj[0] = right_value37, 
                                                        __freed_obj__ = 0, 
                                                        _if_conditional65) {
                                                            list$1charp_delete(self,it2_48,it2_48+1);
                                                            break;
                                                        }
                                                        it2_48++;
                                                        it_49=it_49->next;
                                                    }
                                                    __result34__ = __result_obj__ = self;
                                                    return __result34__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional66;
_Bool _if_conditional67;
_Bool _if_conditional68;
int tmp_50;
_Bool _if_conditional69;
_Bool _if_conditional70;
_Bool _if_conditional71;
struct list$1charp* __result31__;
_Bool _if_conditional72;
_Bool _if_conditional73;
struct list_item$1charp* it_53;
int i_54;
_Bool _while_condtional11;
_Bool _if_conditional74;
struct list_item$1charp* prev_it_55;
_Bool _if_conditional75;
_Bool _if_conditional76;
struct list_item$1charp* it_56;
int i_57;
_Bool _while_condtional12;
_Bool _if_conditional77;
_Bool _if_conditional78;
struct list_item$1charp* prev_it_58;
struct list_item$1charp* it_59;
struct list_item$1charp* head_prev_it_60;
struct list_item$1charp* tail_it_61;
int i_62;
_Bool _while_condtional13;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
struct list_item$1charp* prev_it_63;
_Bool _if_conditional82;
_Bool _if_conditional83;
struct list$1charp* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_50, 0, sizeof(int));
memset(&it_53, 0, sizeof(struct list_item$1charp*));
memset(&i_54, 0, sizeof(int));
memset(&prev_it_55, 0, sizeof(struct list_item$1charp*));
memset(&it_56, 0, sizeof(struct list_item$1charp*));
memset(&i_57, 0, sizeof(int));
memset(&prev_it_58, 0, sizeof(struct list_item$1charp*));
memset(&it_59, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_60, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_61, 0, sizeof(struct list_item$1charp*));
memset(&i_62, 0, sizeof(int));
memset(&prev_it_63, 0, sizeof(struct list_item$1charp*));
                                                                if(_if_conditional66=head<0,                                                                _if_conditional66) {
                                                                    head+=self->len;
                                                                }
                                                                if(_if_conditional67=tail<0,                                                                _if_conditional67) {
                                                                    tail+=self->len+1;
                                                                }
                                                                if(_if_conditional68=head>tail,                                                                _if_conditional68) {
                                                                    tmp_50=tail;
                                                                    tail=head;
                                                                    head=tmp_50;
                                                                }
                                                                if(_if_conditional69=head<0,                                                                _if_conditional69) {
                                                                    head=0;
                                                                }
                                                                if(_if_conditional70=tail>self->len,                                                                _if_conditional70) {
                                                                    tail=self->len;
                                                                }
                                                                if(_if_conditional71=head==tail,                                                                _if_conditional71) {
                                                                    __result31__ = __result_obj__ = self;
                                                                    return __result31__;
                                                                }
                                                                if(_if_conditional72=head==0&&tail==self->len,                                                                _if_conditional72) {
                                                                    list$1charp_reset(self);
                                                                }
                                                                else {
                                                                    if(_if_conditional73=head==0,                                                                    _if_conditional73) {
                                                                        it_53=self->head;
                                                                        i_54=0;
                                                                        while(_while_condtional11=it_53!=((void*)0),                                                                        _while_condtional11) {
                                                                            if(_if_conditional74=i_54<tail,                                                                            _if_conditional74) {
                                                                                prev_it_55=it_53;
                                                                                it_53=it_53->next;
                                                                                i_54++;
                                                                                if(prev_it_55 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_55, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                self->len--;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional75=i_54==tail,                                                                                _if_conditional75) {
                                                                                    self->head=it_53;
                                                                                    self->head->prev=((void*)0);
                                                                                    break;
                                                                                }
                                                                                else {
                                                                                    it_53=it_53->next;
                                                                                    i_54++;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                    else {
                                                                        if(_if_conditional76=tail==self->len,                                                                        _if_conditional76) {
                                                                            it_56=self->head;
                                                                            i_57=0;
                                                                            while(_while_condtional12=it_56!=((void*)0),                                                                            _while_condtional12) {
                                                                                if(_if_conditional77=i_57==head,                                                                                _if_conditional77) {
                                                                                    self->tail=it_56->prev;
                                                                                    self->tail->next=((void*)0);
                                                                                }
                                                                                if(_if_conditional78=i_57>=head,                                                                                _if_conditional78) {
                                                                                    prev_it_58=it_56;
                                                                                    it_56=it_56->next;
                                                                                    i_57++;
                                                                                    if(prev_it_58 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_58, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                    self->len--;
                                                                                }
                                                                                else {
                                                                                    it_56=it_56->next;
                                                                                    i_57++;
                                                                                }
                                                                            }
                                                                        }
                                                                        else {
                                                                            it_59=self->head;
                                                                            head_prev_it_60=((void*)0);
                                                                            tail_it_61=((void*)0);
                                                                            i_62=0;
                                                                            while(_while_condtional13=it_59!=((void*)0),                                                                            _while_condtional13) {
                                                                                if(_if_conditional79=i_62==head,                                                                                _if_conditional79) {
                                                                                    head_prev_it_60=it_59->prev;
                                                                                }
                                                                                if(_if_conditional80=i_62==tail,                                                                                _if_conditional80) {
                                                                                    tail_it_61=it_59;
                                                                                }
                                                                                if(_if_conditional81=i_62>=head&&i_62<tail,                                                                                _if_conditional81) {
                                                                                    prev_it_63=it_59;
                                                                                    it_59=it_59->next;
                                                                                    i_62++;
                                                                                    if(prev_it_63 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_63, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                    self->len--;
                                                                                }
                                                                                else {
                                                                                    it_59=it_59->next;
                                                                                    i_62++;
                                                                                }
                                                                            }
                                                                            if(_if_conditional82=head_prev_it_60!=((void*)0),                                                                            _if_conditional82) {
                                                                                head_prev_it_60->next=tail_it_61;
                                                                            }
                                                                            if(_if_conditional83=tail_it_61!=((void*)0),                                                                            _if_conditional83) {
                                                                                tail_it_61->prev=head_prev_it_60;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                __result33__ = __result_obj__ = self;
                                                                return __result33__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_51;
_Bool _while_condtional10;
struct list_item$1charp* prev_it_52;
struct list$1charp* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_51, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_52, 0, sizeof(struct list_item$1charp*));
                                                                        it_51=self->head;
                                                                        while(_while_condtional10=it_51!=((void*)0),                                                                        _while_condtional10) {
                                                                            prev_it_52=it_51;
                                                                            it_51=it_51->next;
                                                                            if(prev_it_52 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_52, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                        }
                                                                        self->head=((void*)0);
                                                                        self->tail=((void*)0);
                                                                        self->len=0;
                                                                        __result32__ = __result_obj__ = self;
                                                                        return __result32__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional89;
char* result_65;
char* __result35__;
_Bool _if_conditional90;
char* __result36__;
char* result_66;
char* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_65, 0, sizeof(char*));
memset(&result_66, 0, sizeof(char*));
                                    if(_if_conditional89=self==((void*)0),                                    _if_conditional89) {
                                        memset(&result_65,0,sizeof(char*));
                                        __result35__ = __result_obj__ = result_65;
                                        return __result35__;
                                    }
                                    self->it=self->head;
                                    if(_if_conditional90=self->it,                                    _if_conditional90) {
                                        __result36__ = __result_obj__ = self->it->item;
                                        return __result36__;
                                    }
                                    memset(&result_66,0,sizeof(char*));
                                    __result37__ = __result_obj__ = result_66;
                                    return __result37__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    __result38__ = self==((void*)0)||self->it==((void*)0);
                                    return __result38__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional91;
char* result_68;
char* __result39__;
_Bool _if_conditional92;
char* __result40__;
char* result_69;
char* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_68, 0, sizeof(char*));
memset(&result_69, 0, sizeof(char*));
                                    if(_if_conditional91=self==((void*)0)||self->it==((void*)0),                                    _if_conditional91) {
                                        memset(&result_68,0,sizeof(char*));
                                        __result39__ = __result_obj__ = result_68;
                                        return __result39__;
                                    }
                                    self->it=self->it->next;
                                    if(_if_conditional92=self->it,                                    _if_conditional92) {
                                        __result40__ = __result_obj__ = self->it->item;
                                        return __result40__;
                                    }
                                    memset(&result_69,0,sizeof(char*));
                                    __result41__ = __result_obj__ = result_69;
                                    return __result41__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional95;
void* right_value39;
struct list_item$1charp* litem_70;
_Bool _if_conditional96;
void* right_value40;
struct list_item$1charp* litem_71;
void* right_value41;
struct list_item$1charp* litem_72;
struct list$1charp* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value39, 0, sizeof(void*));
memset(&litem_70, 0, sizeof(struct list_item$1charp*));
memset(&right_value40, 0, sizeof(void*));
memset(&litem_71, 0, sizeof(struct list_item$1charp*));
memset(&right_value41, 0, sizeof(void*));
memset(&litem_72, 0, sizeof(struct list_item$1charp*));
                                        if(_if_conditional95=self->len==0,                                        _if_conditional95) {
                                            litem_70=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value39=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 282, "struct list_item$1charp"))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
                                            if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value39;
                                            __freed_obj__ = 0;
                                            litem_70->prev=((void*)0);
                                            litem_70->next=((void*)0);
                                            litem_70->item=item;
                                            self->tail=litem_70;
                                            self->head=litem_70;
                                        }
                                        else {
                                            if(_if_conditional96=self->len==1,                                            _if_conditional96) {
                                                litem_71=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value40=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 292, "struct list_item$1charp"))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
                                                if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value40;
                                                __freed_obj__ = 0;
                                                litem_71->prev=self->head;
                                                litem_71->next=((void*)0);
                                                litem_71->item=item;
                                                self->tail=litem_71;
                                                self->head->next=litem_71;
                                            }
                                            else {
                                                litem_72=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value41=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 302, "struct list_item$1charp"))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
                                                if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value41;
                                                __freed_obj__ = 0;
                                                litem_72->prev=self->tail;
                                                litem_72->next=((void*)0);
                                                litem_72->item=item;
                                                self->tail->next=litem_72;
                                                self->tail=litem_72;
                                            }
                                        }
                                        self->len++;
                                        __result42__ = __result_obj__ = self;
                                        return __result42__;
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional97;
struct sVar* __result44__;
void* right_value42;
struct sVar* result_73;
_Bool _if_conditional98;
void* right_value43;
char* __dec_obj13;
_Bool _if_conditional99;
void* right_value44;
char* __dec_obj14;
_Bool _if_conditional100;
void* right_value79;
struct sType* __dec_obj36;
_Bool _if_conditional164;
_Bool _if_conditional165;
_Bool _if_conditional166;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool _if_conditional169;
void* right_value80;
char* __dec_obj37;
struct sVar* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value42, 0, sizeof(void*));
memset(&result_73, 0, sizeof(struct sVar*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
                                if(_if_conditional97=self==(void*)0,                                _if_conditional97) {
                                    __result44__ = __result_obj__ = (void*)0;
                                    return __result44__;
                                }
                                result_73=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value42=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
                                if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value42;
                                __freed_obj__ = 0;
                                if(_if_conditional98=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional98) {
                                    __dec_obj13=result_73->mName;
                                    result_73->mName=(char*)come_increment_ref_count(((char*)(right_value43=string_clone(self->mName))));
                                    if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
                                    if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { right_value43 = come_decrement_ref_count(right_value43, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value43;
                                    __freed_obj__ = 0;
                                }
                                if(_if_conditional99=self!=((void*)0)&&self->mCValueName!=((void*)0),                                _if_conditional99) {
                                    __dec_obj14=result_73->mCValueName;
                                    result_73->mCValueName=(char*)come_increment_ref_count(((char*)(right_value44=string_clone(self->mCValueName))));
                                    if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
                                    if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { right_value44 = come_decrement_ref_count(right_value44, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value44;
                                    __freed_obj__ = 0;
                                }
                                if(_if_conditional100=self!=((void*)0)&&self->mType!=((void*)0),                                _if_conditional100) {
                                    __dec_obj36=result_73->mType;
                                    result_73->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value79=sType_clone(self->mType))));
                                    if(__dec_obj36) { come_call_finalizer(sType_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
                                    if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value79;
                                    __freed_obj__ = 0;
                                }
                                if(_if_conditional164=self!=((void*)0),                                _if_conditional164) {
                                    result_73->mBlockLevel=self->mBlockLevel;
                                }
                                if(_if_conditional165=self!=((void*)0),                                _if_conditional165) {
                                    result_73->mGlobal=self->mGlobal;
                                }
                                if(_if_conditional166=self!=((void*)0),                                _if_conditional166) {
                                    result_73->mAllocaValue=self->mAllocaValue;
                                }
                                if(_if_conditional167=self!=((void*)0),                                _if_conditional167) {
                                    result_73->mFunctionParam=self->mFunctionParam;
                                }
                                if(_if_conditional168=self!=((void*)0),                                _if_conditional168) {
                                    result_73->mNoFree=self->mNoFree;
                                }
                                if(_if_conditional169=self!=((void*)0)&&self->mFunName!=((void*)0),                                _if_conditional169) {
                                    __dec_obj37=result_73->mFunName;
                                    result_73->mFunName=(char*)come_increment_ref_count(((char*)(right_value80=string_clone(self->mFunName))));
                                    if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value80);
                                    if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { right_value80 = come_decrement_ref_count(right_value80, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value80;
                                    __freed_obj__ = 0;
                                }
                                __result63__ = __result_obj__ = result_73;
                                if(result_73 && !__freed_obj__) { come_call_finalizer(sVar_finalize,result_73, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result63__;
                                if(result_73 && !__freed_obj__) { come_call_finalizer(sVar_finalize,result_73, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional101;
struct sType* __result45__;
void* right_value45;
struct sType* result_74;
_Bool _if_conditional102;
_Bool _if_conditional103;
void* right_value48;
struct tuple1$1sTypeph* __dec_obj16;
_Bool _if_conditional107;
void* right_value51;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional110;
void* right_value52;
char* __dec_obj19;
_Bool _if_conditional111;
void* right_value59;
struct list$1sTypeph* __dec_obj23;
_Bool _if_conditional115;
void* right_value63;
struct list$1sNodeph* __dec_obj24;
_Bool _if_conditional117;
_Bool _if_conditional118;
void* right_value64;
struct list$1sTypeph* __dec_obj25;
_Bool _if_conditional119;
void* right_value71;
struct list$1charph* __dec_obj29;
_Bool _if_conditional123;
void* right_value74;
struct tuple1$1sTypeph* __dec_obj31;
_Bool _if_conditional126;
_Bool _if_conditional127;
void* right_value75;
struct sNode* __dec_obj32;
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
_Bool _if_conditional151;
void* right_value76;
struct sNode* __dec_obj33;
_Bool _if_conditional152;
_Bool _if_conditional153;
_Bool _if_conditional154;
void* right_value77;
char* __dec_obj34;
_Bool _if_conditional155;
_Bool _if_conditional156;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional160;
_Bool _if_conditional161;
_Bool _if_conditional162;
_Bool _if_conditional163;
void* right_value78;
char* __dec_obj35;
struct sType* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value45, 0, sizeof(void*));
memset(&result_74, 0, sizeof(struct sType*));
memset(&right_value48, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
memset(&right_value64, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
                                        if(_if_conditional101=self==(void*)0,                                        _if_conditional101) {
                                            __result45__ = __result_obj__ = (void*)0;
                                            return __result45__;
                                        }
                                        result_74=(struct sType*)come_increment_ref_count(((struct sType*)(right_value45=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
                                        if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value45;
                                        __freed_obj__ = 0;
                                        if(_if_conditional102=self!=((void*)0),                                        _if_conditional102) {
                                            result_74->mClass=self->mClass;
                                        }
                                        if(_if_conditional103=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                        _if_conditional103) {
                                            __dec_obj16=result_74->mNoSolvedGenericsType;
                                            result_74->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value48=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                                            if(__dec_obj16) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value48);
                                            if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value48;
                                            __freed_obj__ = 0;
                                        }
                                        if(_if_conditional107=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                        _if_conditional107) {
                                            __dec_obj18=result_74->mOriginalLoadVarType;
                                            result_74->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value51=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                                            if(__dec_obj18) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
                                            if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value51;
                                            __freed_obj__ = 0;
                                        }
                                        if(_if_conditional110=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                        _if_conditional110) {
                                            __dec_obj19=result_74->mGenericsName;
                                            result_74->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value52=string_clone(self->mGenericsName))));
                                            if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52);
                                            if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { right_value52 = come_decrement_ref_count(right_value52, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value52;
                                            __freed_obj__ = 0;
                                        }
                                        if(_if_conditional111=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                        _if_conditional111) {
                                            __dec_obj23=result_74->mGenericsTypes;
                                            result_74->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value59=list$1sTypeph_clone(self->mGenericsTypes))));
                                            if(__dec_obj23) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59);
                                            if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value59;
                                            __freed_obj__ = 0;
                                        }
                                        if(_if_conditional115=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                        _if_conditional115) {
                                            __dec_obj24=result_74->mArrayNum;
                                            result_74->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value63=list$1sNodeph_clone(self->mArrayNum))));
                                            if(__dec_obj24) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value63);
                                            if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value63;
                                            __freed_obj__ = 0;
                                        }
                                        if(_if_conditional117=self!=((void*)0),                                        _if_conditional117) {
                                            result_74->mOmitArrayNum=self->mOmitArrayNum;
                                        }
                                        if(_if_conditional118=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                        _if_conditional118) {
                                            __dec_obj25=result_74->mParamTypes;
                                            result_74->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value64=list$1sTypeph_clone(self->mParamTypes))));
                                            if(__dec_obj25) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64);
                                            if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value64;
                                            __freed_obj__ = 0;
                                        }
                                        if(_if_conditional119=self!=((void*)0)&&self->mParamNames!=((void*)0),                                        _if_conditional119) {
                                            __dec_obj29=result_74->mParamNames;
                                            result_74->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value71=list$1charph_clone(self->mParamNames))));
                                            if(__dec_obj29) { come_call_finalizer(list$1charph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value71);
                                            if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value71;
                                            __freed_obj__ = 0;
                                        }
                                        if(_if_conditional123=self!=((void*)0)&&self->mResultType!=((void*)0),                                        _if_conditional123) {
                                            __dec_obj31=result_74->mResultType;
                                            result_74->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value74=tuple1$1sTypephp_clone(self->mResultType))));
                                            if(__dec_obj31) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value74);
                                            if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value74;
                                            __freed_obj__ = 0;
                                        }
                                        if(_if_conditional126=self!=((void*)0),                                        _if_conditional126) {
                                            result_74->mVarArgs=self->mVarArgs;
                                        }
                                        if(_if_conditional127=self!=((void*)0)&&self->mAlignas!=((void*)0),                                        _if_conditional127) {
                                            __dec_obj32=result_74->mAlignas;
                                            result_74->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value75=sNode_clone(self->mAlignas))));
                                            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value75);
                                            if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { right_value75 = come_decrement_ref_count(right_value75, ((struct sNode*)right_value75)->finalize, ((struct sNode*)right_value75)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[0] = right_value75;
                                            __freed_obj__ = 0;
                                        }
                                        if(_if_conditional128=self!=((void*)0),                                        _if_conditional128) {
                                            result_74->mUnsigned=self->mUnsigned;
                                        }
                                        if(_if_conditional129=self!=((void*)0),                                        _if_conditional129) {
                                            result_74->mShort=self->mShort;
                                        }
                                        if(_if_conditional130=self!=((void*)0),                                        _if_conditional130) {
                                            result_74->mLong=self->mLong;
                                        }
                                        if(_if_conditional131=self!=((void*)0),                                        _if_conditional131) {
                                            result_74->mLongLong=self->mLongLong;
                                        }
                                        if(_if_conditional132=self!=((void*)0),                                        _if_conditional132) {
                                            result_74->mConstant=self->mConstant;
                                        }
                                        if(_if_conditional133=self!=((void*)0),                                        _if_conditional133) {
                                            result_74->mRegister=self->mRegister;
                                        }
                                        if(_if_conditional134=self!=((void*)0),                                        _if_conditional134) {
                                            result_74->mVolatile=self->mVolatile;
                                        }
                                        if(_if_conditional135=self!=((void*)0),                                        _if_conditional135) {
                                            result_74->mStatic=self->mStatic;
                                        }
                                        if(_if_conditional136=self!=((void*)0),                                        _if_conditional136) {
                                            result_74->mExtern=self->mExtern;
                                        }
                                        if(_if_conditional137=self!=((void*)0),                                        _if_conditional137) {
                                            result_74->mRestrict=self->mRestrict;
                                        }
                                        if(_if_conditional138=self!=((void*)0),                                        _if_conditional138) {
                                            result_74->mImmutable=self->mImmutable;
                                        }
                                        if(_if_conditional139=self!=((void*)0),                                        _if_conditional139) {
                                            result_74->mHeap=self->mHeap;
                                        }
                                        if(_if_conditional140=self!=((void*)0),                                        _if_conditional140) {
                                            result_74->mDummyHeap=self->mDummyHeap;
                                        }
                                        if(_if_conditional141=self!=((void*)0),                                        _if_conditional141) {
                                            result_74->mDelegate=self->mDelegate;
                                        }
                                        if(_if_conditional142=self!=((void*)0),                                        _if_conditional142) {
                                            result_74->mShare=self->mShare;
                                        }
                                        if(_if_conditional143=self!=((void*)0),                                        _if_conditional143) {
                                            result_74->mClone=self->mClone;
                                        }
                                        if(_if_conditional144=self!=((void*)0),                                        _if_conditional144) {
                                            result_74->mNoHeap=self->mNoHeap;
                                        }
                                        if(_if_conditional145=self!=((void*)0),                                        _if_conditional145) {
                                            result_74->mNoCallingDestructor=self->mNoCallingDestructor;
                                        }
                                        if(_if_conditional146=self!=((void*)0),                                        _if_conditional146) {
                                            result_74->mRefference=self->mRefference;
                                        }
                                        if(_if_conditional147=self!=((void*)0),                                        _if_conditional147) {
                                            result_74->mException=self->mException;
                                        }
                                        if(_if_conditional148=self!=((void*)0),                                        _if_conditional148) {
                                            result_74->mPointerNum=self->mPointerNum;
                                        }
                                        if(_if_conditional149=self!=((void*)0),                                        _if_conditional149) {
                                            result_74->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                                        }
                                        if(_if_conditional150=self!=((void*)0),                                        _if_conditional150) {
                                            result_74->mNoArrayPointerNum=self->mNoArrayPointerNum;
                                        }
                                        if(_if_conditional151=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                        _if_conditional151) {
                                            __dec_obj33=result_74->mSizeNum;
                                            result_74->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value76=sNode_clone(self->mSizeNum))));
                                            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value76);
                                            if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { right_value76 = come_decrement_ref_count(right_value76, ((struct sNode*)right_value76)->finalize, ((struct sNode*)right_value76)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[0] = right_value76;
                                            __freed_obj__ = 0;
                                        }
                                        if(_if_conditional152=self!=((void*)0),                                        _if_conditional152) {
                                            result_74->mDynamicArrayNum=self->mDynamicArrayNum;
                                        }
                                        if(_if_conditional153=self!=((void*)0),                                        _if_conditional153) {
                                            result_74->mTypeOfExpression=self->mTypeOfExpression;
                                        }
                                        if(_if_conditional154=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                        _if_conditional154) {
                                            __dec_obj34=result_74->mOriginalTypeName;
                                            result_74->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value77=string_clone(self->mOriginalTypeName))));
                                            if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
                                            if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { right_value77 = come_decrement_ref_count(right_value77, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value77;
                                            __freed_obj__ = 0;
                                        }
                                        if(_if_conditional155=self!=((void*)0),                                        _if_conditional155) {
                                            result_74->mOriginalPointerNum=self->mOriginalPointerNum;
                                        }
                                        if(_if_conditional156=self!=((void*)0),                                        _if_conditional156) {
                                            result_74->mFunctionParam=self->mFunctionParam;
                                        }
                                        if(_if_conditional157=self!=((void*)0),                                        _if_conditional157) {
                                            result_74->mAllocaValue=self->mAllocaValue;
                                        }
                                        if(_if_conditional158=self!=((void*)0),                                        _if_conditional158) {
                                            result_74->mGenericsStruct=self->mGenericsStruct;
                                        }
                                        if(_if_conditional159=self!=((void*)0),                                        _if_conditional159) {
                                            result_74->mSolvedGenericsName=self->mSolvedGenericsName;
                                        }
                                        if(_if_conditional160=self!=((void*)0),                                        _if_conditional160) {
                                            result_74->mComeMemCore=self->mComeMemCore;
                                        }
                                        if(_if_conditional161=self!=((void*)0),                                        _if_conditional161) {
                                            result_74->mInline=self->mInline;
                                        }
                                        if(_if_conditional162=self!=((void*)0),                                        _if_conditional162) {
                                            result_74->mNullValue=self->mNullValue;
                                        }
                                        if(_if_conditional163=self!=((void*)0)&&self->mAsmName!=((void*)0),                                        _if_conditional163) {
                                            __dec_obj35=result_74->mAsmName;
                                            result_74->mAsmName=(char*)come_increment_ref_count(((char*)(right_value78=string_clone(self->mAsmName))));
                                            if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value78);
                                            if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value78;
                                            __freed_obj__ = 0;
                                        }
                                        __result62__ = __result_obj__ = result_74;
                                        if(result_74 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_74, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        return __result62__;
                                        if(result_74 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_74, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional105;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                    if(_if_conditional105=self!=((void*)0)&&self->v1!=((void*)0),                                                    _if_conditional105) {
                                                        if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    }
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional112;
struct list$1sTypeph* __result50__;
void* right_value53;
void* right_value54;
struct list$1sTypeph* result_77;
struct list_item$1sTypeph* it_78;
_Bool _while_condtional14;
void* right_value58;
struct list$1sTypeph* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value53, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
memset(&result_77, 0, sizeof(struct list$1sTypeph*));
memset(&it_78, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value58, 0, sizeof(void*));
                                                if(_if_conditional112=self==((void*)0),                                                _if_conditional112) {
                                                    __result50__ = __result_obj__ = ((void*)0);
                                                    return __result50__;
                                                }
                                                result_77=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value54=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value53=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 198, "struct list$1sTypeph"))))))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
                                                if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value53;
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value54);
                                                if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[1] = right_value54;
                                                __freed_obj__ = 0;
                                                it_78=self->head;
                                                while(_while_condtional14=it_78!=((void*)0),                                                _while_condtional14) {
                                                    list$1sTypeph_add(result_77,(struct sType*)come_increment_ref_count(((struct sType*)(right_value58=sType_clone(it_78->item)))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
                                                    if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value58;
                                                    __freed_obj__ = 0;
                                                    it_78=it_78->next;
                                                }
                                                __result53__ = __result_obj__ = result_77;
                                                if(result_77 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_77, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                return __result53__;
                                                if(result_77 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_77, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                    self->head=((void*)0);
                                                    self->tail=((void*)0);
                                                    self->len=0;
                                                    __result51__ = __result_obj__ = self;
                                                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                    return __result51__;
                                                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional113;
void* right_value55;
struct list_item$1sTypeph* litem_79;
struct sType* __dec_obj20;
_Bool _if_conditional114;
void* right_value56;
struct list_item$1sTypeph* litem_80;
struct sType* __dec_obj21;
void* right_value57;
struct list_item$1sTypeph* litem_81;
struct sType* __dec_obj22;
struct list$1sTypeph* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value55, 0, sizeof(void*));
memset(&litem_79, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value56, 0, sizeof(void*));
memset(&litem_80, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value57, 0, sizeof(void*));
memset(&litem_81, 0, sizeof(struct list_item$1sTypeph*));
                                                        if(_if_conditional113=self->len==0,                                                        _if_conditional113) {
                                                            litem_79=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value55=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 212, "struct list_item$1sTypeph"))));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
                                                            if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value55;
                                                            __freed_obj__ = 0;
                                                            litem_79->prev=((void*)0);
                                                            litem_79->next=((void*)0);
                                                            __dec_obj20=litem_79->item;
                                                            litem_79->item=(struct sType*)come_increment_ref_count(item);
                                                            if(__dec_obj20) { come_call_finalizer(sType_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            self->tail=litem_79;
                                                            self->head=litem_79;
                                                        }
                                                        else {
                                                            if(_if_conditional114=self->len==1,                                                            _if_conditional114) {
                                                                litem_80=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value56=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 222, "struct list_item$1sTypeph"))));
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
                                                                if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                __right_value_freed_obj[0] = right_value56;
                                                                __freed_obj__ = 0;
                                                                litem_80->prev=self->head;
                                                                litem_80->next=((void*)0);
                                                                __dec_obj21=litem_80->item;
                                                                litem_80->item=(struct sType*)come_increment_ref_count(item);
                                                                if(__dec_obj21) { come_call_finalizer(sType_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                self->tail=litem_80;
                                                                self->head->next=litem_80;
                                                            }
                                                            else {
                                                                litem_81=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value57=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 232, "struct list_item$1sTypeph"))));
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
                                                                if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                __right_value_freed_obj[0] = right_value57;
                                                                __freed_obj__ = 0;
                                                                litem_81->prev=self->tail;
                                                                litem_81->next=((void*)0);
                                                                __dec_obj22=litem_81->item;
                                                                litem_81->item=(struct sType*)come_increment_ref_count(item);
                                                                if(__dec_obj22) { come_call_finalizer(sType_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                self->tail->next=litem_81;
                                                                self->tail=litem_81;
                                                            }
                                                        }
                                                        self->len++;
                                                        __result52__ = __result_obj__ = self;
                                                        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                        return __result52__;
                                                        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional116;
struct list$1sNodeph* __result54__;
void* right_value60;
void* right_value61;
struct list$1sNodeph* result_82;
struct list_item$1sNodeph* it_83;
_Bool _while_condtional15;
void* right_value62;
struct list$1sNodeph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&result_82, 0, sizeof(struct list$1sNodeph*));
memset(&it_83, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value62, 0, sizeof(void*));
                                                if(_if_conditional116=self==((void*)0),                                                _if_conditional116) {
                                                    __result54__ = __result_obj__ = ((void*)0);
                                                    return __result54__;
                                                }
                                                result_82=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value61=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value60=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 198, "struct list$1sNodeph"))))))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value60);
                                                if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value60;
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value61);
                                                if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[1] = right_value61;
                                                __freed_obj__ = 0;
                                                it_83=self->head;
                                                while(_while_condtional15=it_83!=((void*)0),                                                _while_condtional15) {
                                                    list$1sNodeph_add(result_82,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value62=sNode_clone(it_83->item)))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
                                                    if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { right_value62 = come_decrement_ref_count(right_value62, ((struct sNode*)right_value62)->finalize, ((struct sNode*)right_value62)->_protocol_obj, 1, 0, 0); } 
                                                    __right_value_freed_obj[0] = right_value62;
                                                    __freed_obj__ = 0;
                                                    it_83=it_83->next;
                                                }
                                                __result55__ = __result_obj__ = result_82;
                                                if(result_82 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_82, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                return __result55__;
                                                if(result_82 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_82, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional120;
struct list$1charph* __result56__;
void* right_value65;
void* right_value66;
struct list$1charph* result_84;
struct list_item$1charph* it_85;
_Bool _while_condtional16;
void* right_value70;
struct list$1charph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&result_84, 0, sizeof(struct list$1charph*));
memset(&it_85, 0, sizeof(struct list_item$1charph*));
memset(&right_value70, 0, sizeof(void*));
                                                if(_if_conditional120=self==((void*)0),                                                _if_conditional120) {
                                                    __result56__ = __result_obj__ = ((void*)0);
                                                    return __result56__;
                                                }
                                                result_84=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value66=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value65=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 198, "struct list$1charph"))))))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
                                                if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value65;
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value66);
                                                if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[1] = right_value66;
                                                __freed_obj__ = 0;
                                                it_85=self->head;
                                                while(_while_condtional16=it_85!=((void*)0),                                                _while_condtional16) {
                                                    list$1charph_add(result_84,(char*)come_increment_ref_count(((char*)(right_value70=string_clone(it_85->item)))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70);
                                                    if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value70;
                                                    __freed_obj__ = 0;
                                                    it_85=it_85->next;
                                                }
                                                __result59__ = __result_obj__ = result_84;
                                                if(result_84 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_84, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                return __result59__;
                                                if(result_84 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_84, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                    self->head=((void*)0);
                                                    self->tail=((void*)0);
                                                    self->len=0;
                                                    __result57__ = __result_obj__ = self;
                                                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                    return __result57__;
                                                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional121;
void* right_value67;
struct list_item$1charph* litem_86;
char* __dec_obj26;
_Bool _if_conditional122;
void* right_value68;
struct list_item$1charph* litem_87;
char* __dec_obj27;
void* right_value69;
struct list_item$1charph* litem_88;
char* __dec_obj28;
struct list$1charph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value67, 0, sizeof(void*));
memset(&litem_86, 0, sizeof(struct list_item$1charph*));
memset(&right_value68, 0, sizeof(void*));
memset(&litem_87, 0, sizeof(struct list_item$1charph*));
memset(&right_value69, 0, sizeof(void*));
memset(&litem_88, 0, sizeof(struct list_item$1charph*));
                                                        if(_if_conditional121=self->len==0,                                                        _if_conditional121) {
                                                            litem_86=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value67=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 212, "struct list_item$1charph"))));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
                                                            if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value67;
                                                            __freed_obj__ = 0;
                                                            litem_86->prev=((void*)0);
                                                            litem_86->next=((void*)0);
                                                            __dec_obj26=litem_86->item;
                                                            litem_86->item=(char*)come_increment_ref_count(item);
                                                            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0,0); }
                                                            self->tail=litem_86;
                                                            self->head=litem_86;
                                                        }
                                                        else {
                                                            if(_if_conditional122=self->len==1,                                                            _if_conditional122) {
                                                                litem_87=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value68=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 222, "struct list_item$1charph"))));
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value68);
                                                                if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                __right_value_freed_obj[0] = right_value68;
                                                                __freed_obj__ = 0;
                                                                litem_87->prev=self->head;
                                                                litem_87->next=((void*)0);
                                                                __dec_obj27=litem_87->item;
                                                                litem_87->item=(char*)come_increment_ref_count(item);
                                                                if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0,0); }
                                                                self->tail=litem_87;
                                                                self->head->next=litem_87;
                                                            }
                                                            else {
                                                                litem_88=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value69=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 232, "struct list_item$1charph"))));
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value69);
                                                                if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                __right_value_freed_obj[0] = right_value69;
                                                                __freed_obj__ = 0;
                                                                litem_88->prev=self->tail;
                                                                litem_88->next=((void*)0);
                                                                __dec_obj28=litem_88->item;
                                                                litem_88->item=(char*)come_increment_ref_count(item);
                                                                if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0,0); }
                                                                self->tail->next=litem_88;
                                                                self->tail=litem_88;
                                                            }
                                                        }
                                                        self->len++;
                                                        __result58__ = __result_obj__ = self;
                                                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                                                        return __result58__;
                                                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional124;
struct tuple1$1sTypeph* __result60__;
void* right_value72;
struct tuple1$1sTypeph* result_89;
_Bool _if_conditional125;
void* right_value73;
struct sType* __dec_obj30;
struct tuple1$1sTypeph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value72, 0, sizeof(void*));
memset(&result_89, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value73, 0, sizeof(void*));
                                                if(_if_conditional124=self==(void*)0,                                                _if_conditional124) {
                                                    __result60__ = __result_obj__ = (void*)0;
                                                    return __result60__;
                                                }
                                                result_89=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value72=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value72);
                                                if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value72;
                                                __freed_obj__ = 0;
                                                if(_if_conditional125=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional125) {
                                                    __dec_obj30=result_89->v1;
                                                    result_89->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value73=sType_clone(self->v1))));
                                                    if(__dec_obj30) { come_call_finalizer(sType_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value73);
                                                    if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value73;
                                                    __freed_obj__ = 0;
                                                }
                                                __result61__ = __result_obj__ = result_89;
                                                if(result_89 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_89, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                return __result61__;
                                                if(result_89 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_89, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional170;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional170=self!=((void*)0)&&self->key_list!=((void*)0),                        _if_conditional170) {
                            if(self->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

_Bool sSwitchNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result68__ = (_Bool)1;
    return __result68__;
}

char* sSwitchNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value85;
char* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value85, 0, sizeof(void*));
    __result69__ = __result_obj__ = ((char*)(right_value85=__builtin_string("sSwitchNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value85);
    if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { right_value85 = come_decrement_ref_count(right_value85, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value85;
    __freed_obj__ = 0;
    return __result69__;
}

_Bool sSwitchNode_compile(struct sSwitchNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sBlock* block_90;
struct sNode* expression_node_91;
_Bool _if_conditional177;
_Bool __result70__;
void* right_value86;
struct CVALUE* conditional_value_92;
_Bool __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&block_90, 0, sizeof(struct sBlock*));
memset(&expression_node_91, 0, sizeof(struct sNode*));
memset(&right_value86, 0, sizeof(void*));
memset(&conditional_value_92, 0, sizeof(struct CVALUE*));
    block_90=self->mBlock;
    expression_node_91=self->mExpressionNode;
    if(_if_conditional177=!node_compile(expression_node_91,info),    _if_conditional177) {
        __result70__ = (_Bool)0;
        return __result70__;
    }
    conditional_value_92=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value86=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value86);
    if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value86;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    add_come_code(info,"switch (%s) {\n",conditional_value_92->c_value);
    transpile_block(block_90,((void*)0),((void*)0),info,(_Bool)0,(_Bool)1);
    add_come_code(info,"}\n");
    transpiler_clear_last_code(info);
    __result71__ = (_Bool)1;
    if(conditional_value_92 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,conditional_value_92, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result71__;
    if(conditional_value_92 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,conditional_value_92, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional178;
_Bool _if_conditional179;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional178=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional178) {
            if(self->c_value && !__freed_obj__) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional179=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional179) {
            if(self->type && !__freed_obj__) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}

int sSwitchNode_sline(struct sSwitchNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result72__ = self->sline;
    return __result72__;
}

char* sSwitchNode_sname(struct sSwitchNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value87;
char* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value87, 0, sizeof(void*));
    __result73__ = __result_obj__ = ((char*)(right_value87=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value87);
    if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value87;
    __freed_obj__ = 0;
    return __result73__;
}

struct sCaseNode* sCaseNode_initialize(struct sCaseNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value88;
char* __dec_obj41;
void* right_value89;
struct sNode* __dec_obj42;
struct sCaseNode* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value88, 0, sizeof(void*));
memset(&right_value89, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj41=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value88=__builtin_string(info->sname))));
    if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value88);
    if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value88;
    __freed_obj__ = 0;
    __dec_obj42=self->mNode;
    self->mNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value89=sNode_clone(node))));
    if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, ((struct sNode*)__dec_obj42)->finalize, ((struct sNode*)__dec_obj42)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value89);
    if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { right_value89 = come_decrement_ref_count(right_value89, ((struct sNode*)right_value89)->finalize, ((struct sNode*)right_value89)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value89;
    __freed_obj__ = 0;
    __result74__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sCaseNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    return __result74__;
    if(self && !__freed_obj__) { come_call_finalizer(sCaseNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

_Bool sCaseNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result75__ = (_Bool)0;
    return __result75__;
}

char* sCaseNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value90;
char* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value90, 0, sizeof(void*));
    __result76__ = __result_obj__ = ((char*)(right_value90=__builtin_string("sCaseNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
    if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value90;
    __freed_obj__ = 0;
    return __result76__;
}

_Bool sCaseNode_compile(struct sCaseNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* node_93;
_Bool _if_conditional182;
_Bool __result77__;
void* right_value91;
struct CVALUE* label_value_94;
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&node_93, 0, sizeof(struct sNode*));
memset(&right_value91, 0, sizeof(void*));
memset(&label_value_94, 0, sizeof(struct CVALUE*));
    node_93=self->mNode;
    if(_if_conditional182=!node_compile(node_93,info),    _if_conditional182) {
        __result77__ = (_Bool)0;
        return __result77__;
    }
    label_value_94=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value91=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value91);
    if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value91;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    add_come_code(info,"case %s:\n",label_value_94->c_value);
    transpiler_clear_last_code(info);
    __result78__ = (_Bool)1;
    if(label_value_94 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,label_value_94, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result78__;
    if(label_value_94 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,label_value_94, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sCaseNode_sline(struct sCaseNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result79__ = self->sline;
    return __result79__;
}

char* sCaseNode_sname(struct sCaseNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value92;
char* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value92, 0, sizeof(void*));
    __result80__ = __result_obj__ = ((char*)(right_value92=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value92);
    if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value92;
    __freed_obj__ = 0;
    return __result80__;
}

struct sDefaultNode* sDefaultNode_initialize(struct sDefaultNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value93;
char* __dec_obj43;
struct sDefaultNode* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value93, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj43=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value93=__builtin_string(info->sname))));
    if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
    if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value93;
    __freed_obj__ = 0;
    __result81__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sDefaultNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result81__;
    if(self && !__freed_obj__) { come_call_finalizer(sDefaultNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sDefaultNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result82__ = (_Bool)0;
    return __result82__;
}

char* sDefaultNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value94;
char* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value94, 0, sizeof(void*));
    __result83__ = __result_obj__ = ((char*)(right_value94=__builtin_string("sDefaultNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94);
    if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { right_value94 = come_decrement_ref_count(right_value94, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value94;
    __freed_obj__ = 0;
    return __result83__;
}

_Bool sDefaultNode_compile(struct sDefaultNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    add_come_code(info,"default:\n");
    transpiler_clear_last_code(info);
    __result84__ = (_Bool)1;
    return __result84__;
}

int sDefaultNode_sline(struct sDefaultNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result85__ = self->sline;
    return __result85__;
}

char* sDefaultNode_sname(struct sDefaultNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value95;
char* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value95, 0, sizeof(void*));
    __result86__ = __result_obj__ = ((char*)(right_value95=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
    if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { right_value95 = come_decrement_ref_count(right_value95, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value95;
    __freed_obj__ = 0;
    return __result86__;
}

struct sBreakNode* sBreakNode_initialize(struct sBreakNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value96;
char* __dec_obj44;
struct sBreakNode* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value96, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj44=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value96=__builtin_string(info->sname))));
    if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96);
    if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value96;
    __freed_obj__ = 0;
    __result87__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sBreakNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result87__;
    if(self && !__freed_obj__) { come_call_finalizer(sBreakNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sBreakNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result88__ = (_Bool)0;
    return __result88__;
}

char* sBreakNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value97;
char* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value97, 0, sizeof(void*));
    __result89__ = __result_obj__ = ((char*)(right_value97=__builtin_string("sBreakNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97);
    if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { right_value97 = come_decrement_ref_count(right_value97, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value97;
    __freed_obj__ = 0;
    return __result89__;
}

_Bool sBreakNode_compile(struct sBreakNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    free_objects_on_break(info);
    add_come_code(info,"break;\n");
    transpiler_clear_last_code(info);
    __result90__ = (_Bool)1;
    return __result90__;
}

int sBreakNode_sline(struct sBreakNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result91__ = self->sline;
    return __result91__;
}

char* sBreakNode_sname(struct sBreakNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value98;
char* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value98, 0, sizeof(void*));
    __result92__ = __result_obj__ = ((char*)(right_value98=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value98);
    if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { right_value98 = come_decrement_ref_count(right_value98, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value98;
    __freed_obj__ = 0;
    return __result92__;
}

struct sContinueNode* sContinueNode_initialize(struct sContinueNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value99;
char* __dec_obj45;
struct sContinueNode* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value99, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj45=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value99=__builtin_string(info->sname))));
    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value99);
    if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { right_value99 = come_decrement_ref_count(right_value99, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value99;
    __freed_obj__ = 0;
    __result93__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sContinueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result93__;
    if(self && !__freed_obj__) { come_call_finalizer(sContinueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sContinueNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result94__ = (_Bool)0;
    return __result94__;
}

char* sContinueNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value100;
char* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value100, 0, sizeof(void*));
    __result95__ = __result_obj__ = ((char*)(right_value100=__builtin_string("sContinueNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value100;
    __freed_obj__ = 0;
    return __result95__;
}

_Bool sContinueNode_compile(struct sContinueNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    free_objects_on_break(info);
    add_come_code(info,"continue;\n");
    transpiler_clear_last_code(info);
    __result96__ = (_Bool)1;
    return __result96__;
}

int sContinueNode_sline(struct sContinueNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result97__ = self->sline;
    return __result97__;
}

char* sContinueNode_sname(struct sContinueNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value101;
char* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value101, 0, sizeof(void*));
    __result98__ = __result_obj__ = ((char*)(right_value101=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value101);
    if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { right_value101 = come_decrement_ref_count(right_value101, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value101;
    __freed_obj__ = 0;
    return __result98__;
}

struct sNode* string_node_v12(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional186;
void* right_value102;
struct sNode* node_95;
void* right_value103;
void* right_value104;
struct sNode* _inf_value1;
struct sCaseNode* _inf_obj_value1;
void* right_value108;
struct sNode* __result101__;
_Bool _if_conditional193;
void* right_value109;
void* right_value110;
struct sNode* _inf_value2;
struct sDefaultNode* _inf_obj_value2;
void* right_value113;
struct sNode* __result104__;
_Bool _if_conditional198;
void* right_value114;
void* right_value115;
struct sNode* _inf_value3;
struct sBreakNode* _inf_obj_value3;
void* right_value118;
struct sNode* __result107__;
_Bool _if_conditional203;
void* right_value119;
void* right_value120;
struct sNode* _inf_value4;
struct sContinueNode* _inf_obj_value4;
void* right_value123;
struct sNode* __result110__;
_Bool _if_conditional208;
void* right_value124;
struct sNode* expression_node_100;
void* right_value125;
struct sBlock* block_101;
void* right_value126;
void* right_value127;
struct sNode* _inf_value5;
struct sSwitchNode* _inf_obj_value5;
void* right_value132;
struct sNode* __result113__;
void* right_value133;
struct sNode* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value102, 0, sizeof(void*));
memset(&node_95, 0, sizeof(struct sNode*));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&right_value115, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
memset(&right_value123, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
memset(&expression_node_100, 0, sizeof(struct sNode*));
memset(&right_value125, 0, sizeof(void*));
memset(&block_101, 0, sizeof(struct sBlock*));
memset(&right_value126, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
    if(_if_conditional186=charp_operator_equals(buf,"case"),    _if_conditional186) {
        node_95=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value102=expression_v13(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value102);
        if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { right_value102 = come_decrement_ref_count(right_value102, ((struct sNode*)right_value102)->finalize, ((struct sNode*)right_value102)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[0] = right_value102;
        __freed_obj__ = 0;
        expected_next_character(58,info);
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12switch.c", 273, "struct sNode");
        _inf_obj_value1=come_increment_ref_count(((struct sCaseNode*)(right_value104=sCaseNode_initialize((struct sCaseNode*)come_increment_ref_count(((struct sCaseNode*)(right_value103=(struct sCaseNode*)come_calloc(1, sizeof(struct sCaseNode)*(1), "12switch.c", 273, "struct sCaseNode")))),(struct sNode*)come_increment_ref_count(node_95),info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sCaseNode_finalize;
        _inf_value1->clone=(void*)sCaseNode_clone;
        _inf_value1->compile=(void*)sCaseNode_compile;
        _inf_value1->sline=(void*)sCaseNode_sline;
        _inf_value1->sname=(void*)sCaseNode_sname;
        _inf_value1->terminated=(void*)sCaseNode_terminated;
        _inf_value1->kind=(void*)sCaseNode_kind;
        __result101__ = __result_obj__ = ((struct sNode*)(right_value108=_inf_value1));
        if(node_95 && !__freed_obj__) { node_95 = come_decrement_ref_count(node_95, ((struct sNode*)node_95)->finalize, ((struct sNode*)node_95)->_protocol_obj, 0, 0, 0); } 
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value103);
        if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCaseNode_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value103;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value104);
        if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCaseNode_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value104;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value108);
        if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { right_value108 = come_decrement_ref_count(right_value108, ((struct sNode*)right_value108)->finalize, ((struct sNode*)right_value108)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[2] = right_value108;
        __freed_obj__ = 0;
        return __result101__;
        if(node_95 && !__freed_obj__) { node_95 = come_decrement_ref_count(node_95, ((struct sNode*)node_95)->finalize, ((struct sNode*)node_95)->_protocol_obj, 0, 0, 0); } 
    }
    else {
        if(_if_conditional193=charp_operator_equals(buf,"default"),        _if_conditional193) {
            expected_next_character(58,info);
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12switch.c", 278, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sDefaultNode*)(right_value110=sDefaultNode_initialize((struct sDefaultNode*)come_increment_ref_count(((struct sDefaultNode*)(right_value109=(struct sDefaultNode*)come_calloc(1, sizeof(struct sDefaultNode)*(1), "12switch.c", 278, "struct sDefaultNode")))),info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sDefaultNode_finalize;
            _inf_value2->clone=(void*)sDefaultNode_clone;
            _inf_value2->compile=(void*)sDefaultNode_compile;
            _inf_value2->sline=(void*)sDefaultNode_sline;
            _inf_value2->sname=(void*)sDefaultNode_sname;
            _inf_value2->terminated=(void*)sDefaultNode_terminated;
            _inf_value2->kind=(void*)sDefaultNode_kind;
            __result104__ = __result_obj__ = ((struct sNode*)(right_value113=_inf_value2));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
            if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDefaultNode_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value109;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value110);
            if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDefaultNode_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value110;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value113);
            if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { right_value113 = come_decrement_ref_count(right_value113, ((struct sNode*)right_value113)->finalize, ((struct sNode*)right_value113)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value113;
            __freed_obj__ = 0;
            return __result104__;
        }
        else {
            if(_if_conditional198=charp_operator_equals(buf,"break"),            _if_conditional198) {
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12switch.c", 281, "struct sNode");
                _inf_obj_value3=come_increment_ref_count(((struct sBreakNode*)(right_value115=sBreakNode_initialize((struct sBreakNode*)come_increment_ref_count(((struct sBreakNode*)(right_value114=(struct sBreakNode*)come_calloc(1, sizeof(struct sBreakNode)*(1), "12switch.c", 281, "struct sBreakNode")))),info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sBreakNode_finalize;
                _inf_value3->clone=(void*)sBreakNode_clone;
                _inf_value3->compile=(void*)sBreakNode_compile;
                _inf_value3->sline=(void*)sBreakNode_sline;
                _inf_value3->sname=(void*)sBreakNode_sname;
                _inf_value3->terminated=(void*)sBreakNode_terminated;
                _inf_value3->kind=(void*)sBreakNode_kind;
                __result107__ = __result_obj__ = ((struct sNode*)(right_value118=_inf_value3));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value114);
                if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBreakNode_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value114;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value115);
                if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBreakNode_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value115;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value118);
                if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { right_value118 = come_decrement_ref_count(right_value118, ((struct sNode*)right_value118)->finalize, ((struct sNode*)right_value118)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value118;
                __freed_obj__ = 0;
                return __result107__;
            }
            else {
                if(_if_conditional203=charp_operator_equals(buf,"continue"),                _if_conditional203) {
                    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12switch.c", 284, "struct sNode");
                    _inf_obj_value4=come_increment_ref_count(((struct sContinueNode*)(right_value120=sContinueNode_initialize((struct sContinueNode*)come_increment_ref_count(((struct sContinueNode*)(right_value119=(struct sContinueNode*)come_calloc(1, sizeof(struct sContinueNode)*(1), "12switch.c", 284, "struct sContinueNode")))),info))));
                    _inf_value4->_protocol_obj=_inf_obj_value4;
                    _inf_value4->finalize=(void*)sContinueNode_finalize;
                    _inf_value4->clone=(void*)sContinueNode_clone;
                    _inf_value4->compile=(void*)sContinueNode_compile;
                    _inf_value4->sline=(void*)sContinueNode_sline;
                    _inf_value4->sname=(void*)sContinueNode_sname;
                    _inf_value4->terminated=(void*)sContinueNode_terminated;
                    _inf_value4->kind=(void*)sContinueNode_kind;
                    __result110__ = __result_obj__ = ((struct sNode*)(right_value123=_inf_value4));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value119);
                    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sContinueNode_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value119;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value120);
                    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sContinueNode_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value120;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value123);
                    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { right_value123 = come_decrement_ref_count(right_value123, ((struct sNode*)right_value123)->finalize, ((struct sNode*)right_value123)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[2] = right_value123;
                    __freed_obj__ = 0;
                    return __result110__;
                }
                else {
                    if(_if_conditional208=charp_operator_equals(buf,"switch"),                    _if_conditional208) {
                        expected_next_character(40,info);
                        expression_node_100=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value124=expression_v13(info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value124);
                        if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { right_value124 = come_decrement_ref_count(right_value124, ((struct sNode*)right_value124)->finalize, ((struct sNode*)right_value124)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value124;
                        __freed_obj__ = 0;
                        expected_next_character(41,info);
                        block_101=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value125=parse_block(info,(_Bool)0))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
                        if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value125;
                        __freed_obj__ = 0;
                        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12switch.c", 295, "struct sNode");
                        _inf_obj_value5=come_increment_ref_count(((struct sSwitchNode*)(right_value127=sSwitchNode_initialize((struct sSwitchNode*)come_increment_ref_count(((struct sSwitchNode*)(right_value126=(struct sSwitchNode*)come_calloc(1, sizeof(struct sSwitchNode)*(1), "12switch.c", 295, "struct sSwitchNode")))),(struct sNode*)come_increment_ref_count(expression_node_100),block_101,info))));
                        _inf_value5->_protocol_obj=_inf_obj_value5;
                        _inf_value5->finalize=(void*)sSwitchNode_finalize;
                        _inf_value5->clone=(void*)sSwitchNode_clone;
                        _inf_value5->compile=(void*)sSwitchNode_compile;
                        _inf_value5->sline=(void*)sSwitchNode_sline;
                        _inf_value5->sname=(void*)sSwitchNode_sname;
                        _inf_value5->terminated=(void*)sSwitchNode_terminated;
                        _inf_value5->kind=(void*)sSwitchNode_kind;
                        __result113__ = __result_obj__ = ((struct sNode*)(right_value132=_inf_value5));
                        if(expression_node_100 && !__freed_obj__) { expression_node_100 = come_decrement_ref_count(expression_node_100, ((struct sNode*)expression_node_100)->finalize, ((struct sNode*)expression_node_100)->_protocol_obj, 0, 0, 0); } 
                        if(block_101 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,block_101, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
                        if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSwitchNode_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value126;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value127);
                        if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSwitchNode_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value127;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value132);
                        if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { right_value132 = come_decrement_ref_count(right_value132, ((struct sNode*)right_value132)->finalize, ((struct sNode*)right_value132)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[2] = right_value132;
                        __freed_obj__ = 0;
                        return __result113__;
                        if(expression_node_100 && !__freed_obj__) { expression_node_100 = come_decrement_ref_count(expression_node_100, ((struct sNode*)expression_node_100)->finalize, ((struct sNode*)expression_node_100)->_protocol_obj, 0, 0, 0); } 
                        if(block_101 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,block_101, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                }
            }
        }
    }
    __result114__ = __result_obj__ = ((struct sNode*)(right_value133=string_node_v11(buf,head,head_sline,info)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133);
    if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { right_value133 = come_decrement_ref_count(right_value133, ((struct sNode*)right_value133)->finalize, ((struct sNode*)right_value133)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value133;
    __freed_obj__ = 0;
    return __result114__;
}

static void sCaseNode_finalize(struct sCaseNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional187;
_Bool _if_conditional188;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional187=self!=((void*)0)&&self->mNode!=((void*)0),            _if_conditional187) {
                if(self->mNode && !__freed_obj__) { self->mNode = come_decrement_ref_count(self->mNode, ((struct sNode*)self->mNode)->finalize, ((struct sNode*)self->mNode)->_protocol_obj, 0, 0, 0); } 
            }
            if(_if_conditional188=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional188) {
                if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static struct sCaseNode* sCaseNode_clone(struct sCaseNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional189;
struct sCaseNode* __result99__;
void* right_value105;
struct sCaseNode* result_96;
_Bool _if_conditional190;
void* right_value106;
struct sNode* __dec_obj46;
_Bool _if_conditional191;
_Bool _if_conditional192;
void* right_value107;
char* __dec_obj47;
struct sCaseNode* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value105, 0, sizeof(void*));
memset(&result_96, 0, sizeof(struct sCaseNode*));
memset(&right_value106, 0, sizeof(void*));
memset(&right_value107, 0, sizeof(void*));
            if(_if_conditional189=self==(void*)0,            _if_conditional189) {
                __result99__ = __result_obj__ = (void*)0;
                return __result99__;
            }
            result_96=(struct sCaseNode*)come_increment_ref_count(((struct sCaseNode*)(right_value105=(struct sCaseNode*)come_calloc(1, sizeof(struct sCaseNode)*(1), "sCaseNode_clone", 3, "struct sCaseNode"))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
            if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCaseNode_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value105;
            __freed_obj__ = 0;
            if(_if_conditional190=self!=((void*)0)&&self->mNode!=((void*)0),            _if_conditional190) {
                __dec_obj46=result_96->mNode;
                result_96->mNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value106=sNode_clone(self->mNode))));
                if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
                if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, ((struct sNode*)right_value106)->finalize, ((struct sNode*)right_value106)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value106;
                __freed_obj__ = 0;
            }
            if(_if_conditional191=self!=((void*)0),            _if_conditional191) {
                result_96->sline=self->sline;
            }
            if(_if_conditional192=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional192) {
                __dec_obj47=result_96->sname;
                result_96->sname=(char*)come_increment_ref_count(((char*)(right_value107=string_clone(self->sname))));
                if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
                if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { right_value107 = come_decrement_ref_count(right_value107, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value107;
                __freed_obj__ = 0;
            }
            __result100__ = __result_obj__ = result_96;
            if(result_96 && !__freed_obj__) { come_call_finalizer(sCaseNode_finalize,result_96, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result100__;
            if(result_96 && !__freed_obj__) { come_call_finalizer(sCaseNode_finalize,result_96, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sDefaultNode_finalize(struct sDefaultNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional194;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional194=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional194) {
                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static struct sDefaultNode* sDefaultNode_clone(struct sDefaultNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional195;
struct sDefaultNode* __result102__;
void* right_value111;
struct sDefaultNode* result_97;
_Bool _if_conditional196;
_Bool _if_conditional197;
void* right_value112;
char* __dec_obj48;
struct sDefaultNode* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value111, 0, sizeof(void*));
memset(&result_97, 0, sizeof(struct sDefaultNode*));
memset(&right_value112, 0, sizeof(void*));
                if(_if_conditional195=self==(void*)0,                _if_conditional195) {
                    __result102__ = __result_obj__ = (void*)0;
                    return __result102__;
                }
                result_97=(struct sDefaultNode*)come_increment_ref_count(((struct sDefaultNode*)(right_value111=(struct sDefaultNode*)come_calloc(1, sizeof(struct sDefaultNode)*(1), "sDefaultNode_clone", 3, "struct sDefaultNode"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value111);
                if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDefaultNode_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value111;
                __freed_obj__ = 0;
                if(_if_conditional196=self!=((void*)0),                _if_conditional196) {
                    result_97->sline=self->sline;
                }
                if(_if_conditional197=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional197) {
                    __dec_obj48=result_97->sname;
                    result_97->sname=(char*)come_increment_ref_count(((char*)(right_value112=string_clone(self->sname))));
                    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value112);
                    if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { right_value112 = come_decrement_ref_count(right_value112, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value112;
                    __freed_obj__ = 0;
                }
                __result103__ = __result_obj__ = result_97;
                if(result_97 && !__freed_obj__) { come_call_finalizer(sDefaultNode_finalize,result_97, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result103__;
                if(result_97 && !__freed_obj__) { come_call_finalizer(sDefaultNode_finalize,result_97, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sBreakNode_finalize(struct sBreakNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional199;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional199=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional199) {
                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct sBreakNode* sBreakNode_clone(struct sBreakNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional200;
struct sBreakNode* __result105__;
void* right_value116;
struct sBreakNode* result_98;
_Bool _if_conditional201;
_Bool _if_conditional202;
void* right_value117;
char* __dec_obj49;
struct sBreakNode* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value116, 0, sizeof(void*));
memset(&result_98, 0, sizeof(struct sBreakNode*));
memset(&right_value117, 0, sizeof(void*));
                    if(_if_conditional200=self==(void*)0,                    _if_conditional200) {
                        __result105__ = __result_obj__ = (void*)0;
                        return __result105__;
                    }
                    result_98=(struct sBreakNode*)come_increment_ref_count(((struct sBreakNode*)(right_value116=(struct sBreakNode*)come_calloc(1, sizeof(struct sBreakNode)*(1), "sBreakNode_clone", 3, "struct sBreakNode"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value116);
                    if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBreakNode_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value116;
                    __freed_obj__ = 0;
                    if(_if_conditional201=self!=((void*)0),                    _if_conditional201) {
                        result_98->sline=self->sline;
                    }
                    if(_if_conditional202=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional202) {
                        __dec_obj49=result_98->sname;
                        result_98->sname=(char*)come_increment_ref_count(((char*)(right_value117=string_clone(self->sname))));
                        if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
                        if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value117;
                        __freed_obj__ = 0;
                    }
                    __result106__ = __result_obj__ = result_98;
                    if(result_98 && !__freed_obj__) { come_call_finalizer(sBreakNode_finalize,result_98, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result106__;
                    if(result_98 && !__freed_obj__) { come_call_finalizer(sBreakNode_finalize,result_98, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sContinueNode_finalize(struct sContinueNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional204;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional204=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional204) {
                            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

static struct sContinueNode* sContinueNode_clone(struct sContinueNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional205;
struct sContinueNode* __result108__;
void* right_value121;
struct sContinueNode* result_99;
_Bool _if_conditional206;
_Bool _if_conditional207;
void* right_value122;
char* __dec_obj50;
struct sContinueNode* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value121, 0, sizeof(void*));
memset(&result_99, 0, sizeof(struct sContinueNode*));
memset(&right_value122, 0, sizeof(void*));
                        if(_if_conditional205=self==(void*)0,                        _if_conditional205) {
                            __result108__ = __result_obj__ = (void*)0;
                            return __result108__;
                        }
                        result_99=(struct sContinueNode*)come_increment_ref_count(((struct sContinueNode*)(right_value121=(struct sContinueNode*)come_calloc(1, sizeof(struct sContinueNode)*(1), "sContinueNode_clone", 3, "struct sContinueNode"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value121);
                        if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sContinueNode_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value121;
                        __freed_obj__ = 0;
                        if(_if_conditional206=self!=((void*)0),                        _if_conditional206) {
                            result_99->sline=self->sline;
                        }
                        if(_if_conditional207=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional207) {
                            __dec_obj50=result_99->sname;
                            result_99->sname=(char*)come_increment_ref_count(((char*)(right_value122=string_clone(self->sname))));
                            if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
                            if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { right_value122 = come_decrement_ref_count(right_value122, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value122;
                            __freed_obj__ = 0;
                        }
                        __result109__ = __result_obj__ = result_99;
                        if(result_99 && !__freed_obj__) { come_call_finalizer(sContinueNode_finalize,result_99, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result109__;
                        if(result_99 && !__freed_obj__) { come_call_finalizer(sContinueNode_finalize,result_99, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sSwitchNode_finalize(struct sSwitchNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional209;
_Bool _if_conditional210;
_Bool _if_conditional211;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional209=self!=((void*)0)&&self->mExpressionNode!=((void*)0),                            _if_conditional209) {
                                if(self->mExpressionNode && !__freed_obj__) { self->mExpressionNode = come_decrement_ref_count(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0, 0); } 
                            }
                            if(_if_conditional210=self!=((void*)0)&&self->mBlock!=((void*)0),                            _if_conditional210) {
                                if(self->mBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(_if_conditional211=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional211) {
                                if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                            }
}

static struct sSwitchNode* sSwitchNode_clone(struct sSwitchNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional212;
struct sSwitchNode* __result111__;
void* right_value128;
struct sSwitchNode* result_102;
_Bool _if_conditional213;
void* right_value129;
struct sNode* __dec_obj51;
_Bool _if_conditional214;
void* right_value130;
struct sBlock* __dec_obj52;
_Bool _if_conditional215;
_Bool _if_conditional216;
void* right_value131;
char* __dec_obj53;
struct sSwitchNode* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value128, 0, sizeof(void*));
memset(&result_102, 0, sizeof(struct sSwitchNode*));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
                            if(_if_conditional212=self==(void*)0,                            _if_conditional212) {
                                __result111__ = __result_obj__ = (void*)0;
                                return __result111__;
                            }
                            result_102=(struct sSwitchNode*)come_increment_ref_count(((struct sSwitchNode*)(right_value128=(struct sSwitchNode*)come_calloc(1, sizeof(struct sSwitchNode)*(1), "sSwitchNode_clone", 3, "struct sSwitchNode"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value128);
                            if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSwitchNode_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value128;
                            __freed_obj__ = 0;
                            if(_if_conditional213=self!=((void*)0)&&self->mExpressionNode!=((void*)0),                            _if_conditional213) {
                                __dec_obj51=result_102->mExpressionNode;
                                result_102->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value129=sNode_clone(self->mExpressionNode))));
                                if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
                                if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { right_value129 = come_decrement_ref_count(right_value129, ((struct sNode*)right_value129)->finalize, ((struct sNode*)right_value129)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value129;
                                __freed_obj__ = 0;
                            }
                            if(_if_conditional214=self!=((void*)0)&&self->mBlock!=((void*)0),                            _if_conditional214) {
                                __dec_obj52=result_102->mBlock;
                                result_102->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value130=sBlock_clone(self->mBlock))));
                                if(__dec_obj52) { come_call_finalizer(sBlock_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value130);
                                if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value130;
                                __freed_obj__ = 0;
                            }
                            if(_if_conditional215=self!=((void*)0),                            _if_conditional215) {
                                result_102->sline=self->sline;
                            }
                            if(_if_conditional216=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional216) {
                                __dec_obj53=result_102->sname;
                                result_102->sname=(char*)come_increment_ref_count(((char*)(right_value131=string_clone(self->sname))));
                                if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value131);
                                if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { right_value131 = come_decrement_ref_count(right_value131, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value131;
                                __freed_obj__ = 0;
                            }
                            __result112__ = __result_obj__ = result_102;
                            if(result_102 && !__freed_obj__) { come_call_finalizer(sSwitchNode_finalize,result_102, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result112__;
                            if(result_102 && !__freed_obj__) { come_call_finalizer(sSwitchNode_finalize,result_102, (void*)0, (void*)0, 0, 0, 0, 0); }
}

