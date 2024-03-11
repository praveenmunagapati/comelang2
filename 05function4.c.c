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
struct tuple4$4voidpvoidpvoidpbool
{
    void* v1;
    void* v2;
    void* v3;
    _Bool v4;
};
struct tuple3$3voidpvoidpbool
{
    void* v1;
    void* v2;
    _Bool v3;
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

struct sNode* parse_normal_block(struct sInfo* info);

char* parse_attribute(struct sInfo* info);

void come_init_v5();

void come_final_v5();

struct sNode* parse_global_variable(struct sInfo* info);

struct sNode* get_number(_Bool minus, struct sInfo* info);

struct sNode* get_oct_number(struct sInfo* info);

struct sNode* get_hex_number(_Bool minus, struct sInfo* info);

struct sNode* create_int_node(int value, struct sInfo* info);

struct sNode* post_position_operator3_v5(struct sNode* node, struct sInfo* info);

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

char* skip_block(struct sInfo* info);

_Bool is_type_name(char* buf, struct sInfo* info);

int expected_next_character(char c, struct sInfo* info);

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);

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

void skip_paren(struct sInfo* info);

void parse_sharp_v5(struct sInfo* info);

_Bool parsecmp(char* str, struct sInfo* info);

char* parse_word(struct sInfo* info);

void skip_spaces_and_lf(struct sInfo* info);

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info);

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct tuple4$4voidpvoidpvoidpbool* tuple4$4voidpvoidpvoidpbool_initialize(struct tuple4$4voidpvoidpvoidpbool* self, void* v1, void* v2, void* v3, _Bool v4);
static void tuple4$4voidpvoidpvoidpboolp_finalize(struct tuple4$4voidpvoidpvoidpbool* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* sType_clone(struct sType* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
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
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4);
static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, struct sInfo* info);

static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
void skip_pointer_attribute(struct sInfo* info);

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3);
static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
static _Bool list$1charph_contained(struct list$1charph* self, char* item);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static int list$1charph_length(struct list$1charph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct tuple3$3voidpvoidpbool* tuple3$3voidpvoidpbool_initialize(struct tuple3$3voidpvoidpbool* self, void* v1, void* v2, _Bool v3);
static void tuple3$3voidpvoidpboolp_finalize(struct tuple3$3voidpvoidpbool* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
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
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1948, "struct smart_pointer$1char"))));
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
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1958, "struct smart_pointer$1char"))));
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
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 1968, "struct smart_pointer$1short"))));
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
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 1978, "struct smart_pointer$1int"))));
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
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 1988, "struct smart_pointer$1long"))));
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
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value10;
char* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
    __result7__ = __result_obj__ = ((char*)(right_value10=xsprintf(msg,self)));
    right_value10 = come_decrement_ref_count2(right_value10, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result7__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value11;
char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
right_value11 = (void*)0;
    __result8__ = __result_obj__ = ((char*)(right_value11=xsprintf(msg,self)));
    right_value11 = come_decrement_ref_count2(right_value11, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result8__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__;
void* right_value12;
char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
right_value12 = (void*)0;
    __result9__ = __result_obj__ = ((char*)(right_value12=xsprintf(msg,self)));
    right_value12 = come_decrement_ref_count2(right_value12, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result9__;
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




void skip_paren(struct sInfo* info){
void* __result_obj__;
int nest_5;
_Bool _while_condtional1;
_Bool _if_conditional5;
_Bool _if_conditional6;
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&nest_5, 0, sizeof(int));
    nest_5=0;
    while(_while_condtional1=(_Bool)1,    _while_condtional1) {
        if(_if_conditional5=*info->p==40,        _if_conditional5) {
            info->p++;
            skip_spaces_and_lf(info);
            nest_5++;
        }
        else {
            if(_if_conditional6=*info->p==41,            _if_conditional6) {
                info->p++;
                skip_spaces_and_lf(info);
                nest_5--;
                if(_if_conditional7=nest_5==0,                _if_conditional7) {
                    break;
                }
            }
            else {
                info->p++;
            }
        }
    }
}

void parse_sharp_v5(struct sInfo* info){
void* __result_obj__;
_Bool _while_condtional2;
_Bool _while_condtional3;
_Bool _while_condtional4;
_Bool _if_conditional8;
_Bool _while_condtional5;
_Bool _if_conditional9;
_Bool _if_conditional10;
int line_6;
void* right_value13;
void* right_value14;
struct buffer* fname_7;
_Bool _while_condtional6;
_Bool _if_conditional11;
_Bool _while_condtional7;
_Bool _while_condtional8;
void* right_value15;
char* __dec_obj6;
_Bool _if_conditional12;
_Bool _while_condtional9;
_Bool _while_condtional10;
_Bool _while_condtional11;
_Bool _while_condtional12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&line_6, 0, sizeof(int));
right_value13 = (void*)0;
right_value14 = (void*)0;
memset(&fname_7, 0, sizeof(struct buffer*));
right_value15 = (void*)0;
    while(_while_condtional2=strmemcmp(info->p,"__attribute__"),    _while_condtional2) {
        info->p+=strlen("__attribute__");
        skip_spaces_and_lf(info);
        skip_paren(info);
    }
    while(_while_condtional3=strmemcmp(info->p,"__extension__"),    _while_condtional3) {
        info->p+=strlen("__extension__");
        skip_spaces_and_lf(info);
    }
    while(_while_condtional4=*info->p==35,    _while_condtional4) {
        skip_spaces_and_lf(info);
        info->p++;
        skip_spaces_and_lf(info);
        if(_if_conditional8=strmemcmp(info->p,"pragma"),        _if_conditional8) {
            while(_while_condtional5=*info->p,            _while_condtional5) {
                if(_if_conditional9=*info->p==10,                _if_conditional9) {
                    skip_spaces_and_lf(info);
                    break;
                }
                else {
                    info->p++;
                }
            }
        }
        else {
            if(_if_conditional10=xisdigit(*info->p),            _if_conditional10) {
                line_6=0;
                fname_7=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value14=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 71, "struct buffer"))))))));
                come_call_finalizer2(buffer_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(buffer_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                while(_while_condtional6=xisdigit(*info->p),                _while_condtional6) {
                    line_6=line_6*10+(*info->p-48);
                    info->p++;
                }
                skip_spaces_and_lf(info);
                if(_if_conditional11=*info->p==34,                _if_conditional11) {
                    info->p++;
                    while(_while_condtional7=*info->p!=34,                    _while_condtional7) {
                        buffer_append_char(fname_7,*info->p);
                        info->p++;
                    }
                    while(_while_condtional8=*info->p!=10,                    _while_condtional8) {
                        info->p++;
                    }
                    info->p++;
                }
                info->sline=line_6;
                __dec_obj6=info->sname;
                info->sname=(char*)come_increment_ref_count(((char*)(right_value15=buffer_to_string(fname_7))));
                __dec_obj6 = come_decrement_ref_count2(__dec_obj6, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value15 = come_decrement_ref_count2(right_value15, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                skip_spaces_and_lf(info);
                come_call_finalizer2(buffer_finalize,fname_7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(_if_conditional12=*info->p==34,                _if_conditional12) {
                    info->p++;
                    while(_while_condtional9=*info->p!=34,                    _while_condtional9) {
                        info->p++;
                    }
                    while(_while_condtional10=*info->p!=10,                    _while_condtional10) {
                        info->p++;
                    }
                    info->p++;
                }
            }
        }
        skip_spaces_and_lf(info);
    }
    while(_while_condtional11=strmemcmp(info->p,"__attribute__"),    _while_condtional11) {
        info->p+=strlen("__attribute__");
        skip_spaces_and_lf(info);
        skip_paren(info);
    }
    while(_while_condtional12=strmemcmp(info->p,"__extension__"),    _while_condtional12) {
        info->p+=strlen("__extension__");
        skip_spaces_and_lf(info);
    }
}

_Bool parsecmp(char* str, struct sInfo* info){
void* __result_obj__;
char c_8;
_Bool __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&c_8, 0, sizeof(char));
    c_8=*(info->p+strlen(str));
    __result10__ = strmemcmp(info->p,str)&&(c_8==59||c_8==32||c_8==9||c_8==10||c_8==10);
    return __result10__;
}

char* parse_word(struct sInfo* info){
void* __result_obj__;
void* right_value16;
void* right_value17;
struct buffer* buf_9;
_Bool _while_condtional13;
void* right_value18;
_Bool _if_conditional13;
void* right_value19;
char* __result11__;
void* right_value20;
char* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
right_value16 = (void*)0;
right_value17 = (void*)0;
memset(&buf_9, 0, sizeof(struct buffer*));
right_value18 = (void*)0;
right_value19 = (void*)0;
right_value20 = (void*)0;
    buf_9=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value17=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value16=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 145, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    parse_sharp_v5(info);
    while(_while_condtional13=(*info->p>=97&&*info->p<=122)||(*info->p>=65&&*info->p<=90)||*info->p==95||(*info->p>=48&&*info->p<=57)||(*info->p==36),    _while_condtional13) {
        buffer_append_char(buf_9,*info->p);
        info->p++;
    }
    skip_spaces_and_lf(info);
    if(_if_conditional13=string_length(((char*)(right_value18=buffer_to_string(buf_9))))==0,    right_value18 = come_decrement_ref_count2(right_value18, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
    _if_conditional13) {
        err_msg(info,"unexpected character(%c). expected word character",*info->p);
        __result11__ = __result_obj__ = ((char*)(right_value19=__builtin_string("")));
        come_call_finalizer2(buffer_finalize,buf_9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        right_value19 = come_decrement_ref_count2(right_value19, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result11__;
    }
    __result12__ = __result_obj__ = ((char*)(right_value20=buffer_to_string(buf_9)));
    come_call_finalizer2(buffer_finalize,buf_9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value20 = come_decrement_ref_count2(right_value20, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result12__;
    come_call_finalizer2(buffer_finalize,buf_9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void skip_spaces_and_lf(struct sInfo* info){
void* __result_obj__;
_Bool _while_condtional14;
_Bool _if_conditional14;
_Bool _if_conditional15;
memset(&__result_obj__, 0, sizeof(void*));
    while(_while_condtional14=(_Bool)1,    _while_condtional14) {
        if(_if_conditional14=*info->p==32||*info->p==9,        _if_conditional14) {
            info->p++;
        }
        else {
            if(_if_conditional15=*info->p==10,            _if_conditional15) {
                info->p++;
                info->sline++;
            }
            else {
                break;
            }
        }
    }
}

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info){
void* __result_obj__;
struct list$1sTypeph* o2_saved_10;
struct sType* it_13;
_Bool _if_conditional20;
_Bool __result20__;
struct list$1sTypeph* o2_saved_22;
struct sType* it_23;
_Bool _if_conditional38;
_Bool __result21__;
_Bool _if_conditional39;
_Bool __result22__;
_Bool _if_conditional40;
_Bool __result23__;
_Bool __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&o2_saved_10, 0, sizeof(struct list$1sTypeph*));
memset(&it_13, 0, sizeof(struct sType*));
memset(&o2_saved_22, 0, sizeof(struct list$1sTypeph*));
memset(&it_23, 0, sizeof(struct sType*));
    for(    o2_saved_10=(struct list$1sTypeph*)come_increment_ref_count((type->mMultipleTypes)),it_13=list$1sTypeph_begin((o2_saved_10));    !list$1sTypeph_end((o2_saved_10));    it_13=list$1sTypeph_next((o2_saved_10))    ){
        if(_if_conditional20=is_contained_generics_class(it_13,info),        _if_conditional20) {
            __result20__ = (_Bool)1;
            come_call_finalizer2(list$1sTypephp_finalize,o2_saved_10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result20__;
        }
    }
    come_call_finalizer2(list$1sTypephp_finalize,o2_saved_10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_22=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_23=list$1sTypeph_begin((o2_saved_22));    !list$1sTypeph_end((o2_saved_22));    it_23=list$1sTypeph_next((o2_saved_22))    ){
        if(_if_conditional38=is_contained_generics_class(it_23,info),        _if_conditional38) {
            __result21__ = (_Bool)1;
            come_call_finalizer2(list$1sTypephp_finalize,o2_saved_22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result21__;
        }
    }
    come_call_finalizer2(list$1sTypephp_finalize,o2_saved_22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(type->mClass->mGenerics) {
        __result22__ = (_Bool)1;
        return __result22__;
    }
    if(type->mClass->mMethodGenerics) {
        __result23__ = (_Bool)1;
        return __result23__;
    }
    __result24__ = (_Bool)0;
    return __result24__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional16;
struct sType* result_11;
struct sType* __result13__;
_Bool _if_conditional17;
struct sType* __result14__;
struct sType* result_12;
struct sType* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_11, 0, sizeof(struct sType*));
memset(&result_12, 0, sizeof(struct sType*));
        if(_if_conditional16=self==((void*)0),        _if_conditional16) {
            memset(&result_11,0,sizeof(struct sType*));
            __result13__ = __result_obj__ = result_11;
            return __result13__;
        }
        self->it=self->head;
        if(self->it) {
            __result14__ = __result_obj__ = self->it->item;
            return __result14__;
        }
        memset(&result_12,0,sizeof(struct sType*));
        __result15__ = __result_obj__ = result_12;
        return __result15__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result16__;
memset(&__result_obj__, 0, sizeof(void*));
        __result16__ = self==((void*)0)||self->it==((void*)0);
        return __result16__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional18;
struct sType* result_14;
struct sType* __result17__;
_Bool _if_conditional19;
struct sType* __result18__;
struct sType* result_15;
struct sType* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_14, 0, sizeof(struct sType*));
memset(&result_15, 0, sizeof(struct sType*));
        if(_if_conditional18=self==((void*)0)||self->it==((void*)0),        _if_conditional18) {
            memset(&result_14,0,sizeof(struct sType*));
            __result17__ = __result_obj__ = result_14;
            return __result17__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result18__ = __result_obj__ = self->it->item;
            return __result18__;
        }
        memset(&result_15,0,sizeof(struct sType*));
        __result19__ = __result_obj__ = result_15;
        return __result19__;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_16;
_Bool _while_condtional15;
struct list_item$1sTypeph* prev_it_17;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_16, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_17, 0, sizeof(struct list_item$1sTypeph*));
                it_16=self->head;
                while(_while_condtional15=it_16!=((void*)0),                _while_condtional15) {
                    prev_it_17=it_16;
                    it_16=it_16->next;
                    come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional21=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional21) {
                            come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional30;
_Bool _if_conditional31;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional22=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                                _if_conditional22) {
                                    come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional23=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                _if_conditional23) {
                                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional25=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                _if_conditional25) {
                                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional26=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                _if_conditional26) {
                                    self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional27=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                _if_conditional27) {
                                    come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional28=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                _if_conditional28) {
                                    come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional30=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional30) {
                                    come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional31=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional31) {
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional33=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional33) {
                                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional34=self!=((void*)0)&&self->mAlignas!=((void*)0),                                _if_conditional34) {
                                    if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional35=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                _if_conditional35) {
                                    if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional36=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                _if_conditional36) {
                                    self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional37=self!=((void*)0)&&self->mAsmName!=((void*)0),                                _if_conditional37) {
                                    self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional24=self!=((void*)0)&&self->v1!=((void*)0),                                        _if_conditional24) {
                                            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_18;
_Bool _while_condtional16;
struct list_item$1sNodeph* prev_it_19;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_18, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_19, 0, sizeof(struct list_item$1sNodeph*));
                                        it_18=self->head;
                                        while(_while_condtional16=it_18!=((void*)0),                                        _while_condtional16) {
                                            prev_it_19=it_18;
                                            it_18=it_18->next;
                                            come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional29;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional29=self!=((void*)0)&&self->item!=((void*)0),                                                _if_conditional29) {
                                                    if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_20;
_Bool _while_condtional17;
struct list_item$1charph* prev_it_21;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_20, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_21, 0, sizeof(struct list_item$1charph*));
                                        it_20=self->head;
                                        while(_while_condtional17=it_20!=((void*)0),                                        _while_condtional17) {
                                            prev_it_21=it_20;
                                            it_20=it_20->next;
                                            come_call_finalizer2(list_item$1charphp_finalize,prev_it_21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional32;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional32=self!=((void*)0)&&self->item!=((void*)0),                                                _if_conditional32) {
                                                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
}

struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info){
void* __result_obj__;
void* right_value21;
void* right_value22;
struct list$1sTypeph* param_types_24;
void* right_value23;
void* right_value24;
struct list$1charph* param_names_25;
void* right_value25;
void* right_value26;
struct list$1charph* param_default_parametors_26;
_Bool var_args_27;
_Bool void_param_28;
char* p_29;
int sline_30;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _while_condtional18;
_Bool _if_conditional46;
void* right_value27;
struct tuple3$3sTypephcharphbool* multiple_assign_var1;
struct sType* param_type_31;
char* param_name_32;
_Bool err_33;
_Bool _if_conditional49;
void* right_value28;
void* right_value29;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result28__;
void* right_value30;
struct sType* param_type2_34;
void* right_value69;
void* right_value73;
_Bool _if_conditional125;
char* p_59;
_Bool no_comma_60;
void* right_value74;
struct sNode* node_61;
char* p2_62;
void* right_value75;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
void* right_value76;
void* right_value77;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
right_value21 = (void*)0;
right_value22 = (void*)0;
memset(&param_types_24, 0, sizeof(struct list$1sTypeph*));
right_value23 = (void*)0;
right_value24 = (void*)0;
memset(&param_names_25, 0, sizeof(struct list$1charph*));
right_value25 = (void*)0;
right_value26 = (void*)0;
memset(&param_default_parametors_26, 0, sizeof(struct list$1charph*));
memset(&var_args_27, 0, sizeof(_Bool));
memset(&void_param_28, 0, sizeof(_Bool));
memset(&p_29, 0, sizeof(char*));
memset(&sline_30, 0, sizeof(int));
right_value27 = (void*)0;
memset(&param_type_31, 0, sizeof(struct sType*));
memset(&param_name_32, 0, sizeof(char*));
memset(&err_33, 0, sizeof(_Bool));
memset(&param_type_31, 0, sizeof(struct sType*));
memset(&param_name_32, 0, sizeof(char*));
memset(&err_33, 0, sizeof(_Bool));
right_value28 = (void*)0;
right_value29 = (void*)0;
right_value30 = (void*)0;
memset(&param_type2_34, 0, sizeof(struct sType*));
right_value69 = (void*)0;
right_value73 = (void*)0;
memset(&p_59, 0, sizeof(char*));
memset(&no_comma_60, 0, sizeof(_Bool));
right_value74 = (void*)0;
memset(&node_61, 0, sizeof(struct sNode*));
memset(&p2_62, 0, sizeof(char*));
right_value75 = (void*)0;
right_value76 = (void*)0;
right_value77 = (void*)0;
    param_types_24=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value22=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value21=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function4.c", 204, "struct list$1sTypeph"))))))));
    come_call_finalizer2(list$1sTypephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    param_names_25=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value24=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value23=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function4.c", 205, "struct list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    param_default_parametors_26=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value26=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value25=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function4.c", 206, "struct list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    var_args_27=(_Bool)0;
    expected_next_character(40,info);
    void_param_28=(_Bool)0;
    {
        p_29=info->p;
        sline_30=info->sline;
        if(_if_conditional41=strmemcmp(info->p,"void"),        _if_conditional41) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(_if_conditional42=*info->p==41,            _if_conditional42) {
                void_param_28=(_Bool)1;
            }
        }
        info->p=p_29;
        info->sline=sline_30;
    }
    if(void_param_28) {
        if(_if_conditional44=strmemcmp(info->p,"void"),        _if_conditional44) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(_if_conditional45=*info->p==41,            _if_conditional45) {
                info->p++;
                skip_spaces_and_lf(info);
            }
        }
    }
    else {
        while(_while_condtional18=(_Bool)1,        _while_condtional18) {
            if(_if_conditional46=*info->p==41,            _if_conditional46) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(right_value27=parse_type(info,(_Bool)1,(_Bool)0,(_Bool)1)));
            param_type_31=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            param_name_32=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_33=multiple_assign_var1->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional49=!err_33,            _if_conditional49) {
                printf("%s %d: failed to function parametor\n",info->sname,info->sline);
                __result28__ = __result_obj__ = ((struct tuple4$4voidpvoidpvoidpbool*)(right_value29=tuple4$4voidpvoidpvoidpbool_initialize((struct tuple4$4voidpvoidpvoidpbool*)come_increment_ref_count(((struct tuple4$4voidpvoidpvoidpbool*)(right_value28=(struct tuple4$4voidpvoidpvoidpbool*)come_calloc(1, sizeof(struct tuple4$4voidpvoidpvoidpbool)*(1), "05function4.c", 255, "struct tuple4$4voidpvoidpvoidpbool")))),((void*)0),((void*)0),((void*)0),(_Bool)0)));
                come_call_finalizer2(sType_finalize,param_type_31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                param_name_32 = come_decrement_ref_count2(param_name_32, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_names_25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_default_parametors_26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                right_value28 = come_decrement_ref_count2(right_value28, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple4$4voidpvoidpvoidpboolp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                return __result28__;
            }
            param_type2_34=(struct sType*)come_increment_ref_count(((struct sType*)(right_value30=solve_generics(param_type_31,info->generics_type,info))));
            come_call_finalizer2(sType_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            param_type2_34->mFunctionParam=(_Bool)1;
            list$1sTypeph_push_back(param_types_24,(struct sType*)come_increment_ref_count(((struct sType*)(right_value69=sType_clone(param_type2_34)))));
            come_call_finalizer2(sType_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            list$1charph_push_back(param_names_25,(char*)come_increment_ref_count(((char*)(right_value73=string_clone(param_name_32)))));
            right_value73 = come_decrement_ref_count2(right_value73, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional125=*info->p==61,            _if_conditional125) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                p_59=info->p;
                no_comma_60=info->no_comma;
                info->no_comma=(_Bool)1;
                node_61=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value74=expression_v13(info))));
                if(right_value74) { right_value74 = come_decrement_ref_count2(right_value74, ((struct sNode*)right_value74)->finalize, ((struct sNode*)right_value74)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                info->no_comma=no_comma_60;
                p2_62=info->p;
                char buf_63[p2_62-p_59+1];
                memset(&buf_63, 0, sizeof(char)                *(p2_62-p_59+1)                );
                memcpy(buf_63,p_59,p2_62-p_59);
                buf_63[p2_62-p_59]=0;
                list$1charph_push_back(param_default_parametors_26,(char*)come_increment_ref_count(((char*)(right_value75=__builtin_string(buf_63)))));
                right_value75 = come_decrement_ref_count2(right_value75, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(node_61) { node_61 = come_decrement_ref_count2(node_61, ((struct sNode*)node_61)->finalize, ((struct sNode*)node_61)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                list$1charph_push_back(param_default_parametors_26,((void*)0));
            }
            parse_sharp_v5(info);
            if(_if_conditional126=*info->p==44,            _if_conditional126) {
                info->p++;
                skip_spaces_and_lf(info);
                if(_if_conditional127=strmemcmp(info->p,"..."),                _if_conditional127) {
                    info->p+=strlen("...");
                    skip_spaces_and_lf(info);
                    var_args_27=(_Bool)1;
                    expected_next_character(41,info);
                    come_call_finalizer2(sType_finalize,param_type_31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    param_name_32 = come_decrement_ref_count2(param_name_32, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,param_type2_34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            else {
                if(_if_conditional128=*info->p==41,                _if_conditional128) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    come_call_finalizer2(sType_finalize,param_type_31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    param_name_32 = come_decrement_ref_count2(param_name_32, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,param_type2_34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            come_call_finalizer2(sType_finalize,param_type_31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            param_name_32 = come_decrement_ref_count2(param_name_32, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,param_type2_34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
    __result48__ = __result_obj__ = ((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value77=tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_increment_ref_count(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value76=(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool)*(1), "05function4.c", 315, "struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool")))),(struct list$1sTypeph*)come_increment_ref_count(param_types_24),(struct list$1charph*)come_increment_ref_count(param_names_25),(struct list$1charph*)come_increment_ref_count(param_default_parametors_26),var_args_27)));
    come_call_finalizer2(list$1sTypephp_finalize,param_types_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value76 = come_decrement_ref_count2(right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result48__;
    come_call_finalizer2(list$1sTypephp_finalize,param_types_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result25__ = __result_obj__ = self;
        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result25__;
        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result26__ = __result_obj__ = self;
        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result26__;
        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional47;
_Bool _if_conditional48;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional47=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional47) {
                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional48=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional48) {
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct tuple4$4voidpvoidpvoidpbool* tuple4$4voidpvoidpvoidpbool_initialize(struct tuple4$4voidpvoidpvoidpbool* self, void* v1, void* v2, void* v3, _Bool v4){
void* __result_obj__;
struct tuple4$4voidpvoidpvoidpbool* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->v1=v1;
                    self->v2=v2;
                    self->v3=v3;
                    self->v4=v4;
                    __result27__ = __result_obj__ = self;
                    come_call_finalizer2(tuple4$4voidpvoidpvoidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result27__;
                    come_call_finalizer2(tuple4$4voidpvoidpvoidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple4$4voidpvoidpvoidpboolp_finalize(struct tuple4$4voidpvoidpvoidpbool* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional50;
void* right_value31;
struct list_item$1sTypeph* litem_35;
struct sType* __dec_obj7;
_Bool _if_conditional51;
void* right_value32;
struct list_item$1sTypeph* litem_36;
struct sType* __dec_obj8;
void* right_value33;
struct list_item$1sTypeph* litem_37;
struct sType* __dec_obj9;
struct list$1sTypeph* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
right_value31 = (void*)0;
memset(&litem_35, 0, sizeof(struct list_item$1sTypeph*));
right_value32 = (void*)0;
memset(&litem_36, 0, sizeof(struct list_item$1sTypeph*));
right_value33 = (void*)0;
memset(&litem_37, 0, sizeof(struct list_item$1sTypeph*));
                if(_if_conditional50=self->len==0,                _if_conditional50) {
                    litem_35=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value31=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 226, "struct list_item$1sTypeph"))));
                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_35->prev=((void*)0);
                    litem_35->next=((void*)0);
                    __dec_obj7=litem_35->item;
                    litem_35->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer2(sType_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_35;
                    self->head=litem_35;
                }
                else {
                    if(_if_conditional51=self->len==1,                    _if_conditional51) {
                        litem_36=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value32=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 236, "struct list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_36->prev=self->head;
                        litem_36->next=((void*)0);
                        __dec_obj8=litem_36->item;
                        litem_36->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_36;
                        self->head->next=litem_36;
                    }
                    else {
                        litem_37=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value33=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 246, "struct list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_37->prev=self->tail;
                        litem_37->next=((void*)0);
                        __dec_obj9=litem_37->item;
                        litem_37->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_37;
                        self->tail=litem_37;
                    }
                }
                self->len++;
                __result29__ = __result_obj__ = self;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result29__;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional52;
struct sType* __result30__;
void* right_value34;
struct sType* result_38;
_Bool _if_conditional53;
_Bool _if_conditional54;
void* right_value41;
struct list$1sTypeph* __dec_obj13;
_Bool _if_conditional58;
void* right_value44;
struct tuple1$1sTypeph* __dec_obj15;
_Bool _if_conditional62;
void* right_value45;
struct tuple1$1sTypeph* __dec_obj16;
_Bool _if_conditional63;
void* right_value46;
char* __dec_obj17;
_Bool _if_conditional64;
void* right_value47;
struct list$1sTypeph* __dec_obj18;
_Bool _if_conditional65;
void* right_value55;
struct list$1sNodeph* __dec_obj22;
_Bool _if_conditional78;
_Bool _if_conditional79;
void* right_value56;
struct list$1sTypeph* __dec_obj23;
_Bool _if_conditional80;
void* right_value63;
struct list$1charph* __dec_obj27;
_Bool _if_conditional84;
void* right_value64;
struct tuple1$1sTypeph* __dec_obj28;
_Bool _if_conditional85;
_Bool _if_conditional86;
void* right_value65;
struct sNode* __dec_obj29;
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
_Bool _if_conditional110;
void* right_value66;
struct sNode* __dec_obj30;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
void* right_value67;
char* __dec_obj31;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
void* right_value68;
char* __dec_obj32;
struct sType* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
right_value34 = (void*)0;
memset(&result_38, 0, sizeof(struct sType*));
right_value41 = (void*)0;
right_value44 = (void*)0;
right_value45 = (void*)0;
right_value46 = (void*)0;
right_value47 = (void*)0;
right_value55 = (void*)0;
right_value56 = (void*)0;
right_value63 = (void*)0;
right_value64 = (void*)0;
right_value65 = (void*)0;
right_value66 = (void*)0;
right_value67 = (void*)0;
right_value68 = (void*)0;
                if(_if_conditional52=self==(void*)0,                _if_conditional52) {
                    __result30__ = __result_obj__ = (void*)0;
                    return __result30__;
                }
                result_38=(struct sType*)come_increment_ref_count(((struct sType*)(right_value34=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
                come_call_finalizer2(sType_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional53=self!=((void*)0),                _if_conditional53) {
                    result_38->mClass=self->mClass;
                }
                if(_if_conditional54=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                _if_conditional54) {
                    __dec_obj13=result_38->mMultipleTypes;
                    result_38->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value41=list$1sTypephp_clone(self->mMultipleTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional58=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional58) {
                    __dec_obj15=result_38->mNoSolvedGenericsType;
                    result_38->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value44=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional62=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional62) {
                    __dec_obj16=result_38->mOriginalLoadVarType;
                    result_38->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value45=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional63=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional63) {
                    __dec_obj17=result_38->mGenericsName;
                    result_38->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value46=string_clone(self->mGenericsName))));
                    __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value46 = come_decrement_ref_count2(right_value46, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional64=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional64) {
                    __dec_obj18=result_38->mGenericsTypes;
                    result_38->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value47=list$1sTypephp_clone(self->mGenericsTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional65=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional65) {
                    __dec_obj22=result_38->mArrayNum;
                    result_38->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value55=list$1sNodephp_clone(self->mArrayNum))));
                    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sNodephp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional78=self!=((void*)0),                _if_conditional78) {
                    result_38->mOmitArrayNum=self->mOmitArrayNum;
                }
                if(_if_conditional79=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional79) {
                    __dec_obj23=result_38->mParamTypes;
                    result_38->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value56=list$1sTypephp_clone(self->mParamTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional80=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional80) {
                    __dec_obj27=result_38->mParamNames;
                    result_38->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value63=list$1charphp_clone(self->mParamNames))));
                    come_call_finalizer2(list$1charph_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional84=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional84) {
                    __dec_obj28=result_38->mResultType;
                    result_38->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value64=tuple1$1sTypephp_clone(self->mResultType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional85=self!=((void*)0),                _if_conditional85) {
                    result_38->mVarArgs=self->mVarArgs;
                }
                if(_if_conditional86=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional86) {
                    __dec_obj29=result_38->mAlignas;
                    result_38->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value65=sNode_clone(self->mAlignas))));
                    if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count2(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value65) { right_value65 = come_decrement_ref_count2(right_value65, ((struct sNode*)right_value65)->finalize, ((struct sNode*)right_value65)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional87=self!=((void*)0),                _if_conditional87) {
                    result_38->mUnsigned=self->mUnsigned;
                }
                if(_if_conditional88=self!=((void*)0),                _if_conditional88) {
                    result_38->mShort=self->mShort;
                }
                if(_if_conditional89=self!=((void*)0),                _if_conditional89) {
                    result_38->mLong=self->mLong;
                }
                if(_if_conditional90=self!=((void*)0),                _if_conditional90) {
                    result_38->mLongLong=self->mLongLong;
                }
                if(_if_conditional91=self!=((void*)0),                _if_conditional91) {
                    result_38->mConstant=self->mConstant;
                }
                if(_if_conditional92=self!=((void*)0),                _if_conditional92) {
                    result_38->mRegister=self->mRegister;
                }
                if(_if_conditional93=self!=((void*)0),                _if_conditional93) {
                    result_38->mVolatile=self->mVolatile;
                }
                if(_if_conditional94=self!=((void*)0),                _if_conditional94) {
                    result_38->mStatic=self->mStatic;
                }
                if(_if_conditional95=self!=((void*)0),                _if_conditional95) {
                    result_38->mExtern=self->mExtern;
                }
                if(_if_conditional96=self!=((void*)0),                _if_conditional96) {
                    result_38->mRestrict=self->mRestrict;
                }
                if(_if_conditional97=self!=((void*)0),                _if_conditional97) {
                    result_38->mImmutable=self->mImmutable;
                }
                if(_if_conditional98=self!=((void*)0),                _if_conditional98) {
                    result_38->mHeap=self->mHeap;
                }
                if(_if_conditional99=self!=((void*)0),                _if_conditional99) {
                    result_38->mDummyHeap=self->mDummyHeap;
                }
                if(_if_conditional100=self!=((void*)0),                _if_conditional100) {
                    result_38->mDelegate=self->mDelegate;
                }
                if(_if_conditional101=self!=((void*)0),                _if_conditional101) {
                    result_38->mShare=self->mShare;
                }
                if(_if_conditional102=self!=((void*)0),                _if_conditional102) {
                    result_38->mClone=self->mClone;
                }
                if(_if_conditional103=self!=((void*)0),                _if_conditional103) {
                    result_38->mNoHeap=self->mNoHeap;
                }
                if(_if_conditional104=self!=((void*)0),                _if_conditional104) {
                    result_38->mNoCallingDestructor=self->mNoCallingDestructor;
                }
                if(_if_conditional105=self!=((void*)0),                _if_conditional105) {
                    result_38->mRefference=self->mRefference;
                }
                if(_if_conditional106=self!=((void*)0),                _if_conditional106) {
                    result_38->mException=self->mException;
                }
                if(_if_conditional107=self!=((void*)0),                _if_conditional107) {
                    result_38->mPointerNum=self->mPointerNum;
                }
                if(_if_conditional108=self!=((void*)0),                _if_conditional108) {
                    result_38->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                }
                if(_if_conditional109=self!=((void*)0),                _if_conditional109) {
                    result_38->mNoArrayPointerNum=self->mNoArrayPointerNum;
                }
                if(_if_conditional110=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional110) {
                    __dec_obj30=result_38->mSizeNum;
                    result_38->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value66=sNode_clone(self->mSizeNum))));
                    if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count2(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value66) { right_value66 = come_decrement_ref_count2(right_value66, ((struct sNode*)right_value66)->finalize, ((struct sNode*)right_value66)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional111=self!=((void*)0),                _if_conditional111) {
                    result_38->mDynamicArrayNum=self->mDynamicArrayNum;
                }
                if(_if_conditional112=self!=((void*)0),                _if_conditional112) {
                    result_38->mTypeOfExpression=self->mTypeOfExpression;
                }
                if(_if_conditional113=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional113) {
                    __dec_obj31=result_38->mOriginalTypeName;
                    result_38->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value67=string_clone(self->mOriginalTypeName))));
                    __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value67 = come_decrement_ref_count2(right_value67, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional114=self!=((void*)0),                _if_conditional114) {
                    result_38->mOriginalPointerNum=self->mOriginalPointerNum;
                }
                if(_if_conditional115=self!=((void*)0),                _if_conditional115) {
                    result_38->mFunctionParam=self->mFunctionParam;
                }
                if(_if_conditional116=self!=((void*)0),                _if_conditional116) {
                    result_38->mAllocaValue=self->mAllocaValue;
                }
                if(_if_conditional117=self!=((void*)0),                _if_conditional117) {
                    result_38->mGenericsStruct=self->mGenericsStruct;
                }
                if(_if_conditional118=self!=((void*)0),                _if_conditional118) {
                    result_38->mSolvedGenericsName=self->mSolvedGenericsName;
                }
                if(_if_conditional119=self!=((void*)0),                _if_conditional119) {
                    result_38->mComeMemCore=self->mComeMemCore;
                }
                if(_if_conditional120=self!=((void*)0),                _if_conditional120) {
                    result_38->mInline=self->mInline;
                }
                if(_if_conditional121=self!=((void*)0),                _if_conditional121) {
                    result_38->mNullValue=self->mNullValue;
                }
                if(_if_conditional122=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional122) {
                    __dec_obj32=result_38->mAsmName;
                    result_38->mAsmName=(char*)come_increment_ref_count(((char*)(right_value68=string_clone(self->mAsmName))));
                    __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value68 = come_decrement_ref_count2(right_value68, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result45__ = __result_obj__ = result_38;
                come_call_finalizer2(sType_finalize,result_38, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result45__;
                come_call_finalizer2(sType_finalize,result_38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional55;
struct list$1sTypeph* __result31__;
void* right_value35;
void* right_value36;
struct list$1sTypeph* result_39;
struct list_item$1sTypeph* it_40;
_Bool _while_condtional19;
void* right_value40;
struct list$1sTypeph* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
right_value35 = (void*)0;
right_value36 = (void*)0;
memset(&result_39, 0, sizeof(struct list$1sTypeph*));
memset(&it_40, 0, sizeof(struct list_item$1sTypeph*));
right_value40 = (void*)0;
                        if(_if_conditional55=self==((void*)0),                        _if_conditional55) {
                            __result31__ = __result_obj__ = ((void*)0);
                            return __result31__;
                        }
                        result_39=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value36=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value35=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 142, "struct list$1sTypeph"))))))));
                        come_call_finalizer2(list$1sTypephp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sTypephp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        it_40=self->head;
                        while(_while_condtional19=it_40!=((void*)0),                        _while_condtional19) {
                            list$1sTypeph_add(result_39,(struct sType*)come_increment_ref_count(((struct sType*)(right_value40=sType_clone(it_40->item)))));
                            come_call_finalizer2(sType_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            it_40=it_40->next;
                        }
                        __result33__ = __result_obj__ = result_39;
                        come_call_finalizer2(list$1sTypephp_finalize,result_39, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result33__;
                        come_call_finalizer2(list$1sTypephp_finalize,result_39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional56;
void* right_value37;
struct list_item$1sTypeph* litem_41;
struct sType* __dec_obj10;
_Bool _if_conditional57;
void* right_value38;
struct list_item$1sTypeph* litem_42;
struct sType* __dec_obj11;
void* right_value39;
struct list_item$1sTypeph* litem_43;
struct sType* __dec_obj12;
struct list$1sTypeph* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
right_value37 = (void*)0;
memset(&litem_41, 0, sizeof(struct list_item$1sTypeph*));
right_value38 = (void*)0;
memset(&litem_42, 0, sizeof(struct list_item$1sTypeph*));
right_value39 = (void*)0;
memset(&litem_43, 0, sizeof(struct list_item$1sTypeph*));
                                if(_if_conditional56=self->len==0,                                _if_conditional56) {
                                    litem_41=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value37=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 156, "struct list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_41->prev=((void*)0);
                                    litem_41->next=((void*)0);
                                    __dec_obj10=litem_41->item;
                                    litem_41->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    self->tail=litem_41;
                                    self->head=litem_41;
                                }
                                else {
                                    if(_if_conditional57=self->len==1,                                    _if_conditional57) {
                                        litem_42=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value38=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 166, "struct list_item$1sTypeph"))));
                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_42->prev=self->head;
                                        litem_42->next=((void*)0);
                                        __dec_obj11=litem_42->item;
                                        litem_42->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer2(sType_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        self->tail=litem_42;
                                        self->head->next=litem_42;
                                    }
                                    else {
                                        litem_43=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value39=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 176, "struct list_item$1sTypeph"))));
                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_43->prev=self->tail;
                                        litem_43->next=((void*)0);
                                        __dec_obj12=litem_43->item;
                                        litem_43->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer2(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        self->tail->next=litem_43;
                                        self->tail=litem_43;
                                    }
                                }
                                self->len++;
                                __result32__ = __result_obj__ = self;
                                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result32__;
                                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional59;
struct tuple1$1sTypeph* __result34__;
void* right_value42;
struct tuple1$1sTypeph* result_44;
_Bool _if_conditional61;
void* right_value43;
struct sType* __dec_obj14;
struct tuple1$1sTypeph* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
right_value42 = (void*)0;
memset(&result_44, 0, sizeof(struct tuple1$1sTypeph*));
right_value43 = (void*)0;
                        if(_if_conditional59=self==(void*)0,                        _if_conditional59) {
                            __result34__ = __result_obj__ = (void*)0;
                            return __result34__;
                        }
                        result_44=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value42=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                        come_call_finalizer2(tuple1$1sTypeph_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional61=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional61) {
                            __dec_obj14=result_44->v1;
                            result_44->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value43=sType_clone(self->v1))));
                            come_call_finalizer2(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        __result35__ = __result_obj__ = result_44;
                        come_call_finalizer2(tuple1$1sTypeph_finalize,result_44, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result35__;
                        come_call_finalizer2(tuple1$1sTypeph_finalize,result_44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional60;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional60=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional60) {
                                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional66;
struct list$1sNodeph* __result36__;
void* right_value48;
void* right_value49;
struct list$1sNodeph* result_45;
struct list_item$1sNodeph* it_46;
_Bool _while_condtional20;
void* right_value54;
struct list$1sNodeph* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
right_value48 = (void*)0;
right_value49 = (void*)0;
memset(&result_45, 0, sizeof(struct list$1sNodeph*));
memset(&it_46, 0, sizeof(struct list_item$1sNodeph*));
right_value54 = (void*)0;
                        if(_if_conditional66=self==((void*)0),                        _if_conditional66) {
                            __result36__ = __result_obj__ = ((void*)0);
                            return __result36__;
                        }
                        result_45=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value49=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value48=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 142, "struct list$1sNodeph"))))))));
                        come_call_finalizer2(list$1sNodephp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sNodephp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        it_46=self->head;
                        while(_while_condtional20=it_46!=((void*)0),                        _while_condtional20) {
                            list$1sNodeph_add(result_45,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value54=sNode_clone(it_46->item)))));
                            if(right_value54) { right_value54 = come_decrement_ref_count2(right_value54, ((struct sNode*)right_value54)->finalize, ((struct sNode*)right_value54)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            it_46=it_46->next;
                        }
                        __result41__ = __result_obj__ = result_45;
                        come_call_finalizer2(list$1sNodephp_finalize,result_45, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result41__;
                        come_call_finalizer2(list$1sNodephp_finalize,result_45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            __result37__ = __result_obj__ = self;
                            come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result37__;
                            come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional67;
void* right_value50;
struct list_item$1sNodeph* litem_47;
struct sNode* __dec_obj19;
_Bool _if_conditional68;
void* right_value51;
struct list_item$1sNodeph* litem_48;
struct sNode* __dec_obj20;
void* right_value52;
struct list_item$1sNodeph* litem_49;
struct sNode* __dec_obj21;
struct list$1sNodeph* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
right_value50 = (void*)0;
memset(&litem_47, 0, sizeof(struct list_item$1sNodeph*));
right_value51 = (void*)0;
memset(&litem_48, 0, sizeof(struct list_item$1sNodeph*));
right_value52 = (void*)0;
memset(&litem_49, 0, sizeof(struct list_item$1sNodeph*));
                                if(_if_conditional67=self->len==0,                                _if_conditional67) {
                                    litem_47=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value50=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 156, "struct list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_47->prev=((void*)0);
                                    litem_47->next=((void*)0);
                                    __dec_obj19=litem_47->item;
                                    litem_47->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count2(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail=litem_47;
                                    self->head=litem_47;
                                }
                                else {
                                    if(_if_conditional68=self->len==1,                                    _if_conditional68) {
                                        litem_48=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value51=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 166, "struct list_item$1sNodeph"))));
                                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_48->prev=self->head;
                                        litem_48->next=((void*)0);
                                        __dec_obj20=litem_48->item;
                                        litem_48->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count2(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0,0, (void*)0); }
                                        self->tail=litem_48;
                                        self->head->next=litem_48;
                                    }
                                    else {
                                        litem_49=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value52=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 176, "struct list_item$1sNodeph"))));
                                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_49->prev=self->tail;
                                        litem_49->next=((void*)0);
                                        __dec_obj21=litem_49->item;
                                        litem_49->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0, (void*)0); }
                                        self->tail->next=litem_49;
                                        self->tail=litem_49;
                                    }
                                }
                                self->len++;
                                __result38__ = __result_obj__ = self;
                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result38__;
                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional69;
