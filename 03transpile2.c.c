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
struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool
{
    struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* v1;
    _Bool v2;
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
struct optional$2sNodephbool
{
    struct sNode* v1;
    _Bool v2;
};
struct optional$2sFunpbool
{
    struct sFun* v1;
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

void* come_calloc(unsigned long int count, unsigned long int size, char* sname, int sline);

void* come_increment_ref_count(void* mem);

void* come_print_ref_count(void* mem);

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);

void come_free_object(void* mem);

void* come_memdup(void* block, char* sname, int sline);

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

char* create_generics_name(struct sType* generics_type, struct sInfo* info);

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

struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* parse_params(struct sInfo* info);

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

struct optional$2charphbool* parse_word(struct sInfo* info);

void skip_spaces_and_lf(struct sInfo* info);

struct optional$2intbool* expected_next_character(char c, struct sInfo* info);

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

struct optional$2sNodephbool* string_node_v5(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator_v5(struct sNode* node, struct sInfo* info);

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info);

struct sNode* expression_node_v98(struct sInfo* info);

struct sNode* parse_tuple(struct sInfo* info);

struct sNode* create_none_object(struct sNode* exp, struct sInfo* info);

struct sNode* create_some_object(struct sNode* exp, struct sInfo* info);

struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct sType* type, _Bool alloc, struct sNode* right_node, struct sInfo* info);

struct sNode* load_var(char* name, struct sInfo* info);

struct optional$2sNodephbool* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info);

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);

struct optional$2sNodephbool* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info);

struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info);

struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info);

struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info);

struct optional$2sNodephbool* string_node_v9(char* buf, char* head, int head_sline, struct sInfo* info);

struct optional$2sNodephbool* string_node_v10(char* buf, char* head, int head_sline, struct sInfo* info);

struct optional$2sNodephbool* string_node_v11(char* buf, char* head, int head_sline, struct sInfo* info);

struct optional$2sNodephbool* string_node_v12(char* buf, char* head, int head_sline, struct sInfo* info);

_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, struct sInfo* info);

struct sNode* expression_v13(struct sInfo* info);

struct sNode* post_op_v13(struct sNode* node, struct sInfo* info);

struct optional$2sNodephbool* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* create_null_object(struct sInfo* info);

struct optional$2sNodephbool* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* parse_struct(char* type_name, struct sInfo* info);

char* get_none_generics_name(char* class_name);

struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);

void output_struct(struct sClass* klass, struct sInfo* info);

struct optional$2sNodephbool* string_node_v15(char* buf, char* head, int head_sline, struct sInfo* info);

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

struct optional$2sNodephbool* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator3_v20(struct sNode* node, struct sInfo* info);

struct sNode* create_object(struct sType* type, struct sInfo* info);

struct sNode* create_true_object(struct sInfo* info);

struct sNode* create_false_object(struct sInfo* info);

struct optional$2sNodephbool* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator3_v21(struct sNode* node, struct sInfo* info);

struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);

void come_init_v3();

void come_final_v3();

struct optional$2charphbool* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info);

static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static char* optional$2charphbool_expect(struct optional$2charphbool* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
char* make_come_type_name_string(struct sType* type, struct sInfo* info);

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
void show_type(struct sType* type, struct sInfo* info);

struct optional$2charphbool* make_lambda_type_name_string(struct sType* type, char* var_name, struct sInfo* info);

struct optional$2charphbool* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info);

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
char* output_function(struct sFun* fun, struct sInfo* info);

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
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
static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
char* header_function(struct sFun* fun, struct sInfo* info);

char* header_lambda(struct sType* lambda_type, char* name, struct sInfo* info);

void add_come_code(struct sInfo* info, const char* msg, ...);

static void va_list_finalize(va_list self);
void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...);

int transpile_v3(struct sInfo* info);

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item);
static void map$2charphsFunph_rehash(struct map$2charphsFunph* self);
static char* map$2charphsFunph_begin(struct map$2charphsFunph* self);
static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self);
static char* map$2charphsFunph_next(struct map$2charphsFunph* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
_Bool output_source_file_v3(struct sInfo* info);

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2);
static void optional$2sFunpboolp_finalize(struct optional$2sFunpbool* self);
static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self);
static void list$1charpp_finalize(struct list$1charp* self);
_Bool output_header_file(struct sInfo* info);

void add_come_code_at_function_head(struct sInfo* info, char* code, ...);

void add_come_code_at_function_head2(struct sInfo* info, char* code, ...);

void add_last_code_to_source(struct sInfo* info);

void add_last_code_to_source_with_comma(struct sInfo* info);

void add_come_last_code(struct sInfo* info, const char* msg, ...);

void add_come_last_code2(struct sInfo* info, const char* msg, ...);

void add_come_last_code3(struct sInfo* info, const char* msg, ...);

void dec_stack_ptr(int value, struct sInfo* info);

