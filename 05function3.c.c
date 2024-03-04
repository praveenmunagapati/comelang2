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
struct sIntNode
{
    int value;
    int sline;
    char* sname;
};
struct sUIntNode
{
    unsigned int value;
    int sline;
    char* sname;
};
struct sLongNode
{
    long value;
    int sline;
    char* sname;
};
struct sULongNode
{
    unsigned long int value;
    int sline;
    char* sname;
};
struct sFloatNode
{
    float value;
    int sline;
    char* sname;
};
struct sDoubleNode
{
    double value;
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

struct sIntNode* sIntNode_initialize(struct sIntNode* self, int value, struct sInfo* info);

char* sIntNode_kind();

_Bool sIntNode_compile(struct sIntNode* self, struct sInfo* info);

static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
_Bool sIntNode_terminated();

int sIntNode_sline(struct sIntNode* self, struct sInfo* info);

char* sIntNode_sname(struct sIntNode* self, struct sInfo* info);

struct sUIntNode* sUIntNode_initialize(struct sUIntNode* self, unsigned int value, struct sInfo* info);

_Bool sUIntNode_terminated();

char* sUIntNode_kind();

_Bool sUIntNode_compile(struct sUIntNode* self, struct sInfo* info);

int sUIntNode_sline(struct sUIntNode* self, struct sInfo* info);

char* sUIntNode_sname(struct sUIntNode* self, struct sInfo* info);

struct sLongNode* sLongNode_initialize(struct sLongNode* self, unsigned long int value, struct sInfo* info);

char* sLongNode_kind();

_Bool sLongNode_compile(struct sLongNode* self, struct sInfo* info);

_Bool sLongNode_terminated();

int sLongNode_sline(struct sLongNode* self, struct sInfo* info);

char* sLongNode_sname(struct sLongNode* self, struct sInfo* info);

struct sULongNode* sULongNode_initialize(struct sULongNode* self, unsigned long int value, struct sInfo* info);

char* sULongNode_kind();

_Bool sULongNode_compile(struct sULongNode* self, struct sInfo* info);

_Bool sULongNode_terminated();

int sULongNode_sline(struct sULongNode* self, struct sInfo* info);

char* sULongNode_sname(struct sULongNode* self, struct sInfo* info);

struct sFloatNode* sFloatNode_initialize(struct sFloatNode* self, float value, struct sInfo* info);

char* sFloatNode_kind();

_Bool sFloatNode_compile(struct sFloatNode* self, struct sInfo* info);

_Bool sFloatNode_terminated();

int sFloatNode_sline(struct sFloatNode* self, struct sInfo* info);

char* sFloatNode_sname(struct sFloatNode* self, struct sInfo* info);

struct sDoubleNode* sDoubleNode_initialize(struct sDoubleNode* self, double value, struct sInfo* info);

char* sDoubleNode_kind();

_Bool sDoubleNode_compile(struct sDoubleNode* self, struct sInfo* info);

_Bool sDoubleNode_terminated();

int sDoubleNode_sline(struct sDoubleNode* self, struct sInfo* info);

char* sDoubleNode_sname(struct sDoubleNode* self, struct sInfo* info);

struct sNode* get_number(_Bool minus, struct sInfo* info);

static void sFloatNode_finalize(struct sFloatNode* self);
static struct sFloatNode* sFloatNode_clone(struct sFloatNode* self);
static void sDoubleNode_finalize(struct sDoubleNode* self);
static struct sDoubleNode* sDoubleNode_clone(struct sDoubleNode* self);
struct sNode* create_int_node(int value, struct sInfo* info);

struct sNode* get_hex_number(_Bool minus, struct sInfo* info);

struct sNode* get_oct_number(struct sInfo* info);

static void sUIntNode_finalize(struct sUIntNode* self);
static struct sUIntNode* sUIntNode_clone(struct sUIntNode* self);
static void sULongNode_finalize(struct sULongNode* self);
static struct sULongNode* sULongNode_clone(struct sULongNode* self);
static void sLongNode_finalize(struct sLongNode* self);
static struct sLongNode* sLongNode_clone(struct sLongNode* self);
static void sIntNode_finalize(struct sIntNode* self);
static struct sIntNode* sIntNode_clone(struct sIntNode* self);
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
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1947, "struct smart_pointer$1char"))));
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
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1957, "struct smart_pointer$1char"))));
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
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 1967, "struct smart_pointer$1short"))));
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
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 1977, "struct smart_pointer$1int"))));
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
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 1987, "struct smart_pointer$1long"))));
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