struct sNode* __result39__;
void* right_value53;
struct sNode* result_50;
_Bool _if_conditional70;
_Bool _if_conditional71;
_Bool _if_conditional72;
_Bool _if_conditional73;
_Bool _if_conditional74;
_Bool _if_conditional75;
_Bool _if_conditional76;
_Bool _if_conditional77;
struct sNode* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
right_value53 = (void*)0;
memset(&result_50, 0, sizeof(struct sNode*));
                                if(_if_conditional69=self==(void*)0,                                _if_conditional69) {
                                    __result39__ = __result_obj__ = (void*)0;
                                    return __result39__;
                                }
                                result_50=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value53=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
                                if(right_value53) { right_value53 = come_decrement_ref_count2(right_value53, ((struct sNode*)right_value53)->finalize, ((struct sNode*)right_value53)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                if(_if_conditional70=self!=((void*)0)&&self->clone!=((void*)0),                                _if_conditional70) {
                                    result_50->_protocol_obj=self->clone(self->_protocol_obj);
                                }
                                if(_if_conditional71=self!=((void*)0),                                _if_conditional71) {
                                    result_50->finalize=self->finalize;
                                }
                                if(_if_conditional72=self!=((void*)0),                                _if_conditional72) {
                                    result_50->clone=self->clone;
                                }
                                if(_if_conditional73=self!=((void*)0),                                _if_conditional73) {
                                    result_50->compile=self->compile;
                                }
                                if(_if_conditional74=self!=((void*)0),                                _if_conditional74) {
                                    result_50->sline=self->sline;
                                }
                                if(_if_conditional75=self!=((void*)0),                                _if_conditional75) {
                                    result_50->sname=self->sname;
                                }
                                if(_if_conditional76=self!=((void*)0),                                _if_conditional76) {
                                    result_50->terminated=self->terminated;
                                }
                                if(_if_conditional77=self!=((void*)0),                                _if_conditional77) {
                                    result_50->kind=self->kind;
                                }
                                __result40__ = __result_obj__ = result_50;
                                if(result_50) { result_50 = come_decrement_ref_count2(result_50, ((struct sNode*)result_50)->finalize, ((struct sNode*)result_50)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result40__;
                                if(result_50) { result_50 = come_decrement_ref_count2(result_50, ((struct sNode*)result_50)->finalize, ((struct sNode*)result_50)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional81;
struct list$1charph* __result42__;
void* right_value57;
void* right_value58;
struct list$1charph* result_51;
struct list_item$1charph* it_52;
_Bool _while_condtional21;
void* right_value62;
struct list$1charph* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
right_value57 = (void*)0;
right_value58 = (void*)0;
memset(&result_51, 0, sizeof(struct list$1charph*));
memset(&it_52, 0, sizeof(struct list_item$1charph*));
right_value62 = (void*)0;
                        if(_if_conditional81=self==((void*)0),                        _if_conditional81) {
                            __result42__ = __result_obj__ = ((void*)0);
                            return __result42__;
                        }
                        result_51=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value58=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value57=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 142, "struct list$1charph"))))))));
                        come_call_finalizer2(list$1charphp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1charphp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        it_52=self->head;
                        while(_while_condtional21=it_52!=((void*)0),                        _while_condtional21) {
                            list$1charph_add(result_51,(char*)come_increment_ref_count(((char*)(right_value62=string_clone(it_52->item)))));
                            right_value62 = come_decrement_ref_count2(right_value62, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            it_52=it_52->next;
                        }
                        __result44__ = __result_obj__ = result_51;
                        come_call_finalizer2(list$1charphp_finalize,result_51, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result44__;
                        come_call_finalizer2(list$1charphp_finalize,result_51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional82;
void* right_value59;
struct list_item$1charph* litem_53;
char* __dec_obj24;
_Bool _if_conditional83;
void* right_value60;
struct list_item$1charph* litem_54;
char* __dec_obj25;
void* right_value61;
struct list_item$1charph* litem_55;
char* __dec_obj26;
struct list$1charph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
right_value59 = (void*)0;
memset(&litem_53, 0, sizeof(struct list_item$1charph*));
right_value60 = (void*)0;
memset(&litem_54, 0, sizeof(struct list_item$1charph*));
right_value61 = (void*)0;
memset(&litem_55, 0, sizeof(struct list_item$1charph*));
                                if(_if_conditional82=self->len==0,                                _if_conditional82) {
                                    litem_53=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value59=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 156, "struct list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_53->prev=((void*)0);
                                    litem_53->next=((void*)0);
                                    __dec_obj24=litem_53->item;
                                    litem_53->item=(char*)come_increment_ref_count(item);
                                    __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail=litem_53;
                                    self->head=litem_53;
                                }
                                else {
                                    if(_if_conditional83=self->len==1,                                    _if_conditional83) {
                                        litem_54=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value60=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 166, "struct list_item$1charph"))));
                                        come_call_finalizer2(list_item$1charphp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_54->prev=self->head;
                                        litem_54->next=((void*)0);
                                        __dec_obj25=litem_54->item;
                                        litem_54->item=(char*)come_increment_ref_count(item);
                                        __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        self->tail=litem_54;
                                        self->head->next=litem_54;
                                    }
                                    else {
                                        litem_55=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value61=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 176, "struct list_item$1charph"))));
                                        come_call_finalizer2(list_item$1charphp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_55->prev=self->tail;
                                        litem_55->next=((void*)0);
                                        __dec_obj26=litem_55->item;
                                        litem_55->item=(char*)come_increment_ref_count(item);
                                        __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        self->tail->next=litem_55;
                                        self->tail=litem_55;
                                    }
                                }
                                self->len++;
                                __result43__ = __result_obj__ = self;
                                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                return __result43__;
                                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional123;
void* right_value70;
struct list_item$1charph* litem_56;
char* __dec_obj33;
_Bool _if_conditional124;
void* right_value71;
struct list_item$1charph* litem_57;
char* __dec_obj34;
void* right_value72;
struct list_item$1charph* litem_58;
char* __dec_obj35;
struct list$1charph* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
right_value70 = (void*)0;
memset(&litem_56, 0, sizeof(struct list_item$1charph*));
right_value71 = (void*)0;
memset(&litem_57, 0, sizeof(struct list_item$1charph*));
right_value72 = (void*)0;
memset(&litem_58, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional123=self->len==0,                _if_conditional123) {
                    litem_56=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value70=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 226, "struct list_item$1charph"))));
                    come_call_finalizer2(list_item$1charphp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_56->prev=((void*)0);
                    litem_56->next=((void*)0);
                    __dec_obj33=litem_56->item;
                    litem_56->item=(char*)come_increment_ref_count(item);
                    __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
                    self->tail=litem_56;
                    self->head=litem_56;
                }
                else {
                    if(_if_conditional124=self->len==1,                    _if_conditional124) {
                        litem_57=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value71=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 236, "struct list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_57->prev=self->head;
                        litem_57->next=((void*)0);
                        __dec_obj34=litem_57->item;
                        litem_57->item=(char*)come_increment_ref_count(item);
                        __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail=litem_57;
                        self->head->next=litem_57;
                    }
                    else {
                        litem_58=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value72=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 246, "struct list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_58->prev=self->tail;
                        litem_58->next=((void*)0);
                        __dec_obj35=litem_58->item;
                        litem_58->item=(char*)come_increment_ref_count(item);
                        __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail->next=litem_58;
                        self->tail=litem_58;
                    }
                }
                self->len++;
                __result46__ = __result_obj__ = self;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result46__;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__;