static struct list$1CVALUEph* list$1CVALUEph_delete(struct list$1CVALUEph* self, int head, int tail);
static struct list$1CVALUEph* list$1CVALUEph_reset(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct CVALUE* get_value_from_stack(int offset, struct sInfo* info);

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
void transpiler_clear_last_code(struct sInfo* info);

// inline function
static inline _Bool die(char* msg){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result1__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 108 "./comelang2.h"
    perror(msg);
    # 109 "./comelang2.h"
    stackframe();
    # 110 "./comelang2.h"
    exit(4);
    # 112 "./comelang2.h"
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
    # 1997 "./comelang2.h"
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1997))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value0);
    if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value0;
    __freed_obj__ = 0;
    # 1999 "./comelang2.h"
    __dec_obj1=result_0->memory;
    result_0->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_clone(self))));
    if(__dec_obj1) { come_call_finalizer(buffer_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value1);
    if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value1;
    __freed_obj__ = 0;
    # 2000 "./comelang2.h"
    result_0->p=result_0->memory->buf;
    # 2002 "./comelang2.h"
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
    # 2007 "./comelang2.h"
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2007))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value2);
    if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value2;
    __freed_obj__ = 0;
    # 2009 "./comelang2.h"
    __dec_obj2=result_1->memory;
    result_1->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_clone(self))));
    if(__dec_obj2) { come_call_finalizer(buffer_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value3);
    if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value3;
    __freed_obj__ = 0;
    # 2010 "./comelang2.h"
    result_1->p=(char*)result_1->memory->buf;
    # 2012 "./comelang2.h"
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
    # 2017 "./comelang2.h"
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2017))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value4);
    if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value4;
    __freed_obj__ = 0;
    # 2019 "./comelang2.h"
    __dec_obj3=result_2->memory;
    result_2->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_clone(self))));
    if(__dec_obj3) { come_call_finalizer(buffer_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value5);
    if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value5;
    __freed_obj__ = 0;
    # 2020 "./comelang2.h"
    result_2->p=(short short*)result_2->memory->buf;
    # 2022 "./comelang2.h"
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
    # 2027 "./comelang2.h"
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2027))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value6);
    if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value6;
    __freed_obj__ = 0;
    # 2029 "./comelang2.h"
    __dec_obj4=result_3->memory;
    result_3->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_clone(self))));
    if(__dec_obj4) { come_call_finalizer(buffer_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value7);
    if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value7;
    __freed_obj__ = 0;
    # 2030 "./comelang2.h"
    result_3->p=(int*)result_3->memory->buf;
    # 2032 "./comelang2.h"
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
    # 2037 "./comelang2.h"
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2037))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value8);
    if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value8;
    __freed_obj__ = 0;
    # 2039 "./comelang2.h"
    __dec_obj5=result_4->memory;
    result_4->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_clone(self))));
    if(__dec_obj5) { come_call_finalizer(buffer_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value9);
    if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value9;
    __freed_obj__ = 0;
    # 2040 "./comelang2.h"
    result_4->p=(long*)result_4->memory->buf;
    # 2042 "./comelang2.h"
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
        # 1 "smart_pointer$1charp_finalize"
        # 0 "smart_pointer$1charp_finalize"
        if(_if_conditional1=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional1) {
            # 0 "smart_pointer$1charp_finalize"
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
        # 1 "smart_pointer$1shortp_finalize"
        # 0 "smart_pointer$1shortp_finalize"
        if(_if_conditional2=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional2) {
            # 0 "smart_pointer$1shortp_finalize"
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
        # 1 "smart_pointer$1intp_finalize"
        # 0 "smart_pointer$1intp_finalize"
        if(_if_conditional3=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional3) {
            # 0 "smart_pointer$1intp_finalize"
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
        # 1 "smart_pointer$1longp_finalize"
        # 0 "smart_pointer$1longp_finalize"
        if(_if_conditional4=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional4) {
            # 0 "smart_pointer$1longp_finalize"
            if(self->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}

void come_init_v3(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

void come_final_v3(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

struct optional$2charphbool* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value10;
void* right_value11;
struct buffer* buf_5;
char* class_name_6;
_Bool _if_conditional5;
_Bool _if_conditional6;
void* right_value12;
void* right_value13;
void* right_value14;
struct optional$2charphbool* __result8__;
void* right_value15;
struct CVALUE* come_value_7;
void* right_value16;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional29;
_Bool _if_conditional30;
_Bool _if_conditional31;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
_Bool _if_conditional47;
void* right_value17;
char* result_type_str_14;
int j_15;
struct list$1sTypeph* o2_saved_16;
struct sType* it_19;
_Bool _for_condtionalA1;
void* right_value18;
char* param_type_str_22;
_Bool _if_conditional53;
_Bool _if_conditional54;
void* right_value19;
void* right_value20;
void* right_value21;
struct optional$2charphbool* __result18__;
_Bool _if_conditional55;
int i_23;
_Bool _for_condtionalA2;
_Bool _if_conditional56;
_Bool _if_conditional57;
void* right_value22;
void* right_value23;
void* right_value24;
struct optional$2charphbool* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
memset(&right_value11, 0, sizeof(void*));
memset(&buf_5, 0, sizeof(struct buffer*));
memset(&class_name_6, 0, sizeof(char*));
memset(&right_value12, 0, sizeof(void*));
memset(&right_value13, 0, sizeof(void*));
memset(&right_value14, 0, sizeof(void*));
memset(&right_value15, 0, sizeof(void*));
memset(&come_value_7, 0, sizeof(struct CVALUE*));
memset(&right_value16, 0, sizeof(void*));
memset(&right_value17, 0, sizeof(void*));
memset(&result_type_str_14, 0, sizeof(char*));
memset(&j_15, 0, sizeof(int));
memset(&o2_saved_16, 0, sizeof(struct list$1sTypeph*));
memset(&it_19, 0, sizeof(struct sType*));
memset(&right_value18, 0, sizeof(void*));
memset(&param_type_str_22, 0, sizeof(char*));
memset(&right_value19, 0, sizeof(void*));
memset(&right_value20, 0, sizeof(void*));
memset(&right_value21, 0, sizeof(void*));
memset(&i_23, 0, sizeof(int));
memset(&right_value22, 0, sizeof(void*));
memset(&right_value23, 0, sizeof(void*));
memset(&right_value24, 0, sizeof(void*));
    # 15 "03transpile2.c"
    buf_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 15))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
    if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value10;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value11);
    if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value11;
    __freed_obj__ = 0;
    # 17 "03transpile2.c"
    class_name_6=type->mClass->mName;
    # 31 "03transpile2.c"
    # 19 "03transpile2.c"
    if(_if_conditional5=type->mAlignas,    _if_conditional5) {
        # 25 "03transpile2.c"
        # 20 "03transpile2.c"
        if(_if_conditional6=!node_compile(type->mAlignas,info),        _if_conditional6) {
            # 21 "03transpile2.c"
            printf("_Alignas error\n");
            # 22 "03transpile2.c"
            __result8__ = __result_obj__ = ((struct optional$2charphbool*)(right_value14=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value13=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 22))),(char*)come_increment_ref_count(((char*)(right_value12=__builtin_string("")))),(_Bool)0)));
            if(buf_5 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
            if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { right_value12 = come_decrement_ref_count(right_value12, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value12;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value13);
            if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { right_value13 = come_decrement_ref_count(right_value13, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value13;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value14);
            if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value14;
            __freed_obj__ = 0;
            return __result8__;
        }
        # 25 "03transpile2.c"
        come_value_7=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value15=get_value_from_stack(-1,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value15);
        if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value15;
        __freed_obj__ = 0;
        # 26 "03transpile2.c"
        dec_stack_ptr(1,info);
        # 28 "03transpile2.c"
        buffer_append_str(buf_5,((char*)(right_value16=xsprintf("_Alignas(%s) ",come_value_7->c_value))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value16);
        if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { right_value16 = come_decrement_ref_count(right_value16, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value16;
        __freed_obj__ = 0;
        if(come_value_7 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_7, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    # 35 "03transpile2.c"
    # 31 "03transpile2.c"
    if(_if_conditional26=type->mStatic&&!type->mClass->mStruct&&!type->mClass->mUnion,    _if_conditional26) {
        # 32 "03transpile2.c"
        buffer_append_str(buf_5,"static ");
    }
    # 39 "03transpile2.c"
    # 35 "03transpile2.c"
    if(_if_conditional27=type->mConstant,    _if_conditional27) {
        # 36 "03transpile2.c"
        buffer_append_str(buf_5,"const ");
    }
    # 44 "03transpile2.c"
    # 39 "03transpile2.c"
    if(_if_conditional28=type->mUnsigned,    _if_conditional28) {
        # 40 "03transpile2.c"
        buffer_append_str(buf_5,"unsigned ");
    }
    # 48 "03transpile2.c"
    # 44 "03transpile2.c"
    if(_if_conditional29=type->mShort,    _if_conditional29) {
        # 45 "03transpile2.c"
        buffer_append_str(buf_5,"short ");
    }
    # 128 "03transpile2.c"
    # 48 "03transpile2.c"
    if(_if_conditional30=string_operator_equals(type->mOriginalTypeName,"va_list"),    _if_conditional30) {
        # 49 "03transpile2.c"
        buffer_append_str(buf_5,"va_list");
    }
    else {
        # 128 "03transpile2.c"
        # 51 "03transpile2.c"
        if(_if_conditional31=string_operator_equals(type->mOriginalTypeName,"__builtin_va_list"),        _if_conditional31) {
            # 52 "03transpile2.c"
            buffer_append_str(buf_5,"__builtin_va_list");
        }
        else {
            # 128 "03transpile2.c"
            # 54 "03transpile2.c"
            if(_if_conditional32=charp_operator_equals(class_name_6,"__builtin_va_list"),            _if_conditional32) {
                # 61 "03transpile2.c"
                # 55 "03transpile2.c"
                if(_if_conditional33=in_header,                _if_conditional33) {
                    # 56 "03transpile2.c"
                    buffer_append_str(buf_5,class_name_6);
                }
                else {
                    # 59 "03transpile2.c"
                    buffer_append_str(buf_5,"va_list");
                }
            }
            else {
                # 128 "03transpile2.c"
                # 62 "03transpile2.c"
                if(_if_conditional34=type->mClass->mStruct,                _if_conditional34) {
                    # 63 "03transpile2.c"
                    buffer_append_str(buf_5,"struct ");
                    # 64 "03transpile2.c"
                    buffer_append_str(buf_5,class_name_6);
                }
                else {
                    # 128 "03transpile2.c"
                    # 66 "03transpile2.c"
                    if(_if_conditional35=type->mClass->mUnion,                    _if_conditional35) {
                        # 67 "03transpile2.c"
                        buffer_append_str(buf_5,"union ");
                        # 68 "03transpile2.c"
                        buffer_append_str(buf_5,class_name_6);
                    }
                    else {
                        # 128 "03transpile2.c"
                        # 70 "03transpile2.c"
                        if(_if_conditional36=type->mClass->mEnum,                        _if_conditional36) {
                            # 71 "03transpile2.c"
                            buffer_append_str(buf_5,"enum ");
                            # 72 "03transpile2.c"
                            buffer_append_str(buf_5,class_name_6);
                        }
                        else {
                            # 128 "03transpile2.c"
                            # 74 "03transpile2.c"
                            if(_if_conditional37=type->mLongLong,                            _if_conditional37) {
                                # 81 "03transpile2.c"
                                # 75 "03transpile2.c"
                                if(_if_conditional38=charp_operator_equals(class_name_6,"int"),                                _if_conditional38) {
                                    # 76 "03transpile2.c"
                                    buffer_append_str(buf_5,"long long int");
                                }
                                else {
                                    # 81 "03transpile2.c"
                                    # 78 "03transpile2.c"
                                    if(_if_conditional39=charp_operator_equals(class_name_6,"long"),                                    _if_conditional39) {
                                        # 79 "03transpile2.c"
                                        buffer_append_str(buf_5,"long long");
                                    }
                                }
                            }
                            else {
                                # 128 "03transpile2.c"
                                # 82 "03transpile2.c"
                                if(_if_conditional40=type->mLong,                                _if_conditional40) {
                                    # 92 "03transpile2.c"
                                    # 83 "03transpile2.c"
                                    if(_if_conditional41=charp_operator_equals(class_name_6,"int"),                                    _if_conditional41) {
                                        # 84 "03transpile2.c"
                                        buffer_append_str(buf_5,"long int");
                                    }
                                    else {
                                        # 92 "03transpile2.c"
                                        # 86 "03transpile2.c"
                                        if(_if_conditional42=charp_operator_equals(class_name_6,"long"),                                        _if_conditional42) {
                                            # 87 "03transpile2.c"
                                            buffer_append_str(buf_5,"long long");
                                        }
                                        else {
                                            # 92 "03transpile2.c"
                                            # 89 "03transpile2.c"
                                            if(_if_conditional43=charp_operator_equals(class_name_6,"double"),                                            _if_conditional43) {
                                                # 90 "03transpile2.c"
                                                buffer_append_str(buf_5,"long double");
                                            }
                                        }
                                    }
                                }
                                else {
                                    # 128 "03transpile2.c"
                                    # 93 "03transpile2.c"
                                    if(_if_conditional44=charp_operator_equals(class_name_6,"long"),                                    _if_conditional44) {
                                        # 94 "03transpile2.c"
                                        buffer_append_str(buf_5,"long");
                                    }
                                    else {
                                        # 128 "03transpile2.c"
                                        # 96 "03transpile2.c"
                                        if(_if_conditional45=charp_operator_equals(class_name_6,"__uint128_t"),                                        _if_conditional45) {
                                            # 97 "03transpile2.c"
                                            buffer_append_str(buf_5,"__uint128_t");
                                        }
                                        else {
                                            # 128 "03transpile2.c"
                                            # 99 "03transpile2.c"
                                            if(_if_conditional46=charp_operator_equals(class_name_6,"bool"),                                            _if_conditional46) {
                                                # 100 "03transpile2.c"
                                                buffer_append_str(buf_5,"_Bool");
                                            }
                                            else {
                                                # 128 "03transpile2.c"
                                                # 102 "03transpile2.c"
                                                if(_if_conditional47=charp_operator_equals(class_name_6,"lambda"),                                                _if_conditional47) {
                                                    # 103 "03transpile2.c"
                                                    result_type_str_14=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value17=make_type_name_string(type->mResultType->v1,in_header,(_Bool)0,(_Bool)0,info)))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value17);
                                                    if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value17;
                                                    __freed_obj__ = 0;
                                                    # 104 "03transpile2.c"
                                                    buffer_append_str(buf_5,result_type_str_14);
                                                    # 105 "03transpile2.c"
                                                    buffer_append_str(buf_5," (*)(");
                                                    # 107 "03transpile2.c"
                                                    j_15=0;
                                                    # 118 "03transpile2.c"
                                                    for(
                                                    o2_saved_16=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_19=list$1sTypeph_begin((o2_saved_16)) ,                                                    0;                                                    _for_condtionalA1=                                                    !list$1sTypeph_end((o2_saved_16)) ,                                                    _for_condtionalA1;                                                    it_19=list$1sTypeph_next((o2_saved_16)) ,                                                    0                                                    ){
                                                        # 109 "03transpile2.c"
                                                        param_type_str_22=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value18=make_type_name_string(it_19,in_header,(_Bool)0,(_Bool)0,info)))));
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
                                                        if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value18;
                                                        __freed_obj__ = 0;
                                                        # 111 "03transpile2.c"
                                                        buffer_append_str(buf_5,param_type_str_22);
                                                        # 116 "03transpile2.c"
                                                        # 113 "03transpile2.c"
                                                        if(_if_conditional53=j_15!=list$1sTypeph_length(type->mParamTypes)-1,                                                        _if_conditional53) {
                                                            # 114 "03transpile2.c"
                                                            buffer_append_str(buf_5,",");
                                                        }
                                                        # 116 "03transpile2.c"
                                                        j_15++;
                                                        if(param_type_str_22 && !__freed_obj__) { param_type_str_22 = come_decrement_ref_count(param_type_str_22, (void*)0, (void*)0, 0, 0, 0); }
                                                    }
                                                    if(o2_saved_16 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_16, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    # 118 "03transpile2.c"
                                                    buffer_append_str(buf_5,")");
                                                    if(result_type_str_14 && !__freed_obj__) { result_type_str_14 = come_decrement_ref_count(result_type_str_14, (void*)0, (void*)0, 0, 0, 0); }
                                                }
                                                else {
                                                    # 125 "03transpile2.c"
                                                    # 121 "03transpile2.c"
                                                    if(_if_conditional54=class_name_6==((void*)0),                                                    _if_conditional54) {
                                                        # 122 "03transpile2.c"
                                                        err_msg(info,"class name is null");
                                                        # 123 "03transpile2.c"
                                                        __result18__ = __result_obj__ = ((struct optional$2charphbool*)(right_value21=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value20=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 123))),(char*)come_increment_ref_count(((char*)(right_value19=__builtin_string("")))),(_Bool)0)));
                                                        if(buf_5 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19);
                                                        if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { right_value19 = come_decrement_ref_count(right_value19, (void*)0, (void*)0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value19;
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value20);
                                                        if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { right_value20 = come_decrement_ref_count(right_value20, (void*)0, (void*)0, 1, 0, 0); }
                                                        __right_value_freed_obj[1] = right_value20;
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value21);
                                                        if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __right_value_freed_obj[2] = right_value21;
                                                        __freed_obj__ = 0;
                                                        return __result18__;
                                                    }
                                                    # 125 "03transpile2.c"
                                                    buffer_append_str(buf_5,class_name_6);
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
    # 134 "03transpile2.c"
    # 128 "03transpile2.c"
    if(_if_conditional55=type->mNoArrayPointerNum==0&&charp_operator_not_equals(class_name_6,"lambda")&&!no_pointer&&string_operator_not_equals(type->mOriginalTypeName,"va_list")&&string_operator_not_equals(type->mOriginalTypeName,"__builtin_va_list"),    _if_conditional55) {
        # 132 "03transpile2.c"
        for(
        i_23=0 ,        0;        _for_condtionalA2=        i_23<type->mPointerNum ,        _for_condtionalA2;        i_23++ ,        0        ){
            # 130 "03transpile2.c"
            buffer_append_str(buf_5,"*");
        }
    }
    # 138 "03transpile2.c"
    # 134 "03transpile2.c"
    if(_if_conditional56=array_cast_pointer&&list$1sNodeph_length(type->mArrayNum)>0&&!no_pointer&&string_operator_not_equals(type->mOriginalTypeName,"va_list")&&string_operator_not_equals(type->mOriginalTypeName,"__builtin_va_list"),    _if_conditional56) {
        # 135 "03transpile2.c"
        buffer_append_str(buf_5,"*");
    }
    # 142 "03transpile2.c"
    # 138 "03transpile2.c"
    if(_if_conditional57=type->mRestrict,    _if_conditional57) {
        # 139 "03transpile2.c"
        buffer_append_str(buf_5,"restrict");
    }
    # 142 "03transpile2.c"
    __result20__ = __result_obj__ = ((struct optional$2charphbool*)(right_value24=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value23=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 142)))),(char*)come_increment_ref_count(((char*)(right_value22=buffer_to_string(buf_5)))),(_Bool)1)));
    if(buf_5 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value22);
    if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { right_value22 = come_decrement_ref_count(right_value22, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value22;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value23);
    if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { right_value23 = come_decrement_ref_count(right_value23, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value23;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value24);
    if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value24;
    __freed_obj__ = 0;
    return __result20__;
    if(buf_5 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __dec_obj6;
struct optional$2charphbool* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                # 40 "./comelang2.h"
                __dec_obj6=self->v1;
                self->v1=(char*)come_increment_ref_count(v1);
                if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
                # 41 "./comelang2.h"
                self->v2=v2;
                # 43 "./comelang2.h"
                __result7__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
                return __result7__;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    # 1 "optional$2charphboolp_finalize"
                    # 0 "optional$2charphboolp_finalize"
                    if(_if_conditional7=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional7) {
                        # 0 "optional$2charphboolp_finalize"
                        if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional8;
_Bool _if_conditional9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            # 1 "CVALUE_finalize"
            # 0 "CVALUE_finalize"
            if(_if_conditional8=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional8) {
                # 0 "CVALUE_finalize"
                if(self->c_value && !__freed_obj__) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, 0); }
            }
            # 2 "CVALUE_finalize"
            # 1 "CVALUE_finalize"
            if(_if_conditional9=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional9) {
                # 1 "CVALUE_finalize"
                if(self->type && !__freed_obj__) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional10;
_Bool _if_conditional12;
_Bool _if_conditional13;
_Bool _if_conditional14;
_Bool _if_conditional16;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    # 1 "sType_finalize"
                    # 0 "sType_finalize"
                    if(_if_conditional10=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                    _if_conditional10) {
                        # 0 "sType_finalize"
                        if(self->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    # 2 "sType_finalize"
                    # 1 "sType_finalize"
                    if(_if_conditional12=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                    _if_conditional12) {
                        # 1 "sType_finalize"
                        if(self->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    # 3 "sType_finalize"
                    # 2 "sType_finalize"
                    if(_if_conditional13=self!=((void*)0)&&self->mGenericsName!=((void*)0),                    _if_conditional13) {
                        # 2 "sType_finalize"
                        if(self->mGenericsName && !__freed_obj__) { self->mGenericsName = come_decrement_ref_count(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    # 4 "sType_finalize"
                    # 3 "sType_finalize"
                    if(_if_conditional14=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                    _if_conditional14) {
                        # 3 "sType_finalize"
                        if(self->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    # 5 "sType_finalize"
                    # 4 "sType_finalize"
                    if(_if_conditional16=self!=((void*)0)&&self->mArrayNum!=((void*)0),                    _if_conditional16) {
                        # 4 "sType_finalize"
                        if(self->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    # 6 "sType_finalize"
                    # 5 "sType_finalize"
                    if(_if_conditional18=self!=((void*)0)&&self->mParamTypes!=((void*)0),                    _if_conditional18) {
                        # 5 "sType_finalize"
                        if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    # 7 "sType_finalize"
                    # 6 "sType_finalize"
                    if(_if_conditional19=self!=((void*)0)&&self->mParamNames!=((void*)0),                    _if_conditional19) {
                        # 6 "sType_finalize"
                        if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    # 8 "sType_finalize"
                    # 7 "sType_finalize"
                    if(_if_conditional21=self!=((void*)0)&&self->mResultType!=((void*)0),                    _if_conditional21) {
                        # 7 "sType_finalize"
                        if(self->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    # 9 "sType_finalize"
                    # 8 "sType_finalize"
                    if(_if_conditional22=self!=((void*)0)&&self->mAlignas!=((void*)0),                    _if_conditional22) {
                        # 8 "sType_finalize"
                        if(self->mAlignas && !__freed_obj__) { self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0); } 
                    }
                    # 10 "sType_finalize"
                    # 9 "sType_finalize"
                    if(_if_conditional23=self!=((void*)0)&&self->mSizeNum!=((void*)0),                    _if_conditional23) {
                        # 9 "sType_finalize"
                        if(self->mSizeNum && !__freed_obj__) { self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                    }
                    # 11 "sType_finalize"
                    # 10 "sType_finalize"
                    if(_if_conditional24=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                    _if_conditional24) {
                        # 10 "sType_finalize"
                        if(self->mOriginalTypeName && !__freed_obj__) { self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    # 12 "sType_finalize"
                    # 11 "sType_finalize"
                    if(_if_conditional25=self!=((void*)0)&&self->mAsmName!=((void*)0),                    _if_conditional25) {
                        # 11 "sType_finalize"
                        if(self->mAsmName && !__freed_obj__) { self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            # 1 "tuple1$1sTypephp_finalize"
                            # 0 "tuple1$1sTypephp_finalize"
                            if(_if_conditional11=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional11) {
                                # 0 "tuple1$1sTypephp_finalize"
                                if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sTypeph* it_8;
_Bool _while_condtional1;
struct list_item$1sTypeph* prev_it_9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_8, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_9, 0, sizeof(struct list_item$1sTypeph*));
                            # 176 "./comelang2.h"
                            it_8=self->head;
                            # 182 "./comelang2.h"
                            while(_while_condtional1=it_8!=((void*)0),                            _while_condtional1) {
                                # 178 "./comelang2.h"
                                prev_it_9=it_8;
                                # 179 "./comelang2.h"
                                it_8=it_8->next;
                                # 180 "./comelang2.h"
                                if(prev_it_9 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_9, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional15;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    # 1 "list_item$1sTypephp_finalize"
                                    # 0 "list_item$1sTypephp_finalize"
                                    if(_if_conditional15=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional15) {
                                        # 0 "list_item$1sTypephp_finalize"
                                        if(self->item && !__freed_obj__) { come_call_finalizer(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_10;
_Bool _while_condtional2;
struct list_item$1sNodeph* prev_it_11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_10, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_11, 0, sizeof(struct list_item$1sNodeph*));
                            # 176 "./comelang2.h"
                            it_10=self->head;
                            # 182 "./comelang2.h"
                            while(_while_condtional2=it_10!=((void*)0),                            _while_condtional2) {
                                # 178 "./comelang2.h"
                                prev_it_11=it_10;
                                # 179 "./comelang2.h"
                                it_10=it_10->next;
                                # 180 "./comelang2.h"
                                if(prev_it_11 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_11, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    # 1 "list_item$1sNodephp_finalize"
                                    # 0 "list_item$1sNodephp_finalize"
                                    if(_if_conditional17=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional17) {
                                        # 0 "list_item$1sNodephp_finalize"
                                        if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0); } 
                                    }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_12;
_Bool _while_condtional3;
struct list_item$1charph* prev_it_13;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_12, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_13, 0, sizeof(struct list_item$1charph*));
                            # 176 "./comelang2.h"
                            it_12=self->head;
                            # 182 "./comelang2.h"
                            while(_while_condtional3=it_12!=((void*)0),                            _while_condtional3) {
                                # 178 "./comelang2.h"
                                prev_it_13=it_12;
                                # 179 "./comelang2.h"
                                it_12=it_12->next;
                                # 180 "./comelang2.h"
                                if(prev_it_13 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_13, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional20;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    # 1 "list_item$1charphp_finalize"
                                    # 0 "list_item$1charphp_finalize"
                                    if(_if_conditional20=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional20) {
                                        # 0 "list_item$1charphp_finalize"
                                        if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, 0); }
                                    }
}

static char* optional$2charphbool_expect(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional48;
char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        # 78 "./comelang2.h"
                                                        # 72 "./comelang2.h"
                                                        if(_if_conditional48=!self->v2,                                                        _if_conditional48) {
                                                            # 73 "./comelang2.h"
                                                            puts("Exception: at");
                                                            # 74 "./comelang2.h"
                                                            exception_stackframe();
                                                            # 75 "./comelang2.h"
                                                            puts("abort.");
                                                            # 76 "./comelang2.h"
                                                            exit(2);
                                                        }
                                                        # 78 "./comelang2.h"
                                                        __result9__ = __result_obj__ = self->v1;
                                                        return __result9__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional49;
struct sType* result_17;
struct sType* __result10__;
_Bool _if_conditional50;
struct sType* __result11__;
struct sType* result_18;
struct sType* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_17, 0, sizeof(struct sType*));
memset(&result_18, 0, sizeof(struct sType*));
                                                        # 343 "./comelang2.h"
                                                        # 338 "./comelang2.h"
                                                        if(_if_conditional49=self==((void*)0),                                                        _if_conditional49) {
                                                            # 339 "./comelang2.h"
                                                            # 340 "./comelang2.h"
                                                            memset(&result_17,0,sizeof(struct sType*));
                                                            # 341 "./comelang2.h"
                                                            __result10__ = __result_obj__ = result_17;
                                                            return __result10__;
                                                        }
                                                        # 343 "./comelang2.h"
                                                        self->it=self->head;
                                                        # 349 "./comelang2.h"
                                                        # 345 "./comelang2.h"
                                                        if(_if_conditional50=self->it,                                                        _if_conditional50) {
                                                            # 346 "./comelang2.h"
                                                            __result11__ = __result_obj__ = self->it->item;
                                                            return __result11__;
                                                        }
                                                        # 349 "./comelang2.h"
                                                        # 350 "./comelang2.h"
                                                        memset(&result_18,0,sizeof(struct sType*));
                                                        # 351 "./comelang2.h"
                                                        __result12__ = __result_obj__ = result_18;
                                                        return __result12__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        # 373 "./comelang2.h"
                                                        __result13__ = self==((void*)0)||self->it==((void*)0);
                                                        return __result13__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional51;
struct sType* result_20;
struct sType* __result14__;
_Bool _if_conditional52;
struct sType* __result15__;
struct sType* result_21;
struct sType* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_20, 0, sizeof(struct sType*));
memset(&result_21, 0, sizeof(struct sType*));
                                                        # 361 "./comelang2.h"
                                                        # 355 "./comelang2.h"
                                                        if(_if_conditional51=self==((void*)0)||self->it==((void*)0),                                                        _if_conditional51) {
                                                            # 356 "./comelang2.h"
                                                            # 357 "./comelang2.h"
                                                            memset(&result_20,0,sizeof(struct sType*));
                                                            # 358 "./comelang2.h"
                                                            __result14__ = __result_obj__ = result_20;
                                                            return __result14__;
                                                        }
                                                        # 361 "./comelang2.h"
                                                        self->it=self->it->next;
                                                        # 367 "./comelang2.h"
                                                        # 363 "./comelang2.h"
                                                        if(_if_conditional52=self->it,                                                        _if_conditional52) {
                                                            # 364 "./comelang2.h"
                                                            __result15__ = __result_obj__ = self->it->item;
                                                            return __result15__;
                                                        }
                                                        # 367 "./comelang2.h"
                                                        # 368 "./comelang2.h"
                                                        memset(&result_21,0,sizeof(struct sType*));
                                                        # 369 "./comelang2.h"
                                                        __result16__ = __result_obj__ = result_21;
                                                        return __result16__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                            # 417 "./comelang2.h"
                                                            __result17__ = self->len;
                                                            return __result17__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        # 417 "./comelang2.h"
        __result19__ = self->len;
        return __result19__;
}

char* make_come_type_name_string(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value25;
void* right_value26;
struct buffer* buf_24;
char* class_name_25;
_Bool _if_conditional58;
int i_26;
_Bool _for_condtionalA3;
struct sType* gtype_30;
void* right_value27;
_Bool _if_conditional61;
_Bool _if_conditional62;
int i_31;
_Bool _for_condtionalA4;
_Bool _if_conditional63;
void* right_value28;
char* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value25, 0, sizeof(void*));
memset(&right_value26, 0, sizeof(void*));
memset(&buf_24, 0, sizeof(struct buffer*));
memset(&class_name_25, 0, sizeof(char*));
memset(&i_26, 0, sizeof(int));
memset(&gtype_30, 0, sizeof(struct sType*));
memset(&right_value27, 0, sizeof(void*));
memset(&i_31, 0, sizeof(int));
memset(&right_value28, 0, sizeof(void*));
    # 147 "03transpile2.c"
    buf_24=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value26=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value25=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 147))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
    if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value25;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value26);
    if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value26;
    __freed_obj__ = 0;
    # 149 "03transpile2.c"
    class_name_25=type->mClass->mName;
    # 151 "03transpile2.c"
    buffer_append_str(buf_24,class_name_25);
    # 168 "03transpile2.c"
    # 153 "03transpile2.c"
    if(_if_conditional58=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional58) {
        # 154 "03transpile2.c"
        buffer_append_str(buf_24,"<");
        # 165 "03transpile2.c"
        for(
        i_26=0 ,        0;        _for_condtionalA3=        i_26<list$1sTypeph_length(type->mGenericsTypes) ,        _for_condtionalA3;        i_26++ ,        0        ){
            # 156 "03transpile2.c"
            gtype_30=list$1sTypephp_operator_load_element(type->mGenericsTypes,i_26);
            # 158 "03transpile2.c"
            buffer_append_str(buf_24,((char*)(right_value27=make_come_type_name_string(gtype_30,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
            if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { right_value27 = come_decrement_ref_count(right_value27, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value27;
            __freed_obj__ = 0;
            # 163 "03transpile2.c"
            # 160 "03transpile2.c"
            if(_if_conditional61=i_26!=list$1sTypeph_length(type->mGenericsTypes)-1,            _if_conditional61) {
                # 161 "03transpile2.c"
                buffer_append_str(buf_24,",");
            }
        }
        # 165 "03transpile2.c"
        buffer_append_str(buf_24,">");
    }
    # 174 "03transpile2.c"
    # 168 "03transpile2.c"
    if(_if_conditional62=type->mNoArrayPointerNum==0&&charp_operator_not_equals(class_name_25,"lambda"),    _if_conditional62) {
        # 172 "03transpile2.c"
        for(
        i_31=0 ,        0;        _for_condtionalA4=        i_31<type->mPointerNum ,        _for_condtionalA4;        i_31++ ,        0        ){
            # 170 "03transpile2.c"
            buffer_append_str(buf_24,"*");
        }
    }
    # 178 "03transpile2.c"
    # 174 "03transpile2.c"
    if(_if_conditional63=type->mHeap,    _if_conditional63) {
        # 175 "03transpile2.c"
        buffer_append_str(buf_24,"%");
    }
    # 178 "03transpile2.c"
    __result23__ = __result_obj__ = ((char*)(right_value28=buffer_to_string(buf_24)));
    if(buf_24 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_24, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value28);
    if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { right_value28 = come_decrement_ref_count(right_value28, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value28;
    __freed_obj__ = 0;
    return __result23__;
    if(buf_24 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_24, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional59;
struct list_item$1sTypeph* it_27;
int i_28;
_Bool _while_condtional4;
_Bool _if_conditional60;
struct sType* __result21__;
struct sType* default_value_29;
struct sType* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_27, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_28, 0, sizeof(int));
memset(&default_value_29, 0, sizeof(struct sType*));
                # 745 "./comelang2.h"
                # 741 "./comelang2.h"
                if(_if_conditional59=position<0,                _if_conditional59) {
                    # 742 "./comelang2.h"
                    position+=self->len;
                }
                # 745 "./comelang2.h"
                it_27=self->head;
                # 746 "./comelang2.h"
                i_28=0;
                # 753 "./comelang2.h"
                while(_while_condtional4=it_27!=((void*)0),                _while_condtional4) {
                    # 751 "./comelang2.h"
                    # 748 "./comelang2.h"
                    if(_if_conditional60=position==i_28,                    _if_conditional60) {
                        # 749 "./comelang2.h"
                        __result21__ = __result_obj__ = it_27->item;
                        return __result21__;
                    }
                    # 751 "./comelang2.h"
                    it_27=it_27->next;
                    # 752 "./comelang2.h"
                    i_28++;
                }
                # 755 "./comelang2.h"
                # 756 "./comelang2.h"
                memset(&default_value_29,0,sizeof(struct sType*));
                # 757 "./comelang2.h"
                __result22__ = __result_obj__ = default_value_29;
                if(default_value_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_29, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result22__;
                if(default_value_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_29, (void*)0, (void*)0, 0, 0, 0, 0); }
}

void show_type(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value29;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value29, 0, sizeof(void*));
    # 183 "03transpile2.c"
    puts(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value29=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
    if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value29;
    __freed_obj__ = 0;
}

struct optional$2charphbool* make_lambda_type_name_string(struct sType* type, char* var_name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value30;
void* right_value31;
struct buffer* buf_32;
_Bool _if_conditional64;
void* right_value32;
void* right_value33;
void* right_value34;
struct optional$2charphbool* __result24__;
_Bool _if_conditional65;
void* right_value35;
int i_33;
struct list$1sTypeph* o2_saved_34;
struct sType* it_35;
_Bool _for_condtionalA5;
void* right_value36;
_Bool _if_conditional66;
void* right_value37;
void* right_value38;
void* right_value39;
void* right_value40;
struct optional$2charphbool* __result25__;
void* right_value41;
void* right_value42;
int i_36;
struct list$1sTypeph* o2_saved_37;
struct sType* it_38;
_Bool _for_condtionalA6;
void* right_value43;
_Bool _if_conditional67;
void* right_value44;
void* right_value45;
void* right_value46;
struct optional$2charphbool* __result26__;
void* right_value47;
void* right_value48;
void* right_value49;
struct optional$2charphbool* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value30, 0, sizeof(void*));
memset(&right_value31, 0, sizeof(void*));
memset(&buf_32, 0, sizeof(struct buffer*));
memset(&right_value32, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
memset(&right_value34, 0, sizeof(void*));
memset(&right_value35, 0, sizeof(void*));
memset(&i_33, 0, sizeof(int));
memset(&o2_saved_34, 0, sizeof(struct list$1sTypeph*));
memset(&it_35, 0, sizeof(struct sType*));
memset(&right_value36, 0, sizeof(void*));
memset(&right_value37, 0, sizeof(void*));
memset(&right_value38, 0, sizeof(void*));
memset(&right_value39, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
memset(&right_value41, 0, sizeof(void*));
memset(&right_value42, 0, sizeof(void*));
memset(&i_36, 0, sizeof(int));
memset(&o2_saved_37, 0, sizeof(struct list$1sTypeph*));
memset(&it_38, 0, sizeof(struct sType*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
memset(&right_value49, 0, sizeof(void*));
    # 188 "03transpile2.c"
    buf_32=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value30=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 188))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
    if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value30;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value31);
    if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value31;
    __freed_obj__ = 0;
    # 194 "03transpile2.c"
    # 189 "03transpile2.c"
    if(_if_conditional64=type->mResultType==((void*)0),    _if_conditional64) {
        # 190 "03transpile2.c"
        err_msg(info,"invalid lambda type");
        # 191 "03transpile2.c"
        __result24__ = __result_obj__ = ((struct optional$2charphbool*)(right_value34=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value33=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 191))),(char*)come_increment_ref_count(((char*)(right_value32=__builtin_string("")))),(_Bool)0)));
        if(buf_32 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_32, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
        if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { right_value32 = come_decrement_ref_count(right_value32, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value32;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value33);
        if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value33;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value34);
        if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value34;
        __freed_obj__ = 0;
        return __result24__;
    }
    # 230 "03transpile2.c"
    # 194 "03transpile2.c"
    if(_if_conditional65=type->mResultType->v1&&string_operator_equals(type->mResultType->v1->mClass->mName,"lambda"),    _if_conditional65) {
        # 196 "03transpile2.c"
        buffer_append_str(buf_32,((char*)(right_value35=xsprintf("(*%s)(",var_name))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
        if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { right_value35 = come_decrement_ref_count(right_value35, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value35;
        __freed_obj__ = 0;
        # 198 "03transpile2.c"
        i_33=0;
        # 208 "03transpile2.c"
        for(
        o2_saved_34=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_35=list$1sTypeph_begin((o2_saved_34)) ,        0;        _for_condtionalA5=        !list$1sTypeph_end((o2_saved_34)) ,        _for_condtionalA5;        it_35=list$1sTypeph_next((o2_saved_34)) ,        0        ){
            # 200 "03transpile2.c"
            buffer_append_str(buf_32,optional$2charphbool_expect(((struct optional$2charphbool*)(right_value36=make_type_name_string(it_35,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
            if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value36;
            __freed_obj__ = 0;
            # 205 "03transpile2.c"
            # 201 "03transpile2.c"
            if(_if_conditional66=i_33!=list$1sTypeph_length(type->mParamTypes)-1,            _if_conditional66) {
                # 202 "03transpile2.c"
                buffer_append_str(buf_32,",");
            }
            # 205 "03transpile2.c"
            i_33++;
        }
        if(o2_saved_34 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_34, (void*)0, (void*)0, 0, 0, 0, 0); }
        # 208 "03transpile2.c"
        buffer_append_str(buf_32,")");
        # 210 "03transpile2.c"
        __result25__ = __result_obj__ = ((struct optional$2charphbool*)(right_value40=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value39=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 210)))),(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value38=make_lambda_type_name_string(type->mResultType->v1,((char*)(right_value37=buffer_to_string(buf_32))),info))))),(_Bool)1)));
        if(buf_32 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_32, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value37);
        if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { right_value37 = come_decrement_ref_count(right_value37, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value37;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value38);
        if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value38;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value39);
        if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { right_value39 = come_decrement_ref_count(right_value39, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value39;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value40);
        if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value40;
        __freed_obj__ = 0;
        return __result25__;
    }
    else {
        # 213 "03transpile2.c"
        buffer_append_str(buf_32,((char*)(right_value42=xsprintf("%s (*%s)(",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value41=make_type_name_string(type->mResultType->v1,(_Bool)0,(_Bool)0,(_Bool)0,info)))),var_name))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
        if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value41;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value42);
        if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value42;
        __freed_obj__ = 0;
        # 215 "03transpile2.c"
        i_36=0;
        # 225 "03transpile2.c"
        for(
        o2_saved_37=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_38=list$1sTypeph_begin((o2_saved_37)) ,        0;        _for_condtionalA6=        !list$1sTypeph_end((o2_saved_37)) ,        _for_condtionalA6;        it_38=list$1sTypeph_next((o2_saved_37)) ,        0        ){
            # 217 "03transpile2.c"
            buffer_append_str(buf_32,optional$2charphbool_expect(((struct optional$2charphbool*)(right_value43=make_type_name_string(it_38,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
            if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value43;
            __freed_obj__ = 0;
            # 222 "03transpile2.c"
            # 218 "03transpile2.c"
            if(_if_conditional67=i_36!=list$1sTypeph_length(type->mParamTypes)-1,            _if_conditional67) {
                # 219 "03transpile2.c"
                buffer_append_str(buf_32,",");
            }
            # 222 "03transpile2.c"
            i_36++;
        }
        if(o2_saved_37 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_37, (void*)0, (void*)0, 0, 0, 0, 0); }
        # 225 "03transpile2.c"
        buffer_append_str(buf_32,")");
        # 227 "03transpile2.c"
        __result26__ = __result_obj__ = ((struct optional$2charphbool*)(right_value46=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value45=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 227)))),(char*)come_increment_ref_count(((char*)(right_value44=buffer_to_string(buf_32)))),(_Bool)1)));
        if(buf_32 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_32, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value44);
        if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { right_value44 = come_decrement_ref_count(right_value44, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value44;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value45);
        if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value45;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value46);
        if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value46;
        __freed_obj__ = 0;
        return __result26__;
    }
    # 230 "03transpile2.c"
    __result27__ = __result_obj__ = ((struct optional$2charphbool*)(right_value49=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value48=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 230)))),(char*)come_increment_ref_count(((char*)(right_value47=buffer_to_string(buf_32)))),(_Bool)1)));
    if(buf_32 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_32, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value47);
    if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value47;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value48);
    if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value48;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value49);
    if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value49;
    __freed_obj__ = 0;
    return __result27__;
    if(buf_32 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_32, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct optional$2charphbool* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value50;
void* right_value51;
struct buffer* buf_39;
_Bool _if_conditional68;
void* right_value52;
char* str_40;
_Bool _if_conditional69;
void* right_value53;
char* str_41;
_Bool _if_conditional70;
_Bool _if_conditional71;
void* right_value54;
void* right_value55;
void* right_value56;
struct optional$2charphbool* __result28__;
void* right_value57;
struct CVALUE* come_value_42;
void* right_value58;
char* type_str_43;
void* right_value59;
void* right_value60;
_Bool _if_conditional72;
void* right_value61;
_Bool _if_conditional73;
void* right_value62;
_Bool _if_conditional74;
void* right_value63;
char* type_str_44;
_Bool _if_conditional75;
void* right_value64;
_Bool _if_conditional76;
void* right_value65;
char* type_str_45;
_Bool _if_conditional77;
_Bool _if_conditional78;
struct list$1sNodeph* o2_saved_46;
struct sNode* it_49;
_Bool _for_condtionalA7;
_Bool _if_conditional83;
void* right_value66;
void* right_value67;
void* right_value68;
struct optional$2charphbool* __result36__;
void* right_value69;
struct CVALUE* cvalue_52;
void* right_value70;
_Bool _if_conditional84;
void* right_value71;
void* right_value72;
char* type_str_53;
_Bool _if_conditional85;
void* right_value73;
void* right_value74;
void* right_value75;
struct optional$2charphbool* __result37__;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
void* right_value76;
void* right_value77;
void* right_value78;
void* right_value79;
struct optional$2charphbool* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value50, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
memset(&buf_39, 0, sizeof(struct buffer*));
memset(&right_value52, 0, sizeof(void*));
memset(&str_40, 0, sizeof(char*));
memset(&right_value53, 0, sizeof(void*));
memset(&str_41, 0, sizeof(char*));
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
memset(&come_value_42, 0, sizeof(struct CVALUE*));
memset(&right_value58, 0, sizeof(void*));
memset(&type_str_43, 0, sizeof(char*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
memset(&type_str_44, 0, sizeof(char*));
memset(&right_value64, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
memset(&type_str_45, 0, sizeof(char*));
memset(&o2_saved_46, 0, sizeof(struct list$1sNodeph*));
memset(&it_49, 0, sizeof(struct sNode*));
memset(&right_value66, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&cvalue_52, 0, sizeof(struct CVALUE*));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
memset(&right_value72, 0, sizeof(void*));
memset(&type_str_53, 0, sizeof(char*));
memset(&right_value73, 0, sizeof(void*));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
    # 237 "03transpile2.c"
    buf_39=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value51=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value50=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 237))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50);
    if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value50;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value51);
    if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value51;
    __freed_obj__ = 0;
    # 336 "03transpile2.c"
    # 239 "03transpile2.c"
    if(_if_conditional68=string_operator_equals(type->mClass->mName,"lambda")&&type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),    _if_conditional68) {
        # 240 "03transpile2.c"
        str_40=(char*)come_increment_ref_count(((char*)(right_value52=header_lambda(type,(char*)come_increment_ref_count(type->mAsmName),info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52);
        if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { right_value52 = come_decrement_ref_count(right_value52, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value52;
        __freed_obj__ = 0;
        # 242 "03transpile2.c"
        buffer_append_str(buf_39,str_40);
        if(str_40 && !__freed_obj__) { str_40 = come_decrement_ref_count(str_40, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        # 336 "03transpile2.c"
        # 244 "03transpile2.c"
        if(_if_conditional69=string_operator_equals(type->mClass->mName,"lambda"),        _if_conditional69) {
            # 245 "03transpile2.c"
            str_41=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value53=make_lambda_type_name_string(type,name,info)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
            if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value53;
            __freed_obj__ = 0;
            # 247 "03transpile2.c"
            buffer_append_str(buf_39,str_41);
            if(str_41 && !__freed_obj__) { str_41 = come_decrement_ref_count(str_41, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            # 336 "03transpile2.c"
            # 249 "03transpile2.c"
            if(_if_conditional70=type->mSizeNum!=((void*)0),            _if_conditional70) {
                # 255 "03transpile2.c"
                # 250 "03transpile2.c"
                if(_if_conditional71=!node_compile(type->mSizeNum,info),                _if_conditional71) {
                    # 251 "03transpile2.c"
                    err_msg(info,"invalid bit field number");
                    # 252 "03transpile2.c"
                    __result28__ = __result_obj__ = ((struct optional$2charphbool*)(right_value56=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value55=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 252))),(char*)come_increment_ref_count(((char*)(right_value54=__builtin_string("")))),(_Bool)0)));
                    if(buf_39 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_39, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
                    if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { right_value54 = come_decrement_ref_count(right_value54, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value54;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value55);
                    if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value55;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value56);
                    if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value56;
                    __freed_obj__ = 0;
                    return __result28__;
                }
                # 255 "03transpile2.c"
                come_value_42=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value57=get_value_from_stack(-1,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
                if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value57;
                __freed_obj__ = 0;
                # 256 "03transpile2.c"
                dec_stack_ptr(1,info);
                # 258 "03transpile2.c"
                type_str_43=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value58=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value58);
                if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value58;
                __freed_obj__ = 0;
                # 259 "03transpile2.c"
                buffer_append_str(buf_39,((char*)(right_value59=xsprintf("%s ",type_str_43))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value59);
                if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value59;
                __freed_obj__ = 0;
                # 260 "03transpile2.c"
                buffer_append_str(buf_39,((char*)(right_value60=xsprintf("%s:%s",name,come_value_42->c_value))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value60);
                if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value60;
                __freed_obj__ = 0;
                # 266 "03transpile2.c"
                # 262 "03transpile2.c"
                if(_if_conditional72=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                _if_conditional72) {
                    # 263 "03transpile2.c"
                    buffer_append_str(buf_39,((char*)(right_value61=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value61);
                    if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { right_value61 = come_decrement_ref_count(right_value61, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value61;
                    __freed_obj__ = 0;
                }
                # 269 "03transpile2.c"
                # 266 "03transpile2.c"
                if(_if_conditional73=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                _if_conditional73) {
                    # 267 "03transpile2.c"
                    buffer_append_str(buf_39,((char*)(right_value62=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
                    if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { right_value62 = come_decrement_ref_count(right_value62, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value62;
                    __freed_obj__ = 0;
                }
                if(come_value_42 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_42, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_str_43 && !__freed_obj__) { type_str_43 = come_decrement_ref_count(type_str_43, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                # 336 "03transpile2.c"
                # 270 "03transpile2.c"
                if(_if_conditional74=type->mOmitArrayNum,                _if_conditional74) {
                    # 271 "03transpile2.c"
                    type_str_44=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value63=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value63);
                    if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value63;
                    __freed_obj__ = 0;
                    # 273 "03transpile2.c"
                    buffer_append_str(buf_39,type_str_44);
                    # 275 "03transpile2.c"
                    buffer_append_str(buf_39," ");
                    # 276 "03transpile2.c"
                    buffer_append_str(buf_39,name);
                    # 278 "03transpile2.c"
                    buffer_append_str(buf_39,"[]");
                    # 283 "03transpile2.c"
                    # 280 "03transpile2.c"
                    if(_if_conditional75=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                    _if_conditional75) {
                        # 281 "03transpile2.c"
                        buffer_append_str(buf_39,((char*)(right_value64=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64);
                        if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { right_value64 = come_decrement_ref_count(right_value64, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value64;
                        __freed_obj__ = 0;
                    }
                    if(type_str_44 && !__freed_obj__) { type_str_44 = come_decrement_ref_count(type_str_44, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    # 336 "03transpile2.c"
                    # 284 "03transpile2.c"
                    if(_if_conditional76=list$1sNodeph_length(type->mArrayNum)>0,                    _if_conditional76) {
                        # 285 "03transpile2.c"
                        type_str_45=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value65=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
                        if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value65;
                        __freed_obj__ = 0;
                        # 287 "03transpile2.c"
                        buffer_append_str(buf_39,type_str_45);
                        # 289 "03transpile2.c"
                        buffer_append_str(buf_39," ");
                        # 293 "03transpile2.c"
                        # 290 "03transpile2.c"
                        if(_if_conditional77=type->mNoArrayPointerNum>0,                        _if_conditional77) {
                            # 291 "03transpile2.c"
                            buffer_append_str(buf_39,"(*");
                        }
                        # 293 "03transpile2.c"
                        buffer_append_str(buf_39,name);
                        # 298 "03transpile2.c"
                        # 294 "03transpile2.c"
                        if(_if_conditional78=type->mNoArrayPointerNum>0,                        _if_conditional78) {
                            # 295 "03transpile2.c"
                            buffer_append_str(buf_39,")");
                        }
                        # 309 "03transpile2.c"
                        for(
                        o2_saved_46=(struct list$1sNodeph*)come_increment_ref_count((type->mArrayNum)),it_49=list$1sNodeph_begin((o2_saved_46)) ,                        0;                        _for_condtionalA7=                        !list$1sNodeph_end((o2_saved_46)) ,                        _for_condtionalA7;                        it_49=list$1sNodeph_next((o2_saved_46)) ,                        0                        ){
                            # 303 "03transpile2.c"
                            # 299 "03transpile2.c"
                            if(_if_conditional83=!node_compile(it_49,info),                            _if_conditional83) {
                                # 300 "03transpile2.c"
                                err_msg(info,"invalid array number");
                                # 301 "03transpile2.c"
                                __result36__ = __result_obj__ = ((struct optional$2charphbool*)(right_value68=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value67=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 301))),(char*)come_increment_ref_count(((char*)(right_value66=__builtin_string("")))),(_Bool)0)));
                                if(o2_saved_46 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_46, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(type_str_45 && !__freed_obj__) { type_str_45 = come_decrement_ref_count(type_str_45, (void*)0, (void*)0, 0, 0, 0); }
                                if(buf_39 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_39, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
                                if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value66;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value67);
                                if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value67;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value68);
                                if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value68;
                                __freed_obj__ = 0;
                                return __result36__;
                            }
                            # 303 "03transpile2.c"
                            cvalue_52=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value69=get_value_from_stack(-1,info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value69);
                            if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value69;
                            __freed_obj__ = 0;
                            # 304 "03transpile2.c"
                            dec_stack_ptr(1,info);
                            # 306 "03transpile2.c"
                            buffer_append_str(buf_39,((char*)(right_value70=xsprintf("[%s]",cvalue_52->c_value))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value70);
                            if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value70;
                            __freed_obj__ = 0;
                            if(cvalue_52 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,cvalue_52, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        if(o2_saved_46 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_46, (void*)0, (void*)0, 0, 0, 0, 0); }
                        # 312 "03transpile2.c"
                        # 309 "03transpile2.c"
                        if(_if_conditional84=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                        _if_conditional84) {
                            # 310 "03transpile2.c"
                            buffer_append_str(buf_39,((char*)(right_value71=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value71);
                            if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { right_value71 = come_decrement_ref_count(right_value71, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value71;
                            __freed_obj__ = 0;
                        }
                        if(type_str_45 && !__freed_obj__) { type_str_45 = come_decrement_ref_count(type_str_45, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    else {
                        # 314 "03transpile2.c"
                        type_str_53=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value72=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value72);
                        if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value72;
                        __freed_obj__ = 0;
                        # 320 "03transpile2.c"
                        # 316 "03transpile2.c"
                        if(_if_conditional85=string_operator_equals(type_str_53,""),                        _if_conditional85) {
                            # 317 "03transpile2.c"
                            __result37__ = __result_obj__ = ((struct optional$2charphbool*)(right_value75=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value74=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 317))),(char*)come_increment_ref_count(((char*)(right_value73=__builtin_string("")))),(_Bool)0)));
                            if(type_str_53 && !__freed_obj__) { type_str_53 = come_decrement_ref_count(type_str_53, (void*)0, (void*)0, 0, 0, 0); }
                            if(buf_39 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_39, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value73);
                            if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value73;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value74);
                            if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { right_value74 = come_decrement_ref_count(right_value74, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value74;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value75);
                            if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value75;
                            __freed_obj__ = 0;
                            return __result37__;
                        }
                        # 320 "03transpile2.c"
                        buffer_append_str(buf_39,type_str_53);
                        # 322 "03transpile2.c"
                        buffer_append_str(buf_39," ");
                        # 326 "03transpile2.c"
                        # 323 "03transpile2.c"
                        if(_if_conditional86=type->mNoArrayPointerNum>0,                        _if_conditional86) {
                            # 324 "03transpile2.c"
                            buffer_append_str(buf_39,"(*");
                        }
                        # 326 "03transpile2.c"
                        buffer_append_str(buf_39,name);
                        # 331 "03transpile2.c"
                        # 327 "03transpile2.c"
                        if(_if_conditional87=type->mNoArrayPointerNum>0,                        _if_conditional87) {
                            # 328 "03transpile2.c"
                            buffer_append_str(buf_39,")");
                        }
                        # 334 "03transpile2.c"
                        # 331 "03transpile2.c"
                        if(_if_conditional88=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                        _if_conditional88) {
                            # 332 "03transpile2.c"
                            buffer_append_str(buf_39,((char*)(right_value76=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value76);
                            if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { right_value76 = come_decrement_ref_count(right_value76, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value76;
                            __freed_obj__ = 0;
                        }
                        if(type_str_53 && !__freed_obj__) { type_str_53 = come_decrement_ref_count(type_str_53, (void*)0, (void*)0, 0, 0, 0); }
                    }
                }
            }
        }
    }
    # 336 "03transpile2.c"
    __result38__ = __result_obj__ = ((struct optional$2charphbool*)(right_value79=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value78=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 336)))),(char*)come_increment_ref_count(((char*)(right_value77=buffer_to_string(buf_39)))),(_Bool)1)));
    if(buf_39 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_39, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value77);
    if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { right_value77 = come_decrement_ref_count(right_value77, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value77;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value78);
    if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value78;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value79);
    if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value79;
    __freed_obj__ = 0;
    return __result38__;
    if(buf_39 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_39, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional79;
struct sNode* result_47;
struct sNode* __result29__;
_Bool _if_conditional80;
struct sNode* __result30__;
struct sNode* result_48;
struct sNode* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_47, 0, sizeof(struct sNode*));
memset(&result_48, 0, sizeof(struct sNode*));
                            # 343 "./comelang2.h"
                            # 338 "./comelang2.h"
                            if(_if_conditional79=self==((void*)0),                            _if_conditional79) {
                                # 339 "./comelang2.h"
                                # 340 "./comelang2.h"
                                memset(&result_47,0,sizeof(struct sNode*));
                                # 341 "./comelang2.h"
                                __result29__ = __result_obj__ = result_47;
                                return __result29__;
                            }
                            # 343 "./comelang2.h"
                            self->it=self->head;
                            # 349 "./comelang2.h"
                            # 345 "./comelang2.h"
                            if(_if_conditional80=self->it,                            _if_conditional80) {
                                # 346 "./comelang2.h"
                                __result30__ = __result_obj__ = self->it->item;
                                return __result30__;
                            }
                            # 349 "./comelang2.h"
                            # 350 "./comelang2.h"
                            memset(&result_48,0,sizeof(struct sNode*));
                            # 351 "./comelang2.h"
                            __result31__ = __result_obj__ = result_48;
                            return __result31__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            # 373 "./comelang2.h"
                            __result32__ = self==((void*)0)||self->it==((void*)0);
                            return __result32__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional81;
struct sNode* result_50;
struct sNode* __result33__;
_Bool _if_conditional82;
struct sNode* __result34__;
struct sNode* result_51;
struct sNode* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_50, 0, sizeof(struct sNode*));
memset(&result_51, 0, sizeof(struct sNode*));
                            # 361 "./comelang2.h"
                            # 355 "./comelang2.h"
                            if(_if_conditional81=self==((void*)0)||self->it==((void*)0),                            _if_conditional81) {
                                # 356 "./comelang2.h"
                                # 357 "./comelang2.h"
                                memset(&result_50,0,sizeof(struct sNode*));
                                # 358 "./comelang2.h"
                                __result33__ = __result_obj__ = result_50;
                                return __result33__;
                            }
                            # 361 "./comelang2.h"
                            self->it=self->it->next;
                            # 367 "./comelang2.h"
                            # 363 "./comelang2.h"
                            if(_if_conditional82=self->it,                            _if_conditional82) {
                                # 364 "./comelang2.h"
                                __result34__ = __result_obj__ = self->it->item;
                                return __result34__;
                            }
                            # 367 "./comelang2.h"
                            # 368 "./comelang2.h"
                            memset(&result_51,0,sizeof(struct sNode*));
                            # 369 "./comelang2.h"
                            __result35__ = __result_obj__ = result_51;
                            return __result35__;
}

char* output_function(struct sFun* fun, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value80;
void* right_value81;
struct buffer* output_54;
_Bool _if_conditional89;
void* right_value82;
void* right_value83;
struct buffer* output2_55;
int i_56;
struct list$1sTypeph* o2_saved_57;
struct sType* it_58;
_Bool _for_condtionalA8;
char* name_62;
void* right_value84;
char* str_63;
_Bool _if_conditional92;
_Bool _if_conditional93;
void* right_value85;
void* right_value86;
char* str_64;
void* right_value87;
_Bool _if_conditional94;
void* right_value122;
struct sType* base_result_type_83;
void* right_value123;
void* right_value124;
struct list$1sNodeph* __dec_obj29;
void* right_value125;
char* result_type_str_84;
int i_85;
struct list$1sTypeph* o2_saved_86;
struct sType* it_87;
_Bool _for_condtionalA9;
char* name_88;
void* right_value126;
char* str_89;
_Bool _if_conditional165;
_Bool _if_conditional166;
struct sNode* node_93;
_Bool _if_conditional169;
void* right_value127;
void* right_value128;
void* right_value129;
char* __result61__;
void* right_value130;
struct CVALUE* cvalue_94;
void* right_value131;
void* right_value132;
void* right_value133;
char* result_type_str_95;
int i_96;
struct list$1sTypeph* o2_saved_97;
struct sType* it_98;
_Bool _for_condtionalA10;
char* name_99;
void* right_value134;
char* str_100;
_Bool _if_conditional170;
_Bool _if_conditional171;
void* right_value135;
void* right_value136;
void* right_value137;
void* right_value138;
void* right_value139;
char* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
memset(&output_54, 0, sizeof(struct buffer*));
memset(&right_value82, 0, sizeof(void*));
memset(&right_value83, 0, sizeof(void*));
memset(&output2_55, 0, sizeof(struct buffer*));
memset(&i_56, 0, sizeof(int));
memset(&o2_saved_57, 0, sizeof(struct list$1sTypeph*));
memset(&it_58, 0, sizeof(struct sType*));
memset(&name_62, 0, sizeof(char*));
memset(&right_value84, 0, sizeof(void*));
memset(&str_63, 0, sizeof(char*));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&str_64, 0, sizeof(char*));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value122, 0, sizeof(void*));
memset(&base_result_type_83, 0, sizeof(struct sType*));
memset(&right_value123, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&result_type_str_84, 0, sizeof(char*));
memset(&i_85, 0, sizeof(int));
memset(&o2_saved_86, 0, sizeof(struct list$1sTypeph*));
memset(&it_87, 0, sizeof(struct sType*));
memset(&name_88, 0, sizeof(char*));
memset(&right_value126, 0, sizeof(void*));
memset(&str_89, 0, sizeof(char*));
memset(&node_93, 0, sizeof(struct sNode*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
memset(&cvalue_94, 0, sizeof(struct CVALUE*));
memset(&right_value131, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&result_type_str_95, 0, sizeof(char*));
memset(&i_96, 0, sizeof(int));
memset(&o2_saved_97, 0, sizeof(struct list$1sTypeph*));
memset(&it_98, 0, sizeof(struct sType*));
memset(&name_99, 0, sizeof(char*));
memset(&right_value134, 0, sizeof(void*));
memset(&str_100, 0, sizeof(char*));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
    # 341 "03transpile2.c"
    output_54=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value81=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value80=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 341))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value80);
    if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value80;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value81);
    if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value81;
    __freed_obj__ = 0;
    # 455 "03transpile2.c"
    # 342 "03transpile2.c"
    if(_if_conditional89=fun->mResultType->mResultType,    _if_conditional89) {
        # 343 "03transpile2.c"
        output2_55=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value83=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value82=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 343))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value82);
        if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value82;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value83);
        if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value83;
        __freed_obj__ = 0;
        # 345 "03transpile2.c"
        buffer_append_str(output2_55,fun->mName);
        # 346 "03transpile2.c"
        buffer_append_str(output2_55,"(");
        # 348 "03transpile2.c"
        i_56=0;
        # 366 "03transpile2.c"
        for(
        o2_saved_57=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_58=list$1sTypeph_begin((o2_saved_57)) ,        0;        _for_condtionalA8=        !list$1sTypeph_end((o2_saved_57)) ,        _for_condtionalA8;        it_58=list$1sTypeph_next((o2_saved_57)) ,        0        ){
            # 350 "03transpile2.c"
            name_62=list$1charphp_operator_load_element(fun->mParamNames,i_56);
            # 352 "03transpile2.c"
            str_63=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value84=make_define_var(it_58,name_62,(_Bool)0,info)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value84);
            if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value84;
            __freed_obj__ = 0;
            # 353 "03transpile2.c"
            buffer_append_str(output2_55,str_63);
            # 364 "03transpile2.c"
            # 355 "03transpile2.c"
            if(_if_conditional92=i_56==list$1sTypeph_length(fun->mParamTypes)-1,            _if_conditional92) {
                # 359 "03transpile2.c"
                # 356 "03transpile2.c"
                if(_if_conditional93=fun->mVarArgs,                _if_conditional93) {
                    # 357 "03transpile2.c"
                    buffer_append_str(output2_55,", ...");
                }
            }
            else {
                # 361 "03transpile2.c"
                buffer_append_str(output2_55,", ");
            }
            # 364 "03transpile2.c"
            i_56++;
            if(str_63 && !__freed_obj__) { str_63 = come_decrement_ref_count(str_63, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(o2_saved_57 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_57, (void*)0, (void*)0, 0, 0, 0, 0); }
        # 366 "03transpile2.c"
        buffer_append_str(output2_55,")");
        # 368 "03transpile2.c"
        str_64=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value86=make_lambda_type_name_string(fun->mResultType,((char*)(right_value85=buffer_to_string(output2_55))),info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value85);
        if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { right_value85 = come_decrement_ref_count(right_value85, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value85;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value86);
        if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value86;
        __freed_obj__ = 0;
        # 370 "03transpile2.c"
        buffer_append_str(output_54,str_64);
        # 374 "03transpile2.c"
        buffer_append_str(info->module->mSourceHead,((char*)(right_value87=buffer_to_string(output_54))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value87);
        if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value87;
        __freed_obj__ = 0;
        # 375 "03transpile2.c"
        buffer_append_str(info->module->mSourceHead,";\n");
        if(output2_55 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output2_55, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(str_64 && !__freed_obj__) { str_64 = come_decrement_ref_count(str_64, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        # 455 "03transpile2.c"
        # 377 "03transpile2.c"
        if(_if_conditional94=list$1sNodeph_length(fun->mResultType->mArrayNum)>0,        _if_conditional94) {
            # 378 "03transpile2.c"
            base_result_type_83=(struct sType*)come_increment_ref_count(((struct sType*)(right_value122=sType_clone(fun->mResultType))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
            if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value122;
            __freed_obj__ = 0;
            # 379 "03transpile2.c"
            __dec_obj29=base_result_type_83->mArrayNum;
            base_result_type_83->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value124=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value123=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "03transpile2.c", 379))))))));
            if(__dec_obj29) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value123);
            if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value123;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value124);
            if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value124;
            __freed_obj__ = 0;
            # 381 "03transpile2.c"
            result_type_str_84=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value125=make_type_name_string(base_result_type_83,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value125);
            if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value125;
            __freed_obj__ = 0;
            # 383 "03transpile2.c"
            buffer_append_str(output_54,result_type_str_84);
            # 384 "03transpile2.c"
            buffer_append_str(output_54," (*");
            # 386 "03transpile2.c"
            buffer_append_str(output_54,fun->mName);
            # 387 "03transpile2.c"
            buffer_append_str(output_54,"(");
            # 389 "03transpile2.c"
            i_85=0;
            # 408 "03transpile2.c"
            for(
            o2_saved_86=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_87=list$1sTypeph_begin((o2_saved_86)) ,            0;            _for_condtionalA9=            !list$1sTypeph_end((o2_saved_86)) ,            _for_condtionalA9;            it_87=list$1sTypeph_next((o2_saved_86)) ,            0            ){
                # 391 "03transpile2.c"
                name_88=list$1charphp_operator_load_element(fun->mParamNames,i_85);
                # 393 "03transpile2.c"
                str_89=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value126=make_define_var(it_87,name_88,(_Bool)0,info)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
                if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value126;
                __freed_obj__ = 0;
                # 394 "03transpile2.c"
                buffer_append_str(output_54,str_89);
                # 405 "03transpile2.c"
                # 396 "03transpile2.c"
                if(_if_conditional165=i_85==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional165) {
                    # 400 "03transpile2.c"
                    # 397 "03transpile2.c"
                    if(_if_conditional166=fun->mVarArgs,                    _if_conditional166) {
                        # 398 "03transpile2.c"
                        buffer_append_str(output_54,", ...");
                    }
                }
                else {
                    # 402 "03transpile2.c"
                    buffer_append_str(output_54,", ");
                }
                # 405 "03transpile2.c"
                i_85++;
                if(str_89 && !__freed_obj__) { str_89 = come_decrement_ref_count(str_89, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(o2_saved_86 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_86, (void*)0, (void*)0, 0, 0, 0, 0); }
            # 408 "03transpile2.c"
            node_93=list$1sNodephp_operator_load_element(fun->mResultType->mArrayNum,0);
            # 414 "03transpile2.c"
            # 410 "03transpile2.c"
            if(_if_conditional169=!node_compile(node_93,info),            _if_conditional169) {
                # 411 "03transpile2.c"
                err_msg(info,"invalid array number");
                # 412 "03transpile2.c"
                __result61__ = __result_obj__ = ((struct optional$2charphbool*)(right_value129=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value128=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 412))),(char*)come_increment_ref_count(((char*)(right_value127=__builtin_string("")))),(_Bool)0)));
                if(base_result_type_83 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_result_type_83, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_type_str_84 && !__freed_obj__) { result_type_str_84 = come_decrement_ref_count(result_type_str_84, (void*)0, (void*)0, 0, 0, 0); }
                if(output_54 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_54, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
                if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value127;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value128);
                if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { right_value128 = come_decrement_ref_count(right_value128, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value128;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value129);
                if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value129;
                __freed_obj__ = 0;
                return __result61__;
            }
            # 414 "03transpile2.c"
            cvalue_94=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value130=get_value_from_stack(-1,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value130);
            if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value130;
            __freed_obj__ = 0;
            # 415 "03transpile2.c"
            dec_stack_ptr(1,info);
            # 417 "03transpile2.c"
            buffer_append_str(output_54,((char*)(right_value131=xsprintf("))[%s]",cvalue_94->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value131);
            if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { right_value131 = come_decrement_ref_count(right_value131, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[5] = right_value131;
            __freed_obj__ = 0;
            # 419 "03transpile2.c"
            buffer_append_str(info->module->mSourceHead,((char*)(right_value132=buffer_to_string(output_54))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value132);
            if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { right_value132 = come_decrement_ref_count(right_value132, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[6] = right_value132;
            __freed_obj__ = 0;
            # 420 "03transpile2.c"
            buffer_append_str(info->module->mSourceHead,";\n");
            if(base_result_type_83 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_result_type_83, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(result_type_str_84 && !__freed_obj__) { result_type_str_84 = come_decrement_ref_count(result_type_str_84, (void*)0, (void*)0, 0, 0, 0); }
            if(cvalue_94 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,cvalue_94, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            # 423 "03transpile2.c"
            result_type_str_95=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value133=make_type_name_string(fun->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133);
            if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value133;
            __freed_obj__ = 0;
            # 425 "03transpile2.c"
            buffer_append_str(output_54,result_type_str_95);
            # 426 "03transpile2.c"
            buffer_append_str(output_54," ");
            # 428 "03transpile2.c"
            buffer_append_str(output_54,fun->mName);
            # 429 "03transpile2.c"
            buffer_append_str(output_54,"(");
            # 431 "03transpile2.c"
            i_96=0;
            # 449 "03transpile2.c"
            for(
            o2_saved_97=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_98=list$1sTypeph_begin((o2_saved_97)) ,            0;            _for_condtionalA10=            !list$1sTypeph_end((o2_saved_97)) ,            _for_condtionalA10;            it_98=list$1sTypeph_next((o2_saved_97)) ,            0            ){
                # 433 "03transpile2.c"
                name_99=list$1charphp_operator_load_element(fun->mParamNames,i_96);
                # 435 "03transpile2.c"
                str_100=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value134=make_define_var(it_98,name_99,(_Bool)0,info)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value134);
                if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value134;
                __freed_obj__ = 0;
                # 436 "03transpile2.c"
                buffer_append_str(output_54,str_100);
                # 446 "03transpile2.c"
                # 438 "03transpile2.c"
                if(_if_conditional170=i_96==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional170) {
                    # 442 "03transpile2.c"
                    # 439 "03transpile2.c"
                    if(_if_conditional171=fun->mVarArgs,                    _if_conditional171) {
                        # 440 "03transpile2.c"
                        buffer_append_str(output_54,", ...");
                    }
                }
                else {
                    # 444 "03transpile2.c"
                    buffer_append_str(output_54,", ");
                }
                # 446 "03transpile2.c"
                i_96++;
                if(str_100 && !__freed_obj__) { str_100 = come_decrement_ref_count(str_100, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(o2_saved_97 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_97, (void*)0, (void*)0, 0, 0, 0, 0); }
            # 449 "03transpile2.c"
            buffer_append_str(output_54,")");
            # 451 "03transpile2.c"
            buffer_append_str(info->module->mSourceHead,((char*)(right_value135=buffer_to_string(output_54))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value135);
            if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { right_value135 = come_decrement_ref_count(right_value135, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value135;
            __freed_obj__ = 0;
            # 452 "03transpile2.c"
            buffer_append_str(info->module->mSourceHead,";\n");
            if(result_type_str_95 && !__freed_obj__) { result_type_str_95 = come_decrement_ref_count(result_type_str_95, (void*)0, (void*)0, 0, 0, 0); }
        }
    }
    # 455 "03transpile2.c"
    buffer_append_str(output_54,"{\n");
    # 457 "03transpile2.c"
    buffer_append_str(output_54,((char*)(right_value136=buffer_to_string(fun->mSourceHead))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value136);
    if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value136;
    __freed_obj__ = 0;
    # 458 "03transpile2.c"
    buffer_append_str(output_54,((char*)(right_value137=buffer_to_string(fun->mSourceHead2))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value137);
    if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value137;
    __freed_obj__ = 0;
    # 459 "03transpile2.c"
    buffer_append_str(output_54,((char*)(right_value138=buffer_to_string(fun->mSource))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value138);
    if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value138;
    __freed_obj__ = 0;
    # 461 "03transpile2.c"
    buffer_append_str(output_54,"}\n");
    # 463 "03transpile2.c"
    __result62__ = __result_obj__ = ((char*)(right_value139=buffer_to_string(output_54)));
    if(output_54 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_54, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value139);
    if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value139;
    __freed_obj__ = 0;
    return __result62__;
    if(output_54 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_54, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional90;
struct list_item$1charph* it_59;
int i_60;
_Bool _while_condtional5;
_Bool _if_conditional91;
char* __result39__;
char* default_value_61;
char* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_59, 0, sizeof(struct list_item$1charph*));
memset(&i_60, 0, sizeof(int));
memset(&default_value_61, 0, sizeof(char*));
                # 745 "./comelang2.h"
                # 741 "./comelang2.h"
                if(_if_conditional90=position<0,                _if_conditional90) {
                    # 742 "./comelang2.h"
                    position+=self->len;
                }
                # 745 "./comelang2.h"
                it_59=self->head;
                # 746 "./comelang2.h"
                i_60=0;
                # 753 "./comelang2.h"
                while(_while_condtional5=it_59!=((void*)0),                _while_condtional5) {
                    # 751 "./comelang2.h"
                    # 748 "./comelang2.h"
                    if(_if_conditional91=position==i_60,                    _if_conditional91) {
                        # 749 "./comelang2.h"
                        __result39__ = __result_obj__ = it_59->item;
                        return __result39__;
                    }
                    # 751 "./comelang2.h"
                    it_59=it_59->next;
                    # 752 "./comelang2.h"
                    i_60++;
                }
                # 755 "./comelang2.h"
                # 756 "./comelang2.h"
                memset(&default_value_61,0,sizeof(char*));
                # 757 "./comelang2.h"
                __result40__ = __result_obj__ = default_value_61;
                if(default_value_61 && !__freed_obj__) { default_value_61 = come_decrement_ref_count(default_value_61, (void*)0, (void*)0, 0, 1, 0); }
                return __result40__;
                if(default_value_61 && !__freed_obj__) { default_value_61 = come_decrement_ref_count(default_value_61, (void*)0, (void*)0, 0, 0, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional95;
struct sType* __result41__;
void* right_value88;
struct sType* result_65;
_Bool _if_conditional96;
_Bool _if_conditional97;
void* right_value91;
struct tuple1$1sTypeph* __dec_obj8;
_Bool _if_conditional101;
void* right_value92;
struct tuple1$1sTypeph* __dec_obj9;
_Bool _if_conditional102;
void* right_value93;
char* __dec_obj10;
_Bool _if_conditional103;
void* right_value100;
struct list$1sTypeph* __dec_obj14;
_Bool _if_conditional107;
void* right_value108;
struct list$1sNodeph* __dec_obj18;
_Bool _if_conditional120;
_Bool _if_conditional121;
void* right_value109;
struct list$1sTypeph* __dec_obj19;
_Bool _if_conditional122;
void* right_value116;
struct list$1charph* __dec_obj23;
_Bool _if_conditional126;
void* right_value117;
struct tuple1$1sTypeph* __dec_obj24;
_Bool _if_conditional127;
_Bool _if_conditional128;
void* right_value118;
struct sNode* __dec_obj25;
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
_Bool _if_conditional152;
void* right_value119;
struct sNode* __dec_obj26;
_Bool _if_conditional153;
_Bool _if_conditional154;
_Bool _if_conditional155;
void* right_value120;
char* __dec_obj27;
_Bool _if_conditional156;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional160;
_Bool _if_conditional161;
_Bool _if_conditional162;
_Bool _if_conditional163;
_Bool _if_conditional164;
void* right_value121;
char* __dec_obj28;
struct sType* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value88, 0, sizeof(void*));
memset(&result_65, 0, sizeof(struct sType*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
memset(&right_value121, 0, sizeof(void*));
                # 3 "sType_clone"
                # 2 "sType_clone"
                if(_if_conditional95=self==(void*)0,                _if_conditional95) {
                    # 2 "sType_clone"
                    __result41__ = __result_obj__ = (void*)0;
                    return __result41__;
                }
                # 3 "sType_clone"
                result_65=(struct sType*)come_increment_ref_count(((struct sType*)(right_value88=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value88);
                if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value88;
                __freed_obj__ = 0;
                # 5 "sType_clone"
                # 4 "sType_clone"
                if(_if_conditional96=self!=((void*)0),                _if_conditional96) {
                    # 4 "sType_clone"
                    result_65->mClass=self->mClass;
                }
                # 6 "sType_clone"
                # 5 "sType_clone"
                if(_if_conditional97=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional97) {
                    # 5 "sType_clone"
                    __dec_obj8=result_65->mNoSolvedGenericsType;
                    result_65->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value91=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                    if(__dec_obj8) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value91);
                    if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value91;
                    __freed_obj__ = 0;
                }
                # 7 "sType_clone"
                # 6 "sType_clone"
                if(_if_conditional101=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional101) {
                    # 6 "sType_clone"
                    __dec_obj9=result_65->mOriginalLoadVarType;
                    result_65->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value92=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                    if(__dec_obj9) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value92);
                    if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value92;
                    __freed_obj__ = 0;
                }
                # 8 "sType_clone"
                # 7 "sType_clone"
                if(_if_conditional102=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional102) {
                    # 7 "sType_clone"
                    __dec_obj10=result_65->mGenericsName;
                    result_65->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value93=string_clone(self->mGenericsName))));
                    if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
                    if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value93;
                    __freed_obj__ = 0;
                }
                # 9 "sType_clone"
                # 8 "sType_clone"
                if(_if_conditional103=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional103) {
                    # 8 "sType_clone"
                    __dec_obj14=result_65->mGenericsTypes;
                    result_65->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value100=list$1sTypephp_clone(self->mGenericsTypes))));
                    if(__dec_obj14) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
                    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value100;
                    __freed_obj__ = 0;
                }
                # 10 "sType_clone"
                # 9 "sType_clone"
                if(_if_conditional107=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional107) {
                    # 9 "sType_clone"
                    __dec_obj18=result_65->mArrayNum;
                    result_65->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value108=list$1sNodephp_clone(self->mArrayNum))));
                    if(__dec_obj18) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value108);
                    if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value108;
                    __freed_obj__ = 0;
                }
                # 11 "sType_clone"
                # 10 "sType_clone"
                if(_if_conditional120=self!=((void*)0),                _if_conditional120) {
                    # 10 "sType_clone"
                    result_65->mOmitArrayNum=self->mOmitArrayNum;
                }
                # 12 "sType_clone"
                # 11 "sType_clone"
                if(_if_conditional121=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional121) {
                    # 11 "sType_clone"
                    __dec_obj19=result_65->mParamTypes;
                    result_65->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value109=list$1sTypephp_clone(self->mParamTypes))));
                    if(__dec_obj19) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
                    if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value109;
                    __freed_obj__ = 0;
                }
                # 13 "sType_clone"
                # 12 "sType_clone"
                if(_if_conditional122=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional122) {
                    # 12 "sType_clone"
                    __dec_obj23=result_65->mParamNames;
                    result_65->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value116=list$1charphp_clone(self->mParamNames))));
                    if(__dec_obj23) { come_call_finalizer(list$1charph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value116);
                    if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value116;
                    __freed_obj__ = 0;
                }
                # 14 "sType_clone"
                # 13 "sType_clone"
                if(_if_conditional126=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional126) {
                    # 13 "sType_clone"
                    __dec_obj24=result_65->mResultType;
                    result_65->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value117=tuple1$1sTypephp_clone(self->mResultType))));
                    if(__dec_obj24) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
                    if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value117;
                    __freed_obj__ = 0;
                }
                # 15 "sType_clone"
                # 14 "sType_clone"
                if(_if_conditional127=self!=((void*)0),                _if_conditional127) {
                    # 14 "sType_clone"
                    result_65->mVarArgs=self->mVarArgs;
                }
                # 16 "sType_clone"
                # 15 "sType_clone"
                if(_if_conditional128=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional128) {
                    # 15 "sType_clone"
                    __dec_obj25=result_65->mAlignas;
                    result_65->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value118=sNode_clone(self->mAlignas))));
                    if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
                    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { right_value118 = come_decrement_ref_count(right_value118, ((struct sNode*)right_value118)->finalize, ((struct sNode*)right_value118)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value118;
                    __freed_obj__ = 0;
                }
                # 17 "sType_clone"
                # 16 "sType_clone"
                if(_if_conditional129=self!=((void*)0),                _if_conditional129) {
                    # 16 "sType_clone"
                    result_65->mUnsigned=self->mUnsigned;
                }
                # 18 "sType_clone"
                # 17 "sType_clone"
                if(_if_conditional130=self!=((void*)0),                _if_conditional130) {
                    # 17 "sType_clone"
                    result_65->mShort=self->mShort;
                }
                # 19 "sType_clone"
                # 18 "sType_clone"
                if(_if_conditional131=self!=((void*)0),                _if_conditional131) {
                    # 18 "sType_clone"
                    result_65->mLong=self->mLong;
                }
                # 20 "sType_clone"
                # 19 "sType_clone"
                if(_if_conditional132=self!=((void*)0),                _if_conditional132) {
                    # 19 "sType_clone"
                    result_65->mLongLong=self->mLongLong;
                }
                # 21 "sType_clone"
                # 20 "sType_clone"
                if(_if_conditional133=self!=((void*)0),                _if_conditional133) {
                    # 20 "sType_clone"
                    result_65->mConstant=self->mConstant;
                }
                # 22 "sType_clone"
                # 21 "sType_clone"
                if(_if_conditional134=self!=((void*)0),                _if_conditional134) {
                    # 21 "sType_clone"
                    result_65->mRegister=self->mRegister;
                }
                # 23 "sType_clone"
                # 22 "sType_clone"
                if(_if_conditional135=self!=((void*)0),                _if_conditional135) {
                    # 22 "sType_clone"
                    result_65->mVolatile=self->mVolatile;
                }
                # 24 "sType_clone"
                # 23 "sType_clone"
                if(_if_conditional136=self!=((void*)0),                _if_conditional136) {
                    # 23 "sType_clone"
                    result_65->mStatic=self->mStatic;
                }
                # 25 "sType_clone"
                # 24 "sType_clone"
                if(_if_conditional137=self!=((void*)0),                _if_conditional137) {
                    # 24 "sType_clone"
                    result_65->mExtern=self->mExtern;
                }
                # 26 "sType_clone"
                # 25 "sType_clone"
                if(_if_conditional138=self!=((void*)0),                _if_conditional138) {
                    # 25 "sType_clone"
                    result_65->mRestrict=self->mRestrict;
                }
                # 27 "sType_clone"
                # 26 "sType_clone"
                if(_if_conditional139=self!=((void*)0),                _if_conditional139) {
                    # 26 "sType_clone"
                    result_65->mImmutable=self->mImmutable;
                }
                # 28 "sType_clone"
                # 27 "sType_clone"
                if(_if_conditional140=self!=((void*)0),                _if_conditional140) {
                    # 27 "sType_clone"
                    result_65->mHeap=self->mHeap;
                }
                # 29 "sType_clone"
                # 28 "sType_clone"
                if(_if_conditional141=self!=((void*)0),                _if_conditional141) {
                    # 28 "sType_clone"
                    result_65->mDummyHeap=self->mDummyHeap;
                }
                # 30 "sType_clone"
                # 29 "sType_clone"
                if(_if_conditional142=self!=((void*)0),                _if_conditional142) {
                    # 29 "sType_clone"
                    result_65->mDelegate=self->mDelegate;
                }
                # 31 "sType_clone"
                # 30 "sType_clone"
                if(_if_conditional143=self!=((void*)0),                _if_conditional143) {
                    # 30 "sType_clone"
                    result_65->mShare=self->mShare;
                }
                # 32 "sType_clone"
                # 31 "sType_clone"
                if(_if_conditional144=self!=((void*)0),                _if_conditional144) {
                    # 31 "sType_clone"
                    result_65->mClone=self->mClone;
                }
                # 33 "sType_clone"
                # 32 "sType_clone"
                if(_if_conditional145=self!=((void*)0),                _if_conditional145) {
                    # 32 "sType_clone"
                    result_65->mNoHeap=self->mNoHeap;
                }
                # 34 "sType_clone"
                # 33 "sType_clone"
                if(_if_conditional146=self!=((void*)0),                _if_conditional146) {
                    # 33 "sType_clone"
                    result_65->mNoCallingDestructor=self->mNoCallingDestructor;
                }
                # 35 "sType_clone"
                # 34 "sType_clone"
                if(_if_conditional147=self!=((void*)0),                _if_conditional147) {
                    # 34 "sType_clone"
                    result_65->mRefference=self->mRefference;
                }
                # 36 "sType_clone"
                # 35 "sType_clone"
                if(_if_conditional148=self!=((void*)0),                _if_conditional148) {
                    # 35 "sType_clone"
                    result_65->mException=self->mException;
                }
                # 37 "sType_clone"
                # 36 "sType_clone"
                if(_if_conditional149=self!=((void*)0),                _if_conditional149) {
                    # 36 "sType_clone"
                    result_65->mPointerNum=self->mPointerNum;
                }
                # 38 "sType_clone"
                # 37 "sType_clone"
                if(_if_conditional150=self!=((void*)0),                _if_conditional150) {
                    # 37 "sType_clone"
                    result_65->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                }
                # 39 "sType_clone"
                # 38 "sType_clone"
                if(_if_conditional151=self!=((void*)0),                _if_conditional151) {
                    # 38 "sType_clone"
                    result_65->mNoArrayPointerNum=self->mNoArrayPointerNum;
                }
                # 40 "sType_clone"
                # 39 "sType_clone"
                if(_if_conditional152=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional152) {
                    # 39 "sType_clone"
                    __dec_obj26=result_65->mSizeNum;
                    result_65->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value119=sNode_clone(self->mSizeNum))));
                    if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value119);
                    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { right_value119 = come_decrement_ref_count(right_value119, ((struct sNode*)right_value119)->finalize, ((struct sNode*)right_value119)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value119;
                    __freed_obj__ = 0;
                }
                # 41 "sType_clone"
                # 40 "sType_clone"
                if(_if_conditional153=self!=((void*)0),                _if_conditional153) {
                    # 40 "sType_clone"
                    result_65->mDynamicArrayNum=self->mDynamicArrayNum;
                }
                # 42 "sType_clone"
                # 41 "sType_clone"
                if(_if_conditional154=self!=((void*)0),                _if_conditional154) {
                    # 41 "sType_clone"
                    result_65->mTypeOfExpression=self->mTypeOfExpression;
                }
                # 43 "sType_clone"
                # 42 "sType_clone"
                if(_if_conditional155=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional155) {
                    # 42 "sType_clone"
                    __dec_obj27=result_65->mOriginalTypeName;
                    result_65->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value120=string_clone(self->mOriginalTypeName))));
                    if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120);
                    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { right_value120 = come_decrement_ref_count(right_value120, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value120;
                    __freed_obj__ = 0;
                }
                # 44 "sType_clone"
                # 43 "sType_clone"
                if(_if_conditional156=self!=((void*)0),                _if_conditional156) {
                    # 43 "sType_clone"
                    result_65->mOriginalPointerNum=self->mOriginalPointerNum;
                }
                # 45 "sType_clone"
                # 44 "sType_clone"
                if(_if_conditional157=self!=((void*)0),                _if_conditional157) {
                    # 44 "sType_clone"
                    result_65->mFunctionParam=self->mFunctionParam;
                }
                # 46 "sType_clone"
                # 45 "sType_clone"
                if(_if_conditional158=self!=((void*)0),                _if_conditional158) {
                    # 45 "sType_clone"
                    result_65->mAllocaValue=self->mAllocaValue;
                }
                # 47 "sType_clone"
                # 46 "sType_clone"
                if(_if_conditional159=self!=((void*)0),                _if_conditional159) {
                    # 46 "sType_clone"
                    result_65->mGenericsStruct=self->mGenericsStruct;
                }
                # 48 "sType_clone"
                # 47 "sType_clone"
                if(_if_conditional160=self!=((void*)0),                _if_conditional160) {
                    # 47 "sType_clone"
                    result_65->mSolvedGenericsName=self->mSolvedGenericsName;
                }
                # 49 "sType_clone"
                # 48 "sType_clone"
                if(_if_conditional161=self!=((void*)0),                _if_conditional161) {
                    # 48 "sType_clone"
                    result_65->mComeMemCore=self->mComeMemCore;
                }
                # 50 "sType_clone"
                # 49 "sType_clone"
                if(_if_conditional162=self!=((void*)0),                _if_conditional162) {
                    # 49 "sType_clone"
                    result_65->mInline=self->mInline;
                }
                # 51 "sType_clone"
                # 50 "sType_clone"
                if(_if_conditional163=self!=((void*)0),                _if_conditional163) {
                    # 50 "sType_clone"
                    result_65->mNullValue=self->mNullValue;
                }
                # 52 "sType_clone"
                # 51 "sType_clone"
                if(_if_conditional164=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional164) {
                    # 51 "sType_clone"
                    __dec_obj28=result_65->mAsmName;
                    result_65->mAsmName=(char*)come_increment_ref_count(((char*)(right_value121=string_clone(self->mAsmName))));
                    if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value121);
                    if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { right_value121 = come_decrement_ref_count(right_value121, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value121;
                    __freed_obj__ = 0;
                }
                # 52 "sType_clone"
                __result58__ = __result_obj__ = result_65;
                if(result_65 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_65, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result58__;
                if(result_65 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_65, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional98;
struct tuple1$1sTypeph* __result42__;
void* right_value89;
struct tuple1$1sTypeph* result_66;
_Bool _if_conditional100;
void* right_value90;
struct sType* __dec_obj7;
struct tuple1$1sTypeph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value89, 0, sizeof(void*));
memset(&result_66, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value90, 0, sizeof(void*));
                        # 3 "tuple1$1sTypephp_clone"
                        # 2 "tuple1$1sTypephp_clone"
                        if(_if_conditional98=self==(void*)0,                        _if_conditional98) {
                            # 2 "tuple1$1sTypephp_clone"
                            __result42__ = __result_obj__ = (void*)0;
                            return __result42__;
                        }
                        # 3 "tuple1$1sTypephp_clone"
                        result_66=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value89=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value89);
                        if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value89;
                        __freed_obj__ = 0;
                        # 5 "tuple1$1sTypephp_clone"
                        # 4 "tuple1$1sTypephp_clone"
                        if(_if_conditional100=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional100) {
                            # 4 "tuple1$1sTypephp_clone"
                            __dec_obj7=result_66->v1;
                            result_66->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value90=sType_clone(self->v1))));
                            if(__dec_obj7) { come_call_finalizer(sType_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
                            if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value90;
                            __freed_obj__ = 0;
                        }
                        # 5 "tuple1$1sTypephp_clone"
                        __result43__ = __result_obj__ = result_66;
                        if(result_66 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_66, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result43__;
                        if(result_66 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_66, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional99;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            # 1 "tuple1$1sTypeph_finalize"
                            # 0 "tuple1$1sTypeph_finalize"
                            if(_if_conditional99=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional99) {
                                # 0 "tuple1$1sTypeph_finalize"
                                if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional104;
struct list$1sTypeph* __result44__;
void* right_value94;
void* right_value95;
struct list$1sTypeph* result_67;
struct list_item$1sTypeph* it_68;
_Bool _while_condtional6;
void* right_value99;
struct list$1sTypeph* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value94, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
memset(&result_67, 0, sizeof(struct list$1sTypeph*));
memset(&it_68, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value99, 0, sizeof(void*));
                        # 195 "./comelang2.h"
                        # 192 "./comelang2.h"
                        if(_if_conditional104=self==((void*)0),                        _if_conditional104) {
                            # 193 "./comelang2.h"
                            __result44__ = __result_obj__ = ((void*)0);
                            return __result44__;
                        }
                        # 195 "./comelang2.h"
                        result_67=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value95=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value94=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 195))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94);
                        if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value94;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value95);
                        if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value95;
                        __freed_obj__ = 0;
                        # 197 "./comelang2.h"
                        it_68=self->head;
                        # 204 "./comelang2.h"
                        while(_while_condtional6=it_68!=((void*)0),                        _while_condtional6) {
                            # 199 "./comelang2.h"
                            list$1sTypeph_add(result_67,(struct sType*)come_increment_ref_count(((struct sType*)(right_value99=sType_clone(it_68->item)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value99);
                            if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value99;
                            __freed_obj__ = 0;
                            # 201 "./comelang2.h"
                            it_68=it_68->next;
                        }
                        # 204 "./comelang2.h"
                        __result47__ = __result_obj__ = result_67;
                        if(result_67 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_67, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result47__;
                        if(result_67 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_67, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            # 157 "./comelang2.h"
                            self->head=((void*)0);
                            # 158 "./comelang2.h"
                            self->tail=((void*)0);
                            # 159 "./comelang2.h"
                            self->len=0;
                            # 161 "./comelang2.h"
                            __result45__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result45__;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional105;
void* right_value96;
struct list_item$1sTypeph* litem_69;
struct sType* __dec_obj11;
_Bool _if_conditional106;
void* right_value97;
struct list_item$1sTypeph* litem_70;
struct sType* __dec_obj12;
void* right_value98;
struct list_item$1sTypeph* litem_71;
struct sType* __dec_obj13;
struct list$1sTypeph* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value96, 0, sizeof(void*));
memset(&litem_69, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value97, 0, sizeof(void*));
memset(&litem_70, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value98, 0, sizeof(void*));
memset(&litem_71, 0, sizeof(struct list_item$1sTypeph*));
                                # 239 "./comelang2.h"
                                # 208 "./comelang2.h"
                                if(_if_conditional105=self->len==0,                                _if_conditional105) {
                                    # 209 "./comelang2.h"
                                    litem_69=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value96=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 209))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96);
                                    if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value96;
                                    __freed_obj__ = 0;
                                    # 211 "./comelang2.h"
                                    litem_69->prev=((void*)0);
                                    # 212 "./comelang2.h"
                                    litem_69->next=((void*)0);
                                    # 213 "./comelang2.h"
                                    __dec_obj11=litem_69->item;
                                    litem_69->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj11) { come_call_finalizer(sType_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    # 215 "./comelang2.h"
                                    self->tail=litem_69;
                                    # 216 "./comelang2.h"
                                    self->head=litem_69;
                                }
                                else {
                                    # 239 "./comelang2.h"
                                    # 218 "./comelang2.h"
                                    if(_if_conditional106=self->len==1,                                    _if_conditional106) {
                                        # 219 "./comelang2.h"
                                        litem_70=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value97=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 219))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97);
                                        if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value97;
                                        __freed_obj__ = 0;
                                        # 221 "./comelang2.h"
                                        litem_70->prev=self->head;
                                        # 222 "./comelang2.h"
                                        litem_70->next=((void*)0);
                                        # 223 "./comelang2.h"
                                        __dec_obj12=litem_70->item;
                                        litem_70->item=(struct sType*)come_increment_ref_count(item);
                                        if(__dec_obj12) { come_call_finalizer(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        # 225 "./comelang2.h"
                                        self->tail=litem_70;
                                        # 226 "./comelang2.h"
                                        self->head->next=litem_70;
                                    }
                                    else {
                                        # 229 "./comelang2.h"
                                        litem_71=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value98=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 229))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value98);
                                        if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value98;
                                        __freed_obj__ = 0;
                                        # 231 "./comelang2.h"
                                        litem_71->prev=self->tail;
                                        # 232 "./comelang2.h"
                                        litem_71->next=((void*)0);
                                        # 233 "./comelang2.h"
                                        __dec_obj13=litem_71->item;
                                        litem_71->item=(struct sType*)come_increment_ref_count(item);
                                        if(__dec_obj13) { come_call_finalizer(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        # 235 "./comelang2.h"
                                        self->tail->next=litem_71;
                                        # 236 "./comelang2.h"
                                        self->tail=litem_71;
                                    }
                                }
                                # 239 "./comelang2.h"
                                self->len++;
                                # 241 "./comelang2.h"
                                __result46__ = __result_obj__ = self;
                                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result46__;
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
_Bool _if_conditional108;
struct list$1sNodeph* __result48__;
void* right_value101;
void* right_value102;
struct list$1sNodeph* result_72;
struct list_item$1sNodeph* it_73;
_Bool _while_condtional7;
void* right_value107;
struct list$1sNodeph* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
memset(&result_72, 0, sizeof(struct list$1sNodeph*));
memset(&it_73, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value107, 0, sizeof(void*));
                        # 195 "./comelang2.h"
                        # 192 "./comelang2.h"
                        if(_if_conditional108=self==((void*)0),                        _if_conditional108) {
                            # 193 "./comelang2.h"
                            __result48__ = __result_obj__ = ((void*)0);
                            return __result48__;
                        }
                        # 195 "./comelang2.h"
                        result_72=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value102=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value101=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 195))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value101);
                        if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value101;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value102);
                        if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value102;
                        __freed_obj__ = 0;
                        # 197 "./comelang2.h"
                        it_73=self->head;
                        # 204 "./comelang2.h"
                        while(_while_condtional7=it_73!=((void*)0),                        _while_condtional7) {
                            # 199 "./comelang2.h"
                            list$1sNodeph_add(result_72,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value107=sNode_clone(it_73->item)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
                            if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { right_value107 = come_decrement_ref_count(right_value107, ((struct sNode*)right_value107)->finalize, ((struct sNode*)right_value107)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value107;
                            __freed_obj__ = 0;
                            # 201 "./comelang2.h"
                            it_73=it_73->next;
                        }
                        # 204 "./comelang2.h"
                        __result53__ = __result_obj__ = result_72;
                        if(result_72 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_72, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result53__;
                        if(result_72 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_72, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            # 157 "./comelang2.h"
                            self->head=((void*)0);
                            # 158 "./comelang2.h"
                            self->tail=((void*)0);
                            # 159 "./comelang2.h"
                            self->len=0;
                            # 161 "./comelang2.h"
                            __result49__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result49__;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional109;
void* right_value103;
struct list_item$1sNodeph* litem_74;
struct sNode* __dec_obj15;
_Bool _if_conditional110;
void* right_value104;
struct list_item$1sNodeph* litem_75;
struct sNode* __dec_obj16;
void* right_value105;
struct list_item$1sNodeph* litem_76;
struct sNode* __dec_obj17;
struct list$1sNodeph* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value103, 0, sizeof(void*));
memset(&litem_74, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value104, 0, sizeof(void*));
memset(&litem_75, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value105, 0, sizeof(void*));
memset(&litem_76, 0, sizeof(struct list_item$1sNodeph*));
                                # 239 "./comelang2.h"
                                # 208 "./comelang2.h"
                                if(_if_conditional109=self->len==0,                                _if_conditional109) {
                                    # 209 "./comelang2.h"
                                    litem_74=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value103=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 209))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value103);
                                    if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value103;
                                    __freed_obj__ = 0;
                                    # 211 "./comelang2.h"
                                    litem_74->prev=((void*)0);
                                    # 212 "./comelang2.h"
                                    litem_74->next=((void*)0);
                                    # 213 "./comelang2.h"
                                    __dec_obj15=litem_74->item;
                                    litem_74->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0); }
                                    # 215 "./comelang2.h"
                                    self->tail=litem_74;
                                    # 216 "./comelang2.h"
                                    self->head=litem_74;
                                }
                                else {
                                    # 239 "./comelang2.h"
                                    # 218 "./comelang2.h"
                                    if(_if_conditional110=self->len==1,                                    _if_conditional110) {
                                        # 219 "./comelang2.h"
                                        litem_75=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value104=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 219))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value104);
                                        if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value104;
                                        __freed_obj__ = 0;
                                        # 221 "./comelang2.h"
                                        litem_75->prev=self->head;
                                        # 222 "./comelang2.h"
                                        litem_75->next=((void*)0);
                                        # 223 "./comelang2.h"
                                        __dec_obj16=litem_75->item;
                                        litem_75->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0); }
                                        # 225 "./comelang2.h"
                                        self->tail=litem_75;
                                        # 226 "./comelang2.h"
                                        self->head->next=litem_75;
                                    }
                                    else {
                                        # 229 "./comelang2.h"
                                        litem_76=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value105=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 229))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
                                        if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value105;
                                        __freed_obj__ = 0;
                                        # 231 "./comelang2.h"
                                        litem_76->prev=self->tail;
                                        # 232 "./comelang2.h"
                                        litem_76->next=((void*)0);
                                        # 233 "./comelang2.h"
                                        __dec_obj17=litem_76->item;
                                        litem_76->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0,0); }
                                        # 235 "./comelang2.h"
                                        self->tail->next=litem_76;
                                        # 236 "./comelang2.h"
                                        self->tail=litem_76;
                                    }
                                }
                                # 239 "./comelang2.h"
                                self->len++;
                                # 241 "./comelang2.h"
                                __result50__ = __result_obj__ = self;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                                return __result50__;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional111;
struct sNode* __result51__;
void* right_value106;
struct sNode* result_77;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
struct sNode* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value106, 0, sizeof(void*));
memset(&result_77, 0, sizeof(struct sNode*));
                                # 3 "sNode_clone"
                                # 2 "sNode_clone"
                                if(_if_conditional111=self==(void*)0,                                _if_conditional111) {
                                    # 2 "sNode_clone"
                                    __result51__ = __result_obj__ = (void*)0;
                                    return __result51__;
                                }
                                # 3 "sNode_clone"
                                result_77=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value106=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
                                if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, ((struct sNode*)right_value106)->finalize, ((struct sNode*)right_value106)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value106;
                                __freed_obj__ = 0;
                                # 5 "sNode_clone"
                                # 4 "sNode_clone"
                                if(_if_conditional112=self!=((void*)0)&&self->clone!=((void*)0),                                _if_conditional112) {
                                    # 4 "sNode_clone"
                                    result_77->_protocol_obj=self->clone(self->_protocol_obj);
                                }
                                # 6 "sNode_clone"
                                # 5 "sNode_clone"
                                if(_if_conditional113=self!=((void*)0),                                _if_conditional113) {
                                    # 5 "sNode_clone"
                                    result_77->finalize=self->finalize;
                                }
                                # 7 "sNode_clone"
                                # 6 "sNode_clone"
                                if(_if_conditional114=self!=((void*)0),                                _if_conditional114) {
                                    # 6 "sNode_clone"
                                    result_77->clone=self->clone;
                                }
                                # 8 "sNode_clone"
                                # 7 "sNode_clone"
                                if(_if_conditional115=self!=((void*)0),                                _if_conditional115) {
                                    # 7 "sNode_clone"
                                    result_77->compile=self->compile;
                                }
                                # 9 "sNode_clone"
                                # 8 "sNode_clone"
                                if(_if_conditional116=self!=((void*)0),                                _if_conditional116) {
                                    # 8 "sNode_clone"
                                    result_77->sline=self->sline;
                                }
                                # 10 "sNode_clone"
                                # 9 "sNode_clone"
                                if(_if_conditional117=self!=((void*)0),                                _if_conditional117) {
                                    # 9 "sNode_clone"
                                    result_77->sname=self->sname;
                                }
                                # 11 "sNode_clone"
                                # 10 "sNode_clone"
                                if(_if_conditional118=self!=((void*)0),                                _if_conditional118) {
                                    # 10 "sNode_clone"
                                    result_77->terminated=self->terminated;
                                }
                                # 12 "sNode_clone"
                                # 11 "sNode_clone"
                                if(_if_conditional119=self!=((void*)0),                                _if_conditional119) {
                                    # 11 "sNode_clone"
                                    result_77->kind=self->kind;
                                }
                                # 12 "sNode_clone"
                                __result52__ = __result_obj__ = result_77;
                                if(result_77 && !__freed_obj__) { result_77 = come_decrement_ref_count(result_77, ((struct sNode*)result_77)->finalize, ((struct sNode*)result_77)->_protocol_obj, 0, 1, 0); } 
                                return __result52__;
                                if(result_77 && !__freed_obj__) { result_77 = come_decrement_ref_count(result_77, ((struct sNode*)result_77)->finalize, ((struct sNode*)result_77)->_protocol_obj, 0, 0, 0); } 
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
_Bool _if_conditional123;
struct list$1charph* __result54__;
void* right_value110;
void* right_value111;
struct list$1charph* result_78;
struct list_item$1charph* it_79;
_Bool _while_condtional8;
void* right_value115;
struct list$1charph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
memset(&result_78, 0, sizeof(struct list$1charph*));
memset(&it_79, 0, sizeof(struct list_item$1charph*));
memset(&right_value115, 0, sizeof(void*));
                        # 195 "./comelang2.h"
                        # 192 "./comelang2.h"
                        if(_if_conditional123=self==((void*)0),                        _if_conditional123) {
                            # 193 "./comelang2.h"
                            __result54__ = __result_obj__ = ((void*)0);
                            return __result54__;
                        }
                        # 195 "./comelang2.h"
                        result_78=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value111=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value110=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 195))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value110);
                        if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value110;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value111);
                        if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value111;
                        __freed_obj__ = 0;
                        # 197 "./comelang2.h"
                        it_79=self->head;
                        # 204 "./comelang2.h"
                        while(_while_condtional8=it_79!=((void*)0),                        _while_condtional8) {
                            # 199 "./comelang2.h"
                            list$1charph_add(result_78,(char*)come_increment_ref_count(((char*)(right_value115=string_clone(it_79->item)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
                            if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value115;
                            __freed_obj__ = 0;
                            # 201 "./comelang2.h"
                            it_79=it_79->next;
                        }
                        # 204 "./comelang2.h"
                        __result57__ = __result_obj__ = result_78;
                        if(result_78 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_78, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result57__;
                        if(result_78 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_78, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            # 157 "./comelang2.h"
                            self->head=((void*)0);
                            # 158 "./comelang2.h"
                            self->tail=((void*)0);
                            # 159 "./comelang2.h"
                            self->len=0;
                            # 161 "./comelang2.h"
                            __result55__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result55__;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional124;
void* right_value112;
struct list_item$1charph* litem_80;
char* __dec_obj20;
_Bool _if_conditional125;
void* right_value113;
struct list_item$1charph* litem_81;
char* __dec_obj21;
void* right_value114;
struct list_item$1charph* litem_82;
char* __dec_obj22;
struct list$1charph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value112, 0, sizeof(void*));
memset(&litem_80, 0, sizeof(struct list_item$1charph*));
memset(&right_value113, 0, sizeof(void*));
memset(&litem_81, 0, sizeof(struct list_item$1charph*));
memset(&right_value114, 0, sizeof(void*));
memset(&litem_82, 0, sizeof(struct list_item$1charph*));
                                # 239 "./comelang2.h"
                                # 208 "./comelang2.h"
                                if(_if_conditional124=self->len==0,                                _if_conditional124) {
                                    # 209 "./comelang2.h"
                                    litem_80=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value112=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 209))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value112);
                                    if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value112;
                                    __freed_obj__ = 0;
                                    # 211 "./comelang2.h"
                                    litem_80->prev=((void*)0);
                                    # 212 "./comelang2.h"
                                    litem_80->next=((void*)0);
                                    # 213 "./comelang2.h"
                                    __dec_obj20=litem_80->item;
                                    litem_80->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0,0); }
                                    # 215 "./comelang2.h"
                                    self->tail=litem_80;
                                    # 216 "./comelang2.h"
                                    self->head=litem_80;
                                }
                                else {
                                    # 239 "./comelang2.h"
                                    # 218 "./comelang2.h"
                                    if(_if_conditional125=self->len==1,                                    _if_conditional125) {
                                        # 219 "./comelang2.h"
                                        litem_81=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value113=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 219))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
                                        if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value113;
                                        __freed_obj__ = 0;
                                        # 221 "./comelang2.h"
                                        litem_81->prev=self->head;
                                        # 222 "./comelang2.h"
                                        litem_81->next=((void*)0);
                                        # 223 "./comelang2.h"
                                        __dec_obj21=litem_81->item;
                                        litem_81->item=(char*)come_increment_ref_count(item);
                                        if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0,0); }
                                        # 225 "./comelang2.h"
                                        self->tail=litem_81;
                                        # 226 "./comelang2.h"
                                        self->head->next=litem_81;
                                    }
                                    else {
                                        # 229 "./comelang2.h"
                                        litem_82=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value114=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 229))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value114);
                                        if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value114;
                                        __freed_obj__ = 0;
                                        # 231 "./comelang2.h"
                                        litem_82->prev=self->tail;
                                        # 232 "./comelang2.h"
                                        litem_82->next=((void*)0);
                                        # 233 "./comelang2.h"
                                        __dec_obj22=litem_82->item;
                                        litem_82->item=(char*)come_increment_ref_count(item);
                                        if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0,0); }
                                        # 235 "./comelang2.h"
                                        self->tail->next=litem_82;
                                        # 236 "./comelang2.h"
                                        self->tail=litem_82;
                                    }
                                }
                                # 239 "./comelang2.h"
                                self->len++;
                                # 241 "./comelang2.h"
                                __result56__ = __result_obj__ = self;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                                return __result56__;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional167;
