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

struct sIntNode* sIntNode_initialize(struct sIntNode* self, int value, struct sInfo* info);

char* sIntNode_kind();

_Bool sIntNode_compile(struct sIntNode* self, struct sInfo* info);

static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
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










struct sIntNode* sIntNode_initialize(struct sIntNode* self, int value, struct sInfo* info){
void* __result_obj__;
void* right_value49;
char* __dec_obj12;
struct sIntNode* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
right_value49 = (void*)0;
    self->value=value;
    self->sline=info->sline;
    __dec_obj12=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value49=__builtin_string(info->sname))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value49 = come_decrement_ref_count2(right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result34__ = __result_obj__ = self;
    come_call_finalizer2(sIntNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result34__;
    come_call_finalizer2(sIntNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

char* sIntNode_kind(){
void* __result_obj__;
void* right_value50;
char* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
right_value50 = (void*)0;
    __result35__ = __result_obj__ = ((char*)(right_value50=__builtin_string("sIntNode")));
    right_value50 = come_decrement_ref_count2(right_value50, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result35__;
}

_Bool sIntNode_compile(struct sIntNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value51;
struct CVALUE* come_value_11;
void* right_value52;
char* __dec_obj13;
void* right_value53;
void* right_value54;
struct sType* __dec_obj14;
_Bool __result37__;
memset(&__result_obj__, 0, sizeof(void*));
right_value51 = (void*)0;
memset(&come_value_11, 0, sizeof(struct CVALUE*));
right_value52 = (void*)0;
right_value53 = (void*)0;
right_value54 = (void*)0;
    come_value_11=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value51=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function3.c", 27, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj13=come_value_11->c_value;
    come_value_11->c_value=(char*)come_increment_ref_count(((char*)(right_value52=xsprintf("%d",self->value))));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value52 = come_decrement_ref_count2(right_value52, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj14=come_value_11->type;
    come_value_11->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value54=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value53=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function3.c", 30, "sType")))),"int",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_11->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_11));
    add_come_last_code(info,"%s;\n",come_value_11->c_value);
    __result37__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result37__;
    come_call_finalizer2(CVALUE_finalize,come_value_11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional8;
_Bool _if_conditional9;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional8=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional8) {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional9=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional9) {
            come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional10;
_Bool _if_conditional12;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _if_conditional16;
_Bool _if_conditional17;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional25;
_Bool _if_conditional26;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional10=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                _if_conditional10) {
                    come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional12=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional12) {
                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional14=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional14) {
                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional15=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional15) {
                    self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional16=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional16) {
                    come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional17=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional17) {
                    come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional19=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional19) {
                    come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional20=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional20) {
                    come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional22=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional22) {
                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional23=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional23) {
                    if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional24=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional24) {
                    if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional25=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional25) {
                    self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional26=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional26) {
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
_Bool _if_conditional11;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional11=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional11) {
                                    come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional13;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional13=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional13) {
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
_Bool _if_conditional18;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional18=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional18) {
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
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional21=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional21) {
                                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional27;
void* right_value55;
struct list_item$1CVALUEph* litem_18;
struct CVALUE* __dec_obj15;
_Bool _if_conditional29;
void* right_value56;
struct list_item$1CVALUEph* litem_19;
struct CVALUE* __dec_obj16;
void* right_value57;
struct list_item$1CVALUEph* litem_20;
struct CVALUE* __dec_obj17;
struct list$1CVALUEph* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
right_value55 = (void*)0;
memset(&litem_18, 0, sizeof(struct list_item$1CVALUEph*));
right_value56 = (void*)0;
memset(&litem_19, 0, sizeof(struct list_item$1CVALUEph*));
right_value57 = (void*)0;
memset(&litem_20, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional27=self->len==0,        _if_conditional27) {
            litem_18=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value55=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 226, "list_item$1CVALUEph"))));
            come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            litem_18->prev=((void*)0);
            litem_18->next=((void*)0);
            __dec_obj15=litem_18->item;
            litem_18->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer2(CVALUE_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            self->tail=litem_18;
            self->head=litem_18;
        }
        else {
            if(_if_conditional29=self->len==1,            _if_conditional29) {
                litem_19=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value56=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 236, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_19->prev=self->head;
                litem_19->next=((void*)0);
                __dec_obj16=litem_19->item;
                litem_19->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_19;
                self->head->next=litem_19;
            }
            else {
                litem_20=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value57=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 246, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_20->prev=self->tail;
                litem_20->next=((void*)0);
                __dec_obj17=litem_20->item;
                litem_20->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail->next=litem_20;
                self->tail=litem_20;
            }
        }
        self->len++;
        __result36__ = __result_obj__ = self;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result36__;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional28;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional28=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional28) {
                    come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

_Bool sIntNode_terminated(){
void* __result_obj__;
_Bool __result38__;
memset(&__result_obj__, 0, sizeof(void*));
    __result38__ = (_Bool)0;
    return __result38__;
}

int sIntNode_sline(struct sIntNode* self, struct sInfo* info){
void* __result_obj__;
int __result39__;
memset(&__result_obj__, 0, sizeof(void*));
    __result39__ = self->sline;
    return __result39__;
}

char* sIntNode_sname(struct sIntNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value58;
char* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
right_value58 = (void*)0;
    __result40__ = __result_obj__ = ((char*)(right_value58=__builtin_string(self->sname)));
    right_value58 = come_decrement_ref_count2(right_value58, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result40__;
}

struct sUIntNode* sUIntNode_initialize(struct sUIntNode* self, unsigned int value, struct sInfo* info){
void* __result_obj__;
void* right_value59;
char* __dec_obj18;
struct sUIntNode* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
right_value59 = (void*)0;
    self->value=value;
    self->sline=info->sline;
    __dec_obj18=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value59=__builtin_string(info->sname))));
    __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value59 = come_decrement_ref_count2(right_value59, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result41__ = __result_obj__ = self;
    come_call_finalizer2(sUIntNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result41__;
    come_call_finalizer2(sUIntNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sUIntNode_terminated(){
void* __result_obj__;
_Bool __result42__;
memset(&__result_obj__, 0, sizeof(void*));
    __result42__ = (_Bool)0;
    return __result42__;
}

char* sUIntNode_kind(){
void* __result_obj__;
void* right_value60;
char* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
right_value60 = (void*)0;
    __result43__ = __result_obj__ = ((char*)(right_value60=__builtin_string("sUIntNode")));
    right_value60 = come_decrement_ref_count2(right_value60, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result43__;
}

_Bool sUIntNode_compile(struct sUIntNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value61;
struct CVALUE* come_value_21;
void* right_value62;
char* __dec_obj19;
void* right_value63;
void* right_value64;
struct sType* __dec_obj20;
_Bool __result44__;
memset(&__result_obj__, 0, sizeof(void*));
right_value61 = (void*)0;
memset(&come_value_21, 0, sizeof(struct CVALUE*));
right_value62 = (void*)0;
right_value63 = (void*)0;
right_value64 = (void*)0;
    come_value_21=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value61=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function3.c", 84, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj19=come_value_21->c_value;
    come_value_21->c_value=(char*)come_increment_ref_count(((char*)(right_value62=xsprintf("%u",self->value))));
    __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value62 = come_decrement_ref_count2(right_value62, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj20=come_value_21->type;
    come_value_21->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value64=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value63=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function3.c", 87, "sType")))),"int",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_21->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_21));
    add_come_last_code(info,"%s;\n",come_value_21->c_value);
    __result44__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result44__;
    come_call_finalizer2(CVALUE_finalize,come_value_21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sUIntNode_sline(struct sUIntNode* self, struct sInfo* info){
void* __result_obj__;
int __result45__;
memset(&__result_obj__, 0, sizeof(void*));
    __result45__ = self->sline;
    return __result45__;
}

char* sUIntNode_sname(struct sUIntNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value65;
char* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
right_value65 = (void*)0;
    __result46__ = __result_obj__ = ((char*)(right_value65=__builtin_string(self->sname)));
    right_value65 = come_decrement_ref_count2(right_value65, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result46__;
}

struct sLongNode* sLongNode_initialize(struct sLongNode* self, unsigned long int value, struct sInfo* info){
void* __result_obj__;
void* right_value66;
char* __dec_obj21;
struct sLongNode* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
right_value66 = (void*)0;
    self->value=value;
    self->sline=info->sline;
    __dec_obj21=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value66=__builtin_string(info->sname))));
    __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value66 = come_decrement_ref_count2(right_value66, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result47__ = __result_obj__ = self;
    come_call_finalizer2(sLongNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result47__;
    come_call_finalizer2(sLongNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

char* sLongNode_kind(){
void* __result_obj__;
void* right_value67;
char* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
right_value67 = (void*)0;
    __result48__ = __result_obj__ = ((char*)(right_value67=__builtin_string("sLongNode")));
    right_value67 = come_decrement_ref_count2(right_value67, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result48__;
}

_Bool sLongNode_compile(struct sLongNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value68;
struct CVALUE* come_value_22;
void* right_value69;
char* __dec_obj22;
void* right_value70;
void* right_value71;
struct sType* __dec_obj23;
_Bool __result49__;
memset(&__result_obj__, 0, sizeof(void*));
right_value68 = (void*)0;
memset(&come_value_22, 0, sizeof(struct CVALUE*));
right_value69 = (void*)0;
right_value70 = (void*)0;
right_value71 = (void*)0;
    come_value_22=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value68=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function3.c", 131, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj22=come_value_22->c_value;
    come_value_22->c_value=(char*)come_increment_ref_count(((char*)(right_value69=xsprintf("%ld",self->value))));
    __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value69 = come_decrement_ref_count2(right_value69, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj23=come_value_22->type;
    come_value_22->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value71=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value70=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function3.c", 134, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_22->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_22));
    add_come_last_code(info,"%s;\n",come_value_22->c_value);
    __result49__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result49__;
    come_call_finalizer2(CVALUE_finalize,come_value_22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

_Bool sLongNode_terminated(){
void* __result_obj__;
_Bool __result50__;
memset(&__result_obj__, 0, sizeof(void*));
    __result50__ = (_Bool)0;
    return __result50__;
}

int sLongNode_sline(struct sLongNode* self, struct sInfo* info){
void* __result_obj__;
int __result51__;
memset(&__result_obj__, 0, sizeof(void*));
    __result51__ = self->sline;
    return __result51__;
}

char* sLongNode_sname(struct sLongNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value72;
char* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
right_value72 = (void*)0;
    __result52__ = __result_obj__ = ((char*)(right_value72=__builtin_string(self->sname)));
    right_value72 = come_decrement_ref_count2(right_value72, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result52__;
}

struct sULongNode* sULongNode_initialize(struct sULongNode* self, unsigned long int value, struct sInfo* info){
void* __result_obj__;
void* right_value73;
char* __dec_obj24;
struct sULongNode* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
right_value73 = (void*)0;
    self->value=value;
    self->sline=info->sline;
    __dec_obj24=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value73=__builtin_string(info->sname))));
    __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value73 = come_decrement_ref_count2(right_value73, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result53__ = __result_obj__ = self;
    come_call_finalizer2(sULongNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result53__;
    come_call_finalizer2(sULongNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

char* sULongNode_kind(){
void* __result_obj__;
void* right_value74;
char* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value74 = (void*)0;
    __result54__ = __result_obj__ = ((char*)(right_value74=__builtin_string("sULongNode")));
    right_value74 = come_decrement_ref_count2(right_value74, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result54__;
}

_Bool sULongNode_compile(struct sULongNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value75;
struct CVALUE* come_value_23;
void* right_value76;
char* __dec_obj25;
void* right_value77;
void* right_value78;
struct sType* __dec_obj26;
_Bool __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value75 = (void*)0;
memset(&come_value_23, 0, sizeof(struct CVALUE*));
right_value76 = (void*)0;
right_value77 = (void*)0;
right_value78 = (void*)0;
    come_value_23=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value75=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function3.c", 183, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj25=come_value_23->c_value;
    come_value_23->c_value=(char*)come_increment_ref_count(((char*)(right_value76=xsprintf("%lu",self->value))));
    __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value76 = come_decrement_ref_count2(right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj26=come_value_23->type;
    come_value_23->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value78=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value77=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function3.c", 186, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_23->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_23));
    add_come_last_code(info,"%s;\n",come_value_23->c_value);
    __result55__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result55__;
    come_call_finalizer2(CVALUE_finalize,come_value_23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

_Bool sULongNode_terminated(){
void* __result_obj__;
_Bool __result56__;
memset(&__result_obj__, 0, sizeof(void*));
    __result56__ = (_Bool)0;
    return __result56__;
}

int sULongNode_sline(struct sULongNode* self, struct sInfo* info){
void* __result_obj__;
int __result57__;
memset(&__result_obj__, 0, sizeof(void*));
    __result57__ = self->sline;
    return __result57__;
}

char* sULongNode_sname(struct sULongNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value79;
char* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
    __result58__ = __result_obj__ = ((char*)(right_value79=__builtin_string(self->sname)));
    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result58__;
}

struct sFloatNode* sFloatNode_initialize(struct sFloatNode* self, float value, struct sInfo* info){
void* __result_obj__;
void* right_value80;
char* __dec_obj27;
struct sFloatNode* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
    self->value=value;
    self->sline=info->sline;
    __dec_obj27=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value80=__builtin_string(info->sname))));
    __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result59__ = __result_obj__ = self;
    come_call_finalizer2(sFloatNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result59__;
    come_call_finalizer2(sFloatNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

char* sFloatNode_kind(){
void* __result_obj__;
void* right_value81;
char* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
    __result60__ = __result_obj__ = ((char*)(right_value81=__builtin_string("sFloatNode")));
    right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result60__;
}

_Bool sFloatNode_compile(struct sFloatNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value82;
struct CVALUE* come_value_24;
void* right_value83;
char* __dec_obj28;
void* right_value84;
void* right_value85;
struct sType* __dec_obj29;
_Bool __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
memset(&come_value_24, 0, sizeof(struct CVALUE*));
right_value83 = (void*)0;
right_value84 = (void*)0;
right_value85 = (void*)0;
    come_value_24=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value82=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function3.c", 235, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj28=come_value_24->c_value;
    come_value_24->c_value=(char*)come_increment_ref_count(((char*)(right_value83=xsprintf("%f",self->value))));
    __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj29=come_value_24->type;
    come_value_24->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value85=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value84=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function3.c", 238, "sType")))),"float",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_24->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_24));
    add_come_last_code(info,"%s;\n",come_value_24->c_value);
    __result61__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result61__;
    come_call_finalizer2(CVALUE_finalize,come_value_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

_Bool sFloatNode_terminated(){
void* __result_obj__;
_Bool __result62__;
memset(&__result_obj__, 0, sizeof(void*));
    __result62__ = (_Bool)0;
    return __result62__;
}

int sFloatNode_sline(struct sFloatNode* self, struct sInfo* info){
void* __result_obj__;
int __result63__;
memset(&__result_obj__, 0, sizeof(void*));
    __result63__ = self->sline;
    return __result63__;
}

char* sFloatNode_sname(struct sFloatNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value86;
char* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value86 = (void*)0;
    __result64__ = __result_obj__ = ((char*)(right_value86=__builtin_string(self->sname)));
    right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result64__;
}

struct sDoubleNode* sDoubleNode_initialize(struct sDoubleNode* self, double value, struct sInfo* info){
void* __result_obj__;
void* right_value87;
char* __dec_obj30;
struct sDoubleNode* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
right_value87 = (void*)0;
    self->value=value;
    self->sline=info->sline;
    __dec_obj30=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value87=__builtin_string(info->sname))));
    __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result65__ = __result_obj__ = self;
    come_call_finalizer2(sDoubleNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result65__;
    come_call_finalizer2(sDoubleNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

char* sDoubleNode_kind(){
void* __result_obj__;
void* right_value88;
char* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
    __result66__ = __result_obj__ = ((char*)(right_value88=__builtin_string("sDoubleNode")));
    right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result66__;
}

_Bool sDoubleNode_compile(struct sDoubleNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value89;
struct CVALUE* come_value_25;
void* right_value90;
char* __dec_obj31;
void* right_value91;
void* right_value92;
struct sType* __dec_obj32;
_Bool __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value89 = (void*)0;
memset(&come_value_25, 0, sizeof(struct CVALUE*));
right_value90 = (void*)0;
right_value91 = (void*)0;
right_value92 = (void*)0;
    come_value_25=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value89=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function3.c", 287, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj31=come_value_25->c_value;
    come_value_25->c_value=(char*)come_increment_ref_count(((char*)(right_value90=xsprintf("%lf",self->value))));
    __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj32=come_value_25->type;
    come_value_25->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value92=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value91=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function3.c", 290, "sType")))),"double",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_25->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_25));
    add_come_last_code(info,"%s;\n",come_value_25->c_value);
    __result67__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result67__;
    come_call_finalizer2(CVALUE_finalize,come_value_25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

_Bool sDoubleNode_terminated(){
void* __result_obj__;
_Bool __result68__;
memset(&__result_obj__, 0, sizeof(void*));
    __result68__ = (_Bool)0;
    return __result68__;
}

int sDoubleNode_sline(struct sDoubleNode* self, struct sInfo* info){
void* __result_obj__;
int __result69__;
memset(&__result_obj__, 0, sizeof(void*));
    __result69__ = self->sline;
    return __result69__;
}

char* sDoubleNode_sname(struct sDoubleNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value93;
char* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
    __result70__ = __result_obj__ = ((char*)(right_value93=__builtin_string(self->sname)));
    right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result70__;
}

struct sNode* get_number(_Bool minus, struct sInfo* info){
void* __result_obj__;
const int buf_size_26=128;
char* p2_28;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _while_condtional4;
_Bool _if_conditional37;
_Bool _if_conditional38;
char c_29;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _while_condtional5;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _while_condtional6;
_Bool _if_conditional49;
_Bool _if_conditional50;
_Bool _if_conditional51;
void* right_value94;
void* right_value95;
struct sNode* _inf_value1;
struct sFloatNode* _inf_obj_value1;
void* right_value98;
struct sNode* __result73__;
_Bool _if_conditional57;
void* right_value99;
void* right_value100;
struct sNode* _inf_value2;
struct sDoubleNode* _inf_obj_value2;
void* right_value103;
struct sNode* __result76__;
void* right_value104;
void* right_value105;
struct sNode* _inf_value3;
struct sDoubleNode* _inf_obj_value3;
void* right_value108;
struct sNode* __result79__;
_Bool _if_conditional68;
_Bool _if_conditional69;
_Bool _if_conditional70;
unsigned long int lont_33;
int value2_34;
void* right_value109;
void* right_value110;
struct sNode* _inf_value4;
struct sULongNode* _inf_obj_value4;
void* right_value113;
struct sNode* __result82__;
unsigned long int lont_36;
int value_37;
void* right_value114;
void* right_value115;
struct sNode* _inf_value5;
struct sULongNode* _inf_obj_value5;
void* right_value118;
struct sNode* __result85__;
unsigned int value_39;
void* right_value119;
void* right_value120;
struct sNode* _inf_value6;
struct sUIntNode* _inf_obj_value6;
void* right_value123;
struct sNode* __result88__;
_Bool _if_conditional86;
_Bool _if_conditional87;
unsigned long long int value_41;
void* right_value124;
void* right_value125;
struct sNode* _inf_value7;
struct sLongNode* _inf_obj_value7;
void* right_value128;
struct sNode* __result91__;
_Bool _if_conditional93;
unsigned long long int value_43;
void* right_value129;
void* right_value130;
struct sNode* _inf_value8;
struct sULongNode* _inf_obj_value8;
void* right_value133;
struct sNode* __result94__;
unsigned long long int value_45;
void* right_value134;
void* right_value135;
struct sNode* _inf_value9;
struct sLongNode* _inf_obj_value9;
void* right_value138;
struct sNode* __result97__;
unsigned long int lont_47;
int value_48;
void* right_value139;
void* right_value140;
struct sNode* _inf_value10;
struct sIntNode* _inf_obj_value10;
void* right_value143;
struct sNode* __result100__;
struct sNode* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p2_28, 0, sizeof(char*));
memset(&c_29, 0, sizeof(char));
right_value94 = (void*)0;
right_value95 = (void*)0;
right_value98 = (void*)0;
right_value99 = (void*)0;
right_value100 = (void*)0;
right_value103 = (void*)0;
right_value104 = (void*)0;
right_value105 = (void*)0;
right_value108 = (void*)0;
memset(&lont_33, 0, sizeof(unsigned long int));
memset(&value2_34, 0, sizeof(int));
right_value109 = (void*)0;
right_value110 = (void*)0;
right_value113 = (void*)0;
memset(&lont_36, 0, sizeof(unsigned long int));
memset(&value_37, 0, sizeof(int));
right_value114 = (void*)0;
right_value115 = (void*)0;
right_value118 = (void*)0;
memset(&value_39, 0, sizeof(unsigned int));
right_value119 = (void*)0;
right_value120 = (void*)0;
right_value123 = (void*)0;
memset(&value_41, 0, sizeof(unsigned long long int));
right_value124 = (void*)0;
right_value125 = (void*)0;
right_value128 = (void*)0;
memset(&value_43, 0, sizeof(unsigned long long int));
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value133 = (void*)0;
memset(&value_45, 0, sizeof(unsigned long long int));
right_value134 = (void*)0;
right_value135 = (void*)0;
right_value138 = (void*)0;
memset(&lont_47, 0, sizeof(unsigned long int));
memset(&value_48, 0, sizeof(int));
right_value139 = (void*)0;
right_value140 = (void*)0;
right_value143 = (void*)0;
    char buf_27[128+1];
    memset(&buf_27, 0, sizeof(char)    *(128+1)    );
    p2_28=buf_27;
    if(minus) {
        *p2_28=45;
        p2_28++;
    }
    if(_if_conditional36=xisdigit(*info->p),    _if_conditional36) {
        while(_while_condtional4=xisdigit(*info->p)||*info->p==95,        _while_condtional4) {
            if(_if_conditional37=*info->p==95,            _if_conditional37) {
                info->p++;
            }
            else {
                *p2_28++=*info->p;
                info->p++;
            }
            if(_if_conditional38=p2_28-buf_27>=buf_size_26,            _if_conditional38) {
                printf("%s %d: overflow node of number\n",info->sname,info->sline);
                exit(5);
            }
        }
        *p2_28=0;
        skip_spaces_and_lf(info);
        c_29=*(info->p+1);
        if(_if_conditional39=*info->p==46&&xisdigit(c_29),        _if_conditional39) {
            *p2_28++=*info->p;
            if(_if_conditional40=p2_28-buf_27>=buf_size_26,            _if_conditional40) {
                printf("%s %d: overflow node of number",info->sname,info->sline);
                exit(11);
            }
            info->p++;
            skip_spaces_and_lf(info);
            while(_while_condtional5=xisdigit(*info->p)||*info->p==95,            _while_condtional5) {
                if(_if_conditional41=*info->p==95,                _if_conditional41) {
                    info->p++;
                }
                else {
                    *p2_28++=*info->p;
                    info->p++;
                }
                if(_if_conditional42=p2_28-buf_27>=buf_size_26,                _if_conditional42) {
                    err_msg(info,"overflow node of number");
                    exit(2);
                }
            }
            if(_if_conditional43=*info->p==101,            _if_conditional43) {
                *p2_28++=*info->p;
                info->p++;
                if(_if_conditional44=p2_28-buf_27>=buf_size_26,                _if_conditional44) {
                    err_msg(info,"overflow node of number");
                    exit(2);
                }
                if(_if_conditional45=*info->p==43,                _if_conditional45) {
                    *p2_28++=*info->p;
                    info->p++;
                    if(_if_conditional46=p2_28-buf_27>=buf_size_26,                    _if_conditional46) {
                        err_msg(info,"overflow node of number");
                        exit(2);
                    }
                }
                else {
                    if(_if_conditional47=*info->p==45,                    _if_conditional47) {
                        *p2_28++=*info->p;
                        info->p++;
                        if(_if_conditional48=p2_28-buf_27>=buf_size_26,                        _if_conditional48) {
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
                    if(_if_conditional49=*info->p==95,                    _if_conditional49) {
                        info->p++;
                    }
                    else {
                        *p2_28++=*info->p;
                        info->p++;
                    }
                    if(_if_conditional50=p2_28-buf_27>=buf_size_26,                    _if_conditional50) {
                        err_msg(info,"overflow node of number");
                        exit(2);
                    }
                }
            }
            *p2_28=0;
            skip_spaces_and_lf(info);
            if(_if_conditional51=*info->p==102||*info->p==70,            _if_conditional51) {
                info->p++;
                skip_spaces_and_lf(info);
                _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 426, "struct sNode");
                _inf_obj_value1=come_increment_ref_count(((struct sFloatNode*)(right_value95=sFloatNode_initialize((struct sFloatNode*)come_increment_ref_count(((struct sFloatNode*)(right_value94=(struct sFloatNode*)come_calloc(1, sizeof(struct sFloatNode)*(1), "05function3.c", 426, "sFloatNode")))),strtof(buf_27,((void*)0)),info))));
                _inf_value1->_protocol_obj=_inf_obj_value1;
                _inf_value1->finalize=(void*)sFloatNode_finalize;
                _inf_value1->clone=(void*)sFloatNode_clone;
                _inf_value1->compile=(void*)sFloatNode_compile;
                _inf_value1->sline=(void*)sFloatNode_sline;
                _inf_value1->sname=(void*)sFloatNode_sname;
                _inf_value1->terminated=(void*)sFloatNode_terminated;
                _inf_value1->kind=(void*)sFloatNode_kind;
                __result73__ = __result_obj__ = ((struct sNode*)(right_value98=_inf_value1));
                come_call_finalizer2(sFloatNode_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sFloatNode_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value98) { right_value98 = come_decrement_ref_count2(right_value98, ((struct sNode*)right_value98)->finalize, ((struct sNode*)right_value98)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result73__;
            }
            else {
                if(_if_conditional57=*info->p==108||*info->p==76,                _if_conditional57) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 432, "struct sNode");
                    _inf_obj_value2=come_increment_ref_count(((struct sDoubleNode*)(right_value100=sDoubleNode_initialize((struct sDoubleNode*)come_increment_ref_count(((struct sDoubleNode*)(right_value99=(struct sDoubleNode*)come_calloc(1, sizeof(struct sDoubleNode)*(1), "05function3.c", 432, "sDoubleNode")))),strtod(buf_27,((void*)0)),info))));
                    _inf_value2->_protocol_obj=_inf_obj_value2;
                    _inf_value2->finalize=(void*)sDoubleNode_finalize;
                    _inf_value2->clone=(void*)sDoubleNode_clone;
                    _inf_value2->compile=(void*)sDoubleNode_compile;
                    _inf_value2->sline=(void*)sDoubleNode_sline;
                    _inf_value2->sname=(void*)sDoubleNode_sname;
                    _inf_value2->terminated=(void*)sDoubleNode_terminated;
                    _inf_value2->kind=(void*)sDoubleNode_kind;
                    __result76__ = __result_obj__ = ((struct sNode*)(right_value103=_inf_value2));
                    come_call_finalizer2(sDoubleNode_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sDoubleNode_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value103) { right_value103 = come_decrement_ref_count2(right_value103, ((struct sNode*)right_value103)->finalize, ((struct sNode*)right_value103)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result76__;
                }
                else {
                    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 435, "struct sNode");
                    _inf_obj_value3=come_increment_ref_count(((struct sDoubleNode*)(right_value105=sDoubleNode_initialize((struct sDoubleNode*)come_increment_ref_count(((struct sDoubleNode*)(right_value104=(struct sDoubleNode*)come_calloc(1, sizeof(struct sDoubleNode)*(1), "05function3.c", 435, "sDoubleNode")))),strtod(buf_27,((void*)0)),info))));
                    _inf_value3->_protocol_obj=_inf_obj_value3;
                    _inf_value3->finalize=(void*)sDoubleNode_finalize;
                    _inf_value3->clone=(void*)sDoubleNode_clone;
                    _inf_value3->compile=(void*)sDoubleNode_compile;
                    _inf_value3->sline=(void*)sDoubleNode_sline;
                    _inf_value3->sname=(void*)sDoubleNode_sname;
                    _inf_value3->terminated=(void*)sDoubleNode_terminated;
                    _inf_value3->kind=(void*)sDoubleNode_kind;
                    __result79__ = __result_obj__ = ((struct sNode*)(right_value108=_inf_value3));
                    come_call_finalizer2(sDoubleNode_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sDoubleNode_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value108) { right_value108 = come_decrement_ref_count2(right_value108, ((struct sNode*)right_value108)->finalize, ((struct sNode*)right_value108)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result79__;
                }
            }
        }
        else {
            if(_if_conditional68=*info->p==117||*info->p==85,            _if_conditional68) {
                info->p++;
                skip_spaces_and_lf(info);
                if(_if_conditional69=*info->p==76||*info->p==108,                _if_conditional69) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(_if_conditional70=*info->p==76||*info->p==108,                    _if_conditional70) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        value2_34=strtoull(buf_27,((void*)0),0);
                        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 455, "struct sNode");
                        _inf_obj_value4=come_increment_ref_count(((struct sULongNode*)(right_value110=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value109=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 455, "sULongNode")))),value2_34,info))));
                        _inf_value4->_protocol_obj=_inf_obj_value4;
                        _inf_value4->finalize=(void*)sULongNode_finalize;
                        _inf_value4->clone=(void*)sULongNode_clone;
                        _inf_value4->compile=(void*)sULongNode_compile;
                        _inf_value4->sline=(void*)sULongNode_sline;
                        _inf_value4->sname=(void*)sULongNode_sname;
                        _inf_value4->terminated=(void*)sULongNode_terminated;
                        _inf_value4->kind=(void*)sULongNode_kind;
                        __result82__ = __result_obj__ = ((struct sNode*)(right_value113=_inf_value4));
                        come_call_finalizer2(sULongNode_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sULongNode_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value113) { right_value113 = come_decrement_ref_count2(right_value113, ((struct sNode*)right_value113)->finalize, ((struct sNode*)right_value113)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result82__;
                    }
                    else {
                        value_37=strtoull(buf_27,((void*)0),0);
                        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 459, "struct sNode");
                        _inf_obj_value5=come_increment_ref_count(((struct sULongNode*)(right_value115=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value114=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 459, "sULongNode")))),value_37,info))));
                        _inf_value5->_protocol_obj=_inf_obj_value5;
                        _inf_value5->finalize=(void*)sULongNode_finalize;
                        _inf_value5->clone=(void*)sULongNode_clone;
                        _inf_value5->compile=(void*)sULongNode_compile;
                        _inf_value5->sline=(void*)sULongNode_sline;
                        _inf_value5->sname=(void*)sULongNode_sname;
                        _inf_value5->terminated=(void*)sULongNode_terminated;
                        _inf_value5->kind=(void*)sULongNode_kind;
                        __result85__ = __result_obj__ = ((struct sNode*)(right_value118=_inf_value5));
                        come_call_finalizer2(sULongNode_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sULongNode_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value118) { right_value118 = come_decrement_ref_count2(right_value118, ((struct sNode*)right_value118)->finalize, ((struct sNode*)right_value118)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result85__;
                    }
                }
                else {
                    value_39=strtoul(buf_27,((void*)0),0);
                    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 464, "struct sNode");
                    _inf_obj_value6=come_increment_ref_count(((struct sUIntNode*)(right_value120=sUIntNode_initialize((struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(right_value119=(struct sUIntNode*)come_calloc(1, sizeof(struct sUIntNode)*(1), "05function3.c", 464, "sUIntNode")))),value_39,info))));
                    _inf_value6->_protocol_obj=_inf_obj_value6;
                    _inf_value6->finalize=(void*)sUIntNode_finalize;
                    _inf_value6->clone=(void*)sUIntNode_clone;
                    _inf_value6->compile=(void*)sUIntNode_compile;
                    _inf_value6->sline=(void*)sUIntNode_sline;
                    _inf_value6->sname=(void*)sUIntNode_sname;
                    _inf_value6->terminated=(void*)sUIntNode_terminated;
                    _inf_value6->kind=(void*)sUIntNode_kind;
                    __result88__ = __result_obj__ = ((struct sNode*)(right_value123=_inf_value6));
                    come_call_finalizer2(sUIntNode_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sUIntNode_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value123) { right_value123 = come_decrement_ref_count2(right_value123, ((struct sNode*)right_value123)->finalize, ((struct sNode*)right_value123)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result88__;
                }
            }
            else {
                if(_if_conditional86=*info->p==76||*info->p==108,                _if_conditional86) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(_if_conditional87=*info->p==76||*info->p==108,                    _if_conditional87) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        value_41=strtoull(buf_27,((void*)0),0);
                        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 478, "struct sNode");
                        _inf_obj_value7=come_increment_ref_count(((struct sLongNode*)(right_value125=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value124=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05function3.c", 478, "sLongNode")))),value_41,info))));
                        _inf_value7->_protocol_obj=_inf_obj_value7;
                        _inf_value7->finalize=(void*)sLongNode_finalize;
                        _inf_value7->clone=(void*)sLongNode_clone;
                        _inf_value7->compile=(void*)sLongNode_compile;
                        _inf_value7->sline=(void*)sLongNode_sline;
                        _inf_value7->sname=(void*)sLongNode_sname;
                        _inf_value7->terminated=(void*)sLongNode_terminated;
                        _inf_value7->kind=(void*)sLongNode_kind;
                        __result91__ = __result_obj__ = ((struct sNode*)(right_value128=_inf_value7));
                        come_call_finalizer2(sLongNode_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sLongNode_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value128) { right_value128 = come_decrement_ref_count2(right_value128, ((struct sNode*)right_value128)->finalize, ((struct sNode*)right_value128)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result91__;
                    }
                    else {
                        if(_if_conditional93=*info->p==85||*info->p==117,                        _if_conditional93) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            value_43=strtoull(buf_27,((void*)0),0);
                            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 487, "struct sNode");
                            _inf_obj_value8=come_increment_ref_count(((struct sULongNode*)(right_value130=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value129=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 487, "sULongNode")))),value_43,info))));
                            _inf_value8->_protocol_obj=_inf_obj_value8;
                            _inf_value8->finalize=(void*)sULongNode_finalize;
                            _inf_value8->clone=(void*)sULongNode_clone;
                            _inf_value8->compile=(void*)sULongNode_compile;
                            _inf_value8->sline=(void*)sULongNode_sline;
                            _inf_value8->sname=(void*)sULongNode_sname;
                            _inf_value8->terminated=(void*)sULongNode_terminated;
                            _inf_value8->kind=(void*)sULongNode_kind;
                            __result94__ = __result_obj__ = ((struct sNode*)(right_value133=_inf_value8));
                            come_call_finalizer2(sULongNode_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sULongNode_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value133) { right_value133 = come_decrement_ref_count2(right_value133, ((struct sNode*)right_value133)->finalize, ((struct sNode*)right_value133)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result94__;
                        }
                        else {
                            value_45=strtoull(buf_27,((void*)0),0);
                            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 491, "struct sNode");
                            _inf_obj_value9=come_increment_ref_count(((struct sLongNode*)(right_value135=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value134=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05function3.c", 491, "sLongNode")))),value_45,info))));
                            _inf_value9->_protocol_obj=_inf_obj_value9;
                            _inf_value9->finalize=(void*)sLongNode_finalize;
                            _inf_value9->clone=(void*)sLongNode_clone;
                            _inf_value9->compile=(void*)sLongNode_compile;
                            _inf_value9->sline=(void*)sLongNode_sline;
                            _inf_value9->sname=(void*)sLongNode_sname;
                            _inf_value9->terminated=(void*)sLongNode_terminated;
                            _inf_value9->kind=(void*)sLongNode_kind;
                            __result97__ = __result_obj__ = ((struct sNode*)(right_value138=_inf_value9));
                            come_call_finalizer2(sLongNode_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sLongNode_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value138) { right_value138 = come_decrement_ref_count2(right_value138, ((struct sNode*)right_value138)->finalize, ((struct sNode*)right_value138)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result97__;
                        }
                    }
                }
                else {
                    value_48=strtoll(buf_27,((void*)0),0);
                    _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 496, "struct sNode");
                    _inf_obj_value10=come_increment_ref_count(((struct sIntNode*)(right_value140=sIntNode_initialize((struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value139=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "05function3.c", 496, "sIntNode")))),value_48,info))));
                    _inf_value10->_protocol_obj=_inf_obj_value10;
                    _inf_value10->finalize=(void*)sIntNode_finalize;
                    _inf_value10->clone=(void*)sIntNode_clone;
                    _inf_value10->compile=(void*)sIntNode_compile;
                    _inf_value10->sline=(void*)sIntNode_sline;
                    _inf_value10->sname=(void*)sIntNode_sname;
                    _inf_value10->terminated=(void*)sIntNode_terminated;
                    _inf_value10->kind=(void*)sIntNode_kind;
                    __result100__ = __result_obj__ = ((struct sNode*)(right_value143=_inf_value10));
                    come_call_finalizer2(sIntNode_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sIntNode_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value143) { right_value143 = come_decrement_ref_count2(right_value143, ((struct sNode*)right_value143)->finalize, ((struct sNode*)right_value143)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result100__;
                }
            }
        }
    }
    else {
        err_msg(info,"require digits after + or -");
        exit(2);
    }
    __result101__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result101__;
}

static void sFloatNode_finalize(struct sFloatNode* self){
void* __result_obj__;
_Bool _if_conditional52;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional52=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional52) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sFloatNode* sFloatNode_clone(struct sFloatNode* self){
void* __result_obj__;
_Bool _if_conditional53;
struct sFloatNode* __result71__;
void* right_value96;
struct sFloatNode* result_30;
_Bool _if_conditional54;
_Bool _if_conditional55;
_Bool _if_conditional56;
void* right_value97;
char* __dec_obj33;
struct sFloatNode* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value96 = (void*)0;
memset(&result_30, 0, sizeof(struct sFloatNode*));
right_value97 = (void*)0;
                    if(_if_conditional53=self==(void*)0,                    _if_conditional53) {
                        __result71__ = __result_obj__ = (void*)0;
                        return __result71__;
                    }
                    result_30=(struct sFloatNode*)come_increment_ref_count(((struct sFloatNode*)(right_value96=(struct sFloatNode*)come_calloc(1, sizeof(struct sFloatNode)*(1), "sFloatNode_clone", 3, "sFloatNode"))));
                    come_call_finalizer2(sFloatNode_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional54=self!=((void*)0),                    _if_conditional54) {
                        result_30->value=self->value;
                    }
                    if(_if_conditional55=self!=((void*)0),                    _if_conditional55) {
                        result_30->sline=self->sline;
                    }
                    if(_if_conditional56=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional56) {
                        __dec_obj33=result_30->sname;
                        result_30->sname=(char*)come_increment_ref_count(((char*)(right_value97=string_clone(self->sname))));
                        __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    __result72__ = __result_obj__ = result_30;
                    come_call_finalizer2(sFloatNode_finalize,result_30, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result72__;
                    come_call_finalizer2(sFloatNode_finalize,result_30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sDoubleNode_finalize(struct sDoubleNode* self){
void* __result_obj__;
_Bool _if_conditional63;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional63=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional63) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sDoubleNode* sDoubleNode_clone(struct sDoubleNode* self){
void* __result_obj__;
_Bool _if_conditional64;
struct sDoubleNode* __result77__;
void* right_value106;
struct sDoubleNode* result_32;
_Bool _if_conditional65;
_Bool _if_conditional66;
_Bool _if_conditional67;
void* right_value107;
char* __dec_obj35;
struct sDoubleNode* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
memset(&result_32, 0, sizeof(struct sDoubleNode*));
right_value107 = (void*)0;
                        if(_if_conditional64=self==(void*)0,                        _if_conditional64) {
                            __result77__ = __result_obj__ = (void*)0;
                            return __result77__;
                        }
                        result_32=(struct sDoubleNode*)come_increment_ref_count(((struct sDoubleNode*)(right_value106=(struct sDoubleNode*)come_calloc(1, sizeof(struct sDoubleNode)*(1), "sDoubleNode_clone", 3, "sDoubleNode"))));
                        come_call_finalizer2(sDoubleNode_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional65=self!=((void*)0),                        _if_conditional65) {
                            result_32->value=self->value;
                        }
                        if(_if_conditional66=self!=((void*)0),                        _if_conditional66) {
                            result_32->sline=self->sline;
                        }
                        if(_if_conditional67=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional67) {
                            __dec_obj35=result_32->sname;
                            result_32->sname=(char*)come_increment_ref_count(((char*)(right_value107=string_clone(self->sname))));
                            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        __result78__ = __result_obj__ = result_32;
                        come_call_finalizer2(sDoubleNode_finalize,result_32, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result78__;
                        come_call_finalizer2(sDoubleNode_finalize,result_32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* create_int_node(int value, struct sInfo* info){
void* __result_obj__;
void* right_value144;
void* right_value145;
struct sNode* _inf_value11;
struct sIntNode* _inf_obj_value11;
void* right_value148;
struct sNode* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
right_value144 = (void*)0;
right_value145 = (void*)0;
right_value148 = (void*)0;
    _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 509, "struct sNode");
    _inf_obj_value11=come_increment_ref_count(((struct sIntNode*)(right_value145=sIntNode_initialize((struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value144=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "05function3.c", 509, "sIntNode")))),value,info))));
    _inf_value11->_protocol_obj=_inf_obj_value11;
    _inf_value11->finalize=(void*)sIntNode_finalize;
    _inf_value11->clone=(void*)sIntNode_clone;
    _inf_value11->compile=(void*)sIntNode_compile;
    _inf_value11->sline=(void*)sIntNode_sline;
    _inf_value11->sname=(void*)sIntNode_sname;
    _inf_value11->terminated=(void*)sIntNode_terminated;
    _inf_value11->kind=(void*)sIntNode_kind;
    __result104__ = __result_obj__ = ((struct sNode*)(right_value148=_inf_value11));
    come_call_finalizer2(sIntNode_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sIntNode_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value148) { right_value148 = come_decrement_ref_count2(right_value148, ((struct sNode*)right_value148)->finalize, ((struct sNode*)right_value148)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result104__;
}

struct sNode* get_hex_number(_Bool minus, struct sInfo* info){
void* __result_obj__;
int buf_size_51;
char* p_53;
_Bool _while_condtional7;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
unsigned long long int value_54;
_Bool _if_conditional119;
void* right_value149;
void* right_value150;
struct sNode* _inf_value12;
struct sULongNode* _inf_obj_value12;
void* right_value153;
struct sNode* __result107__;
void* right_value154;
void* right_value155;
struct sNode* _inf_value13;
struct sULongNode* _inf_obj_value13;
void* right_value158;
struct sNode* __result110__;
unsigned long long int value_57;
_Bool _if_conditional130;
void* right_value159;
void* right_value160;
struct sNode* _inf_value14;
struct sULongNode* _inf_obj_value14;
void* right_value163;
struct sNode* __result113__;
void* right_value164;
void* right_value165;
struct sNode* _inf_value15;
struct sULongNode* _inf_obj_value15;
void* right_value168;
struct sNode* __result116__;
unsigned int value_60;
_Bool _if_conditional141;
void* right_value169;
void* right_value170;
struct sNode* _inf_value16;
struct sUIntNode* _inf_obj_value16;
void* right_value173;
struct sNode* __result119__;
void* right_value174;
void* right_value175;
struct sNode* _inf_value17;
struct sUIntNode* _inf_obj_value17;
void* right_value178;
struct sNode* __result122__;
_Bool _if_conditional152;
_Bool _if_conditional153;
unsigned long long int value_63;
_Bool _if_conditional154;
void* right_value179;
void* right_value180;
struct sNode* _inf_value18;
struct sLongNode* _inf_obj_value18;
void* right_value183;
struct sNode* __result125__;
void* right_value184;
void* right_value185;
struct sNode* _inf_value19;
struct sLongNode* _inf_obj_value19;
void* right_value188;
struct sNode* __result128__;
_Bool _if_conditional165;
unsigned long long int value_66;
_Bool _if_conditional166;
void* right_value189;
void* right_value190;
struct sNode* _inf_value20;
struct sULongNode* _inf_obj_value20;
void* right_value193;
struct sNode* __result131__;
void* right_value194;
void* right_value195;
struct sNode* _inf_value21;
struct sULongNode* _inf_obj_value21;
void* right_value198;
struct sNode* __result134__;
unsigned long long int value_69;
_Bool _if_conditional177;
void* right_value199;
void* right_value200;
struct sNode* _inf_value22;
struct sLongNode* _inf_obj_value22;
void* right_value203;
struct sNode* __result137__;
void* right_value204;
void* right_value205;
struct sNode* _inf_value23;
struct sLongNode* _inf_obj_value23;
void* right_value208;
struct sNode* __result140__;
unsigned long long int value_72;
_Bool _if_conditional188;
void* right_value209;
void* right_value210;
struct sNode* _inf_value24;
struct sIntNode* _inf_obj_value24;
void* right_value213;
struct sNode* __result143__;
void* right_value214;
void* right_value215;
struct sNode* _inf_value25;
struct sIntNode* _inf_obj_value25;
void* right_value218;
struct sNode* __result146__;
struct sNode* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&buf_size_51, 0, sizeof(int));
memset(&p_53, 0, sizeof(char*));
memset(&value_54, 0, sizeof(unsigned long long int));
right_value149 = (void*)0;
right_value150 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
right_value155 = (void*)0;
right_value158 = (void*)0;
memset(&value_57, 0, sizeof(unsigned long long int));
right_value159 = (void*)0;
right_value160 = (void*)0;
right_value163 = (void*)0;
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value168 = (void*)0;
memset(&value_60, 0, sizeof(unsigned int));
right_value169 = (void*)0;
right_value170 = (void*)0;
right_value173 = (void*)0;
right_value174 = (void*)0;
right_value175 = (void*)0;
right_value178 = (void*)0;
memset(&value_63, 0, sizeof(unsigned long long int));
right_value179 = (void*)0;
right_value180 = (void*)0;
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value185 = (void*)0;
right_value188 = (void*)0;
memset(&value_66, 0, sizeof(unsigned long long int));
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value193 = (void*)0;
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value198 = (void*)0;
memset(&value_69, 0, sizeof(unsigned long long int));
right_value199 = (void*)0;
right_value200 = (void*)0;
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value208 = (void*)0;
memset(&value_72, 0, sizeof(unsigned long long int));
right_value209 = (void*)0;
right_value210 = (void*)0;
right_value213 = (void*)0;
right_value214 = (void*)0;
right_value215 = (void*)0;
right_value218 = (void*)0;
    buf_size_51=128;
    char buf_52[128+1];
    memset(&buf_52, 0, sizeof(char)    *(128+1)    );
    p_53=buf_52;
    *p_53++=48;
    *p_53++=120;
    while(_while_condtional7=(*info->p>=48&&*info->p<=57)||(*info->p>=97&&*info->p<=102)||(*info->p>=65&&*info->p<=70)||*info->p==95,    _while_condtional7) {
        if(_if_conditional114=*info->p==95,        _if_conditional114) {
            info->p++;
        }
        else {
            *p_53++=*info->p;
            info->p++;
        }
        if(_if_conditional115=p_53-buf_52>=buf_size_51-1,        _if_conditional115) {
            err_msg(info,"overflow node of number");
            exit(2);
        }
    }
    *p_53=0;
    skip_spaces_and_lf(info);
    if(_if_conditional116=*info->p==117||*info->p==85,    _if_conditional116) {
        info->p++;
        skip_spaces_and_lf(info);
        if(_if_conditional117=*info->p==76||*info->p==108,        _if_conditional117) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional118=*info->p==76||*info->p==108,            _if_conditional118) {
                info->p++;
                skip_spaces_and_lf(info);
                value_54=strtoull(buf_52,((void*)0),0);
                if(minus) {
                    _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 557, "struct sNode");
                    _inf_obj_value12=come_increment_ref_count(((struct sULongNode*)(right_value150=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value149=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 557, "sULongNode")))),-value_54,info))));
                    _inf_value12->_protocol_obj=_inf_obj_value12;
                    _inf_value12->finalize=(void*)sULongNode_finalize;
                    _inf_value12->clone=(void*)sULongNode_clone;
                    _inf_value12->compile=(void*)sULongNode_compile;
                    _inf_value12->sline=(void*)sULongNode_sline;
                    _inf_value12->sname=(void*)sULongNode_sname;
                    _inf_value12->terminated=(void*)sULongNode_terminated;
                    _inf_value12->kind=(void*)sULongNode_kind;
                    __result107__ = __result_obj__ = ((struct sNode*)(right_value153=_inf_value12));
                    come_call_finalizer2(sULongNode_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sULongNode_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value153) { right_value153 = come_decrement_ref_count2(right_value153, ((struct sNode*)right_value153)->finalize, ((struct sNode*)right_value153)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result107__;
                }
                else {
                    _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 560, "struct sNode");
                    _inf_obj_value13=come_increment_ref_count(((struct sULongNode*)(right_value155=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value154=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 560, "sULongNode")))),value_54,info))));
                    _inf_value13->_protocol_obj=_inf_obj_value13;
                    _inf_value13->finalize=(void*)sULongNode_finalize;
                    _inf_value13->clone=(void*)sULongNode_clone;
                    _inf_value13->compile=(void*)sULongNode_compile;
                    _inf_value13->sline=(void*)sULongNode_sline;
                    _inf_value13->sname=(void*)sULongNode_sname;
                    _inf_value13->terminated=(void*)sULongNode_terminated;
                    _inf_value13->kind=(void*)sULongNode_kind;
                    __result110__ = __result_obj__ = ((struct sNode*)(right_value158=_inf_value13));
                    come_call_finalizer2(sULongNode_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sULongNode_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value158) { right_value158 = come_decrement_ref_count2(right_value158, ((struct sNode*)right_value158)->finalize, ((struct sNode*)right_value158)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result110__;
                }
            }
            else {
                value_57=strtoull(buf_52,((void*)0),0);
                if(minus) {
                    _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 567, "struct sNode");
                    _inf_obj_value14=come_increment_ref_count(((struct sULongNode*)(right_value160=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value159=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 567, "sULongNode")))),-value_57,info))));
                    _inf_value14->_protocol_obj=_inf_obj_value14;
                    _inf_value14->finalize=(void*)sULongNode_finalize;
                    _inf_value14->clone=(void*)sULongNode_clone;
                    _inf_value14->compile=(void*)sULongNode_compile;
                    _inf_value14->sline=(void*)sULongNode_sline;
                    _inf_value14->sname=(void*)sULongNode_sname;
                    _inf_value14->terminated=(void*)sULongNode_terminated;
                    _inf_value14->kind=(void*)sULongNode_kind;
                    __result113__ = __result_obj__ = ((struct sNode*)(right_value163=_inf_value14));
                    come_call_finalizer2(sULongNode_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sULongNode_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value163) { right_value163 = come_decrement_ref_count2(right_value163, ((struct sNode*)right_value163)->finalize, ((struct sNode*)right_value163)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result113__;
                }
                else {
                    _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 570, "struct sNode");
                    _inf_obj_value15=come_increment_ref_count(((struct sULongNode*)(right_value165=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value164=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 570, "sULongNode")))),value_57,info))));
                    _inf_value15->_protocol_obj=_inf_obj_value15;
                    _inf_value15->finalize=(void*)sULongNode_finalize;
                    _inf_value15->clone=(void*)sULongNode_clone;
                    _inf_value15->compile=(void*)sULongNode_compile;
                    _inf_value15->sline=(void*)sULongNode_sline;
                    _inf_value15->sname=(void*)sULongNode_sname;
                    _inf_value15->terminated=(void*)sULongNode_terminated;
                    _inf_value15->kind=(void*)sULongNode_kind;
                    __result116__ = __result_obj__ = ((struct sNode*)(right_value168=_inf_value15));
                    come_call_finalizer2(sULongNode_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sULongNode_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value168) { right_value168 = come_decrement_ref_count2(right_value168, ((struct sNode*)right_value168)->finalize, ((struct sNode*)right_value168)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result116__;
                }
            }
        }
        else {
            value_60=strtoull(buf_52,((void*)0),0);
            if(minus) {
                _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 578, "struct sNode");
                _inf_obj_value16=come_increment_ref_count(((struct sUIntNode*)(right_value170=sUIntNode_initialize((struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(right_value169=(struct sUIntNode*)come_calloc(1, sizeof(struct sUIntNode)*(1), "05function3.c", 578, "sUIntNode")))),-value_60,info))));
                _inf_value16->_protocol_obj=_inf_obj_value16;
                _inf_value16->finalize=(void*)sUIntNode_finalize;
                _inf_value16->clone=(void*)sUIntNode_clone;
                _inf_value16->compile=(void*)sUIntNode_compile;
                _inf_value16->sline=(void*)sUIntNode_sline;
                _inf_value16->sname=(void*)sUIntNode_sname;
                _inf_value16->terminated=(void*)sUIntNode_terminated;
                _inf_value16->kind=(void*)sUIntNode_kind;
                __result119__ = __result_obj__ = ((struct sNode*)(right_value173=_inf_value16));
                come_call_finalizer2(sUIntNode_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sUIntNode_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value173) { right_value173 = come_decrement_ref_count2(right_value173, ((struct sNode*)right_value173)->finalize, ((struct sNode*)right_value173)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result119__;
            }
            else {
                _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 581, "struct sNode");
                _inf_obj_value17=come_increment_ref_count(((struct sUIntNode*)(right_value175=sUIntNode_initialize((struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(right_value174=(struct sUIntNode*)come_calloc(1, sizeof(struct sUIntNode)*(1), "05function3.c", 581, "sUIntNode")))),value_60,info))));
                _inf_value17->_protocol_obj=_inf_obj_value17;
                _inf_value17->finalize=(void*)sUIntNode_finalize;
                _inf_value17->clone=(void*)sUIntNode_clone;
                _inf_value17->compile=(void*)sUIntNode_compile;
                _inf_value17->sline=(void*)sUIntNode_sline;
                _inf_value17->sname=(void*)sUIntNode_sname;
                _inf_value17->terminated=(void*)sUIntNode_terminated;
                _inf_value17->kind=(void*)sUIntNode_kind;
                __result122__ = __result_obj__ = ((struct sNode*)(right_value178=_inf_value17));
                come_call_finalizer2(sUIntNode_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sUIntNode_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value178) { right_value178 = come_decrement_ref_count2(right_value178, ((struct sNode*)right_value178)->finalize, ((struct sNode*)right_value178)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result122__;
            }
        }
    }
    else {
        if(_if_conditional152=*info->p==76||*info->p==108,        _if_conditional152) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional153=*info->p==76||*info->p==108,            _if_conditional153) {
                info->p++;
                skip_spaces_and_lf(info);
                value_63=strtoull(buf_52,((void*)0),0);
                if(minus) {
                    _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 596, "struct sNode");
                    _inf_obj_value18=come_increment_ref_count(((struct sLongNode*)(right_value180=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value179=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05function3.c", 596, "sLongNode")))),-value_63,info))));
                    _inf_value18->_protocol_obj=_inf_obj_value18;
                    _inf_value18->finalize=(void*)sLongNode_finalize;
                    _inf_value18->clone=(void*)sLongNode_clone;
                    _inf_value18->compile=(void*)sLongNode_compile;
                    _inf_value18->sline=(void*)sLongNode_sline;
                    _inf_value18->sname=(void*)sLongNode_sname;
                    _inf_value18->terminated=(void*)sLongNode_terminated;
                    _inf_value18->kind=(void*)sLongNode_kind;
                    __result125__ = __result_obj__ = ((struct sNode*)(right_value183=_inf_value18));
                    come_call_finalizer2(sLongNode_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sLongNode_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value183) { right_value183 = come_decrement_ref_count2(right_value183, ((struct sNode*)right_value183)->finalize, ((struct sNode*)right_value183)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result125__;
                }
                else {
                    _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 599, "struct sNode");
                    _inf_obj_value19=come_increment_ref_count(((struct sLongNode*)(right_value185=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value184=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05function3.c", 599, "sLongNode")))),value_63,info))));
                    _inf_value19->_protocol_obj=_inf_obj_value19;
                    _inf_value19->finalize=(void*)sLongNode_finalize;
                    _inf_value19->clone=(void*)sLongNode_clone;
                    _inf_value19->compile=(void*)sLongNode_compile;
                    _inf_value19->sline=(void*)sLongNode_sline;
                    _inf_value19->sname=(void*)sLongNode_sname;
                    _inf_value19->terminated=(void*)sLongNode_terminated;
                    _inf_value19->kind=(void*)sLongNode_kind;
                    __result128__ = __result_obj__ = ((struct sNode*)(right_value188=_inf_value19));
                    come_call_finalizer2(sLongNode_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sLongNode_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value188) { right_value188 = come_decrement_ref_count2(right_value188, ((struct sNode*)right_value188)->finalize, ((struct sNode*)right_value188)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result128__;
                }
            }
            else {
                if(_if_conditional165=*info->p==85||*info->p==117,                _if_conditional165) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    value_66=strtoull(buf_52,((void*)0),0);
                    if(minus) {
                        _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 609, "struct sNode");
                        _inf_obj_value20=come_increment_ref_count(((struct sULongNode*)(right_value190=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value189=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 609, "sULongNode")))),-value_66,info))));
                        _inf_value20->_protocol_obj=_inf_obj_value20;
                        _inf_value20->finalize=(void*)sULongNode_finalize;
                        _inf_value20->clone=(void*)sULongNode_clone;
                        _inf_value20->compile=(void*)sULongNode_compile;
                        _inf_value20->sline=(void*)sULongNode_sline;
                        _inf_value20->sname=(void*)sULongNode_sname;
                        _inf_value20->terminated=(void*)sULongNode_terminated;
                        _inf_value20->kind=(void*)sULongNode_kind;
                        __result131__ = __result_obj__ = ((struct sNode*)(right_value193=_inf_value20));
                        come_call_finalizer2(sULongNode_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sULongNode_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value193) { right_value193 = come_decrement_ref_count2(right_value193, ((struct sNode*)right_value193)->finalize, ((struct sNode*)right_value193)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result131__;
                    }
                    else {
                        _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 612, "struct sNode");
                        _inf_obj_value21=come_increment_ref_count(((struct sULongNode*)(right_value195=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value194=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 612, "sULongNode")))),value_66,info))));
                        _inf_value21->_protocol_obj=_inf_obj_value21;
                        _inf_value21->finalize=(void*)sULongNode_finalize;
                        _inf_value21->clone=(void*)sULongNode_clone;
                        _inf_value21->compile=(void*)sULongNode_compile;
                        _inf_value21->sline=(void*)sULongNode_sline;
                        _inf_value21->sname=(void*)sULongNode_sname;
                        _inf_value21->terminated=(void*)sULongNode_terminated;
                        _inf_value21->kind=(void*)sULongNode_kind;
                        __result134__ = __result_obj__ = ((struct sNode*)(right_value198=_inf_value21));
                        come_call_finalizer2(sULongNode_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sULongNode_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value198) { right_value198 = come_decrement_ref_count2(right_value198, ((struct sNode*)right_value198)->finalize, ((struct sNode*)right_value198)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result134__;
                    }
                }
                else {
                    value_69=strtoull(buf_52,((void*)0),0);
                    if(minus) {
                        _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 618, "struct sNode");
                        _inf_obj_value22=come_increment_ref_count(((struct sLongNode*)(right_value200=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value199=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05function3.c", 618, "sLongNode")))),-value_69,info))));
                        _inf_value22->_protocol_obj=_inf_obj_value22;
                        _inf_value22->finalize=(void*)sLongNode_finalize;
                        _inf_value22->clone=(void*)sLongNode_clone;
                        _inf_value22->compile=(void*)sLongNode_compile;
                        _inf_value22->sline=(void*)sLongNode_sline;
                        _inf_value22->sname=(void*)sLongNode_sname;
                        _inf_value22->terminated=(void*)sLongNode_terminated;
                        _inf_value22->kind=(void*)sLongNode_kind;
                        __result137__ = __result_obj__ = ((struct sNode*)(right_value203=_inf_value22));
                        come_call_finalizer2(sLongNode_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sLongNode_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value203) { right_value203 = come_decrement_ref_count2(right_value203, ((struct sNode*)right_value203)->finalize, ((struct sNode*)right_value203)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result137__;
                    }
                    else {
                        _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 621, "struct sNode");
                        _inf_obj_value23=come_increment_ref_count(((struct sLongNode*)(right_value205=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value204=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05function3.c", 621, "sLongNode")))),value_69,info))));
                        _inf_value23->_protocol_obj=_inf_obj_value23;
                        _inf_value23->finalize=(void*)sLongNode_finalize;
                        _inf_value23->clone=(void*)sLongNode_clone;
                        _inf_value23->compile=(void*)sLongNode_compile;
                        _inf_value23->sline=(void*)sLongNode_sline;
                        _inf_value23->sname=(void*)sLongNode_sname;
                        _inf_value23->terminated=(void*)sLongNode_terminated;
                        _inf_value23->kind=(void*)sLongNode_kind;
                        __result140__ = __result_obj__ = ((struct sNode*)(right_value208=_inf_value23));
                        come_call_finalizer2(sLongNode_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sLongNode_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value208) { right_value208 = come_decrement_ref_count2(right_value208, ((struct sNode*)right_value208)->finalize, ((struct sNode*)right_value208)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result140__;
                    }
                }
            }
        }
        else {
            value_72=strtoll(buf_52,((void*)0),0);
            if(minus) {
                _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 628, "struct sNode");
                _inf_obj_value24=come_increment_ref_count(((struct sIntNode*)(right_value210=sIntNode_initialize((struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value209=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "05function3.c", 628, "sIntNode")))),-value_72,info))));
                _inf_value24->_protocol_obj=_inf_obj_value24;
                _inf_value24->finalize=(void*)sIntNode_finalize;
                _inf_value24->clone=(void*)sIntNode_clone;
                _inf_value24->compile=(void*)sIntNode_compile;
                _inf_value24->sline=(void*)sIntNode_sline;
                _inf_value24->sname=(void*)sIntNode_sname;
                _inf_value24->terminated=(void*)sIntNode_terminated;
                _inf_value24->kind=(void*)sIntNode_kind;
                __result143__ = __result_obj__ = ((struct sNode*)(right_value213=_inf_value24));
                come_call_finalizer2(sIntNode_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sIntNode_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value213) { right_value213 = come_decrement_ref_count2(right_value213, ((struct sNode*)right_value213)->finalize, ((struct sNode*)right_value213)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result143__;
            }
            else {
                _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 631, "struct sNode");
                _inf_obj_value25=come_increment_ref_count(((struct sIntNode*)(right_value215=sIntNode_initialize((struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value214=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "05function3.c", 631, "sIntNode")))),value_72,info))));
                _inf_value25->_protocol_obj=_inf_obj_value25;
                _inf_value25->finalize=(void*)sIntNode_finalize;
                _inf_value25->clone=(void*)sIntNode_clone;
                _inf_value25->compile=(void*)sIntNode_compile;
                _inf_value25->sline=(void*)sIntNode_sline;
                _inf_value25->sname=(void*)sIntNode_sname;
                _inf_value25->terminated=(void*)sIntNode_terminated;
                _inf_value25->kind=(void*)sIntNode_kind;
                __result146__ = __result_obj__ = ((struct sNode*)(right_value218=_inf_value25));
                come_call_finalizer2(sIntNode_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sIntNode_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value218) { right_value218 = come_decrement_ref_count2(right_value218, ((struct sNode*)right_value218)->finalize, ((struct sNode*)right_value218)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result146__;
            }
        }
    }
    __result147__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result147__;
}

struct sNode* get_oct_number(struct sInfo* info){
void* __result_obj__;
int buf_size_75;
char* p_77;
_Bool _while_condtional8;
_Bool _if_conditional199;
_Bool _if_conditional200;
_Bool _if_conditional201;
_Bool _if_conditional202;
_Bool _if_conditional203;
unsigned long long int value_78;
void* right_value219;
void* right_value220;
struct sNode* _inf_value26;
struct sULongNode* _inf_obj_value26;
void* right_value223;
struct sNode* __result150__;
unsigned long long int value_80;
void* right_value224;
void* right_value225;
struct sNode* _inf_value27;
struct sULongNode* _inf_obj_value27;
void* right_value228;
struct sNode* __result153__;
unsigned int value_82;
void* right_value229;
void* right_value230;
struct sNode* _inf_value28;
struct sUIntNode* _inf_obj_value28;
void* right_value233;
struct sNode* __result156__;
_Bool _if_conditional219;
_Bool _if_conditional220;
unsigned long long int value_84;
void* right_value234;
void* right_value235;
struct sNode* _inf_value29;
struct sLongNode* _inf_obj_value29;
void* right_value238;
struct sNode* __result159__;
_Bool _if_conditional226;
unsigned long long int value_86;
void* right_value239;
void* right_value240;
struct sNode* _inf_value30;
struct sULongNode* _inf_obj_value30;
void* right_value243;
struct sNode* __result162__;
unsigned long long int value_88;
void* right_value244;
void* right_value245;
struct sNode* _inf_value31;
struct sLongNode* _inf_obj_value31;
void* right_value248;
struct sNode* __result165__;
unsigned long long int value_90;
void* right_value249;
void* right_value250;
struct sNode* _inf_value32;
struct sIntNode* _inf_obj_value32;
void* right_value253;
struct sNode* __result168__;
struct sNode* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&buf_size_75, 0, sizeof(int));
memset(&p_77, 0, sizeof(char*));
memset(&value_78, 0, sizeof(unsigned long long int));
right_value219 = (void*)0;
right_value220 = (void*)0;
right_value223 = (void*)0;
memset(&value_80, 0, sizeof(unsigned long long int));
right_value224 = (void*)0;
right_value225 = (void*)0;
right_value228 = (void*)0;
memset(&value_82, 0, sizeof(unsigned int));
right_value229 = (void*)0;
right_value230 = (void*)0;
right_value233 = (void*)0;
memset(&value_84, 0, sizeof(unsigned long long int));
right_value234 = (void*)0;
right_value235 = (void*)0;
right_value238 = (void*)0;
memset(&value_86, 0, sizeof(unsigned long long int));
right_value239 = (void*)0;
right_value240 = (void*)0;
right_value243 = (void*)0;
memset(&value_88, 0, sizeof(unsigned long long int));
right_value244 = (void*)0;
right_value245 = (void*)0;
right_value248 = (void*)0;
memset(&value_90, 0, sizeof(unsigned long long int));
right_value249 = (void*)0;
right_value250 = (void*)0;
right_value253 = (void*)0;
    buf_size_75=128;
    char buf_76[128+1];
    memset(&buf_76, 0, sizeof(char)    *(128+1)    );
    p_77=buf_76;
    *p_77++=48;
    while(_while_condtional8=(*info->p>=48&&*info->p<=55)||*info->p==95,    _while_condtional8) {
        if(_if_conditional199=*info->p==95,        _if_conditional199) {
            info->p++;
        }
        else {
            *p_77=*info->p;
            p_77++;
            info->p++;
        }
        if(_if_conditional200=p_77-buf_76>=buf_size_75-1,        _if_conditional200) {
            err_msg(info,"overflow node of number");
            exit(2);
        }
    }
    *p_77=0;
    skip_spaces_and_lf(info);
    if(_if_conditional201=*info->p==117||*info->p==85,    _if_conditional201) {
        info->p++;
        skip_spaces_and_lf(info);
        if(_if_conditional202=*info->p==76||*info->p==108,        _if_conditional202) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional203=*info->p==76||*info->p==108,            _if_conditional203) {
                info->p++;
                skip_spaces_and_lf(info);
                value_78=strtoull(buf_76,((void*)0),0);
                _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 682, "struct sNode");
                _inf_obj_value26=come_increment_ref_count(((struct sULongNode*)(right_value220=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value219=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 682, "sULongNode")))),value_78,info))));
                _inf_value26->_protocol_obj=_inf_obj_value26;
                _inf_value26->finalize=(void*)sULongNode_finalize;
                _inf_value26->clone=(void*)sULongNode_clone;
                _inf_value26->compile=(void*)sULongNode_compile;
                _inf_value26->sline=(void*)sULongNode_sline;
                _inf_value26->sname=(void*)sULongNode_sname;
                _inf_value26->terminated=(void*)sULongNode_terminated;
                _inf_value26->kind=(void*)sULongNode_kind;
                __result150__ = __result_obj__ = ((struct sNode*)(right_value223=_inf_value26));
                come_call_finalizer2(sULongNode_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sULongNode_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value223) { right_value223 = come_decrement_ref_count2(right_value223, ((struct sNode*)right_value223)->finalize, ((struct sNode*)right_value223)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result150__;
            }
            else {
                value_80=strtoull(buf_76,((void*)0),0);
                _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 686, "struct sNode");
                _inf_obj_value27=come_increment_ref_count(((struct sULongNode*)(right_value225=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value224=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 686, "sULongNode")))),value_80,info))));
                _inf_value27->_protocol_obj=_inf_obj_value27;
                _inf_value27->finalize=(void*)sULongNode_finalize;
                _inf_value27->clone=(void*)sULongNode_clone;
                _inf_value27->compile=(void*)sULongNode_compile;
                _inf_value27->sline=(void*)sULongNode_sline;
                _inf_value27->sname=(void*)sULongNode_sname;
                _inf_value27->terminated=(void*)sULongNode_terminated;
                _inf_value27->kind=(void*)sULongNode_kind;
                __result153__ = __result_obj__ = ((struct sNode*)(right_value228=_inf_value27));
                come_call_finalizer2(sULongNode_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sULongNode_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value228) { right_value228 = come_decrement_ref_count2(right_value228, ((struct sNode*)right_value228)->finalize, ((struct sNode*)right_value228)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result153__;
            }
        }
        else {
            value_82=strtoul(buf_76,((void*)0),0);
            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 691, "struct sNode");
            _inf_obj_value28=come_increment_ref_count(((struct sUIntNode*)(right_value230=sUIntNode_initialize((struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(right_value229=(struct sUIntNode*)come_calloc(1, sizeof(struct sUIntNode)*(1), "05function3.c", 691, "sUIntNode")))),value_82,info))));
            _inf_value28->_protocol_obj=_inf_obj_value28;
            _inf_value28->finalize=(void*)sUIntNode_finalize;
            _inf_value28->clone=(void*)sUIntNode_clone;
            _inf_value28->compile=(void*)sUIntNode_compile;
            _inf_value28->sline=(void*)sUIntNode_sline;
            _inf_value28->sname=(void*)sUIntNode_sname;
            _inf_value28->terminated=(void*)sUIntNode_terminated;
            _inf_value28->kind=(void*)sUIntNode_kind;
            __result156__ = __result_obj__ = ((struct sNode*)(right_value233=_inf_value28));
            come_call_finalizer2(sUIntNode_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sUIntNode_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value233) { right_value233 = come_decrement_ref_count2(right_value233, ((struct sNode*)right_value233)->finalize, ((struct sNode*)right_value233)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result156__;
        }
    }
    else {
        if(_if_conditional219=*info->p==76||*info->p==108,        _if_conditional219) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional220=*info->p==76||*info->p==108,            _if_conditional220) {
                info->p++;
                skip_spaces_and_lf(info);
                value_84=strtoull(buf_76,((void*)0),0);
                _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 704, "struct sNode");
                _inf_obj_value29=come_increment_ref_count(((struct sLongNode*)(right_value235=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value234=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05function3.c", 704, "sLongNode")))),value_84,info))));
                _inf_value29->_protocol_obj=_inf_obj_value29;
                _inf_value29->finalize=(void*)sLongNode_finalize;
                _inf_value29->clone=(void*)sLongNode_clone;
                _inf_value29->compile=(void*)sLongNode_compile;
                _inf_value29->sline=(void*)sLongNode_sline;
                _inf_value29->sname=(void*)sLongNode_sname;
                _inf_value29->terminated=(void*)sLongNode_terminated;
                _inf_value29->kind=(void*)sLongNode_kind;
                __result159__ = __result_obj__ = ((struct sNode*)(right_value238=_inf_value29));
                come_call_finalizer2(sLongNode_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sLongNode_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value238) { right_value238 = come_decrement_ref_count2(right_value238, ((struct sNode*)right_value238)->finalize, ((struct sNode*)right_value238)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result159__;
            }
            else {
                if(_if_conditional226=*info->p==85||*info->p==117,                _if_conditional226) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    value_86=strtoull(buf_76,((void*)0),0);
                    _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 712, "struct sNode");
                    _inf_obj_value30=come_increment_ref_count(((struct sULongNode*)(right_value240=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value239=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 712, "sULongNode")))),value_86,info))));
                    _inf_value30->_protocol_obj=_inf_obj_value30;
                    _inf_value30->finalize=(void*)sULongNode_finalize;
                    _inf_value30->clone=(void*)sULongNode_clone;
                    _inf_value30->compile=(void*)sULongNode_compile;
                    _inf_value30->sline=(void*)sULongNode_sline;
                    _inf_value30->sname=(void*)sULongNode_sname;
                    _inf_value30->terminated=(void*)sULongNode_terminated;
                    _inf_value30->kind=(void*)sULongNode_kind;
                    __result162__ = __result_obj__ = ((struct sNode*)(right_value243=_inf_value30));
                    come_call_finalizer2(sULongNode_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sULongNode_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value243) { right_value243 = come_decrement_ref_count2(right_value243, ((struct sNode*)right_value243)->finalize, ((struct sNode*)right_value243)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result162__;
                }
                else {
                    value_88=strtoull(buf_76,((void*)0),0);
                    _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 716, "struct sNode");
                    _inf_obj_value31=come_increment_ref_count(((struct sLongNode*)(right_value245=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value244=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05function3.c", 716, "sLongNode")))),value_88,info))));
                    _inf_value31->_protocol_obj=_inf_obj_value31;
                    _inf_value31->finalize=(void*)sLongNode_finalize;
                    _inf_value31->clone=(void*)sLongNode_clone;
                    _inf_value31->compile=(void*)sLongNode_compile;
                    _inf_value31->sline=(void*)sLongNode_sline;
                    _inf_value31->sname=(void*)sLongNode_sname;
                    _inf_value31->terminated=(void*)sLongNode_terminated;
                    _inf_value31->kind=(void*)sLongNode_kind;
                    __result165__ = __result_obj__ = ((struct sNode*)(right_value248=_inf_value31));
                    come_call_finalizer2(sLongNode_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sLongNode_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value248) { right_value248 = come_decrement_ref_count2(right_value248, ((struct sNode*)right_value248)->finalize, ((struct sNode*)right_value248)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result165__;
                }
            }
        }
        else {
            value_90=strtoull(buf_76,((void*)0),0);
            _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 721, "struct sNode");
            _inf_obj_value32=come_increment_ref_count(((struct sIntNode*)(right_value250=sIntNode_initialize((struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value249=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "05function3.c", 721, "sIntNode")))),value_90,info))));
            _inf_value32->_protocol_obj=_inf_obj_value32;
            _inf_value32->finalize=(void*)sIntNode_finalize;
            _inf_value32->clone=(void*)sIntNode_clone;
            _inf_value32->compile=(void*)sIntNode_compile;
            _inf_value32->sline=(void*)sIntNode_sline;
            _inf_value32->sname=(void*)sIntNode_sname;
            _inf_value32->terminated=(void*)sIntNode_terminated;
            _inf_value32->kind=(void*)sIntNode_kind;
            __result168__ = __result_obj__ = ((struct sNode*)(right_value253=_inf_value32));
            come_call_finalizer2(sIntNode_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sIntNode_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value253) { right_value253 = come_decrement_ref_count2(right_value253, ((struct sNode*)right_value253)->finalize, ((struct sNode*)right_value253)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result168__;
        }
    }
    __result169__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result169__;
}