struct list$1sTypeph* __dec_obj36;
struct list$1charph* __dec_obj37;
struct list$1charph* __dec_obj38;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
        __dec_obj36=self->v1;
        self->v1=(struct list$1sTypeph*)come_increment_ref_count(v1);
        come_call_finalizer2(list$1sTypeph_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        __dec_obj37=self->v2;
        self->v2=(struct list$1charph*)come_increment_ref_count(v2);
        come_call_finalizer2(list$1charph_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        __dec_obj38=self->v3;
        self->v3=(struct list$1charph*)come_increment_ref_count(v3);
        come_call_finalizer2(list$1charph_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        self->v4=v4;
        __result47__ = __result_obj__ = self;
        come_call_finalizer2(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,v3, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result47__;
        come_call_finalizer2(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,v3, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
void* __result_obj__;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool _if_conditional131;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional129=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional129) {
                come_call_finalizer2(list$1sTypephp_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional130=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional130) {
                come_call_finalizer2(list$1charphp_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional131=self!=((void*)0)&&self->v3!=((void*)0),            _if_conditional131) {
                come_call_finalizer2(list$1charphp_finalize,self->v3, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, struct sInfo* info){
void* __result_obj__;
void* right_value78;
struct sType* right_type2_64;
_Bool _if_conditional132;
void* right_value79;
struct sType* left_type2_65;
_Bool found_match_type_66;
struct list$1sTypeph* o2_saved_67;
struct sType* it_68;
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool _if_conditional135;
_Bool __result51__;
struct sType* left_no_solved_generics_type_71;
struct sType* right_no_solved_generics_type_72;
_Bool _if_conditional136;
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool _if_conditional139;
_Bool __result52__;
int i_73;
_Bool _if_conditional142;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool __result55__;
_Bool _if_conditional149;
_Bool __result56__;
_Bool _if_conditional150;
_Bool _if_conditional151;
_Bool __result57__;
_Bool _if_conditional152;
_Bool _if_conditional153;
_Bool _if_conditional154;
_Bool __result58__;
_Bool _if_conditional155;
_Bool _if_conditional156;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool __result59__;
void* right_value80;
void* right_value81;
struct buffer* buf2_77;
void* right_value82;
void* right_value83;
void* right_value84;
void* right_value85;
void* right_value86;
void* right_value87;
char* __dec_obj39;
void* right_value88;
struct sType* __dec_obj40;
void* right_value89;
struct sType* __dec_obj41;
_Bool _if_conditional160;
_Bool _if_conditional161;
_Bool _if_conditional162;
_Bool _if_conditional163;
_Bool _if_conditional164;
_Bool _if_conditional165;
_Bool __result60__;
_Bool _if_conditional166;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool __result61__;
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool _if_conditional171;
_Bool __result62__;
void* right_value90;
char* method_name_78;
_Bool _if_conditional191;
struct sType* obj_type_81;
_Bool _if_conditional192;
struct sType* obj_type2_82;
void* right_value91;
void* right_value92;
char* __dec_obj42;
_Bool _if_conditional193;
_Bool __result67__;
void* right_value93;
void* right_value94;
struct buffer* buf2_83;
void* right_value95;
void* right_value96;
struct sType* type_84;
void* right_value97;
void* right_value98;
char* __dec_obj43;
void* right_value99;
struct sType* __dec_obj44;
void* right_value100;
struct sType* __dec_obj45;
_Bool _if_conditional194;
void* right_value101;
char* method_name_85;
_Bool _if_conditional195;
struct sType* obj_type_86;
_Bool _if_conditional196;
struct sType* obj_type2_87;
void* right_value102;
void* right_value103;
char* __dec_obj46;
_Bool _if_conditional197;
_Bool __result68__;
void* right_value104;
void* right_value105;
struct buffer* buf2_88;
void* right_value106;
void* right_value107;
struct sType* type_89;
void* right_value108;
char* __dec_obj47;
void* right_value109;
struct sType* __dec_obj48;
void* right_value110;
struct sType* __dec_obj49;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
_Bool _if_conditional201;
_Bool _if_conditional202;
_Bool _if_conditional203;
_Bool __result69__;
_Bool _if_conditional204;
_Bool _if_conditional205;
_Bool _if_conditional206;
_Bool __result70__;
_Bool _if_conditional207;
_Bool _if_conditional208;
_Bool __result71__;
_Bool _if_conditional209;
_Bool _if_conditional210;
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool __result72__;
_Bool _if_conditional217;
void* right_value111;
char* tmp_90;
void* right_value112;
char* __dec_obj50;
void* right_value113;
struct sType* __dec_obj51;
void* right_value114;
struct sType* __dec_obj52;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
_Bool _if_conditional223;
_Bool __result73__;
_Bool _if_conditional224;
_Bool _if_conditional225;
_Bool _if_conditional226;
_Bool _if_conditional227;
_Bool _if_conditional228;
_Bool _if_conditional229;
_Bool _if_conditional230;
_Bool _if_conditional231;
_Bool __result75__;
_Bool _if_conditional232;
_Bool _if_conditional233;
_Bool __result76__;
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value78 = (void*)0;
memset(&right_type2_64, 0, sizeof(struct sType*));
right_value79 = (void*)0;
memset(&left_type2_65, 0, sizeof(struct sType*));
memset(&found_match_type_66, 0, sizeof(_Bool));
memset(&o2_saved_67, 0, sizeof(struct list$1sTypeph*));
memset(&it_68, 0, sizeof(struct sType*));
memset(&left_no_solved_generics_type_71, 0, sizeof(struct sType*));
memset(&right_no_solved_generics_type_72, 0, sizeof(struct sType*));
memset(&i_73, 0, sizeof(int));
right_value80 = (void*)0;
right_value81 = (void*)0;
memset(&buf2_77, 0, sizeof(struct buffer*));
right_value82 = (void*)0;
right_value83 = (void*)0;
right_value84 = (void*)0;
right_value85 = (void*)0;
right_value86 = (void*)0;
right_value87 = (void*)0;
right_value88 = (void*)0;
right_value89 = (void*)0;
right_value90 = (void*)0;
memset(&method_name_78, 0, sizeof(char*));
memset(&obj_type_81, 0, sizeof(struct sType*));
memset(&obj_type2_82, 0, sizeof(struct sType*));
right_value91 = (void*)0;
right_value92 = (void*)0;
right_value93 = (void*)0;
right_value94 = (void*)0;
memset(&buf2_83, 0, sizeof(struct buffer*));
right_value95 = (void*)0;
right_value96 = (void*)0;
memset(&type_84, 0, sizeof(struct sType*));
right_value97 = (void*)0;
right_value98 = (void*)0;
right_value99 = (void*)0;
right_value100 = (void*)0;
right_value101 = (void*)0;
memset(&method_name_85, 0, sizeof(char*));
memset(&obj_type_86, 0, sizeof(struct sType*));
memset(&obj_type2_87, 0, sizeof(struct sType*));
right_value102 = (void*)0;
right_value103 = (void*)0;
right_value104 = (void*)0;
right_value105 = (void*)0;
memset(&buf2_88, 0, sizeof(struct buffer*));
right_value106 = (void*)0;
right_value107 = (void*)0;
memset(&type_89, 0, sizeof(struct sType*));
right_value108 = (void*)0;
right_value109 = (void*)0;
right_value110 = (void*)0;
right_value111 = (void*)0;
memset(&tmp_90, 0, sizeof(char*));
right_value112 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
    right_type2_64=(struct sType*)come_increment_ref_count(((struct sType*)(right_value78=sType_clone(right_type))));
    come_call_finalizer2(sType_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional132=list$1sTypeph_length(left_type->mMultipleTypes)>0,    _if_conditional132) {
        left_type2_65=(struct sType*)come_increment_ref_count(((struct sType*)(right_value79=sType_clone(left_type))));
        come_call_finalizer2(sType_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        found_match_type_66=(_Bool)0;
        for(        o2_saved_67=(struct list$1sTypeph*)come_increment_ref_count((left_type->mMultipleTypes)),it_68=list$1sTypeph_begin((o2_saved_67));        !list$1sTypeph_end((o2_saved_67));        it_68=list$1sTypeph_next((o2_saved_67))        ){
            if(_if_conditional133=check_assign_type(msg,it_68,right_type,come_value,check_no_pointer,(_Bool)0,info),            _if_conditional133) {
                found_match_type_66=(_Bool)1;
            }
        }
        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        list$1sTypeph_reset(left_type2_65->mMultipleTypes);
        if(_if_conditional134=check_assign_type(msg,left_type2_65,right_type,come_value,check_no_pointer,(_Bool)0,info),        _if_conditional134) {
            found_match_type_66=(_Bool)1;
        }
        if(_if_conditional135=!found_match_type_66,        _if_conditional135) {
            err_msg(info,"type errorX");
            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
            printf("right type is %s pointer num %d\n",right_type2_64->mClass->mName,right_type2_64->mPointerNum);
            exit(2);
        }
        __result51__ = (_Bool)1;
        come_call_finalizer2(sType_finalize,left_type2_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_type2_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result51__;
        come_call_finalizer2(sType_finalize,left_type2_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    left_no_solved_generics_type_71=left_type->mNoSolvedGenericsType->v1;
    right_no_solved_generics_type_72=right_type2_64->mNoSolvedGenericsType->v1;
    if(_if_conditional136=left_no_solved_generics_type_71&&right_no_solved_generics_type_72,    _if_conditional136) {
        if(_if_conditional137=list$1sTypeph_length(left_no_solved_generics_type_71->mGenericsTypes)>0,        _if_conditional137) {
            if(_if_conditional138=list$1sTypeph_length(left_no_solved_generics_type_71->mGenericsTypes)!=list$1sTypeph_length(right_no_solved_generics_type_72->mGenericsTypes),            _if_conditional138) {
                if(print_err_msg) {
                    err_msg(info,"generics type parametor number error");
                    printf("left type generics type parametor number is %d\n",list$1sTypeph_length(left_no_solved_generics_type_71->mGenericsTypes));
                    printf("right type generics type parametor number is %d\n",list$1sTypeph_length(right_no_solved_generics_type_72->mGenericsTypes));
                    exit(2);
                }
                __result52__ = (_Bool)0;
                come_call_finalizer2(sType_finalize,right_type2_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result52__;
            }
            for(            i_73=0;            i_73<list$1sTypeph_length(left_no_solved_generics_type_71->mGenericsTypes);            i_73++            ){
                check_assign_type(msg,list$1sTypephp_operator_load_element(left_no_solved_generics_type_71->mGenericsTypes,i_73),list$1sTypephp_operator_load_element(right_no_solved_generics_type_72->mGenericsTypes,i_73),come_value,(_Bool)1,(_Bool)1,info);
            }
            check_assign_type(msg,left_no_solved_generics_type_71,right_no_solved_generics_type_72,come_value,(_Bool)0,(_Bool)1,info);
        }
    }
    else {
        if(check_no_pointer) {
            if(_if_conditional143=left_type->mPointerNum>0,            _if_conditional143) {
                if(_if_conditional144=right_type2_64->mPointerNum>0,                _if_conditional144) {
                    if(_if_conditional145=string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_64->mClass->mName,"void"),                    _if_conditional145) {
                    }
                    else {
                        if(_if_conditional146=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_64->mClass->mName,"va_list"),                        _if_conditional146) {
                        }
                        else {
                            if(_if_conditional147=string_operator_not_equals(left_type->mClass->mName,right_type2_64->mClass->mName),                            _if_conditional147) {
                                if(print_err_msg) {
                                    err_msg(info,"type error1");
                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                    printf("right type is %s pointer num %d\n",right_type2_64->mClass->mName,right_type2_64->mPointerNum);
                                    exit(2);
                                }
                                __result55__ = (_Bool)0;
                                come_call_finalizer2(sType_finalize,right_type2_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                return __result55__;
                            }
                        }
                    }
                }
                else {
                    if(print_err_msg) {
                        err_msg(info,"type error2");
                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                        printf("right type is %s pointer num %d\n",right_type2_64->mClass->mName,right_type2_64->mPointerNum);
                        exit(2);
                    }
                    __result56__ = (_Bool)0;
                    come_call_finalizer2(sType_finalize,right_type2_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result56__;
                }
            }
            else {
                if(_if_conditional150=left_type->mPointerNum==0&&right_type2_64->mPointerNum>0,                _if_conditional150) {
                    if(print_err_msg) {
                        err_msg(info,"type error3");
                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                        printf("right type is %s pointer num %d\n",right_type2_64->mClass->mName,right_type2_64->mPointerNum);
                        exit(2);
                    }
                    __result57__ = (_Bool)0;
                    come_call_finalizer2(sType_finalize,right_type2_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result57__;
                }
                else {
                    if(_if_conditional152=left_type->mPointerNum>0&&right_type2_64->mPointerNum==0&&string_operator_equals(right_type2_64->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"),                    _if_conditional152) {
                    }
                    else {
                        if(_if_conditional153=string_operator_not_equals(left_type->mClass->mName,right_type2_64->mClass->mName),                        _if_conditional153) {
                            if(print_err_msg) {
                                err_msg(info,"type error4");
                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                printf("right type is %s pointer num %d\n",right_type2_64->mClass->mName,right_type2_64->mPointerNum);
                                exit(2);
                            }
                            __result58__ = (_Bool)0;
                            come_call_finalizer2(sType_finalize,right_type2_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result58__;
                        }
                    }
                }
            }
        }
        else {
            if(_if_conditional155=!left_type->mNullValue&&right_type2_64->mNullValue,            _if_conditional155) {
                if(_if_conditional156=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_64->mClass->mName,"__builtin_va_list"),                _if_conditional156) {
                }
                else {
                    if(_if_conditional157=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_64->mClass->mName,"va_list"),                    _if_conditional157) {
                    }
                    else {
                        if(_if_conditional158=string_operator_equals(right_type2_64->mClass->mName,"void")&&right_type2_64->mPointerNum==0,                        _if_conditional158) {
                            if(print_err_msg) {
                                err_msg(info,"type error6");
                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                printf("right type is %s pointer num %d\n",right_type2_64->mClass->mName,right_type2_64->mPointerNum);
                                exit(2);
                            }
                            __result59__ = (_Bool)0;
                            come_call_finalizer2(sType_finalize,right_type2_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result59__;
                        }
                        else {
                            buf2_77=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value81=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value80=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 445, "struct buffer"))))))));
                            come_call_finalizer2(buffer_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(buffer_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            buffer_append_str(buf2_77,((char*)(right_value86=xsprintf("come_null_check(\%s, \"\%s\", \%s, \%s)",((char*)(right_value82=string_to_string(come_value->c_value))),((char*)(right_value83=string_to_string(info->sname))),((char*)(right_value84=int_to_string(info->sline))),((char*)(right_value85=int_to_string(gComeDebugStackFrameID++)))))));
                            right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            __dec_obj39=come_value->c_value;
                            come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value87=buffer_to_string(buf2_77))));
                            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            __dec_obj40=come_value->type;
                            come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value88=sType_clone(left_type))));
                            come_call_finalizer2(sType_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_value->var=((void*)0);
                            __dec_obj41=right_type2_64;
                            right_type2_64=(struct sType*)come_increment_ref_count(((struct sType*)(right_value89=sType_clone(left_type))));
                            come_call_finalizer2(sType_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(buffer_finalize,buf2_77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
            else {
                if(_if_conditional160=string_operator_equals(left_type->mClass->mName,"integer")&&left_type->mPointerNum==1,                _if_conditional160) {
                    if(_if_conditional161=string_operator_equals(right_type2_64->mClass->mName,"integer")&&right_type2_64->mPointerNum==1,                    _if_conditional161) {
                    }
                    else {
                        if(_if_conditional162=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_64->mClass->mName,"__builtin_va_list"),                        _if_conditional162) {
                        }
                        else {
                            if(_if_conditional163=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_64->mClass->mName,"va_list"),                            _if_conditional163) {
                            }
                            else {
                                if(_if_conditional164=string_operator_equals(right_type2_64->mClass->mName,"lambda"),                                _if_conditional164) {
                                    if(print_err_msg) {
                                        err_msg(info,"type error6");
                                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                        printf("right type is %s pointer num %d\n",right_type2_64->mClass->mName,right_type2_64->mPointerNum);
                                        exit(2);
                                    }
                                    __result60__ = (_Bool)0;
                                    come_call_finalizer2(sType_finalize,right_type2_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    return __result60__;
                                }
                                else {
                                    if(_if_conditional166=string_operator_equals(right_type2_64->mClass->mName,"void")&&right_type2_64->mPointerNum>0,                                    _if_conditional166) {
                                    }
                                    else {
                                        if(_if_conditional167=string_operator_equals(right_type2_64->mClass->mName,"void"),                                        _if_conditional167) {
                                            if(print_err_msg) {
                                                err_msg(info,"type error6");
                                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                printf("right type is %s pointer num %d\n",right_type2_64->mClass->mName,right_type2_64->mPointerNum);
                                                exit(2);
                                            }
                                            __result61__ = (_Bool)0;
                                            come_call_finalizer2(sType_finalize,right_type2_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            return __result61__;
                                        }
                                        else {
                                            if(_if_conditional169=string_operator_equals(left_type->mClass->mName,"lambda")&&string_operator_equals(right_type2_64->mClass->mName,"lambda"),                                            _if_conditional169) {
                                            }
                                            else {
                                                if(_if_conditional170=right_type2_64->mPointerNum>0,                                                _if_conditional170) {
                                                    if(print_err_msg) {
                                                        err_msg(info,"type error10");
                                                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                        printf("right type is %s pointer num %d\n",right_type2_64->mClass->mName,right_type2_64->mPointerNum);
                                                        exit(2);
                                                    }
                                                    __result62__ = (_Bool)0;
                                                    come_call_finalizer2(sType_finalize,right_type2_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    return __result62__;
                                                }
                                                else {
                                                    method_name_78=(char*)come_increment_ref_count(((char*)(right_value90=create_method_name(right_type2_64,(_Bool)0,"to_integer",info))));
                                                    right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    if(_if_conditional191=map$2charphsFunph_at(info->funcs,method_name_78,((void*)0))==((void*)0),                                                    _if_conditional191) {
                                                        obj_type_81=right_type2_64->mNoSolvedGenericsType->v1;
                                                        if(_if_conditional192=obj_type_81&&list$1sTypeph_length(obj_type_81->mGenericsTypes)>0,                                                        _if_conditional192) {
                                                            obj_type2_82=right_type2_64;
                                                            __dec_obj42=method_name_78;
                                                            method_name_78=(char*)come_increment_ref_count(((char*)(right_value92=make_generics_function(obj_type2_82,(char*)come_increment_ref_count(((char*)(right_value91=__builtin_string("to_integer")))),info))));
                                                            __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        }
                                                        else {
                                                            if(print_err_msg) {
                                                                err_msg(info,"require to_string implementation(%s)",right_type2_64->mClass->mName);
                                                                exit(2);
                                                            }
                                                            __result67__ = (_Bool)0;
                                                            method_name_78 = come_decrement_ref_count2(method_name_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer2(sType_finalize,right_type2_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            return __result67__;
                                                        }
                                                    }
                                                    buf2_83=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value94=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value93=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 512, "struct buffer"))))))));
                                                    come_call_finalizer2(buffer_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer2(buffer_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    buffer_append_str(buf2_83,method_name_78);
                                                    buffer_append_str(buf2_83,"(");
                                                    buffer_append_str(buf2_83,come_value->c_value);
                                                    buffer_append_str(buf2_83,")");
                                                    type_84=(struct sType*)come_increment_ref_count(((struct sType*)(right_value96=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value95=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 519, "struct sType")))),"integer",(_Bool)0,info))));
                                                    come_call_finalizer2(sType_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer2(sType_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    type_84->mHeap=(_Bool)1;
                                                    type_84->mPointerNum=1;
                                                    __dec_obj43=come_value->c_value;
                                                    come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value98=append_object_to_right_values(((char*)(right_value97=buffer_to_string(buf2_83))),(struct sType*)come_increment_ref_count(type_84),info))));
                                                    __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    __dec_obj44=come_value->type;
                                                    come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value99=sType_clone(type_84))));
                                                    come_call_finalizer2(sType_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer2(sType_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    come_value->var=((void*)0);
                                                    __dec_obj45=right_type2_64;
                                                    right_type2_64=(struct sType*)come_increment_ref_count(((struct sType*)(right_value100=sType_clone(type_84))));
                                                    come_call_finalizer2(sType_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer2(sType_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    method_name_78 = come_decrement_ref_count2(method_name_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer2(buffer_finalize,buf2_83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer2(sType_finalize,type_84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                else {
                    if(_if_conditional194=string_operator_equals(left_type->mClass->mName,"int")&&(string_operator_equals(right_type->mClass->mName,"integer")&&right_type->mPointerNum==1),                    _if_conditional194) {
                        method_name_85=(char*)come_increment_ref_count(((char*)(right_value101=create_method_name(right_type2_64,(_Bool)0,"to_int",info))));
                        right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional195=map$2charphsFunph_at(info->funcs,method_name_85,((void*)0))==((void*)0),                        _if_conditional195) {
                            obj_type_86=right_type2_64->mNoSolvedGenericsType->v1;
                            if(_if_conditional196=obj_type_86&&list$1sTypeph_length(obj_type_86->mGenericsTypes)>0,                            _if_conditional196) {
                                obj_type2_87=right_type2_64;
                                __dec_obj46=method_name_85;
                                method_name_85=(char*)come_increment_ref_count(((char*)(right_value103=make_generics_function(obj_type2_87,(char*)come_increment_ref_count(((char*)(right_value102=__builtin_string("to_int")))),info))));
                                __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                if(print_err_msg) {
                                    err_msg(info,"require to_string implementation(%s)",right_type2_64->mClass->mName);
                                    exit(1);
                                }
                                __result68__ = (_Bool)0;
                                method_name_85 = come_decrement_ref_count2(method_name_85, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,right_type2_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                return __result68__;
                            }
                        }
                        buf2_88=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value105=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value104=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 548, "struct buffer"))))))));
                        come_call_finalizer2(buffer_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(buffer_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        buffer_append_str(buf2_88,method_name_85);
                        buffer_append_str(buf2_88,"(");
                        buffer_append_str(buf2_88,come_value->c_value);
                        buffer_append_str(buf2_88,")");
                        type_89=(struct sType*)come_increment_ref_count(((struct sType*)(right_value107=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value106=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 555, "struct sType")))),"int",(_Bool)0,info))));
                        come_call_finalizer2(sType_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sType_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        __dec_obj47=come_value->c_value;
                        come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value108=buffer_to_string(buf2_88))));
                        __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        __dec_obj48=come_value->type;
                        come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value109=sType_clone(type_89))));
                        come_call_finalizer2(sType_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_value->var=((void*)0);
                        __dec_obj49=right_type2_64;
                        right_type2_64=(struct sType*)come_increment_ref_count(((struct sType*)(right_value110=sType_clone(type_89))));
                        come_call_finalizer2(sType_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        method_name_85 = come_decrement_ref_count2(method_name_85, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(buffer_finalize,buf2_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,type_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        if(_if_conditional198=string_operator_equals(left_type->mClass->mName,"char")&&left_type->mPointerNum==1,                        _if_conditional198) {
                            if(_if_conditional199=string_operator_equals(right_type2_64->mClass->mName,"char")&&right_type2_64->mPointerNum==1,                            _if_conditional199) {
                            }
                            else {
                                if(_if_conditional200=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_64->mClass->mName,"__builtin_va_list"),                                _if_conditional200) {
                                }
                                else {
                                    if(_if_conditional201=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_64->mClass->mName,"va_list"),                                    _if_conditional201) {
                                    }
                                    else {
                                        if(_if_conditional202=string_operator_equals(right_type2_64->mClass->mName,"lambda"),                                        _if_conditional202) {
                                            if(print_err_msg) {
                                                err_msg(info,"type error6");
                                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                printf("right type is %s pointer num %d\n",right_type2_64->mClass->mName,right_type2_64->mPointerNum);
                                                exit(2);
                                            }
                                            __result69__ = (_Bool)0;
                                            come_call_finalizer2(sType_finalize,right_type2_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            return __result69__;
                                        }
                                        else {
                                            if(_if_conditional204=string_operator_equals(right_type2_64->mClass->mName,"void")&&right_type2_64->mPointerNum>0,                                            _if_conditional204) {
                                            }
                                            else {
                                                if(_if_conditional205=string_operator_equals(right_type2_64->mClass->mName,"void"),                                                _if_conditional205) {
                                                    if(print_err_msg) {
                                                        err_msg(info,"type error6");
                                                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                        printf("right type is %s pointer num %d\n",right_type2_64->mClass->mName,right_type2_64->mPointerNum);
                                                        exit(2);
                                                    }
                                                    __result70__ = (_Bool)0;
                                                    come_call_finalizer2(sType_finalize,right_type2_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    return __result70__;
                                                }
                                                else {
                                                    if(_if_conditional207=string_operator_not_equals(left_type->mClass->mName,right_type2_64->mClass->mName),                                                    _if_conditional207) {
                                                        if(print_err_msg) {
                                                            err_msg(info,"type error5");
                                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                            printf("right type is %s pointer num %d\n",right_type2_64->mClass->mName,right_type2_64->mPointerNum);
                                                            exit(2);
                                                        }
                                                        __result71__ = (_Bool)0;
                                                        come_call_finalizer2(sType_finalize,right_type2_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        return __result71__;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        else {
                            if(_if_conditional209=string_operator_equals(left_type->mClass->mName,"void")&&left_type->mPointerNum==1,                            _if_conditional209) {
                                if(_if_conditional210=string_operator_equals(right_type2_64->mClass->mName,"void")&&right_type2_64->mPointerNum==1,                                _if_conditional210) {
                                }
                                else {
                                    if(_if_conditional211=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_64->mClass->mName,"__builtin_va_list"),                                    _if_conditional211) {
                                    }
                                    else {
                                        if(_if_conditional212=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_64->mClass->mName,"va_list"),                                        _if_conditional212) {
                                        }
                                        else {
                                            if(_if_conditional213=string_operator_equals(right_type2_64->mClass->mName,"lambda"),                                            _if_conditional213) {
                                            }
                                            else {
                                                if(_if_conditional214=string_operator_equals(right_type2_64->mClass->mName,"void")&&right_type2_64->mPointerNum>0,                                                _if_conditional214) {
                                                }
                                                else {
                                                    if(_if_conditional215=string_operator_equals(right_type2_64->mClass->mName,"void"),                                                    _if_conditional215) {
                                                        if(print_err_msg) {
                                                            err_msg(info,"type error6");
                                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                            printf("right type is %s pointer num %d\n",right_type2_64->mClass->mName,right_type2_64->mPointerNum);
                                                            exit(2);
                                                        }
                                                        __result72__ = (_Bool)0;
                                                        come_call_finalizer2(sType_finalize,right_type2_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        return __result72__;
                                                    }
                                                    else {
                                                        if(_if_conditional217=right_type2_64->mPointerNum==0,                                                        _if_conditional217) {
                                                            tmp_90=(char*)come_increment_ref_count(((char*)(right_value111=xsprintf("(void*)%s",come_value->c_value))));
                                                            right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            __dec_obj50=come_value->c_value;
                                                            come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value112=string_clone(tmp_90))));
                                                            __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            __dec_obj51=come_value->type;
                                                            come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value113=sType_clone(left_type))));
                                                            come_call_finalizer2(sType_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer2(sType_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            come_value->var=((void*)0);
                                                            __dec_obj52=right_type2_64;
                                                            right_type2_64=(struct sType*)come_increment_ref_count(((struct sType*)(right_value114=sType_clone(left_type))));
                                                            come_call_finalizer2(sType_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer2(sType_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            tmp_90 = come_decrement_ref_count2(tmp_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            else {
                                if(_if_conditional218=left_type->mPointerNum>0,                                _if_conditional218) {
                                    if(_if_conditional219=right_type2_64->mPointerNum>0,                                    _if_conditional219) {
                                        if(_if_conditional220=string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_64->mClass->mName,"void"),                                        _if_conditional220) {
                                        }
                                        else {
                                            if(_if_conditional221=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_64->mClass->mName,"va_list"),                                            _if_conditional221) {
                                            }
                                            else {
                                                if(_if_conditional222=string_operator_not_equals(left_type->mClass->mName,right_type2_64->mClass->mName),                                                _if_conditional222) {
                                                    if(print_err_msg) {
                                                        err_msg(info,"type error5");
                                                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                        printf("right type is %s pointer num %d\n",right_type2_64->mClass->mName,right_type2_64->mPointerNum);
                                                        exit(2);
                                                    }
                                                    __result73__ = (_Bool)0;
                                                    come_call_finalizer2(sType_finalize,right_type2_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    return __result73__;
                                                }
                                                else {
                                                    if(_if_conditional224=left_type->mPointerNum!=right_type2_64->mPointerNum,                                                    _if_conditional224) {
                                                        printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                                                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                        printf("right type is %s pointer num %d\n",right_type2_64->mClass->mName,right_type2_64->mPointerNum);
                                                    }
                                                    else {
                                                        if(_if_conditional225=list$1sNodeph_length(right_type2_64->mArrayNum)>0,                                                        _if_conditional225) {
                                                            printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                                                            printf("left type is %s pointer num %d array dimetion num %d\n",left_type->mClass->mName,left_type->mPointerNum,list$1sNodeph_length(left_type->mArrayNum));
                                                            printf("right type is %s pointer num %d array dimetion num %d\n",right_type2_64->mClass->mName,right_type2_64->mPointerNum,list$1sNodeph_length(right_type2_64->mArrayNum));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    else {
                                        if(_if_conditional226=string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_64->mClass->mName,"void"),                                        _if_conditional226) {
                                        }
                                        else {
                                            if(_if_conditional227=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_64->mClass->mName,"va_list"),                                            _if_conditional227) {
                                            }
                                            else {
                                                if(_if_conditional228=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_64->mClass->mName,"__builtin_va_list"),                                                _if_conditional228) {
                                                }
                                                else {
                                                    if(_if_conditional229=string_operator_equals(left_type->mClass->mName,"lambda")&&string_operator_equals(right_type2_64->mClass->mName,"lambda"),                                                    _if_conditional229) {
                                                    }
                                                    else {
                                                        if(_if_conditional230=left_type->mPointerNum>0&&right_type2_64->mPointerNum==0&&string_operator_equals(right_type2_64->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"),                                                        _if_conditional230) {
                                                            if(print_err_msg) {
                                                                err_msg(info,"type error10");
                                                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                                printf("right type is %s pointer num %d\n",right_type2_64->mClass->mName,right_type2_64->mPointerNum);
                                                                exit(2);
                                                            }
                                                            __result75__ = (_Bool)0;
                                                            come_call_finalizer2(sType_finalize,right_type2_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            return __result75__;
                                                        }
                                                        else {
                                                            if(_if_conditional232=!(string_operator_equals(right_type2_64->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"))&&right_type2_64->mPointerNum==0,                                                            _if_conditional232) {
                                                                if(print_err_msg) {
                                                                    err_msg(info,"type error6");
                                                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                                    printf("right type is %s pointer num %d\n",right_type2_64->mClass->mName,right_type2_64->mPointerNum);
                                                                    exit(2);
                                                                }
                                                                __result76__ = (_Bool)0;
                                                                come_call_finalizer2(sType_finalize,right_type2_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                return __result76__;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    __result77__ = (_Bool)1;
    come_call_finalizer2(sType_finalize,right_type2_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result77__;
    come_call_finalizer2(sType_finalize,right_type2_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
int __result49__;
memset(&__result_obj__, 0, sizeof(void*));
        __result49__ = self->len;
        return __result49__;
}

static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_69;
_Bool _while_condtional22;
struct list_item$1sTypeph* prev_it_70;
struct list$1sTypeph* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_69, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_70, 0, sizeof(struct list_item$1sTypeph*));
            it_69=self->head;
            while(_while_condtional22=it_69!=((void*)0),            _while_condtional22) {
                prev_it_70=it_69;
                it_69=it_69->next;
                come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result50__ = __result_obj__ = self;
            return __result50__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional140;
struct list_item$1sTypeph* it_74;
int i_75;
_Bool _while_condtional23;
_Bool _if_conditional141;
struct sType* __result53__;
struct sType* default_value_76;
struct sType* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_74, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_75, 0, sizeof(int));
memset(&default_value_76, 0, sizeof(struct sType*));
                    if(_if_conditional140=position<0,                    _if_conditional140) {
                        position+=self->len;
                    }
                    it_74=self->head;
                    i_75=0;
                    while(_while_condtional23=it_74!=((void*)0),                    _while_condtional23) {
                        if(_if_conditional141=position==i_75,                        _if_conditional141) {
                            __result53__ = __result_obj__ = it_74->item;
                            return __result53__;
                        }
                        it_74=it_74->next;
                        i_75++;
                    }
                    memset(&default_value_76,0,sizeof(struct sType*));
                    __result54__ = __result_obj__ = default_value_76;
                    come_call_finalizer2(sType_finalize,default_value_76, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result54__;
                    come_call_finalizer2(sType_finalize,default_value_76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_79;
unsigned int it_80;
_Bool _while_condtional24;
_Bool _if_conditional172;
_Bool _if_conditional173;
struct sFun* __result63__;
_Bool _if_conditional189;
_Bool _if_conditional190;
struct sFun* __result64__;
struct sFun* __result65__;
struct sFun* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_79, 0, sizeof(unsigned int));
memset(&it_80, 0, sizeof(unsigned int));
                                                        hash_79=string_get_hash_key(((char*)key))%self->size;
                                                        it_80=hash_79;
                                                        while(_while_condtional24=(_Bool)1,                                                        _while_condtional24) {
                                                            if(_if_conditional172=self->item_existance[it_80],                                                            _if_conditional172) {
                                                                if(_if_conditional173=string_equals(self->keys[it_80],key),                                                                _if_conditional173) {
                                                                    __result63__ = __result_obj__ = self->items[it_80];
                                                                    come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                    return __result63__;
                                                                }
                                                                it_80++;
                                                                if(_if_conditional189=it_80>=self->size,                                                                _if_conditional189) {
                                                                    it_80=0;
                                                                }
                                                                else {
                                                                    if(_if_conditional190=it_80==hash_79,                                                                    _if_conditional190) {
                                                                        __result64__ = __result_obj__ = default_value;
                                                                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                        return __result64__;
                                                                    }
                                                                }
                                                            }
                                                            else {
                                                                __result65__ = __result_obj__ = default_value;
                                                                come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                return __result65__;
                                                            }
                                                        }
                                                        __result66__ = __result_obj__ = default_value;
                                                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                        return __result66__;
                                                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional174;
_Bool _if_conditional175;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool _if_conditional183;
_Bool _if_conditional184;
_Bool _if_conditional185;
_Bool _if_conditional186;
_Bool _if_conditional187;
_Bool _if_conditional188;
memset(&__result_obj__, 0, sizeof(void*));
                                                                        if(_if_conditional174=self!=((void*)0)&&self->mName!=((void*)0),                                                                        _if_conditional174) {
                                                                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        if(_if_conditional175=self!=((void*)0)&&self->mResultType!=((void*)0),                                                                        _if_conditional175) {
                                                                            come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        if(_if_conditional176=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                                                        _if_conditional176) {
                                                                            come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        if(_if_conditional177=self!=((void*)0)&&self->mParamNames!=((void*)0),                                                                        _if_conditional177) {
                                                                            come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        if(_if_conditional178=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                                                        _if_conditional178) {
                                                                            come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        if(_if_conditional179=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                                                        _if_conditional179) {
                                                                            come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        if(_if_conditional180=self!=((void*)0)&&self->mBlock!=((void*)0),                                                                        _if_conditional180) {
                                                                            come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        if(_if_conditional183=self!=((void*)0)&&self->mSource!=((void*)0),                                                                        _if_conditional183) {
                                                                            come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        if(_if_conditional184=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                                                        _if_conditional184) {
                                                                            come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        if(_if_conditional185=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                                                        _if_conditional185) {
                                                                            come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        if(_if_conditional186=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                                                        _if_conditional186) {
                                                                            come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        if(_if_conditional187=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                                                        _if_conditional187) {
                                                                            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        if(_if_conditional188=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                                                        _if_conditional188) {
                                                                            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional181;
_Bool _if_conditional182;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                if(_if_conditional181=self!=((void*)0)&&self->mNodes!=((void*)0),                                                                                _if_conditional181) {
                                                                                    come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                if(_if_conditional182=self!=((void*)0)&&self->mVarTable!=((void*)0),                                                                                _if_conditional182) {
                                                                                    come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
int __result74__;
memset(&__result_obj__, 0, sizeof(void*));
                                                            __result74__ = self->len;
                                                            return __result74__;
}

void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info){
void* __result_obj__;
void* right_value115;
struct sType* right_type2_91;
_Bool _if_conditional234;
_Bool _if_conditional235;
_Bool _if_conditional236;
_Bool _if_conditional237;
_Bool _if_conditional238;
_Bool _if_conditional239;
_Bool _if_conditional240;
_Bool _if_conditional241;
_Bool _if_conditional242;
void* right_value116;
char* method_name_92;
_Bool _if_conditional243;
struct sType* obj_type_93;
_Bool _if_conditional244;
struct sType* obj_type2_94;
void* right_value117;
void* right_value118;
char* __dec_obj53;
void* right_value119;
void* right_value120;
struct buffer* buf2_95;
void* right_value121;
void* right_value122;
struct sType* type_96;
void* right_value123;
void* right_value124;
char* __dec_obj54;
void* right_value125;
struct sType* __dec_obj55;
void* right_value126;
struct sType* __dec_obj56;
_Bool _if_conditional245;
void* right_value127;
char* method_name_97;
_Bool _if_conditional246;
struct sType* obj_type_98;
_Bool _if_conditional247;
struct sType* obj_type2_99;
void* right_value128;
void* right_value129;
char* __dec_obj57;
void* right_value130;
void* right_value131;
struct buffer* buf2_100;
void* right_value132;
void* right_value133;
struct sType* type_101;
void* right_value134;
char* __dec_obj58;
void* right_value135;
struct sType* __dec_obj59;
void* right_value136;
struct sType* __dec_obj60;
memset(&__result_obj__, 0, sizeof(void*));
right_value115 = (void*)0;
memset(&right_type2_91, 0, sizeof(struct sType*));
right_value116 = (void*)0;
memset(&method_name_92, 0, sizeof(char*));
memset(&obj_type_93, 0, sizeof(struct sType*));
memset(&obj_type2_94, 0, sizeof(struct sType*));
right_value117 = (void*)0;
right_value118 = (void*)0;
right_value119 = (void*)0;
right_value120 = (void*)0;
memset(&buf2_95, 0, sizeof(struct buffer*));
right_value121 = (void*)0;
right_value122 = (void*)0;
memset(&type_96, 0, sizeof(struct sType*));
right_value123 = (void*)0;
right_value124 = (void*)0;
right_value125 = (void*)0;
right_value126 = (void*)0;
right_value127 = (void*)0;
memset(&method_name_97, 0, sizeof(char*));
memset(&obj_type_98, 0, sizeof(struct sType*));
memset(&obj_type2_99, 0, sizeof(struct sType*));
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
memset(&buf2_100, 0, sizeof(struct buffer*));
right_value132 = (void*)0;
right_value133 = (void*)0;
memset(&type_101, 0, sizeof(struct sType*));
right_value134 = (void*)0;
right_value135 = (void*)0;
right_value136 = (void*)0;
    right_type2_91=(struct sType*)come_increment_ref_count(((struct sType*)(right_value115=sType_clone(right_type))));
    come_call_finalizer2(sType_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional234=string_operator_equals(left_type->mClass->mName,"integer")&&left_type->mPointerNum==1,    _if_conditional234) {
        if(_if_conditional235=string_operator_equals(right_type2_91->mClass->mName,"integer")&&right_type2_91->mPointerNum==1,        _if_conditional235) {
        }
        else {
            if(_if_conditional236=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_91->mClass->mName,"__builtin_va_list"),            _if_conditional236) {
            }
            else {
                if(_if_conditional237=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_91->mClass->mName,"va_list"),                _if_conditional237) {
                }
                else {
                    if(_if_conditional238=string_operator_equals(right_type2_91->mClass->mName,"lambda"),                    _if_conditional238) {
                    }
                    else {
                        if(_if_conditional239=string_operator_equals(right_type2_91->mClass->mName,"void")&&right_type2_91->mPointerNum>0,                        _if_conditional239) {
                        }
                        else {
                            if(_if_conditional240=string_operator_equals(right_type2_91->mClass->mName,"void"),                            _if_conditional240) {
                            }
                            else {
                                if(_if_conditional241=left_type->mPointerNum>0&&right_type2_91->mPointerNum==0&&string_operator_equals(right_type2_91->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"),                                _if_conditional241) {
                                }
                                else {
                                    if(_if_conditional242=right_type->mPointerNum>0,                                    _if_conditional242) {
                                    }
                                    else {
                                        method_name_92=(char*)come_increment_ref_count(((char*)(right_value116=create_method_name(right_type2_91,(_Bool)0,"to_integer",info))));
                                        right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional243=map$2charphsFunph_at(info->funcs,method_name_92,((void*)0))==((void*)0),                                        _if_conditional243) {
                                            obj_type_93=right_type2_91->mNoSolvedGenericsType->v1;
                                            if(_if_conditional244=obj_type_93&&list$1sTypeph_length(obj_type_93->mGenericsTypes)>0,                                            _if_conditional244) {
                                                obj_type2_94=right_type2_91;
                                                __dec_obj53=method_name_92;
                                                method_name_92=(char*)come_increment_ref_count(((char*)(right_value118=make_generics_function(obj_type2_94,(char*)come_increment_ref_count(((char*)(right_value117=__builtin_string("to_integer")))),info))));
                                                __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            else {
                                                err_msg(info,"require to_string implementation(%s)",right_type2_91->mClass->mName);
                                                exit(1);
                                            }
                                        }
                                        buf2_95=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value120=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value119=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 756, "struct buffer"))))))));
                                        come_call_finalizer2(buffer_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(buffer_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        buffer_append_str(buf2_95,method_name_92);
                                        buffer_append_str(buf2_95,"(");
                                        buffer_append_str(buf2_95,come_value->c_value);
                                        buffer_append_str(buf2_95,")");
                                        type_96=(struct sType*)come_increment_ref_count(((struct sType*)(right_value122=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value121=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 763, "struct sType")))),"integer",(_Bool)0,info))));
                                        come_call_finalizer2(sType_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(sType_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        type_96->mHeap=(_Bool)1;
                                        type_96->mPointerNum=1;
                                        __dec_obj54=come_value->c_value;
                                        come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value124=append_object_to_right_values(((char*)(right_value123=buffer_to_string(buf2_95))),(struct sType*)come_increment_ref_count(type_96),info))));
                                        __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        __dec_obj55=come_value->type;
                                        come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value125=sType_clone(type_96))));
                                        come_call_finalizer2(sType_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(sType_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_value->var=((void*)0);
                                        __dec_obj56=right_type2_91;
                                        right_type2_91=(struct sType*)come_increment_ref_count(((struct sType*)(right_value126=sType_clone(type_96))));
                                        come_call_finalizer2(sType_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(sType_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        method_name_92 = come_decrement_ref_count2(method_name_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(buffer_finalize,buf2_95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(sType_finalize,type_96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    else {
        if(_if_conditional245=string_operator_equals(left_type->mClass->mName,"int")&&(string_operator_equals(right_type->mClass->mName,"integer")&&right_type->mPointerNum==1),        _if_conditional245) {
            method_name_97=(char*)come_increment_ref_count(((char*)(right_value127=create_method_name(right_type2_91,(_Bool)0,"to_int",info))));
            right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional246=map$2charphsFunph_at(info->funcs,method_name_97,((void*)0))==((void*)0),            _if_conditional246) {
                obj_type_98=right_type2_91->mNoSolvedGenericsType->v1;
                if(_if_conditional247=obj_type_98&&list$1sTypeph_length(obj_type_98->mGenericsTypes)>0,                _if_conditional247) {
                    obj_type2_99=right_type2_91;
                    __dec_obj57=method_name_97;
                    method_name_97=(char*)come_increment_ref_count(((char*)(right_value129=make_generics_function(obj_type2_99,(char*)come_increment_ref_count(((char*)(right_value128=__builtin_string("to_int")))),info))));
                    __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    err_msg(info,"require to_string implementation(%s)",right_type2_91->mClass->mName);
                    exit(1);
                }
            }
            buf2_100=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value131=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value130=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 789, "struct buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            buffer_append_str(buf2_100,method_name_97);
            buffer_append_str(buf2_100,"(");
            buffer_append_str(buf2_100,come_value->c_value);
            buffer_append_str(buf2_100,")");
            type_101=(struct sType*)come_increment_ref_count(((struct sType*)(right_value133=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value132=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 796, "struct sType")))),"int",(_Bool)0,info))));
            come_call_finalizer2(sType_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj58=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value134=buffer_to_string(buf2_100))));
            __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj59=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value135=sType_clone(type_101))));
            come_call_finalizer2(sType_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_value->var=((void*)0);
            __dec_obj60=right_type2_91;
            right_type2_91=(struct sType*)come_increment_ref_count(((struct sType*)(right_value136=sType_clone(type_101))));
            come_call_finalizer2(sType_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            method_name_97 = come_decrement_ref_count2(method_name_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,buf2_100, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type_101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
    come_call_finalizer2(sType_finalize,right_type2_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info){
void* __result_obj__;
void* right_value137;
struct sType* result_type_102;
_Bool _if_conditional248;
char* var_name_103;
char* p_104;
int sline_105;
_Bool _if_conditional249;
void* right_value138;
char* word_106;
_Bool _if_conditional250;
_Bool between_brace_107;
char* p_108;
int sline_109;
_Bool _if_conditional251;
_Bool _if_conditional252;
void* right_value139;
char* word_110;
_Bool _if_conditional253;
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool _while_condtional25;
char* p_111;
int sline_112;
_Bool _if_conditional256;
void* right_value140;
char* word_113;
_Bool _if_conditional257;
_Bool _if_conditional258;
_Bool _if_conditional259;
void* right_value141;
char* __dec_obj61;
static int num_anonymous_var_name_114=0;
void* right_value142;
char* __dec_obj62;
_Bool _if_conditional260;
_Bool _if_conditional261;
_Bool no_comma_115;
void* right_value143;
struct sNode* node_116;
struct sNode* __dec_obj63;
_Bool _while_condtional26;
char* p_117;
int sline_118;
_Bool _if_conditional262;
void* right_value144;
char* word_119;
_Bool _if_conditional263;
_Bool _if_conditional264;
void* right_value145;
struct sNode* node_120;
void* right_value149;
void* right_value150;
struct tuple2$2sTypephcharph* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
right_value137 = (void*)0;
memset(&result_type_102, 0, sizeof(struct sType*));
memset(&var_name_103, 0, sizeof(char*));
memset(&p_104, 0, sizeof(char*));
memset(&sline_105, 0, sizeof(int));
right_value138 = (void*)0;
memset(&word_106, 0, sizeof(char*));
memset(&between_brace_107, 0, sizeof(_Bool));
memset(&p_108, 0, sizeof(char*));
memset(&sline_109, 0, sizeof(int));
right_value139 = (void*)0;
memset(&word_110, 0, sizeof(char*));
memset(&p_111, 0, sizeof(char*));
memset(&sline_112, 0, sizeof(int));
right_value140 = (void*)0;
memset(&word_113, 0, sizeof(char*));
right_value141 = (void*)0;
right_value142 = (void*)0;
memset(&no_comma_115, 0, sizeof(_Bool));
right_value143 = (void*)0;
memset(&node_116, 0, sizeof(struct sNode*));
memset(&p_117, 0, sizeof(char*));
memset(&sline_118, 0, sizeof(int));
right_value144 = (void*)0;
memset(&word_119, 0, sizeof(char*));
right_value145 = (void*)0;
memset(&node_120, 0, sizeof(struct sNode*));
right_value149 = (void*)0;
right_value150 = (void*)0;
    result_type_102=(struct sType*)come_increment_ref_count(((struct sType*)(right_value137=sType_clone(base_type_name))));
    come_call_finalizer2(sType_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional248=!first,    _if_conditional248) {
        result_type_102->mPointerNum=0;
    }
    var_name_103=((void*)0);
    {
        p_104=info->p;
        sline_105=info->sline;
        if(_if_conditional249=xisalpha(*info->p)||*info->p==95,        _if_conditional249) {
            word_106=(char*)come_increment_ref_count(((char*)(right_value138=parse_word(info))));
            right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional250=string_operator_equals(word_106,"const")||string_operator_equals(word_106,"__restrict")||string_operator_equals(word_106,"restrict")||string_operator_equals(word_106,"__user")||string_operator_equals(word_106,"volatile")||string_operator_equals(word_106,"_Nonnull")||string_operator_equals(word_106,"_Nullable")||string_operator_equals(word_106,"_Null_unspecified")||string_operator_equals(word_106,"__user"),            _if_conditional250) {
            }
            else {
                info->p=p_104;
                info->sline=sline_105;
            }
            word_106 = come_decrement_ref_count2(word_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            info->p=p_104;
            info->sline=sline_105;
        }
    }
    between_brace_107=(_Bool)0;
    {
        p_108=info->p;
        sline_109=info->sline;
        if(_if_conditional251=*info->p==40,        _if_conditional251) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional252=xisalpha(*info->p)||*info->p==95,            _if_conditional252) {
                word_110=(char*)come_increment_ref_count(((char*)(right_value139=parse_word(info))));
                right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional253=is_type_name(word_110,info),                _if_conditional253) {
                }
                else {
                    if(_if_conditional254=*info->p==41,                    _if_conditional254) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(_if_conditional255=*info->p!=40,                        _if_conditional255) {
                            between_brace_107=(_Bool)1;
                        }
                    }
                }
                word_110 = come_decrement_ref_count2(word_110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_108;
        info->sline=sline_109;
    }
    parse_sharp_v5(info);
    while(_while_condtional25=*info->p==42,    _while_condtional25) {
        info->p++;
        skip_spaces_and_lf(info);
        {
            p_111=info->p;
            sline_112=info->sline;
            if(_if_conditional256=xisalpha(*info->p)||*info->p==95,            _if_conditional256) {
                word_113=(char*)come_increment_ref_count(((char*)(right_value140=parse_word(info))));
                right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional257=string_operator_equals(word_113,"const")||string_operator_equals(word_113,"__restrict")||string_operator_equals(word_113,"restrict")||string_operator_equals(word_113,"__user")||string_operator_equals(word_113,"volatile")||string_operator_equals(word_113,"_Nonnull")||string_operator_equals(word_113,"_Nullable")||string_operator_equals(word_113,"_Null_unspecified")||string_operator_equals(word_113,"__user"),                _if_conditional257) {
                }
                else {
                    info->p=p_111;
                    info->sline=sline_112;
                }
                word_113 = come_decrement_ref_count2(word_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                info->p=p_111;
                info->sline=sline_112;
            }
        }
        result_type_102->mPointerNum++;
    }
    parse_sharp_v5(info);
    if(_if_conditional258=between_brace_107&&*info->p==40,    _if_conditional258) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(_if_conditional259=xisalnum(*info->p)||*info->p==95,    _if_conditional259) {
        __dec_obj61=var_name_103;
        var_name_103=(char*)come_increment_ref_count(((char*)(right_value141=parse_word(info))));
        __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        num_anonymous_var_name_114++;
        __dec_obj62=var_name_103;
        var_name_103=(char*)come_increment_ref_count(((char*)(right_value142=xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name_114))));
        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    if(_if_conditional260=between_brace_107&&*info->p==41,    _if_conditional260) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(_if_conditional261=*info->p==58,    _if_conditional261) {
        info->p++;
        skip_spaces_and_lf(info);
        no_comma_115=info->no_comma;
        info->no_comma=(_Bool)1;
        node_116=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value143=expression_v13(info))));
        if(right_value143) { right_value143 = come_decrement_ref_count2(right_value143, ((struct sNode*)right_value143)->finalize, ((struct sNode*)right_value143)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        info->no_comma=no_comma_115;
        __dec_obj63=result_type_102->mSizeNum;
        result_type_102->mSizeNum=(struct sNode*)come_increment_ref_count(node_116);
        if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count2(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0, (void*)0); }
        if(node_116) { node_116 = come_decrement_ref_count2(node_116, ((struct sNode*)node_116)->finalize, ((struct sNode*)node_116)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    while(_while_condtional26=*info->p==91,    _while_condtional26) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        {
            p_117=info->p;
            sline_118=info->sline;
            if(_if_conditional262=xisalpha(*info->p)||*info->p==95,            _if_conditional262) {
                word_119=(char*)come_increment_ref_count(((char*)(right_value144=parse_word(info))));
                right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional263=string_operator_equals(word_119,"const")||string_operator_equals(word_119,"__restrict")||string_operator_equals(word_119,"restrict")||string_operator_equals(word_119,"__user")||string_operator_equals(word_119,"volatile")||string_operator_equals(word_119,"_Nonnull")||string_operator_equals(word_119,"_Nullable")||string_operator_equals(word_119,"_Null_unspecified")||string_operator_equals(word_119,"__user"),                _if_conditional263) {
                }
                else {
                    info->p=p_117;
                    info->sline=sline_118;
                }
                word_119 = come_decrement_ref_count2(word_119, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                info->p=p_117;
                info->sline=sline_118;
            }
        }
        if(_if_conditional264=*info->p==93,        _if_conditional264) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_102->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_120=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value145=expression_v13(info))));
        if(right_value145) { right_value145 = come_decrement_ref_count2(right_value145, ((struct sNode*)right_value145)->finalize, ((struct sNode*)right_value145)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1sNodeph_push_back(result_type_102->mArrayNum,(struct sNode*)come_increment_ref_count(node_120));
        parse_sharp_v5(info);
        expected_next_character(93,info);
        if(node_120) { node_120 = come_decrement_ref_count2(node_120, ((struct sNode*)node_120)->finalize, ((struct sNode*)node_120)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    __result80__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value150=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value149=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "05function4.c", 964, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(result_type_102),(char*)come_increment_ref_count(var_name_103))));
    come_call_finalizer2(sType_finalize,base_type_name, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_103 = come_decrement_ref_count2(var_name_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result80__;
    come_call_finalizer2(sType_finalize,base_type_name, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_103 = come_decrement_ref_count2(var_name_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional265;
void* right_value146;
struct list_item$1sNodeph* litem_121;
struct sNode* __dec_obj64;
_Bool _if_conditional266;
void* right_value147;
struct list_item$1sNodeph* litem_122;
struct sNode* __dec_obj65;
void* right_value148;
struct list_item$1sNodeph* litem_123;
struct sNode* __dec_obj66;
struct list$1sNodeph* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value146 = (void*)0;
memset(&litem_121, 0, sizeof(struct list_item$1sNodeph*));
right_value147 = (void*)0;
memset(&litem_122, 0, sizeof(struct list_item$1sNodeph*));
right_value148 = (void*)0;
memset(&litem_123, 0, sizeof(struct list_item$1sNodeph*));
            if(_if_conditional265=self->len==0,            _if_conditional265) {
                litem_121=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value146=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 226, "struct list_item$1sNodeph"))));
                come_call_finalizer2(list_item$1sNodephp_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_121->prev=((void*)0);
                litem_121->next=((void*)0);
                __dec_obj64=litem_121->item;
                litem_121->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); }
                self->tail=litem_121;
                self->head=litem_121;
            }
            else {
                if(_if_conditional266=self->len==1,                _if_conditional266) {
                    litem_122=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value147=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 236, "struct list_item$1sNodeph"))));
                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_122->prev=self->head;
                    litem_122->next=((void*)0);
                    __dec_obj65=litem_122->item;
                    litem_122->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); }
                    self->tail=litem_122;
                    self->head->next=litem_122;
                }
                else {
                    litem_123=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value148=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 246, "struct list_item$1sNodeph"))));
                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_123->prev=self->tail;
                    litem_123->next=((void*)0);
                    __dec_obj66=litem_123->item;
                    litem_123->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0, (void*)0); }
                    self->tail->next=litem_123;
                    self->tail=litem_123;
                }
            }
            self->len++;
            __result78__ = __result_obj__ = self;
            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result78__;
            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
struct sType* __dec_obj67;
char* __dec_obj68;
struct tuple2$2sTypephcharph* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
        __dec_obj67=self->v1;
        self->v1=(struct sType*)come_increment_ref_count(v1);
        come_call_finalizer2(sType_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        __dec_obj68=self->v2;
        self->v2=(char*)come_increment_ref_count(v2);
        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        __result79__ = __result_obj__ = self;
        come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result79__;
        come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional267;
_Bool _if_conditional268;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional267=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional267) {
                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional268=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional268) {
                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

void skip_pointer_attribute(struct sInfo* info){
void* __result_obj__;
char* p_124;
int sline_125;
_Bool _if_conditional269;
void* right_value151;
char* word_126;
_Bool _if_conditional270;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_124, 0, sizeof(char*));
memset(&sline_125, 0, sizeof(int));
right_value151 = (void*)0;
memset(&word_126, 0, sizeof(char*));
    p_124=info->p;
    sline_125=info->sline;
    if(_if_conditional269=xisalpha(*info->p)||*info->p==95,    _if_conditional269) {
        word_126=(char*)come_increment_ref_count(((char*)(right_value151=parse_word(info))));
        right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional270=string_operator_equals(word_126,"const")||string_operator_equals(word_126,"__restrict")||string_operator_equals(word_126,"restrict")||string_operator_equals(word_126,"__user")||string_operator_equals(word_126,"volatile")||string_operator_equals(word_126,"_Nonnull")||string_operator_equals(word_126,"_Nullable")||string_operator_equals(word_126,"_Null_unspecified")||string_operator_equals(word_126,"__user"),        _if_conditional270) {
        }
        else {
            info->p=p_124;
            info->sline=sline_125;
        }
        word_126 = come_decrement_ref_count2(word_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        info->p=p_124;
        info->sline=sline_125;
    }
}

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor){
void* __result_obj__;
char* head_127;
int head_sline_128;
void* right_value152;
char* type_name_129;
_Bool _while_condtional27;
void* right_value153;
char* __dec_obj69;
_Bool constant_130;
_Bool static__131;
_Bool volatile__132;
_Bool register__133;
_Bool unsigned__134;
_Bool long__135;
_Bool long_long_136;
_Bool short__137;
_Bool restrict__138;
_Bool struct__139;
_Bool union__140;
_Bool enum__141;
_Bool no_heap_142;
_Bool extern__143;
_Bool inline__144;
_Bool come_mem_core__145;
struct sNode* alignas__146;
_Bool anonymous_type_147;
_Bool anonymous_name_148;
_Bool _while_condtional28;
_Bool _if_conditional271;
_Bool _if_conditional272;
char* p_149;
int sline_150;
void* right_value154;
_Bool _if_conditional273;
void* right_value155;
char* __dec_obj70;
void* right_value156;
char* __dec_obj71;
void* right_value157;
char* __dec_obj72;
_Bool _if_conditional274;
char* p_151;
int sline_152;
_Bool _while_condtional29;
_Bool _if_conditional275;
_Bool _if_conditional276;
_Bool _if_conditional277;
void* right_value158;
void* right_value159;
struct tuple3$3sTypephcharphbool* __result82__;
_Bool _if_conditional278;
char* p_153;
int sline_154;
void* right_value160;
_Bool _if_conditional279;
void* right_value161;
void* right_value162;
struct tuple3$3sTypephcharphbool* __result83__;
_Bool _if_conditional280;
_Bool _if_conditional281;
char* p_155;
int sline_156;
void* right_value163;
_Bool _if_conditional282;
void* right_value164;
char* __dec_obj75;
void* right_value165;
char* __dec_obj76;
void* right_value166;
char* __dec_obj77;
_Bool _if_conditional283;
char* p_157;
int sline_158;
void* right_value167;
_Bool _if_conditional284;
void* right_value168;
void* right_value169;
struct tuple3$3sTypephcharphbool* __result84__;
_Bool _if_conditional285;
_Bool _if_conditional286;
char* p_159;
int sline_160;
void* right_value170;
_Bool _if_conditional287;
void* right_value171;
void* right_value172;
struct tuple3$3sTypephcharphbool* __result85__;
void* right_value173;
char* __dec_obj78;
void* right_value174;
char* __dec_obj79;
_Bool _if_conditional288;
char* p_161;
int sline_162;
void* right_value175;
_Bool _if_conditional289;
void* right_value176;
void* right_value177;
struct tuple3$3sTypephcharphbool* __result86__;
_Bool _if_conditional290;
void* right_value178;
struct sNode* exp_163;
struct sNode* __dec_obj80;
void* right_value179;
char* __dec_obj81;
_Bool _if_conditional291;
void* right_value180;
char* __dec_obj82;
_Bool _if_conditional292;
void* right_value181;
char* __dec_obj83;
_Bool _if_conditional293;
void* right_value182;
char* __dec_obj84;
_Bool _if_conditional294;
void* right_value183;
char* __dec_obj85;
_Bool _if_conditional295;
void* right_value184;
char* __dec_obj86;
_Bool _if_conditional296;
void* right_value185;
char* __dec_obj87;
_Bool _if_conditional297;
void* right_value186;
char* __dec_obj88;
_Bool _if_conditional298;
char* p_164;
int sline_165;
_Bool _if_conditional299;
void* right_value187;
char* __dec_obj89;
void* right_value188;
char* __dec_obj90;
_Bool _if_conditional300;
void* right_value189;
char* __dec_obj91;
_Bool _if_conditional301;
_Bool _if_conditional302;
_Bool _if_conditional303;
void* right_value190;
char* __dec_obj92;
_Bool _if_conditional304;
_Bool _if_conditional305;
void* right_value191;
char* __dec_obj93;
_Bool _if_conditional306;
_Bool _if_conditional307;
void* right_value192;
char* __dec_obj94;
_Bool _if_conditional308;
_Bool _if_conditional309;
char* p_166;
int sline_167;
void* right_value193;
char* __dec_obj95;
_Bool _if_conditional310;
_Bool _if_conditional311;
char* p_168;
int sline_169;
void* right_value194;
char* __dec_obj96;
_Bool _if_conditional312;
void* right_value195;
char* __dec_obj97;
void* right_value196;
char* __dec_obj98;
_Bool _if_conditional313;
_Bool _if_conditional314;
char* p_170;
int sline_171;
void* right_value197;
char* __dec_obj99;
_Bool _if_conditional315;
void* right_value198;
char* __dec_obj100;
void* right_value199;
char* __dec_obj101;
_Bool _if_conditional316;
void* right_value200;
char* __dec_obj102;
void* right_value201;
char* __dec_obj103;
_Bool _if_conditional317;
void* right_value202;
char* __dec_obj104;
_Bool _if_conditional318;
void* right_value203;
char* __dec_obj105;
_Bool _if_conditional319;
void* right_value204;
char* __dec_obj106;
_Bool _if_conditional320;
void* right_value205;
char* __dec_obj107;
_Bool _if_conditional321;
_Bool _if_conditional322;
_Bool _if_conditional323;
char* p_172;
int sline_173;
void* right_value206;
char* __dec_obj108;
_Bool _if_conditional324;
_Bool _if_conditional325;
_Bool _if_conditional326;
void* right_value207;
char* __dec_obj109;
int pointer_num_174;
_Bool _while_condtional30;
_Bool heap_175;
_Bool _if_conditional327;
_Bool lambda_flag_176;
char* pX_177;
int slineX_178;
_Bool _if_conditional328;
void* right_value208;
_Bool _if_conditional329;
struct sType* type_179;
char* var_name_180;
_Bool function_pointer_flag_181;
char* p_182;
int sline_183;
_Bool _if_conditional330;
_Bool _if_conditional331;
_Bool _if_conditional332;
void* right_value209;
char* word_184;
_Bool _if_conditional333;
_Bool _if_conditional334;
_Bool var_name_between_brace_185;
char* p_186;
int sline_187;
_Bool _if_conditional335;
_Bool _if_conditional336;
void* right_value210;
char* word_188;
_Bool _if_conditional337;
_Bool _if_conditional338;
_Bool _if_conditional339;
_Bool _if_conditional340;
static int anonymous_num_189=0;
_Bool _if_conditional341;
_Bool _if_conditional342;
void* right_value211;
char* __dec_obj110;
void* right_value212;
struct sNode* node_190;
_Bool _if_conditional343;
void* right_value213;
void* right_value214;
struct tuple3$3sTypephcharphbool* __result87__;
int pointer_num_191;
_Bool _while_condtional31;
void* right_value215;
void* right_value216;
struct sType* __dec_obj111;
_Bool _if_conditional344;
_Bool _if_conditional345;
void* right_value217;
char* __dec_obj112;
void* right_value218;
struct sNode* node_192;
_Bool _if_conditional346;
_Bool _if_conditional347;
void* right_value219;
void* right_value220;
struct tuple3$3sTypephcharphbool* __result88__;
void* right_value221;
void* right_value222;
struct sType* __dec_obj113;
_Bool _if_conditional348;
_Bool _if_conditional349;
void* right_value223;
char* __dec_obj114;
void* right_value224;
struct sNode* node_193;
_Bool _if_conditional350;
void* right_value225;
void* right_value226;
struct tuple3$3sTypephcharphbool* __result89__;
int pointer_num_194;
_Bool _while_condtional32;
void* right_value227;
void* right_value228;
struct sType* __dec_obj115;
void* right_value229;
void* right_value230;
struct tuple3$3sTypephcharphbool* __result90__;
_Bool _if_conditional351;
_Bool _if_conditional352;
_Bool _if_conditional353;
void* right_value231;
char* __dec_obj116;
_Bool _if_conditional354;
static int num_anonymous_var_name_195=0;
void* right_value232;
char* __dec_obj117;
_Bool _if_conditional355;
void* right_value233;
char* __dec_obj118;
static int num_anonymous_var_name_196=0;
void* right_value234;
char* __dec_obj119;
_Bool _if_conditional356;
_Bool _if_conditional357;
_Bool no_comma_197;
void* right_value235;
struct sNode* node_198;
struct sNode* __dec_obj120;
_Bool _if_conditional358;
struct sType* result_type_199;
_Bool _if_conditional363;
void* right_value236;
struct sType* __dec_obj121;
_Bool _if_conditional369;
int i_208;
_Bool _if_conditional372;
void* right_value237;
void* right_value238;
void* right_value239;
struct sType* __dec_obj122;
_Bool _if_conditional373;
int i_212;
_Bool _if_conditional374;
void* right_value240;
void* right_value241;
void* right_value242;
struct sType* __dec_obj123;
void* right_value243;
void* right_value244;
struct sType* __dec_obj124;
struct sNode* __dec_obj125;
void* right_value245;
char* __dec_obj126;
void* right_value246;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var2;
struct list$1sTypeph* param_types_213;
struct list$1charph* param_names_214;
struct list$1charph* param_default_parametors_215;
_Bool var_args_216;
void* right_value247;
void* right_value248;
struct sType* __dec_obj127;
void* right_value249;
void* right_value250;
struct tuple1$1sTypeph* __dec_obj129;
struct list$1sTypeph* __dec_obj130;
struct list$1charph* __dec_obj131;
_Bool _if_conditional375;
_Bool _if_conditional376;
struct sType* result_type_217;
_Bool _if_conditional377;
void* right_value251;
struct sType* __dec_obj132;
_Bool _if_conditional378;
int i_218;
_Bool _if_conditional379;
void* right_value252;
void* right_value253;
void* right_value254;
struct sType* __dec_obj133;
_Bool _if_conditional380;
int i_219;
_Bool _if_conditional381;
void* right_value255;
void* right_value256;
void* right_value257;
struct sType* __dec_obj134;
void* right_value258;
void* right_value259;
struct sType* __dec_obj135;
struct sNode* __dec_obj136;
_Bool _if_conditional382;
void* right_value260;
char* __dec_obj137;
_Bool _if_conditional383;
void* right_value261;
void* right_value262;
struct tuple3$3sTypephcharphbool* __result108__;
static int num_anonymous_var_name_220=0;
void* right_value263;
char* __dec_obj138;
void* right_value264;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var3;
struct list$1sTypeph* param_types_221;
struct list$1charph* param_names_222;
struct list$1charph* param_default_parametors_223;
_Bool var_args_224;
void* right_value265;
void* right_value266;
struct sType* __dec_obj139;
void* right_value267;
void* right_value268;
struct tuple1$1sTypeph* __dec_obj140;
struct list$1sTypeph* __dec_obj141;
struct list$1charph* __dec_obj142;
_Bool _if_conditional384;
void* right_value269;
struct sNode* exp_225;
_Bool _if_conditional385;
void* right_value270;
void* right_value271;
struct tuple3$3sTypephcharphbool* __result110__;
void* right_value272;
struct CVALUE* come_value_226;
void* right_value273;
struct sType* __dec_obj143;
_Bool _if_conditional388;
_Bool _if_conditional389;
_Bool _if_conditional390;
void* right_value274;
char* __dec_obj144;
_Bool _if_conditional391;
static int num_anonymous_var_name_227=0;
void* right_value275;
char* __dec_obj145;
_Bool _if_conditional392;
void* right_value276;
char* __dec_obj146;
static int num_anonymous_var_name_228=0;
void* right_value277;
char* __dec_obj147;
_Bool _if_conditional393;
_Bool _if_conditional394;
_Bool no_comma_229;
void* right_value278;
struct sNode* node_230;
struct sNode* __dec_obj148;
_Bool _if_conditional395;
void* right_value279;
struct sType* __dec_obj149;
void* right_value280;
char* __dec_obj150;
struct sNode* __dec_obj151;
_Bool _if_conditional396;
int i_231;
_Bool _if_conditional397;
void* right_value281;
void* right_value282;
void* right_value283;
struct sType* __dec_obj152;
struct sNode* __dec_obj153;
_Bool _if_conditional398;
int i_232;
_Bool _if_conditional399;
void* right_value284;
void* right_value285;
void* right_value286;
struct sType* __dec_obj154;
struct sNode* __dec_obj155;
_Bool _if_conditional400;
_Bool _if_conditional411;
void* right_value287;
void* right_value288;
struct tuple3$3sTypephcharphbool* __result115__;
void* right_value289;
void* right_value290;
struct sType* __dec_obj156;
_Bool _while_condtional37;
void* right_value291;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* generics_type_238;
char* var_name_239;
_Bool err_240;
_Bool _if_conditional412;
void* right_value292;
void* right_value293;
struct tuple3$3sTypephcharphbool* __result116__;
_Bool _if_conditional413;
_Bool _if_conditional414;
void* right_value294;
void* right_value295;
struct tuple3$3sTypephcharphbool* __result117__;
_Bool _if_conditional415;
void* right_value296;
struct sType* __dec_obj157;
_Bool _if_conditional416;
void* right_value297;
char* new_name_241;
struct sNode* __dec_obj158;
_Bool _if_conditional417;
struct sClass* klass_242;
_Bool _if_conditional418;
void* right_value304;
void* right_value305;
void* right_value306;
void* right_value307;
struct sType* __dec_obj159;
struct sNode* __dec_obj160;
_Bool _while_condtional46;
_Bool _if_conditional466;
_Bool _if_conditional467;
_Bool _if_conditional468;
_Bool _if_conditional469;
_Bool _if_conditional470;
_Bool _if_conditional471;
_Bool _if_conditional472;
_Bool _while_condtional47;
_Bool _if_conditional473;
_Bool _if_conditional474;
void* right_value308;
void* right_value309;
struct list$1sTypeph* types_287;
void* right_value310;
_Bool _while_condtional48;
void* right_value311;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* type2_288;
char* name_289;
_Bool err_290;
_Bool _if_conditional475;
void* right_value312;
void* right_value313;
struct tuple3$3sTypephcharphbool* __result142__;
void* right_value314;
int num_tuples_291;
void* right_value315;
void* right_value316;
void* right_value317;
struct sType* __dec_obj161;
struct list$1sTypeph* o2_saved_292;
struct sType* it_293;
void* right_value318;
_Bool _if_conditional476;
void* right_value319;
struct sType* __dec_obj162;
_Bool _if_conditional477;
void* right_value320;
char* new_name_294;
_Bool _if_conditional478;
void* right_value321;
void* right_value322;
struct list$1sTypeph* types_295;
void* right_value323;
_Bool _while_condtional49;
void* right_value324;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* type2_296;
char* name_297;
_Bool err_298;
_Bool _if_conditional479;
void* right_value325;
void* right_value326;
struct tuple3$3sTypephcharphbool* __result143__;
void* right_value327;
void* right_value328;
struct list$1sTypeph* __dec_obj163;
_Bool heap_299;
struct list$1sTypeph* o2_saved_300;
struct sType* it_301;
_Bool _if_conditional480;
void* right_value329;
void* right_value330;
struct tuple3$3sTypephcharphbool* __result144__;
void* right_value331;
void* right_value332;
struct sType* __dec_obj164;
_Bool _if_conditional481;
void* right_value333;
struct sType* __dec_obj165;
_Bool _if_conditional482;
void* right_value334;
char* new_name_302;
_Bool _if_conditional483;
_Bool _if_conditional484;
_Bool _if_conditional485;
void* right_value335;
char* __dec_obj166;
_Bool _if_conditional486;
static int num_anonymous_var_name_303=0;
void* right_value336;
char* __dec_obj167;
_Bool _if_conditional487;
void* right_value337;
char* __dec_obj168;
static int num_anonymous_var_name_304=0;
void* right_value338;
char* __dec_obj169;
_Bool _if_conditional488;
_Bool _if_conditional489;
_Bool no_comma_305;
void* right_value339;
struct sNode* node_306;
struct sNode* __dec_obj170;
_Bool _while_condtional50;
_Bool _if_conditional490;
void* right_value340;
struct sNode* node_307;
void* right_value341;
char* asm_name_308;
char* __dec_obj171;
void* right_value342;
void* right_value343;
struct tuple3$3sTypephcharphbool* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_127, 0, sizeof(char*));
memset(&head_sline_128, 0, sizeof(int));
right_value152 = (void*)0;
memset(&type_name_129, 0, sizeof(char*));
right_value153 = (void*)0;
memset(&constant_130, 0, sizeof(_Bool));
memset(&static__131, 0, sizeof(_Bool));
memset(&volatile__132, 0, sizeof(_Bool));
memset(&register__133, 0, sizeof(_Bool));
memset(&unsigned__134, 0, sizeof(_Bool));
memset(&long__135, 0, sizeof(_Bool));
memset(&long_long_136, 0, sizeof(_Bool));
memset(&short__137, 0, sizeof(_Bool));
memset(&restrict__138, 0, sizeof(_Bool));
memset(&struct__139, 0, sizeof(_Bool));
memset(&union__140, 0, sizeof(_Bool));
memset(&enum__141, 0, sizeof(_Bool));
memset(&no_heap_142, 0, sizeof(_Bool));
memset(&extern__143, 0, sizeof(_Bool));
memset(&inline__144, 0, sizeof(_Bool));
memset(&come_mem_core__145, 0, sizeof(_Bool));
memset(&alignas__146, 0, sizeof(struct sNode*));
memset(&anonymous_type_147, 0, sizeof(_Bool));
memset(&anonymous_name_148, 0, sizeof(_Bool));
memset(&p_149, 0, sizeof(char*));
memset(&sline_150, 0, sizeof(int));
right_value154 = (void*)0;
right_value155 = (void*)0;
right_value156 = (void*)0;
right_value157 = (void*)0;
memset(&p_151, 0, sizeof(char*));
memset(&sline_152, 0, sizeof(int));
right_value158 = (void*)0;
right_value159 = (void*)0;
memset(&p_153, 0, sizeof(char*));
memset(&sline_154, 0, sizeof(int));
right_value160 = (void*)0;
right_value161 = (void*)0;
right_value162 = (void*)0;
memset(&p_155, 0, sizeof(char*));
memset(&sline_156, 0, sizeof(int));
right_value163 = (void*)0;
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
memset(&p_157, 0, sizeof(char*));
memset(&sline_158, 0, sizeof(int));
right_value167 = (void*)0;
right_value168 = (void*)0;
right_value169 = (void*)0;
memset(&p_159, 0, sizeof(char*));
memset(&sline_160, 0, sizeof(int));
right_value170 = (void*)0;
right_value171 = (void*)0;
right_value172 = (void*)0;
right_value173 = (void*)0;
right_value174 = (void*)0;
memset(&p_161, 0, sizeof(char*));
memset(&sline_162, 0, sizeof(int));
right_value175 = (void*)0;
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
memset(&exp_163, 0, sizeof(struct sNode*));
right_value179 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
right_value182 = (void*)0;
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value185 = (void*)0;
right_value186 = (void*)0;
memset(&p_164, 0, sizeof(char*));
memset(&sline_165, 0, sizeof(int));
right_value187 = (void*)0;
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
right_value192 = (void*)0;
memset(&p_166, 0, sizeof(char*));
memset(&sline_167, 0, sizeof(int));
right_value193 = (void*)0;
memset(&p_168, 0, sizeof(char*));
memset(&sline_169, 0, sizeof(int));
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value196 = (void*)0;
memset(&p_170, 0, sizeof(char*));
memset(&sline_171, 0, sizeof(int));
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
right_value200 = (void*)0;
right_value201 = (void*)0;
right_value202 = (void*)0;
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value205 = (void*)0;
memset(&p_172, 0, sizeof(char*));
memset(&sline_173, 0, sizeof(int));
right_value206 = (void*)0;
right_value207 = (void*)0;
memset(&pointer_num_174, 0, sizeof(int));
memset(&heap_175, 0, sizeof(_Bool));
memset(&lambda_flag_176, 0, sizeof(_Bool));
memset(&pX_177, 0, sizeof(char*));
memset(&slineX_178, 0, sizeof(int));
right_value208 = (void*)0;
memset(&type_179, 0, sizeof(struct sType*));
memset(&var_name_180, 0, sizeof(char*));
memset(&function_pointer_flag_181, 0, sizeof(_Bool));
memset(&p_182, 0, sizeof(char*));
memset(&sline_183, 0, sizeof(int));
right_value209 = (void*)0;
memset(&word_184, 0, sizeof(char*));
memset(&var_name_between_brace_185, 0, sizeof(_Bool));
memset(&p_186, 0, sizeof(char*));
memset(&sline_187, 0, sizeof(int));
right_value210 = (void*)0;
memset(&word_188, 0, sizeof(char*));
right_value211 = (void*)0;
right_value212 = (void*)0;
memset(&node_190, 0, sizeof(struct sNode*));
right_value213 = (void*)0;
right_value214 = (void*)0;
memset(&pointer_num_191, 0, sizeof(int));
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
right_value218 = (void*)0;
memset(&node_192, 0, sizeof(struct sNode*));
right_value219 = (void*)0;
right_value220 = (void*)0;
right_value221 = (void*)0;
right_value222 = (void*)0;
right_value223 = (void*)0;
right_value224 = (void*)0;
memset(&node_193, 0, sizeof(struct sNode*));
right_value225 = (void*)0;
right_value226 = (void*)0;
memset(&pointer_num_194, 0, sizeof(int));
right_value227 = (void*)0;
right_value228 = (void*)0;
right_value229 = (void*)0;
right_value230 = (void*)0;
right_value231 = (void*)0;
right_value232 = (void*)0;
right_value233 = (void*)0;
right_value234 = (void*)0;
memset(&no_comma_197, 0, sizeof(_Bool));
right_value235 = (void*)0;
memset(&node_198, 0, sizeof(struct sNode*));
memset(&result_type_199, 0, sizeof(struct sType*));
right_value236 = (void*)0;
memset(&i_208, 0, sizeof(int));
right_value237 = (void*)0;
right_value238 = (void*)0;
right_value239 = (void*)0;
memset(&i_212, 0, sizeof(int));
right_value240 = (void*)0;
right_value241 = (void*)0;
right_value242 = (void*)0;
right_value243 = (void*)0;
right_value244 = (void*)0;
right_value245 = (void*)0;
right_value246 = (void*)0;
memset(&param_types_213, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_214, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_215, 0, sizeof(struct list$1charph*));
memset(&var_args_216, 0, sizeof(_Bool));
memset(&param_types_213, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_214, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_215, 0, sizeof(struct list$1charph*));
memset(&var_args_216, 0, sizeof(_Bool));
right_value247 = (void*)0;
right_value248 = (void*)0;
right_value249 = (void*)0;
right_value250 = (void*)0;
memset(&result_type_217, 0, sizeof(struct sType*));
right_value251 = (void*)0;
memset(&i_218, 0, sizeof(int));
right_value252 = (void*)0;
right_value253 = (void*)0;
right_value254 = (void*)0;
memset(&i_219, 0, sizeof(int));
right_value255 = (void*)0;
right_value256 = (void*)0;
right_value257 = (void*)0;
right_value258 = (void*)0;
right_value259 = (void*)0;
right_value260 = (void*)0;
right_value261 = (void*)0;
right_value262 = (void*)0;
right_value263 = (void*)0;
right_value264 = (void*)0;
memset(&param_types_221, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_222, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_223, 0, sizeof(struct list$1charph*));
memset(&var_args_224, 0, sizeof(_Bool));
memset(&param_types_221, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_222, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_223, 0, sizeof(struct list$1charph*));
memset(&var_args_224, 0, sizeof(_Bool));
right_value265 = (void*)0;
right_value266 = (void*)0;
right_value267 = (void*)0;
right_value268 = (void*)0;
right_value269 = (void*)0;
memset(&exp_225, 0, sizeof(struct sNode*));
right_value270 = (void*)0;
right_value271 = (void*)0;
right_value272 = (void*)0;
memset(&come_value_226, 0, sizeof(struct CVALUE*));
right_value273 = (void*)0;
right_value274 = (void*)0;
right_value275 = (void*)0;
right_value276 = (void*)0;
right_value277 = (void*)0;
memset(&no_comma_229, 0, sizeof(_Bool));
right_value278 = (void*)0;
memset(&node_230, 0, sizeof(struct sNode*));
right_value279 = (void*)0;
right_value280 = (void*)0;
memset(&i_231, 0, sizeof(int));
right_value281 = (void*)0;
right_value282 = (void*)0;
right_value283 = (void*)0;
memset(&i_232, 0, sizeof(int));
right_value284 = (void*)0;
right_value285 = (void*)0;
right_value286 = (void*)0;
right_value287 = (void*)0;
right_value288 = (void*)0;
right_value289 = (void*)0;
right_value290 = (void*)0;
right_value291 = (void*)0;
memset(&generics_type_238, 0, sizeof(struct sType*));
memset(&var_name_239, 0, sizeof(char*));
memset(&err_240, 0, sizeof(_Bool));
memset(&generics_type_238, 0, sizeof(struct sType*));
memset(&var_name_239, 0, sizeof(char*));
memset(&err_240, 0, sizeof(_Bool));
right_value292 = (void*)0;
right_value293 = (void*)0;
right_value294 = (void*)0;
right_value295 = (void*)0;
right_value296 = (void*)0;
right_value297 = (void*)0;
memset(&new_name_241, 0, sizeof(char*));
memset(&klass_242, 0, sizeof(struct sClass*));
right_value304 = (void*)0;
right_value305 = (void*)0;
right_value306 = (void*)0;
right_value307 = (void*)0;
right_value308 = (void*)0;
right_value309 = (void*)0;
memset(&types_287, 0, sizeof(struct list$1sTypeph*));
right_value310 = (void*)0;
right_value311 = (void*)0;
memset(&type2_288, 0, sizeof(struct sType*));
memset(&name_289, 0, sizeof(char*));
memset(&err_290, 0, sizeof(_Bool));
memset(&type2_288, 0, sizeof(struct sType*));
memset(&name_289, 0, sizeof(char*));
memset(&err_290, 0, sizeof(_Bool));
right_value312 = (void*)0;
right_value313 = (void*)0;
right_value314 = (void*)0;
memset(&num_tuples_291, 0, sizeof(int));
right_value315 = (void*)0;
right_value316 = (void*)0;
right_value317 = (void*)0;
memset(&o2_saved_292, 0, sizeof(struct list$1sTypeph*));
memset(&it_293, 0, sizeof(struct sType*));
right_value318 = (void*)0;
right_value319 = (void*)0;
right_value320 = (void*)0;
memset(&new_name_294, 0, sizeof(char*));
right_value321 = (void*)0;
right_value322 = (void*)0;
memset(&types_295, 0, sizeof(struct list$1sTypeph*));
right_value323 = (void*)0;
right_value324 = (void*)0;
memset(&type2_296, 0, sizeof(struct sType*));
memset(&name_297, 0, sizeof(char*));
memset(&err_298, 0, sizeof(_Bool));
memset(&type2_296, 0, sizeof(struct sType*));
memset(&name_297, 0, sizeof(char*));
memset(&err_298, 0, sizeof(_Bool));
right_value325 = (void*)0;
right_value326 = (void*)0;
right_value327 = (void*)0;
right_value328 = (void*)0;
memset(&heap_299, 0, sizeof(_Bool));
memset(&o2_saved_300, 0, sizeof(struct list$1sTypeph*));
memset(&it_301, 0, sizeof(struct sType*));
right_value329 = (void*)0;
right_value330 = (void*)0;
right_value331 = (void*)0;
right_value332 = (void*)0;
right_value333 = (void*)0;
right_value334 = (void*)0;
memset(&new_name_302, 0, sizeof(char*));
right_value335 = (void*)0;
right_value336 = (void*)0;
right_value337 = (void*)0;
right_value338 = (void*)0;
memset(&no_comma_305, 0, sizeof(_Bool));
right_value339 = (void*)0;
memset(&node_306, 0, sizeof(struct sNode*));
right_value340 = (void*)0;
memset(&node_307, 0, sizeof(struct sNode*));
right_value341 = (void*)0;
memset(&asm_name_308, 0, sizeof(char*));
right_value342 = (void*)0;
right_value343 = (void*)0;
    head_127=info->p;
    head_sline_128=info->sline;
    info->define_struct=(_Bool)0;
    type_name_129=(char*)come_increment_ref_count(((char*)(right_value152=parse_word(info))));
    right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    while(_while_condtional27=string_operator_equals(type_name_129,"__extension__"),    _while_condtional27) {
        __dec_obj69=type_name_129;
        type_name_129=(char*)come_increment_ref_count(((char*)(right_value153=parse_word(info))));
        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    constant_130=(_Bool)0;
    static__131=(_Bool)0;
    volatile__132=(_Bool)0;
    register__133=(_Bool)0;
    unsigned__134=(_Bool)0;
    long__135=(_Bool)0;
    long_long_136=(_Bool)0;
    short__137=(_Bool)0;
    restrict__138=(_Bool)0;
    struct__139=(_Bool)0;
    union__140=(_Bool)0;
    enum__141=(_Bool)0;
    no_heap_142=(_Bool)0;
    extern__143=(_Bool)0;
    inline__144=(_Bool)0;
    come_mem_core__145=(_Bool)0;
    alignas__146=((void*)0);
    anonymous_type_147=(_Bool)0;
    anonymous_name_148=(_Bool)0;
    while(_while_condtional28=(_Bool)1,    _while_condtional28) {
        if(_if_conditional271=string_operator_equals(type_name_129,"struct"),        _if_conditional271) {
            struct__139=(_Bool)1;
            if(_if_conditional272=*info->p==123,            _if_conditional272) {
                p_149=info->p;
                sline_150=info->sline;
                ((char*)(right_value154=skip_block(info)));
                right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional273=*info->p==59,                _if_conditional273) {
                    anonymous_name_148=(_Bool)1;
                    anonymous_type_147=(_Bool)1;
                    __dec_obj70=type_name_129;
                    type_name_129=(char*)come_increment_ref_count(((char*)(right_value155=__builtin_string(""))));
                    __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    info->p=p_149;
                    info->sline=sline_150;
                    break;
                }
                else {
                    anonymous_type_147=(_Bool)1;
                    __dec_obj71=type_name_129;
                    type_name_129=(char*)come_increment_ref_count(((char*)(right_value156=__builtin_string(""))));
                    __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    info->p=p_149;
                    info->sline=sline_150;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj72=type_name_129;
            type_name_129=(char*)come_increment_ref_count(((char*)(right_value157=parse_word(info))));
            __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            parse_sharp_v5(info);
            if(_if_conditional274=*info->p==60,            _if_conditional274) {
                p_151=info->p;
                sline_152=info->sline;
                info->p++;
                skip_spaces_and_lf(info);
                while(_while_condtional29=(_Bool)1,                _while_condtional29) {
                    if(_if_conditional275=*info->p==62,                    _if_conditional275) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(_if_conditional276=*info->p==123,                        _if_conditional276) {
                        }
                        else {
                            info->p=p_151;
                            info->sline=sline_152;
                        }
                        break;
                    }
                    else {
                        if(_if_conditional277=*info->p==0,                        _if_conditional277) {
                            err_msg(info,"invalid struct definition");
                            __result82__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value159=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value158=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1076, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            type_name_129 = come_decrement_ref_count2(type_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__146) { alignas__146 = come_decrement_ref_count2(alignas__146, ((struct sNode*)alignas__146)->finalize, ((struct sNode*)alignas__146)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            return __result82__;
                        }
                        else {
                            info->p++;
                        }
                    }
                }
            }
            if(_if_conditional278=*info->p==123,            _if_conditional278) {
                p_153=info->p;
                sline_154=info->sline;
                ((char*)(right_value160=skip_block(info)));
                right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional279=*info->p==59,                _if_conditional279) {
                    info->p=head_127;
                    info->sline=head_sline_128;
                    info->define_struct=(_Bool)1;
                    __result83__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value162=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value161=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1094, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    type_name_129 = come_decrement_ref_count2(type_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__146) { alignas__146 = come_decrement_ref_count2(alignas__146, ((struct sNode*)alignas__146)->finalize, ((struct sNode*)alignas__146)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    return __result83__;
                }
                else {
                    anonymous_type_147=(_Bool)1;
                    info->p=p_153;
                    info->sline=sline_154;
                    break;
                }
            }
        }
        else {
            if(_if_conditional280=string_operator_equals(type_name_129,"union"),            _if_conditional280) {
                union__140=(_Bool)1;
                if(_if_conditional281=*info->p==123,                _if_conditional281) {
                    p_155=info->p;
                    sline_156=info->sline;
                    ((char*)(right_value163=skip_block(info)));
                    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(_if_conditional282=*info->p==59,                    _if_conditional282) {
                        info->p=head_127;
                        info->sline=head_sline_128;
                        info->define_struct=(_Bool)0;
                        anonymous_type_147=(_Bool)1;
                        __dec_obj75=type_name_129;
                        type_name_129=(char*)come_increment_ref_count(((char*)(right_value164=__builtin_string(""))));
                        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        info->p=p_155;
                        info->sline=sline_156;
                        break;
                    }
                    else {
                        anonymous_type_147=(_Bool)1;
                        __dec_obj76=type_name_129;
                        type_name_129=(char*)come_increment_ref_count(((char*)(right_value165=__builtin_string(""))));
                        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        info->p=p_155;
                        info->sline=sline_156;
                        break;
                    }
                }
                parse_sharp_v5(info);
                __dec_obj77=type_name_129;
                type_name_129=(char*)come_increment_ref_count(((char*)(right_value166=parse_word(info))));
                __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                parse_sharp_v5(info);
                if(_if_conditional283=*info->p==123,                _if_conditional283) {
                    p_157=info->p;
                    sline_158=info->sline;
                    ((char*)(right_value167=skip_block(info)));
                    right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(_if_conditional284=*info->p==59,                    _if_conditional284) {
                        info->p=head_127;
                        info->sline=head_sline_128;
                        info->define_struct=(_Bool)1;
                        __result84__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value169=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value168=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1149, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        type_name_129 = come_decrement_ref_count2(type_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__146) { alignas__146 = come_decrement_ref_count2(alignas__146, ((struct sNode*)alignas__146)->finalize, ((struct sNode*)alignas__146)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        return __result84__;
                    }
                    else {
                        anonymous_type_147=(_Bool)1;
                        info->p=p_157;
                        info->sline=sline_158;
                        break;
                    }
                }
            }
            else {
                if(_if_conditional285=string_operator_equals(type_name_129,"enum"),                _if_conditional285) {
                    enum__141=(_Bool)1;
                    parse_sharp_v5(info);
                    if(_if_conditional286=*info->p==123,                    _if_conditional286) {
                        p_159=info->p;
                        sline_160=info->sline;
                        ((char*)(right_value170=skip_block(info)));
                        right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional287=*info->p==59,                        _if_conditional287) {
                            info->p=head_127;
                            info->sline=head_sline_128;
                            info->define_struct=(_Bool)1;
                            __result85__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value172=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value171=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1174, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            type_name_129 = come_decrement_ref_count2(type_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__146) { alignas__146 = come_decrement_ref_count2(alignas__146, ((struct sNode*)alignas__146)->finalize, ((struct sNode*)alignas__146)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            return __result85__;
                        }
                        else {
                            anonymous_type_147=(_Bool)1;
                            __dec_obj78=type_name_129;
                            type_name_129=(char*)come_increment_ref_count(((char*)(right_value173=__builtin_string(""))));
                            __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            info->p=p_159;
                            info->sline=sline_160;
                            break;
                        }
                    }
                    parse_sharp_v5(info);
                    __dec_obj79=type_name_129;
                    type_name_129=(char*)come_increment_ref_count(((char*)(right_value174=parse_word(info))));
                    __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    parse_sharp_v5(info);
                    if(_if_conditional288=*info->p==123,                    _if_conditional288) {
                        p_161=info->p;
                        sline_162=info->sline;
                        ((char*)(right_value175=skip_block(info)));
                        right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional289=*info->p==59,                        _if_conditional289) {
                            info->p=head_127;
                            info->sline=head_sline_128;
                            info->define_struct=(_Bool)1;
                            __result86__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value177=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value176=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1201, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            type_name_129 = come_decrement_ref_count2(type_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__146) { alignas__146 = come_decrement_ref_count2(alignas__146, ((struct sNode*)alignas__146)->finalize, ((struct sNode*)alignas__146)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            return __result86__;
                        }
                        else {
                            anonymous_type_147=(_Bool)1;
                            info->p=p_161;
                            info->sline=sline_162;
                            break;
                        }
                    }
                }
                else {
                    if(_if_conditional290=string_operator_equals(type_name_129,"_Alignas"),                    _if_conditional290) {
                        expected_next_character(40,info);
                        exp_163=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value178=expression_v13(info))));
                        if(right_value178) { right_value178 = come_decrement_ref_count2(right_value178, ((struct sNode*)right_value178)->finalize, ((struct sNode*)right_value178)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        __dec_obj80=alignas__146;
                        alignas__146=(struct sNode*)come_increment_ref_count(exp_163);
                        if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count2(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0,0,0, (void*)0); }
                        expected_next_character(41,info);
                        __dec_obj81=type_name_129;
                        type_name_129=(char*)come_increment_ref_count(((char*)(right_value179=parse_word(info))));
                        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(exp_163) { exp_163 = come_decrement_ref_count2(exp_163, ((struct sNode*)exp_163)->finalize, ((struct sNode*)exp_163)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(_if_conditional291=string_operator_equals(type_name_129,"const"),                        _if_conditional291) {
                            constant_130=(_Bool)1;
                            __dec_obj82=type_name_129;
                            type_name_129=(char*)come_increment_ref_count(((char*)(right_value180=parse_word(info))));
                            __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            if(_if_conditional292=string_operator_equals(type_name_129,"static"),                            _if_conditional292) {
                                static__131=(_Bool)1;
                                __dec_obj83=type_name_129;
                                type_name_129=(char*)come_increment_ref_count(((char*)(right_value181=parse_word(info))));
                                __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                if(_if_conditional293=string_operator_equals(type_name_129,"come_mem_core"),                                _if_conditional293) {
                                    come_mem_core__145=(_Bool)1;
                                    __dec_obj84=type_name_129;
                                    type_name_129=(char*)come_increment_ref_count(((char*)(right_value182=parse_word(info))));
                                    __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    if(_if_conditional294=string_operator_equals(type_name_129,"extern"),                                    _if_conditional294) {
                                        extern__143=(_Bool)1;
                                        __dec_obj85=type_name_129;
                                        type_name_129=(char*)come_increment_ref_count(((char*)(right_value183=parse_word(info))));
                                        __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    else {
                                        if(_if_conditional295=string_operator_equals(type_name_129,"_Noreturn"),                                        _if_conditional295) {
                                            __dec_obj86=type_name_129;
                                            type_name_129=(char*)come_increment_ref_count(((char*)(right_value184=parse_word(info))));
                                            __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        else {
                                            if(_if_conditional296=string_operator_equals(type_name_129,"inline")||string_operator_equals(type_name_129,"__inline")||string_operator_equals(type_name_129,"__inline__")||string_operator_equals(type_name_129,"__always_inline"),                                            _if_conditional296) {
                                                inline__144=(_Bool)1;
                                                __dec_obj87=type_name_129;
                                                type_name_129=(char*)come_increment_ref_count(((char*)(right_value185=parse_word(info))));
                                                __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            else {
                                                if(_if_conditional297=string_operator_equals(type_name_129,"volatile"),                                                _if_conditional297) {
                                                    volatile__132=(_Bool)1;
                                                    __dec_obj88=type_name_129;
                                                    type_name_129=(char*)come_increment_ref_count(((char*)(right_value186=parse_word(info))));
                                                    __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                else {
                                                    if(_if_conditional298=string_operator_equals(type_name_129,"long"),                                                    _if_conditional298) {
                                                        {
                                                            p_164=info->p;
                                                            sline_165=info->sline;
                                                            if(_if_conditional299=!xisalpha(*info->p),                                                            _if_conditional299) {
                                                                info->p=p_164;
                                                                info->sline=sline_165;
                                                                __dec_obj89=type_name_129;
                                                                type_name_129=(char*)come_increment_ref_count(((char*)(right_value187=__builtin_string("long"))));
                                                                __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                break;
                                                            }
                                                            else {
                                                                __dec_obj90=type_name_129;
                                                                type_name_129=(char*)come_increment_ref_count(((char*)(right_value188=parse_word(info))));
                                                                __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                if(_if_conditional300=string_operator_equals(type_name_129,"unsigned"),                                                                _if_conditional300) {
                                                                    __dec_obj91=type_name_129;
                                                                    type_name_129=(char*)come_increment_ref_count(((char*)(right_value189=parse_word(info))));
                                                                    __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    if(_if_conditional301=string_operator_equals(type_name_129,"int"),                                                                    _if_conditional301) {
                                                                        long__135=(_Bool)1;
                                                                        break;
                                                                    }
                                                                }
                                                                else {
                                                                    if(_if_conditional302=string_operator_equals(type_name_129,"long"),                                                                    _if_conditional302) {
                                                                        p_164=info->p;
                                                                        sline_165=info->sline;
                                                                        if(_if_conditional303=xisalpha(*info->p),                                                                        _if_conditional303) {
                                                                            long_long_136=(_Bool)1;
                                                                            __dec_obj92=type_name_129;
                                                                            type_name_129=(char*)come_increment_ref_count(((char*)(right_value190=parse_word(info))));
                                                                            __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        }
                                                                        else {
                                                                            long__135=(_Bool)1;
                                                                            break;
                                                                        }
                                                                        if(_if_conditional304=string_operator_equals(type_name_129,"int"),                                                                        _if_conditional304) {
                                                                            long_long_136=(_Bool)1;
                                                                            break;
                                                                        }
                                                                        else {
                                                                            if(_if_conditional305=!is_type_name(type_name_129,info),                                                                            _if_conditional305) {
                                                                                __dec_obj93=type_name_129;
                                                                                type_name_129=(char*)come_increment_ref_count(((char*)(right_value191=__builtin_string("long"))));
                                                                                __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                long_long_136=(_Bool)1;
                                                                                info->p=p_164;
                                                                                info->sline=sline_165;
                                                                                break;
                                                                            }
                                                                        }
                                                                    }
                                                                    else {
                                                                        if(_if_conditional306=is_type_name(type_name_129,info),                                                                        _if_conditional306) {
                                                                            if(long__135) {
                                                                                long_long_136=(_Bool)1;
                                                                                long__135=(_Bool)0;
                                                                            }
                                                                            else {
                                                                                long__135=(_Bool)1;
                                                                            }
                                                                            break;
                                                                        }
                                                                        else {
                                                                            info->p=p_164;
                                                                            info->sline=sline_165;
                                                                            __dec_obj94=type_name_129;
                                                                            type_name_129=(char*)come_increment_ref_count(((char*)(right_value192=__builtin_string("long"))));
                                                                            __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            break;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        if(_if_conditional308=string_operator_equals(type_name_129,"unsigned"),                                                        _if_conditional308) {
                                                            unsigned__134=(_Bool)1;
                                                            if(_if_conditional309=xisalpha(*info->p)||*info->p==95,                                                            _if_conditional309) {
                                                                p_166=info->p;
                                                                sline_167=info->sline;
                                                                __dec_obj95=type_name_129;
                                                                type_name_129=(char*)come_increment_ref_count(((char*)(right_value193=parse_word(info))));
                                                                __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                if(_if_conditional310=string_operator_equals(type_name_129,"short"),                                                                _if_conditional310) {
                                                                    if(_if_conditional311=xisalpha(*info->p)||*info->p==95,                                                                    _if_conditional311) {
                                                                        p_168=info->p;
                                                                        sline_169=info->sline;
                                                                        __dec_obj96=type_name_129;
                                                                        type_name_129=(char*)come_increment_ref_count(((char*)(right_value194=parse_word(info))));
                                                                        __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                        right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        if(_if_conditional312=is_type_name(type_name_129,info),                                                                        _if_conditional312) {
                                                                            short__137=(_Bool)1;
                                                                        }
                                                                        else {
                                                                            short__137=(_Bool)1;
                                                                            __dec_obj97=type_name_129;
                                                                            type_name_129=(char*)come_increment_ref_count(((char*)(right_value195=__builtin_string("int"))));
                                                                            __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            info->p=p_168;
                                                                            info->sline=sline_169;
                                                                        }
                                                                    }
                                                                    else {
                                                                        short__137=(_Bool)1;
                                                                        __dec_obj98=type_name_129;
                                                                        type_name_129=(char*)come_increment_ref_count(((char*)(right_value196=__builtin_string("int"))));
                                                                        __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                        right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        break;
                                                                    }
                                                                }
                                                                else {
                                                                    if(_if_conditional313=string_operator_equals(type_name_129,"long"),                                                                    _if_conditional313) {
                                                                        if(_if_conditional314=xisalpha(*info->p)||*info->p==95,                                                                        _if_conditional314) {
                                                                            p_170=info->p;
                                                                            sline_171=info->sline;
                                                                            __dec_obj99=type_name_129;
                                                                            type_name_129=(char*)come_increment_ref_count(((char*)(right_value197=parse_word(info))));
                                                                            __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            if(_if_conditional315=is_type_name(type_name_129,info),                                                                            _if_conditional315) {
                                                                                long__135=(_Bool)1;
                                                                            }
                                                                            else {
                                                                                long__135=(_Bool)1;
                                                                                __dec_obj100=type_name_129;
                                                                                type_name_129=(char*)come_increment_ref_count(((char*)(right_value198=__builtin_string("int"))));
                                                                                __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                info->p=p_170;
                                                                                info->sline=sline_171;
                                                                            }
                                                                        }
                                                                        else {
                                                                            long__135=(_Bool)1;
                                                                            __dec_obj101=type_name_129;
                                                                            type_name_129=(char*)come_increment_ref_count(((char*)(right_value199=__builtin_string("int"))));
                                                                            __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            break;
                                                                        }
                                                                    }
                                                                    else {
                                                                        if(_if_conditional316=!is_type_name(type_name_129,info),                                                                        _if_conditional316) {
                                                                            __dec_obj102=type_name_129;
                                                                            type_name_129=(char*)come_increment_ref_count(((char*)(right_value200=__builtin_string("int"))));
                                                                            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            info->p=p_166;
                                                                            info->sline=sline_167;
                                                                            break;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            else {
                                                                __dec_obj103=type_name_129;
                                                                type_name_129=(char*)come_increment_ref_count(((char*)(right_value201=__builtin_string("int"))));
                                                                __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                break;
                                                            }
                                                        }
                                                        else {
                                                            if(_if_conditional317=string_operator_equals(type_name_129,"signed")||string_operator_equals(type_name_129,"__signed__"),                                                            _if_conditional317) {
                                                                unsigned__134=(_Bool)0;
                                                                __dec_obj104=type_name_129;
                                                                type_name_129=(char*)come_increment_ref_count(((char*)(right_value202=parse_word(info))));
                                                                __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            }
                                                            else {
                                                                if(_if_conditional318=string_operator_equals(type_name_129,"register"),                                                                _if_conditional318) {
                                                                    register__133=(_Bool)1;
                                                                    __dec_obj105=type_name_129;
                                                                    type_name_129=(char*)come_increment_ref_count(((char*)(right_value203=parse_word(info))));
                                                                    __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                }
                                                                else {
                                                                    if(_if_conditional319=string_operator_equals(type_name_129,"restrict"),                                                                    _if_conditional319) {
                                                                        restrict__138=(_Bool)1;
                                                                        __dec_obj106=type_name_129;
                                                                        type_name_129=(char*)come_increment_ref_count(((char*)(right_value204=parse_word(info))));
                                                                        __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                        right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    }
                                                                    else {
                                                                        if(_if_conditional320=string_operator_equals(type_name_129,"__restrict"),                                                                        _if_conditional320) {
                                                                            restrict__138=(_Bool)1;
                                                                            __dec_obj107=type_name_129;
                                                                            type_name_129=(char*)come_increment_ref_count(((char*)(right_value205=parse_word(info))));
                                                                            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        }
                                                                        else {
                                                                            if(_if_conditional321=string_operator_equals(type_name_129,"short"),                                                                            _if_conditional321) {
                                                                                short__137=(_Bool)1;
                                                                                if(_if_conditional322=*info->p==58,                                                                                _if_conditional322) {
                                                                                    break;
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional323=xisalnum(*info->p),                                                                                    _if_conditional323) {
                                                                                        p_172=info->p;
                                                                                        sline_173=info->sline;
                                                                                        __dec_obj108=type_name_129;
                                                                                        type_name_129=(char*)come_increment_ref_count(((char*)(right_value206=parse_word(info))));
                                                                                        __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                        right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                        if(_if_conditional324=string_operator_equals(type_name_129,"int"),                                                                                        _if_conditional324) {
                                                                                            break;
                                                                                        }
                                                                                        else {
                                                                                            if(_if_conditional325=string_operator_equals(type_name_129,"short"),                                                                                            _if_conditional325) {
                                                                                                short__137=(_Bool)0;
                                                                                                break;
                                                                                            }
                                                                                            else {
                                                                                                if(_if_conditional326=is_type_name(type_name_129,info),                                                                                                _if_conditional326) {
                                                                                                    info->p=p_172;
                                                                                                    info->sline=sline_173;
                                                                                                }
                                                                                                else {
                                                                                                    __dec_obj109=type_name_129;
                                                                                                    type_name_129=(char*)come_increment_ref_count(((char*)(right_value207=__builtin_string("short"))));
                                                                                                    __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                    info->p=p_172;
                                                                                                    info->sline=sline_173;
                                                                                                    break;
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                    else {
                                                                                        break;
                                                                                    }
                                                                                }
                                                                            }
                                                                            else {
                                                                                break;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    skip_pointer_attribute(info);
    pointer_num_174=0;
    while(_while_condtional30=*info->p==42,    _while_condtional30) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        pointer_num_174++;
    }
    heap_175=(_Bool)0;
    if(_if_conditional327=*info->p==37,    _if_conditional327) {
        info->p++;
        skip_spaces_and_lf(info);
        heap_175=(_Bool)1;
    }
    lambda_flag_176=(_Bool)0;
    {
        pX_177=info->p;
        slineX_178=info->sline;
        if(_if_conditional328=xisalpha(*info->p)||*info->p==95,        _if_conditional328) {
            (void)((char*)(right_value208=parse_word(info)));
            right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional329=*info->p==40&&info->in_typedef,            _if_conditional329) {
                lambda_flag_176=(_Bool)1;
            }
        }
        info->p=pX_177;
        info->sline=slineX_178;
    }
    function_pointer_flag_181=(_Bool)0;
    {
        p_182=info->p;
        sline_183=info->sline;
        if(_if_conditional330=*info->p==40,        _if_conditional330) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(_if_conditional331=*info->p==42||*info->p==94,            _if_conditional331) {
                function_pointer_flag_181=(_Bool)1;
            }
            else {
                if(_if_conditional332=xisalpha(*info->p)||*info->p==95,                _if_conditional332) {
                    word_184=(char*)come_increment_ref_count(((char*)(right_value209=parse_word(info))));
                    right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(_if_conditional333=*info->p==41,                    _if_conditional333) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(_if_conditional334=*info->p==40,                        _if_conditional334) {
                            function_pointer_flag_181=(_Bool)1;
                        }
                    }
                    word_184 = come_decrement_ref_count2(word_184, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        info->p=p_182;
        info->sline=sline_183;
    }
    var_name_between_brace_185=(_Bool)0;
    {
        p_186=info->p;
        sline_187=info->sline;
        if(_if_conditional335=*info->p==40,        _if_conditional335) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(_if_conditional336=xisalpha(*info->p)||*info->p==95,            _if_conditional336) {
                word_188=(char*)come_increment_ref_count(((char*)(right_value210=parse_word(info))));
                right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional337=is_type_name(word_188,info),                _if_conditional337) {
                }
                else {
                    if(_if_conditional338=*info->p==41,                    _if_conditional338) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(_if_conditional339=*info->p!=40,                        _if_conditional339) {
                            var_name_between_brace_185=(_Bool)1;
                        }
                    }
                }
                word_188 = come_decrement_ref_count2(word_188, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_186;
        info->sline=sline_187;
    }
    if(_if_conditional340=anonymous_type_147&&*info->p==123,    _if_conditional340) {
        if(struct__139) {
            if(_if_conditional342=string_operator_equals(type_name_129,""),            _if_conditional342) {
                __dec_obj110=type_name_129;
                type_name_129=(char*)come_increment_ref_count(((char*)(right_value211=xsprintf("anonymous_typeX%d",++anonymous_num_189))));
                __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            node_190=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value212=parse_struct((char*)come_increment_ref_count(type_name_129),info))));
            if(right_value212) { right_value212 = come_decrement_ref_count2(right_value212, ((struct sNode*)right_value212)->finalize, ((struct sNode*)right_value212)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            if(_if_conditional343=!node_compile(node_190,info),            _if_conditional343) {
                err_msg(info,"parse_struct is failed");
                __result87__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value214=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value213=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1564, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                if(node_190) { node_190 = come_decrement_ref_count2(node_190, ((struct sNode*)node_190)->finalize, ((struct sNode*)node_190)->_protocol_obj, 0, 0, 0, (void*)0); } 
                type_name_129 = come_decrement_ref_count2(type_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__146) { alignas__146 = come_decrement_ref_count2(alignas__146, ((struct sNode*)alignas__146)->finalize, ((struct sNode*)alignas__146)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sType_finalize,type_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                var_name_180 = come_decrement_ref_count2(var_name_180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                return __result87__;
            }
            pointer_num_191=0;
            while(_while_condtional31=*info->p==42,            _while_condtional31) {
                info->p++;
                skip_spaces_and_lf(info);
                pointer_num_191++;
            }
            __dec_obj111=type_179;
            type_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value216=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value215=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1574, "struct sType")))),type_name_129,(_Bool)0,info))));
            come_call_finalizer2(sType_finalize,__dec_obj111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            type_179->mPointerNum=pointer_num_191;
            if(node_190) { node_190 = come_decrement_ref_count2(node_190, ((struct sNode*)node_190)->finalize, ((struct sNode*)node_190)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(enum__141) {
                if(_if_conditional345=string_operator_equals(type_name_129,""),                _if_conditional345) {
                    __dec_obj112=type_name_129;
                    type_name_129=(char*)come_increment_ref_count(((char*)(right_value217=xsprintf("anonymous_typeY%d",++anonymous_num_189))));
                    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                node_192=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value218=parse_enum((char*)come_increment_ref_count(type_name_129),info))));
                if(right_value218) { right_value218 = come_decrement_ref_count2(right_value218, ((struct sNode*)right_value218)->finalize, ((struct sNode*)right_value218)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                if(_if_conditional346=!info->no_output_err,                _if_conditional346) {
                    if(_if_conditional347=!node_compile(node_192,info),                    _if_conditional347) {
                        printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                        __result88__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value220=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value219=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1588, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(node_192) { node_192 = come_decrement_ref_count2(node_192, ((struct sNode*)node_192)->finalize, ((struct sNode*)node_192)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        type_name_129 = come_decrement_ref_count2(type_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__146) { alignas__146 = come_decrement_ref_count2(alignas__146, ((struct sNode*)alignas__146)->finalize, ((struct sNode*)alignas__146)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sType_finalize,type_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        var_name_180 = come_decrement_ref_count2(var_name_180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        return __result88__;
                    }
                }
                __dec_obj113=type_179;
                type_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value222=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value221=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1592, "struct sType")))),type_name_129,(_Bool)0,info))));
                come_call_finalizer2(sType_finalize,__dec_obj113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(node_192) { node_192 = come_decrement_ref_count2(node_192, ((struct sNode*)node_192)->finalize, ((struct sNode*)node_192)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(union__140) {
                    if(_if_conditional349=string_operator_equals(type_name_129,""),                    _if_conditional349) {
                        __dec_obj114=type_name_129;
                        type_name_129=(char*)come_increment_ref_count(((char*)(right_value223=xsprintf("anonymous_typeZ%d",++anonymous_num_189))));
                        __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    node_193=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value224=parse_union((char*)come_increment_ref_count(type_name_129),info))));
                    if(right_value224) { right_value224 = come_decrement_ref_count2(right_value224, ((struct sNode*)right_value224)->finalize, ((struct sNode*)right_value224)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    if(_if_conditional350=!node_compile(node_193,info),                    _if_conditional350) {
                        printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                        __result89__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value226=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value225=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1604, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(node_193) { node_193 = come_decrement_ref_count2(node_193, ((struct sNode*)node_193)->finalize, ((struct sNode*)node_193)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        type_name_129 = come_decrement_ref_count2(type_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__146) { alignas__146 = come_decrement_ref_count2(alignas__146, ((struct sNode*)alignas__146)->finalize, ((struct sNode*)alignas__146)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sType_finalize,type_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        var_name_180 = come_decrement_ref_count2(var_name_180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        return __result89__;
                    }
                    pointer_num_194=0;
                    while(_while_condtional32=*info->p==42,                    _while_condtional32) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        pointer_num_194++;
                    }
                    __dec_obj115=type_179;
                    type_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value228=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value227=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1615, "struct sType")))),type_name_129,(_Bool)0,info))));
                    come_call_finalizer2(sType_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sType_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    type_179->mPointerNum=pointer_num_194;
                    if(node_193) { node_193 = come_decrement_ref_count2(node_193, ((struct sNode*)node_193)->finalize, ((struct sNode*)node_193)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    err_msg(info,"unexpected { character");
                    __result90__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value230=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value229=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1621, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    type_name_129 = come_decrement_ref_count2(type_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__146) { alignas__146 = come_decrement_ref_count2(alignas__146, ((struct sNode*)alignas__146)->finalize, ((struct sNode*)alignas__146)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sType_finalize,type_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    var_name_180 = come_decrement_ref_count2(var_name_180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    return __result90__;
                }
            }
        }
        if(parse_variable_name) {
            parse_sharp_v5(info);
            if(_if_conditional352=var_name_between_brace_185&&*info->p==40,            _if_conditional352) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(_if_conditional353=*info->p==58,            _if_conditional353) {
                __dec_obj116=var_name_180;
                var_name_180=(char*)come_increment_ref_count(((char*)(right_value231=__builtin_string(""))));
                __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                if(anonymous_name_148) {
                    num_anonymous_var_name_195++;
                    __dec_obj117=var_name_180;
                    var_name_180=(char*)come_increment_ref_count(((char*)(right_value232=xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name_195))));
                    __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    if(_if_conditional355=xisalnum(*info->p)||*info->p==95,                    _if_conditional355) {
                        __dec_obj118=var_name_180;
                        var_name_180=(char*)come_increment_ref_count(((char*)(right_value233=parse_word(info))));
                        __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        num_anonymous_var_name_196++;
                        __dec_obj119=var_name_180;
                        var_name_180=(char*)come_increment_ref_count(((char*)(right_value234=xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_196))));
                        __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                }
            }
            if(_if_conditional356=var_name_between_brace_185&&*info->p==41,            _if_conditional356) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(_if_conditional357=*info->p==58,            _if_conditional357) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_197=info->no_comma;
                info->no_comma=(_Bool)1;
                node_198=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value235=expression_v13(info))));
                if(right_value235) { right_value235 = come_decrement_ref_count2(right_value235, ((struct sNode*)right_value235)->finalize, ((struct sNode*)right_value235)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                info->no_comma=no_comma_197;
                __dec_obj120=type_179->mSizeNum;
                type_179->mSizeNum=(struct sNode*)come_increment_ref_count(node_198);
                if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count2(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0,0, (void*)0); }
                if(node_198) { node_198 = come_decrement_ref_count2(node_198, ((struct sNode*)node_198)->finalize, ((struct sNode*)node_198)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
        }
    }
    else {
        if(lambda_flag_176) {
            if(_if_conditional363=map$2charphsTypephp_operator_load_element(info->types,type_name_129),            _if_conditional363) {
                __dec_obj121=result_type_199;
                result_type_199=(struct sType*)come_increment_ref_count(((struct sType*)(right_value236=sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_129)))));
                come_call_finalizer2(sType_finalize,__dec_obj121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            else {
                if(_if_conditional369=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_129)),                _if_conditional369) {
                    for(                    i_208=0;                    i_208<list$1charph_length(info->generics_type_names);                    i_208++                    ){
                        if(_if_conditional372=string_operator_equals(list$1charphp_operator_load_element(info->generics_type_names,i_208),type_name_129),                        _if_conditional372) {
                            __dec_obj122=result_type_199;
                            result_type_199=(struct sType*)come_increment_ref_count(((struct sType*)(right_value239=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value237=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1674, "struct sType")))),((char*)(right_value238=xsprintf("generics_type%d",i_208))),(_Bool)0,info))));
                            come_call_finalizer2(sType_finalize,__dec_obj122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sType_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                    }
                }
                else {
                    if(_if_conditional373=list$1charph_contained(info->method_generics_type_names,(char*)come_increment_ref_count(type_name_129)),                    _if_conditional373) {
                        for(                        i_212=0;                        i_212<list$1charph_length(info->method_generics_type_names);                        i_212++                        ){
                            if(_if_conditional374=string_operator_equals(list$1charphp_operator_load_element(info->method_generics_type_names,i_212),type_name_129),                            _if_conditional374) {
                                __dec_obj123=result_type_199;
                                result_type_199=(struct sType*)come_increment_ref_count(((struct sType*)(right_value242=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value240=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1681, "struct sType")))),((char*)(right_value241=xsprintf("mgenerics_type%d",i_212))),(_Bool)0,info))));
                                come_call_finalizer2(sType_finalize,__dec_obj123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sType_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            }
                        }
                    }
                    else {
                        __dec_obj124=result_type_199;
                        result_type_199=(struct sType*)come_increment_ref_count(((struct sType*)(right_value244=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value243=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1686, "struct sType")))),type_name_129,(_Bool)0,info))));
                        come_call_finalizer2(sType_finalize,__dec_obj124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sType_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                }
            }
            result_type_199->mConstant=result_type_199->mConstant||constant_130;
            __dec_obj125=result_type_199->mAlignas;
            result_type_199->mAlignas=(struct sNode*)come_increment_ref_count(alignas__146);
            if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count2(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0,0,0, (void*)0); }
            result_type_199->mComeMemCore=result_type_199->mComeMemCore||come_mem_core__145;
            result_type_199->mRegister=register__133;
            result_type_199->mUnsigned=result_type_199->mUnsigned||unsigned__134;
            result_type_199->mVolatile=volatile__132;
            result_type_199->mStatic=result_type_199->mStatic||static__131;
            result_type_199->mExtern=result_type_199->mExtern||extern__143;
            result_type_199->mInline=result_type_199->mInline||inline__144;
            result_type_199->mRestrict=result_type_199->mRestrict||restrict__138;
            result_type_199->mLongLong=result_type_199->mLongLong||long_long_136;
            result_type_199->mLong=result_type_199->mLong||long__135;
            result_type_199->mShort=result_type_199->mShort||short__137;
            result_type_199->mPointerNum=pointer_num_174;
            result_type_199->mHeap=result_type_199->mHeap||heap_175;
            __dec_obj126=var_name_180;
            var_name_180=(char*)come_increment_ref_count(((char*)(right_value245=parse_word(info))));
            __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            multiple_assign_var2=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value246=parse_params(info)));
            param_types_213=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var2->v1);
            param_names_214=(struct list$1charph*)come_increment_ref_count(multiple_assign_var2->v2);
            param_default_parametors_215=(struct list$1charph*)come_increment_ref_count(multiple_assign_var2->v3);
            var_args_216=multiple_assign_var2->v4;
            come_call_finalizer2(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj127=type_179;
            type_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value248=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value247=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1709, "struct sType")))),"lambda",(_Bool)0,info))));
            come_call_finalizer2(sType_finalize,__dec_obj127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj129=type_179->mResultType;
            type_179->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value250=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value249=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function4.c", 1711, "struct tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_199)))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj130=type_179->mParamTypes;
            type_179->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_213);
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            __dec_obj131=type_179->mParamNames;
            type_179->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_214);
            come_call_finalizer2(list$1charph_finalize,__dec_obj131, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            type_179->mVarArgs=var_args_216;
            type_179->mExtern=extern__143;
            come_call_finalizer2(sType_finalize,result_type_199, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,param_types_213, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,param_names_214, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,param_default_parametors_215, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(function_pointer_flag_181) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                if(_if_conditional376=*info->p==42||*info->p==94,                _if_conditional376) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                skip_pointer_attribute(info);
                if(_if_conditional377=map$2charphsTypephp_operator_load_element(info->types,type_name_129),                _if_conditional377) {
                    __dec_obj132=result_type_217;
                    result_type_217=(struct sType*)come_increment_ref_count(((struct sType*)(right_value251=sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_129)))));
                    come_call_finalizer2(sType_finalize,__dec_obj132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                else {
                    if(_if_conditional378=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_129)),                    _if_conditional378) {
                        for(                        i_218=0;                        i_218<list$1charph_length(info->generics_type_names);                        i_218++                        ){
                            if(_if_conditional379=string_operator_equals(list$1charphp_operator_load_element(info->generics_type_names,i_218),type_name_129),                            _if_conditional379) {
                                __dec_obj133=result_type_217;
                                result_type_217=(struct sType*)come_increment_ref_count(((struct sType*)(right_value254=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value252=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1738, "struct sType")))),((char*)(right_value253=xsprintf("generics_type%d",i_218))),(_Bool)0,info))));
                                come_call_finalizer2(sType_finalize,__dec_obj133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                right_value253 = come_decrement_ref_count2(right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sType_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            }
                        }
                    }
                    else {
                        if(_if_conditional380=list$1charph_contained(info->method_generics_type_names,(char*)come_increment_ref_count(type_name_129)),                        _if_conditional380) {
                            for(                            i_219=0;                            i_219<list$1charph_length(info->method_generics_type_names);                            i_219++                            ){
                                if(_if_conditional381=string_operator_equals(list$1charphp_operator_load_element(info->method_generics_type_names,i_219),type_name_129),                                _if_conditional381) {
                                    __dec_obj134=result_type_217;
                                    result_type_217=(struct sType*)come_increment_ref_count(((struct sType*)(right_value257=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value255=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1745, "struct sType")))),((char*)(right_value256=xsprintf("mgenerics_type%d",i_219))),(_Bool)0,info))));
                                    come_call_finalizer2(sType_finalize,__dec_obj134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(sType_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sType_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                }
                            }
                        }
                        else {
                            __dec_obj135=result_type_217;
                            result_type_217=(struct sType*)come_increment_ref_count(((struct sType*)(right_value259=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value258=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1750, "struct sType")))),type_name_129,(_Bool)0,info))));
                            come_call_finalizer2(sType_finalize,__dec_obj135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sType_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                    }
                }
                result_type_217->mConstant=result_type_217->mConstant||constant_130;
                __dec_obj136=result_type_217->mAlignas;
                result_type_217->mAlignas=(struct sNode*)come_increment_ref_count(alignas__146);
                if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count2(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0,0, (void*)0); }
                result_type_217->mComeMemCore=result_type_217->mComeMemCore||come_mem_core__145;
                result_type_217->mRegister=register__133;
                result_type_217->mUnsigned=result_type_217->mUnsigned||unsigned__134;
                result_type_217->mVolatile=volatile__132;
                result_type_217->mStatic=result_type_217->mStatic||static__131;
                result_type_217->mExtern=result_type_217->mExtern||extern__143;
                result_type_217->mInline=result_type_217->mInline||inline__144;
                result_type_217->mRestrict=result_type_217->mRestrict||restrict__138;
                result_type_217->mLongLong=result_type_217->mLongLong||long_long_136;
                result_type_217->mLong=result_type_217->mLong||long__135;
                result_type_217->mShort=result_type_217->mShort||short__137;
                result_type_217->mPointerNum+=pointer_num_174;
                result_type_217->mHeap=result_type_217->mHeap||heap_175;
                if(_if_conditional382=xisalnum(*info->p)||*info->p==95,                _if_conditional382) {
                    __dec_obj137=var_name_180;
                    var_name_180=(char*)come_increment_ref_count(((char*)(right_value260=parse_word(info))));
                    __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value260 = come_decrement_ref_count2(right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(_if_conditional383=*info->p==40,                    _if_conditional383) {
                        __result108__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value262=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value261=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1772, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count(result_type_217),(char*)come_increment_ref_count(var_name_180),(_Bool)0)));
                        come_call_finalizer2(sType_finalize,result_type_217, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        type_name_129 = come_decrement_ref_count2(type_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__146) { alignas__146 = come_decrement_ref_count2(alignas__146, ((struct sNode*)alignas__146)->finalize, ((struct sNode*)alignas__146)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sType_finalize,type_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        var_name_180 = come_decrement_ref_count2(var_name_180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        return __result108__;
                    }
                }
                else {
                    num_anonymous_var_name_220++;
                    __dec_obj138=var_name_180;
                    var_name_180=(char*)come_increment_ref_count(((char*)(right_value263=xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name_220))));
                    __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                expected_next_character(41,info);
                multiple_assign_var3=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value264=parse_params(info)));
                param_types_221=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var3->v1);
                param_names_222=(struct list$1charph*)come_increment_ref_count(multiple_assign_var3->v2);
                param_default_parametors_223=(struct list$1charph*)come_increment_ref_count(multiple_assign_var3->v3);
                var_args_224=multiple_assign_var3->v4;
                come_call_finalizer2(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                __dec_obj139=type_179;
                type_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value266=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value265=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1784, "struct sType")))),"lambda",(_Bool)0,info))));
                come_call_finalizer2(sType_finalize,__dec_obj139, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                __dec_obj140=type_179->mResultType;
                type_179->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value268=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value267=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function4.c", 1786, "struct tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_217)))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                __dec_obj141=type_179->mParamTypes;
                type_179->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_221);
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                __dec_obj142=type_179->mParamNames;
                type_179->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_222);
                come_call_finalizer2(list$1charph_finalize,__dec_obj142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                type_179->mVarArgs=var_args_224;
                type_179->mExtern=extern__143;
                come_call_finalizer2(sType_finalize,result_type_217, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_221, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_names_222, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_default_parametors_223, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(_if_conditional384=string_operator_equals(type_name_129,"__typeof__")&&*info->p==40,                _if_conditional384) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    exp_225=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value269=expression_v13(info))));
                    if(right_value269) { right_value269 = come_decrement_ref_count2(right_value269, ((struct sNode*)right_value269)->finalize, ((struct sNode*)right_value269)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    expected_next_character(41,info);
                    if(_if_conditional385=!node_compile(exp_225,info),                    _if_conditional385) {
                        err_msg(info,"invalid __typeof__ expression");
                        __result110__ = __result_obj__ = ((struct tuple3$3voidpvoidpbool*)(right_value271=tuple3$3voidpvoidpbool_initialize((struct tuple3$3voidpvoidpbool*)come_increment_ref_count(((struct tuple3$3voidpvoidpbool*)(right_value270=(struct tuple3$3voidpvoidpbool*)come_calloc(1, sizeof(struct tuple3$3voidpvoidpbool)*(1), "05function4.c", 1802, "struct tuple3$3voidpvoidpbool")))),((void*)0),((void*)0),(_Bool)0)));
                        if(exp_225) { exp_225 = come_decrement_ref_count2(exp_225, ((struct sNode*)exp_225)->finalize, ((struct sNode*)exp_225)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        type_name_129 = come_decrement_ref_count2(type_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__146) { alignas__146 = come_decrement_ref_count2(alignas__146, ((struct sNode*)alignas__146)->finalize, ((struct sNode*)alignas__146)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sType_finalize,type_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        var_name_180 = come_decrement_ref_count2(var_name_180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple3$3voidpvoidpboolp_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        return __result110__;
                    }
                    come_value_226=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value272=get_value_from_stack(-1,info))));
                    come_call_finalizer2(CVALUE_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    dec_stack_ptr(1,info);
                    __dec_obj143=type_179;
                    type_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value273=sType_clone(come_value_226->type))));
                    come_call_finalizer2(sType_finalize,__dec_obj143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(parse_variable_name) {
                        parse_sharp_v5(info);
                        if(_if_conditional389=var_name_between_brace_185&&*info->p==40,                        _if_conditional389) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(_if_conditional390=*info->p==58,                        _if_conditional390) {
                            __dec_obj144=var_name_180;
                            var_name_180=(char*)come_increment_ref_count(((char*)(right_value274=__builtin_string(""))));
                            __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value274 = come_decrement_ref_count2(right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            if(anonymous_name_148) {
                                num_anonymous_var_name_227++;
                                __dec_obj145=var_name_180;
                                var_name_180=(char*)come_increment_ref_count(((char*)(right_value275=xsprintf("anonymous_var_nameXYZL%d",num_anonymous_var_name_227))));
                                __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                if(_if_conditional392=xisalnum(*info->p)||*info->p==95,                                _if_conditional392) {
                                    __dec_obj146=var_name_180;
                                    var_name_180=(char*)come_increment_ref_count(((char*)(right_value276=parse_word(info))));
                                    __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    num_anonymous_var_name_228++;
                                    __dec_obj147=var_name_180;
                                    var_name_180=(char*)come_increment_ref_count(((char*)(right_value277=xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_228))));
                                    __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                            }
                        }
                        if(_if_conditional393=var_name_between_brace_185&&*info->p==41,                        _if_conditional393) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(_if_conditional394=*info->p==58,                        _if_conditional394) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_229=info->no_comma;
                            info->no_comma=(_Bool)1;
                            node_230=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value278=expression_v13(info))));
                            if(right_value278) { right_value278 = come_decrement_ref_count2(right_value278, ((struct sNode*)right_value278)->finalize, ((struct sNode*)right_value278)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            info->no_comma=no_comma_229;
                            __dec_obj148=type_179->mSizeNum;
                            type_179->mSizeNum=(struct sNode*)come_increment_ref_count(node_230);
                            if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count2(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0,0, (void*)0); }
                            if(node_230) { node_230 = come_decrement_ref_count2(node_230, ((struct sNode*)node_230)->finalize, ((struct sNode*)node_230)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                    }
                    if(exp_225) { exp_225 = come_decrement_ref_count2(exp_225, ((struct sNode*)exp_225)->finalize, ((struct sNode*)exp_225)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(CVALUE_finalize,come_value_226, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(_if_conditional395=map$2charphsTypephp_operator_load_element(info->types,type_name_129),                    _if_conditional395) {
                        __dec_obj149=type_179;
                        type_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value279=sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_129)))));
                        come_call_finalizer2(sType_finalize,__dec_obj149, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        __dec_obj150=type_179->mOriginalTypeName;
                        type_179->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value280=__builtin_string(type_name_129))));
                        __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value280 = come_decrement_ref_count2(right_value280, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        type_179->mOriginalTypeNamePointerNum=pointer_num_174;
                        type_179->mConstant=type_179->mConstant||constant_130;
                        __dec_obj151=type_179->mAlignas;
                        type_179->mAlignas=(struct sNode*)come_increment_ref_count(alignas__146);
                        if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count2(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0, (void*)0); }
                        type_179->mComeMemCore=type_179->mComeMemCore||come_mem_core__145;
                        type_179->mRegister=register__133;
                        type_179->mUnsigned=type_179->mUnsigned||unsigned__134;
                        type_179->mVolatile=volatile__132;
                        type_179->mStatic=type_179->mStatic||static__131;
                        type_179->mExtern=type_179->mExtern||extern__143;
                        type_179->mInline=type_179->mInline||inline__144;
                        type_179->mRestrict=type_179->mRestrict||restrict__138;
                        type_179->mLongLong=type_179->mLongLong||long_long_136;
                        type_179->mLong=type_179->mLong||long__135;
                        type_179->mShort=type_179->mShort||short__137;
                        type_179->mPointerNum+=pointer_num_174;
                        type_179->mHeap=type_179->mHeap||heap_175;
                    }
                    else {
                        if(_if_conditional396=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_129)),                        _if_conditional396) {
                            for(                            i_231=0;                            i_231<list$1charph_length(info->generics_type_names);                            i_231++                            ){
                                if(_if_conditional397=string_operator_equals(list$1charphp_operator_load_element(info->generics_type_names,i_231),type_name_129),                                _if_conditional397) {
                                    __dec_obj152=type_179;
                                    type_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value283=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value281=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1878, "struct sType")))),((char*)(right_value282=xsprintf("generics_type%d",i_231))),(_Bool)0,info))));
                                    come_call_finalizer2(sType_finalize,__dec_obj152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(sType_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    right_value282 = come_decrement_ref_count2(right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sType_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                }
                            }
                            type_179->mConstant=type_179->mConstant||constant_130;
                            __dec_obj153=type_179->mAlignas;
                            type_179->mAlignas=(struct sNode*)come_increment_ref_count(alignas__146);
                            if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); }
                            type_179->mComeMemCore=type_179->mComeMemCore||come_mem_core__145;
                            type_179->mRegister=register__133;
                            type_179->mUnsigned=type_179->mUnsigned||unsigned__134;
                            type_179->mVolatile=volatile__132;
                            type_179->mStatic=type_179->mStatic||static__131;
                            type_179->mExtern=type_179->mExtern||extern__143;
                            type_179->mInline=type_179->mInline||inline__144;
                            type_179->mRestrict=type_179->mRestrict||restrict__138;
                            type_179->mLongLong=type_179->mLongLong||long_long_136;
                            type_179->mLong=type_179->mLong||long__135;
                            type_179->mShort=type_179->mShort||short__137;
                            type_179->mPointerNum+=pointer_num_174;
                            type_179->mHeap=type_179->mHeap||heap_175;
                        }
                        else {
                            if(_if_conditional398=list$1charph_contained(info->method_generics_type_names,(char*)come_increment_ref_count(type_name_129)),                            _if_conditional398) {
                                for(                                i_232=0;                                i_232<list$1charph_length(info->method_generics_type_names);                                i_232++                                ){
                                    if(_if_conditional399=string_operator_equals(list$1charphp_operator_load_element(info->method_generics_type_names,i_232),type_name_129),                                    _if_conditional399) {
                                        __dec_obj154=type_179;
                                        type_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value286=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value284=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1901, "struct sType")))),((char*)(right_value285=xsprintf("mgenerics_type%d",i_232))),(_Bool)0,info))));
                                        come_call_finalizer2(sType_finalize,__dec_obj154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(sType_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        right_value285 = come_decrement_ref_count2(right_value285, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(sType_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                }
                                type_179->mConstant=type_179->mConstant||constant_130;
                                __dec_obj155=type_179->mAlignas;
                                type_179->mAlignas=(struct sNode*)come_increment_ref_count(alignas__146);
                                if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count2(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0,0, (void*)0); }
                                type_179->mComeMemCore=type_179->mComeMemCore||come_mem_core__145;
                                type_179->mRegister=register__133;
                                type_179->mUnsigned=type_179->mUnsigned||unsigned__134;
                                type_179->mVolatile=volatile__132;
                                type_179->mStatic=type_179->mStatic||static__131;
                                type_179->mExtern=type_179->mExtern||extern__143;
                                type_179->mInline=type_179->mInline||inline__144;
                                type_179->mRestrict=type_179->mRestrict||restrict__138;
                                type_179->mLongLong=type_179->mLongLong||long_long_136;
                                type_179->mLong=type_179->mLong||long__135;
                                type_179->mShort=type_179->mShort||short__137;
                                type_179->mPointerNum+=pointer_num_174;
                                type_179->mHeap=type_179->mHeap||heap_175;
                            }
                            else {
                                if(_if_conditional400=*info->p==60,                                _if_conditional400) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                    if(_if_conditional411=map$2charphsClassphp_operator_load_element(info->generics_classes,type_name_129)==((void*)0),                                    _if_conditional411) {
                                        __result115__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value288=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value287=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1927, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                        type_name_129 = come_decrement_ref_count2(type_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        if(alignas__146) { alignas__146 = come_decrement_ref_count2(alignas__146, ((struct sNode*)alignas__146)->finalize, ((struct sNode*)alignas__146)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer2(sType_finalize,type_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        var_name_180 = come_decrement_ref_count2(var_name_180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        return __result115__;
                                    }
                                    __dec_obj156=type_179;
                                    type_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value290=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value289=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1930, "struct sType")))),type_name_129,(_Bool)0,info))));
                                    come_call_finalizer2(sType_finalize,__dec_obj156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(sType_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sType_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    while(_while_condtional37=(_Bool)1,                                    _while_condtional37) {
                                        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value291=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                                        generics_type_238=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                                        var_name_239=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                                        err_240=multiple_assign_var4->v3;
                                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional412=!err_240,                                        _if_conditional412) {
                                            __result116__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value293=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value292=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1936, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                            come_call_finalizer2(sType_finalize,generics_type_238, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            var_name_239 = come_decrement_ref_count2(var_name_239, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            type_name_129 = come_decrement_ref_count2(type_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            if(alignas__146) { alignas__146 = come_decrement_ref_count2(alignas__146, ((struct sNode*)alignas__146)->finalize, ((struct sNode*)alignas__146)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            come_call_finalizer2(sType_finalize,type_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            var_name_180 = come_decrement_ref_count2(var_name_180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            return __result116__;
                                        }
                                        list$1sTypeph_push_back(type_179->mGenericsTypes,(struct sType*)come_increment_ref_count(generics_type_238));
                                        if(_if_conditional413=*info->p==44,                                        _if_conditional413) {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                        }
                                        else {
                                            if(_if_conditional414=*info->p==62,                                            _if_conditional414) {
                                                info->p++;
                                                skip_spaces_and_lf(info);
                                                come_call_finalizer2(sType_finalize,generics_type_238, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                var_name_239 = come_decrement_ref_count2(var_name_239, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                break;
                                            }
                                            else {
                                                err_msg(info,"invalid generics type\n");
                                                __result117__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value295=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value294=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1953, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                                come_call_finalizer2(sType_finalize,generics_type_238, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                var_name_239 = come_decrement_ref_count2(var_name_239, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                type_name_129 = come_decrement_ref_count2(type_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                if(alignas__146) { alignas__146 = come_decrement_ref_count2(alignas__146, ((struct sNode*)alignas__146)->finalize, ((struct sNode*)alignas__146)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                come_call_finalizer2(sType_finalize,type_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                var_name_180 = come_decrement_ref_count2(var_name_180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                return __result117__;
                                            }
                                        }
                                        come_call_finalizer2(sType_finalize,generics_type_238, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        var_name_239 = come_decrement_ref_count2(var_name_239, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional415=is_contained_generics_class(type_179,info),                                    _if_conditional415) {
                                        __dec_obj157=type_179;
                                        type_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value296=solve_generics(type_179,info->generics_type,info))));
                                        come_call_finalizer2(sType_finalize,__dec_obj157, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(sType_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    else {
                                        if(_if_conditional416=!output_generics_struct(type_179,type_179,info),                                        _if_conditional416) {
                                            new_name_241=(char*)come_increment_ref_count(((char*)(right_value297=create_generics_name(type_179,info))));
                                            right_value297 = come_decrement_ref_count2(right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            printf("%s %d: output generics is failed(%s)\n",info->sname,info->sline,new_name_241);
                                            exit(7);
                                            new_name_241 = come_decrement_ref_count2(new_name_241, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                    type_179->mConstant=type_179->mConstant||constant_130;
                                    __dec_obj158=type_179->mAlignas;
                                    type_179->mAlignas=(struct sNode*)come_increment_ref_count(alignas__146);
                                    if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count2(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0, (void*)0); }
                                    type_179->mComeMemCore=type_179->mComeMemCore||come_mem_core__145;
                                    type_179->mRegister=register__133;
                                    type_179->mUnsigned=type_179->mUnsigned||unsigned__134;
                                    type_179->mVolatile=volatile__132;
                                    type_179->mStatic=type_179->mStatic||static__131;
                                    type_179->mExtern=type_179->mExtern||extern__143;
                                    type_179->mInline=type_179->mInline||inline__144;
                                    type_179->mRestrict=type_179->mRestrict||restrict__138;
                                    type_179->mLongLong=type_179->mLongLong||long_long_136;
                                    type_179->mLong=type_179->mLong||long__135;
                                    type_179->mShort=type_179->mShort||short__137;
                                    type_179->mPointerNum+=pointer_num_174;
                                    type_179->mHeap=type_179->mHeap||heap_175;
                                }
                                else {
                                    if(struct__139) {
                                        klass_242=map$2charphsClassphp_operator_load_element(info->classes,type_name_129);
                                        if(_if_conditional418=klass_242==((void*)0)&&*info->p!=60,                                        _if_conditional418) {
                                            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_129),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value305=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value304=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05function4.c", 1990, "struct sClass")))),type_name_129,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)))));
                                            come_call_finalizer2(sClass_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer2(sClass_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                    }
                                    __dec_obj159=type_179;
                                    type_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value307=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value306=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1994, "struct sType")))),type_name_129,(_Bool)0,info))));
                                    come_call_finalizer2(sType_finalize,__dec_obj159, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(sType_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sType_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    type_179->mConstant=type_179->mConstant||constant_130;
                                    __dec_obj160=type_179->mAlignas;
                                    type_179->mAlignas=(struct sNode*)come_increment_ref_count(alignas__146);
                                    if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count2(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0, (void*)0); }
                                    type_179->mComeMemCore=type_179->mComeMemCore||come_mem_core__145;
                                    type_179->mRegister=register__133;
                                    type_179->mUnsigned=type_179->mUnsigned||unsigned__134;
                                    type_179->mVolatile=volatile__132;
                                    type_179->mStatic=type_179->mStatic||static__131;
                                    type_179->mExtern=type_179->mExtern||extern__143;
                                    type_179->mInline=type_179->mInline||inline__144;
                                    type_179->mRestrict=type_179->mRestrict||restrict__138;
                                    type_179->mLongLong=type_179->mLongLong||long_long_136;
                                    type_179->mLong=type_179->mLong||long__135;
                                    type_179->mShort=type_179->mShort||short__137;
                                    type_179->mPointerNum+=pointer_num_174;
                                    type_179->mHeap=type_179->mHeap||heap_175;
                                }
                            }
                        }
                    }
                    skip_pointer_attribute(info);
                    while(_while_condtional46=*info->p==42,                    _while_condtional46) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        skip_pointer_attribute(info);
                        type_179->mPointerNum++;
                        if(type_179->mNoSolvedGenericsType->v1) {
                            type_179->mNoSolvedGenericsType->v1->mPointerNum++;
                        }
                    }
                    if(_if_conditional467=*info->p==37,                    _if_conditional467) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_179->mHeap=(_Bool)1;
                        if(type_179->mNoSolvedGenericsType->v1) {
                            type_179->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
                        }
                    }
                    if(_if_conditional469=*info->p==38,                    _if_conditional469) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_179->mNoHeap=(_Bool)1;
                        if(type_179->mNoSolvedGenericsType->v1) {
                            type_179->mNoSolvedGenericsType->v1->mHeap=(_Bool)0;
                        }
                    }
                    if(_if_conditional471=*info->p==63,                    _if_conditional471) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_179->mNullValue=(_Bool)1;
                    }
                    if(_if_conditional472=*info->p==96,                    _if_conditional472) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_179->mNoCallingDestructor=(_Bool)1;
                    }
                    skip_pointer_attribute(info);
                    while(_while_condtional47=*info->p==42,                    _while_condtional47) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        skip_pointer_attribute(info);
                        type_179->mPointerNum++;
                        if(type_179->mNoSolvedGenericsType->v1) {
                            type_179->mNoSolvedGenericsType->v1->mPointerNum++;
                        }
                    }
                    if(_if_conditional474=parse_multiple_type&&*info->p==44,                    _if_conditional474) {
                        types_287=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value309=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value308=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function4.c", 2077, "struct list$1sTypeph"))))))));
                        come_call_finalizer2(list$1sTypephp_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sTypephp_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        list$1sTypeph_push_back(types_287,(struct sType*)come_increment_ref_count(((struct sType*)(right_value310=sType_clone(type_179)))));
                        come_call_finalizer2(sType_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        while(_while_condtional48=*info->p==44,                        _while_condtional48) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value311=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                            type2_288=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                            name_289=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                            err_290=multiple_assign_var5->v3;
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional475=!err_290,                            _if_conditional475) {
                                __result142__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value313=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value312=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 2088, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                come_call_finalizer2(sType_finalize,type2_288, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                name_289 = come_decrement_ref_count2(name_289, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(list$1sTypephp_finalize,types_287, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                type_name_129 = come_decrement_ref_count2(type_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(alignas__146) { alignas__146 = come_decrement_ref_count2(alignas__146, ((struct sNode*)alignas__146)->finalize, ((struct sNode*)alignas__146)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer2(sType_finalize,type_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                var_name_180 = come_decrement_ref_count2(var_name_180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                return __result142__;
                            }
                            list$1sTypeph_push_back(types_287,(struct sType*)come_increment_ref_count(((struct sType*)(right_value314=sType_clone(type2_288)))));
                            come_call_finalizer2(sType_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sType_finalize,type2_288, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            name_289 = come_decrement_ref_count2(name_289, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        num_tuples_291=list$1sTypeph_length(types_287);
                        __dec_obj161=type_179;
                        type_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value317=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value315=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 2096, "struct sType")))),((char*)(right_value316=xsprintf("tuple%d",num_tuples_291))),(_Bool)0,info))));
                        come_call_finalizer2(sType_finalize,__dec_obj161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        right_value316 = come_decrement_ref_count2(right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sType_finalize,right_value317, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        type_179->mPointerNum++;
                        type_179->mHeap=(_Bool)1;
                        for(                        o2_saved_292=(struct list$1sTypeph*)come_increment_ref_count((types_287)),it_293=list$1sTypeph_begin((o2_saved_292));                        !list$1sTypeph_end((o2_saved_292));                        it_293=list$1sTypeph_next((o2_saved_292))                        ){
                            list$1sTypeph_push_back(type_179->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value318=sType_clone(it_293)))));
                            come_call_finalizer2(sType_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_292, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        if(_if_conditional476=is_contained_generics_class(type_179,info),                        _if_conditional476) {
                            __dec_obj162=type_179;
                            type_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value319=solve_generics(type_179,info->generics_type,info))));
                            come_call_finalizer2(sType_finalize,__dec_obj162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            if(_if_conditional477=!output_generics_struct(type_179,type_179,info),                            _if_conditional477) {
                                new_name_294=(char*)come_increment_ref_count(((char*)(right_value320=create_generics_name(type_179,info))));
                                right_value320 = come_decrement_ref_count2(right_value320, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                printf("output generics is failed(%s)\n",new_name_294);
                                exit(9);
                                new_name_294 = come_decrement_ref_count2(new_name_294, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                        come_call_finalizer2(list$1sTypephp_finalize,types_287, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional478=*info->p==124&&in_function_parametor,                    _if_conditional478) {
                        types_295=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value322=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value321=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function4.c", 2117, "struct list$1sTypeph"))))))));
                        come_call_finalizer2(list$1sTypephp_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sTypephp_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        list$1sTypeph_push_back(types_295,(struct sType*)come_increment_ref_count(((struct sType*)(right_value323=sType_clone(type_179)))));
                        come_call_finalizer2(sType_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        while(_while_condtional49=*info->p==124,                        _while_condtional49) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(right_value324=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                            type2_296=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                            name_297=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                            err_298=multiple_assign_var6->v3;
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional479=!err_298,                            _if_conditional479) {
                                __result143__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value326=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value325=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 2128, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                come_call_finalizer2(sType_finalize,type2_296, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                name_297 = come_decrement_ref_count2(name_297, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(list$1sTypephp_finalize,types_295, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                type_name_129 = come_decrement_ref_count2(type_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(alignas__146) { alignas__146 = come_decrement_ref_count2(alignas__146, ((struct sNode*)alignas__146)->finalize, ((struct sNode*)alignas__146)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer2(sType_finalize,type_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                var_name_180 = come_decrement_ref_count2(var_name_180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                return __result143__;
                            }
                            list$1sTypeph_push_back(types_295,(struct sType*)come_increment_ref_count(((struct sType*)(right_value327=sType_clone(type2_296)))));
                            come_call_finalizer2(sType_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sType_finalize,type2_296, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            name_297 = come_decrement_ref_count2(name_297, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        __dec_obj163=type_179->mMultipleTypes;
                        type_179->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value328=list$1sTypephp_clone(types_295))));
                        come_call_finalizer2(list$1sTypeph_finalize,__dec_obj163, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        heap_299=list$1sTypephp_operator_load_element(types_295,0)->mHeap;
                        for(                        o2_saved_300=(struct list$1sTypeph*)come_increment_ref_count((types_295)),it_301=list$1sTypeph_begin((o2_saved_300));                        !list$1sTypeph_end((o2_saved_300));                        it_301=list$1sTypeph_next((o2_saved_300))                        ){
                            if(_if_conditional480=heap_299!=it_301->mHeap,                            _if_conditional480) {
                                __result144__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value330=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value329=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 2139, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                come_call_finalizer2(list$1sTypephp_finalize,o2_saved_300, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(list$1sTypephp_finalize,types_295, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                type_name_129 = come_decrement_ref_count2(type_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(alignas__146) { alignas__146 = come_decrement_ref_count2(alignas__146, ((struct sNode*)alignas__146)->finalize, ((struct sNode*)alignas__146)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer2(sType_finalize,type_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                var_name_180 = come_decrement_ref_count2(var_name_180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                return __result144__;
                            }
                            heap_299=it_301->mHeap;
                        }
                        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_300, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        __dec_obj164=type_179;
                        type_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value332=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value331=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 2144, "struct sType")))),"void",(_Bool)0,info))));
                        come_call_finalizer2(sType_finalize,__dec_obj164, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sType_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        type_179->mHeap=heap_299;
                        type_179->mPointerNum=1;
                        if(_if_conditional481=is_contained_generics_class(type_179,info),                        _if_conditional481) {
                            __dec_obj165=type_179;
                            type_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value333=solve_generics(type_179,info->generics_type,info))));
                            come_call_finalizer2(sType_finalize,__dec_obj165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            if(_if_conditional482=!output_generics_struct(type_179,type_179,info),                            _if_conditional482) {
                                new_name_302=(char*)come_increment_ref_count(((char*)(right_value334=create_generics_name(type_179,info))));
                                right_value334 = come_decrement_ref_count2(right_value334, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                printf("output generics is failed(%s)\n",new_name_302);
                                exit(9);
                                new_name_302 = come_decrement_ref_count2(new_name_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                        come_call_finalizer2(list$1sTypephp_finalize,types_295, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(parse_variable_name) {
                        parse_sharp_v5(info);
                        if(_if_conditional484=var_name_between_brace_185&&*info->p==40,                        _if_conditional484) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(_if_conditional485=*info->p==58,                        _if_conditional485) {
                            __dec_obj166=var_name_180;
                            var_name_180=(char*)come_increment_ref_count(((char*)(right_value335=__builtin_string(""))));
                            __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value335 = come_decrement_ref_count2(right_value335, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            if(anonymous_name_148) {
                                num_anonymous_var_name_303++;
                                __dec_obj167=var_name_180;
                                var_name_180=(char*)come_increment_ref_count(((char*)(right_value336=xsprintf("anonymous_var_nameXYZLO%d",num_anonymous_var_name_303))));
                                __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value336 = come_decrement_ref_count2(right_value336, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                if(_if_conditional487=xisalnum(*info->p)||*info->p==95,                                _if_conditional487) {
                                    __dec_obj168=var_name_180;
                                    var_name_180=(char*)come_increment_ref_count(((char*)(right_value337=parse_word(info))));
                                    __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value337 = come_decrement_ref_count2(right_value337, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    num_anonymous_var_name_304++;
                                    __dec_obj169=var_name_180;
                                    var_name_180=(char*)come_increment_ref_count(((char*)(right_value338=xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_304))));
                                    __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value338 = come_decrement_ref_count2(right_value338, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                            }
                        }
                        if(_if_conditional488=var_name_between_brace_185&&*info->p==41,                        _if_conditional488) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(_if_conditional489=*info->p==58,                        _if_conditional489) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_305=info->no_comma;
                            info->no_comma=(_Bool)1;
                            node_306=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value339=expression_v13(info))));
                            if(right_value339) { right_value339 = come_decrement_ref_count2(right_value339, ((struct sNode*)right_value339)->finalize, ((struct sNode*)right_value339)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            info->no_comma=no_comma_305;
                            __dec_obj170=type_179->mSizeNum;
                            type_179->mSizeNum=(struct sNode*)come_increment_ref_count(node_306);
                            if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count2(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0,0, (void*)0); }
                            if(node_306) { node_306 = come_decrement_ref_count2(node_306, ((struct sNode*)node_306)->finalize, ((struct sNode*)node_306)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    while(_while_condtional50=*info->p==91,    _while_condtional50) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        skip_pointer_attribute(info);
        if(_if_conditional490=*info->p==93,        _if_conditional490) {
            info->p++;
            skip_spaces_and_lf(info);
            type_179->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_307=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value340=expression_v13(info))));
        if(right_value340) { right_value340 = come_decrement_ref_count2(right_value340, ((struct sNode*)right_value340)->finalize, ((struct sNode*)right_value340)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1sNodeph_push_back(type_179->mArrayNum,(struct sNode*)come_increment_ref_count(node_307));
        parse_sharp_v5(info);
        expected_next_character(93,info);
        if(node_307) { node_307 = come_decrement_ref_count2(node_307, ((struct sNode*)node_307)->finalize, ((struct sNode*)node_307)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    asm_name_308=(char*)come_increment_ref_count(((char*)(right_value341=parse_attribute(info))));
    right_value341 = come_decrement_ref_count2(right_value341, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj171=type_179->mAsmName;
    type_179->mAsmName=(char*)come_increment_ref_count(asm_name_308);
    __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
    parse_sharp_v5(info);
    __result145__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value343=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value342=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 2234, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count(type_179),(char*)come_increment_ref_count(var_name_180),(_Bool)1)));
    type_name_129 = come_decrement_ref_count2(type_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(alignas__146) { alignas__146 = come_decrement_ref_count2(alignas__146, ((struct sNode*)alignas__146)->finalize, ((struct sNode*)alignas__146)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(sType_finalize,type_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_180 = come_decrement_ref_count2(var_name_180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    asm_name_308 = come_decrement_ref_count2(asm_name_308, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result145__;
    type_name_129 = come_decrement_ref_count2(type_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(alignas__146) { alignas__146 = come_decrement_ref_count2(alignas__146, ((struct sNode*)alignas__146)->finalize, ((struct sNode*)alignas__146)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(sType_finalize,type_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_180 = come_decrement_ref_count2(var_name_180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    asm_name_308 = come_decrement_ref_count2(asm_name_308, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__;
struct sType* __dec_obj73;
char* __dec_obj74;
struct tuple3$3sTypephcharphbool* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
                                __dec_obj73=self->v1;
                                self->v1=(struct sType*)come_increment_ref_count(v1);
                                come_call_finalizer2(sType_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                __dec_obj74=self->v2;
                                self->v2=(char*)come_increment_ref_count(v2);
                                __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->v3=v3;
                                __result81__ = __result_obj__ = self;
                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                return __result81__;
                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__;
struct sType* default_value_200;
unsigned int hash_201;
unsigned int it_202;
_Bool _while_condtional33;
_Bool _if_conditional359;
_Bool _if_conditional360;
struct sType* __result91__;
_Bool _if_conditional361;
_Bool _if_conditional362;
struct sType* __result92__;
struct sType* __result93__;
struct sType* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_200, 0, sizeof(struct sType*));
memset(&hash_201, 0, sizeof(unsigned int));
memset(&it_202, 0, sizeof(unsigned int));
                memset(&default_value_200,0,sizeof(struct sType*));
                hash_201=string_get_hash_key(((char*)key))%self->size;
                it_202=hash_201;
                while(_while_condtional33=(_Bool)1,                _while_condtional33) {
                    if(_if_conditional359=self->item_existance[it_202],                    _if_conditional359) {
                        if(_if_conditional360=string_equals(self->keys[it_202],key),                        _if_conditional360) {
                            __result91__ = __result_obj__ = self->items[it_202];
                            come_call_finalizer2(sType_finalize,default_value_200, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result91__;
                        }
                        it_202++;
                        if(_if_conditional361=it_202>=self->size,                        _if_conditional361) {
                            it_202=0;
                        }
                        else {
                            if(_if_conditional362=it_202==hash_201,                            _if_conditional362) {
                                __result92__ = __result_obj__ = default_value_200;
                                come_call_finalizer2(sType_finalize,default_value_200, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result92__;
                            }
                        }
                    }
                    else {
                        __result93__ = __result_obj__ = default_value_200;
                        come_call_finalizer2(sType_finalize,default_value_200, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result93__;
                    }
                }
                __result94__ = __result_obj__ = default_value_200;
                come_call_finalizer2(sType_finalize,default_value_200, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result94__;
                come_call_finalizer2(sType_finalize,default_value_200, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static _Bool list$1charph_contained(struct list$1charph* self, char* item){
void* __result_obj__;
char* it_205;
_Bool _if_conditional368;
_Bool __result102__;
_Bool __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_205, 0, sizeof(char*));
                    for(                    it_205=list$1charph_begin(self);                    !list$1charph_end(self);                    it_205=list$1charph_next(self)                    ){
                        if(_if_conditional368=string_operator_equals(it_205,item),                        _if_conditional368) {
                            __result102__ = (_Bool)1;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result102__;
                        }
                    }
                    __result103__ = (_Bool)0;
                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result103__;
                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional364;
char* result_203;
char* __result95__;
_Bool _if_conditional365;
char* __result96__;
char* result_204;
char* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_203, 0, sizeof(char*));
memset(&result_204, 0, sizeof(char*));
                        if(_if_conditional364=self==((void*)0),                        _if_conditional364) {
                            memset(&result_203,0,sizeof(char*));
                            __result95__ = __result_obj__ = result_203;
                            return __result95__;
                        }
                        self->it=self->head;
                        if(self->it) {
                            __result96__ = __result_obj__ = self->it->item;
                            return __result96__;
                        }
                        memset(&result_204,0,sizeof(char*));
                        __result97__ = __result_obj__ = result_204;
                        return __result97__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result98__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result98__ = self==((void*)0)||self->it==((void*)0);
                        return __result98__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional366;
char* result_206;
char* __result99__;
_Bool _if_conditional367;
char* __result100__;
char* result_207;
char* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_206, 0, sizeof(char*));
memset(&result_207, 0, sizeof(char*));
                        if(_if_conditional366=self==((void*)0)||self->it==((void*)0),                        _if_conditional366) {
                            memset(&result_206,0,sizeof(char*));
                            __result99__ = __result_obj__ = result_206;
                            return __result99__;
                        }
                        self->it=self->it->next;
                        if(self->it) {
                            __result100__ = __result_obj__ = self->it->item;
                            return __result100__;
                        }
                        memset(&result_207,0,sizeof(char*));
                        __result101__ = __result_obj__ = result_207;
                        return __result101__;
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
int __result104__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result104__ = self->len;
                        return __result104__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional370;
struct list_item$1charph* it_209;
int i_210;
_Bool _while_condtional34;
_Bool _if_conditional371;
char* __result105__;
char* default_value_211;
char* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_209, 0, sizeof(struct list_item$1charph*));
memset(&i_210, 0, sizeof(int));
memset(&default_value_211, 0, sizeof(char*));
                            if(_if_conditional370=position<0,                            _if_conditional370) {
                                position+=self->len;
                            }
                            it_209=self->head;
                            i_210=0;
                            while(_while_condtional34=it_209!=((void*)0),                            _while_condtional34) {
                                if(_if_conditional371=position==i_210,                                _if_conditional371) {
                                    __result105__ = __result_obj__ = it_209->item;
                                    return __result105__;
                                }
                                it_209=it_209->next;
                                i_210++;
                            }
                            memset(&default_value_211,0,sizeof(char*));
                            __result106__ = __result_obj__ = default_value_211;
                            default_value_211 = come_decrement_ref_count2(default_value_211, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result106__;
                            default_value_211 = come_decrement_ref_count2(default_value_211, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
struct sType* __dec_obj128;
struct tuple1$1sTypeph* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
                __dec_obj128=self->v1;
                self->v1=(struct sType*)come_increment_ref_count(v1);
                come_call_finalizer2(sType_finalize,__dec_obj128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                __result107__ = __result_obj__ = self;
                come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result107__;
                come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple3$3voidpvoidpbool* tuple3$3voidpvoidpbool_initialize(struct tuple3$3voidpvoidpbool* self, void* v1, void* v2, _Bool v3){
void* __result_obj__;
struct tuple3$3voidpvoidpbool* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
                            self->v1=v1;
                            self->v2=v2;
                            self->v3=v3;
                            __result109__ = __result_obj__ = self;
                            come_call_finalizer2(tuple3$3voidpvoidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result109__;
                            come_call_finalizer2(tuple3$3voidpvoidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple3$3voidpvoidpboolp_finalize(struct tuple3$3voidpvoidpbool* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional386;
_Bool _if_conditional387;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional386=self!=((void*)0)&&self->c_value!=((void*)0),                        _if_conditional386) {
                            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional387=self!=((void*)0)&&self->type!=((void*)0),                        _if_conditional387) {
                            come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_233;
unsigned int hash_234;
unsigned int it_235;
_Bool _while_condtional35;
_Bool _if_conditional401;
_Bool _if_conditional402;
struct sClass* __result111__;
_Bool _if_conditional409;
_Bool _if_conditional410;
struct sClass* __result112__;
struct sClass* __result113__;
struct sClass* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_233, 0, sizeof(struct sClass*));
memset(&hash_234, 0, sizeof(unsigned int));
memset(&it_235, 0, sizeof(unsigned int));
                                        memset(&default_value_233,0,sizeof(struct sClass*));
                                        hash_234=string_get_hash_key(((char*)key))%self->size;
                                        it_235=hash_234;
                                        while(_while_condtional35=(_Bool)1,                                        _while_condtional35) {
                                            if(_if_conditional401=self->item_existance[it_235],                                            _if_conditional401) {
                                                if(_if_conditional402=string_equals(self->keys[it_235],key),                                                _if_conditional402) {
                                                    __result111__ = __result_obj__ = self->items[it_235];
                                                    come_call_finalizer2(sClass_finalize,default_value_233, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    return __result111__;
                                                }
                                                it_235++;
                                                if(_if_conditional409=it_235>=self->size,                                                _if_conditional409) {
                                                    it_235=0;
                                                }
                                                else {
                                                    if(_if_conditional410=it_235==hash_234,                                                    _if_conditional410) {
                                                        __result112__ = __result_obj__ = default_value_233;
                                                        come_call_finalizer2(sClass_finalize,default_value_233, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                        return __result112__;
                                                    }
                                                }
                                            }
                                            else {
                                                __result113__ = __result_obj__ = default_value_233;
                                                come_call_finalizer2(sClass_finalize,default_value_233, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result113__;
                                            }
                                        }
                                        __result114__ = __result_obj__ = default_value_233;
                                        come_call_finalizer2(sClass_finalize,default_value_233, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result114__;
                                        come_call_finalizer2(sClass_finalize,default_value_233, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional403;
_Bool _if_conditional404;
_Bool _if_conditional408;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional403=self!=((void*)0)&&self->mName!=((void*)0),                                                        _if_conditional403) {
                                                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
                                                        if(_if_conditional404=self!=((void*)0)&&self->mFields!=((void*)0),                                                        _if_conditional404) {
                                                            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        }
                                                        if(_if_conditional408=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                                        _if_conditional408) {
                                                            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_236;
_Bool _while_condtional36;
struct list_item$1tuple2$2charphsTypephph* prev_it_237;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_236, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_237, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                                                it_236=self->head;
                                                                while(_while_condtional36=it_236!=((void*)0),                                                                _while_condtional36) {
                                                                    prev_it_237=it_236;
                                                                    it_236=it_236->next;
                                                                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_237, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional405;
memset(&__result_obj__, 0, sizeof(void*));
                                                                        if(_if_conditional405=self!=((void*)0)&&self->item!=((void*)0),                                                                        _if_conditional405) {
                                                                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional406;
_Bool _if_conditional407;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                if(_if_conditional406=self!=((void*)0)&&self->v1!=((void*)0),                                                                                _if_conditional406) {
                                                                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                if(_if_conditional407=self!=((void*)0)&&self->v2!=((void*)0),                                                                                _if_conditional407) {
                                                                                    come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional419;
unsigned int hash_260;
unsigned int it_261;
_Bool _while_condtional40;
_Bool _if_conditional431;
_Bool _if_conditional432;
_Bool _if_conditional433;
_Bool _if_conditional453;
_Bool _if_conditional454;
_Bool _if_conditional455;
_Bool _if_conditional456;
_Bool _if_conditional457;
_Bool same_key_exist_278;
char* it2_281;
_Bool _if_conditional462;
_Bool _if_conditional463;
struct map$2charphsClassph* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_260, 0, sizeof(unsigned int));
memset(&it_261, 0, sizeof(unsigned int));
memset(&same_key_exist_278, 0, sizeof(_Bool));
memset(&it2_281, 0, sizeof(char*));
                                                if(_if_conditional419=self->len*10>=self->size,                                                _if_conditional419) {
                                                    map$2charphsClassph_rehash(self);
                                                }
                                                hash_260=string_get_hash_key(key)%self->size;
                                                it_261=hash_260;
                                                while(_while_condtional40=(_Bool)1,                                                _while_condtional40) {
                                                    if(_if_conditional431=self->item_existance[it_261],                                                    _if_conditional431) {
                                                        if(_if_conditional432=string_equals(self->keys[it_261],key),                                                        _if_conditional432) {
                                                            if(_if_conditional433=1,                                                            _if_conditional433) {
                                                                list$1charp_remove(self->key_list,self->keys[it_261]);
                                                                self->keys[it_261] = come_decrement_ref_count2(self->keys[it_261], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                self->keys[it_261]=(char*)come_increment_ref_count(key);
                                                            }
                                                            else {
                                                                list$1charp_remove(self->key_list,self->keys[it_261]);
                                                                self->keys[it_261]=key;
                                                            }
                                                            if(_if_conditional453=1,                                                            _if_conditional453) {
                                                                come_call_finalizer2(sClass_finalize,self->items[it_261], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                self->items[it_261]=(struct sClass*)come_increment_ref_count(item);
                                                            }
                                                            else {
                                                                self->items[it_261]=item;
                                                            }
                                                            break;
                                                        }
                                                        it_261++;
                                                        if(_if_conditional454=it_261>=self->size,                                                        _if_conditional454) {
                                                            it_261=0;
                                                        }
                                                        else {
                                                            if(_if_conditional455=it_261==hash_260,                                                            _if_conditional455) {
                                                                printf("unexpected error in map.insert\n");
                                                                stackframe();
                                                                exit(2);
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        self->item_existance[it_261]=(_Bool)1;
                                                        if(_if_conditional456=1,                                                        _if_conditional456) {
                                                            self->keys[it_261]=(char*)come_increment_ref_count(key);
                                                        }
                                                        else {
                                                            self->keys[it_261]=key;
                                                        }
                                                        if(_if_conditional457=1,                                                        _if_conditional457) {
                                                            self->items[it_261]=(struct sClass*)come_increment_ref_count(item);
                                                        }
                                                        else {
                                                            self->items[it_261]=item;
                                                        }
                                                        self->len++;
                                                        break;
                                                    }
                                                }
                                                same_key_exist_278=(_Bool)0;
                                                for(                                                it2_281=list$1charp_begin(self->key_list);                                                !list$1charp_end(self->key_list);                                                it2_281=list$1charp_next(self->key_list)                                                ){
                                                    if(_if_conditional462=string_equals(it2_281,key),                                                    _if_conditional462) {
                                                        puts("SAME KEY");
                                                        same_key_exist_278=(_Bool)1;
                                                    }
                                                }
                                                if(_if_conditional463=!same_key_exist_278,                                                _if_conditional463) {
                                                    list$1charp_push_back(self->key_list,key);
                                                }
                                                __result141__ = __result_obj__ = self;
                                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result141__;
                                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_243;
void* right_value298;
char** keys_244;
void* right_value299;
struct sClass** items_245;
void* right_value300;
_Bool* item_existance_246;
int len_247;
char* it_250;
struct sClass* default_value_253;
struct sClass* it2_256;
unsigned int hash_257;
int n_258;
_Bool _while_condtional39;
_Bool _if_conditional428;
_Bool _if_conditional429;
_Bool _if_conditional430;
struct sClass* default_value_259;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_243, 0, sizeof(int));
right_value298 = (void*)0;
memset(&keys_244, 0, sizeof(char**));
right_value299 = (void*)0;
memset(&items_245, 0, sizeof(struct sClass**));
right_value300 = (void*)0;
memset(&item_existance_246, 0, sizeof(_Bool*));
memset(&len_247, 0, sizeof(int));
memset(&it_250, 0, sizeof(char*));
memset(&default_value_253, 0, sizeof(struct sClass*));
memset(&it2_256, 0, sizeof(struct sClass*));
memset(&hash_257, 0, sizeof(unsigned int));
memset(&n_258, 0, sizeof(int));
memset(&default_value_259, 0, sizeof(struct sClass*));
                                                        size_243=self->size*10;
                                                        keys_244=(char**)come_increment_ref_count(((char**)(right_value298=(char**)come_calloc(1, sizeof(char*)*(1*(size_243)), "./comelang2.h", 1335, "char*"))));
                                                        right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        items_245=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value299=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_243)), "./comelang2.h", 1336, "struct sClass*"))));
                                                        come_call_finalizer2(sClass_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        item_existance_246=(_Bool*)come_increment_ref_count(((_Bool*)(right_value300=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_243)), "./comelang2.h", 1337, "_Bool"))));
                                                        right_value300 = come_decrement_ref_count2(right_value300, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        len_247=0;
                                                        for(                                                        it_250=map$2charphsClassph_begin(self);                                                        !map$2charphsClassph_end(self);                                                        it_250=map$2charphsClassph_next(self)                                                        ){
                                                            memset(&default_value_253,0,sizeof(struct sClass*));
                                                            it2_256=map$2charphsClassph_at(self,it_250,default_value_253);
                                                            hash_257=string_get_hash_key(it_250)%size_243;
                                                            n_258=hash_257;
                                                            while(_while_condtional39=(_Bool)1,                                                            _while_condtional39) {
                                                                if(_if_conditional428=item_existance_246[n_258],                                                                _if_conditional428) {
                                                                    n_258++;
                                                                    if(_if_conditional429=n_258>=size_243,                                                                    _if_conditional429) {
                                                                        n_258=0;
                                                                    }
                                                                    else {
                                                                        if(_if_conditional430=n_258==hash_257,                                                                        _if_conditional430) {
                                                                            printf("unexpected error in map.rehash(1)\n");
                                                                            stackframe();
                                                                            exit(2);
                                                                        }
                                                                    }
                                                                }
                                                                else {
                                                                    item_existance_246[n_258]=(_Bool)1;
                                                                    keys_244[n_258]=it_250;
                                                                    items_245[n_258]=map$2charphsClassph_at(self,it_250,default_value_259);
                                                                    len_247++;
                                                                    break;
                                                                }
                                                            }
                                                        }
                                                        come_free((char*)self->items);
                                                        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        come_free((char*)self->keys);
                                                        self->keys=keys_244;
                                                        self->items=items_245;
                                                        self->item_existance=item_existance_246;
                                                        self->size=size_243;
                                                        self->len=len_247;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional420;
char* result_248;
char* __result118__;
_Bool _if_conditional421;
char* __result119__;
char* result_249;
char* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_248, 0, sizeof(char*));
memset(&result_249, 0, sizeof(char*));
                                                            if(_if_conditional420=self==((void*)0),                                                            _if_conditional420) {
                                                                memset(&result_248,0,sizeof(char*));
                                                                __result118__ = __result_obj__ = result_248;
                                                                return __result118__;
                                                            }
                                                            self->key_list->it=self->key_list->head;
                                                            if(self->key_list->it) {
                                                                __result119__ = __result_obj__ = self->key_list->it->item;
                                                                return __result119__;
                                                            }
                                                            memset(&result_249,0,sizeof(char*));
                                                            __result120__ = __result_obj__ = result_249;
                                                            return __result120__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result121__;
memset(&__result_obj__, 0, sizeof(void*));
                                                            __result121__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                                                            return __result121__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional422;
char* result_251;
char* __result122__;
_Bool _if_conditional423;
char* __result123__;
char* result_252;
char* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_251, 0, sizeof(char*));
memset(&result_252, 0, sizeof(char*));
                                                            if(_if_conditional422=self==((void*)0)||self->key_list->it==((void*)0),                                                            _if_conditional422) {
                                                                memset(&result_251,0,sizeof(char*));
                                                                __result122__ = __result_obj__ = result_251;
                                                                return __result122__;
                                                            }
                                                            self->key_list->it=self->key_list->it->next;
                                                            if(self->key_list->it) {
                                                                __result123__ = __result_obj__ = self->key_list->it->item;
                                                                return __result123__;
                                                            }
                                                            memset(&result_252,0,sizeof(char*));
                                                            __result124__ = __result_obj__ = result_252;
                                                            return __result124__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_254;
unsigned int it_255;
_Bool _while_condtional38;
_Bool _if_conditional424;
_Bool _if_conditional425;
struct sClass* __result125__;
_Bool _if_conditional426;
_Bool _if_conditional427;
struct sClass* __result126__;
struct sClass* __result127__;
struct sClass* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_254, 0, sizeof(unsigned int));
memset(&it_255, 0, sizeof(unsigned int));
                                                                hash_254=string_get_hash_key(((char*)key))%self->size;
                                                                it_255=hash_254;
                                                                while(_while_condtional38=(_Bool)1,                                                                _while_condtional38) {
                                                                    if(_if_conditional424=self->item_existance[it_255],                                                                    _if_conditional424) {
                                                                        if(_if_conditional425=string_equals(self->keys[it_255],key),                                                                        _if_conditional425) {
                                                                            __result125__ = __result_obj__ = self->items[it_255];
                                                                            come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                            return __result125__;
                                                                        }
                                                                        it_255++;
                                                                        if(_if_conditional426=it_255>=self->size,                                                                        _if_conditional426) {
                                                                            it_255=0;
                                                                        }
                                                                        else {
                                                                            if(_if_conditional427=it_255==hash_254,                                                                            _if_conditional427) {
                                                                                __result126__ = __result_obj__ = default_value;
                                                                                come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                return __result126__;
                                                                            }
                                                                        }
                                                                    }
                                                                    else {
                                                                        __result127__ = __result_obj__ = default_value;
                                                                        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                        return __result127__;
                                                                    }
                                                                }
                                                                __result128__ = __result_obj__ = default_value;
                                                                come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                return __result128__;
                                                                come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_262;
struct list_item$1charp* it_263;
_Bool _while_condtional41;
_Bool _if_conditional434;
struct list$1charp* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_262, 0, sizeof(int));
memset(&it_263, 0, sizeof(struct list_item$1charp*));
                                                                    it2_262=0;
                                                                    it_263=self->head;
                                                                    while(_while_condtional41=it_263!=((void*)0),                                                                    _while_condtional41) {
                                                                        if(_if_conditional434=string_equals(it_263->item,item),                                                                        _if_conditional434) {
                                                                            list$1charp_delete(self,it2_262,it2_262+1);
                                                                            break;
                                                                        }
                                                                        it2_262++;
                                                                        it_263=it_263->next;
                                                                    }
                                                                    __result132__ = __result_obj__ = self;
                                                                    return __result132__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional435;
_Bool _if_conditional436;
_Bool _if_conditional437;
int tmp_264;
_Bool _if_conditional438;
_Bool _if_conditional439;
_Bool _if_conditional440;
struct list$1charp* __result129__;
_Bool _if_conditional441;
_Bool _if_conditional442;
struct list_item$1charp* it_267;
int i_268;
_Bool _while_condtional43;
_Bool _if_conditional443;
struct list_item$1charp* prev_it_269;
_Bool _if_conditional444;
_Bool _if_conditional445;
struct list_item$1charp* it_270;
int i_271;
_Bool _while_condtional44;
_Bool _if_conditional446;
_Bool _if_conditional447;
struct list_item$1charp* prev_it_272;
struct list_item$1charp* it_273;
struct list_item$1charp* head_prev_it_274;
struct list_item$1charp* tail_it_275;
int i_276;
_Bool _while_condtional45;
_Bool _if_conditional448;
_Bool _if_conditional449;
_Bool _if_conditional450;
struct list_item$1charp* prev_it_277;
_Bool _if_conditional451;
_Bool _if_conditional452;
struct list$1charp* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_264, 0, sizeof(int));
memset(&it_267, 0, sizeof(struct list_item$1charp*));
memset(&i_268, 0, sizeof(int));
memset(&prev_it_269, 0, sizeof(struct list_item$1charp*));
memset(&it_270, 0, sizeof(struct list_item$1charp*));
memset(&i_271, 0, sizeof(int));
memset(&prev_it_272, 0, sizeof(struct list_item$1charp*));
memset(&it_273, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_274, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_275, 0, sizeof(struct list_item$1charp*));
memset(&i_276, 0, sizeof(int));
memset(&prev_it_277, 0, sizeof(struct list_item$1charp*));
                                                                                if(_if_conditional435=head<0,                                                                                _if_conditional435) {
                                                                                    head+=self->len;
                                                                                }
                                                                                if(_if_conditional436=tail<0,                                                                                _if_conditional436) {
                                                                                    tail+=self->len+1;
                                                                                }
                                                                                if(_if_conditional437=head>tail,                                                                                _if_conditional437) {
                                                                                    tmp_264=tail;
                                                                                    tail=head;
                                                                                    head=tmp_264;
                                                                                }
                                                                                if(_if_conditional438=head<0,                                                                                _if_conditional438) {
                                                                                    head=0;
                                                                                }
                                                                                if(_if_conditional439=tail>self->len,                                                                                _if_conditional439) {
                                                                                    tail=self->len;
                                                                                }
                                                                                if(_if_conditional440=head==tail,                                                                                _if_conditional440) {
                                                                                    __result129__ = __result_obj__ = self;
                                                                                    return __result129__;
                                                                                }
                                                                                if(_if_conditional441=head==0&&tail==self->len,                                                                                _if_conditional441) {
                                                                                    list$1charp_reset(self);
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional442=head==0,                                                                                    _if_conditional442) {
                                                                                        it_267=self->head;
                                                                                        i_268=0;
                                                                                        while(_while_condtional43=it_267!=((void*)0),                                                                                        _while_condtional43) {
                                                                                            if(_if_conditional443=i_268<tail,                                                                                            _if_conditional443) {
                                                                                                prev_it_269=it_267;
                                                                                                it_267=it_267->next;
                                                                                                i_268++;
                                                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_269, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                self->len--;
                                                                                            }
                                                                                            else {
                                                                                                if(_if_conditional444=i_268==tail,                                                                                                _if_conditional444) {
                                                                                                    self->head=it_267;
                                                                                                    self->head->prev=((void*)0);
                                                                                                    break;
                                                                                                }
                                                                                                else {
                                                                                                    it_267=it_267->next;
                                                                                                    i_268++;
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                    else {
                                                                                        if(_if_conditional445=tail==self->len,                                                                                        _if_conditional445) {
                                                                                            it_270=self->head;
                                                                                            i_271=0;
                                                                                            while(_while_condtional44=it_270!=((void*)0),                                                                                            _while_condtional44) {
                                                                                                if(_if_conditional446=i_271==head,                                                                                                _if_conditional446) {
                                                                                                    self->tail=it_270->prev;
                                                                                                    self->tail->next=((void*)0);
                                                                                                }
                                                                                                if(_if_conditional447=i_271>=head,                                                                                                _if_conditional447) {
                                                                                                    prev_it_272=it_270;
                                                                                                    it_270=it_270->next;
                                                                                                    i_271++;
                                                                                                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_272, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                    self->len--;
                                                                                                }
                                                                                                else {
                                                                                                    it_270=it_270->next;
                                                                                                    i_271++;
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                        else {
                                                                                            it_273=self->head;
                                                                                            head_prev_it_274=((void*)0);
                                                                                            tail_it_275=((void*)0);
                                                                                            i_276=0;
                                                                                            while(_while_condtional45=it_273!=((void*)0),                                                                                            _while_condtional45) {
                                                                                                if(_if_conditional448=i_276==head,                                                                                                _if_conditional448) {
                                                                                                    head_prev_it_274=it_273->prev;
                                                                                                }
                                                                                                if(_if_conditional449=i_276==tail,                                                                                                _if_conditional449) {
                                                                                                    tail_it_275=it_273;
                                                                                                }
                                                                                                if(_if_conditional450=i_276>=head&&i_276<tail,                                                                                                _if_conditional450) {
                                                                                                    prev_it_277=it_273;
                                                                                                    it_273=it_273->next;
                                                                                                    i_276++;
                                                                                                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_277, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                    self->len--;
                                                                                                }
                                                                                                else {
                                                                                                    it_273=it_273->next;
                                                                                                    i_276++;
                                                                                                }
                                                                                            }
                                                                                            if(_if_conditional451=head_prev_it_274!=((void*)0),                                                                                            _if_conditional451) {
                                                                                                head_prev_it_274->next=tail_it_275;
                                                                                            }
                                                                                            if(_if_conditional452=tail_it_275!=((void*)0),                                                                                            _if_conditional452) {
                                                                                                tail_it_275->prev=head_prev_it_274;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                                __result131__ = __result_obj__ = self;
                                                                                return __result131__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_265;
_Bool _while_condtional42;
struct list_item$1charp* prev_it_266;
struct list$1charp* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_265, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_266, 0, sizeof(struct list_item$1charp*));
                                                                                        it_265=self->head;
                                                                                        while(_while_condtional42=it_265!=((void*)0),                                                                                        _while_condtional42) {
                                                                                            prev_it_266=it_265;
                                                                                            it_265=it_265->next;
                                                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_266, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                        }
                                                                                        self->head=((void*)0);
                                                                                        self->tail=((void*)0);
                                                                                        self->len=0;
                                                                                        __result130__ = __result_obj__ = self;
                                                                                        return __result130__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional458;
char* result_279;
char* __result133__;
_Bool _if_conditional459;
char* __result134__;
char* result_280;
char* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_279, 0, sizeof(char*));
memset(&result_280, 0, sizeof(char*));
                                                    if(_if_conditional458=self==((void*)0),                                                    _if_conditional458) {
                                                        memset(&result_279,0,sizeof(char*));
                                                        __result133__ = __result_obj__ = result_279;
                                                        return __result133__;
                                                    }
                                                    self->it=self->head;
                                                    if(self->it) {
                                                        __result134__ = __result_obj__ = self->it->item;
                                                        return __result134__;
                                                    }
                                                    memset(&result_280,0,sizeof(char*));
                                                    __result135__ = __result_obj__ = result_280;
                                                    return __result135__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result136__;
memset(&__result_obj__, 0, sizeof(void*));
                                                    __result136__ = self==((void*)0)||self->it==((void*)0);
                                                    return __result136__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional460;
char* result_282;
char* __result137__;
_Bool _if_conditional461;
char* __result138__;
char* result_283;
char* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_282, 0, sizeof(char*));
memset(&result_283, 0, sizeof(char*));
                                                    if(_if_conditional460=self==((void*)0)||self->it==((void*)0),                                                    _if_conditional460) {
                                                        memset(&result_282,0,sizeof(char*));
                                                        __result137__ = __result_obj__ = result_282;
                                                        return __result137__;
                                                    }
                                                    self->it=self->it->next;
                                                    if(self->it) {
                                                        __result138__ = __result_obj__ = self->it->item;
                                                        return __result138__;
                                                    }
                                                    memset(&result_283,0,sizeof(char*));
                                                    __result139__ = __result_obj__ = result_283;
                                                    return __result139__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional464;
void* right_value301;
struct list_item$1charp* litem_284;
_Bool _if_conditional465;
void* right_value302;
struct list_item$1charp* litem_285;
void* right_value303;
struct list_item$1charp* litem_286;
struct list$1charp* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
right_value301 = (void*)0;
memset(&litem_284, 0, sizeof(struct list_item$1charp*));
right_value302 = (void*)0;
memset(&litem_285, 0, sizeof(struct list_item$1charp*));
right_value303 = (void*)0;
memset(&litem_286, 0, sizeof(struct list_item$1charp*));
                                                        if(_if_conditional464=self->len==0,                                                        _if_conditional464) {
                                                            litem_284=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value301=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 226, "struct list_item$1charp"))));
                                                            come_call_finalizer2(list_item$1charpp_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            litem_284->prev=((void*)0);
                                                            litem_284->next=((void*)0);
                                                            litem_284->item=item;
                                                            self->tail=litem_284;
                                                            self->head=litem_284;
                                                        }
                                                        else {
                                                            if(_if_conditional465=self->len==1,                                                            _if_conditional465) {
                                                                litem_285=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value302=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 236, "struct list_item$1charp"))));
                                                                come_call_finalizer2(list_item$1charpp_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                litem_285->prev=self->head;
                                                                litem_285->next=((void*)0);
                                                                litem_285->item=item;
                                                                self->tail=litem_285;
                                                                self->head->next=litem_285;
                                                            }
                                                            else {
                                                                litem_286=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value303=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 246, "struct list_item$1charp"))));
                                                                come_call_finalizer2(list_item$1charpp_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                litem_286->prev=self->tail;
                                                                litem_286->next=((void*)0);
                                                                litem_286->item=item;
                                                                self->tail->next=litem_286;
                                                                self->tail=litem_286;
                                                            }
                                                        }
                                                        self->len++;
                                                        __result140__ = __result_obj__ = self;
                                                        return __result140__;
}