struct list_item$1sNodeph* it_90;
int i_91;
_Bool _while_condtional9;
_Bool _if_conditional168;
struct sNode* __result59__;
struct sNode* default_value_92;
struct sNode* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_90, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_91, 0, sizeof(int));
memset(&default_value_92, 0, sizeof(struct sNode*));
                # 745 "./comelang2.h"
                # 741 "./comelang2.h"
                if(_if_conditional167=position<0,                _if_conditional167) {
                    # 742 "./comelang2.h"
                    position+=self->len;
                }
                # 745 "./comelang2.h"
                it_90=self->head;
                # 746 "./comelang2.h"
                i_91=0;
                # 753 "./comelang2.h"
                while(_while_condtional9=it_90!=((void*)0),                _while_condtional9) {
                    # 751 "./comelang2.h"
                    # 748 "./comelang2.h"
                    if(_if_conditional168=position==i_91,                    _if_conditional168) {
                        # 749 "./comelang2.h"
                        __result59__ = __result_obj__ = it_90->item;
                        return __result59__;
                    }
                    # 751 "./comelang2.h"
                    it_90=it_90->next;
                    # 752 "./comelang2.h"
                    i_91++;
                }
                # 755 "./comelang2.h"
                # 756 "./comelang2.h"
                memset(&default_value_92,0,sizeof(struct sNode*));
                # 757 "./comelang2.h"
                __result60__ = __result_obj__ = default_value_92;
                if(default_value_92 && !__freed_obj__) { default_value_92 = come_decrement_ref_count(default_value_92, ((struct sNode*)default_value_92)->finalize, ((struct sNode*)default_value_92)->_protocol_obj, 0, 1, 0); } 
                return __result60__;
                if(default_value_92 && !__freed_obj__) { default_value_92 = come_decrement_ref_count(default_value_92, ((struct sNode*)default_value_92)->finalize, ((struct sNode*)default_value_92)->_protocol_obj, 0, 0, 0); } 
}