static void sUIntNode_finalize(struct sUIntNode* self){
void* __result_obj__;
_Bool _if_conditional214;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional214=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional214) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sUIntNode* sUIntNode_clone(struct sUIntNode* self){
void* __result_obj__;
_Bool _if_conditional215;
struct sUIntNode* __result154__;
void* right_value231;
struct sUIntNode* result_83;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
void* right_value232;
char* __dec_obj60;
struct sUIntNode* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
right_value231 = (void*)0;
memset(&result_83, 0, sizeof(struct sUIntNode*));
right_value232 = (void*)0;
                if(_if_conditional215=self==(void*)0,                _if_conditional215) {
                    __result154__ = __result_obj__ = (void*)0;
                    return __result154__;
                }
                result_83=(struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(right_value231=(struct sUIntNode*)come_calloc(1, sizeof(struct sUIntNode)*(1), "sUIntNode_clone", 3, "sUIntNode"))));
                come_call_finalizer2(sUIntNode_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional216=self!=((void*)0),                _if_conditional216) {
                    result_83->value=self->value;
                }
                if(_if_conditional217=self!=((void*)0),                _if_conditional217) {
                    result_83->sline=self->sline;
                }
                if(_if_conditional218=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional218) {
                    __dec_obj60=result_83->sname;
                    result_83->sname=(char*)come_increment_ref_count(((char*)(right_value232=string_clone(self->sname))));
                    __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result155__ = __result_obj__ = result_83;
                come_call_finalizer2(sUIntNode_finalize,result_83, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result155__;
                come_call_finalizer2(sUIntNode_finalize,result_83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sULongNode_finalize(struct sULongNode* self){
void* __result_obj__;
_Bool _if_conditional227;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional227=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional227) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sULongNode* sULongNode_clone(struct sULongNode* self){
void* __result_obj__;
_Bool _if_conditional228;
struct sULongNode* __result160__;
void* right_value241;
struct sULongNode* result_87;
_Bool _if_conditional229;
_Bool _if_conditional230;
_Bool _if_conditional231;
void* right_value242;
char* __dec_obj62;
struct sULongNode* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
right_value241 = (void*)0;
memset(&result_87, 0, sizeof(struct sULongNode*));
right_value242 = (void*)0;
                        if(_if_conditional228=self==(void*)0,                        _if_conditional228) {
                            __result160__ = __result_obj__ = (void*)0;
                            return __result160__;
                        }
                        result_87=(struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value241=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "sULongNode_clone", 3, "sULongNode"))));
                        come_call_finalizer2(sULongNode_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional229=self!=((void*)0),                        _if_conditional229) {
                            result_87->value=self->value;
                        }
                        if(_if_conditional230=self!=((void*)0),                        _if_conditional230) {
                            result_87->sline=self->sline;
                        }
                        if(_if_conditional231=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional231) {
                            __dec_obj62=result_87->sname;
                            result_87->sname=(char*)come_increment_ref_count(((char*)(right_value242=string_clone(self->sname))));
                            __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        __result161__ = __result_obj__ = result_87;
                        come_call_finalizer2(sULongNode_finalize,result_87, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result161__;
                        come_call_finalizer2(sULongNode_finalize,result_87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sLongNode_finalize(struct sLongNode* self){
void* __result_obj__;
_Bool _if_conditional232;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional232=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional232) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sLongNode* sLongNode_clone(struct sLongNode* self){
void* __result_obj__;
_Bool _if_conditional233;
struct sLongNode* __result163__;
void* right_value246;
struct sLongNode* result_89;
_Bool _if_conditional234;
_Bool _if_conditional235;
_Bool _if_conditional236;
void* right_value247;
char* __dec_obj63;
struct sLongNode* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
right_value246 = (void*)0;
memset(&result_89, 0, sizeof(struct sLongNode*));
right_value247 = (void*)0;
                        if(_if_conditional233=self==(void*)0,                        _if_conditional233) {
                            __result163__ = __result_obj__ = (void*)0;
                            return __result163__;
                        }
                        result_89=(struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value246=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "sLongNode_clone", 3, "sLongNode"))));
                        come_call_finalizer2(sLongNode_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional234=self!=((void*)0),                        _if_conditional234) {
                            result_89->value=self->value;
                        }
                        if(_if_conditional235=self!=((void*)0),                        _if_conditional235) {
                            result_89->sline=self->sline;
                        }
                        if(_if_conditional236=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional236) {
                            __dec_obj63=result_89->sname;
                            result_89->sname=(char*)come_increment_ref_count(((char*)(right_value247=string_clone(self->sname))));
                            __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        __result164__ = __result_obj__ = result_89;
                        come_call_finalizer2(sLongNode_finalize,result_89, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result164__;
                        come_call_finalizer2(sLongNode_finalize,result_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sIntNode_finalize(struct sIntNode* self){
void* __result_obj__;
_Bool _if_conditional237;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional237=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional237) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sIntNode* sIntNode_clone(struct sIntNode* self){
void* __result_obj__;
_Bool _if_conditional238;
struct sIntNode* __result166__;
void* right_value251;
struct sIntNode* result_91;
_Bool _if_conditional239;
_Bool _if_conditional240;
_Bool _if_conditional241;
void* right_value252;
char* __dec_obj64;
struct sIntNode* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
right_value251 = (void*)0;
memset(&result_91, 0, sizeof(struct sIntNode*));
right_value252 = (void*)0;
                if(_if_conditional238=self==(void*)0,                _if_conditional238) {
                    __result166__ = __result_obj__ = (void*)0;
                    return __result166__;
                }
                result_91=(struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value251=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "sIntNode_clone", 3, "sIntNode"))));
                come_call_finalizer2(sIntNode_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional239=self!=((void*)0),                _if_conditional239) {
                    result_91->value=self->value;
                }
                if(_if_conditional240=self!=((void*)0),                _if_conditional240) {
                    result_91->sline=self->sline;
                }
                if(_if_conditional241=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional241) {
                    __dec_obj64=result_91->sname;
                    result_91->sname=(char*)come_increment_ref_count(((char*)(right_value252=string_clone(self->sname))));
                    __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value252 = come_decrement_ref_count2(right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result167__ = __result_obj__ = result_91;
                come_call_finalizer2(sIntNode_finalize,result_91, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result167__;
                come_call_finalizer2(sIntNode_finalize,result_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