struct sIntNode* sIntNode_initialize(struct sIntNode* self, int value, struct sInfo* info){
void* __result_obj__;
void* right_value13;
char* __dec_obj6;
struct sIntNode* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
right_value13 = (void*)0;
    self->value=value;
    self->sline=info->sline;
    __dec_obj6=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value13=__builtin_string(info->sname))));
    __dec_obj6 = come_decrement_ref_count2(__dec_obj6, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value13 = come_decrement_ref_count2(right_value13, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result10__ = __result_obj__ = self;
    come_call_finalizer2(sIntNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result10__;
    come_call_finalizer2(sIntNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

char* sIntNode_kind(){
void* __result_obj__;
void* right_value14;
char* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
right_value14 = (void*)0;
    __result11__ = __result_obj__ = ((char*)(right_value14=__builtin_string("sIntNode")));
    right_value14 = come_decrement_ref_count2(right_value14, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result11__;
}

_Bool sIntNode_compile(struct sIntNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value15;
struct CVALUE* come_value_5;
void* right_value16;
char* __dec_obj7;
void* right_value17;
void* right_value18;
struct sType* __dec_obj8;
_Bool __result13__;
memset(&__result_obj__, 0, sizeof(void*));
right_value15 = (void*)0;
memset(&come_value_5, 0, sizeof(struct CVALUE*));
right_value16 = (void*)0;
right_value17 = (void*)0;
right_value18 = (void*)0;
    come_value_5=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value15=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function3.c", 27, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj7=come_value_5->c_value;
    come_value_5->c_value=(char*)come_increment_ref_count(((char*)(right_value16=xsprintf("%d",self->value))));
    __dec_obj7 = come_decrement_ref_count2(__dec_obj7, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value16 = come_decrement_ref_count2(right_value16, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj8=come_value_5->type;
    come_value_5->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value18=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value17=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function3.c", 30, "struct sType")))),"int",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_5->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_5));
    add_come_last_code(info,"%s;\n",come_value_5->c_value);
    __result13__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result13__;
    come_call_finalizer2(CVALUE_finalize,come_value_5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional6;
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional6=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional6) {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional7=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional7) {
            come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional8;
_Bool _if_conditional10;
_Bool _if_conditional11;
_Bool _if_conditional12;
_Bool _if_conditional14;
_Bool _if_conditional16;
_Bool _if_conditional17;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _if_conditional23;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional8=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional8) {
                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional10=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional10) {
                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional11=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional11) {
                    self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional12=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional12) {
                    come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional14=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional14) {
                    come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional16=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional16) {
                    come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional17=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional17) {
                    come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional19=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional19) {
                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional20=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional20) {
                    if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional21=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional21) {
                    if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional22=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional22) {
                    self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional23=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional23) {
                    self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional9;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional9=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional9) {
                            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_6;
_Bool _while_condtional1;
struct list_item$1sTypeph* prev_it_7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_6, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_7, 0, sizeof(struct list_item$1sTypeph*));
                        it_6=self->head;
                        while(_while_condtional1=it_6!=((void*)0),                        _while_condtional1) {
                            prev_it_7=it_6;
                            it_6=it_6->next;
                            come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional13;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional13=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional13) {
                                    come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_8;
_Bool _while_condtional2;
struct list_item$1sNodeph* prev_it_9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_8, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_9, 0, sizeof(struct list_item$1sNodeph*));
                        it_8=self->head;
                        while(_while_condtional2=it_8!=((void*)0),                        _while_condtional2) {
                            prev_it_9=it_8;
                            it_8=it_8->next;
                            come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional15;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional15=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional15) {
                                    if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_10;
_Bool _while_condtional3;
struct list_item$1charph* prev_it_11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_10, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_11, 0, sizeof(struct list_item$1charph*));
                        it_10=self->head;
                        while(_while_condtional3=it_10!=((void*)0),                        _while_condtional3) {
                            prev_it_11=it_10;
                            it_10=it_10->next;
                            come_call_finalizer2(list_item$1charphp_finalize,prev_it_11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional18;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional18=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional18) {
                                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional24;
void* right_value19;
struct list_item$1CVALUEph* litem_12;
struct CVALUE* __dec_obj9;
_Bool _if_conditional26;
void* right_value20;
struct list_item$1CVALUEph* litem_13;
struct CVALUE* __dec_obj10;
void* right_value21;
struct list_item$1CVALUEph* litem_14;
struct CVALUE* __dec_obj11;
struct list$1CVALUEph* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
right_value19 = (void*)0;
memset(&litem_12, 0, sizeof(struct list_item$1CVALUEph*));
right_value20 = (void*)0;
memset(&litem_13, 0, sizeof(struct list_item$1CVALUEph*));
right_value21 = (void*)0;
memset(&litem_14, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional24=self->len==0,        _if_conditional24) {
            litem_12=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value19=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 225, "struct list_item$1CVALUEph"))));
            come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            litem_12->prev=((void*)0);
            litem_12->next=((void*)0);
            __dec_obj9=litem_12->item;
            litem_12->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer2(CVALUE_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            self->tail=litem_12;
            self->head=litem_12;
        }
        else {
            if(_if_conditional26=self->len==1,            _if_conditional26) {
                litem_13=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value20=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 235, "struct list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_13->prev=self->head;
                litem_13->next=((void*)0);
                __dec_obj10=litem_13->item;
                litem_13->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_13;
                self->head->next=litem_13;
            }
            else {
                litem_14=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value21=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 245, "struct list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_14->prev=self->tail;
                litem_14->next=((void*)0);
                __dec_obj11=litem_14->item;
                litem_14->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail->next=litem_14;
                self->tail=litem_14;
            }
        }
        self->len++;
        __result12__ = __result_obj__ = self;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result12__;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional25=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional25) {
                    come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

_Bool sIntNode_terminated(){
void* __result_obj__;
_Bool __result14__;
memset(&__result_obj__, 0, sizeof(void*));
    __result14__ = (_Bool)0;
    return __result14__;
}

int sIntNode_sline(struct sIntNode* self, struct sInfo* info){
void* __result_obj__;
int __result15__;
memset(&__result_obj__, 0, sizeof(void*));
    __result15__ = self->sline;
    return __result15__;
}

char* sIntNode_sname(struct sIntNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value22;
char* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
right_value22 = (void*)0;
    __result16__ = __result_obj__ = ((char*)(right_value22=__builtin_string(self->sname)));
    right_value22 = come_decrement_ref_count2(right_value22, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result16__;
}

struct sUIntNode* sUIntNode_initialize(struct sUIntNode* self, unsigned int value, struct sInfo* info){
void* __result_obj__;
void* right_value23;
char* __dec_obj12;
struct sUIntNode* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
right_value23 = (void*)0;
    self->value=value;
    self->sline=info->sline;
    __dec_obj12=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value23=__builtin_string(info->sname))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value23 = come_decrement_ref_count2(right_value23, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result17__ = __result_obj__ = self;
    come_call_finalizer2(sUIntNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result17__;
    come_call_finalizer2(sUIntNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sUIntNode_terminated(){
void* __result_obj__;
_Bool __result18__;
memset(&__result_obj__, 0, sizeof(void*));
    __result18__ = (_Bool)0;
    return __result18__;
}

char* sUIntNode_kind(){
void* __result_obj__;
void* right_value24;
char* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
right_value24 = (void*)0;
    __result19__ = __result_obj__ = ((char*)(right_value24=__builtin_string("sUIntNode")));
    right_value24 = come_decrement_ref_count2(right_value24, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result19__;
}

_Bool sUIntNode_compile(struct sUIntNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value25;
struct CVALUE* come_value_15;
void* right_value26;
char* __dec_obj13;
void* right_value27;
void* right_value28;
struct sType* __dec_obj14;
_Bool __result20__;
memset(&__result_obj__, 0, sizeof(void*));
right_value25 = (void*)0;
memset(&come_value_15, 0, sizeof(struct CVALUE*));
right_value26 = (void*)0;
right_value27 = (void*)0;
right_value28 = (void*)0;
    come_value_15=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value25=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function3.c", 84, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj13=come_value_15->c_value;
    come_value_15->c_value=(char*)come_increment_ref_count(((char*)(right_value26=xsprintf("%u",self->value))));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value26 = come_decrement_ref_count2(right_value26, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj14=come_value_15->type;
    come_value_15->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value28=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value27=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function3.c", 87, "struct sType")))),"int",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_15->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_15));
    add_come_last_code(info,"%s;\n",come_value_15->c_value);
    __result20__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result20__;
    come_call_finalizer2(CVALUE_finalize,come_value_15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sUIntNode_sline(struct sUIntNode* self, struct sInfo* info){
void* __result_obj__;
int __result21__;
memset(&__result_obj__, 0, sizeof(void*));
    __result21__ = self->sline;
    return __result21__;
}

char* sUIntNode_sname(struct sUIntNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value29;
char* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
right_value29 = (void*)0;
    __result22__ = __result_obj__ = ((char*)(right_value29=__builtin_string(self->sname)));
    right_value29 = come_decrement_ref_count2(right_value29, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result22__;
}

struct sLongNode* sLongNode_initialize(struct sLongNode* self, unsigned long int value, struct sInfo* info){
void* __result_obj__;
void* right_value30;
char* __dec_obj15;
struct sLongNode* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
right_value30 = (void*)0;
    self->value=value;
    self->sline=info->sline;
    __dec_obj15=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value30=__builtin_string(info->sname))));
    __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value30 = come_decrement_ref_count2(right_value30, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result23__ = __result_obj__ = self;
    come_call_finalizer2(sLongNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result23__;
    come_call_finalizer2(sLongNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

char* sLongNode_kind(){
void* __result_obj__;
void* right_value31;
char* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
right_value31 = (void*)0;
    __result24__ = __result_obj__ = ((char*)(right_value31=__builtin_string("sLongNode")));
    right_value31 = come_decrement_ref_count2(right_value31, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result24__;
}

_Bool sLongNode_compile(struct sLongNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value32;
struct CVALUE* come_value_16;
void* right_value33;
char* __dec_obj16;
void* right_value34;
void* right_value35;
struct sType* __dec_obj17;
_Bool __result25__;
memset(&__result_obj__, 0, sizeof(void*));
right_value32 = (void*)0;
memset(&come_value_16, 0, sizeof(struct CVALUE*));
right_value33 = (void*)0;
right_value34 = (void*)0;
right_value35 = (void*)0;
    come_value_16=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value32=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function3.c", 131, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj16=come_value_16->c_value;
    come_value_16->c_value=(char*)come_increment_ref_count(((char*)(right_value33=xsprintf("%ld",self->value))));
    __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value33 = come_decrement_ref_count2(right_value33, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj17=come_value_16->type;
    come_value_16->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value35=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value34=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function3.c", 134, "struct sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_16->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_16));
    add_come_last_code(info,"%s;\n",come_value_16->c_value);
    __result25__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result25__;
    come_call_finalizer2(CVALUE_finalize,come_value_16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

_Bool sLongNode_terminated(){
void* __result_obj__;
_Bool __result26__;
memset(&__result_obj__, 0, sizeof(void*));
    __result26__ = (_Bool)0;
    return __result26__;
}

int sLongNode_sline(struct sLongNode* self, struct sInfo* info){
void* __result_obj__;
int __result27__;
memset(&__result_obj__, 0, sizeof(void*));
    __result27__ = self->sline;
    return __result27__;
}

char* sLongNode_sname(struct sLongNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value36;
char* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
right_value36 = (void*)0;
    __result28__ = __result_obj__ = ((char*)(right_value36=__builtin_string(self->sname)));
    right_value36 = come_decrement_ref_count2(right_value36, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result28__;
}

struct sULongNode* sULongNode_initialize(struct sULongNode* self, unsigned long int value, struct sInfo* info){
void* __result_obj__;
void* right_value37;
char* __dec_obj18;
struct sULongNode* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
right_value37 = (void*)0;
    self->value=value;
    self->sline=info->sline;
    __dec_obj18=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value37=__builtin_string(info->sname))));
    __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value37 = come_decrement_ref_count2(right_value37, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result29__ = __result_obj__ = self;
    come_call_finalizer2(sULongNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result29__;
    come_call_finalizer2(sULongNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

char* sULongNode_kind(){
void* __result_obj__;
void* right_value38;
char* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
right_value38 = (void*)0;
    __result30__ = __result_obj__ = ((char*)(right_value38=__builtin_string("sULongNode")));
    right_value38 = come_decrement_ref_count2(right_value38, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result30__;
}

_Bool sULongNode_compile(struct sULongNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value39;
struct CVALUE* come_value_17;
void* right_value40;
char* __dec_obj19;
void* right_value41;
void* right_value42;
struct sType* __dec_obj20;
_Bool __result31__;
memset(&__result_obj__, 0, sizeof(void*));
right_value39 = (void*)0;
memset(&come_value_17, 0, sizeof(struct CVALUE*));
right_value40 = (void*)0;
right_value41 = (void*)0;
right_value42 = (void*)0;
    come_value_17=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value39=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function3.c", 183, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj19=come_value_17->c_value;
    come_value_17->c_value=(char*)come_increment_ref_count(((char*)(right_value40=xsprintf("%lu",self->value))));
    __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value40 = come_decrement_ref_count2(right_value40, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj20=come_value_17->type;
    come_value_17->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value42=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value41=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function3.c", 186, "struct sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_17->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_17));
    add_come_last_code(info,"%s;\n",come_value_17->c_value);
    __result31__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result31__;
    come_call_finalizer2(CVALUE_finalize,come_value_17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

_Bool sULongNode_terminated(){
void* __result_obj__;
_Bool __result32__;
memset(&__result_obj__, 0, sizeof(void*));
    __result32__ = (_Bool)0;
    return __result32__;
}

int sULongNode_sline(struct sULongNode* self, struct sInfo* info){
void* __result_obj__;
int __result33__;
memset(&__result_obj__, 0, sizeof(void*));
    __result33__ = self->sline;
    return __result33__;
}

char* sULongNode_sname(struct sULongNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value43;
char* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
right_value43 = (void*)0;
    __result34__ = __result_obj__ = ((char*)(right_value43=__builtin_string(self->sname)));
    right_value43 = come_decrement_ref_count2(right_value43, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result34__;
}

struct sFloatNode* sFloatNode_initialize(struct sFloatNode* self, float value, struct sInfo* info){
void* __result_obj__;
void* right_value44;
char* __dec_obj21;
struct sFloatNode* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
right_value44 = (void*)0;
    self->value=value;
    self->sline=info->sline;
    __dec_obj21=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value44=__builtin_string(info->sname))));
    __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value44 = come_decrement_ref_count2(right_value44, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result35__ = __result_obj__ = self;
    come_call_finalizer2(sFloatNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result35__;
    come_call_finalizer2(sFloatNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

char* sFloatNode_kind(){
void* __result_obj__;
void* right_value45;
char* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
right_value45 = (void*)0;
    __result36__ = __result_obj__ = ((char*)(right_value45=__builtin_string("sFloatNode")));
    right_value45 = come_decrement_ref_count2(right_value45, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result36__;
}

_Bool sFloatNode_compile(struct sFloatNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value46;
struct CVALUE* come_value_18;
void* right_value47;
char* __dec_obj22;
void* right_value48;
void* right_value49;
struct sType* __dec_obj23;
_Bool __result37__;
memset(&__result_obj__, 0, sizeof(void*));
right_value46 = (void*)0;
memset(&come_value_18, 0, sizeof(struct CVALUE*));
right_value47 = (void*)0;
right_value48 = (void*)0;
right_value49 = (void*)0;
    come_value_18=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value46=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function3.c", 235, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj22=come_value_18->c_value;
    come_value_18->c_value=(char*)come_increment_ref_count(((char*)(right_value47=xsprintf("%f",self->value))));
    __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value47 = come_decrement_ref_count2(right_value47, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj23=come_value_18->type;
    come_value_18->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value49=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value48=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function3.c", 238, "struct sType")))),"float",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_18->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_18));
    add_come_last_code(info,"%s;\n",come_value_18->c_value);
    __result37__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result37__;
    come_call_finalizer2(CVALUE_finalize,come_value_18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

_Bool sFloatNode_terminated(){
void* __result_obj__;
_Bool __result38__;
memset(&__result_obj__, 0, sizeof(void*));
    __result38__ = (_Bool)0;
    return __result38__;
}

int sFloatNode_sline(struct sFloatNode* self, struct sInfo* info){
void* __result_obj__;
int __result39__;
memset(&__result_obj__, 0, sizeof(void*));
    __result39__ = self->sline;
    return __result39__;
}

char* sFloatNode_sname(struct sFloatNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value50;
char* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
right_value50 = (void*)0;
    __result40__ = __result_obj__ = ((char*)(right_value50=__builtin_string(self->sname)));
    right_value50 = come_decrement_ref_count2(right_value50, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result40__;
}

struct sDoubleNode* sDoubleNode_initialize(struct sDoubleNode* self, double value, struct sInfo* info){
void* __result_obj__;
void* right_value51;
char* __dec_obj24;
struct sDoubleNode* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
right_value51 = (void*)0;
    self->value=value;
    self->sline=info->sline;
    __dec_obj24=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value51=__builtin_string(info->sname))));
    __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value51 = come_decrement_ref_count2(right_value51, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result41__ = __result_obj__ = self;
    come_call_finalizer2(sDoubleNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result41__;
    come_call_finalizer2(sDoubleNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

char* sDoubleNode_kind(){
void* __result_obj__;
void* right_value52;
char* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
right_value52 = (void*)0;
    __result42__ = __result_obj__ = ((char*)(right_value52=__builtin_string("sDoubleNode")));
    right_value52 = come_decrement_ref_count2(right_value52, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result42__;
}

_Bool sDoubleNode_compile(struct sDoubleNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value53;
struct CVALUE* come_value_19;
void* right_value54;
char* __dec_obj25;
void* right_value55;
void* right_value56;
struct sType* __dec_obj26;
_Bool __result43__;
memset(&__result_obj__, 0, sizeof(void*));
right_value53 = (void*)0;
memset(&come_value_19, 0, sizeof(struct CVALUE*));
right_value54 = (void*)0;
right_value55 = (void*)0;
right_value56 = (void*)0;
    come_value_19=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value53=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function3.c", 287, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj25=come_value_19->c_value;
    come_value_19->c_value=(char*)come_increment_ref_count(((char*)(right_value54=xsprintf("%lf",self->value))));
    __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value54 = come_decrement_ref_count2(right_value54, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj26=come_value_19->type;
    come_value_19->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value56=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value55=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function3.c", 290, "struct sType")))),"double",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_19->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_19));
    add_come_last_code(info,"%s;\n",come_value_19->c_value);
    __result43__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result43__;
    come_call_finalizer2(CVALUE_finalize,come_value_19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

_Bool sDoubleNode_terminated(){
void* __result_obj__;
_Bool __result44__;
memset(&__result_obj__, 0, sizeof(void*));
    __result44__ = (_Bool)0;
    return __result44__;
}

int sDoubleNode_sline(struct sDoubleNode* self, struct sInfo* info){
void* __result_obj__;
int __result45__;
memset(&__result_obj__, 0, sizeof(void*));
    __result45__ = self->sline;
    return __result45__;
}

char* sDoubleNode_sname(struct sDoubleNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value57;
char* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
right_value57 = (void*)0;
    __result46__ = __result_obj__ = ((char*)(right_value57=__builtin_string(self->sname)));
    right_value57 = come_decrement_ref_count2(right_value57, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result46__;
}

struct sNode* get_number(_Bool minus, struct sInfo* info){
void* __result_obj__;
const int buf_size_20=128;
char* p2_22;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _while_condtional4;
_Bool _if_conditional34;
_Bool _if_conditional35;
char c_23;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _while_condtional5;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _while_condtional6;
_Bool _if_conditional46;
_Bool _if_conditional47;
_Bool _if_conditional48;
void* right_value58;
void* right_value59;
struct sNode* _inf_value1;
struct sFloatNode* _inf_obj_value1;
void* right_value62;
struct sNode* __result49__;
_Bool _if_conditional54;
void* right_value63;
void* right_value64;
struct sNode* _inf_value2;
struct sDoubleNode* _inf_obj_value2;
void* right_value67;
struct sNode* __result52__;
void* right_value68;
void* right_value69;
struct sNode* _inf_value3;
struct sDoubleNode* _inf_obj_value3;
void* right_value72;
struct sNode* __result55__;
_Bool _if_conditional65;
_Bool _if_conditional66;
_Bool _if_conditional67;
unsigned long int lont_27;
int value2_28;
void* right_value73;
void* right_value74;
struct sNode* _inf_value4;
struct sULongNode* _inf_obj_value4;
void* right_value77;
struct sNode* __result58__;
unsigned long int lont_30;
int value_31;
void* right_value78;
void* right_value79;
struct sNode* _inf_value5;
struct sULongNode* _inf_obj_value5;
void* right_value82;
struct sNode* __result61__;
unsigned int value_33;
void* right_value83;
void* right_value84;
struct sNode* _inf_value6;
struct sUIntNode* _inf_obj_value6;
void* right_value87;
struct sNode* __result64__;
_Bool _if_conditional83;
_Bool _if_conditional84;
unsigned long long int value_35;
void* right_value88;
void* right_value89;
struct sNode* _inf_value7;
struct sLongNode* _inf_obj_value7;
void* right_value92;
struct sNode* __result67__;
_Bool _if_conditional90;
unsigned long long int value_37;
void* right_value93;
void* right_value94;
struct sNode* _inf_value8;
struct sULongNode* _inf_obj_value8;
void* right_value97;
struct sNode* __result70__;
unsigned long long int value_39;
void* right_value98;
void* right_value99;
struct sNode* _inf_value9;
struct sLongNode* _inf_obj_value9;
void* right_value102;
struct sNode* __result73__;
unsigned long int lont_41;
int value_42;
void* right_value103;
void* right_value104;
struct sNode* _inf_value10;
struct sIntNode* _inf_obj_value10;
void* right_value107;
struct sNode* __result76__;
struct sNode* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p2_22, 0, sizeof(char*));
memset(&c_23, 0, sizeof(char));
right_value58 = (void*)0;
right_value59 = (void*)0;
right_value62 = (void*)0;
right_value63 = (void*)0;
right_value64 = (void*)0;
right_value67 = (void*)0;
right_value68 = (void*)0;
right_value69 = (void*)0;
right_value72 = (void*)0;
memset(&lont_27, 0, sizeof(unsigned long int));
memset(&value2_28, 0, sizeof(int));
right_value73 = (void*)0;
right_value74 = (void*)0;
right_value77 = (void*)0;
memset(&lont_30, 0, sizeof(unsigned long int));
memset(&value_31, 0, sizeof(int));
right_value78 = (void*)0;
right_value79 = (void*)0;
right_value82 = (void*)0;
memset(&value_33, 0, sizeof(unsigned int));
right_value83 = (void*)0;
right_value84 = (void*)0;
right_value87 = (void*)0;
memset(&value_35, 0, sizeof(unsigned long long int));
right_value88 = (void*)0;
right_value89 = (void*)0;
right_value92 = (void*)0;
memset(&value_37, 0, sizeof(unsigned long long int));
right_value93 = (void*)0;
right_value94 = (void*)0;
right_value97 = (void*)0;
memset(&value_39, 0, sizeof(unsigned long long int));
right_value98 = (void*)0;
right_value99 = (void*)0;
right_value102 = (void*)0;
memset(&lont_41, 0, sizeof(unsigned long int));
memset(&value_42, 0, sizeof(int));
right_value103 = (void*)0;
right_value104 = (void*)0;
right_value107 = (void*)0;
    char buf_21[128+1];
    memset(&buf_21, 0, sizeof(char)    *(128+1)    );
    p2_22=buf_21;
    if(minus) {
        *p2_22=45;
        p2_22++;
    }
    if(_if_conditional33=xisdigit(*info->p),    _if_conditional33) {
        while(_while_condtional4=xisdigit(*info->p)||*info->p==95,        _while_condtional4) {
            if(_if_conditional34=*info->p==95,            _if_conditional34) {
                info->p++;
            }
            else {
                *p2_22++=*info->p;
                info->p++;
            }
            if(_if_conditional35=p2_22-buf_21>=buf_size_20,            _if_conditional35) {
                printf("%s %d: overflow node of number\n",info->sname,info->sline);
                exit(5);
            }
        }
        *p2_22=0;
        skip_spaces_and_lf(info);
        c_23=*(info->p+1);
        if(_if_conditional36=*info->p==46&&xisdigit(c_23),        _if_conditional36) {
            *p2_22++=*info->p;
            if(_if_conditional37=p2_22-buf_21>=buf_size_20,            _if_conditional37) {
                printf("%s %d: overflow node of number",info->sname,info->sline);
                exit(11);
            }
            info->p++;
            skip_spaces_and_lf(info);
            while(_while_condtional5=xisdigit(*info->p)||*info->p==95,            _while_condtional5) {
                if(_if_conditional38=*info->p==95,                _if_conditional38) {
                    info->p++;
                }
                else {
                    *p2_22++=*info->p;
                    info->p++;
                }
                if(_if_conditional39=p2_22-buf_21>=buf_size_20,                _if_conditional39) {
                    err_msg(info,"overflow node of number");
                    exit(2);
                }
            }
            if(_if_conditional40=*info->p==101,            _if_conditional40) {
                *p2_22++=*info->p;
                info->p++;
                if(_if_conditional41=p2_22-buf_21>=buf_size_20,                _if_conditional41) {
                    err_msg(info,"overflow node of number");
                    exit(2);
                }
                if(_if_conditional42=*info->p==43,                _if_conditional42) {
                    *p2_22++=*info->p;
                    info->p++;
                    if(_if_conditional43=p2_22-buf_21>=buf_size_20,                    _if_conditional43) {
                        err_msg(info,"overflow node of number");
                        exit(2);
                    }
                }
                else {
                    if(_if_conditional44=*info->p==45,                    _if_conditional44) {
                        *p2_22++=*info->p;
                        info->p++;
                        if(_if_conditional45=p2_22-buf_21>=buf_size_20,                        _if_conditional45) {
                            err_msg(info,"overflow node of number");
                            exit(2);
                        }
                    }
                    else {
                        err_msg(info,"invalid float value");
                        exit(2);
                    }
                }
                while(_while_condtional6=xisdigit(*info->p)||*info->p==95,                _while_condtional6) {
                    if(_if_conditional46=*info->p==95,                    _if_conditional46) {
                        info->p++;
                    }
                    else {
                        *p2_22++=*info->p;
                        info->p++;
                    }
                    if(_if_conditional47=p2_22-buf_21>=buf_size_20,                    _if_conditional47) {
                        err_msg(info,"overflow node of number");
                        exit(2);
                    }
                }
            }
            *p2_22=0;
            skip_spaces_and_lf(info);
            if(_if_conditional48=*info->p==102||*info->p==70,            _if_conditional48) {
                info->p++;
                skip_spaces_and_lf(info);
                _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 426, "struct sNode");
                _inf_obj_value1=come_increment_ref_count(((struct sFloatNode*)(right_value59=sFloatNode_initialize((struct sFloatNode*)come_increment_ref_count(((struct sFloatNode*)(right_value58=(struct sFloatNode*)come_calloc(1, sizeof(struct sFloatNode)*(1), "05function3.c", 426, "struct sFloatNode")))),strtof(buf_21,((void*)0)),info))));
                _inf_value1->_protocol_obj=_inf_obj_value1;
                _inf_value1->finalize=(void*)sFloatNode_finalize;
                _inf_value1->clone=(void*)sFloatNode_clone;
                _inf_value1->compile=(void*)sFloatNode_compile;
                _inf_value1->sline=(void*)sFloatNode_sline;
                _inf_value1->sname=(void*)sFloatNode_sname;
                _inf_value1->terminated=(void*)sFloatNode_terminated;
                _inf_value1->kind=(void*)sFloatNode_kind;
                __result49__ = __result_obj__ = ((struct sNode*)(right_value62=_inf_value1));
                come_call_finalizer2(sFloatNode_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sFloatNode_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value62) { right_value62 = come_decrement_ref_count2(right_value62, ((struct sNode*)right_value62)->finalize, ((struct sNode*)right_value62)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result49__;
            }
            else {
                if(_if_conditional54=*info->p==108||*info->p==76,                _if_conditional54) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 432, "struct sNode");
                    _inf_obj_value2=come_increment_ref_count(((struct sDoubleNode*)(right_value64=sDoubleNode_initialize((struct sDoubleNode*)come_increment_ref_count(((struct sDoubleNode*)(right_value63=(struct sDoubleNode*)come_calloc(1, sizeof(struct sDoubleNode)*(1), "05function3.c", 432, "struct sDoubleNode")))),strtod(buf_21,((void*)0)),info))));
                    _inf_value2->_protocol_obj=_inf_obj_value2;
                    _inf_value2->finalize=(void*)sDoubleNode_finalize;
                    _inf_value2->clone=(void*)sDoubleNode_clone;
                    _inf_value2->compile=(void*)sDoubleNode_compile;
                    _inf_value2->sline=(void*)sDoubleNode_sline;
                    _inf_value2->sname=(void*)sDoubleNode_sname;
                    _inf_value2->terminated=(void*)sDoubleNode_terminated;
                    _inf_value2->kind=(void*)sDoubleNode_kind;
                    __result52__ = __result_obj__ = ((struct sNode*)(right_value67=_inf_value2));
                    come_call_finalizer2(sDoubleNode_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sDoubleNode_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value67) { right_value67 = come_decrement_ref_count2(right_value67, ((struct sNode*)right_value67)->finalize, ((struct sNode*)right_value67)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result52__;
                }
                else {
                    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 435, "struct sNode");
                    _inf_obj_value3=come_increment_ref_count(((struct sDoubleNode*)(right_value69=sDoubleNode_initialize((struct sDoubleNode*)come_increment_ref_count(((struct sDoubleNode*)(right_value68=(struct sDoubleNode*)come_calloc(1, sizeof(struct sDoubleNode)*(1), "05function3.c", 435, "struct sDoubleNode")))),strtod(buf_21,((void*)0)),info))));
                    _inf_value3->_protocol_obj=_inf_obj_value3;
                    _inf_value3->finalize=(void*)sDoubleNode_finalize;
                    _inf_value3->clone=(void*)sDoubleNode_clone;
                    _inf_value3->compile=(void*)sDoubleNode_compile;
                    _inf_value3->sline=(void*)sDoubleNode_sline;
                    _inf_value3->sname=(void*)sDoubleNode_sname;
                    _inf_value3->terminated=(void*)sDoubleNode_terminated;
                    _inf_value3->kind=(void*)sDoubleNode_kind;
                    __result55__ = __result_obj__ = ((struct sNode*)(right_value72=_inf_value3));
                    come_call_finalizer2(sDoubleNode_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sDoubleNode_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value72) { right_value72 = come_decrement_ref_count2(right_value72, ((struct sNode*)right_value72)->finalize, ((struct sNode*)right_value72)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result55__;
                }
            }
        }
        else {
            if(_if_conditional65=*info->p==117||*info->p==85,            _if_conditional65) {
                info->p++;
                skip_spaces_and_lf(info);
                if(_if_conditional66=*info->p==76||*info->p==108,                _if_conditional66) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(_if_conditional67=*info->p==76||*info->p==108,                    _if_conditional67) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        value2_28=strtoull(buf_21,((void*)0),0);
                        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 455, "struct sNode");
                        _inf_obj_value4=come_increment_ref_count(((struct sULongNode*)(right_value74=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value73=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 455, "struct sULongNode")))),value2_28,info))));
                        _inf_value4->_protocol_obj=_inf_obj_value4;
                        _inf_value4->finalize=(void*)sULongNode_finalize;
                        _inf_value4->clone=(void*)sULongNode_clone;
                        _inf_value4->compile=(void*)sULongNode_compile;
                        _inf_value4->sline=(void*)sULongNode_sline;
                        _inf_value4->sname=(void*)sULongNode_sname;
                        _inf_value4->terminated=(void*)sULongNode_terminated;
                        _inf_value4->kind=(void*)sULongNode_kind;
                        __result58__ = __result_obj__ = ((struct sNode*)(right_value77=_inf_value4));
                        come_call_finalizer2(sULongNode_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sULongNode_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value77) { right_value77 = come_decrement_ref_count2(right_value77, ((struct sNode*)right_value77)->finalize, ((struct sNode*)right_value77)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result58__;
                    }
                    else {
                        value_31=strtoull(buf_21,((void*)0),0);
                        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 459, "struct sNode");
                        _inf_obj_value5=come_increment_ref_count(((struct sULongNode*)(right_value79=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value78=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 459, "struct sULongNode")))),value_31,info))));
                        _inf_value5->_protocol_obj=_inf_obj_value5;
                        _inf_value5->finalize=(void*)sULongNode_finalize;
                        _inf_value5->clone=(void*)sULongNode_clone;
                        _inf_value5->compile=(void*)sULongNode_compile;
                        _inf_value5->sline=(void*)sULongNode_sline;
                        _inf_value5->sname=(void*)sULongNode_sname;
                        _inf_value5->terminated=(void*)sULongNode_terminated;
                        _inf_value5->kind=(void*)sULongNode_kind;
                        __result61__ = __result_obj__ = ((struct sNode*)(right_value82=_inf_value5));
                        come_call_finalizer2(sULongNode_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sULongNode_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value82) { right_value82 = come_decrement_ref_count2(right_value82, ((struct sNode*)right_value82)->finalize, ((struct sNode*)right_value82)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result61__;
                    }
                }
                else {
                    value_33=strtoul(buf_21,((void*)0),0);
                    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 464, "struct sNode");
                    _inf_obj_value6=come_increment_ref_count(((struct sUIntNode*)(right_value84=sUIntNode_initialize((struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(right_value83=(struct sUIntNode*)come_calloc(1, sizeof(struct sUIntNode)*(1), "05function3.c", 464, "struct sUIntNode")))),value_33,info))));
                    _inf_value6->_protocol_obj=_inf_obj_value6;
                    _inf_value6->finalize=(void*)sUIntNode_finalize;
                    _inf_value6->clone=(void*)sUIntNode_clone;
                    _inf_value6->compile=(void*)sUIntNode_compile;
                    _inf_value6->sline=(void*)sUIntNode_sline;
                    _inf_value6->sname=(void*)sUIntNode_sname;
                    _inf_value6->terminated=(void*)sUIntNode_terminated;
                    _inf_value6->kind=(void*)sUIntNode_kind;
                    __result64__ = __result_obj__ = ((struct sNode*)(right_value87=_inf_value6));
                    come_call_finalizer2(sUIntNode_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sUIntNode_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value87) { right_value87 = come_decrement_ref_count2(right_value87, ((struct sNode*)right_value87)->finalize, ((struct sNode*)right_value87)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result64__;
                }
            }
            else {
                if(_if_conditional83=*info->p==76||*info->p==108,                _if_conditional83) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(_if_conditional84=*info->p==76||*info->p==108,                    _if_conditional84) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        value_35=strtoull(buf_21,((void*)0),0);
                        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 478, "struct sNode");
                        _inf_obj_value7=come_increment_ref_count(((struct sLongNode*)(right_value89=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value88=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05function3.c", 478, "struct sLongNode")))),value_35,info))));
                        _inf_value7->_protocol_obj=_inf_obj_value7;
                        _inf_value7->finalize=(void*)sLongNode_finalize;
                        _inf_value7->clone=(void*)sLongNode_clone;
                        _inf_value7->compile=(void*)sLongNode_compile;
                        _inf_value7->sline=(void*)sLongNode_sline;
                        _inf_value7->sname=(void*)sLongNode_sname;
                        _inf_value7->terminated=(void*)sLongNode_terminated;
                        _inf_value7->kind=(void*)sLongNode_kind;
                        __result67__ = __result_obj__ = ((struct sNode*)(right_value92=_inf_value7));
                        come_call_finalizer2(sLongNode_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sLongNode_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value92) { right_value92 = come_decrement_ref_count2(right_value92, ((struct sNode*)right_value92)->finalize, ((struct sNode*)right_value92)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result67__;
                    }
                    else {
                        if(_if_conditional90=*info->p==85||*info->p==117,                        _if_conditional90) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            value_37=strtoull(buf_21,((void*)0),0);
                            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 487, "struct sNode");
                            _inf_obj_value8=come_increment_ref_count(((struct sULongNode*)(right_value94=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value93=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 487, "struct sULongNode")))),value_37,info))));
                            _inf_value8->_protocol_obj=_inf_obj_value8;
                            _inf_value8->finalize=(void*)sULongNode_finalize;
                            _inf_value8->clone=(void*)sULongNode_clone;
                            _inf_value8->compile=(void*)sULongNode_compile;
                            _inf_value8->sline=(void*)sULongNode_sline;
                            _inf_value8->sname=(void*)sULongNode_sname;
                            _inf_value8->terminated=(void*)sULongNode_terminated;
                            _inf_value8->kind=(void*)sULongNode_kind;
                            __result70__ = __result_obj__ = ((struct sNode*)(right_value97=_inf_value8));
                            come_call_finalizer2(sULongNode_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sULongNode_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value97) { right_value97 = come_decrement_ref_count2(right_value97, ((struct sNode*)right_value97)->finalize, ((struct sNode*)right_value97)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result70__;
                        }
                        else {
                            value_39=strtoull(buf_21,((void*)0),0);
                            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 491, "struct sNode");
                            _inf_obj_value9=come_increment_ref_count(((struct sLongNode*)(right_value99=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value98=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05function3.c", 491, "struct sLongNode")))),value_39,info))));
                            _inf_value9->_protocol_obj=_inf_obj_value9;
                            _inf_value9->finalize=(void*)sLongNode_finalize;
                            _inf_value9->clone=(void*)sLongNode_clone;
                            _inf_value9->compile=(void*)sLongNode_compile;
                            _inf_value9->sline=(void*)sLongNode_sline;
                            _inf_value9->sname=(void*)sLongNode_sname;
                            _inf_value9->terminated=(void*)sLongNode_terminated;
                            _inf_value9->kind=(void*)sLongNode_kind;
                            __result73__ = __result_obj__ = ((struct sNode*)(right_value102=_inf_value9));
                            come_call_finalizer2(sLongNode_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sLongNode_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value102) { right_value102 = come_decrement_ref_count2(right_value102, ((struct sNode*)right_value102)->finalize, ((struct sNode*)right_value102)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result73__;
                        }
                    }
                }
                else {
                    value_42=strtoll(buf_21,((void*)0),0);
                    _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 496, "struct sNode");
                    _inf_obj_value10=come_increment_ref_count(((struct sIntNode*)(right_value104=sIntNode_initialize((struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value103=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "05function3.c", 496, "struct sIntNode")))),value_42,info))));
                    _inf_value10->_protocol_obj=_inf_obj_value10;
                    _inf_value10->finalize=(void*)sIntNode_finalize;
                    _inf_value10->clone=(void*)sIntNode_clone;
                    _inf_value10->compile=(void*)sIntNode_compile;
                    _inf_value10->sline=(void*)sIntNode_sline;
                    _inf_value10->sname=(void*)sIntNode_sname;
                    _inf_value10->terminated=(void*)sIntNode_terminated;
                    _inf_value10->kind=(void*)sIntNode_kind;
                    __result76__ = __result_obj__ = ((struct sNode*)(right_value107=_inf_value10));
                    come_call_finalizer2(sIntNode_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sIntNode_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value107) { right_value107 = come_decrement_ref_count2(right_value107, ((struct sNode*)right_value107)->finalize, ((struct sNode*)right_value107)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result76__;
                }
            }
        }
    }
    else {
        err_msg(info,"require digits after + or -");
        exit(2);
    }
    __result77__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result77__;
}

static void sFloatNode_finalize(struct sFloatNode* self){
void* __result_obj__;
_Bool _if_conditional49;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional49=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional49) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sFloatNode* sFloatNode_clone(struct sFloatNode* self){
void* __result_obj__;
_Bool _if_conditional50;
struct sFloatNode* __result47__;
void* right_value60;
struct sFloatNode* result_24;
_Bool _if_conditional51;
_Bool _if_conditional52;
_Bool _if_conditional53;
void* right_value61;
char* __dec_obj27;
struct sFloatNode* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
right_value60 = (void*)0;
memset(&result_24, 0, sizeof(struct sFloatNode*));
right_value61 = (void*)0;
                    if(_if_conditional50=self==(void*)0,                    _if_conditional50) {
                        __result47__ = __result_obj__ = (void*)0;
                        return __result47__;
                    }
                    result_24=(struct sFloatNode*)come_increment_ref_count(((struct sFloatNode*)(right_value60=(struct sFloatNode*)come_calloc(1, sizeof(struct sFloatNode)*(1), "sFloatNode_clone", 3, "struct sFloatNode"))));
                    come_call_finalizer2(sFloatNode_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional51=self!=((void*)0),                    _if_conditional51) {
                        result_24->value=self->value;
                    }
                    if(_if_conditional52=self!=((void*)0),                    _if_conditional52) {
                        result_24->sline=self->sline;
                    }
                    if(_if_conditional53=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional53) {
                        __dec_obj27=result_24->sname;
                        result_24->sname=(char*)come_increment_ref_count(((char*)(right_value61=string_clone(self->sname))));
                        __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value61 = come_decrement_ref_count2(right_value61, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    __result48__ = __result_obj__ = result_24;
                    come_call_finalizer2(sFloatNode_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result48__;
                    come_call_finalizer2(sFloatNode_finalize,result_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sDoubleNode_finalize(struct sDoubleNode* self){
void* __result_obj__;
_Bool _if_conditional60;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional60=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional60) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sDoubleNode* sDoubleNode_clone(struct sDoubleNode* self){
void* __result_obj__;
_Bool _if_conditional61;
struct sDoubleNode* __result53__;
void* right_value70;
struct sDoubleNode* result_26;
_Bool _if_conditional62;
_Bool _if_conditional63;
_Bool _if_conditional64;
void* right_value71;
char* __dec_obj29;
struct sDoubleNode* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value70 = (void*)0;
memset(&result_26, 0, sizeof(struct sDoubleNode*));
right_value71 = (void*)0;
                        if(_if_conditional61=self==(void*)0,                        _if_conditional61) {
                            __result53__ = __result_obj__ = (void*)0;
                            return __result53__;
                        }
                        result_26=(struct sDoubleNode*)come_increment_ref_count(((struct sDoubleNode*)(right_value70=(struct sDoubleNode*)come_calloc(1, sizeof(struct sDoubleNode)*(1), "sDoubleNode_clone", 3, "struct sDoubleNode"))));
                        come_call_finalizer2(sDoubleNode_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional62=self!=((void*)0),                        _if_conditional62) {
                            result_26->value=self->value;
                        }
                        if(_if_conditional63=self!=((void*)0),                        _if_conditional63) {
                            result_26->sline=self->sline;
                        }
                        if(_if_conditional64=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional64) {
                            __dec_obj29=result_26->sname;
                            result_26->sname=(char*)come_increment_ref_count(((char*)(right_value71=string_clone(self->sname))));
                            __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value71 = come_decrement_ref_count2(right_value71, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        __result54__ = __result_obj__ = result_26;
                        come_call_finalizer2(sDoubleNode_finalize,result_26, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result54__;
                        come_call_finalizer2(sDoubleNode_finalize,result_26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* create_int_node(int value, struct sInfo* info){
void* __result_obj__;
void* right_value108;
void* right_value109;
struct sNode* _inf_value11;
struct sIntNode* _inf_obj_value11;
void* right_value112;
struct sNode* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
right_value108 = (void*)0;
right_value109 = (void*)0;
right_value112 = (void*)0;
    _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 509, "struct sNode");
    _inf_obj_value11=come_increment_ref_count(((struct sIntNode*)(right_value109=sIntNode_initialize((struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value108=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "05function3.c", 509, "struct sIntNode")))),value,info))));
    _inf_value11->_protocol_obj=_inf_obj_value11;
    _inf_value11->finalize=(void*)sIntNode_finalize;
    _inf_value11->clone=(void*)sIntNode_clone;
    _inf_value11->compile=(void*)sIntNode_compile;
    _inf_value11->sline=(void*)sIntNode_sline;
    _inf_value11->sname=(void*)sIntNode_sname;
    _inf_value11->terminated=(void*)sIntNode_terminated;
    _inf_value11->kind=(void*)sIntNode_kind;
    __result80__ = __result_obj__ = ((struct sNode*)(right_value112=_inf_value11));
    come_call_finalizer2(sIntNode_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sIntNode_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value112) { right_value112 = come_decrement_ref_count2(right_value112, ((struct sNode*)right_value112)->finalize, ((struct sNode*)right_value112)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result80__;
}

struct sNode* get_hex_number(_Bool minus, struct sInfo* info){
void* __result_obj__;
int buf_size_45;
char* p_47;
_Bool _while_condtional7;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
unsigned long long int value_48;
_Bool _if_conditional116;
void* right_value113;
void* right_value114;
struct sNode* _inf_value12;
struct sULongNode* _inf_obj_value12;
void* right_value117;
struct sNode* __result83__;
void* right_value118;
void* right_value119;
struct sNode* _inf_value13;
struct sULongNode* _inf_obj_value13;
void* right_value122;
struct sNode* __result86__;
unsigned long long int value_51;
_Bool _if_conditional127;
void* right_value123;
void* right_value124;
struct sNode* _inf_value14;
struct sULongNode* _inf_obj_value14;
void* right_value127;
struct sNode* __result89__;
void* right_value128;
void* right_value129;
struct sNode* _inf_value15;
struct sULongNode* _inf_obj_value15;
void* right_value132;
struct sNode* __result92__;
unsigned int value_54;
_Bool _if_conditional138;
void* right_value133;
void* right_value134;
struct sNode* _inf_value16;
struct sUIntNode* _inf_obj_value16;
void* right_value137;
struct sNode* __result95__;
void* right_value138;
void* right_value139;
struct sNode* _inf_value17;
struct sUIntNode* _inf_obj_value17;
void* right_value142;
struct sNode* __result98__;
_Bool _if_conditional149;
_Bool _if_conditional150;
unsigned long long int value_57;
_Bool _if_conditional151;
void* right_value143;
void* right_value144;
struct sNode* _inf_value18;
struct sLongNode* _inf_obj_value18;
void* right_value147;
struct sNode* __result101__;
void* right_value148;
void* right_value149;
struct sNode* _inf_value19;
struct sLongNode* _inf_obj_value19;
void* right_value152;
struct sNode* __result104__;
_Bool _if_conditional162;
unsigned long long int value_60;
_Bool _if_conditional163;
void* right_value153;
void* right_value154;
struct sNode* _inf_value20;
struct sULongNode* _inf_obj_value20;
void* right_value157;
struct sNode* __result107__;
void* right_value158;
void* right_value159;
struct sNode* _inf_value21;
struct sULongNode* _inf_obj_value21;
void* right_value162;
struct sNode* __result110__;
unsigned long long int value_63;
_Bool _if_conditional174;
void* right_value163;
void* right_value164;
struct sNode* _inf_value22;
struct sLongNode* _inf_obj_value22;
void* right_value167;
struct sNode* __result113__;
void* right_value168;
void* right_value169;
struct sNode* _inf_value23;
struct sLongNode* _inf_obj_value23;
void* right_value172;
struct sNode* __result116__;
unsigned long long int value_66;
_Bool _if_conditional185;
void* right_value173;
void* right_value174;
struct sNode* _inf_value24;
struct sIntNode* _inf_obj_value24;
void* right_value177;
struct sNode* __result119__;
void* right_value178;
void* right_value179;
struct sNode* _inf_value25;
struct sIntNode* _inf_obj_value25;
void* right_value182;
struct sNode* __result122__;
struct sNode* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&buf_size_45, 0, sizeof(int));
memset(&p_47, 0, sizeof(char*));
memset(&value_48, 0, sizeof(unsigned long long int));
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value117 = (void*)0;
right_value118 = (void*)0;
right_value119 = (void*)0;
right_value122 = (void*)0;
memset(&value_51, 0, sizeof(unsigned long long int));
right_value123 = (void*)0;
right_value124 = (void*)0;
right_value127 = (void*)0;
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value132 = (void*)0;
memset(&value_54, 0, sizeof(unsigned int));
right_value133 = (void*)0;
right_value134 = (void*)0;
right_value137 = (void*)0;
right_value138 = (void*)0;
right_value139 = (void*)0;
right_value142 = (void*)0;
memset(&value_57, 0, sizeof(unsigned long long int));
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value147 = (void*)0;
right_value148 = (void*)0;
right_value149 = (void*)0;
right_value152 = (void*)0;
memset(&value_60, 0, sizeof(unsigned long long int));
right_value153 = (void*)0;
right_value154 = (void*)0;
right_value157 = (void*)0;
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value162 = (void*)0;
memset(&value_63, 0, sizeof(unsigned long long int));
right_value163 = (void*)0;
right_value164 = (void*)0;
right_value167 = (void*)0;
right_value168 = (void*)0;
right_value169 = (void*)0;
right_value172 = (void*)0;
memset(&value_66, 0, sizeof(unsigned long long int));
right_value173 = (void*)0;
right_value174 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
right_value182 = (void*)0;
    buf_size_45=128;
    char buf_46[128+1];
    memset(&buf_46, 0, sizeof(char)    *(128+1)    );
    p_47=buf_46;
    *p_47++=48;
    *p_47++=120;
    while(_while_condtional7=(*info->p>=48&&*info->p<=57)||(*info->p>=97&&*info->p<=102)||(*info->p>=65&&*info->p<=70)||*info->p==95,    _while_condtional7) {
        if(_if_conditional111=*info->p==95,        _if_conditional111) {
            info->p++;
        }
        else {
            *p_47++=*info->p;
            info->p++;
        }
        if(_if_conditional112=p_47-buf_46>=buf_size_45-1,        _if_conditional112) {
            err_msg(info,"overflow node of number");
            exit(2);
        }
    }
    *p_47=0;
    skip_spaces_and_lf(info);
    if(_if_conditional113=*info->p==117||*info->p==85,    _if_conditional113) {
        info->p++;
        skip_spaces_and_lf(info);
        if(_if_conditional114=*info->p==76||*info->p==108,        _if_conditional114) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional115=*info->p==76||*info->p==108,            _if_conditional115) {
                info->p++;
                skip_spaces_and_lf(info);
                value_48=strtoull(buf_46,((void*)0),0);
                if(minus) {
                    _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 557, "struct sNode");
                    _inf_obj_value12=come_increment_ref_count(((struct sULongNode*)(right_value114=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value113=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 557, "struct sULongNode")))),-value_48,info))));
                    _inf_value12->_protocol_obj=_inf_obj_value12;
                    _inf_value12->finalize=(void*)sULongNode_finalize;
                    _inf_value12->clone=(void*)sULongNode_clone;
                    _inf_value12->compile=(void*)sULongNode_compile;
                    _inf_value12->sline=(void*)sULongNode_sline;
                    _inf_value12->sname=(void*)sULongNode_sname;
                    _inf_value12->terminated=(void*)sULongNode_terminated;
                    _inf_value12->kind=(void*)sULongNode_kind;
                    __result83__ = __result_obj__ = ((struct sNode*)(right_value117=_inf_value12));
                    come_call_finalizer2(sULongNode_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sULongNode_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value117) { right_value117 = come_decrement_ref_count2(right_value117, ((struct sNode*)right_value117)->finalize, ((struct sNode*)right_value117)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result83__;
                }
                else {
                    _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 560, "struct sNode");
                    _inf_obj_value13=come_increment_ref_count(((struct sULongNode*)(right_value119=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value118=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 560, "struct sULongNode")))),value_48,info))));
                    _inf_value13->_protocol_obj=_inf_obj_value13;
                    _inf_value13->finalize=(void*)sULongNode_finalize;
                    _inf_value13->clone=(void*)sULongNode_clone;
                    _inf_value13->compile=(void*)sULongNode_compile;
                    _inf_value13->sline=(void*)sULongNode_sline;
                    _inf_value13->sname=(void*)sULongNode_sname;
                    _inf_value13->terminated=(void*)sULongNode_terminated;
                    _inf_value13->kind=(void*)sULongNode_kind;
                    __result86__ = __result_obj__ = ((struct sNode*)(right_value122=_inf_value13));
                    come_call_finalizer2(sULongNode_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sULongNode_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value122) { right_value122 = come_decrement_ref_count2(right_value122, ((struct sNode*)right_value122)->finalize, ((struct sNode*)right_value122)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result86__;
                }
            }
            else {
                value_51=strtoull(buf_46,((void*)0),0);
                if(minus) {
                    _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 567, "struct sNode");
                    _inf_obj_value14=come_increment_ref_count(((struct sULongNode*)(right_value124=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value123=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 567, "struct sULongNode")))),-value_51,info))));
                    _inf_value14->_protocol_obj=_inf_obj_value14;
                    _inf_value14->finalize=(void*)sULongNode_finalize;
                    _inf_value14->clone=(void*)sULongNode_clone;
                    _inf_value14->compile=(void*)sULongNode_compile;
                    _inf_value14->sline=(void*)sULongNode_sline;
                    _inf_value14->sname=(void*)sULongNode_sname;
                    _inf_value14->terminated=(void*)sULongNode_terminated;
                    _inf_value14->kind=(void*)sULongNode_kind;
                    __result89__ = __result_obj__ = ((struct sNode*)(right_value127=_inf_value14));
                    come_call_finalizer2(sULongNode_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sULongNode_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value127) { right_value127 = come_decrement_ref_count2(right_value127, ((struct sNode*)right_value127)->finalize, ((struct sNode*)right_value127)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result89__;
                }
                else {
                    _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 570, "struct sNode");
                    _inf_obj_value15=come_increment_ref_count(((struct sULongNode*)(right_value129=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value128=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 570, "struct sULongNode")))),value_51,info))));
                    _inf_value15->_protocol_obj=_inf_obj_value15;
                    _inf_value15->finalize=(void*)sULongNode_finalize;
                    _inf_value15->clone=(void*)sULongNode_clone;
                    _inf_value15->compile=(void*)sULongNode_compile;
                    _inf_value15->sline=(void*)sULongNode_sline;
                    _inf_value15->sname=(void*)sULongNode_sname;
                    _inf_value15->terminated=(void*)sULongNode_terminated;
                    _inf_value15->kind=(void*)sULongNode_kind;
                    __result92__ = __result_obj__ = ((struct sNode*)(right_value132=_inf_value15));
                    come_call_finalizer2(sULongNode_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sULongNode_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value132) { right_value132 = come_decrement_ref_count2(right_value132, ((struct sNode*)right_value132)->finalize, ((struct sNode*)right_value132)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result92__;
                }
            }
        }
        else {
            value_54=strtoull(buf_46,((void*)0),0);
            if(minus) {
                _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 578, "struct sNode");
                _inf_obj_value16=come_increment_ref_count(((struct sUIntNode*)(right_value134=sUIntNode_initialize((struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(right_value133=(struct sUIntNode*)come_calloc(1, sizeof(struct sUIntNode)*(1), "05function3.c", 578, "struct sUIntNode")))),-value_54,info))));
                _inf_value16->_protocol_obj=_inf_obj_value16;
                _inf_value16->finalize=(void*)sUIntNode_finalize;
                _inf_value16->clone=(void*)sUIntNode_clone;
                _inf_value16->compile=(void*)sUIntNode_compile;
                _inf_value16->sline=(void*)sUIntNode_sline;
                _inf_value16->sname=(void*)sUIntNode_sname;
                _inf_value16->terminated=(void*)sUIntNode_terminated;
                _inf_value16->kind=(void*)sUIntNode_kind;
                __result95__ = __result_obj__ = ((struct sNode*)(right_value137=_inf_value16));
                come_call_finalizer2(sUIntNode_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sUIntNode_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value137) { right_value137 = come_decrement_ref_count2(right_value137, ((struct sNode*)right_value137)->finalize, ((struct sNode*)right_value137)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result95__;
            }
            else {
                _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 581, "struct sNode");
                _inf_obj_value17=come_increment_ref_count(((struct sUIntNode*)(right_value139=sUIntNode_initialize((struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(right_value138=(struct sUIntNode*)come_calloc(1, sizeof(struct sUIntNode)*(1), "05function3.c", 581, "struct sUIntNode")))),value_54,info))));
                _inf_value17->_protocol_obj=_inf_obj_value17;
                _inf_value17->finalize=(void*)sUIntNode_finalize;
                _inf_value17->clone=(void*)sUIntNode_clone;
                _inf_value17->compile=(void*)sUIntNode_compile;
                _inf_value17->sline=(void*)sUIntNode_sline;
                _inf_value17->sname=(void*)sUIntNode_sname;
                _inf_value17->terminated=(void*)sUIntNode_terminated;
                _inf_value17->kind=(void*)sUIntNode_kind;
                __result98__ = __result_obj__ = ((struct sNode*)(right_value142=_inf_value17));
                come_call_finalizer2(sUIntNode_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sUIntNode_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value142) { right_value142 = come_decrement_ref_count2(right_value142, ((struct sNode*)right_value142)->finalize, ((struct sNode*)right_value142)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result98__;
            }
        }
    }
    else {
        if(_if_conditional149=*info->p==76||*info->p==108,        _if_conditional149) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional150=*info->p==76||*info->p==108,            _if_conditional150) {
                info->p++;
                skip_spaces_and_lf(info);
                value_57=strtoull(buf_46,((void*)0),0);
                if(minus) {
                    _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 596, "struct sNode");
                    _inf_obj_value18=come_increment_ref_count(((struct sLongNode*)(right_value144=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value143=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05function3.c", 596, "struct sLongNode")))),-value_57,info))));
                    _inf_value18->_protocol_obj=_inf_obj_value18;
                    _inf_value18->finalize=(void*)sLongNode_finalize;
                    _inf_value18->clone=(void*)sLongNode_clone;
                    _inf_value18->compile=(void*)sLongNode_compile;
                    _inf_value18->sline=(void*)sLongNode_sline;
                    _inf_value18->sname=(void*)sLongNode_sname;
                    _inf_value18->terminated=(void*)sLongNode_terminated;
                    _inf_value18->kind=(void*)sLongNode_kind;
                    __result101__ = __result_obj__ = ((struct sNode*)(right_value147=_inf_value18));
                    come_call_finalizer2(sLongNode_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sLongNode_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value147) { right_value147 = come_decrement_ref_count2(right_value147, ((struct sNode*)right_value147)->finalize, ((struct sNode*)right_value147)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result101__;
                }
                else {
                    _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 599, "struct sNode");
                    _inf_obj_value19=come_increment_ref_count(((struct sLongNode*)(right_value149=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value148=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05function3.c", 599, "struct sLongNode")))),value_57,info))));
                    _inf_value19->_protocol_obj=_inf_obj_value19;
                    _inf_value19->finalize=(void*)sLongNode_finalize;
                    _inf_value19->clone=(void*)sLongNode_clone;
                    _inf_value19->compile=(void*)sLongNode_compile;
                    _inf_value19->sline=(void*)sLongNode_sline;
                    _inf_value19->sname=(void*)sLongNode_sname;
                    _inf_value19->terminated=(void*)sLongNode_terminated;
                    _inf_value19->kind=(void*)sLongNode_kind;
                    __result104__ = __result_obj__ = ((struct sNode*)(right_value152=_inf_value19));
                    come_call_finalizer2(sLongNode_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sLongNode_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value152) { right_value152 = come_decrement_ref_count2(right_value152, ((struct sNode*)right_value152)->finalize, ((struct sNode*)right_value152)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result104__;
                }
            }
            else {
                if(_if_conditional162=*info->p==85||*info->p==117,                _if_conditional162) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    value_60=strtoull(buf_46,((void*)0),0);
                    if(minus) {
                        _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 609, "struct sNode");
                        _inf_obj_value20=come_increment_ref_count(((struct sULongNode*)(right_value154=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value153=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 609, "struct sULongNode")))),-value_60,info))));
                        _inf_value20->_protocol_obj=_inf_obj_value20;
                        _inf_value20->finalize=(void*)sULongNode_finalize;
                        _inf_value20->clone=(void*)sULongNode_clone;
                        _inf_value20->compile=(void*)sULongNode_compile;
                        _inf_value20->sline=(void*)sULongNode_sline;
                        _inf_value20->sname=(void*)sULongNode_sname;
                        _inf_value20->terminated=(void*)sULongNode_terminated;
                        _inf_value20->kind=(void*)sULongNode_kind;
                        __result107__ = __result_obj__ = ((struct sNode*)(right_value157=_inf_value20));
                        come_call_finalizer2(sULongNode_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sULongNode_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value157) { right_value157 = come_decrement_ref_count2(right_value157, ((struct sNode*)right_value157)->finalize, ((struct sNode*)right_value157)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result107__;
                    }
                    else {
                        _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 612, "struct sNode");
                        _inf_obj_value21=come_increment_ref_count(((struct sULongNode*)(right_value159=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value158=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 612, "struct sULongNode")))),value_60,info))));
                        _inf_value21->_protocol_obj=_inf_obj_value21;
                        _inf_value21->finalize=(void*)sULongNode_finalize;
                        _inf_value21->clone=(void*)sULongNode_clone;
                        _inf_value21->compile=(void*)sULongNode_compile;
                        _inf_value21->sline=(void*)sULongNode_sline;
                        _inf_value21->sname=(void*)sULongNode_sname;
                        _inf_value21->terminated=(void*)sULongNode_terminated;
                        _inf_value21->kind=(void*)sULongNode_kind;
                        __result110__ = __result_obj__ = ((struct sNode*)(right_value162=_inf_value21));
                        come_call_finalizer2(sULongNode_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sULongNode_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value162) { right_value162 = come_decrement_ref_count2(right_value162, ((struct sNode*)right_value162)->finalize, ((struct sNode*)right_value162)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result110__;
                    }
                }
                else {
                    value_63=strtoull(buf_46,((void*)0),0);
                    if(minus) {
                        _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 618, "struct sNode");
                        _inf_obj_value22=come_increment_ref_count(((struct sLongNode*)(right_value164=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value163=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05function3.c", 618, "struct sLongNode")))),-value_63,info))));
                        _inf_value22->_protocol_obj=_inf_obj_value22;
                        _inf_value22->finalize=(void*)sLongNode_finalize;
                        _inf_value22->clone=(void*)sLongNode_clone;
                        _inf_value22->compile=(void*)sLongNode_compile;
                        _inf_value22->sline=(void*)sLongNode_sline;
                        _inf_value22->sname=(void*)sLongNode_sname;
                        _inf_value22->terminated=(void*)sLongNode_terminated;
                        _inf_value22->kind=(void*)sLongNode_kind;
                        __result113__ = __result_obj__ = ((struct sNode*)(right_value167=_inf_value22));
                        come_call_finalizer2(sLongNode_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sLongNode_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value167) { right_value167 = come_decrement_ref_count2(right_value167, ((struct sNode*)right_value167)->finalize, ((struct sNode*)right_value167)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result113__;
                    }
                    else {
                        _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 621, "struct sNode");
                        _inf_obj_value23=come_increment_ref_count(((struct sLongNode*)(right_value169=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value168=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05function3.c", 621, "struct sLongNode")))),value_63,info))));
                        _inf_value23->_protocol_obj=_inf_obj_value23;
                        _inf_value23->finalize=(void*)sLongNode_finalize;
                        _inf_value23->clone=(void*)sLongNode_clone;
                        _inf_value23->compile=(void*)sLongNode_compile;
                        _inf_value23->sline=(void*)sLongNode_sline;
                        _inf_value23->sname=(void*)sLongNode_sname;
                        _inf_value23->terminated=(void*)sLongNode_terminated;
                        _inf_value23->kind=(void*)sLongNode_kind;
                        __result116__ = __result_obj__ = ((struct sNode*)(right_value172=_inf_value23));
                        come_call_finalizer2(sLongNode_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sLongNode_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value172) { right_value172 = come_decrement_ref_count2(right_value172, ((struct sNode*)right_value172)->finalize, ((struct sNode*)right_value172)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result116__;
                    }
                }
            }
        }
        else {
            value_66=strtoll(buf_46,((void*)0),0);
            if(minus) {
                _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 628, "struct sNode");
                _inf_obj_value24=come_increment_ref_count(((struct sIntNode*)(right_value174=sIntNode_initialize((struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value173=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "05function3.c", 628, "struct sIntNode")))),-value_66,info))));
                _inf_value24->_protocol_obj=_inf_obj_value24;
                _inf_value24->finalize=(void*)sIntNode_finalize;
                _inf_value24->clone=(void*)sIntNode_clone;
                _inf_value24->compile=(void*)sIntNode_compile;
                _inf_value24->sline=(void*)sIntNode_sline;
                _inf_value24->sname=(void*)sIntNode_sname;
                _inf_value24->terminated=(void*)sIntNode_terminated;
                _inf_value24->kind=(void*)sIntNode_kind;
                __result119__ = __result_obj__ = ((struct sNode*)(right_value177=_inf_value24));
                come_call_finalizer2(sIntNode_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sIntNode_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value177) { right_value177 = come_decrement_ref_count2(right_value177, ((struct sNode*)right_value177)->finalize, ((struct sNode*)right_value177)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result119__;
            }
            else {
                _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 631, "struct sNode");
                _inf_obj_value25=come_increment_ref_count(((struct sIntNode*)(right_value179=sIntNode_initialize((struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value178=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "05function3.c", 631, "struct sIntNode")))),value_66,info))));
                _inf_value25->_protocol_obj=_inf_obj_value25;
                _inf_value25->finalize=(void*)sIntNode_finalize;
                _inf_value25->clone=(void*)sIntNode_clone;
                _inf_value25->compile=(void*)sIntNode_compile;
                _inf_value25->sline=(void*)sIntNode_sline;
                _inf_value25->sname=(void*)sIntNode_sname;
                _inf_value25->terminated=(void*)sIntNode_terminated;
                _inf_value25->kind=(void*)sIntNode_kind;
                __result122__ = __result_obj__ = ((struct sNode*)(right_value182=_inf_value25));
                come_call_finalizer2(sIntNode_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sIntNode_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value182) { right_value182 = come_decrement_ref_count2(right_value182, ((struct sNode*)right_value182)->finalize, ((struct sNode*)right_value182)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result122__;
            }
        }
    }
    __result123__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result123__;
}

struct sNode* get_oct_number(struct sInfo* info){
void* __result_obj__;
int buf_size_69;
char* p_71;
_Bool _while_condtional8;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
unsigned long long int value_72;
void* right_value183;
void* right_value184;
struct sNode* _inf_value26;
struct sULongNode* _inf_obj_value26;
void* right_value187;
struct sNode* __result126__;
unsigned long long int value_74;
void* right_value188;
void* right_value189;
struct sNode* _inf_value27;
struct sULongNode* _inf_obj_value27;
void* right_value192;
struct sNode* __result129__;
unsigned int value_76;
void* right_value193;
void* right_value194;
struct sNode* _inf_value28;
struct sUIntNode* _inf_obj_value28;
void* right_value197;
struct sNode* __result132__;
_Bool _if_conditional216;
_Bool _if_conditional217;
unsigned long long int value_78;
void* right_value198;
void* right_value199;
struct sNode* _inf_value29;
struct sLongNode* _inf_obj_value29;
void* right_value202;
struct sNode* __result135__;
_Bool _if_conditional223;
unsigned long long int value_80;
void* right_value203;
void* right_value204;
struct sNode* _inf_value30;
struct sULongNode* _inf_obj_value30;
void* right_value207;
struct sNode* __result138__;
unsigned long long int value_82;
void* right_value208;
void* right_value209;
struct sNode* _inf_value31;
struct sLongNode* _inf_obj_value31;
void* right_value212;
struct sNode* __result141__;
unsigned long long int value_84;
void* right_value213;
void* right_value214;
struct sNode* _inf_value32;
struct sIntNode* _inf_obj_value32;
void* right_value217;
struct sNode* __result144__;
struct sNode* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&buf_size_69, 0, sizeof(int));
memset(&p_71, 0, sizeof(char*));
memset(&value_72, 0, sizeof(unsigned long long int));
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value187 = (void*)0;
memset(&value_74, 0, sizeof(unsigned long long int));
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value192 = (void*)0;
memset(&value_76, 0, sizeof(unsigned int));
right_value193 = (void*)0;
right_value194 = (void*)0;
right_value197 = (void*)0;
memset(&value_78, 0, sizeof(unsigned long long int));
right_value198 = (void*)0;
right_value199 = (void*)0;
right_value202 = (void*)0;
memset(&value_80, 0, sizeof(unsigned long long int));
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value207 = (void*)0;
memset(&value_82, 0, sizeof(unsigned long long int));
right_value208 = (void*)0;
right_value209 = (void*)0;
right_value212 = (void*)0;
memset(&value_84, 0, sizeof(unsigned long long int));
right_value213 = (void*)0;
right_value214 = (void*)0;
right_value217 = (void*)0;
    buf_size_69=128;
    char buf_70[128+1];
    memset(&buf_70, 0, sizeof(char)    *(128+1)    );
    p_71=buf_70;
    *p_71++=48;
    while(_while_condtional8=(*info->p>=48&&*info->p<=55)||*info->p==95,    _while_condtional8) {
        if(_if_conditional196=*info->p==95,        _if_conditional196) {
            info->p++;
        }
        else {
            *p_71=*info->p;
            p_71++;
            info->p++;
        }
        if(_if_conditional197=p_71-buf_70>=buf_size_69-1,        _if_conditional197) {
            err_msg(info,"overflow node of number");
            exit(2);
        }
    }
    *p_71=0;
    skip_spaces_and_lf(info);
    if(_if_conditional198=*info->p==117||*info->p==85,    _if_conditional198) {
        info->p++;
        skip_spaces_and_lf(info);
        if(_if_conditional199=*info->p==76||*info->p==108,        _if_conditional199) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional200=*info->p==76||*info->p==108,            _if_conditional200) {
                info->p++;
                skip_spaces_and_lf(info);
                value_72=strtoull(buf_70,((void*)0),0);
                _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 682, "struct sNode");
                _inf_obj_value26=come_increment_ref_count(((struct sULongNode*)(right_value184=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value183=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 682, "struct sULongNode")))),value_72,info))));
                _inf_value26->_protocol_obj=_inf_obj_value26;
                _inf_value26->finalize=(void*)sULongNode_finalize;
                _inf_value26->clone=(void*)sULongNode_clone;
                _inf_value26->compile=(void*)sULongNode_compile;
                _inf_value26->sline=(void*)sULongNode_sline;
                _inf_value26->sname=(void*)sULongNode_sname;
                _inf_value26->terminated=(void*)sULongNode_terminated;
                _inf_value26->kind=(void*)sULongNode_kind;
                __result126__ = __result_obj__ = ((struct sNode*)(right_value187=_inf_value26));
                come_call_finalizer2(sULongNode_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sULongNode_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value187) { right_value187 = come_decrement_ref_count2(right_value187, ((struct sNode*)right_value187)->finalize, ((struct sNode*)right_value187)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result126__;
            }
            else {
                value_74=strtoull(buf_70,((void*)0),0);
                _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 686, "struct sNode");
                _inf_obj_value27=come_increment_ref_count(((struct sULongNode*)(right_value189=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value188=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 686, "struct sULongNode")))),value_74,info))));
                _inf_value27->_protocol_obj=_inf_obj_value27;
                _inf_value27->finalize=(void*)sULongNode_finalize;
                _inf_value27->clone=(void*)sULongNode_clone;
                _inf_value27->compile=(void*)sULongNode_compile;
                _inf_value27->sline=(void*)sULongNode_sline;
                _inf_value27->sname=(void*)sULongNode_sname;
                _inf_value27->terminated=(void*)sULongNode_terminated;
                _inf_value27->kind=(void*)sULongNode_kind;
                __result129__ = __result_obj__ = ((struct sNode*)(right_value192=_inf_value27));
                come_call_finalizer2(sULongNode_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sULongNode_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value192) { right_value192 = come_decrement_ref_count2(right_value192, ((struct sNode*)right_value192)->finalize, ((struct sNode*)right_value192)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result129__;
            }
        }
        else {
            value_76=strtoul(buf_70,((void*)0),0);
            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 691, "struct sNode");
            _inf_obj_value28=come_increment_ref_count(((struct sUIntNode*)(right_value194=sUIntNode_initialize((struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(right_value193=(struct sUIntNode*)come_calloc(1, sizeof(struct sUIntNode)*(1), "05function3.c", 691, "struct sUIntNode")))),value_76,info))));
            _inf_value28->_protocol_obj=_inf_obj_value28;
            _inf_value28->finalize=(void*)sUIntNode_finalize;
            _inf_value28->clone=(void*)sUIntNode_clone;
            _inf_value28->compile=(void*)sUIntNode_compile;
            _inf_value28->sline=(void*)sUIntNode_sline;
            _inf_value28->sname=(void*)sUIntNode_sname;
            _inf_value28->terminated=(void*)sUIntNode_terminated;
            _inf_value28->kind=(void*)sUIntNode_kind;
            __result132__ = __result_obj__ = ((struct sNode*)(right_value197=_inf_value28));
            come_call_finalizer2(sUIntNode_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sUIntNode_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value197) { right_value197 = come_decrement_ref_count2(right_value197, ((struct sNode*)right_value197)->finalize, ((struct sNode*)right_value197)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result132__;
        }
    }
    else {
        if(_if_conditional216=*info->p==76||*info->p==108,        _if_conditional216) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional217=*info->p==76||*info->p==108,            _if_conditional217) {
                info->p++;
                skip_spaces_and_lf(info);
                value_78=strtoull(buf_70,((void*)0),0);
                _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 704, "struct sNode");
                _inf_obj_value29=come_increment_ref_count(((struct sLongNode*)(right_value199=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value198=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05function3.c", 704, "struct sLongNode")))),value_78,info))));
                _inf_value29->_protocol_obj=_inf_obj_value29;
                _inf_value29->finalize=(void*)sLongNode_finalize;
                _inf_value29->clone=(void*)sLongNode_clone;
                _inf_value29->compile=(void*)sLongNode_compile;
                _inf_value29->sline=(void*)sLongNode_sline;
                _inf_value29->sname=(void*)sLongNode_sname;
                _inf_value29->terminated=(void*)sLongNode_terminated;
                _inf_value29->kind=(void*)sLongNode_kind;
                __result135__ = __result_obj__ = ((struct sNode*)(right_value202=_inf_value29));
                come_call_finalizer2(sLongNode_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sLongNode_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value202) { right_value202 = come_decrement_ref_count2(right_value202, ((struct sNode*)right_value202)->finalize, ((struct sNode*)right_value202)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result135__;
            }
            else {
                if(_if_conditional223=*info->p==85||*info->p==117,                _if_conditional223) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    value_80=strtoull(buf_70,((void*)0),0);
                    _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 712, "struct sNode");
                    _inf_obj_value30=come_increment_ref_count(((struct sULongNode*)(right_value204=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value203=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 712, "struct sULongNode")))),value_80,info))));
                    _inf_value30->_protocol_obj=_inf_obj_value30;
                    _inf_value30->finalize=(void*)sULongNode_finalize;
                    _inf_value30->clone=(void*)sULongNode_clone;
                    _inf_value30->compile=(void*)sULongNode_compile;
                    _inf_value30->sline=(void*)sULongNode_sline;
                    _inf_value30->sname=(void*)sULongNode_sname;
                    _inf_value30->terminated=(void*)sULongNode_terminated;
                    _inf_value30->kind=(void*)sULongNode_kind;
                    __result138__ = __result_obj__ = ((struct sNode*)(right_value207=_inf_value30));
                    come_call_finalizer2(sULongNode_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sULongNode_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value207) { right_value207 = come_decrement_ref_count2(right_value207, ((struct sNode*)right_value207)->finalize, ((struct sNode*)right_value207)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result138__;
                }
                else {
                    value_82=strtoull(buf_70,((void*)0),0);
                    _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 716, "struct sNode");
                    _inf_obj_value31=come_increment_ref_count(((struct sLongNode*)(right_value209=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value208=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05function3.c", 716, "struct sLongNode")))),value_82,info))));
                    _inf_value31->_protocol_obj=_inf_obj_value31;
                    _inf_value31->finalize=(void*)sLongNode_finalize;
                    _inf_value31->clone=(void*)sLongNode_clone;
                    _inf_value31->compile=(void*)sLongNode_compile;
                    _inf_value31->sline=(void*)sLongNode_sline;
                    _inf_value31->sname=(void*)sLongNode_sname;
                    _inf_value31->terminated=(void*)sLongNode_terminated;
                    _inf_value31->kind=(void*)sLongNode_kind;
                    __result141__ = __result_obj__ = ((struct sNode*)(right_value212=_inf_value31));
                    come_call_finalizer2(sLongNode_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sLongNode_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value212) { right_value212 = come_decrement_ref_count2(right_value212, ((struct sNode*)right_value212)->finalize, ((struct sNode*)right_value212)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result141__;
                }
            }
        }
        else {
            value_84=strtoull(buf_70,((void*)0),0);
            _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 721, "struct sNode");
            _inf_obj_value32=come_increment_ref_count(((struct sIntNode*)(right_value214=sIntNode_initialize((struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value213=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "05function3.c", 721, "struct sIntNode")))),value_84,info))));
            _inf_value32->_protocol_obj=_inf_obj_value32;
            _inf_value32->finalize=(void*)sIntNode_finalize;
            _inf_value32->clone=(void*)sIntNode_clone;
            _inf_value32->compile=(void*)sIntNode_compile;
            _inf_value32->sline=(void*)sIntNode_sline;
            _inf_value32->sname=(void*)sIntNode_sname;
            _inf_value32->terminated=(void*)sIntNode_terminated;
            _inf_value32->kind=(void*)sIntNode_kind;
            __result144__ = __result_obj__ = ((struct sNode*)(right_value217=_inf_value32));
            come_call_finalizer2(sIntNode_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sIntNode_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value217) { right_value217 = come_decrement_ref_count2(right_value217, ((struct sNode*)right_value217)->finalize, ((struct sNode*)right_value217)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result144__;
        }
    }
    __result145__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result145__;
}

static void sUIntNode_finalize(struct sUIntNode* self){
void* __result_obj__;
_Bool _if_conditional211;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional211=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional211) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sUIntNode* sUIntNode_clone(struct sUIntNode* self){
void* __result_obj__;
_Bool _if_conditional212;
struct sUIntNode* __result130__;
void* right_value195;
struct sUIntNode* result_77;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
void* right_value196;
char* __dec_obj54;
struct sUIntNode* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
right_value195 = (void*)0;
memset(&result_77, 0, sizeof(struct sUIntNode*));
right_value196 = (void*)0;
                if(_if_conditional212=self==(void*)0,                _if_conditional212) {
                    __result130__ = __result_obj__ = (void*)0;
                    return __result130__;
                }
                result_77=(struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(right_value195=(struct sUIntNode*)come_calloc(1, sizeof(struct sUIntNode)*(1), "sUIntNode_clone", 3, "struct sUIntNode"))));
                come_call_finalizer2(sUIntNode_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional213=self!=((void*)0),                _if_conditional213) {
                    result_77->value=self->value;
                }
                if(_if_conditional214=self!=((void*)0),                _if_conditional214) {
                    result_77->sline=self->sline;
                }
                if(_if_conditional215=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional215) {
                    __dec_obj54=result_77->sname;
                    result_77->sname=(char*)come_increment_ref_count(((char*)(right_value196=string_clone(self->sname))));
                    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result131__ = __result_obj__ = result_77;
                come_call_finalizer2(sUIntNode_finalize,result_77, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result131__;
                come_call_finalizer2(sUIntNode_finalize,result_77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sULongNode_finalize(struct sULongNode* self){
void* __result_obj__;
_Bool _if_conditional224;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional224=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional224) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sULongNode* sULongNode_clone(struct sULongNode* self){
void* __result_obj__;
_Bool _if_conditional225;
struct sULongNode* __result136__;
void* right_value205;
struct sULongNode* result_81;
_Bool _if_conditional226;
_Bool _if_conditional227;
_Bool _if_conditional228;
void* right_value206;
char* __dec_obj56;
struct sULongNode* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
right_value205 = (void*)0;
memset(&result_81, 0, sizeof(struct sULongNode*));
right_value206 = (void*)0;
                        if(_if_conditional225=self==(void*)0,                        _if_conditional225) {
                            __result136__ = __result_obj__ = (void*)0;
                            return __result136__;
                        }
                        result_81=(struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value205=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "sULongNode_clone", 3, "struct sULongNode"))));
                        come_call_finalizer2(sULongNode_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional226=self!=((void*)0),                        _if_conditional226) {
                            result_81->value=self->value;
                        }
                        if(_if_conditional227=self!=((void*)0),                        _if_conditional227) {
                            result_81->sline=self->sline;
                        }
                        if(_if_conditional228=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional228) {
                            __dec_obj56=result_81->sname;
                            result_81->sname=(char*)come_increment_ref_count(((char*)(right_value206=string_clone(self->sname))));
                            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        __result137__ = __result_obj__ = result_81;
                        come_call_finalizer2(sULongNode_finalize,result_81, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result137__;
                        come_call_finalizer2(sULongNode_finalize,result_81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sLongNode_finalize(struct sLongNode* self){
void* __result_obj__;
_Bool _if_conditional229;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional229=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional229) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sLongNode* sLongNode_clone(struct sLongNode* self){
void* __result_obj__;
_Bool _if_conditional230;
struct sLongNode* __result139__;
void* right_value210;
struct sLongNode* result_83;
_Bool _if_conditional231;
_Bool _if_conditional232;
_Bool _if_conditional233;
void* right_value211;
char* __dec_obj57;
struct sLongNode* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
right_value210 = (void*)0;
memset(&result_83, 0, sizeof(struct sLongNode*));
right_value211 = (void*)0;
                        if(_if_conditional230=self==(void*)0,                        _if_conditional230) {
                            __result139__ = __result_obj__ = (void*)0;
                            return __result139__;
                        }
                        result_83=(struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value210=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "sLongNode_clone", 3, "struct sLongNode"))));
                        come_call_finalizer2(sLongNode_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional231=self!=((void*)0),                        _if_conditional231) {
                            result_83->value=self->value;
                        }
                        if(_if_conditional232=self!=((void*)0),                        _if_conditional232) {
                            result_83->sline=self->sline;
                        }
                        if(_if_conditional233=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional233) {
                            __dec_obj57=result_83->sname;
                            result_83->sname=(char*)come_increment_ref_count(((char*)(right_value211=string_clone(self->sname))));
                            __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        __result140__ = __result_obj__ = result_83;
                        come_call_finalizer2(sLongNode_finalize,result_83, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result140__;
                        come_call_finalizer2(sLongNode_finalize,result_83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sIntNode_finalize(struct sIntNode* self){
void* __result_obj__;
_Bool _if_conditional234;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional234=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional234) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sIntNode* sIntNode_clone(struct sIntNode* self){
void* __result_obj__;
_Bool _if_conditional235;
struct sIntNode* __result142__;
void* right_value215;
struct sIntNode* result_85;
_Bool _if_conditional236;
_Bool _if_conditional237;
_Bool _if_conditional238;
void* right_value216;
char* __dec_obj58;
struct sIntNode* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
right_value215 = (void*)0;
memset(&result_85, 0, sizeof(struct sIntNode*));
right_value216 = (void*)0;
                if(_if_conditional235=self==(void*)0,                _if_conditional235) {
                    __result142__ = __result_obj__ = (void*)0;
                    return __result142__;
                }
                result_85=(struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value215=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "sIntNode_clone", 3, "struct sIntNode"))));
                come_call_finalizer2(sIntNode_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional236=self!=((void*)0),                _if_conditional236) {
                    result_85->value=self->value;
                }
                if(_if_conditional237=self!=((void*)0),                _if_conditional237) {
                    result_85->sline=self->sline;
                }
                if(_if_conditional238=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional238) {
                    __dec_obj58=result_85->sname;
                    result_85->sname=(char*)come_increment_ref_count(((char*)(right_value216=string_clone(self->sname))));
                    __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result143__ = __result_obj__ = result_85;
                come_call_finalizer2(sIntNode_finalize,result_85, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result143__;
                come_call_finalizer2(sIntNode_finalize,result_85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