char* header_function(struct sFun* fun, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value140;
void* right_value141;
struct buffer* output_101;
_Bool _if_conditional172;
void* right_value142;
void* right_value143;
struct buffer* output2_102;
int i_103;
struct list$1sTypeph* o2_saved_104;
struct sType* it_105;
_Bool _for_condtionalA11;
char* name_106;
void* right_value144;
char* str_107;
_Bool _if_conditional173;
void* right_value145;
void* right_value146;
char* str_108;
_Bool _if_conditional174;
void* right_value147;
struct sType* base_result_type_109;
void* right_value148;
void* right_value149;
struct list$1sNodeph* __dec_obj30;
void* right_value150;
char* result_type_str_110;
int i_111;
struct list$1sTypeph* o2_saved_112;
struct sType* it_113;
_Bool _for_condtionalA12;
char* name_114;
void* right_value151;
char* str_115;
_Bool _if_conditional175;
_Bool _if_conditional176;
struct sNode* node_116;
_Bool _if_conditional177;
void* right_value152;
void* right_value153;
void* right_value154;
char* __result63__;
void* right_value155;
struct CVALUE* cvalue_117;
void* right_value156;
void* right_value157;
char* result_type_str_118;
int i_119;
struct list$1sTypeph* o2_saved_120;
struct sType* it_121;
_Bool _for_condtionalA13;
char* name_122;
void* right_value158;
char* str_123;
_Bool _if_conditional178;
_Bool _if_conditional179;
void* right_value159;
char* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&output_101, 0, sizeof(struct buffer*));
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
memset(&output2_102, 0, sizeof(struct buffer*));
memset(&i_103, 0, sizeof(int));
memset(&o2_saved_104, 0, sizeof(struct list$1sTypeph*));
memset(&it_105, 0, sizeof(struct sType*));
memset(&name_106, 0, sizeof(char*));
memset(&right_value144, 0, sizeof(void*));
memset(&str_107, 0, sizeof(char*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&str_108, 0, sizeof(char*));
memset(&right_value147, 0, sizeof(void*));
memset(&base_result_type_109, 0, sizeof(struct sType*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&result_type_str_110, 0, sizeof(char*));
memset(&i_111, 0, sizeof(int));
memset(&o2_saved_112, 0, sizeof(struct list$1sTypeph*));
memset(&it_113, 0, sizeof(struct sType*));
memset(&name_114, 0, sizeof(char*));
memset(&right_value151, 0, sizeof(void*));
memset(&str_115, 0, sizeof(char*));
memset(&node_116, 0, sizeof(struct sNode*));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&cvalue_117, 0, sizeof(struct CVALUE*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&result_type_str_118, 0, sizeof(char*));
memset(&i_119, 0, sizeof(int));
memset(&o2_saved_120, 0, sizeof(struct list$1sTypeph*));
memset(&it_121, 0, sizeof(struct sType*));
memset(&name_122, 0, sizeof(char*));
memset(&right_value158, 0, sizeof(void*));
memset(&str_123, 0, sizeof(char*));
memset(&right_value159, 0, sizeof(void*));
    # 468 "03transpile2.c"
    output_101=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value141=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value140=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 468))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value140);
    if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value140;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value141);
    if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value141;
    __freed_obj__ = 0;
    # 565 "03transpile2.c"
    # 470 "03transpile2.c"
    if(_if_conditional172=fun->mResultType->mResultType,    _if_conditional172) {
        # 471 "03transpile2.c"
        output2_102=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value143=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value142=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 471))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value142);
        if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value142;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value143);
        if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value143;
        __freed_obj__ = 0;
        # 473 "03transpile2.c"
        buffer_append_str(output2_102,fun->mName);
        # 474 "03transpile2.c"
        buffer_append_str(output2_102,"(");
        # 476 "03transpile2.c"
        i_103=0;
        # 488 "03transpile2.c"
        for(
        o2_saved_104=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_105=list$1sTypeph_begin((o2_saved_104)) ,        0;        _for_condtionalA11=        !list$1sTypeph_end((o2_saved_104)) ,        _for_condtionalA11;        it_105=list$1sTypeph_next((o2_saved_104)) ,        0        ){
            # 478 "03transpile2.c"
            name_106=list$1charphp_operator_load_element(fun->mParamNames,i_103);
            # 480 "03transpile2.c"
            str_107=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value144=make_define_var(it_105,name_106,(_Bool)0,info)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value144);
            if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value144;
            __freed_obj__ = 0;
            # 481 "03transpile2.c"
            buffer_append_str(output2_102,str_107);
            # 486 "03transpile2.c"
            # 483 "03transpile2.c"
            if(_if_conditional173=i_103!=list$1sTypeph_length(fun->mParamTypes)-1,            _if_conditional173) {
                # 484 "03transpile2.c"
                buffer_append_str(output2_102,", ");
            }
            # 486 "03transpile2.c"
            i_103++;
            if(str_107 && !__freed_obj__) { str_107 = come_decrement_ref_count(str_107, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(o2_saved_104 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_104, (void*)0, (void*)0, 0, 0, 0, 0); }
        # 488 "03transpile2.c"
        buffer_append_str(output2_102,")");
        # 490 "03transpile2.c"
        str_108=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value146=make_lambda_type_name_string(fun->mResultType,((char*)(right_value145=buffer_to_string(output2_102))),info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value145);
        if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value145;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value146);
        if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value146;
        __freed_obj__ = 0;
        # 492 "03transpile2.c"
        buffer_append_str(output_101,str_108);
        # 493 "03transpile2.c"
        buffer_append_str(output_101,";\n");
        if(output2_102 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output2_102, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(str_108 && !__freed_obj__) { str_108 = come_decrement_ref_count(str_108, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        # 565 "03transpile2.c"
        # 495 "03transpile2.c"
        if(_if_conditional174=list$1sNodeph_length(fun->mResultType->mArrayNum)>0,        _if_conditional174) {
            # 496 "03transpile2.c"
            base_result_type_109=(struct sType*)come_increment_ref_count(((struct sType*)(right_value147=sType_clone(fun->mResultType))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value147);
            if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value147;
            __freed_obj__ = 0;
            # 497 "03transpile2.c"
            __dec_obj30=base_result_type_109->mArrayNum;
            base_result_type_109->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value149=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value148=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "03transpile2.c", 497))))))));
            if(__dec_obj30) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value148);
            if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value148;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value149);
            if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value149;
            __freed_obj__ = 0;
            # 499 "03transpile2.c"
            result_type_str_110=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value150=make_type_name_string(base_result_type_109,(_Bool)1,(_Bool)0,(_Bool)0,info)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value150);
            if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value150;
            __freed_obj__ = 0;
            # 501 "03transpile2.c"
            buffer_append_str(output_101,result_type_str_110);
            # 502 "03transpile2.c"
            buffer_append_str(output_101," (*");
            # 504 "03transpile2.c"
            buffer_append_str(output_101,fun->mName);
            # 505 "03transpile2.c"
            buffer_append_str(output_101,"(");
            # 507 "03transpile2.c"
            i_111=0;
            # 525 "03transpile2.c"
            for(
            o2_saved_112=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_113=list$1sTypeph_begin((o2_saved_112)) ,            0;            _for_condtionalA12=            !list$1sTypeph_end((o2_saved_112)) ,            _for_condtionalA12;            it_113=list$1sTypeph_next((o2_saved_112)) ,            0            ){
                # 509 "03transpile2.c"
                name_114=list$1charphp_operator_load_element(fun->mParamNames,i_111);
                # 511 "03transpile2.c"
                str_115=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value151=make_define_var(it_113,name_114,(_Bool)0,info)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value151);
                if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value151;
                __freed_obj__ = 0;
                # 512 "03transpile2.c"
                buffer_append_str(output_101,str_115);
                # 522 "03transpile2.c"
                # 514 "03transpile2.c"
                if(_if_conditional175=i_111==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional175) {
                    # 518 "03transpile2.c"
                    # 515 "03transpile2.c"
                    if(_if_conditional176=fun->mVarArgs,                    _if_conditional176) {
                        # 516 "03transpile2.c"
                        buffer_append_str(output_101,", ...");
                    }
                }
                else {
                    # 520 "03transpile2.c"
                    buffer_append_str(output_101,", ");
                }
                # 522 "03transpile2.c"
                i_111++;
                if(str_115 && !__freed_obj__) { str_115 = come_decrement_ref_count(str_115, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(o2_saved_112 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_112, (void*)0, (void*)0, 0, 0, 0, 0); }
            # 525 "03transpile2.c"
            node_116=list$1sNodephp_operator_load_element(fun->mResultType->mArrayNum,0);
            # 530 "03transpile2.c"
            # 526 "03transpile2.c"
            if(_if_conditional177=!node_compile(node_116,info),            _if_conditional177) {
                # 527 "03transpile2.c"
                err_msg(info,"invalid array number");
                # 528 "03transpile2.c"
                __result63__ = __result_obj__ = ((struct optional$2charphbool*)(right_value154=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value153=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 528))),(char*)come_increment_ref_count(((char*)(right_value152=__builtin_string("")))),(_Bool)0)));
                if(base_result_type_109 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_result_type_109, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_type_str_110 && !__freed_obj__) { result_type_str_110 = come_decrement_ref_count(result_type_str_110, (void*)0, (void*)0, 0, 0, 0); }
                if(output_101 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_101, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value152);
                if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value152;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value153);
                if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value153;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value154);
                if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value154;
                __freed_obj__ = 0;
                return __result63__;
            }
            # 530 "03transpile2.c"
            cvalue_117=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value155=get_value_from_stack(-1,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value155);
            if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value155;
            __freed_obj__ = 0;
            # 531 "03transpile2.c"
            dec_stack_ptr(1,info);
            # 533 "03transpile2.c"
            buffer_append_str(output_101,((char*)(right_value156=xsprintf("))[%s];\n",cvalue_117->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value156);
            if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[5] = right_value156;
            __freed_obj__ = 0;
            if(base_result_type_109 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_result_type_109, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(result_type_str_110 && !__freed_obj__) { result_type_str_110 = come_decrement_ref_count(result_type_str_110, (void*)0, (void*)0, 0, 0, 0); }
            if(cvalue_117 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,cvalue_117, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            # 536 "03transpile2.c"
            result_type_str_118=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value157=make_type_name_string(fun->mResultType,(_Bool)1,(_Bool)0,(_Bool)0,info)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value157);
            if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value157;
            __freed_obj__ = 0;
            # 538 "03transpile2.c"
            buffer_append_str(output_101,result_type_str_118);
            # 539 "03transpile2.c"
            buffer_append_str(output_101," ");
            # 541 "03transpile2.c"
            buffer_append_str(output_101,fun->mName);
            # 542 "03transpile2.c"
            buffer_append_str(output_101,"(");
            # 544 "03transpile2.c"
            i_119=0;
            # 562 "03transpile2.c"
            for(
            o2_saved_120=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_121=list$1sTypeph_begin((o2_saved_120)) ,            0;            _for_condtionalA13=            !list$1sTypeph_end((o2_saved_120)) ,            _for_condtionalA13;            it_121=list$1sTypeph_next((o2_saved_120)) ,            0            ){
                # 546 "03transpile2.c"
                name_122=list$1charphp_operator_load_element(fun->mParamNames,i_119);
                # 548 "03transpile2.c"
                str_123=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value158=make_define_var(it_121,name_122,(_Bool)0,info)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value158);
                if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value158;
                __freed_obj__ = 0;
                # 549 "03transpile2.c"
                buffer_append_str(output_101,str_123);
                # 559 "03transpile2.c"
                # 551 "03transpile2.c"
                if(_if_conditional178=i_119==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional178) {
                    # 555 "03transpile2.c"
                    # 552 "03transpile2.c"
                    if(_if_conditional179=fun->mVarArgs,                    _if_conditional179) {
                        # 553 "03transpile2.c"
                        buffer_append_str(output_101,", ...");
                    }
                }
                else {
                    # 557 "03transpile2.c"
                    buffer_append_str(output_101,", ");
                }
                # 559 "03transpile2.c"
                i_119++;
                if(str_123 && !__freed_obj__) { str_123 = come_decrement_ref_count(str_123, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(o2_saved_120 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_120, (void*)0, (void*)0, 0, 0, 0, 0); }
            # 562 "03transpile2.c"
            buffer_append_str(output_101,");\n");
            if(result_type_str_118 && !__freed_obj__) { result_type_str_118 = come_decrement_ref_count(result_type_str_118, (void*)0, (void*)0, 0, 0, 0); }
        }
    }
    # 565 "03transpile2.c"
    __result64__ = __result_obj__ = ((char*)(right_value159=buffer_to_string(output_101)));
    if(output_101 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_101, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value159);
    if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { right_value159 = come_decrement_ref_count(right_value159, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value159;
    __freed_obj__ = 0;
    return __result64__;
    if(output_101 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_101, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* header_lambda(struct sType* lambda_type, char* name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value160;
void* right_value161;
struct buffer* output_124;
void* right_value162;
char* result_type_str_125;
int i_126;
struct list$1sTypeph* o2_saved_127;
struct sType* it_128;
_Bool _for_condtionalA14;
char* name_129;
void* right_value163;
char* str_130;
_Bool _if_conditional180;
_Bool _if_conditional181;
void* right_value164;
char* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value160, 0, sizeof(void*));
memset(&right_value161, 0, sizeof(void*));
memset(&output_124, 0, sizeof(struct buffer*));
memset(&right_value162, 0, sizeof(void*));
memset(&result_type_str_125, 0, sizeof(char*));
memset(&i_126, 0, sizeof(int));
memset(&o2_saved_127, 0, sizeof(struct list$1sTypeph*));
memset(&it_128, 0, sizeof(struct sType*));
memset(&name_129, 0, sizeof(char*));
memset(&right_value163, 0, sizeof(void*));
memset(&str_130, 0, sizeof(char*));
memset(&right_value164, 0, sizeof(void*));
    # 570 "03transpile2.c"
    output_124=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value161=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value160=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 570))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value160);
    if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value160;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value161);
    if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value161;
    __freed_obj__ = 0;
    # 572 "03transpile2.c"
    result_type_str_125=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value162=make_type_name_string(lambda_type->mResultType->v1,(_Bool)1,(_Bool)0,(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value162);
    if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value162;
    __freed_obj__ = 0;
    # 574 "03transpile2.c"
    buffer_append_str(output_124,result_type_str_125);
    # 575 "03transpile2.c"
    buffer_append_str(output_124," ");
    # 577 "03transpile2.c"
    buffer_append_str(output_124,name);
    # 578 "03transpile2.c"
    buffer_append_str(output_124,"(");
    # 580 "03transpile2.c"
    i_126=0;
    # 598 "03transpile2.c"
    for(
    o2_saved_127=(struct list$1sTypeph*)come_increment_ref_count((lambda_type->mParamTypes)),it_128=list$1sTypeph_begin((o2_saved_127)) ,    0;    _for_condtionalA14=    !list$1sTypeph_end((o2_saved_127)) ,    _for_condtionalA14;    it_128=list$1sTypeph_next((o2_saved_127)) ,    0    ){
        # 582 "03transpile2.c"
        name_129=list$1charphp_operator_load_element(lambda_type->mParamNames,i_126);
        # 584 "03transpile2.c"
        str_130=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value163=make_define_var(it_128,name_129,(_Bool)0,info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value163);
        if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value163;
        __freed_obj__ = 0;
        # 585 "03transpile2.c"
        buffer_append_str(output_124,str_130);
        # 595 "03transpile2.c"
        # 587 "03transpile2.c"
        if(_if_conditional180=i_126==list$1sTypeph_length(lambda_type->mParamTypes)-1,        _if_conditional180) {
            # 591 "03transpile2.c"
            # 588 "03transpile2.c"
            if(_if_conditional181=lambda_type->mVarArgs,            _if_conditional181) {
                # 589 "03transpile2.c"
                buffer_append_str(output_124,", ...");
            }
        }
        else {
            # 593 "03transpile2.c"
            buffer_append_str(output_124,", ");
        }
        # 595 "03transpile2.c"
        i_126++;
        if(str_130 && !__freed_obj__) { str_130 = come_decrement_ref_count(str_130, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(o2_saved_127 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_127, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 598 "03transpile2.c"
    buffer_append_str(output_124,");\n");
    # 600 "03transpile2.c"
    __result65__ = __result_obj__ = ((char*)(right_value164=buffer_to_string(output_124)));
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(output_124 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_124, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_type_str_125 && !__freed_obj__) { result_type_str_125 = come_decrement_ref_count(result_type_str_125, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value164);
    if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { right_value164 = come_decrement_ref_count(right_value164, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value164;
    __freed_obj__ = 0;
    return __result65__;
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(output_124 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_124, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_type_str_125 && !__freed_obj__) { result_type_str_125 = come_decrement_ref_count(result_type_str_125, (void*)0, (void*)0, 0, 0, 0); }
}

void add_come_code(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional182;
char* msg2_131;
va_list args_132;
int len_133;
_Bool _if_conditional183;
int i_134;
_Bool _for_condtionalA15;
void* right_value165;
void* right_value166;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_131, 0, sizeof(char*));
memset(&args_132, 0, sizeof(va_list));
memset(&len_133, 0, sizeof(int));
memset(&i_134, 0, sizeof(int));
memset(&right_value165, 0, sizeof(void*));
memset(&right_value166, 0, sizeof(void*));
    # 609 "03transpile2.c"
    # 606 "03transpile2.c"
    if(_if_conditional182=info->no_output_come_code,    _if_conditional182) {
        # 607 "03transpile2.c"
        return;
    }
    # 609 "03transpile2.c"
    # 611 "03transpile2.c"
    # 612 "03transpile2.c"
    __builtin_va_start(args_132,msg);
    # 613 "03transpile2.c"
    len_133=vasprintf(&msg2_131,msg,args_132);
    # 614 "03transpile2.c"
    __builtin_va_end(args_132);
    # 628 "03transpile2.c"
    # 616 "03transpile2.c"
    if(_if_conditional183=info->come_fun,    _if_conditional183) {
        # 617 "03transpile2.c"
        # 622 "03transpile2.c"
        for(
        i_134=0 ,        0;        _for_condtionalA15=        i_134<info->block_level ,        _for_condtionalA15;        i_134++ ,        0        ){
            # 619 "03transpile2.c"
            buffer_append_str(info->come_fun->mSource,"    ");
        }
        # 622 "03transpile2.c"
        buffer_append_str(info->come_fun->mSource,((char*)(right_value165=xsprintf("%s",msg2_131))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value165);
        if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { right_value165 = come_decrement_ref_count(right_value165, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value165;
        __freed_obj__ = 0;
    }
    else {
        # 625 "03transpile2.c"
        buffer_append_str(info->module->mSourceHead,((char*)(right_value166=xsprintf("%s",msg2_131))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value166);
        if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value166;
        __freed_obj__ = 0;
    }
    # 628 "03transpile2.c"
    free(msg2_131);
    if((&args_132) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_132), (void*)0, (void*)0, 1, 0, 0, 0); }
}

static void va_list_finalize(va_list self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional184;
char* msg2_135;
va_list args_136;
int len_137;
void* right_value167;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_135, 0, sizeof(char*));
memset(&args_136, 0, sizeof(va_list));
memset(&len_137, 0, sizeof(int));
memset(&right_value167, 0, sizeof(void*));
    # 636 "03transpile2.c"
    # 633 "03transpile2.c"
    if(_if_conditional184=info->no_output_come_code,    _if_conditional184) {
        # 634 "03transpile2.c"
        return;
    }
    # 636 "03transpile2.c"
    # 638 "03transpile2.c"
    # 639 "03transpile2.c"
    __builtin_va_start(args_136,msg);
    # 640 "03transpile2.c"
    len_137=vasprintf(&msg2_135,msg,args_136);
    # 641 "03transpile2.c"
    __builtin_va_end(args_136);
    # 643 "03transpile2.c"
    buffer_append_str(info->module->mSourceHead,((char*)(right_value167=xsprintf("%s",msg2_135))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value167);
    if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value167;
    __freed_obj__ = 0;
    # 645 "03transpile2.c"
    free(msg2_135);
    if((&args_136) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_136), (void*)0, (void*)0, 1, 0, 0, 0); }
}

int transpile_v3(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value168;
char* name_138;
void* right_value169;
void* right_value170;
struct sType* result_type_139;
void* right_value171;
void* right_value172;
void* right_value173;
void* right_value174;
struct sType* __list_values1___140[2];
void* right_value178;
void* right_value179;
struct list$1sTypeph* param_types_145;
void* right_value180;
void* right_value181;
char* __list_values2___146[2];
void* right_value185;
void* right_value186;
struct list$1charph* param_names_151;
void* right_value187;
void* right_value188;
struct list$1charph* param_default_parametors_152;
void* right_value189;
void* right_value190;
void* right_value191;
void* right_value192;
struct sFun* main_fun_153;
void* right_value203;
int __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value168, 0, sizeof(void*));
memset(&name_138, 0, sizeof(char*));
memset(&right_value169, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
memset(&result_type_139, 0, sizeof(struct sType*));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
memset(&param_types_145, 0, sizeof(struct list$1sTypeph*));
memset(&right_value180, 0, sizeof(void*));
memset(&right_value181, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
memset(&param_names_151, 0, sizeof(struct list$1charph*));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
memset(&param_default_parametors_152, 0, sizeof(struct list$1charph*));
memset(&right_value189, 0, sizeof(void*));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&main_fun_153, 0, sizeof(struct sFun*));
memset(&right_value203, 0, sizeof(void*));
    # 650 "03transpile2.c"
    name_138=(char*)come_increment_ref_count(((char*)(right_value168=__builtin_string("main"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value168);
    if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value168;
    __freed_obj__ = 0;
    # 651 "03transpile2.c"
    result_type_139=(struct sType*)come_increment_ref_count(((struct sType*)(right_value170=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value169=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "03transpile2.c", 651)))),"int",(_Bool)0,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value169);
    if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value169;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value170);
    if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value170;
    __freed_obj__ = 0;
    # 652 "03transpile2.c"
    {__list_values1___140[0]=come_increment_ref_count(((struct sType*)(right_value172=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value171=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "03transpile2.c", 652)))),"int",(_Bool)0,info))));
__list_values1___140[1]=come_increment_ref_count(((struct sType*)(right_value174=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value173=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "03transpile2.c", 652)))),"char**",(_Bool)0,info))));
}    param_types_145=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value179=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value178=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "03transpile2.c", 652)))),2,__list_values1___140))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value171);
    if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value171;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value172);
    if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value172;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value173);
    if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value173;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value174);
    if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value174;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value178);
    if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypeph_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value178;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value179);
    if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value179;
    __freed_obj__ = 0;
    # 653 "03transpile2.c"
    {__list_values2___146[0]=come_increment_ref_count(((char*)(right_value180=__builtin_string("argc"))));
__list_values2___146[1]=come_increment_ref_count(((char*)(right_value181=__builtin_string("argv"))));
}    param_names_151=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value186=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value185=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "03transpile2.c", 653)))),2,__list_values2___146))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value180);
    if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { right_value180 = come_decrement_ref_count(right_value180, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[9] = right_value180;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value181);
    if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { right_value181 = come_decrement_ref_count(right_value181, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[10] = right_value181;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value185);
    if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charph_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[11] = right_value185;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value186);
    if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[12] = right_value186;
    __freed_obj__ = 0;
    # 654 "03transpile2.c"
    param_default_parametors_152=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value188=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value187=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "03transpile2.c", 654))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value187);
    if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[13] = right_value187;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value188);
    if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[14] = right_value188;
    __freed_obj__ = 0;
    # 660 "03transpile2.c"
    main_fun_153=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value192=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value189=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "03transpile2.c", 655)))),(char*)come_increment_ref_count(name_138),(struct sType*)come_increment_ref_count(result_type_139),(struct list$1sTypeph*)come_increment_ref_count(param_types_145),(struct list$1charph*)come_increment_ref_count(param_names_151),(struct list$1charph*)come_increment_ref_count(param_default_parametors_152),(_Bool)0,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value190=__builtin_string("int main(int argc, char** argv)")))),(char*)come_increment_ref_count(((char*)(right_value191=__builtin_string("")))),info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value189);
    if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[15] = right_value189;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value190);
    if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { right_value190 = come_decrement_ref_count(right_value190, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[16] = right_value190;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value191);
    if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { right_value191 = come_decrement_ref_count(right_value191, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[17] = right_value191;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value192);
    if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[18] = right_value192;
    __freed_obj__ = 0;
    # 662 "03transpile2.c"
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value203=__builtin_string(name_138)))),(struct sFun*)come_increment_ref_count(main_fun_153));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value203);
    if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { right_value203 = come_decrement_ref_count(right_value203, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[19] = right_value203;
    __freed_obj__ = 0;
    # 664 "03transpile2.c"
    add_come_code(info,"#include <stdio.h>\n");
    # 666 "03transpile2.c"
    info->come_fun=main_fun_153;
    # 668 "03transpile2.c"
    info->block_level++;
    # 669 "03transpile2.c"
    add_come_code(info,"puts(\"HELLO COMELANG\");\n\n");
    # 670 "03transpile2.c"
    add_come_code(info,"return 0;\n");
    # 671 "03transpile2.c"
    info->block_level--;
    # 673 "03transpile2.c"
    __result96__ = 0;
    if(name_138 && !__freed_obj__) { name_138 = come_decrement_ref_count(name_138, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_139 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_139, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_types_145 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_145, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_names_151 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_151, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_default_parametors_152 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_152, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(main_fun_153 && !__freed_obj__) { come_call_finalizer(sFun_finalize,main_fun_153, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result96__;
    if(name_138 && !__freed_obj__) { name_138 = come_decrement_ref_count(name_138, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_139 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_139, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_types_145 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_145, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_names_151 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_151, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_default_parametors_152 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_152, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(main_fun_153 && !__freed_obj__) { come_call_finalizer(sFun_finalize,main_fun_153, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_141;
_Bool _for_condtionalA16;
struct list$1sTypeph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_141, 0, sizeof(int));
        # 165 "./comelang2.h"
        self->head=((void*)0);
        # 166 "./comelang2.h"
        self->tail=((void*)0);
        # 167 "./comelang2.h"
        self->len=0;
        # 173 "./comelang2.h"
        for(
        i_141=0 ,        0;        _for_condtionalA16=        i_141<num_value ,        _for_condtionalA16;        i_141++ ,        0        ){
            # 170 "./comelang2.h"
            list$1sTypeph_push_back(self,values[i_141]);
        }
        # 173 "./comelang2.h"
        __result67__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result67__;
        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional185;
void* right_value175;
struct list_item$1sTypeph* litem_142;
struct sType* __dec_obj31;
_Bool _if_conditional186;
void* right_value176;
struct list_item$1sTypeph* litem_143;
struct sType* __dec_obj32;
void* right_value177;
struct list_item$1sTypeph* litem_144;
struct sType* __dec_obj33;
struct list$1sTypeph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value175, 0, sizeof(void*));
memset(&litem_142, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value176, 0, sizeof(void*));
memset(&litem_143, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value177, 0, sizeof(void*));
memset(&litem_144, 0, sizeof(struct list_item$1sTypeph*));
                # 309 "./comelang2.h"
                # 278 "./comelang2.h"
                if(_if_conditional185=self->len==0,                _if_conditional185) {
                    # 279 "./comelang2.h"
                    litem_142=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value175=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 279))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value175);
                    if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value175;
                    __freed_obj__ = 0;
                    # 281 "./comelang2.h"
                    litem_142->prev=((void*)0);
                    # 282 "./comelang2.h"
                    litem_142->next=((void*)0);
                    # 283 "./comelang2.h"
                    __dec_obj31=litem_142->item;
                    litem_142->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj31) { come_call_finalizer(sType_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0); }
                    # 285 "./comelang2.h"
                    self->tail=litem_142;
                    # 286 "./comelang2.h"
                    self->head=litem_142;
                }
                else {
                    # 309 "./comelang2.h"
                    # 288 "./comelang2.h"
                    if(_if_conditional186=self->len==1,                    _if_conditional186) {
                        # 289 "./comelang2.h"
                        litem_143=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value176=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 289))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value176);
                        if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value176;
                        __freed_obj__ = 0;
                        # 291 "./comelang2.h"
                        litem_143->prev=self->head;
                        # 292 "./comelang2.h"
                        litem_143->next=((void*)0);
                        # 293 "./comelang2.h"
                        __dec_obj32=litem_143->item;
                        litem_143->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj32) { come_call_finalizer(sType_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0); }
                        # 295 "./comelang2.h"
                        self->tail=litem_143;
                        # 296 "./comelang2.h"
                        self->head->next=litem_143;
                    }
                    else {
                        # 299 "./comelang2.h"
                        litem_144=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value177=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 299))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value177);
                        if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value177;
                        __freed_obj__ = 0;
                        # 301 "./comelang2.h"
                        litem_144->prev=self->tail;
                        # 302 "./comelang2.h"
                        litem_144->next=((void*)0);
                        # 303 "./comelang2.h"
                        __dec_obj33=litem_144->item;
                        litem_144->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj33) { come_call_finalizer(sType_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0); }
                        # 305 "./comelang2.h"
                        self->tail->next=litem_144;
                        # 306 "./comelang2.h"
                        self->tail=litem_144;
                    }
                }
                # 309 "./comelang2.h"
                self->len++;
                # 311 "./comelang2.h"
                __result66__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result66__;
                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_147;
_Bool _for_condtionalA17;
struct list$1charph* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_147, 0, sizeof(int));
        # 165 "./comelang2.h"
        self->head=((void*)0);
        # 166 "./comelang2.h"
        self->tail=((void*)0);
        # 167 "./comelang2.h"
        self->len=0;
        # 173 "./comelang2.h"
        for(
        i_147=0 ,        0;        _for_condtionalA17=        i_147<num_value ,        _for_condtionalA17;        i_147++ ,        0        ){
            # 170 "./comelang2.h"
            list$1charph_push_back(self,values[i_147]);
        }
        # 173 "./comelang2.h"
        __result69__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result69__;
        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional187;
void* right_value182;
struct list_item$1charph* litem_148;
char* __dec_obj34;
_Bool _if_conditional188;
void* right_value183;
struct list_item$1charph* litem_149;
char* __dec_obj35;
void* right_value184;
struct list_item$1charph* litem_150;
char* __dec_obj36;
struct list$1charph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value182, 0, sizeof(void*));
memset(&litem_148, 0, sizeof(struct list_item$1charph*));
memset(&right_value183, 0, sizeof(void*));
memset(&litem_149, 0, sizeof(struct list_item$1charph*));
memset(&right_value184, 0, sizeof(void*));
memset(&litem_150, 0, sizeof(struct list_item$1charph*));
                # 309 "./comelang2.h"
                # 278 "./comelang2.h"
                if(_if_conditional187=self->len==0,                _if_conditional187) {
                    # 279 "./comelang2.h"
                    litem_148=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value182=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 279))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value182);
                    if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value182;
                    __freed_obj__ = 0;
                    # 281 "./comelang2.h"
                    litem_148->prev=((void*)0);
                    # 282 "./comelang2.h"
                    litem_148->next=((void*)0);
                    # 283 "./comelang2.h"
                    __dec_obj34=litem_148->item;
                    litem_148->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
                    # 285 "./comelang2.h"
                    self->tail=litem_148;
                    # 286 "./comelang2.h"
                    self->head=litem_148;
                }
                else {
                    # 309 "./comelang2.h"
                    # 288 "./comelang2.h"
                    if(_if_conditional188=self->len==1,                    _if_conditional188) {
                        # 289 "./comelang2.h"
                        litem_149=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value183=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 289))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value183);
                        if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value183;
                        __freed_obj__ = 0;
                        # 291 "./comelang2.h"
                        litem_149->prev=self->head;
                        # 292 "./comelang2.h"
                        litem_149->next=((void*)0);
                        # 293 "./comelang2.h"
                        __dec_obj35=litem_149->item;
                        litem_149->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0,0); }
                        # 295 "./comelang2.h"
                        self->tail=litem_149;
                        # 296 "./comelang2.h"
                        self->head->next=litem_149;
                    }
                    else {
                        # 299 "./comelang2.h"
                        litem_150=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value184=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 299))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value184);
                        if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value184;
                        __freed_obj__ = 0;
                        # 301 "./comelang2.h"
                        litem_150->prev=self->tail;
                        # 302 "./comelang2.h"
                        litem_150->next=((void*)0);
                        # 303 "./comelang2.h"
                        __dec_obj36=litem_150->item;
                        litem_150->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0,0); }
                        # 305 "./comelang2.h"
                        self->tail->next=litem_150;
                        # 306 "./comelang2.h"
                        self->tail=litem_150;
                    }
                }
                # 309 "./comelang2.h"
                self->len++;
                # 311 "./comelang2.h"
                __result68__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                return __result68__;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
_Bool _if_conditional201;
_Bool _if_conditional202;
_Bool _if_conditional203;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        # 1 "sFun_finalize"
        # 0 "sFun_finalize"
        if(_if_conditional189=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional189) {
            # 0 "sFun_finalize"
            if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
        }
        # 2 "sFun_finalize"
        # 1 "sFun_finalize"
        if(_if_conditional190=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional190) {
            # 1 "sFun_finalize"
            if(self->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        # 3 "sFun_finalize"
        # 2 "sFun_finalize"
        if(_if_conditional191=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional191) {
            # 2 "sFun_finalize"
            if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        # 4 "sFun_finalize"
        # 3 "sFun_finalize"
        if(_if_conditional192=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional192) {
            # 3 "sFun_finalize"
            if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        # 5 "sFun_finalize"
        # 4 "sFun_finalize"
        if(_if_conditional193=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),        _if_conditional193) {
            # 4 "sFun_finalize"
            if(self->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        # 6 "sFun_finalize"
        # 5 "sFun_finalize"
        if(_if_conditional194=self!=((void*)0)&&self->mLambdaType!=((void*)0),        _if_conditional194) {
            # 5 "sFun_finalize"
            if(self->mLambdaType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        # 7 "sFun_finalize"
        # 6 "sFun_finalize"
        if(_if_conditional195=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional195) {
            # 6 "sFun_finalize"
            if(self->mBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        # 8 "sFun_finalize"
        # 7 "sFun_finalize"
        if(_if_conditional198=self!=((void*)0)&&self->mSource!=((void*)0),        _if_conditional198) {
            # 7 "sFun_finalize"
            if(self->mSource && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        # 9 "sFun_finalize"
        # 8 "sFun_finalize"
        if(_if_conditional199=self!=((void*)0)&&self->mSourceHead!=((void*)0),        _if_conditional199) {
            # 8 "sFun_finalize"
            if(self->mSourceHead && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        # 10 "sFun_finalize"
        # 9 "sFun_finalize"
        if(_if_conditional200=self!=((void*)0)&&self->mSourceHead2!=((void*)0),        _if_conditional200) {
            # 9 "sFun_finalize"
            if(self->mSourceHead2 && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        # 11 "sFun_finalize"
        # 10 "sFun_finalize"
        if(_if_conditional201=self!=((void*)0)&&self->mSourceDefer!=((void*)0),        _if_conditional201) {
            # 10 "sFun_finalize"
            if(self->mSourceDefer && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        # 12 "sFun_finalize"
        # 11 "sFun_finalize"
        if(_if_conditional202=self!=((void*)0)&&self->mComeHeader!=((void*)0),        _if_conditional202) {
            # 11 "sFun_finalize"
            if(self->mComeHeader && !__freed_obj__) { self->mComeHeader = come_decrement_ref_count(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0); }
        }
        # 13 "sFun_finalize"
        # 12 "sFun_finalize"
        if(_if_conditional203=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional203) {
            # 12 "sFun_finalize"
            if(self->mDeclareSName && !__freed_obj__) { self->mDeclareSName = come_decrement_ref_count(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
        }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional196;
_Bool _if_conditional197;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                # 1 "sBlock_finalize"
                # 0 "sBlock_finalize"
                if(_if_conditional196=self!=((void*)0)&&self->mNodes!=((void*)0),                _if_conditional196) {
                    # 0 "sBlock_finalize"
                    if(self->mNodes && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                # 2 "sBlock_finalize"
                # 1 "sBlock_finalize"
                if(_if_conditional197=self!=((void*)0)&&self->mVarTable!=((void*)0),                _if_conditional197) {
                    # 1 "sBlock_finalize"
                    if(self->mVarTable && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional204;
unsigned int hash_172;
unsigned int it_173;
_Bool _while_condtional12;
_Bool _if_conditional217;
void* right_value197;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional239;
_Bool _if_conditional240;
_Bool _if_conditional241;
_Bool _if_conditional242;
_Bool _if_conditional243;
_Bool same_key_exist_190;
char* it2_193;
_Bool _for_condtionalA19;
void* right_value199;
_Bool _if_conditional248;
_Bool _if_conditional249;
struct map$2charphsFunph* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_172, 0, sizeof(unsigned int));
memset(&it_173, 0, sizeof(unsigned int));
memset(&right_value197, 0, sizeof(void*));
memset(&same_key_exist_190, 0, sizeof(_Bool));
memset(&it2_193, 0, sizeof(char*));
memset(&right_value199, 0, sizeof(void*));
        # 1432 "./comelang2.h"
        # 1429 "./comelang2.h"
        if(_if_conditional204=self->len*10>=self->size,        _if_conditional204) {
            # 1430 "./comelang2.h"
            map$2charphsFunph_rehash(self);
        }
        # 1432 "./comelang2.h"
        hash_172=string_get_hash_key(key)%self->size;
        # 1433 "./comelang2.h"
        it_173=hash_172;
        # 1491 "./comelang2.h"
        while(_while_condtional12=(_Bool)1,        _while_condtional12) {
            # 1489 "./comelang2.h"
            # 1436 "./comelang2.h"
            if(_if_conditional217=self->item_existance[it_173],            _if_conditional217) {
                # 1459 "./comelang2.h"
                # 1438 "./comelang2.h"
                if(_if_conditional218=optional$2boolbool_value(((struct optional$2boolbool*)(right_value197=string_equals(self->keys[it_173],key)))),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value197),
                (right_value197 && right_value197 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value197, 
                __freed_obj__ = 0, 
                _if_conditional218) {
                    # 1449 "./comelang2.h"
                    # 1440 "./comelang2.h"
                    if(_if_conditional219=1,                    _if_conditional219) {
                        # 1441 "./comelang2.h"
                        list$1charp_remove(self->key_list,self->keys[it_173]);
                        # 1442 "./comelang2.h"
                        if(self->keys[it_173] && !__freed_obj__) { self->keys[it_173] = come_decrement_ref_count(self->keys[it_173], (void*)0, (void*)0, 0, 0, 0); }
                        # 1443 "./comelang2.h"
                        self->keys[it_173]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1446 "./comelang2.h"
                        list$1charp_remove(self->key_list,self->keys[it_173]);
                        # 1447 "./comelang2.h"
                        self->keys[it_173]=key;
                    }
                    # 1456 "./comelang2.h"
                    # 1449 "./comelang2.h"
                    if(_if_conditional239=1,                    _if_conditional239) {
                        # 1450 "./comelang2.h"
                        if(self->items[it_173] && !__freed_obj__) { come_call_finalizer(sFun_finalize,self->items[it_173], (void*)0, (void*)0, 0, 0, 0, 0); }
                        # 1451 "./comelang2.h"
                        self->items[it_173]=(struct sFun*)come_increment_ref_count(item);
                    }
                    else {
                        # 1454 "./comelang2.h"
                        self->items[it_173]=item;
                    }
                    # 1456 "./comelang2.h"
                    break;
                }
                # 1459 "./comelang2.h"
                it_173++;
                # 1469 "./comelang2.h"
                # 1461 "./comelang2.h"
                if(_if_conditional240=it_173>=self->size,                _if_conditional240) {
                    # 1462 "./comelang2.h"
                    it_173=0;
                }
                else {
                    # 1469 "./comelang2.h"
                    # 1464 "./comelang2.h"
                    if(_if_conditional241=it_173==hash_172,                    _if_conditional241) {
                        # 1465 "./comelang2.h"
                        printf("unexpected error in map.insert\n");
                        # 1466 "./comelang2.h"
                        stackframe();
                        # 1467 "./comelang2.h"
                        exit(2);
                    }
                }
            }
            else {
                # 1471 "./comelang2.h"
                self->item_existance[it_173]=(_Bool)1;
                # 1478 "./comelang2.h"
                # 1472 "./comelang2.h"
                if(_if_conditional242=1,                _if_conditional242) {
                    # 1473 "./comelang2.h"
                    self->keys[it_173]=(char*)come_increment_ref_count(key);
                }
                else {
                    # 1476 "./comelang2.h"
                    self->keys[it_173]=key;
                }
                # 1485 "./comelang2.h"
                # 1478 "./comelang2.h"
                if(_if_conditional243=1,                _if_conditional243) {
                    # 1479 "./comelang2.h"
                    self->items[it_173]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    # 1482 "./comelang2.h"
                    self->items[it_173]=item;
                }
                # 1485 "./comelang2.h"
                self->len++;
                # 1487 "./comelang2.h"
                break;
            }
        }
        # 1491 "./comelang2.h"
        same_key_exist_190=(_Bool)0;
        # 1499 "./comelang2.h"
        for(
        it2_193=list$1charp_begin(self->key_list) ,        0;        _for_condtionalA19=        !list$1charp_end(self->key_list) ,        _for_condtionalA19;        it2_193=list$1charp_next(self->key_list) ,        0        ){
            # 1497 "./comelang2.h"
            # 1494 "./comelang2.h"
            if(_if_conditional248=optional$2boolbool_value(((struct optional$2boolbool*)(right_value199=string_equals(it2_193,key)))),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value199),
            (right_value199 && right_value199 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value199, 
            __freed_obj__ = 0, 
            _if_conditional248) {
                # 1495 "./comelang2.h"
                same_key_exist_190=(_Bool)1;
            }
        }
        # 1503 "./comelang2.h"
        # 1499 "./comelang2.h"
        if(_if_conditional249=!same_key_exist_190,        _if_conditional249) {
            # 1500 "./comelang2.h"
            list$1charp_push_back(self->key_list,key);
        }
        # 1503 "./comelang2.h"
        __result95__ = __result_obj__ = self;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result95__;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_154;
void* right_value193;
char** keys_155;
void* right_value194;
struct sFun** items_156;
void* right_value195;
_Bool* item_existance_157;
int len_158;
char* it_161;
_Bool _for_condtionalA18;
struct sFun* default_value_164;
struct sFun* it2_168;
unsigned int hash_169;
int n_170;
_Bool _while_condtional11;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
struct sFun* default_value_171;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_154, 0, sizeof(int));
memset(&right_value193, 0, sizeof(void*));
memset(&keys_155, 0, sizeof(char**));
memset(&right_value194, 0, sizeof(void*));
memset(&items_156, 0, sizeof(struct sFun**));
memset(&right_value195, 0, sizeof(void*));
memset(&item_existance_157, 0, sizeof(_Bool*));
memset(&len_158, 0, sizeof(int));
memset(&it_161, 0, sizeof(char*));
memset(&default_value_164, 0, sizeof(struct sFun*));
memset(&it2_168, 0, sizeof(struct sFun*));
memset(&hash_169, 0, sizeof(unsigned int));
memset(&n_170, 0, sizeof(int));
memset(&default_value_171, 0, sizeof(struct sFun*));
                # 1376 "./comelang2.h"
                size_154=self->size*10;
                # 1377 "./comelang2.h"
                keys_155=(char**)come_increment_ref_count(((char**)(right_value193=(char**)come_calloc(1, sizeof(char*)*(1*(size_154)), "./comelang2.h", 1377))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value193);
                if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { right_value193 = come_decrement_ref_count(right_value193, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value193;
                __freed_obj__ = 0;
                # 1378 "./comelang2.h"
                items_156=(struct sFun**)come_increment_ref_count(((struct sFun**)(right_value194=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_154)), "./comelang2.h", 1378))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value194);
                if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value194;
                __freed_obj__ = 0;
                # 1379 "./comelang2.h"
                item_existance_157=(_Bool*)come_increment_ref_count(((_Bool*)(right_value195=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_154)), "./comelang2.h", 1379))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value195);
                if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { right_value195 = come_decrement_ref_count(right_value195, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value195;
                __freed_obj__ = 0;
                # 1381 "./comelang2.h"
                len_158=0;
                # 1416 "./comelang2.h"
                for(
                it_161=map$2charphsFunph_begin(self) ,                0;                _for_condtionalA18=                !map$2charphsFunph_end(self) ,                _for_condtionalA18;                it_161=map$2charphsFunph_next(self) ,                0                ){
                    # 1384 "./comelang2.h"
                    # 1385 "./comelang2.h"
                    memset(&default_value_164,0,sizeof(struct sFun*));
                    # 1386 "./comelang2.h"
                    it2_168=map$2charphsFunph_at(self,it_161,default_value_164);
                    # 1387 "./comelang2.h"
                    hash_169=string_get_hash_key(it_161)%size_154;
                    # 1388 "./comelang2.h"
                    n_170=hash_169;
                    # 1414 "./comelang2.h"
                    while(_while_condtional11=(_Bool)1,                    _while_condtional11) {
                        # 1413 "./comelang2.h"
                        # 1391 "./comelang2.h"
                        if(_if_conditional214=item_existance_157[n_170],                        _if_conditional214) {
                            # 1393 "./comelang2.h"
                            n_170++;
                            # 1403 "./comelang2.h"
                            # 1395 "./comelang2.h"
                            if(_if_conditional215=n_170>=size_154,                            _if_conditional215) {
                                # 1396 "./comelang2.h"
                                n_170=0;
                            }
                            else {
                                # 1403 "./comelang2.h"
                                # 1398 "./comelang2.h"
                                if(_if_conditional216=n_170==hash_169,                                _if_conditional216) {
                                    # 1399 "./comelang2.h"
                                    printf("unexpected error in map.rehash(1)\n");
                                    # 1400 "./comelang2.h"
                                    stackframe();
                                    # 1401 "./comelang2.h"
                                    exit(2);
                                }
                            }
                        }
                        else {
                            # 1405 "./comelang2.h"
                            item_existance_157[n_170]=(_Bool)1;
                            # 1406 "./comelang2.h"
                            keys_155[n_170]=it_161;
                            # 1407 "./comelang2.h"
                            # 1408 "./comelang2.h"
                            items_156[n_170]=map$2charphsFunph_at(self,it_161,default_value_171);
                            # 1410 "./comelang2.h"
                            len_158++;
                            # 1411 "./comelang2.h"
                            break;
                        }
                    }
                }
                # 1416 "./comelang2.h"
                come_free_object((char*)self->items);
                # 1417 "./comelang2.h"
                if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                # 1418 "./comelang2.h"
                come_free_object((char*)self->keys);
                # 1420 "./comelang2.h"
                self->keys=keys_155;
                # 1421 "./comelang2.h"
                self->items=items_156;
                # 1422 "./comelang2.h"
                self->item_existance=item_existance_157;
                # 1424 "./comelang2.h"
                self->size=size_154;
                # 1425 "./comelang2.h"
                self->len=len_158;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional205;
char* result_159;
char* __result70__;
_Bool _if_conditional206;
char* __result71__;
char* result_160;
char* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_159, 0, sizeof(char*));
memset(&result_160, 0, sizeof(char*));
                    # 1343 "./comelang2.h"
                    # 1338 "./comelang2.h"
                    if(_if_conditional205=self==((void*)0),                    _if_conditional205) {
                        # 1339 "./comelang2.h"
                        # 1340 "./comelang2.h"
                        memset(&result_159,0,sizeof(char*));
                        # 1341 "./comelang2.h"
                        __result70__ = __result_obj__ = result_159;
                        return __result70__;
                    }
                    # 1343 "./comelang2.h"
                    self->key_list->it=self->key_list->head;
                    # 1349 "./comelang2.h"
                    # 1345 "./comelang2.h"
                    if(_if_conditional206=self->key_list->it,                    _if_conditional206) {
                        # 1346 "./comelang2.h"
                        __result71__ = __result_obj__ = self->key_list->it->item;
                        return __result71__;
                    }
                    # 1349 "./comelang2.h"
                    # 1350 "./comelang2.h"
                    memset(&result_160,0,sizeof(char*));
                    # 1351 "./comelang2.h"
                    __result72__ = __result_obj__ = result_160;
                    return __result72__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    # 1372 "./comelang2.h"
                    __result73__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result73__;
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional207;
char* result_162;
char* __result74__;
_Bool _if_conditional208;
char* __result75__;
char* result_163;
char* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_162, 0, sizeof(char*));
memset(&result_163, 0, sizeof(char*));
                    # 1360 "./comelang2.h"
                    # 1355 "./comelang2.h"
                    if(_if_conditional207=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional207) {
                        # 1356 "./comelang2.h"
                        # 1357 "./comelang2.h"
                        memset(&result_162,0,sizeof(char*));
                        # 1358 "./comelang2.h"
                        __result74__ = __result_obj__ = result_162;
                        return __result74__;
                    }
                    # 1360 "./comelang2.h"
                    self->key_list->it=self->key_list->it->next;
                    # 1366 "./comelang2.h"
                    # 1362 "./comelang2.h"
                    if(_if_conditional208=self->key_list->it,                    _if_conditional208) {
                        # 1363 "./comelang2.h"
                        __result75__ = __result_obj__ = self->key_list->it->item;
                        return __result75__;
                    }
                    # 1366 "./comelang2.h"
                    # 1367 "./comelang2.h"
                    memset(&result_163,0,sizeof(char*));
                    # 1368 "./comelang2.h"
                    __result76__ = __result_obj__ = result_163;
                    return __result76__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_165;
unsigned int it_166;
_Bool _while_condtional10;
_Bool _if_conditional209;
void* right_value196;
_Bool _if_conditional211;
struct sFun* __result79__;
_Bool _if_conditional212;
_Bool _if_conditional213;
struct sFun* __result80__;
struct sFun* __result81__;
struct sFun* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_165, 0, sizeof(unsigned int));
memset(&it_166, 0, sizeof(unsigned int));
memset(&right_value196, 0, sizeof(void*));
                        # 1265 "./comelang2.h"
                        hash_165=string_get_hash_key(((char*)key))%self->size;
                        # 1266 "./comelang2.h"
                        it_166=hash_165;
                        # 1290 "./comelang2.h"
                        while(_while_condtional10=(_Bool)1,                        _while_condtional10) {
                            # 1288 "./comelang2.h"
                            # 1269 "./comelang2.h"
                            if(_if_conditional209=self->item_existance[it_166],                            _if_conditional209) {
                                # 1276 "./comelang2.h"
                                # 1271 "./comelang2.h"
                                if(_if_conditional211=optional$2boolbool_value(((struct optional$2boolbool*)(right_value196=string_equals(self->keys[it_166],key)))),                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value196),
                                (right_value196 && right_value196 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value196, 
                                __freed_obj__ = 0, 
                                _if_conditional211) {
                                    # 1273 "./comelang2.h"
                                    __result79__ = __result_obj__ = self->items[it_166];
                                    return __result79__;
                                }
                                # 1276 "./comelang2.h"
                                it_166++;
                                # 1284 "./comelang2.h"
                                # 1278 "./comelang2.h"
                                if(_if_conditional212=it_166>=self->size,                                _if_conditional212) {
                                    # 1279 "./comelang2.h"
                                    it_166=0;
                                }
                                else {
                                    # 1284 "./comelang2.h"
                                    # 1281 "./comelang2.h"
                                    if(_if_conditional213=it_166==hash_165,                                    _if_conditional213) {
                                        # 1282 "./comelang2.h"
                                        __result80__ = __result_obj__ = default_value;
                                        return __result80__;
                                    }
                                }
                            }
                            else {
                                # 1286 "./comelang2.h"
                                __result81__ = __result_obj__ = default_value;
                                return __result81__;
                            }
                        }
                        # 1290 "./comelang2.h"
                        __result82__ = __result_obj__ = default_value;
                        return __result82__;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional210;
_Bool default_value_167;
_Bool __result77__;
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_167, 0, sizeof(_Bool));
                                    # 69 "./comelang2.h"
                                    # 61 "./comelang2.h"
                                    if(_if_conditional210=self==((void*)0),                                    _if_conditional210) {
                                        # 62 "./comelang2.h"
                                        # 63 "./comelang2.h"
                                        memset(&default_value_167,0,sizeof(_Bool));
                                        # 64 "./comelang2.h"
                                        __result77__ = default_value_167;
                                        return __result77__;
                                    }
                                    else {
                                        # 67 "./comelang2.h"
                                        __result78__ = self->v1;
                                        return __result78__;
                                    }
}

static void optional$2boolboolp_finalize(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int it2_174;
struct list_item$1charp* it_175;
_Bool _while_condtional13;
void* right_value198;
_Bool _if_conditional220;
struct list$1charp* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_174, 0, sizeof(int));
memset(&it_175, 0, sizeof(struct list_item$1charp*));
memset(&right_value198, 0, sizeof(void*));
                            # 498 "./comelang2.h"
                            it2_174=0;
                            # 499 "./comelang2.h"
                            it_175=self->head;
                            # 510 "./comelang2.h"
                            while(_while_condtional13=it_175!=((void*)0),                            _while_condtional13) {
                                # 505 "./comelang2.h"
                                # 501 "./comelang2.h"
                                if(_if_conditional220=optional$2boolbool_value(((struct optional$2boolbool*)(right_value198=string_equals(it_175->item,item)))),                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value198),
                                (right_value198 && right_value198 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value198, 
                                __freed_obj__ = 0, 
                                _if_conditional220) {
                                    # 502 "./comelang2.h"
                                    list$1charp_delete(self,it2_174,it2_174+1);
                                    # 503 "./comelang2.h"
                                    break;
                                }
                                # 505 "./comelang2.h"
                                it2_174++;
                                # 507 "./comelang2.h"
                                it_175=it_175->next;
                            }
                            # 510 "./comelang2.h"
                            __result86__ = __result_obj__ = self;
                            return __result86__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional221;
_Bool _if_conditional222;
_Bool _if_conditional223;
int tmp_176;
_Bool _if_conditional224;
_Bool _if_conditional225;
_Bool _if_conditional226;
struct list$1charp* __result83__;
_Bool _if_conditional227;
_Bool _if_conditional228;
struct list_item$1charp* it_179;
int i_180;
_Bool _while_condtional15;
_Bool _if_conditional229;
struct list_item$1charp* prev_it_181;
_Bool _if_conditional230;
_Bool _if_conditional231;
struct list_item$1charp* it_182;
int i_183;
_Bool _while_condtional16;
_Bool _if_conditional232;
_Bool _if_conditional233;
struct list_item$1charp* prev_it_184;
struct list_item$1charp* it_185;
struct list_item$1charp* head_prev_it_186;
struct list_item$1charp* tail_it_187;
int i_188;
_Bool _while_condtional17;
_Bool _if_conditional234;
_Bool _if_conditional235;
_Bool _if_conditional236;
struct list_item$1charp* prev_it_189;
_Bool _if_conditional237;
_Bool _if_conditional238;
struct list$1charp* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_176, 0, sizeof(int));
memset(&it_179, 0, sizeof(struct list_item$1charp*));
memset(&i_180, 0, sizeof(int));
memset(&prev_it_181, 0, sizeof(struct list_item$1charp*));
memset(&it_182, 0, sizeof(struct list_item$1charp*));
memset(&i_183, 0, sizeof(int));
memset(&prev_it_184, 0, sizeof(struct list_item$1charp*));
memset(&it_185, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_186, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_187, 0, sizeof(struct list_item$1charp*));
memset(&i_188, 0, sizeof(int));
memset(&prev_it_189, 0, sizeof(struct list_item$1charp*));
                                        # 517 "./comelang2.h"
                                        # 514 "./comelang2.h"
                                        if(_if_conditional221=head<0,                                        _if_conditional221) {
                                            # 515 "./comelang2.h"
                                            head+=self->len;
                                        }
                                        # 521 "./comelang2.h"
                                        # 517 "./comelang2.h"
                                        if(_if_conditional222=tail<0,                                        _if_conditional222) {
                                            # 518 "./comelang2.h"
                                            tail+=self->len+1;
                                        }
                                        # 527 "./comelang2.h"
                                        # 521 "./comelang2.h"
                                        if(_if_conditional223=head>tail,                                        _if_conditional223) {
                                            # 522 "./comelang2.h"
                                            tmp_176=tail;
                                            # 523 "./comelang2.h"
                                            tail=head;
                                            # 524 "./comelang2.h"
                                            head=tmp_176;
                                        }
                                        # 531 "./comelang2.h"
                                        # 527 "./comelang2.h"
                                        if(_if_conditional224=head<0,                                        _if_conditional224) {
                                            # 528 "./comelang2.h"
                                            head=0;
                                        }
                                        # 535 "./comelang2.h"
                                        # 531 "./comelang2.h"
                                        if(_if_conditional225=tail>self->len,                                        _if_conditional225) {
                                            # 532 "./comelang2.h"
                                            tail=self->len;
                                        }
                                        # 539 "./comelang2.h"
                                        # 535 "./comelang2.h"
                                        if(_if_conditional226=head==tail,                                        _if_conditional226) {
                                            # 536 "./comelang2.h"
                                            __result83__ = __result_obj__ = self;
                                            return __result83__;
                                        }
                                        # 634 "./comelang2.h"
                                        # 539 "./comelang2.h"
                                        if(_if_conditional227=head==0&&tail==self->len,                                        _if_conditional227) {
                                            # 541 "./comelang2.h"
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            # 634 "./comelang2.h"
                                            # 543 "./comelang2.h"
                                            if(_if_conditional228=head==0,                                            _if_conditional228) {
                                                # 544 "./comelang2.h"
                                                it_179=self->head;
                                                # 545 "./comelang2.h"
                                                i_180=0;
                                                # 567 "./comelang2.h"
                                                while(_while_condtional15=it_179!=((void*)0),                                                _while_condtional15) {
                                                    # 566 "./comelang2.h"
                                                    # 547 "./comelang2.h"
                                                    if(_if_conditional229=i_180<tail,                                                    _if_conditional229) {
                                                        # 548 "./comelang2.h"
                                                        prev_it_181=it_179;
                                                        # 550 "./comelang2.h"
                                                        it_179=it_179->next;
                                                        # 551 "./comelang2.h"
                                                        i_180++;
                                                        # 553 "./comelang2.h"
                                                        if(prev_it_181 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_181, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        # 555 "./comelang2.h"
                                                        self->len--;
                                                    }
                                                    else {
                                                        # 566 "./comelang2.h"
                                                        # 557 "./comelang2.h"
                                                        if(_if_conditional230=i_180==tail,                                                        _if_conditional230) {
                                                            # 558 "./comelang2.h"
                                                            self->head=it_179;
                                                            # 559 "./comelang2.h"
                                                            self->head->prev=((void*)0);
                                                            # 560 "./comelang2.h"
                                                            break;
                                                        }
                                                        else {
                                                            # 563 "./comelang2.h"
                                                            it_179=it_179->next;
                                                            # 564 "./comelang2.h"
                                                            i_180++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                # 634 "./comelang2.h"
                                                # 568 "./comelang2.h"
                                                if(_if_conditional231=tail==self->len,                                                _if_conditional231) {
                                                    # 569 "./comelang2.h"
                                                    it_182=self->head;
                                                    # 570 "./comelang2.h"
                                                    i_183=0;
                                                    # 592 "./comelang2.h"
                                                    while(_while_condtional16=it_182!=((void*)0),                                                    _while_condtional16) {
                                                        # 577 "./comelang2.h"
                                                        # 572 "./comelang2.h"
                                                        if(_if_conditional232=i_183==head,                                                        _if_conditional232) {
                                                            # 573 "./comelang2.h"
                                                            self->tail=it_182->prev;
                                                            # 574 "./comelang2.h"
                                                            self->tail->next=((void*)0);
                                                        }
                                                        # 591 "./comelang2.h"
                                                        # 577 "./comelang2.h"
                                                        if(_if_conditional233=i_183>=head,                                                        _if_conditional233) {
                                                            # 578 "./comelang2.h"
                                                            prev_it_184=it_182;
                                                            # 580 "./comelang2.h"
                                                            it_182=it_182->next;
                                                            # 581 "./comelang2.h"
                                                            i_183++;
                                                            # 583 "./comelang2.h"
                                                            if(prev_it_184 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_184, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            # 585 "./comelang2.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 588 "./comelang2.h"
                                                            it_182=it_182->next;
                                                            # 589 "./comelang2.h"
                                                            i_183++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    # 594 "./comelang2.h"
                                                    it_185=self->head;
                                                    # 596 "./comelang2.h"
                                                    head_prev_it_186=((void*)0);
                                                    # 597 "./comelang2.h"
                                                    tail_it_187=((void*)0);
                                                    # 600 "./comelang2.h"
                                                    i_188=0;
                                                    # 626 "./comelang2.h"
                                                    while(_while_condtional17=it_185!=((void*)0),                                                    _while_condtional17) {
                                                        # 605 "./comelang2.h"
                                                        # 602 "./comelang2.h"
                                                        if(_if_conditional234=i_188==head,                                                        _if_conditional234) {
                                                            # 603 "./comelang2.h"
                                                            head_prev_it_186=it_185->prev;
                                                        }
                                                        # 609 "./comelang2.h"
                                                        # 605 "./comelang2.h"
                                                        if(_if_conditional235=i_188==tail,                                                        _if_conditional235) {
                                                            # 606 "./comelang2.h"
                                                            tail_it_187=it_185;
                                                        }
                                                        # 624 "./comelang2.h"
                                                        # 609 "./comelang2.h"
                                                        if(_if_conditional236=i_188>=head&&i_188<tail,                                                        _if_conditional236) {
                                                            # 611 "./comelang2.h"
                                                            prev_it_189=it_185;
                                                            # 613 "./comelang2.h"
                                                            it_185=it_185->next;
                                                            # 614 "./comelang2.h"
                                                            i_188++;
                                                            # 616 "./comelang2.h"
                                                            if(prev_it_189 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_189, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            # 618 "./comelang2.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 621 "./comelang2.h"
                                                            it_185=it_185->next;
                                                            # 622 "./comelang2.h"
                                                            i_188++;
                                                        }
                                                    }
                                                    # 629 "./comelang2.h"
                                                    # 626 "./comelang2.h"
                                                    if(_if_conditional237=head_prev_it_186!=((void*)0),                                                    _if_conditional237) {
                                                        # 627 "./comelang2.h"
                                                        head_prev_it_186->next=tail_it_187;
                                                    }
                                                    # 632 "./comelang2.h"
                                                    # 629 "./comelang2.h"
                                                    if(_if_conditional238=tail_it_187!=((void*)0),                                                    _if_conditional238) {
                                                        # 630 "./comelang2.h"
                                                        tail_it_187->prev=head_prev_it_186;
                                                    }
                                                }
                                            }
                                        }
                                        # 634 "./comelang2.h"
                                        __result85__ = __result_obj__ = self;
                                        return __result85__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_177;
_Bool _while_condtional14;
struct list_item$1charp* prev_it_178;
struct list$1charp* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_177, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_178, 0, sizeof(struct list_item$1charp*));
                                                # 483 "./comelang2.h"
                                                it_177=self->head;
                                                # 490 "./comelang2.h"
                                                while(_while_condtional14=it_177!=((void*)0),                                                _while_condtional14) {
                                                    # 485 "./comelang2.h"
                                                    prev_it_178=it_177;
                                                    # 486 "./comelang2.h"
                                                    it_177=it_177->next;
                                                    # 487 "./comelang2.h"
                                                    if(prev_it_178 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_178, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                }
                                                # 490 "./comelang2.h"
                                                self->head=((void*)0);
                                                # 491 "./comelang2.h"
                                                self->tail=((void*)0);
                                                # 493 "./comelang2.h"
                                                self->len=0;
                                                # 495 "./comelang2.h"
                                                __result84__ = __result_obj__ = self;
                                                return __result84__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional244;
char* result_191;
char* __result87__;
_Bool _if_conditional245;
char* __result88__;
char* result_192;
char* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_191, 0, sizeof(char*));
memset(&result_192, 0, sizeof(char*));
            # 343 "./comelang2.h"
            # 338 "./comelang2.h"
            if(_if_conditional244=self==((void*)0),            _if_conditional244) {
                # 339 "./comelang2.h"
                # 340 "./comelang2.h"
                memset(&result_191,0,sizeof(char*));
                # 341 "./comelang2.h"
                __result87__ = __result_obj__ = result_191;
                return __result87__;
            }
            # 343 "./comelang2.h"
            self->it=self->head;
            # 349 "./comelang2.h"
            # 345 "./comelang2.h"
            if(_if_conditional245=self->it,            _if_conditional245) {
                # 346 "./comelang2.h"
                __result88__ = __result_obj__ = self->it->item;
                return __result88__;
            }
            # 349 "./comelang2.h"
            # 350 "./comelang2.h"
            memset(&result_192,0,sizeof(char*));
            # 351 "./comelang2.h"
            __result89__ = __result_obj__ = result_192;
            return __result89__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            # 373 "./comelang2.h"
            __result90__ = self==((void*)0)||self->it==((void*)0);
            return __result90__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional246;
char* result_194;
char* __result91__;
_Bool _if_conditional247;
char* __result92__;
char* result_195;
char* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_194, 0, sizeof(char*));
memset(&result_195, 0, sizeof(char*));
            # 361 "./comelang2.h"
            # 355 "./comelang2.h"
            if(_if_conditional246=self==((void*)0)||self->it==((void*)0),            _if_conditional246) {
                # 356 "./comelang2.h"
                # 357 "./comelang2.h"
                memset(&result_194,0,sizeof(char*));
                # 358 "./comelang2.h"
                __result91__ = __result_obj__ = result_194;
                return __result91__;
            }
            # 361 "./comelang2.h"
            self->it=self->it->next;
            # 367 "./comelang2.h"
            # 363 "./comelang2.h"
            if(_if_conditional247=self->it,            _if_conditional247) {
                # 364 "./comelang2.h"
                __result92__ = __result_obj__ = self->it->item;
                return __result92__;
            }
            # 367 "./comelang2.h"
            # 368 "./comelang2.h"
            memset(&result_195,0,sizeof(char*));
            # 369 "./comelang2.h"
            __result93__ = __result_obj__ = result_195;
            return __result93__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional250;
void* right_value200;
struct list_item$1charp* litem_196;
_Bool _if_conditional251;
void* right_value201;
struct list_item$1charp* litem_197;
void* right_value202;
struct list_item$1charp* litem_198;
struct list$1charp* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value200, 0, sizeof(void*));
memset(&litem_196, 0, sizeof(struct list_item$1charp*));
memset(&right_value201, 0, sizeof(void*));
memset(&litem_197, 0, sizeof(struct list_item$1charp*));
memset(&right_value202, 0, sizeof(void*));
memset(&litem_198, 0, sizeof(struct list_item$1charp*));
                # 309 "./comelang2.h"
                # 278 "./comelang2.h"
                if(_if_conditional250=self->len==0,                _if_conditional250) {
                    # 279 "./comelang2.h"
                    litem_196=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value200=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 279))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value200);
                    if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value200;
                    __freed_obj__ = 0;
                    # 281 "./comelang2.h"
                    litem_196->prev=((void*)0);
                    # 282 "./comelang2.h"
                    litem_196->next=((void*)0);
                    # 283 "./comelang2.h"
                    litem_196->item=item;
                    # 285 "./comelang2.h"
                    self->tail=litem_196;
                    # 286 "./comelang2.h"
                    self->head=litem_196;
                }
                else {
                    # 309 "./comelang2.h"
                    # 288 "./comelang2.h"
                    if(_if_conditional251=self->len==1,                    _if_conditional251) {
                        # 289 "./comelang2.h"
                        litem_197=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value201=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 289))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value201);
                        if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value201;
                        __freed_obj__ = 0;
                        # 291 "./comelang2.h"
                        litem_197->prev=self->head;
                        # 292 "./comelang2.h"
                        litem_197->next=((void*)0);
                        # 293 "./comelang2.h"
                        litem_197->item=item;
                        # 295 "./comelang2.h"
                        self->tail=litem_197;
                        # 296 "./comelang2.h"
                        self->head->next=litem_197;
                    }
                    else {
                        # 299 "./comelang2.h"
                        litem_198=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value202=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 299))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value202);
                        if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value202;
                        __freed_obj__ = 0;
                        # 301 "./comelang2.h"
                        litem_198->prev=self->tail;
                        # 302 "./comelang2.h"
                        litem_198->next=((void*)0);
                        # 303 "./comelang2.h"
                        litem_198->item=item;
                        # 305 "./comelang2.h"
                        self->tail->next=litem_198;
                        # 306 "./comelang2.h"
                        self->tail=litem_198;
                    }
                }
                # 309 "./comelang2.h"
                self->len++;
                # 311 "./comelang2.h"
                __result94__ = __result_obj__ = self;
                return __result94__;
}

_Bool output_source_file_v3(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value204;
char* output_file_name_199;
struct _IO_FILE* f_200;
void* right_value205;
struct map$2charphsFunph* o2_saved_201;
char* it_202;
_Bool _for_condtionalA20;
void* right_value206;
struct sFun* it2_206;
void* right_value210;
char* header_207;
_Bool _if_conditional256;
_Bool _if_conditional257;
_Bool _if_conditional258;
_Bool _if_conditional259;
struct map$2charphsFunph* o2_saved_212;
char* it_213;
_Bool _for_condtionalA23;
void* right_value211;
struct sFun* it2_214;
void* right_value212;
char* header_215;
_Bool _if_conditional264;
void* right_value213;
char* output_216;
_Bool _if_conditional265;
void* right_value214;
char* output_217;
_Bool _if_conditional266;
_Bool _if_conditional267;
struct map$2charphsFunph* o2_saved_218;
char* it_219;
_Bool _for_condtionalA24;
struct sFun* it2_220;
_Bool _if_conditional268;
void* right_value215;
char* output_221;
_Bool _if_conditional269;
_Bool _if_conditional270;
_Bool _if_conditional271;
_Bool __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value204, 0, sizeof(void*));
memset(&output_file_name_199, 0, sizeof(char*));
memset(&f_200, 0, sizeof(struct _IO_FILE*));
memset(&right_value205, 0, sizeof(void*));
memset(&o2_saved_201, 0, sizeof(struct map$2charphsFunph*));
memset(&it_202, 0, sizeof(char*));
memset(&right_value206, 0, sizeof(void*));
memset(&it2_206, 0, sizeof(struct sFun*));
memset(&right_value210, 0, sizeof(void*));
memset(&header_207, 0, sizeof(char*));
memset(&o2_saved_212, 0, sizeof(struct map$2charphsFunph*));
memset(&it_213, 0, sizeof(char*));
memset(&right_value211, 0, sizeof(void*));
memset(&it2_214, 0, sizeof(struct sFun*));
memset(&right_value212, 0, sizeof(void*));
memset(&header_215, 0, sizeof(char*));
memset(&right_value213, 0, sizeof(void*));
memset(&output_216, 0, sizeof(char*));
memset(&right_value214, 0, sizeof(void*));
memset(&output_217, 0, sizeof(char*));
memset(&o2_saved_218, 0, sizeof(struct map$2charphsFunph*));
memset(&it_219, 0, sizeof(char*));
memset(&it2_220, 0, sizeof(struct sFun*));
memset(&right_value215, 0, sizeof(void*));
memset(&output_221, 0, sizeof(char*));
    # 679 "03transpile2.c"
    output_file_name_199=(char*)come_increment_ref_count(((char*)(right_value204=xsprintf("%s.c",info->sname))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value204);
    if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { right_value204 = come_decrement_ref_count(right_value204, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value204;
    __freed_obj__ = 0;
    # 681 "03transpile2.c"
    f_200=fopen(output_file_name_199,"w");
    # 683 "03transpile2.c"
    fprintf(f_200,"// source head\n");
    # 684 "03transpile2.c"
    fprintf(f_200,"%s\n",((char*)(right_value205=buffer_to_string(info->module->mSourceHead))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value205);
    if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { right_value205 = come_decrement_ref_count(right_value205, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value205;
    __freed_obj__ = 0;
    # 686 "03transpile2.c"
    fprintf(f_200,"// header function\n");
    # 704 "03transpile2.c"
    for(
    o2_saved_201=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_202=map$2charphsFunph_begin((o2_saved_201)) ,    0;    _for_condtionalA20=    !map$2charphsFunph_end((o2_saved_201)) ,    _for_condtionalA20;    it_202=map$2charphsFunph_next((o2_saved_201)) ,    0    ){
        # 688 "03transpile2.c"
        it2_206=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value206=__builtin_string(it_202))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value206);
        if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value206;
        __freed_obj__ = 0;
        # 690 "03transpile2.c"
        header_207=(char*)come_increment_ref_count(((char*)(right_value210=header_function(it2_206,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value210);
        if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { right_value210 = come_decrement_ref_count(right_value210, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value210;
        __freed_obj__ = 0;
        # 702 "03transpile2.c"
        # 692 "03transpile2.c"
        if(_if_conditional256=it2_206->mStatic&&it2_206->mResultType->mInline,        _if_conditional256) {
        }
        else {
            # 702 "03transpile2.c"
            # 694 "03transpile2.c"
            if(_if_conditional257=it2_206->mStatic,            _if_conditional257) {
                # 695 "03transpile2.c"
                fprintf(f_200,"static %s",header_207);
            }
            else {
                # 702 "03transpile2.c"
                # 697 "03transpile2.c"
                if(_if_conditional258=it2_206->mResultType->mInline,                _if_conditional258) {
                }
                else {
                    # 702 "03transpile2.c"
                    # 699 "03transpile2.c"
                    if(_if_conditional259=string_operator_not_equals(it_202,"__builtin_va_start")&&string_operator_not_equals(it_202,"__builtin_va_end"),                    _if_conditional259) {
                        # 700 "03transpile2.c"
                        fprintf(f_200,"%s\n",header_207,it_202);
                    }
                }
            }
        }
        if(header_207 && !__freed_obj__) { header_207 = come_decrement_ref_count(header_207, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(o2_saved_201 && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,o2_saved_201, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 704 "03transpile2.c"
    fprintf(f_200,"// inline function\n");
    # 724 "03transpile2.c"
    for(
    o2_saved_212=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_213=map$2charphsFunph_begin((o2_saved_212)) ,    0;    _for_condtionalA23=    !map$2charphsFunph_end((o2_saved_212)) ,    _for_condtionalA23;    it_213=map$2charphsFunph_next((o2_saved_212)) ,    0    ){
        # 706 "03transpile2.c"
        it2_214=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value211=__builtin_string(it_213))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value211);
        if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { right_value211 = come_decrement_ref_count(right_value211, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value211;
        __freed_obj__ = 0;
        # 708 "03transpile2.c"
        header_215=(char*)come_increment_ref_count(((char*)(right_value212=header_function(it2_214,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value212);
        if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { right_value212 = come_decrement_ref_count(right_value212, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value212;
        __freed_obj__ = 0;
        # 722 "03transpile2.c"
        # 710 "03transpile2.c"
        if(_if_conditional264=it2_214->mStatic&&it2_214->mResultType->mInline,        _if_conditional264) {
            # 711 "03transpile2.c"
            output_216=(char*)come_increment_ref_count(((char*)(right_value213=output_function(it2_214,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value213);
            if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { right_value213 = come_decrement_ref_count(right_value213, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value213;
            __freed_obj__ = 0;
            # 712 "03transpile2.c"
            fprintf(f_200,"static inline %s",output_216);
            if(output_216 && !__freed_obj__) { output_216 = come_decrement_ref_count(output_216, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            # 722 "03transpile2.c"
            # 714 "03transpile2.c"
            if(_if_conditional265=it2_214->mResultType->mInline,            _if_conditional265) {
                # 715 "03transpile2.c"
                output_217=(char*)come_increment_ref_count(((char*)(right_value214=output_function(it2_214,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value214);
                if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { right_value214 = come_decrement_ref_count(right_value214, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value214;
                __freed_obj__ = 0;
                # 716 "03transpile2.c"
                fprintf(f_200,"static inline %s",output_217);
                if(output_217 && !__freed_obj__) { output_217 = come_decrement_ref_count(output_217, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                # 722 "03transpile2.c"
                # 718 "03transpile2.c"
                if(_if_conditional266=it2_214->mStatic,                _if_conditional266) {
                }
                else {
                    # 722 "03transpile2.c"
                    # 720 "03transpile2.c"
                    if(_if_conditional267=string_operator_not_equals(it_213,"__builtin_va_start")&&string_operator_not_equals(it_213,"__builtin_va_end"),                    _if_conditional267) {
                    }
                }
            }
        }
        if(header_215 && !__freed_obj__) { header_215 = come_decrement_ref_count(header_215, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(o2_saved_212 && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,o2_saved_212, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 724 "03transpile2.c"
    fprintf(f_200,"\n");
    # 726 "03transpile2.c"
    fprintf(f_200,"// body function\n");
    # 748 "03transpile2.c"
    for(
    o2_saved_218=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_219=map$2charphsFunph_begin((o2_saved_218)) ,    0;    _for_condtionalA24=    !map$2charphsFunph_end((o2_saved_218)) ,    _for_condtionalA24;    it_219=map$2charphsFunph_next((o2_saved_218)) ,    0    ){
        # 728 "03transpile2.c"
        it2_220=map$2charphsFunphp_operator_load_element(info->funcs,it_219);
        # 746 "03transpile2.c"
        # 730 "03transpile2.c"
        if(_if_conditional268=!it2_220->mExternal,        _if_conditional268) {
            # 731 "03transpile2.c"
            output_221=(char*)come_increment_ref_count(((char*)(right_value215=output_function(it2_220,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value215);
            if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { right_value215 = come_decrement_ref_count(right_value215, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value215;
            __freed_obj__ = 0;
            # 744 "03transpile2.c"
            # 733 "03transpile2.c"
            if(_if_conditional269=it2_220->mStatic&&it2_220->mResultType->mInline,            _if_conditional269) {
            }
            else {
                # 744 "03transpile2.c"
                # 735 "03transpile2.c"
                if(_if_conditional270=it2_220->mStatic,                _if_conditional270) {
                    # 736 "03transpile2.c"
                    fprintf(f_200,"static %s",output_221);
                }
                else {
                    # 744 "03transpile2.c"
                    # 738 "03transpile2.c"
                    if(_if_conditional271=it2_220->mResultType->mInline,                    _if_conditional271) {
                    }
                    else {
                        # 741 "03transpile2.c"
                        fprintf(f_200,"%s",output_221);
                    }
                }
            }
            # 744 "03transpile2.c"
            fprintf(f_200,"\n");
            if(output_221 && !__freed_obj__) { output_221 = come_decrement_ref_count(output_221, (void*)0, (void*)0, 0, 0, 0); }
        }
    }
    if(o2_saved_218 && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,o2_saved_218, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 748 "03transpile2.c"
    fclose(f_200);
    # 750 "03transpile2.c"
    __result102__ = (_Bool)1;
    if(output_file_name_199 && !__freed_obj__) { output_file_name_199 = come_decrement_ref_count(output_file_name_199, (void*)0, (void*)0, 0, 0, 0); }
    return __result102__;
    if(output_file_name_199 && !__freed_obj__) { output_file_name_199 = come_decrement_ref_count(output_file_name_199, (void*)0, (void*)0, 0, 0, 0); }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sFun* default_value_203;
unsigned int hash_204;
unsigned int it_205;
_Bool _while_condtional18;
_Bool _if_conditional252;
void* right_value207;
_Bool _if_conditional253;
struct sFun* __result97__;
_Bool _if_conditional254;
_Bool _if_conditional255;
struct sFun* __result98__;
struct sFun* __result99__;
void* right_value208;
void* right_value209;
struct sFun* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_203, 0, sizeof(struct sFun*));
memset(&hash_204, 0, sizeof(unsigned int));
memset(&it_205, 0, sizeof(unsigned int));
memset(&right_value207, 0, sizeof(void*));
memset(&right_value208, 0, sizeof(void*));
memset(&right_value209, 0, sizeof(void*));
            # 1591 "./comelang2.h"
            # 1592 "./comelang2.h"
            memset(&default_value_203,0,sizeof(struct sFun*));
            # 1594 "./comelang2.h"
            hash_204=string_get_hash_key(((char*)key))%self->size;
            # 1595 "./comelang2.h"
            it_205=hash_204;
            # 1619 "./comelang2.h"
            while(_while_condtional18=(_Bool)1,            _while_condtional18) {
                # 1617 "./comelang2.h"
                # 1598 "./comelang2.h"
                if(_if_conditional252=self->item_existance[it_205],                _if_conditional252) {
                    # 1605 "./comelang2.h"
                    # 1600 "./comelang2.h"
                    if(_if_conditional253=optional$2boolbool_value(((struct optional$2boolbool*)(right_value207=string_equals(self->keys[it_205],key)))),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value207),
                    (right_value207 && right_value207 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value207, 
                    __freed_obj__ = 0, 
                    _if_conditional253) {
                        # 1602 "./comelang2.h"
                        __result97__ = __result_obj__ = self->items[it_205];
                        return __result97__;
                    }
                    # 1605 "./comelang2.h"
                    it_205++;
                    # 1613 "./comelang2.h"
                    # 1607 "./comelang2.h"
                    if(_if_conditional254=it_205>=self->size,                    _if_conditional254) {
                        # 1608 "./comelang2.h"
                        it_205=0;
                    }
                    else {
                        # 1613 "./comelang2.h"
                        # 1610 "./comelang2.h"
                        if(_if_conditional255=it_205==hash_204,                        _if_conditional255) {
                            # 1611 "./comelang2.h"
                            __result98__ = __result_obj__ = default_value_203;
                            return __result98__;
                        }
                    }
                }
                else {
                    # 1615 "./comelang2.h"
                    __result99__ = __result_obj__ = default_value_203;
                    return __result99__;
                }
            }
            # 1619 "./comelang2.h"
            __result101__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value209=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value208=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1619))),default_value_203,(_Bool)0)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value208);
            if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { right_value208 = come_decrement_ref_count(right_value208, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value208;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value209);
            if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value209;
            __freed_obj__ = 0;
            return __result101__;
}

static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sFunpbool* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                # 40 "./comelang2.h"
                self->v1=v1;
                # 41 "./comelang2.h"
                self->v2=v2;
                # 43 "./comelang2.h"
                __result100__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result100__;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sFunpboolp_finalize(struct optional$2sFunpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_208;
_Bool _for_condtionalA21;
_Bool _if_conditional260;
_Bool _if_conditional261;
int i_209;
_Bool _for_condtionalA22;
_Bool _if_conditional262;
_Bool _if_conditional263;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_208, 0, sizeof(int));
memset(&i_209, 0, sizeof(int));
        # 1179 "./comelang2.h"
        for(
        i_208=0 ,        0;        _for_condtionalA21=        i_208<self->size ,        _for_condtionalA21;        i_208++ ,        0        ){
            # 1178 "./comelang2.h"
            # 1173 "./comelang2.h"
            if(_if_conditional260=self->item_existance[i_208],            _if_conditional260) {
                # 1177 "./comelang2.h"
                # 1174 "./comelang2.h"
                if(_if_conditional261=1,                _if_conditional261) {
                    # 1175 "./comelang2.h"
                    if(self->items[i_208] && !__freed_obj__) { come_call_finalizer(sFun_finalize,self->items[i_208], (void*)0, (void*)0, 0, 0, 0, 0); }
                }
            }
        }
        # 1179 "./comelang2.h"
        come_free_object((char*)self->items);
        # 1188 "./comelang2.h"
        for(
        i_209=0 ,        0;        _for_condtionalA22=        i_209<self->size ,        _for_condtionalA22;        i_209++ ,        0        ){
            # 1187 "./comelang2.h"
            # 1182 "./comelang2.h"
            if(_if_conditional262=self->item_existance[i_209],            _if_conditional262) {
                # 1186 "./comelang2.h"
                # 1183 "./comelang2.h"
                if(_if_conditional263=1,                _if_conditional263) {
                    # 1184 "./comelang2.h"
                    if(self->keys[i_209] && !__freed_obj__) { self->keys[i_209] = come_decrement_ref_count(self->keys[i_209], (void*)0, (void*)0, 0, 0, 0); }
                }
            }
        }
        # 1188 "./comelang2.h"
        come_free_object((char*)self->keys);
        # 1190 "./comelang2.h"
        if(self->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
        # 1192 "./comelang2.h"
        if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_210;
_Bool _while_condtional19;
struct list_item$1charp* prev_it_211;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_210, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_211, 0, sizeof(struct list_item$1charp*));
            # 176 "./comelang2.h"
            it_210=self->head;
            # 182 "./comelang2.h"
            while(_while_condtional19=it_210!=((void*)0),            _while_condtional19) {
                # 178 "./comelang2.h"
                prev_it_211=it_210;
                # 179 "./comelang2.h"
                it_210=it_210->next;
                # 180 "./comelang2.h"
                if(prev_it_211 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_211, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

_Bool output_header_file(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* output_file_name_222;
struct _IO_FILE* f_223;
_Bool _if_conditional272;
void* right_value216;
struct map$2charphsFunph* o2_saved_224;
char* it_225;
_Bool _for_condtionalA25;
void* right_value217;
struct sFun* it2_226;
void* right_value218;
char* header_227;
_Bool _if_conditional273;
_Bool _if_conditional274;
_Bool _if_conditional275;
_Bool _if_conditional276;
_Bool _if_conditional277;
struct map$2charphsFunph* o2_saved_228;
char* it_229;
_Bool _for_condtionalA26;
void* right_value219;
struct sFun* it2_230;
void* right_value220;
char* header_231;
_Bool _if_conditional278;
_Bool _if_conditional279;
void* right_value221;
char* output_232;
_Bool _if_conditional280;
_Bool _if_conditional281;
void* right_value222;
char* output_233;
_Bool _if_conditional282;
_Bool _if_conditional283;
_Bool _if_conditional284;
_Bool __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&output_file_name_222, 0, sizeof(char*));
memset(&f_223, 0, sizeof(struct _IO_FILE*));
memset(&right_value216, 0, sizeof(void*));
memset(&o2_saved_224, 0, sizeof(struct map$2charphsFunph*));
memset(&it_225, 0, sizeof(char*));
memset(&right_value217, 0, sizeof(void*));
memset(&it2_226, 0, sizeof(struct sFun*));
memset(&right_value218, 0, sizeof(void*));
memset(&header_227, 0, sizeof(char*));
memset(&o2_saved_228, 0, sizeof(struct map$2charphsFunph*));
memset(&it_229, 0, sizeof(char*));
memset(&right_value219, 0, sizeof(void*));
memset(&it2_230, 0, sizeof(struct sFun*));
memset(&right_value220, 0, sizeof(void*));
memset(&header_231, 0, sizeof(char*));
memset(&right_value221, 0, sizeof(void*));
memset(&output_232, 0, sizeof(char*));
memset(&right_value222, 0, sizeof(void*));
memset(&output_233, 0, sizeof(char*));
    # 756 "03transpile2.c"
    output_file_name_222=(char*)come_increment_ref_count(info->output_file_name);
    # 758 "03transpile2.c"
    f_223=fopen(output_file_name_222,"a");
    # 766 "03transpile2.c"
    # 760 "03transpile2.c"
    if(_if_conditional272=info->num_source_files==0&&string_operator_equals(info->output_file_name,"common.h"),    _if_conditional272) {
        # 761 "03transpile2.c"
        fprintf(f_223,"#ifndef __COMMON_H__\n");
        # 762 "03transpile2.c"
        fprintf(f_223,"#define __COMMON_H__\n");
        # 763 "03transpile2.c"
        fprintf(f_223,"#include <comelang2.h>\n");
    }
    # 766 "03transpile2.c"
    fprintf(f_223,"// source head\n");
    # 767 "03transpile2.c"
    fprintf(f_223,"%s\n",((char*)(right_value216=buffer_to_string(info->module->mSourceHead))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value216);
    if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { right_value216 = come_decrement_ref_count(right_value216, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value216;
    __freed_obj__ = 0;
    # 769 "03transpile2.c"
    fprintf(f_223,"// header function\n");
    # 788 "03transpile2.c"
    for(
    o2_saved_224=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_225=map$2charphsFunph_begin((o2_saved_224)) ,    0;    _for_condtionalA25=    !map$2charphsFunph_end((o2_saved_224)) ,    _for_condtionalA25;    it_225=map$2charphsFunph_next((o2_saved_224)) ,    0    ){
        # 771 "03transpile2.c"
        it2_226=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value217=__builtin_string(it_225))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value217);
        if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { right_value217 = come_decrement_ref_count(right_value217, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value217;
        __freed_obj__ = 0;
        # 773 "03transpile2.c"
        header_227=(char*)come_increment_ref_count(((char*)(right_value218=header_function(it2_226,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value218);
        if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { right_value218 = come_decrement_ref_count(right_value218, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value218;
        __freed_obj__ = 0;
        # 786 "03transpile2.c"
        # 775 "03transpile2.c"
        if(_if_conditional273=it2_226->mStatic&&it2_226->mResultType->mInline,        _if_conditional273) {
        }
        else {
            # 786 "03transpile2.c"
            # 777 "03transpile2.c"
            if(_if_conditional274=it2_226->mStatic,            _if_conditional274) {
            }
            else {
                # 786 "03transpile2.c"
                # 779 "03transpile2.c"
                if(_if_conditional275=it2_226->mResultType->mInline,                _if_conditional275) {
                }
                else {
                    # 786 "03transpile2.c"
                    # 781 "03transpile2.c"
                    if(_if_conditional276=string_operator_not_equals(it_225,"__builtin_va_start")&&string_operator_not_equals(it_225,"__builtin_va_end"),                    _if_conditional276) {
                        # 785 "03transpile2.c"
                        # 782 "03transpile2.c"
                        if(_if_conditional277=string_operator_equals(it2_226->mDeclareSName,info->base_sname),                        _if_conditional277) {
                            # 783 "03transpile2.c"
                            fprintf(f_223,"%s\n",header_227,it_225);
                        }
                    }
                }
            }
        }
        if(header_227 && !__freed_obj__) { header_227 = come_decrement_ref_count(header_227, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(o2_saved_224 && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,o2_saved_224, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 788 "03transpile2.c"
    fprintf(f_223,"// inline function\n");
    # 812 "03transpile2.c"
    for(
    o2_saved_228=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_229=map$2charphsFunph_begin((o2_saved_228)) ,    0;    _for_condtionalA26=    !map$2charphsFunph_end((o2_saved_228)) ,    _for_condtionalA26;    it_229=map$2charphsFunph_next((o2_saved_228)) ,    0    ){
        # 790 "03transpile2.c"
        it2_230=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value219=__builtin_string(it_229))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value219);
        if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { right_value219 = come_decrement_ref_count(right_value219, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value219;
        __freed_obj__ = 0;
        # 792 "03transpile2.c"
        header_231=(char*)come_increment_ref_count(((char*)(right_value220=header_function(it2_230,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value220);
        if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { right_value220 = come_decrement_ref_count(right_value220, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value220;
        __freed_obj__ = 0;
        # 810 "03transpile2.c"
        # 794 "03transpile2.c"
        if(_if_conditional278=it2_230->mStatic&&it2_230->mResultType->mInline,        _if_conditional278) {
            # 799 "03transpile2.c"
            # 795 "03transpile2.c"
            if(_if_conditional279=string_operator_equals(it2_230->mDeclareSName,info->base_sname),            _if_conditional279) {
                # 796 "03transpile2.c"
                output_232=(char*)come_increment_ref_count(((char*)(right_value221=output_function(it2_230,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value221);
                if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { right_value221 = come_decrement_ref_count(right_value221, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value221;
                __freed_obj__ = 0;
                # 797 "03transpile2.c"
                fprintf(f_223,"static inline %s",output_232);
                if(output_232 && !__freed_obj__) { output_232 = come_decrement_ref_count(output_232, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        else {
            # 810 "03transpile2.c"
            # 800 "03transpile2.c"
            if(_if_conditional280=it2_230->mResultType->mInline,            _if_conditional280) {
                # 805 "03transpile2.c"
                # 801 "03transpile2.c"
                if(_if_conditional281=string_operator_equals(it2_230->mDeclareSName,info->base_sname),                _if_conditional281) {
                    # 802 "03transpile2.c"
                    output_233=(char*)come_increment_ref_count(((char*)(right_value222=output_function(it2_230,info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value222);
                    if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { right_value222 = come_decrement_ref_count(right_value222, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value222;
                    __freed_obj__ = 0;
                    # 803 "03transpile2.c"
                    fprintf(f_223,"static inline %s",output_233);
                    if(output_233 && !__freed_obj__) { output_233 = come_decrement_ref_count(output_233, (void*)0, (void*)0, 0, 0, 0); }
                }
            }
            else {
                # 810 "03transpile2.c"
                # 806 "03transpile2.c"
                if(_if_conditional282=it2_230->mStatic,                _if_conditional282) {
                }
                else {
                    # 810 "03transpile2.c"
                    # 808 "03transpile2.c"
                    if(_if_conditional283=string_operator_not_equals(it_229,"__builtin_va_start")&&string_operator_not_equals(it_229,"__builtin_va_end"),                    _if_conditional283) {
                    }
                }
            }
        }
        if(header_231 && !__freed_obj__) { header_231 = come_decrement_ref_count(header_231, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(o2_saved_228 && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,o2_saved_228, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 812 "03transpile2.c"
    fprintf(f_223,"\n");
    # 818 "03transpile2.c"
    # 814 "03transpile2.c"
    if(_if_conditional284=info->num_source_files==info->max_source_files-1&&string_operator_equals(info->output_file_name,"common.h"),    _if_conditional284) {
        # 815 "03transpile2.c"
        fprintf(f_223,"#endif\n");
    }
    # 818 "03transpile2.c"
    fclose(f_223);
    # 820 "03transpile2.c"
    __result103__ = (_Bool)1;
    if(output_file_name_222 && !__freed_obj__) { output_file_name_222 = come_decrement_ref_count(output_file_name_222, (void*)0, (void*)0, 0, 0, 0); }
    return __result103__;
    if(output_file_name_222 && !__freed_obj__) { output_file_name_222 = come_decrement_ref_count(output_file_name_222, (void*)0, (void*)0, 0, 0, 0); }
}

void add_come_code_at_function_head(struct sInfo* info, char* code, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional285;
char* msg2_234;
va_list args_235;
int len_236;
_Bool _if_conditional286;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_234, 0, sizeof(char*));
memset(&args_235, 0, sizeof(va_list));
memset(&len_236, 0, sizeof(int));
    # 828 "03transpile2.c"
    # 825 "03transpile2.c"
    if(_if_conditional285=info->no_output_come_code,    _if_conditional285) {
        # 826 "03transpile2.c"
        return;
    }
    # 828 "03transpile2.c"
    # 830 "03transpile2.c"
    # 831 "03transpile2.c"
    __builtin_va_start(args_235,code);
    # 832 "03transpile2.c"
    len_236=vasprintf(&msg2_234,code,args_235);
    # 833 "03transpile2.c"
    __builtin_va_end(args_235);
    # 839 "03transpile2.c"
    # 835 "03transpile2.c"
    if(_if_conditional286=info->come_fun,    _if_conditional286) {
        # 836 "03transpile2.c"
        buffer_append_str(info->come_fun->mSourceHead,msg2_234);
    }
    # 839 "03transpile2.c"
    free(msg2_234);
    if((&args_235) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_235), (void*)0, (void*)0, 1, 0, 0, 0); }
}

void add_come_code_at_function_head2(struct sInfo* info, char* code, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional287;
char* msg2_237;
va_list args_238;
int len_239;
_Bool _if_conditional288;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_237, 0, sizeof(char*));
memset(&args_238, 0, sizeof(va_list));
memset(&len_239, 0, sizeof(int));
    # 847 "03transpile2.c"
    # 844 "03transpile2.c"
    if(_if_conditional287=info->no_output_come_code,    _if_conditional287) {
        # 845 "03transpile2.c"
        return;
    }
    # 847 "03transpile2.c"
    # 849 "03transpile2.c"
    # 850 "03transpile2.c"
    __builtin_va_start(args_238,code);
    # 851 "03transpile2.c"
    len_239=vasprintf(&msg2_237,code,args_238);
    # 852 "03transpile2.c"
    __builtin_va_end(args_238);
    # 858 "03transpile2.c"
    # 854 "03transpile2.c"
    if(_if_conditional288=info->come_fun,    _if_conditional288) {
        # 855 "03transpile2.c"
        buffer_append_str(info->come_fun->mSourceHead2,msg2_237);
    }
    # 858 "03transpile2.c"
    free(msg2_237);
    if((&args_238) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_238), (void*)0, (void*)0, 1, 0, 0, 0); }
}

void add_last_code_to_source(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional289;
_Bool _if_conditional290;
char* __dec_obj37;
_Bool _if_conditional291;
char* __dec_obj38;
_Bool _if_conditional292;
char* __dec_obj39;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 866 "03transpile2.c"
    # 863 "03transpile2.c"
    if(_if_conditional289=info->no_output_come_code,    _if_conditional289) {
        # 864 "03transpile2.c"
        return;
    }
    # 870 "03transpile2.c"
    # 866 "03transpile2.c"
    if(_if_conditional290=info->module->mLastCode,    _if_conditional290) {
        # 867 "03transpile2.c"
        add_come_code(info,"%s",info->module->mLastCode);
        # 868 "03transpile2.c"
        __dec_obj37=info->module->mLastCode;
        info->module->mLastCode=((void*)0);
        if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0,0); }
    }
    # 874 "03transpile2.c"
    # 870 "03transpile2.c"
    if(_if_conditional291=info->module->mLastCode2,    _if_conditional291) {
        # 871 "03transpile2.c"
        add_come_code(info,"%s",info->module->mLastCode2);
        # 872 "03transpile2.c"
        __dec_obj38=info->module->mLastCode2;
        info->module->mLastCode2=((void*)0);
        if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
    }
    # 878 "03transpile2.c"
    # 874 "03transpile2.c"
    if(_if_conditional292=info->module->mLastCode3,    _if_conditional292) {
        # 875 "03transpile2.c"
        add_come_code(info,"%s",info->module->mLastCode3);
        # 876 "03transpile2.c"
        __dec_obj39=info->module->mLastCode3;
        info->module->mLastCode3=((void*)0);
        if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0,0); }
    }
}

void add_last_code_to_source_with_comma(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional293;
_Bool _if_conditional294;
void* right_value223;
char* __dec_obj40;
_Bool _if_conditional295;
void* right_value224;
char* __dec_obj41;
_Bool _if_conditional296;
void* right_value225;
char* __dec_obj42;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value223, 0, sizeof(void*));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
    # 885 "03transpile2.c"
    # 882 "03transpile2.c"
    if(_if_conditional293=info->no_output_come_code,    _if_conditional293) {
        # 883 "03transpile2.c"
        return;
    }
    # 889 "03transpile2.c"
    # 885 "03transpile2.c"
    if(_if_conditional294=info->module->mLastCode,    _if_conditional294) {
        # 886 "03transpile2.c"
        add_come_code(info,"%s ,",((char*)(right_value223=string_substring(info->module->mLastCode,0,-3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value223);
        if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { right_value223 = come_decrement_ref_count(right_value223, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value223;
        __freed_obj__ = 0;
        # 887 "03transpile2.c"
        __dec_obj40=info->module->mLastCode;
        info->module->mLastCode=((void*)0);
        if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0,0); }
    }
    # 893 "03transpile2.c"
    # 889 "03transpile2.c"
    if(_if_conditional295=info->module->mLastCode2,    _if_conditional295) {
        # 890 "03transpile2.c"
        add_come_code(info,"%s ,",((char*)(right_value224=string_substring(info->module->mLastCode2,0,-3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value224);
        if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { right_value224 = come_decrement_ref_count(right_value224, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value224;
        __freed_obj__ = 0;
        # 891 "03transpile2.c"
        __dec_obj41=info->module->mLastCode2;
        info->module->mLastCode2=((void*)0);
        if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0,0); }
    }
    # 897 "03transpile2.c"
    # 893 "03transpile2.c"
    if(_if_conditional296=info->module->mLastCode3,    _if_conditional296) {
        # 894 "03transpile2.c"
        add_come_code(info,"%s ,",((char*)(right_value225=string_substring(info->module->mLastCode3,0,-3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value225);
        if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { right_value225 = come_decrement_ref_count(right_value225, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value225;
        __freed_obj__ = 0;
        # 895 "03transpile2.c"
        __dec_obj42=info->module->mLastCode3;
        info->module->mLastCode3=((void*)0);
        if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
    }
}

void add_come_last_code(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional297;
char* msg2_240;
va_list args_241;
int len_242;
void* right_value226;
char* __dec_obj43;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_240, 0, sizeof(char*));
memset(&args_241, 0, sizeof(va_list));
memset(&len_242, 0, sizeof(int));
memset(&right_value226, 0, sizeof(void*));
    # 904 "03transpile2.c"
    # 901 "03transpile2.c"
    if(_if_conditional297=info->no_output_come_code,    _if_conditional297) {
        # 902 "03transpile2.c"
        return;
    }
    # 904 "03transpile2.c"
    # 906 "03transpile2.c"
    # 907 "03transpile2.c"
    __builtin_va_start(args_241,msg);
    # 908 "03transpile2.c"
    len_242=vasprintf(&msg2_240,msg,args_241);
    # 909 "03transpile2.c"
    __builtin_va_end(args_241);
    # 911 "03transpile2.c"
    __dec_obj43=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(((char*)(right_value226=xsprintf("%s",msg2_240))));
    if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value226);
    if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { right_value226 = come_decrement_ref_count(right_value226, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value226;
    __freed_obj__ = 0;
    # 913 "03transpile2.c"
    free(msg2_240);
    if((&args_241) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_241), (void*)0, (void*)0, 1, 0, 0, 0); }
}

void add_come_last_code2(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional298;
char* msg2_243;
va_list args_244;
int len_245;
void* right_value227;
char* __dec_obj44;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_243, 0, sizeof(char*));
memset(&args_244, 0, sizeof(va_list));
memset(&len_245, 0, sizeof(int));
memset(&right_value227, 0, sizeof(void*));
    # 921 "03transpile2.c"
    # 918 "03transpile2.c"
    if(_if_conditional298=info->no_output_come_code,    _if_conditional298) {
        # 919 "03transpile2.c"
        return;
    }
    # 921 "03transpile2.c"
    # 923 "03transpile2.c"
    # 924 "03transpile2.c"
    __builtin_va_start(args_244,msg);
    # 925 "03transpile2.c"
    len_245=vasprintf(&msg2_243,msg,args_244);
    # 926 "03transpile2.c"
    __builtin_va_end(args_244);
    # 928 "03transpile2.c"
    __dec_obj44=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(((char*)(right_value227=xsprintf("%s",msg2_243))));
    if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value227);
    if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { right_value227 = come_decrement_ref_count(right_value227, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value227;
    __freed_obj__ = 0;
    # 930 "03transpile2.c"
    free(msg2_243);
    if((&args_244) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_244), (void*)0, (void*)0, 1, 0, 0, 0); }
}

void add_come_last_code3(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional299;
char* msg2_246;
va_list args_247;
int len_248;
void* right_value228;
char* __dec_obj45;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_246, 0, sizeof(char*));
memset(&args_247, 0, sizeof(va_list));
memset(&len_248, 0, sizeof(int));
memset(&right_value228, 0, sizeof(void*));
    # 938 "03transpile2.c"
    # 935 "03transpile2.c"
    if(_if_conditional299=info->no_output_come_code,    _if_conditional299) {
        # 936 "03transpile2.c"
        return;
    }
    # 938 "03transpile2.c"
    # 940 "03transpile2.c"
    # 941 "03transpile2.c"
    __builtin_va_start(args_247,msg);
    # 942 "03transpile2.c"
    len_248=vasprintf(&msg2_246,msg,args_247);
    # 943 "03transpile2.c"
    __builtin_va_end(args_247);
    # 945 "03transpile2.c"
    __dec_obj45=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(((char*)(right_value228=xsprintf("%s",msg2_246))));
    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value228);
    if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { right_value228 = come_decrement_ref_count(right_value228, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value228;
    __freed_obj__ = 0;
    # 947 "03transpile2.c"
    free(msg2_246);
    if((&args_247) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_247), (void*)0, (void*)0, 1, 0, 0, 0); }
}

void dec_stack_ptr(int value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 952 "03transpile2.c"
    list$1CVALUEph_delete(info->stack,-value,-1);
}

static struct list$1CVALUEph* list$1CVALUEph_delete(struct list$1CVALUEph* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional300;
_Bool _if_conditional301;
_Bool _if_conditional302;
int tmp_249;
_Bool _if_conditional303;
_Bool _if_conditional304;
_Bool _if_conditional305;
struct list$1CVALUEph* __result104__;
_Bool _if_conditional306;
_Bool _if_conditional308;
struct list_item$1CVALUEph* it_252;
int i_253;
_Bool _while_condtional21;
_Bool _if_conditional309;
struct list_item$1CVALUEph* prev_it_254;
_Bool _if_conditional310;
_Bool _if_conditional311;
struct list_item$1CVALUEph* it_255;
int i_256;
_Bool _while_condtional22;
_Bool _if_conditional312;
_Bool _if_conditional313;
struct list_item$1CVALUEph* prev_it_257;
struct list_item$1CVALUEph* it_258;
struct list_item$1CVALUEph* head_prev_it_259;
struct list_item$1CVALUEph* tail_it_260;
int i_261;
_Bool _while_condtional23;
_Bool _if_conditional314;
_Bool _if_conditional315;
_Bool _if_conditional316;
struct list_item$1CVALUEph* prev_it_262;
_Bool _if_conditional317;
_Bool _if_conditional318;
struct list$1CVALUEph* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_249, 0, sizeof(int));
memset(&it_252, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_253, 0, sizeof(int));
memset(&prev_it_254, 0, sizeof(struct list_item$1CVALUEph*));
memset(&it_255, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_256, 0, sizeof(int));
memset(&prev_it_257, 0, sizeof(struct list_item$1CVALUEph*));
memset(&it_258, 0, sizeof(struct list_item$1CVALUEph*));
memset(&head_prev_it_259, 0, sizeof(struct list_item$1CVALUEph*));
memset(&tail_it_260, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_261, 0, sizeof(int));
memset(&prev_it_262, 0, sizeof(struct list_item$1CVALUEph*));
        # 517 "./comelang2.h"
        # 514 "./comelang2.h"
        if(_if_conditional300=head<0,        _if_conditional300) {
            # 515 "./comelang2.h"
            head+=self->len;
        }
        # 521 "./comelang2.h"
        # 517 "./comelang2.h"
        if(_if_conditional301=tail<0,        _if_conditional301) {
            # 518 "./comelang2.h"
            tail+=self->len+1;
        }
        # 527 "./comelang2.h"
        # 521 "./comelang2.h"
        if(_if_conditional302=head>tail,        _if_conditional302) {
            # 522 "./comelang2.h"
            tmp_249=tail;
            # 523 "./comelang2.h"
            tail=head;
            # 524 "./comelang2.h"
            head=tmp_249;
        }
        # 531 "./comelang2.h"
        # 527 "./comelang2.h"
        if(_if_conditional303=head<0,        _if_conditional303) {
            # 528 "./comelang2.h"
            head=0;
        }
        # 535 "./comelang2.h"
        # 531 "./comelang2.h"
        if(_if_conditional304=tail>self->len,        _if_conditional304) {
            # 532 "./comelang2.h"
            tail=self->len;
        }
        # 539 "./comelang2.h"
        # 535 "./comelang2.h"
        if(_if_conditional305=head==tail,        _if_conditional305) {
            # 536 "./comelang2.h"
            __result104__ = __result_obj__ = self;
            return __result104__;
        }
        # 634 "./comelang2.h"
        # 539 "./comelang2.h"
        if(_if_conditional306=head==0&&tail==self->len,        _if_conditional306) {
            # 541 "./comelang2.h"
            list$1CVALUEph_reset(self);
        }
        else {
            # 634 "./comelang2.h"
            # 543 "./comelang2.h"
            if(_if_conditional308=head==0,            _if_conditional308) {
                # 544 "./comelang2.h"
                it_252=self->head;
                # 545 "./comelang2.h"
                i_253=0;
                # 567 "./comelang2.h"
                while(_while_condtional21=it_252!=((void*)0),                _while_condtional21) {
                    # 566 "./comelang2.h"
                    # 547 "./comelang2.h"
                    if(_if_conditional309=i_253<tail,                    _if_conditional309) {
                        # 548 "./comelang2.h"
                        prev_it_254=it_252;
                        # 550 "./comelang2.h"
                        it_252=it_252->next;
                        # 551 "./comelang2.h"
                        i_253++;
                        # 553 "./comelang2.h"
                        if(prev_it_254 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_254, (void*)0, (void*)0, 0, 0, 0, 0); }
                        # 555 "./comelang2.h"
                        self->len--;
                    }
                    else {
                        # 566 "./comelang2.h"
                        # 557 "./comelang2.h"
                        if(_if_conditional310=i_253==tail,                        _if_conditional310) {
                            # 558 "./comelang2.h"
                            self->head=it_252;
                            # 559 "./comelang2.h"
                            self->head->prev=((void*)0);
                            # 560 "./comelang2.h"
                            break;
                        }
                        else {
                            # 563 "./comelang2.h"
                            it_252=it_252->next;
                            # 564 "./comelang2.h"
                            i_253++;
                        }
                    }
                }
            }
            else {
                # 634 "./comelang2.h"
                # 568 "./comelang2.h"
                if(_if_conditional311=tail==self->len,                _if_conditional311) {
                    # 569 "./comelang2.h"
                    it_255=self->head;
                    # 570 "./comelang2.h"
                    i_256=0;
                    # 592 "./comelang2.h"
                    while(_while_condtional22=it_255!=((void*)0),                    _while_condtional22) {
                        # 577 "./comelang2.h"
                        # 572 "./comelang2.h"
                        if(_if_conditional312=i_256==head,                        _if_conditional312) {
                            # 573 "./comelang2.h"
                            self->tail=it_255->prev;
                            # 574 "./comelang2.h"
                            self->tail->next=((void*)0);
                        }
                        # 591 "./comelang2.h"
                        # 577 "./comelang2.h"
                        if(_if_conditional313=i_256>=head,                        _if_conditional313) {
                            # 578 "./comelang2.h"
                            prev_it_257=it_255;
                            # 580 "./comelang2.h"
                            it_255=it_255->next;
                            # 581 "./comelang2.h"
                            i_256++;
                            # 583 "./comelang2.h"
                            if(prev_it_257 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_257, (void*)0, (void*)0, 0, 0, 0, 0); }
                            # 585 "./comelang2.h"
                            self->len--;
                        }
                        else {
                            # 588 "./comelang2.h"
                            it_255=it_255->next;
                            # 589 "./comelang2.h"
                            i_256++;
                        }
                    }
                }
                else {
                    # 594 "./comelang2.h"
                    it_258=self->head;
                    # 596 "./comelang2.h"
                    head_prev_it_259=((void*)0);
                    # 597 "./comelang2.h"
                    tail_it_260=((void*)0);
                    # 600 "./comelang2.h"
                    i_261=0;
                    # 626 "./comelang2.h"
                    while(_while_condtional23=it_258!=((void*)0),                    _while_condtional23) {
                        # 605 "./comelang2.h"
                        # 602 "./comelang2.h"
                        if(_if_conditional314=i_261==head,                        _if_conditional314) {
                            # 603 "./comelang2.h"
                            head_prev_it_259=it_258->prev;
                        }
                        # 609 "./comelang2.h"
                        # 605 "./comelang2.h"
                        if(_if_conditional315=i_261==tail,                        _if_conditional315) {
                            # 606 "./comelang2.h"
                            tail_it_260=it_258;
                        }
                        # 624 "./comelang2.h"
                        # 609 "./comelang2.h"
                        if(_if_conditional316=i_261>=head&&i_261<tail,                        _if_conditional316) {
                            # 611 "./comelang2.h"
                            prev_it_262=it_258;
                            # 613 "./comelang2.h"
                            it_258=it_258->next;
                            # 614 "./comelang2.h"
                            i_261++;
                            # 616 "./comelang2.h"
                            if(prev_it_262 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_262, (void*)0, (void*)0, 0, 0, 0, 0); }
                            # 618 "./comelang2.h"
                            self->len--;
                        }
                        else {
                            # 621 "./comelang2.h"
                            it_258=it_258->next;
                            # 622 "./comelang2.h"
                            i_261++;
                        }
                    }
                    # 629 "./comelang2.h"
                    # 626 "./comelang2.h"
                    if(_if_conditional317=head_prev_it_259!=((void*)0),                    _if_conditional317) {
                        # 627 "./comelang2.h"
                        head_prev_it_259->next=tail_it_260;
                    }
                    # 632 "./comelang2.h"
                    # 629 "./comelang2.h"
                    if(_if_conditional318=tail_it_260!=((void*)0),                    _if_conditional318) {
                        # 630 "./comelang2.h"
                        tail_it_260->prev=head_prev_it_259;
                    }
                }
            }
        }
        # 634 "./comelang2.h"
        __result106__ = __result_obj__ = self;
        return __result106__;
}

static struct list$1CVALUEph* list$1CVALUEph_reset(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1CVALUEph* it_250;
_Bool _while_condtional20;
struct list_item$1CVALUEph* prev_it_251;
struct list$1CVALUEph* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_250, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_251, 0, sizeof(struct list_item$1CVALUEph*));
                # 483 "./comelang2.h"
                it_250=self->head;
                # 490 "./comelang2.h"
                while(_while_condtional20=it_250!=((void*)0),                _while_condtional20) {
                    # 485 "./comelang2.h"
                    prev_it_251=it_250;
                    # 486 "./comelang2.h"
                    it_250=it_250->next;
                    # 487 "./comelang2.h"
                    if(prev_it_251 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_251, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                # 490 "./comelang2.h"
                self->head=((void*)0);
                # 491 "./comelang2.h"
                self->tail=((void*)0);
                # 493 "./comelang2.h"
                self->len=0;
                # 495 "./comelang2.h"
                __result105__ = __result_obj__ = self;
                return __result105__;
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional307;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        # 1 "list_item$1CVALUEphp_finalize"
                        # 0 "list_item$1CVALUEphp_finalize"
                        if(_if_conditional307=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional307) {
                            # 0 "list_item$1CVALUEphp_finalize"
                            if(self->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

struct CVALUE* get_value_from_stack(int offset, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __dec_obj46;
void* right_value232;
struct CVALUE* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value232, 0, sizeof(void*));
    # 957 "03transpile2.c"
    __dec_obj46=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0,0); }
    # 960 "03transpile2.c"
    __result111__ = __result_obj__ = ((struct CVALUE*)(right_value232=CVALUE_clone(list$1CVALUEphp_operator_load_element(info->stack,offset))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value232);
    if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value232;
    __freed_obj__ = 0;
    return __result111__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional319;
struct list_item$1CVALUEph* it_263;
int i_264;
_Bool _while_condtional24;
_Bool _if_conditional320;
struct CVALUE* __result107__;
struct CVALUE* default_value_265;
struct CVALUE* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_263, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_264, 0, sizeof(int));
memset(&default_value_265, 0, sizeof(struct CVALUE*));
        # 745 "./comelang2.h"
        # 741 "./comelang2.h"
        if(_if_conditional319=position<0,        _if_conditional319) {
            # 742 "./comelang2.h"
            position+=self->len;
        }
        # 745 "./comelang2.h"
        it_263=self->head;
        # 746 "./comelang2.h"
        i_264=0;
        # 753 "./comelang2.h"
        while(_while_condtional24=it_263!=((void*)0),        _while_condtional24) {
            # 751 "./comelang2.h"
            # 748 "./comelang2.h"
            if(_if_conditional320=position==i_264,            _if_conditional320) {
                # 749 "./comelang2.h"
                __result107__ = __result_obj__ = it_263->item;
                return __result107__;
            }
            # 751 "./comelang2.h"
            it_263=it_263->next;
            # 752 "./comelang2.h"
            i_264++;
        }
        # 755 "./comelang2.h"
        # 756 "./comelang2.h"
        memset(&default_value_265,0,sizeof(struct CVALUE*));
        # 757 "./comelang2.h"
        __result108__ = __result_obj__ = default_value_265;
        if(default_value_265 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_265, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result108__;
        if(default_value_265 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_265, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional321;
struct CVALUE* __result109__;
void* right_value229;
struct CVALUE* result_266;
_Bool _if_conditional322;
void* right_value230;
char* __dec_obj47;
_Bool _if_conditional323;
void* right_value231;
struct sType* __dec_obj48;
_Bool _if_conditional324;
struct CVALUE* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value229, 0, sizeof(void*));
memset(&result_266, 0, sizeof(struct CVALUE*));
memset(&right_value230, 0, sizeof(void*));
memset(&right_value231, 0, sizeof(void*));
        # 3 "CVALUE_clone"
        # 2 "CVALUE_clone"
        if(_if_conditional321=self==(void*)0,        _if_conditional321) {
            # 2 "CVALUE_clone"
            __result109__ = __result_obj__ = (void*)0;
            return __result109__;
        }
        # 3 "CVALUE_clone"
        result_266=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value229=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value229);
        if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value229;
        __freed_obj__ = 0;
        # 5 "CVALUE_clone"
        # 4 "CVALUE_clone"
        if(_if_conditional322=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional322) {
            # 4 "CVALUE_clone"
            __dec_obj47=result_266->c_value;
            result_266->c_value=(char*)come_increment_ref_count(((char*)(right_value230=string_clone(self->c_value))));
            if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value230);
            if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { right_value230 = come_decrement_ref_count(right_value230, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value230;
            __freed_obj__ = 0;
        }
        # 6 "CVALUE_clone"
        # 5 "CVALUE_clone"
        if(_if_conditional323=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional323) {
            # 5 "CVALUE_clone"
            __dec_obj48=result_266->type;
            result_266->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value231=sType_clone(self->type))));
            if(__dec_obj48) { come_call_finalizer(sType_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value231);
            if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value231;
            __freed_obj__ = 0;
        }
        # 7 "CVALUE_clone"
        # 6 "CVALUE_clone"
        if(_if_conditional324=self!=((void*)0),        _if_conditional324) {
            # 6 "CVALUE_clone"
            result_266->var=self->var;
        }
        # 7 "CVALUE_clone"
        __result110__ = __result_obj__ = result_266;
        if(result_266 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,result_266, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result110__;
        if(result_266 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,result_266, (void*)0, (void*)0, 0, 0, 0, 0); }
}

void transpiler_clear_last_code(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __dec_obj49;
char* __dec_obj50;
char* __dec_obj51;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 965 "03transpile2.c"
    __dec_obj49=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
    # 966 "03transpile2.c"
    __dec_obj50=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0,0); }
    # 967 "03transpile2.c"
    __dec_obj51=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0,0); }
}

