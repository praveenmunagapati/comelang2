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
typedef int wchar_t;
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
int gRightValueNum=0;
struct optional$2sFunpbool
{
    struct sFun* v1;
    _Bool v2;
};
struct optional$2sGenericsFunpbool
{
    struct sGenericsFun* v1;
    _Bool v2;
};
struct optional$2sVarpbool
{
    struct sVar* v1;
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

int mbtowc(int* anonymous_var_nameX235, const char* anonymous_var_nameX236, unsigned long int anonymous_var_nameX237);

int wctomb(char* anonymous_var_nameX238, int anonymous_var_nameX239);

unsigned long int mbstowcs(int* anonymous_var_nameX240, const char* anonymous_var_nameX241, unsigned long int anonymous_var_nameX242);

unsigned long int wcstombs(char* anonymous_var_nameX243, const int* anonymous_var_nameX244, unsigned long int anonymous_var_nameX245);

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

void* memccpy(void* anonymous_var_nameX432, const void* anonymous_var_nameX433, int anonymous_var_nameX434, unsigned long int anonymous_var_nameX435);

char* strsep(char** anonymous_var_nameX436, const char* anonymous_var_nameX437);

unsigned long int strlcat(char* anonymous_var_nameX438, const char* anonymous_var_nameX439, unsigned long int anonymous_var_nameX440);

unsigned long int strlcpy(char* anonymous_var_nameX441, const char* anonymous_var_nameX442, unsigned long int anonymous_var_nameX443);

void explicit_bzero(void* anonymous_var_nameX444, unsigned long int anonymous_var_nameX445);

int strverscmp(const char* anonymous_var_nameX446, const char* anonymous_var_nameX447);

char* strchrnul(const char* anonymous_var_nameX448, int anonymous_var_nameX449);

char* strcasestr(const char* anonymous_var_nameX450, const char* anonymous_var_nameX451);

void* memmem(const void* anonymous_var_nameX452, unsigned long int anonymous_var_nameX453, const void* anonymous_var_nameX454, unsigned long int anonymous_var_nameX455);

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

_Bool xiswascii(int c);

_Bool xiswalpha(int c);

_Bool xiswblank(int c);

_Bool xiswdigit(int c);

_Bool xiswalnum(int c);

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

struct optional$2charphbool* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info);

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

struct optional$2charphbool* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info);

void transpiler_clear_last_code(struct sInfo* info);

_Bool output_header_file(struct sInfo* info);

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

void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info);

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info);

static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
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
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static int list$1sNodeph_length(struct list$1sNodeph* self);
struct sType* solve_type(struct sType* type, struct sType* generics_type, struct list$1sTypeph* method_generics_types, struct sInfo* info);

int get_right_value_id_from_obj(char* obj);

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info);

static void sRightValueObject_finalize(struct sRightValueObject* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_push_back(struct list$1sRightValueObjectph* self, struct sRightValueObject* item);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
static char* optional$2charphbool_value(struct optional$2charphbool* self);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);

static struct sRightValueObject* list$1sRightValueObjectph_begin(struct list$1sRightValueObjectph* self);
static _Bool list$1sRightValueObjectph_end(struct list$1sRightValueObjectph* self);
static struct sRightValueObject* list$1sRightValueObjectph_next(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_delete(struct list$1sRightValueObjectph* self, int head, int tail);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);

static char* optional$2charphbool_expect(struct optional$2charphbool* self);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_);

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2);
static void optional$2sFunpboolp_finalize(struct optional$2sFunpbool* self);
static struct sGenericsFun* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key);
static struct optional$2sGenericsFunpbool* optional$2sGenericsFunpbool_initialize(struct optional$2sGenericsFunpbool* self, struct sGenericsFun* v1, _Bool v2);
static void optional$2sGenericsFunpboolp_finalize(struct optional$2sGenericsFunpbool* self);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self);
static void list$1CVALUEph_finalize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static void CVALUE_finalize(struct CVALUE* self);
void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_);

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info);

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
_Bool create_equals_method(struct sType* type, struct sInfo* info);

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info);

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info);

void free_right_value_objects(struct sInfo* info, _Bool comma);

_Bool is_right_values(int right_value_num, struct sInfo* info);

struct sVar* get_variable_from_table(struct sVarTable* table, char* name);

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static struct optional$2sVarpbool* optional$2sVarpbool_initialize(struct optional$2sVarpbool* self, struct sVar* v1, _Bool v2);
static void optional$2sVarpboolp_finalize(struct optional$2sVarpbool* self);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);

void free_objects_on_break(struct sInfo* info);

char* append_exception_value(char* c_value, struct sType* type, struct sInfo* info);

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
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1997))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value0);
    if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value0;
    __freed_obj__ = 0;
    __dec_obj1=result_0->memory;
    result_0->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_clone(self))));
    if(__dec_obj1) { come_call_finalizer(buffer_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value1);
    if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value1;
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
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2007))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value2);
    if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value2;
    __freed_obj__ = 0;
    __dec_obj2=result_1->memory;
    result_1->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_clone(self))));
    if(__dec_obj2) { come_call_finalizer(buffer_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value3);
    if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value3;
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
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2017))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value4);
    if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value4;
    __freed_obj__ = 0;
    __dec_obj3=result_2->memory;
    result_2->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_clone(self))));
    if(__dec_obj3) { come_call_finalizer(buffer_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value5);
    if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value5;
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
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2027))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value6);
    if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value6;
    __freed_obj__ = 0;
    __dec_obj4=result_3->memory;
    result_3->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_clone(self))));
    if(__dec_obj4) { come_call_finalizer(buffer_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value7);
    if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value7;
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
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2037))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value8);
    if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value8;
    __freed_obj__ = 0;
    __dec_obj5=result_4->memory;
    result_4->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_clone(self))));
    if(__dec_obj5) { come_call_finalizer(buffer_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value9);
    if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value9;
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

void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional5;
_Bool _if_conditional6;
_Bool _if_conditional7;
char* __dec_obj6;
_Bool _if_conditional8;
void* right_value10;
char* __dec_obj7;
_Bool _if_conditional9;
void* right_value11;
char* __dec_obj8;
void* right_value12;
char* __dec_obj9;
_Bool _if_conditional10;
void* right_value13;
char* __dec_obj10;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
memset(&right_value11, 0, sizeof(void*));
memset(&right_value12, 0, sizeof(void*));
memset(&right_value13, 0, sizeof(void*));
    if(_if_conditional5=gComeGC,    _if_conditional5) {
        return;
    }
    if(_if_conditional6=right_value->var,    _if_conditional6) {
        if(_if_conditional7=right_value->var->mType->mDelegate,        _if_conditional7) {
            __dec_obj6=right_value->var->mCValueName;
            right_value->var->mCValueName=((void*)0);
            if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
        }
        else {
            if(_if_conditional8=right_value->var->mType->mShare,            _if_conditional8) {
                __dec_obj7=right_value->c_value;
                right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value10=increment_ref_count_object(right_value->type,right_value->c_value,info))));
                if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
                if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value10;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional9=right_value->var->mType->mClone,                _if_conditional9) {
                    __dec_obj8=right_value->c_value;
                    right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value11=increment_ref_count_object(right_value->type,right_value->c_value,info))));
                    if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value11);
                    if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { right_value11 = come_decrement_ref_count(right_value11, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value11;
                    __freed_obj__ = 0;
                }
                else {
                    __dec_obj9=right_value->c_value;
                    right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value12=increment_ref_count_object(right_value->type,right_value->c_value,info))));
                    if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
                    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { right_value12 = come_decrement_ref_count(right_value12, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value12;
                    __freed_obj__ = 0;
                }
            }
        }
    }
    else {
        if(_if_conditional10=right_value->type->mDelegate,        _if_conditional10) {
        }
        else {
            __dec_obj10=right_value->c_value;
            right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value13=increment_ref_count_object(right_value->type,right_value->c_value,info))));
            if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value13);
            if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { right_value13 = come_decrement_ref_count(right_value13, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value13;
            __freed_obj__ = 0;
        }
    }
}

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value48;
struct sType* result_29;
_Bool _if_conditional97;
struct sType* __result25__;
_Bool _if_conditional98;
struct sType* __result27__;
struct sClass* klass_30;
_Bool _if_conditional99;
void* right_value49;
struct sType* result_type_31;
void* right_value50;
void* right_value52;
struct tuple1$1sTypeph* __dec_obj34;
struct list$1sTypeph* o2_saved_34;
struct sType* it_37;
_Bool _for_condtionalA1;
void* right_value53;
struct sType* new_param_type_40;
void* right_value57;
_Bool _if_conditional106;
int generics_number_44;
_Bool _if_conditional107;
struct sClass* klass2_48;
int generics_number2_49;
_Bool _if_conditional110;
void* right_value58;
struct list$1sNodeph* array_num_50;
_Bool immutable__51;
int pointer_num_52;
_Bool heap_53;
_Bool no_heap_54;
_Bool no_calling_destructor_55;
_Bool exception__56;
_Bool null_value_57;
void* right_value59;
struct sType* __dec_obj38;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
struct list$1sNodeph* __dec_obj39;
_Bool _if_conditional117;
_Bool _if_conditional118;
struct list$1sTypeph* o2_saved_58;
struct sType* it_59;
_Bool _for_condtionalA2;
void* right_value60;
struct sType* type_60;
void* right_value61;
_Bool _if_conditional119;
void* right_value62;
char* new_name_61;
struct sType* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value48, 0, sizeof(void*));
memset(&result_29, 0, sizeof(struct sType*));
memset(&klass_30, 0, sizeof(struct sClass*));
memset(&right_value49, 0, sizeof(void*));
memset(&result_type_31, 0, sizeof(struct sType*));
memset(&right_value50, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&o2_saved_34, 0, sizeof(struct list$1sTypeph*));
memset(&it_37, 0, sizeof(struct sType*));
memset(&right_value53, 0, sizeof(void*));
memset(&new_param_type_40, 0, sizeof(struct sType*));
memset(&right_value57, 0, sizeof(void*));
memset(&generics_number_44, 0, sizeof(int));
memset(&klass2_48, 0, sizeof(struct sClass*));
memset(&generics_number2_49, 0, sizeof(int));
memset(&right_value58, 0, sizeof(void*));
memset(&array_num_50, 0, sizeof(struct list$1sNodeph*));
memset(&immutable__51, 0, sizeof(_Bool));
memset(&pointer_num_52, 0, sizeof(int));
memset(&heap_53, 0, sizeof(_Bool));
memset(&no_heap_54, 0, sizeof(_Bool));
memset(&no_calling_destructor_55, 0, sizeof(_Bool));
memset(&exception__56, 0, sizeof(_Bool));
memset(&null_value_57, 0, sizeof(_Bool));
memset(&right_value59, 0, sizeof(void*));
memset(&o2_saved_58, 0, sizeof(struct list$1sTypeph*));
memset(&it_59, 0, sizeof(struct sType*));
memset(&right_value60, 0, sizeof(void*));
memset(&type_60, 0, sizeof(struct sType*));
memset(&right_value61, 0, sizeof(void*));
memset(&right_value62, 0, sizeof(void*));
memset(&new_name_61, 0, sizeof(char*));
    result_29=(struct sType*)come_increment_ref_count(((struct sType*)(right_value48=sType_clone(type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value48);
    if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value48;
    __freed_obj__ = 0;
    if(_if_conditional97=generics_type==((void*)0),    _if_conditional97) {
        __result25__ = __result_obj__ = result_29;
        if(result_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_29, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result25__;
    }
    if(_if_conditional98=list$1sTypeph_length(generics_type->mGenericsTypes)==0,    _if_conditional98) {
        __result27__ = __result_obj__ = result_29;
        if(result_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_29, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result27__;
    }
    klass_30=type->mClass;
    if(_if_conditional99=string_operator_equals(klass_30->mName,"lambda"),    _if_conditional99) {
        result_type_31=(struct sType*)come_increment_ref_count(((struct sType*)(right_value49=solve_generics(type->mResultType->v1,generics_type,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49);
        if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value49;
        __freed_obj__ = 0;
        __dec_obj34=result_29->mResultType;
        result_29->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value52=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value50=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "04heap.c", 55)))),(struct sType*)come_increment_ref_count(result_type_31)))));
        if(__dec_obj34) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value50);
        if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value50;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value52);
        if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value52;
        __freed_obj__ = 0;
        list$1sTypeph_reset(result_29->mParamTypes);
        for(
        o2_saved_34=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_37=list$1sTypeph_begin((o2_saved_34)) ,        0;        _for_condtionalA1=        !list$1sTypeph_end((o2_saved_34)) ,        _for_condtionalA1;        it_37=list$1sTypeph_next((o2_saved_34)) ,        0        ){
            new_param_type_40=(struct sType*)come_increment_ref_count(((struct sType*)(right_value53=solve_generics(it_37,generics_type,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
            if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value53;
            __freed_obj__ = 0;
            list$1sTypeph_push_back(result_29->mParamTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value57=sType_clone(new_param_type_40)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value57);
            if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value57;
            __freed_obj__ = 0;
            if(new_param_type_40 && !__freed_obj__) { come_call_finalizer(sType_finalize,new_param_type_40, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_34 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_34, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_type_31 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_31, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        if(_if_conditional106=klass_30->mGenerics,        _if_conditional106) {
            generics_number_44=klass_30->mGenericsNum;
            if(_if_conditional107=generics_number_44>=list$1sTypeph_length(generics_type->mGenericsTypes),            _if_conditional107) {
                err_msg(info,"invalid generics parametor number");
                exit(2);
            }
            klass2_48=list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,generics_number_44)->mClass;
            generics_number2_49=klass2_48->mGenericsNum;
            if(_if_conditional110=generics_number_44!=generics_number2_49,            _if_conditional110) {
                array_num_50=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value58=list$1sNodephp_clone(type->mArrayNum))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
                if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value58;
                __freed_obj__ = 0;
                immutable__51=type->mImmutable;
                pointer_num_52=type->mPointerNum;
                heap_53=type->mHeap;
                no_heap_54=type->mNoHeap;
                no_calling_destructor_55=type->mNoCallingDestructor;
                exception__56=type->mException;
                null_value_57=type->mNullValue;
                __dec_obj38=result_29;
                result_29=(struct sType*)come_increment_ref_count(((struct sType*)(right_value59=sType_clone(list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,generics_number_44)))));
                if(__dec_obj38) { come_call_finalizer(sType_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value59);
                if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value59;
                __freed_obj__ = 0;
                if(_if_conditional111=heap_53,                _if_conditional111) {
                    result_29->mHeap=heap_53;
                }
                if(_if_conditional112=exception__56,                _if_conditional112) {
                    result_29->mException=exception__56;
                }
                if(_if_conditional113=no_heap_54,                _if_conditional113) {
                    result_29->mNoHeap=(_Bool)1;
                    result_29->mHeap=(_Bool)0;
                }
                if(_if_conditional114=no_calling_destructor_55,                _if_conditional114) {
                    result_29->mNoCallingDestructor=(_Bool)1;
                }
                if(_if_conditional115=immutable__51,                _if_conditional115) {
                    result_29->mImmutable=immutable__51;
                }
                if(_if_conditional116=list$1sNodeph_length(array_num_50)>0,                _if_conditional116) {
                    __dec_obj39=result_29->mArrayNum;
                    result_29->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_50);
                    if(__dec_obj39) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional117=null_value_57,                _if_conditional117) {
                    result_29->mNullValue=null_value_57;
                }
                if(_if_conditional118=pointer_num_52>0,                _if_conditional118) {
                    result_29->mPointerNum+=pointer_num_52;
                }
                if(array_num_50 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num_50, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
        }
        else {
            list$1sTypeph_reset(result_29->mGenericsTypes);
            for(
            o2_saved_58=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_59=list$1sTypeph_begin((o2_saved_58)) ,            0;            _for_condtionalA2=            !list$1sTypeph_end((o2_saved_58)) ,            _for_condtionalA2;            it_59=list$1sTypeph_next((o2_saved_58)) ,            0            ){
                type_60=(struct sType*)come_increment_ref_count(((struct sType*)(right_value60=solve_generics(it_59,generics_type,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value60);
                if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value60;
                __freed_obj__ = 0;
                list$1sTypeph_push_back(result_29->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value61=sType_clone(type_60)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value61);
                if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value61;
                __freed_obj__ = 0;
                if(type_60 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_60, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(o2_saved_58 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_58, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(_if_conditional119=!output_generics_struct(result_29,generics_type,info),            _if_conditional119) {
                new_name_61=(char*)come_increment_ref_count(((char*)(right_value62=create_generics_name(type,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
                if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { right_value62 = come_decrement_ref_count(right_value62, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value62;
                __freed_obj__ = 0;
                printf("output generics is failed(%s)",new_name_61);
                exit(1);
                if(new_name_61 && !__freed_obj__) { new_name_61 = come_decrement_ref_count(new_name_61, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
    }
    __result41__ = __result_obj__ = result_29;
    if(result_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_29, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result41__;
    if(result_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_29, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional11;
struct sType* __result7__;
void* right_value14;
struct sType* result_5;
_Bool _if_conditional28;
_Bool _if_conditional29;
void* right_value17;
struct tuple1$1sTypeph* __dec_obj12;
_Bool _if_conditional33;
void* right_value18;
struct tuple1$1sTypeph* __dec_obj13;
_Bool _if_conditional34;
void* right_value19;
char* __dec_obj14;
_Bool _if_conditional35;
void* right_value26;
struct list$1sTypeph* __dec_obj18;
_Bool _if_conditional39;
void* right_value34;
struct list$1sNodeph* __dec_obj22;
_Bool _if_conditional52;
_Bool _if_conditional53;
void* right_value35;
struct list$1sTypeph* __dec_obj23;
_Bool _if_conditional54;
void* right_value42;
struct list$1charph* __dec_obj27;
_Bool _if_conditional58;
void* right_value43;
struct tuple1$1sTypeph* __dec_obj28;
_Bool _if_conditional59;
_Bool _if_conditional60;
void* right_value44;
struct sNode* __dec_obj29;
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
_Bool _if_conditional84;
void* right_value45;
struct sNode* __dec_obj30;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
void* right_value46;
char* __dec_obj31;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool _if_conditional92;
_Bool _if_conditional93;
_Bool _if_conditional94;
_Bool _if_conditional95;
_Bool _if_conditional96;
void* right_value47;
char* __dec_obj32;
struct sType* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value14, 0, sizeof(void*));
memset(&result_5, 0, sizeof(struct sType*));
memset(&right_value17, 0, sizeof(void*));
memset(&right_value18, 0, sizeof(void*));
memset(&right_value19, 0, sizeof(void*));
memset(&right_value26, 0, sizeof(void*));
memset(&right_value34, 0, sizeof(void*));
memset(&right_value35, 0, sizeof(void*));
memset(&right_value42, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&right_value47, 0, sizeof(void*));
        if(_if_conditional11=self==(void*)0,        _if_conditional11) {
            __result7__ = __result_obj__ = (void*)0;
            return __result7__;
        }
        result_5=(struct sType*)come_increment_ref_count(((struct sType*)(right_value14=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value14);
        if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value14;
        __freed_obj__ = 0;
        if(_if_conditional28=self!=((void*)0),        _if_conditional28) {
            result_5->mClass=self->mClass;
        }
        if(_if_conditional29=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional29) {
            __dec_obj12=result_5->mNoSolvedGenericsType;
            result_5->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value17=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            if(__dec_obj12) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value17);
            if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value17;
            __freed_obj__ = 0;
        }
        if(_if_conditional33=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional33) {
            __dec_obj13=result_5->mOriginalLoadVarType;
            result_5->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value18=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            if(__dec_obj13) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
            if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value18;
            __freed_obj__ = 0;
        }
        if(_if_conditional34=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional34) {
            __dec_obj14=result_5->mGenericsName;
            result_5->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value19=string_clone(self->mGenericsName))));
            if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19);
            if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { right_value19 = come_decrement_ref_count(right_value19, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value19;
            __freed_obj__ = 0;
        }
        if(_if_conditional35=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional35) {
            __dec_obj18=result_5->mGenericsTypes;
            result_5->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value26=list$1sTypephp_clone(self->mGenericsTypes))));
            if(__dec_obj18) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value26);
            if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value26;
            __freed_obj__ = 0;
        }
        if(_if_conditional39=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional39) {
            __dec_obj22=result_5->mArrayNum;
            result_5->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value34=list$1sNodephp_clone(self->mArrayNum))));
            if(__dec_obj22) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
            if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value34;
            __freed_obj__ = 0;
        }
        if(_if_conditional52=self!=((void*)0),        _if_conditional52) {
            result_5->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(_if_conditional53=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional53) {
            __dec_obj23=result_5->mParamTypes;
            result_5->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value35=list$1sTypephp_clone(self->mParamTypes))));
            if(__dec_obj23) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
            if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value35;
            __freed_obj__ = 0;
        }
        if(_if_conditional54=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional54) {
            __dec_obj27=result_5->mParamNames;
            result_5->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value42=list$1charphp_clone(self->mParamNames))));
            if(__dec_obj27) { come_call_finalizer(list$1charph_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
            if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value42;
            __freed_obj__ = 0;
        }
        if(_if_conditional58=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional58) {
            __dec_obj28=result_5->mResultType;
            result_5->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value43=tuple1$1sTypephp_clone(self->mResultType))));
            if(__dec_obj28) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
            if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value43;
            __freed_obj__ = 0;
        }
        if(_if_conditional59=self!=((void*)0),        _if_conditional59) {
            result_5->mVarArgs=self->mVarArgs;
        }
        if(_if_conditional60=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional60) {
            __dec_obj29=result_5->mAlignas;
            result_5->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value44=sNode_clone(self->mAlignas))));
            if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
            if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { right_value44 = come_decrement_ref_count(right_value44, ((struct sNode*)right_value44)->finalize, ((struct sNode*)right_value44)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value44;
            __freed_obj__ = 0;
        }
        if(_if_conditional61=self!=((void*)0),        _if_conditional61) {
            result_5->mUnsigned=self->mUnsigned;
        }
        if(_if_conditional62=self!=((void*)0),        _if_conditional62) {
            result_5->mShort=self->mShort;
        }
        if(_if_conditional63=self!=((void*)0),        _if_conditional63) {
            result_5->mLong=self->mLong;
        }
        if(_if_conditional64=self!=((void*)0),        _if_conditional64) {
            result_5->mLongLong=self->mLongLong;
        }
        if(_if_conditional65=self!=((void*)0),        _if_conditional65) {
            result_5->mConstant=self->mConstant;
        }
        if(_if_conditional66=self!=((void*)0),        _if_conditional66) {
            result_5->mRegister=self->mRegister;
        }
        if(_if_conditional67=self!=((void*)0),        _if_conditional67) {
            result_5->mVolatile=self->mVolatile;
        }
        if(_if_conditional68=self!=((void*)0),        _if_conditional68) {
            result_5->mStatic=self->mStatic;
        }
        if(_if_conditional69=self!=((void*)0),        _if_conditional69) {
            result_5->mExtern=self->mExtern;
        }
        if(_if_conditional70=self!=((void*)0),        _if_conditional70) {
            result_5->mRestrict=self->mRestrict;
        }
        if(_if_conditional71=self!=((void*)0),        _if_conditional71) {
            result_5->mImmutable=self->mImmutable;
        }
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            result_5->mHeap=self->mHeap;
        }
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            result_5->mDummyHeap=self->mDummyHeap;
        }
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            result_5->mDelegate=self->mDelegate;
        }
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            result_5->mShare=self->mShare;
        }
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            result_5->mClone=self->mClone;
        }
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            result_5->mNoHeap=self->mNoHeap;
        }
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            result_5->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            result_5->mRefference=self->mRefference;
        }
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            result_5->mException=self->mException;
        }
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            result_5->mPointerNum=self->mPointerNum;
        }
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            result_5->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            result_5->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(_if_conditional84=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional84) {
            __dec_obj30=result_5->mSizeNum;
            result_5->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value45=sNode_clone(self->mSizeNum))));
            if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
            if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { right_value45 = come_decrement_ref_count(right_value45, ((struct sNode*)right_value45)->finalize, ((struct sNode*)right_value45)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value45;
            __freed_obj__ = 0;
        }
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            result_5->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            result_5->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(_if_conditional87=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional87) {
            __dec_obj31=result_5->mOriginalTypeName;
            result_5->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value46=string_clone(self->mOriginalTypeName))));
            if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value46);
            if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { right_value46 = come_decrement_ref_count(right_value46, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value46;
            __freed_obj__ = 0;
        }
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            result_5->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            result_5->mFunctionParam=self->mFunctionParam;
        }
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            result_5->mAllocaValue=self->mAllocaValue;
        }
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            result_5->mGenericsStruct=self->mGenericsStruct;
        }
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            result_5->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            result_5->mComeMemCore=self->mComeMemCore;
        }
        if(_if_conditional94=self!=((void*)0),        _if_conditional94) {
            result_5->mInline=self->mInline;
        }
        if(_if_conditional95=self!=((void*)0),        _if_conditional95) {
            result_5->mNullValue=self->mNullValue;
        }
        if(_if_conditional96=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional96) {
            __dec_obj32=result_5->mAsmName;
            result_5->mAsmName=(char*)come_increment_ref_count(((char*)(right_value47=string_clone(self->mAsmName))));
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value47);
            if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value47;
            __freed_obj__ = 0;
        }
        __result24__ = __result_obj__ = result_5;
        if(result_5 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_5, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result24__;
        if(result_5 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_5, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional12;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _if_conditional16;
_Bool _if_conditional18;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional12=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional12) {
                if(self->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional14=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional14) {
                if(self->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional15=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional15) {
                if(self->mGenericsName && !__freed_obj__) { self->mGenericsName = come_decrement_ref_count(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(_if_conditional16=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional16) {
                if(self->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional18=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional18) {
                if(self->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional20=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional20) {
                if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional21=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional21) {
                if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional23=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional23) {
                if(self->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional24=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional24) {
                if(self->mAlignas && !__freed_obj__) { self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0); } 
            }
            if(_if_conditional25=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional25) {
                if(self->mSizeNum && !__freed_obj__) { self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0); } 
            }
            if(_if_conditional26=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional26) {
                if(self->mOriginalTypeName && !__freed_obj__) { self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(_if_conditional27=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional27) {
                if(self->mAsmName && !__freed_obj__) { self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional13;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional13=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional13) {
                        if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sTypeph* it_6;
_Bool _while_condtional1;
struct list_item$1sTypeph* prev_it_7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_6, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_7, 0, sizeof(struct list_item$1sTypeph*));
                    it_6=self->head;
                    while(_while_condtional1=it_6!=((void*)0),                    _while_condtional1) {
                        prev_it_7=it_6;
                        it_6=it_6->next;
                        if(prev_it_7 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_7, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional17=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional17) {
                                if(self->item && !__freed_obj__) { come_call_finalizer(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_8;
_Bool _while_condtional2;
struct list_item$1sNodeph* prev_it_9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_8, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_9, 0, sizeof(struct list_item$1sNodeph*));
                    it_8=self->head;
                    while(_while_condtional2=it_8!=((void*)0),                    _while_condtional2) {
                        prev_it_9=it_8;
                        it_8=it_8->next;
                        if(prev_it_9 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_9, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional19;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional19=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional19) {
                                if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0); } 
                            }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_10;
_Bool _while_condtional3;
struct list_item$1charph* prev_it_11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_10, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_11, 0, sizeof(struct list_item$1charph*));
                    it_10=self->head;
                    while(_while_condtional3=it_10!=((void*)0),                    _while_condtional3) {
                        prev_it_11=it_10;
                        it_10=it_10->next;
                        if(prev_it_11 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_11, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional22=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional22) {
                                if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, 0); }
                            }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional30;
struct tuple1$1sTypeph* __result8__;
void* right_value15;
struct tuple1$1sTypeph* result_12;
_Bool _if_conditional32;
void* right_value16;
struct sType* __dec_obj11;
struct tuple1$1sTypeph* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value15, 0, sizeof(void*));
memset(&result_12, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value16, 0, sizeof(void*));
                if(_if_conditional30=self==(void*)0,                _if_conditional30) {
                    __result8__ = __result_obj__ = (void*)0;
                    return __result8__;
                }
                result_12=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value15=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value15);
                if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value15;
                __freed_obj__ = 0;
                if(_if_conditional32=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional32) {
                    __dec_obj11=result_12->v1;
                    result_12->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value16=sType_clone(self->v1))));
                    if(__dec_obj11) { come_call_finalizer(sType_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
                    if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value16;
                    __freed_obj__ = 0;
                }
                __result9__ = __result_obj__ = result_12;
                if(result_12 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_12, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result9__;
                if(result_12 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_12, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional31;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional31=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional31) {
                        if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional36;
struct list$1sTypeph* __result10__;
void* right_value20;
void* right_value21;
struct list$1sTypeph* result_13;
struct list_item$1sTypeph* it_14;
_Bool _while_condtional4;
void* right_value25;
struct list$1sTypeph* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value20, 0, sizeof(void*));
memset(&right_value21, 0, sizeof(void*));
memset(&result_13, 0, sizeof(struct list$1sTypeph*));
memset(&it_14, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value25, 0, sizeof(void*));
                if(_if_conditional36=self==((void*)0),                _if_conditional36) {
                    __result10__ = __result_obj__ = ((void*)0);
                    return __result10__;
                }
                result_13=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value21=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value20=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 195))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
                if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value20;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value21);
                if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value21;
                __freed_obj__ = 0;
                it_14=self->head;
                while(_while_condtional4=it_14!=((void*)0),                _while_condtional4) {
                    list$1sTypeph_add(result_13,(struct sType*)come_increment_ref_count(((struct sType*)(right_value25=sType_clone(it_14->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
                    if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value25;
                    __freed_obj__ = 0;
                    it_14=it_14->next;
                }
                __result13__ = __result_obj__ = result_13;
                if(result_13 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_13, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result13__;
                if(result_13 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_13, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result11__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result11__;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional37;
void* right_value22;
struct list_item$1sTypeph* litem_15;
struct sType* __dec_obj15;
_Bool _if_conditional38;
void* right_value23;
struct list_item$1sTypeph* litem_16;
struct sType* __dec_obj16;
void* right_value24;
struct list_item$1sTypeph* litem_17;
struct sType* __dec_obj17;
struct list$1sTypeph* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value22, 0, sizeof(void*));
memset(&litem_15, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value23, 0, sizeof(void*));
memset(&litem_16, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value24, 0, sizeof(void*));
memset(&litem_17, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional37=self->len==0,                        _if_conditional37) {
                            litem_15=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value22=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 209))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
                            if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value22;
                            __freed_obj__ = 0;
                            litem_15->prev=((void*)0);
                            litem_15->next=((void*)0);
                            __dec_obj15=litem_15->item;
                            litem_15->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj15) { come_call_finalizer(sType_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->tail=litem_15;
                            self->head=litem_15;
                        }
                        else {
                            if(_if_conditional38=self->len==1,                            _if_conditional38) {
                                litem_16=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value23=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 219))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
                                if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value23;
                                __freed_obj__ = 0;
                                litem_16->prev=self->head;
                                litem_16->next=((void*)0);
                                __dec_obj16=litem_16->item;
                                litem_16->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj16) { come_call_finalizer(sType_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0); }
                                self->tail=litem_16;
                                self->head->next=litem_16;
                            }
                            else {
                                litem_17=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value24=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 229))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value24);
                                if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value24;
                                __freed_obj__ = 0;
                                litem_17->prev=self->tail;
                                litem_17->next=((void*)0);
                                __dec_obj17=litem_17->item;
                                litem_17->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj17) { come_call_finalizer(sType_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
                                self->tail->next=litem_17;
                                self->tail=litem_17;
                            }
                        }
                        self->len++;
                        __result12__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result12__;
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
_Bool _if_conditional40;
struct list$1sNodeph* __result14__;
void* right_value27;
void* right_value28;
struct list$1sNodeph* result_18;
struct list_item$1sNodeph* it_19;
_Bool _while_condtional5;
void* right_value33;
struct list$1sNodeph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value27, 0, sizeof(void*));
memset(&right_value28, 0, sizeof(void*));
memset(&result_18, 0, sizeof(struct list$1sNodeph*));
memset(&it_19, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value33, 0, sizeof(void*));
                if(_if_conditional40=self==((void*)0),                _if_conditional40) {
                    __result14__ = __result_obj__ = ((void*)0);
                    return __result14__;
                }
                result_18=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value28=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value27=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 195))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
                if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value27;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value28);
                if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value28;
                __freed_obj__ = 0;
                it_19=self->head;
                while(_while_condtional5=it_19!=((void*)0),                _while_condtional5) {
                    list$1sNodeph_add(result_18,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value33=sNode_clone(it_19->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value33);
                    if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, ((struct sNode*)right_value33)->finalize, ((struct sNode*)right_value33)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value33;
                    __freed_obj__ = 0;
                    it_19=it_19->next;
                }
                __result19__ = __result_obj__ = result_18;
                if(result_18 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result19__;
                if(result_18 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result15__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result15__;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional41;
void* right_value29;
struct list_item$1sNodeph* litem_20;
struct sNode* __dec_obj19;
_Bool _if_conditional42;
void* right_value30;
struct list_item$1sNodeph* litem_21;
struct sNode* __dec_obj20;
void* right_value31;
struct list_item$1sNodeph* litem_22;
struct sNode* __dec_obj21;
struct list$1sNodeph* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value29, 0, sizeof(void*));
memset(&litem_20, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value30, 0, sizeof(void*));
memset(&litem_21, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value31, 0, sizeof(void*));
memset(&litem_22, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional41=self->len==0,                        _if_conditional41) {
                            litem_20=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value29=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 209))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
                            if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value29;
                            __freed_obj__ = 0;
                            litem_20->prev=((void*)0);
                            litem_20->next=((void*)0);
                            __dec_obj19=litem_20->item;
                            litem_20->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0,0); }
                            self->tail=litem_20;
                            self->head=litem_20;
                        }
                        else {
                            if(_if_conditional42=self->len==1,                            _if_conditional42) {
                                litem_21=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value30=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 219))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
                                if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value30;
                                __freed_obj__ = 0;
                                litem_21->prev=self->head;
                                litem_21->next=((void*)0);
                                __dec_obj20=litem_21->item;
                                litem_21->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0,0); }
                                self->tail=litem_21;
                                self->head->next=litem_21;
                            }
                            else {
                                litem_22=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value31=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 229))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
                                if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value31;
                                __freed_obj__ = 0;
                                litem_22->prev=self->tail;
                                litem_22->next=((void*)0);
                                __dec_obj21=litem_22->item;
                                litem_22->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0); }
                                self->tail->next=litem_22;
                                self->tail=litem_22;
                            }
                        }
                        self->len++;
                        __result16__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                        return __result16__;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional43;
struct sNode* __result17__;
void* right_value32;
struct sNode* result_23;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _if_conditional49;
_Bool _if_conditional50;
_Bool _if_conditional51;
struct sNode* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value32, 0, sizeof(void*));
memset(&result_23, 0, sizeof(struct sNode*));
                        if(_if_conditional43=self==(void*)0,                        _if_conditional43) {
                            __result17__ = __result_obj__ = (void*)0;
                            return __result17__;
                        }
                        result_23=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
                        if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { right_value32 = come_decrement_ref_count(right_value32, ((struct sNode*)right_value32)->finalize, ((struct sNode*)right_value32)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value32;
                        __freed_obj__ = 0;
                        if(_if_conditional44=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional44) {
                            result_23->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(_if_conditional45=self!=((void*)0),                        _if_conditional45) {
                            result_23->finalize=self->finalize;
                        }
                        if(_if_conditional46=self!=((void*)0),                        _if_conditional46) {
                            result_23->clone=self->clone;
                        }
                        if(_if_conditional47=self!=((void*)0),                        _if_conditional47) {
                            result_23->compile=self->compile;
                        }
                        if(_if_conditional48=self!=((void*)0),                        _if_conditional48) {
                            result_23->sline=self->sline;
                        }
                        if(_if_conditional49=self!=((void*)0),                        _if_conditional49) {
                            result_23->sname=self->sname;
                        }
                        if(_if_conditional50=self!=((void*)0),                        _if_conditional50) {
                            result_23->terminated=self->terminated;
                        }
                        if(_if_conditional51=self!=((void*)0),                        _if_conditional51) {
                            result_23->kind=self->kind;
                        }
                        __result18__ = __result_obj__ = result_23;
                        if(result_23 && !__freed_obj__) { result_23 = come_decrement_ref_count(result_23, ((struct sNode*)result_23)->finalize, ((struct sNode*)result_23)->_protocol_obj, 0, 1, 0); } 
                        return __result18__;
                        if(result_23 && !__freed_obj__) { result_23 = come_decrement_ref_count(result_23, ((struct sNode*)result_23)->finalize, ((struct sNode*)result_23)->_protocol_obj, 0, 0, 0); } 
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
_Bool _if_conditional55;
struct list$1charph* __result20__;
void* right_value36;
void* right_value37;
struct list$1charph* result_24;
struct list_item$1charph* it_25;
_Bool _while_condtional6;
void* right_value41;
struct list$1charph* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value36, 0, sizeof(void*));
memset(&right_value37, 0, sizeof(void*));
memset(&result_24, 0, sizeof(struct list$1charph*));
memset(&it_25, 0, sizeof(struct list_item$1charph*));
memset(&right_value41, 0, sizeof(void*));
                if(_if_conditional55=self==((void*)0),                _if_conditional55) {
                    __result20__ = __result_obj__ = ((void*)0);
                    return __result20__;
                }
                result_24=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value37=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value36=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 195))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
                if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value36;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value37);
                if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value37;
                __freed_obj__ = 0;
                it_25=self->head;
                while(_while_condtional6=it_25!=((void*)0),                _while_condtional6) {
                    list$1charph_add(result_24,(char*)come_increment_ref_count(((char*)(right_value41=string_clone(it_25->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
                    if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { right_value41 = come_decrement_ref_count(right_value41, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value41;
                    __freed_obj__ = 0;
                    it_25=it_25->next;
                }
                __result23__ = __result_obj__ = result_24;
                if(result_24 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result23__;
                if(result_24 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result21__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result21__;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional56;
void* right_value38;
struct list_item$1charph* litem_26;
char* __dec_obj24;
_Bool _if_conditional57;
void* right_value39;
struct list_item$1charph* litem_27;
char* __dec_obj25;
void* right_value40;
struct list_item$1charph* litem_28;
char* __dec_obj26;
struct list$1charph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value38, 0, sizeof(void*));
memset(&litem_26, 0, sizeof(struct list_item$1charph*));
memset(&right_value39, 0, sizeof(void*));
memset(&litem_27, 0, sizeof(struct list_item$1charph*));
memset(&right_value40, 0, sizeof(void*));
memset(&litem_28, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional56=self->len==0,                        _if_conditional56) {
                            litem_26=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value38=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 209))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
                            if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value38;
                            __freed_obj__ = 0;
                            litem_26->prev=((void*)0);
                            litem_26->next=((void*)0);
                            __dec_obj24=litem_26->item;
                            litem_26->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0,0); }
                            self->tail=litem_26;
                            self->head=litem_26;
                        }
                        else {
                            if(_if_conditional57=self->len==1,                            _if_conditional57) {
                                litem_27=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value39=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 219))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
                                if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value39;
                                __freed_obj__ = 0;
                                litem_27->prev=self->head;
                                litem_27->next=((void*)0);
                                __dec_obj25=litem_27->item;
                                litem_27->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0,0); }
                                self->tail=litem_27;
                                self->head->next=litem_27;
                            }
                            else {
                                litem_28=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value40=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 229))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
                                if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value40;
                                __freed_obj__ = 0;
                                litem_28->prev=self->tail;
                                litem_28->next=((void*)0);
                                __dec_obj26=litem_28->item;
                                litem_28->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0,0); }
                                self->tail->next=litem_28;
                                self->tail=litem_28;
                            }
                        }
                        self->len++;
                        __result22__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                        return __result22__;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result26__ = self->len;
        return __result26__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value51;
struct sType* __dec_obj33;
struct tuple1$1sTypeph* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value51, 0, sizeof(void*));
            __dec_obj33=self->v1;
            self->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value51=sType_clone(v1))));
            if(__dec_obj33) { come_call_finalizer(sType_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
            if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value51;
            __freed_obj__ = 0;
            __result28__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result28__;
            if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sTypeph* it_32;
_Bool _while_condtional7;
struct list_item$1sTypeph* prev_it_33;
struct list$1sTypeph* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_32, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_33, 0, sizeof(struct list_item$1sTypeph*));
            it_32=self->head;
            while(_while_condtional7=it_32!=((void*)0),            _while_condtional7) {
                prev_it_33=it_32;
                it_32=it_32->next;
                if(prev_it_33 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_33, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result29__ = __result_obj__ = self;
            return __result29__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional100;
struct sType* result_35;
struct sType* __result30__;
_Bool _if_conditional101;
struct sType* __result31__;
struct sType* result_36;
struct sType* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_35, 0, sizeof(struct sType*));
memset(&result_36, 0, sizeof(struct sType*));
            if(_if_conditional100=self==((void*)0),            _if_conditional100) {
                memset(&result_35,0,sizeof(struct sType*));
                __result30__ = __result_obj__ = result_35;
                return __result30__;
            }
            self->it=self->head;
            if(_if_conditional101=self->it,            _if_conditional101) {
                __result31__ = __result_obj__ = self->it->item;
                return __result31__;
            }
            memset(&result_36,0,sizeof(struct sType*));
            __result32__ = __result_obj__ = result_36;
            return __result32__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result33__ = self==((void*)0)||self->it==((void*)0);
            return __result33__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional102;
struct sType* result_38;
struct sType* __result34__;
_Bool _if_conditional103;
struct sType* __result35__;
struct sType* result_39;
struct sType* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_38, 0, sizeof(struct sType*));
memset(&result_39, 0, sizeof(struct sType*));
            if(_if_conditional102=self==((void*)0)||self->it==((void*)0),            _if_conditional102) {
                memset(&result_38,0,sizeof(struct sType*));
                __result34__ = __result_obj__ = result_38;
                return __result34__;
            }
            self->it=self->it->next;
            if(_if_conditional103=self->it,            _if_conditional103) {
                __result35__ = __result_obj__ = self->it->item;
                return __result35__;
            }
            memset(&result_39,0,sizeof(struct sType*));
            __result36__ = __result_obj__ = result_39;
            return __result36__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional104;
void* right_value54;
struct list_item$1sTypeph* litem_41;
struct sType* __dec_obj35;
_Bool _if_conditional105;
void* right_value55;
struct list_item$1sTypeph* litem_42;
struct sType* __dec_obj36;
void* right_value56;
struct list_item$1sTypeph* litem_43;
struct sType* __dec_obj37;
struct list$1sTypeph* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value54, 0, sizeof(void*));
memset(&litem_41, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value55, 0, sizeof(void*));
memset(&litem_42, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value56, 0, sizeof(void*));
memset(&litem_43, 0, sizeof(struct list_item$1sTypeph*));
                if(_if_conditional104=self->len==0,                _if_conditional104) {
                    litem_41=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value54=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 279))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
                    if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value54;
                    __freed_obj__ = 0;
                    litem_41->prev=((void*)0);
                    litem_41->next=((void*)0);
                    __dec_obj35=litem_41->item;
                    litem_41->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj35) { come_call_finalizer(sType_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->tail=litem_41;
                    self->head=litem_41;
                }
                else {
                    if(_if_conditional105=self->len==1,                    _if_conditional105) {
                        litem_42=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value55=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 289))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
                        if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value55;
                        __freed_obj__ = 0;
                        litem_42->prev=self->head;
                        litem_42->next=((void*)0);
                        __dec_obj36=litem_42->item;
                        litem_42->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj36) { come_call_finalizer(sType_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail=litem_42;
                        self->head->next=litem_42;
                    }
                    else {
                        litem_43=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value56=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 299))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
                        if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value56;
                        __freed_obj__ = 0;
                        litem_43->prev=self->tail;
                        litem_43->next=((void*)0);
                        __dec_obj37=litem_43->item;
                        litem_43->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj37) { come_call_finalizer(sType_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail->next=litem_43;
                        self->tail=litem_43;
                    }
                }
                self->len++;
                __result37__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result37__;
                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional108;
struct list_item$1sTypeph* it_45;
int i_46;
_Bool _while_condtional8;
_Bool _if_conditional109;
struct sType* __result38__;
struct sType* default_value_47;
struct sType* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_45, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_46, 0, sizeof(int));
memset(&default_value_47, 0, sizeof(struct sType*));
                if(_if_conditional108=position<0,                _if_conditional108) {
                    position+=self->len;
                }
                it_45=self->head;
                i_46=0;
                while(_while_condtional8=it_45!=((void*)0),                _while_condtional8) {
                    if(_if_conditional109=position==i_46,                    _if_conditional109) {
                        __result38__ = __result_obj__ = it_45->item;
                        return __result38__;
                    }
                    it_45=it_45->next;
                    i_46++;
                }
                memset(&default_value_47,0,sizeof(struct sType*));
                __result39__ = __result_obj__ = default_value_47;
                if(default_value_47 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_47, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result39__;
                if(default_value_47 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_47, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __result40__ = self->len;
                    return __result40__;
}

struct sType* solve_type(struct sType* type, struct sType* generics_type, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value63;
struct sType* result_62;
_Bool _if_conditional120;
void* right_value64;
struct sType* __dec_obj40;
struct sType* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value63, 0, sizeof(void*));
memset(&result_62, 0, sizeof(struct sType*));
memset(&right_value64, 0, sizeof(void*));
    result_62=(struct sType*)come_increment_ref_count(((struct sType*)(right_value63=sType_clone(type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value63);
    if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value63;
    __freed_obj__ = 0;
    if(_if_conditional120=generics_type,    _if_conditional120) {
        __dec_obj40=result_62;
        result_62=(struct sType*)come_increment_ref_count(((struct sType*)(right_value64=solve_generics(result_62,generics_type,info))));
        if(__dec_obj40) { come_call_finalizer(sType_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64);
        if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value64;
        __freed_obj__ = 0;
    }
    __result42__ = __result_obj__ = result_62;
    if(result_62 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_62, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result42__;
    if(result_62 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_62, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int get_right_value_id_from_obj(char* obj){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* p_63;
_Bool _if_conditional121;
_Bool _while_condtional9;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
int n_64;
_Bool _while_condtional10;
int __result43__;
int __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&p_63, 0, sizeof(char*));
memset(&n_64, 0, sizeof(int));
    p_63=obj;
    if(_if_conditional121=*p_63==40,    _if_conditional121) {
        p_63++;
        while(_while_condtional9=*p_63!=41,        _while_condtional9) {
            p_63++;
        }
        p_63++;
        if(_if_conditional122=*p_63==40,        _if_conditional122) {
            p_63++;
            if(_if_conditional123=strcmp(p_63,"right_value")==0,            _if_conditional123) {
                p_63+=strlen("right_value");
                if(_if_conditional124=xisdigit(*p_63),                _if_conditional124) {
                    n_64=0;
                    while(_while_condtional10=xisdigit(*p_63),                    _while_condtional10) {
                        n_64=n_64*10+*p_63-48;
                        p_63++;
                    }
                    __result43__ = n_64;
                    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, (void*)0, (void*)0, 0, 1, 0); }
                    return __result43__;
                }
            }
        }
    }
    __result44__ = -1;
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, (void*)0, (void*)0, 0, 1, 0); }
    return __result44__;
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, (void*)0, (void*)0, 0, 1, 0); }
}

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional125;
void* right_value65;
char* __result45__;
_Bool _if_conditional126;
void* right_value66;
char* __result46__;
void* right_value67;
struct sRightValueObject* new_value_65;
struct sType* __dec_obj41;
void* right_value68;
char* __dec_obj42;
void* right_value69;
char* __dec_obj43;
void* right_value73;
char* buf_69;
void* right_value74;
void* right_value75;
char* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
memset(&new_value_65, 0, sizeof(struct sRightValueObject*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value73, 0, sizeof(void*));
memset(&buf_69, 0, sizeof(char*));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
    if(_if_conditional125=gComeGC,    _if_conditional125) {
        __result45__ = __result_obj__ = ((char*)(right_value65=__builtin_string(obj)));
        if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
        if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value65;
        __freed_obj__ = 0;
        return __result45__;
    }
    if(_if_conditional126=info->no_output_come_code,    _if_conditional126) {
        __result46__ = __result_obj__ = ((char*)(right_value66=__builtin_string("")));
        if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
        if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value66;
        __freed_obj__ = 0;
        return __result46__;
    }
    new_value_65=(struct sRightValueObject*)come_increment_ref_count(((struct sRightValueObject*)(right_value67=(struct sRightValueObject*)come_calloc(1, sizeof(struct sRightValueObject)*(1), "04heap.c", 188))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
    if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value67;
    __freed_obj__ = 0;
    __dec_obj41=new_value_65->mType;
    new_value_65->mType=(struct sType*)come_increment_ref_count(type);
    if(__dec_obj41) { come_call_finalizer(sType_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
    new_value_65->mFreed=(_Bool)0;
    new_value_65->mID=gRightValueNum;
    __dec_obj42=new_value_65->mVarName;
    new_value_65->mVarName=(char*)come_increment_ref_count(((char*)(right_value68=xsprintf("right_value%d",gRightValueNum++))));
    if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value68);
    if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value68;
    __freed_obj__ = 0;
    __dec_obj43=new_value_65->mFunName;
    new_value_65->mFunName=(char*)come_increment_ref_count(((char*)(right_value69=string_clone(info->come_fun->mName))));
    if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value69);
    if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value69;
    __freed_obj__ = 0;
    new_value_65->mBlockLevel=info->block_level;
    list$1sRightValueObjectph_push_back(info->right_value_objects,(struct sRightValueObject*)come_increment_ref_count(new_value_65));
    buf_69=(char*)come_increment_ref_count(((char*)(right_value73=xsprintf("void* right_value%d;\n",gRightValueNum-1))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value73);
    if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value73;
    __freed_obj__ = 0;
    add_come_code_at_function_head(info,buf_69);
    add_come_code_at_function_head2(info,"memset(&right_value%d, 0, sizeof(void*));\n",gRightValueNum-1);
    __result50__ = __result_obj__ = ((char*)(right_value75=xsprintf("((%s)(%s=%s))",optional$2charphbool_value(((struct optional$2charphbool*)(right_value74=make_type_name_string(type,(_Bool)0,(_Bool)1,(_Bool)0,info)))),new_value_65->mVarName,obj)));
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(new_value_65 && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,new_value_65, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_69 && !__freed_obj__) { buf_69 = come_decrement_ref_count(buf_69, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value74);
    if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value74;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value75);
    if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { right_value75 = come_decrement_ref_count(right_value75, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value75;
    __freed_obj__ = 0;
    return __result50__;
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(new_value_65 && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,new_value_65, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_69 && !__freed_obj__) { buf_69 = come_decrement_ref_count(buf_69, (void*)0, (void*)0, 0, 0, 0); }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional127=self!=((void*)0)&&self->mType!=((void*)0),        _if_conditional127) {
            if(self->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional128=self!=((void*)0)&&self->mVarName!=((void*)0),        _if_conditional128) {
            if(self->mVarName && !__freed_obj__) { self->mVarName = come_decrement_ref_count(self->mVarName, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional129=self!=((void*)0)&&self->mFunName!=((void*)0),        _if_conditional129) {
            if(self->mFunName && !__freed_obj__) { self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, 0); }
        }
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_push_back(struct list$1sRightValueObjectph* self, struct sRightValueObject* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional130;
void* right_value70;
struct list_item$1sRightValueObjectph* litem_66;
struct sRightValueObject* __dec_obj44;
_Bool _if_conditional132;
void* right_value71;
struct list_item$1sRightValueObjectph* litem_67;
struct sRightValueObject* __dec_obj45;
void* right_value72;
struct list_item$1sRightValueObjectph* litem_68;
struct sRightValueObject* __dec_obj46;
struct list$1sRightValueObjectph* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value70, 0, sizeof(void*));
memset(&litem_66, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&right_value71, 0, sizeof(void*));
memset(&litem_67, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&right_value72, 0, sizeof(void*));
memset(&litem_68, 0, sizeof(struct list_item$1sRightValueObjectph*));
        if(_if_conditional130=self->len==0,        _if_conditional130) {
            litem_66=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value70=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./comelang2.h", 279))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70);
            if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value70;
            __freed_obj__ = 0;
            litem_66->prev=((void*)0);
            litem_66->next=((void*)0);
            __dec_obj44=litem_66->item;
            litem_66->item=(struct sRightValueObject*)come_increment_ref_count(item);
            if(__dec_obj44) { come_call_finalizer(sRightValueObject_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0); }
            self->tail=litem_66;
            self->head=litem_66;
        }
        else {
            if(_if_conditional132=self->len==1,            _if_conditional132) {
                litem_67=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value71=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./comelang2.h", 289))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value71);
                if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value71;
                __freed_obj__ = 0;
                litem_67->prev=self->head;
                litem_67->next=((void*)0);
                __dec_obj45=litem_67->item;
                litem_67->item=(struct sRightValueObject*)come_increment_ref_count(item);
                if(__dec_obj45) { come_call_finalizer(sRightValueObject_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail=litem_67;
                self->head->next=litem_67;
            }
            else {
                litem_68=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value72=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./comelang2.h", 299))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value72);
                if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value72;
                __freed_obj__ = 0;
                litem_68->prev=self->tail;
                litem_68->next=((void*)0);
                __dec_obj46=litem_68->item;
                litem_68->item=(struct sRightValueObject*)come_increment_ref_count(item);
                if(__dec_obj46) { come_call_finalizer(sRightValueObject_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail->next=litem_68;
                self->tail=litem_68;
            }
        }
        self->len++;
        __result47__ = __result_obj__ = self;
        if(item && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result47__;
        if(item && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional131;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional131=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional131) {
                    if(self->item && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static char* optional$2charphbool_value(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional133;
char* default_value_70;
char* __result48__;
char* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_70, 0, sizeof(char*));
        if(_if_conditional133=self==((void*)0),        _if_conditional133) {
            memset(&default_value_70,0,sizeof(char*));
            __result48__ = __result_obj__ = default_value_70;
            return __result48__;
        }
        else {
            __result49__ = __result_obj__ = self->v1;
            return __result49__;
        }
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional134;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional134=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional134) {
            if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
        }
}

void remove_object_from_right_values(int right_value_num, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional135;
int i_71;
struct list$1sRightValueObjectph* o2_saved_72;
struct sRightValueObject* it_75;
_Bool _for_condtionalA3;
_Bool _if_conditional140;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_71, 0, sizeof(int));
memset(&o2_saved_72, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_75, 0, sizeof(struct sRightValueObject*));
    if(_if_conditional135=gComeGC,    _if_conditional135) {
        return;
    }
    i_71=0;
    for(
    o2_saved_72=(struct list$1sRightValueObjectph*)come_increment_ref_count((info->right_value_objects)),it_75=list$1sRightValueObjectph_begin((o2_saved_72)) ,    0;    _for_condtionalA3=    !list$1sRightValueObjectph_end((o2_saved_72)) ,    _for_condtionalA3;    it_75=list$1sRightValueObjectph_next((o2_saved_72)) ,    0    ){
        if(_if_conditional140=it_75->mID==right_value_num,        _if_conditional140) {
            break;
        }
        i_71++;
    }
    if(o2_saved_72 && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,o2_saved_72, (void*)0, (void*)0, 0, 0, 0, 0); }
    list$1sRightValueObjectph_delete(info->right_value_objects,i_71,i_71+1);
}

static struct sRightValueObject* list$1sRightValueObjectph_begin(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional136;
struct sRightValueObject* result_73;
struct sRightValueObject* __result51__;
_Bool _if_conditional137;
struct sRightValueObject* __result52__;
struct sRightValueObject* result_74;
struct sRightValueObject* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_73, 0, sizeof(struct sRightValueObject*));
memset(&result_74, 0, sizeof(struct sRightValueObject*));
        if(_if_conditional136=self==((void*)0),        _if_conditional136) {
            memset(&result_73,0,sizeof(struct sRightValueObject*));
            __result51__ = __result_obj__ = result_73;
            return __result51__;
        }
        self->it=self->head;
        if(_if_conditional137=self->it,        _if_conditional137) {
            __result52__ = __result_obj__ = self->it->item;
            return __result52__;
        }
        memset(&result_74,0,sizeof(struct sRightValueObject*));
        __result53__ = __result_obj__ = result_74;
        return __result53__;
}

static _Bool list$1sRightValueObjectph_end(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result54__ = self==((void*)0)||self->it==((void*)0);
        return __result54__;
}

static struct sRightValueObject* list$1sRightValueObjectph_next(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional138;
struct sRightValueObject* result_76;
struct sRightValueObject* __result55__;
_Bool _if_conditional139;
struct sRightValueObject* __result56__;
struct sRightValueObject* result_77;
struct sRightValueObject* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_76, 0, sizeof(struct sRightValueObject*));
memset(&result_77, 0, sizeof(struct sRightValueObject*));
        if(_if_conditional138=self==((void*)0)||self->it==((void*)0),        _if_conditional138) {
            memset(&result_76,0,sizeof(struct sRightValueObject*));
            __result55__ = __result_obj__ = result_76;
            return __result55__;
        }
        self->it=self->it->next;
        if(_if_conditional139=self->it,        _if_conditional139) {
            __result56__ = __result_obj__ = self->it->item;
            return __result56__;
        }
        memset(&result_77,0,sizeof(struct sRightValueObject*));
        __result57__ = __result_obj__ = result_77;
        return __result57__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sRightValueObjectph* it_78;
_Bool _while_condtional11;
struct list_item$1sRightValueObjectph* prev_it_79;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_78, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_79, 0, sizeof(struct list_item$1sRightValueObjectph*));
        it_78=self->head;
        while(_while_condtional11=it_78!=((void*)0),        _while_condtional11) {
            prev_it_79=it_78;
            it_78=it_78->next;
            if(prev_it_79 && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_79, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_delete(struct list$1sRightValueObjectph* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional141;
_Bool _if_conditional142;
_Bool _if_conditional143;
int tmp_80;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional146;
struct list$1sRightValueObjectph* __result58__;
_Bool _if_conditional147;
_Bool _if_conditional148;
struct list_item$1sRightValueObjectph* it_83;
int i_84;
_Bool _while_condtional13;
_Bool _if_conditional149;
struct list_item$1sRightValueObjectph* prev_it_85;
_Bool _if_conditional150;
_Bool _if_conditional151;
struct list_item$1sRightValueObjectph* it_86;
int i_87;
_Bool _while_condtional14;
_Bool _if_conditional152;
_Bool _if_conditional153;
struct list_item$1sRightValueObjectph* prev_it_88;
struct list_item$1sRightValueObjectph* it_89;
struct list_item$1sRightValueObjectph* head_prev_it_90;
struct list_item$1sRightValueObjectph* tail_it_91;
int i_92;
_Bool _while_condtional15;
_Bool _if_conditional154;
_Bool _if_conditional155;
_Bool _if_conditional156;
struct list_item$1sRightValueObjectph* prev_it_93;
_Bool _if_conditional157;
_Bool _if_conditional158;
struct list$1sRightValueObjectph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_80, 0, sizeof(int));
memset(&it_83, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_84, 0, sizeof(int));
memset(&prev_it_85, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&it_86, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_87, 0, sizeof(int));
memset(&prev_it_88, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&it_89, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&head_prev_it_90, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&tail_it_91, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_92, 0, sizeof(int));
memset(&prev_it_93, 0, sizeof(struct list_item$1sRightValueObjectph*));
        if(_if_conditional141=head<0,        _if_conditional141) {
            head+=self->len;
        }
        if(_if_conditional142=tail<0,        _if_conditional142) {
            tail+=self->len+1;
        }
        if(_if_conditional143=head>tail,        _if_conditional143) {
            tmp_80=tail;
            tail=head;
            head=tmp_80;
        }
        if(_if_conditional144=head<0,        _if_conditional144) {
            head=0;
        }
        if(_if_conditional145=tail>self->len,        _if_conditional145) {
            tail=self->len;
        }
        if(_if_conditional146=head==tail,        _if_conditional146) {
            __result58__ = __result_obj__ = self;
            return __result58__;
        }
        if(_if_conditional147=head==0&&tail==self->len,        _if_conditional147) {
            list$1sRightValueObjectph_reset(self);
        }
        else {
            if(_if_conditional148=head==0,            _if_conditional148) {
                it_83=self->head;
                i_84=0;
                while(_while_condtional13=it_83!=((void*)0),                _while_condtional13) {
                    if(_if_conditional149=i_84<tail,                    _if_conditional149) {
                        prev_it_85=it_83;
                        it_83=it_83->next;
                        i_84++;
                        if(prev_it_85 && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_85, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->len--;
                    }
                    else {
                        if(_if_conditional150=i_84==tail,                        _if_conditional150) {
                            self->head=it_83;
                            self->head->prev=((void*)0);
                            break;
                        }
                        else {
                            it_83=it_83->next;
                            i_84++;
                        }
                    }
                }
            }
            else {
                if(_if_conditional151=tail==self->len,                _if_conditional151) {
                    it_86=self->head;
                    i_87=0;
                    while(_while_condtional14=it_86!=((void*)0),                    _while_condtional14) {
                        if(_if_conditional152=i_87==head,                        _if_conditional152) {
                            self->tail=it_86->prev;
                            self->tail->next=((void*)0);
                        }
                        if(_if_conditional153=i_87>=head,                        _if_conditional153) {
                            prev_it_88=it_86;
                            it_86=it_86->next;
                            i_87++;
                            if(prev_it_88 && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_88, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->len--;
                        }
                        else {
                            it_86=it_86->next;
                            i_87++;
                        }
                    }
                }
                else {
                    it_89=self->head;
                    head_prev_it_90=((void*)0);
                    tail_it_91=((void*)0);
                    i_92=0;
                    while(_while_condtional15=it_89!=((void*)0),                    _while_condtional15) {
                        if(_if_conditional154=i_92==head,                        _if_conditional154) {
                            head_prev_it_90=it_89->prev;
                        }
                        if(_if_conditional155=i_92==tail,                        _if_conditional155) {
                            tail_it_91=it_89;
                        }
                        if(_if_conditional156=i_92>=head&&i_92<tail,                        _if_conditional156) {
                            prev_it_93=it_89;
                            it_89=it_89->next;
                            i_92++;
                            if(prev_it_93 && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_93, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->len--;
                        }
                        else {
                            it_89=it_89->next;
                            i_92++;
                        }
                    }
                    if(_if_conditional157=head_prev_it_90!=((void*)0),                    _if_conditional157) {
                        head_prev_it_90->next=tail_it_91;
                    }
                    if(_if_conditional158=tail_it_91!=((void*)0),                    _if_conditional158) {
                        tail_it_91->prev=head_prev_it_90;
                    }
                }
            }
        }
        __result60__ = __result_obj__ = self;
        return __result60__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sRightValueObjectph* it_81;
_Bool _while_condtional12;
struct list_item$1sRightValueObjectph* prev_it_82;
struct list$1sRightValueObjectph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_81, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_82, 0, sizeof(struct list_item$1sRightValueObjectph*));
                it_81=self->head;
                while(_while_condtional12=it_81!=((void*)0),                _while_condtional12) {
                    prev_it_82=it_81;
                    it_81=it_81->next;
                    if(prev_it_82 && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_82, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result59__ = __result_obj__ = self;
                return __result59__;
}

char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional159;
void* right_value76;
char* __result61__;
struct sClass* klass_94;
void* right_value77;
char* type_name_95;
void* right_value78;
char* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value76, 0, sizeof(void*));
memset(&klass_94, 0, sizeof(struct sClass*));
memset(&right_value77, 0, sizeof(void*));
memset(&type_name_95, 0, sizeof(char*));
memset(&right_value78, 0, sizeof(void*));
    if(_if_conditional159=gComeGC,    _if_conditional159) {
        __result61__ = __result_obj__ = ((char*)(right_value76=__builtin_string(obj)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value76);
        if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { right_value76 = come_decrement_ref_count(right_value76, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value76;
        __freed_obj__ = 0;
        return __result61__;
    }
    klass_94=type->mClass;
    type_name_95=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value77=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
    if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value77;
    __freed_obj__ = 0;
    __result63__ = __result_obj__ = ((char*)(right_value78=xsprintf("(%s)come_increment_ref_count(%s)",type_name_95,obj)));
    if(type_name_95 && !__freed_obj__) { type_name_95 = come_decrement_ref_count(type_name_95, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value78);
    if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value78;
    __freed_obj__ = 0;
    return __result63__;
    if(type_name_95 && !__freed_obj__) { type_name_95 = come_decrement_ref_count(type_name_95, (void*)0, (void*)0, 0, 0, 0); }
}

static char* optional$2charphbool_expect(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional160;
char* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional160=!self->v2,        _if_conditional160) {
            puts("Exception: at");
            exception_stackframe();
            puts("abort.");
            exit(2);
        }
        __result62__ = __result_obj__ = self->v1;
        return __result62__;
}

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional161;
struct list$1CVALUEph* stack_saved_96;
struct list$1sRightValueObjectph* right_value_objects_97;
struct sClass* klass_98;
static int dec_num_99=0;
void* right_value79;
char* name_100;
void* right_value80;
_Bool no_decrement_101;
_Bool no_free_102;
_Bool _if_conditional162;
void* right_value81;
char* c_value_103;
struct sClass* klass_104;
char* class_name_105;
char* fun_name_106;
void* right_value82;
struct sType* type2_107;
void* right_value83;
char* fun_name2_108;
struct sFun* finalizer_109;
_Bool _if_conditional163;
_Bool _if_conditional169;
void* right_value87;
char* none_generics_name_114;
void* right_value88;
char* generics_fun_name_115;
struct sGenericsFun* generics_fun_119;
_Bool _if_conditional174;
_Bool _if_conditional175;
int i_120;
_Bool _for_condtionalA4;
void* right_value92;
char* new_fun_name_121;
_Bool _if_conditional176;
void* right_value93;
char* __dec_obj47;
_Bool _if_conditional177;
_Bool _if_conditional178;
void* right_value94;
struct tuple2$2sFunpcharph* multiple_assgin_var1;
struct sFun* fun_122;
char* new_fun_name_123;
char* __dec_obj48;
_Bool _if_conditional180;
_Bool _if_conditional181;
void* right_value95;
char* type_name_124;
_Bool _if_conditional182;
_Bool _if_conditional183;
void* right_value96;
_Bool _if_conditional184;
void* right_value97;
char* type_name_125;
void* right_value98;
void* right_value99;
struct list$1sRightValueObjectph* __dec_obj49;
struct list$1CVALUEph* __dec_obj50;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&stack_saved_96, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_97, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_98, 0, sizeof(struct sClass*));
memset(&right_value79, 0, sizeof(void*));
memset(&name_100, 0, sizeof(char*));
memset(&right_value80, 0, sizeof(void*));
memset(&no_decrement_101, 0, sizeof(_Bool));
memset(&no_free_102, 0, sizeof(_Bool));
memset(&right_value81, 0, sizeof(void*));
memset(&c_value_103, 0, sizeof(char*));
memset(&klass_104, 0, sizeof(struct sClass*));
memset(&class_name_105, 0, sizeof(char*));
memset(&fun_name_106, 0, sizeof(char*));
memset(&right_value82, 0, sizeof(void*));
memset(&type2_107, 0, sizeof(struct sType*));
memset(&right_value83, 0, sizeof(void*));
memset(&fun_name2_108, 0, sizeof(char*));
memset(&finalizer_109, 0, sizeof(struct sFun*));
memset(&right_value87, 0, sizeof(void*));
memset(&none_generics_name_114, 0, sizeof(char*));
memset(&right_value88, 0, sizeof(void*));
memset(&generics_fun_name_115, 0, sizeof(char*));
memset(&generics_fun_119, 0, sizeof(struct sGenericsFun*));
memset(&i_120, 0, sizeof(int));
memset(&right_value92, 0, sizeof(void*));
memset(&new_fun_name_121, 0, sizeof(char*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
memset(&fun_122, 0, sizeof(struct sFun*));
memset(&new_fun_name_123, 0, sizeof(char*));
memset(&fun_122, 0, sizeof(struct sFun*));
memset(&new_fun_name_123, 0, sizeof(char*));
memset(&right_value95, 0, sizeof(void*));
memset(&type_name_124, 0, sizeof(char*));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
memset(&type_name_125, 0, sizeof(char*));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
    if(_if_conditional161=gComeGC,    _if_conditional161) {
        return;
    }
    stack_saved_96=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_97=info->right_value_objects;
    klass_98=type->mClass;
    name_100=(char*)come_increment_ref_count(((char*)(right_value79=xsprintf("__dec_obj%d",++dec_num_99))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
    if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value79;
    __freed_obj__ = 0;
    add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value80=make_define_var(type,name_100,(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value80);
    if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value80;
    __freed_obj__ = 0;
    add_come_code(info,"%s=%s;\n",name_100,obj);
    obj=name_100;
    no_decrement_101=(_Bool)0;
    no_free_102=(_Bool)0;
    if(_if_conditional162=type->mPointerNum>0,    _if_conditional162) {
        c_value_103=(char*)come_increment_ref_count(((char*)(right_value81=__builtin_string(obj))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
        if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { right_value81 = come_decrement_ref_count(right_value81, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value81;
        __freed_obj__ = 0;
        klass_104=type->mClass;
        class_name_105=klass_104->mName;
        fun_name_106="finalize";
        type2_107=(struct sType*)come_increment_ref_count(((struct sType*)(right_value82=sType_clone(type))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value82);
        if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value82;
        __freed_obj__ = 0;
        type2_107->mHeap=(_Bool)0;
        fun_name2_108=(char*)come_increment_ref_count(((char*)(right_value83=create_method_name(type,(_Bool)0,fun_name_106,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value83);
        if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value83;
        __freed_obj__ = 0;
        finalizer_109=((void*)0);
        if(_if_conditional163=list$1sTypeph_length(type->mGenericsTypes)>0,        _if_conditional163) {
            finalizer_109=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_108);
            if(_if_conditional169=finalizer_109==((void*)0),            _if_conditional169) {
                none_generics_name_114=(char*)come_increment_ref_count(((char*)(right_value87=get_none_generics_name(type2_107->mClass->mName))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value87);
                if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value87;
                __freed_obj__ = 0;
                generics_fun_name_115=(char*)come_increment_ref_count(((char*)(right_value88=xsprintf("%s_%s",none_generics_name_114,fun_name_106))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value88);
                if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value88;
                __freed_obj__ = 0;
                generics_fun_119=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_115);
                if(_if_conditional174=generics_fun_119,                _if_conditional174) {
                    if(_if_conditional175=!create_generics_fun((char*)come_increment_ref_count(fun_name2_108),generics_fun_119,type,info),                    _if_conditional175) {
                        printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                        exit(2);
                    }
                    finalizer_109=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_108);
                }
                if(none_generics_name_114 && !__freed_obj__) { none_generics_name_114 = come_decrement_ref_count(none_generics_name_114, (void*)0, (void*)0, 0, 0, 0); }
                if(generics_fun_name_115 && !__freed_obj__) { generics_fun_name_115 = come_decrement_ref_count(generics_fun_name_115, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        else {
            for(
            i_120=128-1 ,            0;            _for_condtionalA4=            i_120>=1 ,            _for_condtionalA4;            i_120-- ,            0            ){
                new_fun_name_121=(char*)come_increment_ref_count(((char*)(right_value92=xsprintf("%s_v%d",fun_name2_108,i_120))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value92);
                if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value92;
                __freed_obj__ = 0;
                finalizer_109=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_121);
                if(_if_conditional176=finalizer_109,                _if_conditional176) {
                    __dec_obj47=fun_name2_108;
                    fun_name2_108=(char*)come_increment_ref_count(((char*)(right_value93=__builtin_string(new_fun_name_121))));
                    if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
                    if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value93;
                    __freed_obj__ = 0;
                    if(new_fun_name_121 && !__freed_obj__) { new_fun_name_121 = come_decrement_ref_count(new_fun_name_121, (void*)0, (void*)0, 0, 0, 0); }
                    break;
                }
                if(new_fun_name_121 && !__freed_obj__) { new_fun_name_121 = come_decrement_ref_count(new_fun_name_121, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(_if_conditional177=finalizer_109==((void*)0),            _if_conditional177) {
                finalizer_109=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_108);
            }
        }
        if(_if_conditional178=finalizer_109==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,        _if_conditional178) {
            multiple_assgin_var1=((struct tuple2$2sFunpcharph*)(right_value94=create_finalizer_automatically(type,fun_name_106,info)));
            fun_122=multiple_assgin_var1->v1;
            new_fun_name_123=(char*)come_increment_ref_count(multiple_assgin_var1->v2);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94);
            if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value94;
            __freed_obj__ = 0;
            __dec_obj48=fun_name2_108;
            fun_name2_108=(char*)come_increment_ref_count(new_fun_name_123);
            if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0,0); }
            finalizer_109=fun_122;
            if(new_fun_name_123 && !__freed_obj__) { new_fun_name_123 = come_decrement_ref_count(new_fun_name_123, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional180=finalizer_109!=((void*)0),        _if_conditional180) {
            if(_if_conditional181=klass_104->mProtocol&&type->mPointerNum==1,            _if_conditional181) {
                type_name_124=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value95=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
                if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value95;
                __freed_obj__ = 0;
                if(_if_conditional182=c_value_103,                _if_conditional182) {
                    add_come_last_code2(info,"if(%s) { come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d); }\n",c_value_103,fun_name2_108,c_value_103,type_name_124,c_value_103,type_name_124,c_value_103,type->mAllocaValue,no_decrement_101,no_free_102,force_delete_);
                }
                if(type_name_124 && !__freed_obj__) { type_name_124 = come_decrement_ref_count(type_name_124, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                if(_if_conditional183=c_value_103,                _if_conditional183) {
                    add_come_last_code2(info,((char*)(right_value96=xsprintf("if(%s) { come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d); }\n",c_value_103,fun_name2_108,c_value_103,type->mAllocaValue,no_decrement_101,no_free_102,force_delete_))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96);
                    if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value96;
                    __freed_obj__ = 0;
                }
            }
        }
        else {
            if(_if_conditional184=klass_104->mProtocol&&type->mPointerNum==1,            _if_conditional184) {
                type_name_125=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value97=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97);
                if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value97;
                __freed_obj__ = 0;
                add_come_last_code2(info,((char*)(right_value98=xsprintf("if(%s) { %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, 0,0,0); }\n",name_100,name_100,name_100,type_name_125,name_100,type_name_125,name_100))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value98);
                if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { right_value98 = come_decrement_ref_count(right_value98, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value98;
                __freed_obj__ = 0;
                if(type_name_125 && !__freed_obj__) { type_name_125 = come_decrement_ref_count(type_name_125, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                add_come_last_code2(info,((char*)(right_value99=xsprintf("if(%s) { %s = come_decrement_ref_count(%s, (void*)0, (void*)0, 0,0,0); }\n",name_100,name_100,name_100))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value99);
                if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { right_value99 = come_decrement_ref_count(right_value99, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value99;
                __freed_obj__ = 0;
            }
        }
        if(c_value_103 && !__freed_obj__) { c_value_103 = come_decrement_ref_count(c_value_103, (void*)0, (void*)0, 0, 0, 0); }
        if(type2_107 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_107, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name2_108 && !__freed_obj__) { fun_name2_108 = come_decrement_ref_count(fun_name2_108, (void*)0, (void*)0, 0, 0, 0); }
    }
    __dec_obj49=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_97);
    if(__dec_obj49) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0); }
    __dec_obj50=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_96);
    if(__dec_obj50) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(stack_saved_96 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_96, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(name_100 && !__freed_obj__) { name_100 = come_decrement_ref_count(name_100, (void*)0, (void*)0, 0, 0, 0); }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sFun* default_value_110;
unsigned int hash_111;
unsigned int it_112;
_Bool _while_condtional16;
_Bool _if_conditional164;
void* right_value84;
_Bool _if_conditional166;
struct sFun* __result66__;
_Bool _if_conditional167;
_Bool _if_conditional168;
struct sFun* __result67__;
struct sFun* __result68__;
void* right_value85;
void* right_value86;
struct sFun* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_110, 0, sizeof(struct sFun*));
memset(&hash_111, 0, sizeof(unsigned int));
memset(&it_112, 0, sizeof(unsigned int));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
                memset(&default_value_110,0,sizeof(struct sFun*));
                hash_111=string_get_hash_key(((char*)key))%self->size;
                it_112=hash_111;
                while(_while_condtional16=(_Bool)1,                _while_condtional16) {
                    if(_if_conditional164=self->item_existance[it_112],                    _if_conditional164) {
                        if(_if_conditional166=optional$2boolbool_value(((struct optional$2boolbool*)(right_value84=string_equals(self->keys[it_112],key)))),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value84),
                        (right_value84 && right_value84 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value84, 
                        __freed_obj__ = 0, 
                        _if_conditional166) {
                            __result66__ = __result_obj__ = self->items[it_112];
                            return __result66__;
                        }
                        it_112++;
                        if(_if_conditional167=it_112>=self->size,                        _if_conditional167) {
                            it_112=0;
                        }
                        else {
                            if(_if_conditional168=it_112==hash_111,                            _if_conditional168) {
                                __result67__ = __result_obj__ = default_value_110;
                                return __result67__;
                            }
                        }
                    }
                    else {
                        __result68__ = __result_obj__ = default_value_110;
                        return __result68__;
                    }
                }
                __result70__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value86=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value85=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1619))),default_value_110,(_Bool)0)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value85);
                if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { right_value85 = come_decrement_ref_count(right_value85, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value85;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value86);
                if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value86;
                __freed_obj__ = 0;
                return __result70__;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional165;
_Bool default_value_113;
_Bool __result64__;
_Bool __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_113, 0, sizeof(_Bool));
                            if(_if_conditional165=self==((void*)0),                            _if_conditional165) {
                                memset(&default_value_113,0,sizeof(_Bool));
                                __result64__ = default_value_113;
                                return __result64__;
                            }
                            else {
                                __result65__ = self->v1;
                                return __result65__;
                            }
}

static void optional$2boolboolp_finalize(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sFunpbool* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    self->v1=v1;
                    self->v2=v2;
                    __result69__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result69__;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sFunpboolp_finalize(struct optional$2sFunpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct sGenericsFun* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sGenericsFun* default_value_116;
unsigned int hash_117;
unsigned int it_118;
_Bool _while_condtional17;
_Bool _if_conditional170;
void* right_value89;
_Bool _if_conditional171;
struct sGenericsFun* __result71__;
_Bool _if_conditional172;
_Bool _if_conditional173;
struct sGenericsFun* __result72__;
struct sGenericsFun* __result73__;
void* right_value90;
void* right_value91;
struct sGenericsFun* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_116, 0, sizeof(struct sGenericsFun*));
memset(&hash_117, 0, sizeof(unsigned int));
memset(&it_118, 0, sizeof(unsigned int));
memset(&right_value89, 0, sizeof(void*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
                    memset(&default_value_116,0,sizeof(struct sGenericsFun*));
                    hash_117=string_get_hash_key(((char*)key))%self->size;
                    it_118=hash_117;
                    while(_while_condtional17=(_Bool)1,                    _while_condtional17) {
                        if(_if_conditional170=self->item_existance[it_118],                        _if_conditional170) {
                            if(_if_conditional171=optional$2boolbool_value(((struct optional$2boolbool*)(right_value89=string_equals(self->keys[it_118],key)))),                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value89),
                            (right_value89 && right_value89 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0):0,
                            __right_value_freed_obj[0] = right_value89, 
                            __freed_obj__ = 0, 
                            _if_conditional171) {
                                __result71__ = __result_obj__ = self->items[it_118];
                                return __result71__;
                            }
                            it_118++;
                            if(_if_conditional172=it_118>=self->size,                            _if_conditional172) {
                                it_118=0;
                            }
                            else {
                                if(_if_conditional173=it_118==hash_117,                                _if_conditional173) {
                                    __result72__ = __result_obj__ = default_value_116;
                                    return __result72__;
                                }
                            }
                        }
                        else {
                            __result73__ = __result_obj__ = default_value_116;
                            return __result73__;
                        }
                    }
                    __result75__ = __result_obj__ = ((struct optional$2sGenericsFunpbool*)(right_value91=optional$2sGenericsFunpbool_initialize(((struct optional$2sGenericsFunpbool*)(right_value90=(struct optional$2sGenericsFunpbool*)come_calloc(1, sizeof(struct optional$2sGenericsFunpbool)*(1), "./comelang2.h", 1619))),default_value_116,(_Bool)0)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
                    if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value90;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value91);
                    if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sGenericsFunpboolp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value91;
                    __freed_obj__ = 0;
                    return __result75__;
}

static struct optional$2sGenericsFunpbool* optional$2sGenericsFunpbool_initialize(struct optional$2sGenericsFunpbool* self, struct sGenericsFun* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sGenericsFunpbool* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        self->v1=v1;
                        self->v2=v2;
                        __result74__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2sGenericsFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result74__;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2sGenericsFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sGenericsFunpboolp_finalize(struct optional$2sGenericsFunpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional179;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional179=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional179) {
                    if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void list$1CVALUEph_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1CVALUEph* it_126;
_Bool _while_condtional18;
struct list_item$1CVALUEph* prev_it_127;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_126, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_127, 0, sizeof(struct list_item$1CVALUEph*));
        it_126=self->head;
        while(_while_condtional18=it_126!=((void*)0),        _while_condtional18) {
            prev_it_127=it_126;
            it_126=it_126->next;
            if(prev_it_127 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_127, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional185;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional185=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional185) {
                    if(self->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional186;
_Bool _if_conditional187;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional186=self!=((void*)0)&&self->c_value!=((void*)0),                        _if_conditional186) {
                            if(self->c_value && !__freed_obj__) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        if(_if_conditional187=self!=((void*)0)&&self->type!=((void*)0),                        _if_conditional187) {
                            if(self->type && !__freed_obj__) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional188;
struct list$1CVALUEph* stack_saved_128;
struct list$1sRightValueObjectph* right_value_objects_129;
struct sType* type_before_130;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
void* right_value100;
char* c_value_131;
struct sClass* klass_132;
char* class_name_133;
char* fun_name_134;
void* right_value101;
struct sType* type2_135;
void* right_value102;
char* fun_name2_136;
struct sFun* finalizer_137;
_Bool _if_conditional192;
_Bool _if_conditional193;
void* right_value103;
char* none_generics_name_138;
void* right_value104;
char* generics_fun_name_139;
struct sGenericsFun* generics_fun_140;
_Bool _if_conditional194;
_Bool _if_conditional195;
int i_141;
_Bool _for_condtionalA5;
void* right_value105;
char* new_fun_name_142;
_Bool _if_conditional196;
void* right_value106;
char* __dec_obj51;
_Bool _if_conditional197;
_Bool _if_conditional198;
void* right_value107;
struct tuple2$2sFunpcharph* multiple_assgin_var2;
struct sFun* fun_143;
char* new_fun_name_144;
char* __dec_obj52;
_Bool _if_conditional199;
_Bool _if_conditional200;
void* right_value108;
char* type_name_145;
_Bool _if_conditional201;
_Bool _if_conditional202;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool _if_conditional205;
_Bool _if_conditional206;
_Bool _if_conditional207;
void* right_value109;
void* right_value110;
_Bool _if_conditional208;
void* right_value111;
void* right_value112;
_Bool _if_conditional209;
struct list$1tuple2$2charphsTypephph* o2_saved_146;
struct tuple2$2charphsTypeph* it_149;
_Bool _for_condtionalA6;
struct tuple2$2charphsTypeph* multiple_assgin_var3;
char* name_152;
struct sType* field_type_153;
_Bool _if_conditional214;
void* right_value113;
void* right_value114;
char* obj_154;
_Bool _if_conditional218;
struct list$1tuple2$2charphsTypephph* o2_saved_157;
struct tuple2$2charphsTypeph* it_158;
_Bool _for_condtionalA7;
struct tuple2$2charphsTypeph* multiple_assgin_var4;
char* name_159;
struct sType* field_type_160;
_Bool _if_conditional219;
void* right_value115;
void* right_value116;
char* obj_161;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
void* right_value117;
char* type_name_162;
_Bool _if_conditional223;
_Bool _if_conditional224;
_Bool _if_conditional225;
_Bool _if_conditional226;
_Bool _if_conditional227;
_Bool _if_conditional228;
_Bool _if_conditional229;
void* right_value118;
char* c_value_163;
struct sClass* klass_164;
char* class_name_165;
char* fun_name_166;
void* right_value119;
struct sType* type2_167;
void* right_value120;
char* fun_name2_168;
struct sFun* finalizer_169;
_Bool _if_conditional230;
_Bool _if_conditional231;
void* right_value121;
char* none_generics_name_170;
void* right_value122;
char* generics_fun_name_171;
struct sGenericsFun* generics_fun_172;
_Bool _if_conditional232;
_Bool _if_conditional233;
int i_173;
_Bool _for_condtionalA8;
void* right_value123;
char* new_fun_name_174;
_Bool _if_conditional234;
void* right_value124;
char* __dec_obj53;
_Bool _if_conditional235;
_Bool _if_conditional236;
void* right_value125;
struct tuple2$2sFunpcharph* multiple_assgin_var5;
struct sFun* fun_175;
char* new_fun_name_176;
char* __dec_obj54;
_Bool _if_conditional237;
_Bool _if_conditional238;
void* right_value126;
char* type_name_177;
_Bool _if_conditional239;
_Bool _if_conditional240;
_Bool _if_conditional241;
_Bool _if_conditional242;
_Bool _if_conditional243;
_Bool _if_conditional244;
_Bool _if_conditional245;
void* right_value127;
void* right_value128;
_Bool _if_conditional246;
void* right_value129;
void* right_value130;
_Bool _if_conditional247;
struct list$1tuple2$2charphsTypephph* o2_saved_178;
struct tuple2$2charphsTypeph* it_179;
_Bool _for_condtionalA9;
struct tuple2$2charphsTypeph* multiple_assgin_var6;
char* name_180;
struct sType* field_type_181;
_Bool _if_conditional248;
void* right_value131;
void* right_value132;
char* obj_182;
_Bool _if_conditional249;
struct list$1tuple2$2charphsTypephph* o2_saved_183;
struct tuple2$2charphsTypeph* it_184;
_Bool _for_condtionalA10;
struct tuple2$2charphsTypeph* multiple_assgin_var7;
char* name_185;
struct sType* field_type_186;
_Bool _if_conditional250;
void* right_value133;
void* right_value134;
char* obj_187;
_Bool _if_conditional251;
_Bool _if_conditional252;
_Bool _if_conditional253;
void* right_value135;
char* type_name_188;
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool _if_conditional256;
_Bool _if_conditional257;
_Bool _if_conditional258;
_Bool _if_conditional259;
_Bool _if_conditional260;
struct list$1sRightValueObjectph* __dec_obj55;
struct list$1CVALUEph* __dec_obj56;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&stack_saved_128, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_129, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&type_before_130, 0, sizeof(struct sType*));
memset(&right_value100, 0, sizeof(void*));
memset(&c_value_131, 0, sizeof(char*));
memset(&klass_132, 0, sizeof(struct sClass*));
memset(&class_name_133, 0, sizeof(char*));
memset(&fun_name_134, 0, sizeof(char*));
memset(&right_value101, 0, sizeof(void*));
memset(&type2_135, 0, sizeof(struct sType*));
memset(&right_value102, 0, sizeof(void*));
memset(&fun_name2_136, 0, sizeof(char*));
memset(&finalizer_137, 0, sizeof(struct sFun*));
memset(&right_value103, 0, sizeof(void*));
memset(&none_generics_name_138, 0, sizeof(char*));
memset(&right_value104, 0, sizeof(void*));
memset(&generics_fun_name_139, 0, sizeof(char*));
memset(&generics_fun_140, 0, sizeof(struct sGenericsFun*));
memset(&i_141, 0, sizeof(int));
memset(&right_value105, 0, sizeof(void*));
memset(&new_fun_name_142, 0, sizeof(char*));
memset(&right_value106, 0, sizeof(void*));
memset(&right_value107, 0, sizeof(void*));
memset(&fun_143, 0, sizeof(struct sFun*));
memset(&new_fun_name_144, 0, sizeof(char*));
memset(&fun_143, 0, sizeof(struct sFun*));
memset(&new_fun_name_144, 0, sizeof(char*));
memset(&right_value108, 0, sizeof(void*));
memset(&type_name_145, 0, sizeof(char*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
memset(&o2_saved_146, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_149, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_152, 0, sizeof(char*));
memset(&field_type_153, 0, sizeof(struct sType*));
memset(&name_152, 0, sizeof(char*));
memset(&field_type_153, 0, sizeof(struct sType*));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&obj_154, 0, sizeof(char*));
memset(&o2_saved_157, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_158, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_159, 0, sizeof(char*));
memset(&field_type_160, 0, sizeof(struct sType*));
memset(&name_159, 0, sizeof(char*));
memset(&field_type_160, 0, sizeof(struct sType*));
memset(&right_value115, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
memset(&obj_161, 0, sizeof(char*));
memset(&right_value117, 0, sizeof(void*));
memset(&type_name_162, 0, sizeof(char*));
memset(&right_value118, 0, sizeof(void*));
memset(&c_value_163, 0, sizeof(char*));
memset(&klass_164, 0, sizeof(struct sClass*));
memset(&class_name_165, 0, sizeof(char*));
memset(&fun_name_166, 0, sizeof(char*));
memset(&right_value119, 0, sizeof(void*));
memset(&type2_167, 0, sizeof(struct sType*));
memset(&right_value120, 0, sizeof(void*));
memset(&fun_name2_168, 0, sizeof(char*));
memset(&finalizer_169, 0, sizeof(struct sFun*));
memset(&right_value121, 0, sizeof(void*));
memset(&none_generics_name_170, 0, sizeof(char*));
memset(&right_value122, 0, sizeof(void*));
memset(&generics_fun_name_171, 0, sizeof(char*));
memset(&generics_fun_172, 0, sizeof(struct sGenericsFun*));
memset(&i_173, 0, sizeof(int));
memset(&right_value123, 0, sizeof(void*));
memset(&new_fun_name_174, 0, sizeof(char*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&fun_175, 0, sizeof(struct sFun*));
memset(&new_fun_name_176, 0, sizeof(char*));
memset(&fun_175, 0, sizeof(struct sFun*));
memset(&new_fun_name_176, 0, sizeof(char*));
memset(&right_value126, 0, sizeof(void*));
memset(&type_name_177, 0, sizeof(char*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
memset(&o2_saved_178, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_179, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_180, 0, sizeof(char*));
memset(&field_type_181, 0, sizeof(struct sType*));
memset(&name_180, 0, sizeof(char*));
memset(&field_type_181, 0, sizeof(struct sType*));
memset(&right_value131, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
memset(&obj_182, 0, sizeof(char*));
memset(&o2_saved_183, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_184, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_185, 0, sizeof(char*));
memset(&field_type_186, 0, sizeof(struct sType*));
memset(&name_185, 0, sizeof(char*));
memset(&field_type_186, 0, sizeof(struct sType*));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&obj_187, 0, sizeof(char*));
memset(&right_value135, 0, sizeof(void*));
memset(&type_name_188, 0, sizeof(char*));
    if(_if_conditional188=gComeGC,    _if_conditional188) {
        return;
    }
    stack_saved_128=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_129=info->right_value_objects;
    type_before_130=type;
    if(_if_conditional189=type->mNoSolvedGenericsType->v1,    _if_conditional189) {
        type=type->mNoSolvedGenericsType->v1;
    }
    if(_if_conditional190=type->mPointerNum>0||type->mClass->mProtocol||list$1sTypeph_length(type->mGenericsTypes)>0||(info->come_fun->mCloner&&ret_value),    _if_conditional190) {
        if(_if_conditional191=force_delete_,        _if_conditional191) {
            c_value_131=(char*)come_increment_ref_count(((char*)(right_value100=__builtin_string(obj))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
            if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value100;
            __freed_obj__ = 0;
            klass_132=type->mClass;
            class_name_133=klass_132->mName;
            fun_name_134="force_finalize";
            type2_135=(struct sType*)come_increment_ref_count(((struct sType*)(right_value101=sType_clone(type))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value101);
            if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value101;
            __freed_obj__ = 0;
            type2_135->mHeap=(_Bool)0;
            fun_name2_136=(char*)come_increment_ref_count(((char*)(right_value102=create_method_name(type,(_Bool)0,fun_name_134,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value102);
            if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { right_value102 = come_decrement_ref_count(right_value102, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value102;
            __freed_obj__ = 0;
            finalizer_137=((void*)0);
            if(_if_conditional192=list$1sTypeph_length(type->mGenericsTypes)>0,            _if_conditional192) {
                finalizer_137=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_136);
                if(_if_conditional193=finalizer_137==((void*)0),                _if_conditional193) {
                    none_generics_name_138=(char*)come_increment_ref_count(((char*)(right_value103=get_none_generics_name(type2_135->mClass->mName))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value103);
                    if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { right_value103 = come_decrement_ref_count(right_value103, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value103;
                    __freed_obj__ = 0;
                    generics_fun_name_139=(char*)come_increment_ref_count(((char*)(right_value104=xsprintf("%s_%s",none_generics_name_138,fun_name_134))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value104);
                    if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value104;
                    __freed_obj__ = 0;
                    generics_fun_140=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_139);
                    if(_if_conditional194=generics_fun_140,                    _if_conditional194) {
                        if(_if_conditional195=!create_generics_fun((char*)come_increment_ref_count(fun_name2_136),generics_fun_140,type,info),                        _if_conditional195) {
                            printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                            exit(2);
                        }
                        finalizer_137=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_136);
                    }
                    if(none_generics_name_138 && !__freed_obj__) { none_generics_name_138 = come_decrement_ref_count(none_generics_name_138, (void*)0, (void*)0, 0, 0, 0); }
                    if(generics_fun_name_139 && !__freed_obj__) { generics_fun_name_139 = come_decrement_ref_count(generics_fun_name_139, (void*)0, (void*)0, 0, 0, 0); }
                }
            }
            else {
                for(
                i_141=128-1 ,                0;                _for_condtionalA5=                i_141>=1 ,                _for_condtionalA5;                i_141-- ,                0                ){
                    new_fun_name_142=(char*)come_increment_ref_count(((char*)(right_value105=xsprintf("%s_v%d",fun_name2_136,i_141))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
                    if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { right_value105 = come_decrement_ref_count(right_value105, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value105;
                    __freed_obj__ = 0;
                    finalizer_137=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_142);
                    if(_if_conditional196=finalizer_137,                    _if_conditional196) {
                        __dec_obj51=fun_name2_136;
                        fun_name2_136=(char*)come_increment_ref_count(((char*)(right_value106=__builtin_string(new_fun_name_142))));
                        if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
                        if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value106;
                        __freed_obj__ = 0;
                        if(new_fun_name_142 && !__freed_obj__) { new_fun_name_142 = come_decrement_ref_count(new_fun_name_142, (void*)0, (void*)0, 0, 0, 0); }
                        break;
                    }
                    if(new_fun_name_142 && !__freed_obj__) { new_fun_name_142 = come_decrement_ref_count(new_fun_name_142, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(_if_conditional197=finalizer_137==((void*)0),                _if_conditional197) {
                    finalizer_137=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_136);
                }
            }
            if(_if_conditional198=finalizer_137==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,            _if_conditional198) {
                multiple_assgin_var2=((struct tuple2$2sFunpcharph*)(right_value107=create_force_finalizer_automatically(type,fun_name_134,info)));
                fun_143=multiple_assgin_var2->v1;
                new_fun_name_144=(char*)come_increment_ref_count(multiple_assgin_var2->v2);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
                if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value107;
                __freed_obj__ = 0;
                __dec_obj52=fun_name2_136;
                fun_name2_136=(char*)come_increment_ref_count(new_fun_name_144);
                if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
                finalizer_137=fun_143;
                if(new_fun_name_144 && !__freed_obj__) { new_fun_name_144 = come_decrement_ref_count(new_fun_name_144, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(_if_conditional199=finalizer_137!=((void*)0),            _if_conditional199) {
                if(_if_conditional200=klass_132->mProtocol&&type->mPointerNum==1,                _if_conditional200) {
                    type_name_145=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value108=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value108);
                    if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value108;
                    __freed_obj__ = 0;
                    if(_if_conditional201=c_value_131,                    _if_conditional201) {
                        if(_if_conditional202=no_decrement,                        _if_conditional202) {
                            if(_if_conditional203=comma,                            _if_conditional203) {
                                add_come_code(info,"(%s && %s != __result_obj__ && !__freed_obj__) ? come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d):0,\n",c_value_131,c_value_131,fun_name2_136,c_value_131,type_name_145,c_value_131,type_name_145,c_value_131,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                add_come_code(info,"if(%s && %s != __result_obj__ && !__freed_obj__) { come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d); }\n",c_value_131,c_value_131,fun_name2_136,c_value_131,type_name_145,c_value_131,type_name_145,c_value_131,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                        else {
                            if(_if_conditional204=comma,                            _if_conditional204) {
                                add_come_code(info,"(%s && !__freed_obj__) ? come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d):0,\n",c_value_131,fun_name2_136,c_value_131,type_name_145,c_value_131,type_name_145,c_value_131,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                add_come_code(info,"if(%s && !__freed_obj__) { come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d); }\n",c_value_131,fun_name2_136,c_value_131,type_name_145,c_value_131,type_name_145,c_value_131,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                    }
                    if(type_name_145 && !__freed_obj__) { type_name_145 = come_decrement_ref_count(type_name_145, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    if(_if_conditional205=c_value_131,                    _if_conditional205) {
                        if(_if_conditional206=no_decrement,                        _if_conditional206) {
                            if(_if_conditional207=comma,                            _if_conditional207) {
                                add_come_code(info,((char*)(right_value109=xsprintf("(%s && %s != __result_obj__ && !__freed_obj__) ? come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d):0,\n",c_value_131,c_value_131,fun_name2_136,c_value_131,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
                                if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { right_value109 = come_decrement_ref_count(right_value109, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value109;
                                __freed_obj__ = 0;
                            }
                            else {
                                add_come_code(info,((char*)(right_value110=xsprintf("if(%s && %s != __result_obj__ && !__freed_obj__) { come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d); }\n",c_value_131,c_value_131,fun_name2_136,c_value_131,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value110);
                                if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { right_value110 = come_decrement_ref_count(right_value110, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value110;
                                __freed_obj__ = 0;
                            }
                        }
                        else {
                            if(_if_conditional208=comma,                            _if_conditional208) {
                                add_come_code(info,((char*)(right_value111=xsprintf("(%s && !__freed_obj__) ? come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d):0,\n",c_value_131,fun_name2_136,c_value_131,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value111);
                                if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value111;
                                __freed_obj__ = 0;
                            }
                            else {
                                add_come_code(info,((char*)(right_value112=xsprintf("if(%s && !__freed_obj__) { come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d); }\n",c_value_131,fun_name2_136,c_value_131,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value112);
                                if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { right_value112 = come_decrement_ref_count(right_value112, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value112;
                                __freed_obj__ = 0;
                            }
                        }
                    }
                }
            }
            else {
                if(_if_conditional209=klass_132->mStruct&&type->mPointerNum==0,                _if_conditional209) {
                    for(
                    o2_saved_146=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_132->mFields)),it_149=list$1tuple2$2charphsTypephph_begin((o2_saved_146)) ,                    0;                    _for_condtionalA6=                    !list$1tuple2$2charphsTypephph_end((o2_saved_146)) ,                    _for_condtionalA6;                    it_149=list$1tuple2$2charphsTypephph_next((o2_saved_146)) ,                    0                    ){
                        multiple_assgin_var3=it_149;
                        name_152=(char*)come_increment_ref_count(multiple_assgin_var3->v1);
                        field_type_153=(struct sType*)come_increment_ref_count(multiple_assgin_var3->v2);
                        if(_if_conditional214=field_type_153->mHeap&&field_type_153->mPointerNum>0,                        _if_conditional214) {
                            obj_154=(char*)come_increment_ref_count(((char*)(right_value114=xsprintf("(((%s)%s).%s)",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value113=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info)))),c_value_131,name_152))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
                            if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value113;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value114);
                            if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { right_value114 = come_decrement_ref_count(right_value114, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value114;
                            __freed_obj__ = 0;
                            free_object(field_type_153,obj_154,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                            if(obj_154 && !__freed_obj__) { obj_154 = come_decrement_ref_count(obj_154, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        if(name_152 && !__freed_obj__) { name_152 = come_decrement_ref_count(name_152, (void*)0, (void*)0, 0, 0, 0); }
                        if(field_type_153 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_153, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(o2_saved_146 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_146, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                else {
                    if(_if_conditional218=klass_132->mStruct&&type->mPointerNum==1,                    _if_conditional218) {
                        for(
                        o2_saved_157=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_132->mFields)),it_158=list$1tuple2$2charphsTypephph_begin((o2_saved_157)) ,                        0;                        _for_condtionalA7=                        !list$1tuple2$2charphsTypephph_end((o2_saved_157)) ,                        _for_condtionalA7;                        it_158=list$1tuple2$2charphsTypephph_next((o2_saved_157)) ,                        0                        ){
                            multiple_assgin_var4=it_158;
                            name_159=(char*)come_increment_ref_count(multiple_assgin_var4->v1);
                            field_type_160=(struct sType*)come_increment_ref_count(multiple_assgin_var4->v2);
                            if(_if_conditional219=field_type_160->mHeap&&field_type_160->mPointerNum>0,                            _if_conditional219) {
                                obj_161=(char*)come_increment_ref_count(((char*)(right_value116=xsprintf("(((%s)%s)->%s)",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value115=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info)))),c_value_131,name_159))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
                                if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value115;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value116);
                                if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { right_value116 = come_decrement_ref_count(right_value116, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value116;
                                __freed_obj__ = 0;
                                free_object(field_type_160,obj_161,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                                if(obj_161 && !__freed_obj__) { obj_161 = come_decrement_ref_count(obj_161, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            if(name_159 && !__freed_obj__) { name_159 = come_decrement_ref_count(name_159, (void*)0, (void*)0, 0, 0, 0); }
                            if(field_type_160 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_160, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        if(o2_saved_157 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_157, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                }
                if(_if_conditional220=!type->mAllocaValue,                _if_conditional220) {
                    if(_if_conditional221=klass_132->mProtocol&&type->mPointerNum==1,                    _if_conditional221) {
                        if(_if_conditional222=c_value_131,                        _if_conditional222) {
                            type_name_162=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value117=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
                            if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value117;
                            __freed_obj__ = 0;
                            if(_if_conditional223=no_decrement,                            _if_conditional223) {
                                if(_if_conditional224=comma,                                _if_conditional224) {
                                    add_come_code(info,"(%s && %s != __result_obj__ && !__freed_obj__) ? %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d,%d):0,\n",c_value_131,c_value_131,c_value_131,c_value_131,type_name_162,c_value_131,type_name_162,c_value_131,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"if(%s && %s != __result_obj__ && !__freed_obj__) { %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d); } \n",c_value_131,c_value_131,c_value_131,c_value_131,type_name_162,c_value_131,type_name_162,c_value_131,no_decrement,no_free,force_delete_);
                                }
                            }
                            else {
                                if(_if_conditional225=comma,                                _if_conditional225) {
                                    add_come_code(info,"(%s && !__freed_obj__) ? %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d):0,\n",c_value_131,c_value_131,c_value_131,type_name_162,c_value_131,type_name_162,c_value_131,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"if(%s && !__freed_obj__) { %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d); } \n",c_value_131,c_value_131,c_value_131,type_name_162,c_value_131,type_name_162,c_value_131,no_decrement,no_free,force_delete_);
                                }
                            }
                            if(type_name_162 && !__freed_obj__) { type_name_162 = come_decrement_ref_count(type_name_162, (void*)0, (void*)0, 0, 0, 0); }
                        }
                    }
                    else {
                        if(_if_conditional226=c_value_131,                        _if_conditional226) {
                            if(_if_conditional227=no_decrement,                            _if_conditional227) {
                                if(_if_conditional228=comma,                                _if_conditional228) {
                                    add_come_code(info,"(%s && %s != __result_obj__ && !__freed_obj__) ? %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d):0,\n",c_value_131,c_value_131,c_value_131,c_value_131,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"if(%s && %s != __result_obj__ && !__freed_obj__) { %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d); }\n",c_value_131,c_value_131,c_value_131,c_value_131,no_decrement,no_free,force_delete_);
                                }
                            }
                            else {
                                if(_if_conditional229=comma,                                _if_conditional229) {
                                    add_come_code(info,"(%s && !__freed_obj__) ? %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d):0,\n",c_value_131,c_value_131,c_value_131,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"if(%s && !__freed_obj__) { %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d); }\n",c_value_131,c_value_131,c_value_131,no_decrement,no_free,force_delete_);
                                }
                            }
                        }
                    }
                }
            }
            if(c_value_131 && !__freed_obj__) { c_value_131 = come_decrement_ref_count(c_value_131, (void*)0, (void*)0, 0, 0, 0); }
            if(type2_135 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_135, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(fun_name2_136 && !__freed_obj__) { fun_name2_136 = come_decrement_ref_count(fun_name2_136, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            c_value_163=(char*)come_increment_ref_count(((char*)(right_value118=__builtin_string(obj))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
            if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { right_value118 = come_decrement_ref_count(right_value118, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value118;
            __freed_obj__ = 0;
            klass_164=type->mClass;
            class_name_165=klass_164->mName;
            fun_name_166="finalize";
            type2_167=(struct sType*)come_increment_ref_count(((struct sType*)(right_value119=sType_clone(type))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value119);
            if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value119;
            __freed_obj__ = 0;
            type2_167->mHeap=(_Bool)0;
            fun_name2_168=(char*)come_increment_ref_count(((char*)(right_value120=create_method_name(type,(_Bool)0,fun_name_166,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value120);
            if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { right_value120 = come_decrement_ref_count(right_value120, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value120;
            __freed_obj__ = 0;
            finalizer_169=((void*)0);
            if(_if_conditional230=list$1sTypeph_length(type->mGenericsTypes)>0,            _if_conditional230) {
                finalizer_169=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_168);
                if(_if_conditional231=finalizer_169==((void*)0),                _if_conditional231) {
                    none_generics_name_170=(char*)come_increment_ref_count(((char*)(right_value121=get_none_generics_name(type2_167->mClass->mName))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value121);
                    if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { right_value121 = come_decrement_ref_count(right_value121, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value121;
                    __freed_obj__ = 0;
                    generics_fun_name_171=(char*)come_increment_ref_count(((char*)(right_value122=xsprintf("%s_%s",none_generics_name_170,fun_name_166))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value122);
                    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { right_value122 = come_decrement_ref_count(right_value122, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value122;
                    __freed_obj__ = 0;
                    generics_fun_172=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_171);
                    if(_if_conditional232=generics_fun_172,                    _if_conditional232) {
                        if(_if_conditional233=!create_generics_fun((char*)come_increment_ref_count(fun_name2_168),generics_fun_172,type,info),                        _if_conditional233) {
                            printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                            exit(2);
                        }
                        finalizer_169=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_168);
                    }
                    if(none_generics_name_170 && !__freed_obj__) { none_generics_name_170 = come_decrement_ref_count(none_generics_name_170, (void*)0, (void*)0, 0, 0, 0); }
                    if(generics_fun_name_171 && !__freed_obj__) { generics_fun_name_171 = come_decrement_ref_count(generics_fun_name_171, (void*)0, (void*)0, 0, 0, 0); }
                }
            }
            else {
                for(
                i_173=128-1 ,                0;                _for_condtionalA8=                i_173>=1 ,                _for_condtionalA8;                i_173-- ,                0                ){
                    new_fun_name_174=(char*)come_increment_ref_count(((char*)(right_value123=xsprintf("%s_v%d",fun_name2_168,i_173))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value123);
                    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { right_value123 = come_decrement_ref_count(right_value123, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value123;
                    __freed_obj__ = 0;
                    finalizer_169=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_174);
                    if(_if_conditional234=finalizer_169,                    _if_conditional234) {
                        __dec_obj53=fun_name2_168;
                        fun_name2_168=(char*)come_increment_ref_count(((char*)(right_value124=__builtin_string(new_fun_name_174))));
                        if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value124);
                        if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { right_value124 = come_decrement_ref_count(right_value124, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value124;
                        __freed_obj__ = 0;
                        if(new_fun_name_174 && !__freed_obj__) { new_fun_name_174 = come_decrement_ref_count(new_fun_name_174, (void*)0, (void*)0, 0, 0, 0); }
                        break;
                    }
                    if(new_fun_name_174 && !__freed_obj__) { new_fun_name_174 = come_decrement_ref_count(new_fun_name_174, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(_if_conditional235=finalizer_169==((void*)0),                _if_conditional235) {
                    finalizer_169=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_168);
                }
            }
            if(_if_conditional236=finalizer_169==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,            _if_conditional236) {
                multiple_assgin_var5=((struct tuple2$2sFunpcharph*)(right_value125=create_finalizer_automatically(type,fun_name_166,info)));
                fun_175=multiple_assgin_var5->v1;
                new_fun_name_176=(char*)come_increment_ref_count(multiple_assgin_var5->v2);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
                if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value125;
                __freed_obj__ = 0;
                __dec_obj54=fun_name2_168;
                fun_name2_168=(char*)come_increment_ref_count(new_fun_name_176);
                if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
                finalizer_169=fun_175;
                if(new_fun_name_176 && !__freed_obj__) { new_fun_name_176 = come_decrement_ref_count(new_fun_name_176, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(_if_conditional237=finalizer_169!=((void*)0),            _if_conditional237) {
                if(_if_conditional238=klass_164->mProtocol&&type->mPointerNum==1,                _if_conditional238) {
                    type_name_177=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value126=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
                    if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value126;
                    __freed_obj__ = 0;
                    if(_if_conditional239=c_value_163,                    _if_conditional239) {
                        if(_if_conditional240=no_decrement,                        _if_conditional240) {
                            if(_if_conditional241=comma,                            _if_conditional241) {
                                add_come_code(info,"(%s && %s != __result_obj__ && !__freed_obj__) ? come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d):0,\n",c_value_163,c_value_163,fun_name2_168,c_value_163,type_name_177,c_value_163,type_name_177,c_value_163,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                add_come_code(info,"if(%s && %s != __result_obj__ && !__freed_obj__) { come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d); }\n",c_value_163,c_value_163,fun_name2_168,c_value_163,type_name_177,c_value_163,type_name_177,c_value_163,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                        else {
                            if(_if_conditional242=comma,                            _if_conditional242) {
                                add_come_code(info,"(%s && !__freed_obj__) ? come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d):0,\n",c_value_163,fun_name2_168,c_value_163,type_name_177,c_value_163,type_name_177,c_value_163,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                add_come_code(info,"if(%s && !__freed_obj__) { come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d); }\n",c_value_163,fun_name2_168,c_value_163,type_name_177,c_value_163,type_name_177,c_value_163,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                    }
                    if(type_name_177 && !__freed_obj__) { type_name_177 = come_decrement_ref_count(type_name_177, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    if(_if_conditional243=c_value_163,                    _if_conditional243) {
                        if(_if_conditional244=no_decrement,                        _if_conditional244) {
                            if(_if_conditional245=comma,                            _if_conditional245) {
                                add_come_code(info,((char*)(right_value127=xsprintf("(%s && %s != __result_obj__ && !__freed_obj__) ? come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d):0,\n",c_value_163,c_value_163,fun_name2_168,c_value_163,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
                                if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value127;
                                __freed_obj__ = 0;
                            }
                            else {
                                add_come_code(info,((char*)(right_value128=xsprintf("if(%s && %s != __result_obj__ && !__freed_obj__) { come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d); }\n",c_value_163,c_value_163,fun_name2_168,c_value_163,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value128);
                                if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { right_value128 = come_decrement_ref_count(right_value128, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value128;
                                __freed_obj__ = 0;
                            }
                        }
                        else {
                            if(_if_conditional246=comma,                            _if_conditional246) {
                                add_come_code(info,((char*)(right_value129=xsprintf("(%s && !__freed_obj__) ? come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d):0,\n",c_value_163,fun_name2_168,c_value_163,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
                                if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value129;
                                __freed_obj__ = 0;
                            }
                            else {
                                add_come_code(info,((char*)(right_value130=xsprintf("if(%s && !__freed_obj__) { come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d); }\n",c_value_163,fun_name2_168,c_value_163,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value130);
                                if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value130;
                                __freed_obj__ = 0;
                            }
                        }
                    }
                }
            }
            else {
                if(_if_conditional247=klass_164->mStruct&&type->mPointerNum==0,                _if_conditional247) {
                    for(
                    o2_saved_178=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_164->mFields)),it_179=list$1tuple2$2charphsTypephph_begin((o2_saved_178)) ,                    0;                    _for_condtionalA9=                    !list$1tuple2$2charphsTypephph_end((o2_saved_178)) ,                    _for_condtionalA9;                    it_179=list$1tuple2$2charphsTypephph_next((o2_saved_178)) ,                    0                    ){
                        multiple_assgin_var6=it_179;
                        name_180=(char*)come_increment_ref_count(multiple_assgin_var6->v1);
                        field_type_181=(struct sType*)come_increment_ref_count(multiple_assgin_var6->v2);
                        if(_if_conditional248=field_type_181->mHeap&&field_type_181->mPointerNum>0,                        _if_conditional248) {
                            obj_182=(char*)come_increment_ref_count(((char*)(right_value132=xsprintf("(((%s)%s).%s)",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value131=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info)))),c_value_163,name_180))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value131);
                            if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value131;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value132);
                            if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { right_value132 = come_decrement_ref_count(right_value132, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value132;
                            __freed_obj__ = 0;
                            free_object(field_type_181,obj_182,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                            if(obj_182 && !__freed_obj__) { obj_182 = come_decrement_ref_count(obj_182, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        if(name_180 && !__freed_obj__) { name_180 = come_decrement_ref_count(name_180, (void*)0, (void*)0, 0, 0, 0); }
                        if(field_type_181 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_181, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(o2_saved_178 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_178, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                else {
                    if(_if_conditional249=klass_164->mStruct&&type->mPointerNum==1,                    _if_conditional249) {
                        for(
                        o2_saved_183=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_164->mFields)),it_184=list$1tuple2$2charphsTypephph_begin((o2_saved_183)) ,                        0;                        _for_condtionalA10=                        !list$1tuple2$2charphsTypephph_end((o2_saved_183)) ,                        _for_condtionalA10;                        it_184=list$1tuple2$2charphsTypephph_next((o2_saved_183)) ,                        0                        ){
                            multiple_assgin_var7=it_184;
                            name_185=(char*)come_increment_ref_count(multiple_assgin_var7->v1);
                            field_type_186=(struct sType*)come_increment_ref_count(multiple_assgin_var7->v2);
                            if(_if_conditional250=field_type_186->mHeap&&field_type_186->mPointerNum>0,                            _if_conditional250) {
                                obj_187=(char*)come_increment_ref_count(((char*)(right_value134=xsprintf("(((%s)%s)->%s)",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value133=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info)))),c_value_163,name_185))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133);
                                if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value133;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value134);
                                if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { right_value134 = come_decrement_ref_count(right_value134, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value134;
                                __freed_obj__ = 0;
                                free_object(field_type_186,obj_187,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                                if(obj_187 && !__freed_obj__) { obj_187 = come_decrement_ref_count(obj_187, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            if(name_185 && !__freed_obj__) { name_185 = come_decrement_ref_count(name_185, (void*)0, (void*)0, 0, 0, 0); }
                            if(field_type_186 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_186, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        if(o2_saved_183 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_183, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                }
                if(_if_conditional251=!type->mAllocaValue,                _if_conditional251) {
                    if(_if_conditional252=klass_164->mProtocol&&type->mPointerNum==1,                    _if_conditional252) {
                        if(_if_conditional253=c_value_163,                        _if_conditional253) {
                            type_name_188=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value135=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value135);
                            if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value135;
                            __freed_obj__ = 0;
                            if(_if_conditional254=no_decrement,                            _if_conditional254) {
                                if(_if_conditional255=comma,                                _if_conditional255) {
                                    add_come_code(info,"(%s && %s != __result_obj__ && !__freed_obj__) ? %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d,%d):0,\n",c_value_163,c_value_163,c_value_163,c_value_163,type_name_188,c_value_163,type_name_188,c_value_163,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"if(%s && %s != __result_obj__ && !__freed_obj__) { %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d); } \n",c_value_163,c_value_163,c_value_163,c_value_163,type_name_188,c_value_163,type_name_188,c_value_163,no_decrement,no_free,force_delete_);
                                }
                            }
                            else {
                                if(_if_conditional256=comma,                                _if_conditional256) {
                                    add_come_code(info,"(%s && !__freed_obj__) ? %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d):0,\n",c_value_163,c_value_163,c_value_163,type_name_188,c_value_163,type_name_188,c_value_163,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"if(%s && !__freed_obj__) { %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d); } \n",c_value_163,c_value_163,c_value_163,type_name_188,c_value_163,type_name_188,c_value_163,no_decrement,no_free,force_delete_);
                                }
                            }
                            if(type_name_188 && !__freed_obj__) { type_name_188 = come_decrement_ref_count(type_name_188, (void*)0, (void*)0, 0, 0, 0); }
                        }
                    }
                    else {
                        if(_if_conditional257=c_value_163,                        _if_conditional257) {
                            if(_if_conditional258=no_decrement,                            _if_conditional258) {
                                if(_if_conditional259=comma,                                _if_conditional259) {
                                    add_come_code(info,"(%s && %s != __result_obj__ && !__freed_obj__) ? %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d):0,\n",c_value_163,c_value_163,c_value_163,c_value_163,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"if(%s && %s != __result_obj__ && !__freed_obj__) { %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d); }\n",c_value_163,c_value_163,c_value_163,c_value_163,no_decrement,no_free,force_delete_);
                                }
                            }
                            else {
                                if(_if_conditional260=comma,                                _if_conditional260) {
                                    add_come_code(info,"(%s && !__freed_obj__) ? %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d):0,\n",c_value_163,c_value_163,c_value_163,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"if(%s && !__freed_obj__) { %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d); }\n",c_value_163,c_value_163,c_value_163,no_decrement,no_free,force_delete_);
                                }
                            }
                        }
                    }
                }
            }
            if(c_value_163 && !__freed_obj__) { c_value_163 = come_decrement_ref_count(c_value_163, (void*)0, (void*)0, 0, 0, 0); }
            if(type2_167 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_167, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(fun_name2_168 && !__freed_obj__) { fun_name2_168 = come_decrement_ref_count(fun_name2_168, (void*)0, (void*)0, 0, 0, 0); }
        }
    }
    __dec_obj55=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_129);
    if(__dec_obj55) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0); }
    __dec_obj56=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_128);
    if(__dec_obj56) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(stack_saved_128 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_128, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional210;
struct tuple2$2charphsTypeph* result_147;
struct tuple2$2charphsTypeph* __result76__;
_Bool _if_conditional211;
struct tuple2$2charphsTypeph* __result77__;
struct tuple2$2charphsTypeph* result_148;
struct tuple2$2charphsTypeph* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_147, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_148, 0, sizeof(struct tuple2$2charphsTypeph*));
                        if(_if_conditional210=self==((void*)0),                        _if_conditional210) {
                            memset(&result_147,0,sizeof(struct tuple2$2charphsTypeph*));
                            __result76__ = __result_obj__ = result_147;
                            return __result76__;
                        }
                        self->it=self->head;
                        if(_if_conditional211=self->it,                        _if_conditional211) {
                            __result77__ = __result_obj__ = self->it->item;
                            return __result77__;
                        }
                        memset(&result_148,0,sizeof(struct tuple2$2charphsTypeph*));
                        __result78__ = __result_obj__ = result_148;
                        return __result78__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result79__ = self==((void*)0)||self->it==((void*)0);
                        return __result79__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional212;
struct tuple2$2charphsTypeph* result_150;
struct tuple2$2charphsTypeph* __result80__;
_Bool _if_conditional213;
struct tuple2$2charphsTypeph* __result81__;
struct tuple2$2charphsTypeph* result_151;
struct tuple2$2charphsTypeph* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_150, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_151, 0, sizeof(struct tuple2$2charphsTypeph*));
                        if(_if_conditional212=self==((void*)0)||self->it==((void*)0),                        _if_conditional212) {
                            memset(&result_150,0,sizeof(struct tuple2$2charphsTypeph*));
                            __result80__ = __result_obj__ = result_150;
                            return __result80__;
                        }
                        self->it=self->it->next;
                        if(_if_conditional213=self->it,                        _if_conditional213) {
                            __result81__ = __result_obj__ = self->it->item;
                            return __result81__;
                        }
                        memset(&result_151,0,sizeof(struct tuple2$2charphsTypeph*));
                        __result82__ = __result_obj__ = result_151;
                        return __result82__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphsTypephph* it_155;
_Bool _while_condtional19;
struct list_item$1tuple2$2charphsTypephph* prev_it_156;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_155, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_156, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                        it_155=self->head;
                        while(_while_condtional19=it_155!=((void*)0),                        _while_condtional19) {
                            prev_it_156=it_155;
                            it_155=it_155->next;
                            if(prev_it_156 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_156, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional215;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional215=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional215) {
                                    if(self->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional216;
_Bool _if_conditional217;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        if(_if_conditional216=self!=((void*)0)&&self->v1!=((void*)0),                                        _if_conditional216) {
                                            if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                                        }
                                        if(_if_conditional217=self!=((void*)0)&&self->v2!=((void*)0),                                        _if_conditional217) {
                                            if(self->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
}

struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value136;
struct sType* type2_189;
_Bool _if_conditional261;
char* result_190;
struct sType* result_type_191;
struct list$1CVALUEph* stack_saved_192;
struct list$1sRightValueObjectph* right_value_objects_193;
void* right_value137;
char* c_value_194;
struct sClass* klass_195;
char* class_name_196;
char* fun_name_197;
struct sFun* cloner_198;
char* fun_name2_199;
_Bool _if_conditional262;
void* right_value138;
char* none_generics_name_200;
void* right_value139;
struct sType* obj_type_201;
void* right_value140;
char* __dec_obj57;
void* right_value141;
char* fun_name3_202;
struct sGenericsFun* generics_fun_205;
_Bool _if_conditional267;
void* right_value143;
_Bool _if_conditional268;
void* right_value144;
void* right_value145;
void* right_value146;
void* right_value147;
void* right_value150;
struct tuple2$2sTypephcharph* __result88__;
void* right_value151;
char* __dec_obj60;
int i_206;
_Bool _for_condtionalA11;
void* right_value152;
char* new_fun_name_207;
_Bool _if_conditional271;
void* right_value153;
char* __dec_obj61;
_Bool _if_conditional272;
_Bool _if_conditional273;
void* right_value154;
struct tuple2$2sFunpcharph* multiple_assgin_var8;
struct sFun* fun_208;
char* new_fun_name_209;
char* __dec_obj62;
_Bool _if_conditional274;
void* right_value155;
char* __dec_obj63;
struct sType* __dec_obj64;
void* right_value156;
struct sType* __dec_obj65;
void* right_value157;
char* type_name_210;
void* right_value158;
char* __dec_obj66;
void* right_value159;
struct sType* __dec_obj67;
struct list$1sRightValueObjectph* __dec_obj68;
struct list$1CVALUEph* __dec_obj69;
void* right_value160;
void* right_value161;
struct tuple2$2sTypephcharph* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value136, 0, sizeof(void*));
memset(&type2_189, 0, sizeof(struct sType*));
memset(&result_190, 0, sizeof(char*));
memset(&result_type_191, 0, sizeof(struct sType*));
memset(&stack_saved_192, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_193, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&right_value137, 0, sizeof(void*));
memset(&c_value_194, 0, sizeof(char*));
memset(&klass_195, 0, sizeof(struct sClass*));
memset(&class_name_196, 0, sizeof(char*));
memset(&fun_name_197, 0, sizeof(char*));
memset(&cloner_198, 0, sizeof(struct sFun*));
memset(&fun_name2_199, 0, sizeof(char*));
memset(&right_value138, 0, sizeof(void*));
memset(&none_generics_name_200, 0, sizeof(char*));
memset(&right_value139, 0, sizeof(void*));
memset(&obj_type_201, 0, sizeof(struct sType*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&fun_name3_202, 0, sizeof(char*));
memset(&generics_fun_205, 0, sizeof(struct sGenericsFun*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&right_value151, 0, sizeof(void*));
memset(&i_206, 0, sizeof(int));
memset(&right_value152, 0, sizeof(void*));
memset(&new_fun_name_207, 0, sizeof(char*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&fun_208, 0, sizeof(struct sFun*));
memset(&new_fun_name_209, 0, sizeof(char*));
memset(&fun_208, 0, sizeof(struct sFun*));
memset(&new_fun_name_209, 0, sizeof(char*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&type_name_210, 0, sizeof(char*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
memset(&right_value161, 0, sizeof(void*));
    type2_189=(struct sType*)come_increment_ref_count(((struct sType*)(right_value136=sType_clone(type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value136);
    if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value136;
    __freed_obj__ = 0;
    if(_if_conditional261=type->mNoSolvedGenericsType->v1,    _if_conditional261) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_190=((void*)0);
    result_type_191=((void*)0);
    stack_saved_192=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_193=info->right_value_objects;
    c_value_194=(char*)come_increment_ref_count(((char*)(right_value137=__builtin_string(obj))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value137);
    if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value137;
    __freed_obj__ = 0;
    klass_195=type->mClass;
    class_name_196=klass_195->mName;
    fun_name_197="clone";
    cloner_198=((void*)0);
    if(_if_conditional262=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional262) {
        none_generics_name_200=(char*)come_increment_ref_count(((char*)(right_value138=get_none_generics_name(type->mClass->mName))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value138);
        if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value138;
        __freed_obj__ = 0;
        obj_type_201=(struct sType*)come_increment_ref_count(((struct sType*)(right_value139=solve_generics(type,info->generics_type,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value139);
        if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value139;
        __freed_obj__ = 0;
        __dec_obj57=fun_name2_199;
        fun_name2_199=(char*)come_increment_ref_count(((char*)(right_value140=create_method_name(obj_type_201,(_Bool)0,fun_name_197,info))));
        if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value140);
        if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value140;
        __freed_obj__ = 0;
        fun_name3_202=(char*)come_increment_ref_count(((char*)(right_value141=xsprintf("%s_%s",none_generics_name_200,fun_name_197))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value141);
        if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value141;
        __freed_obj__ = 0;
        generics_fun_205=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_202,((void*)0));
        if(_if_conditional267=generics_fun_205,        _if_conditional267) {
            if(_if_conditional268=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value143=__builtin_string(fun_name2_199)))),generics_fun_205,obj_type_201,info),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value143),
            (right_value143 && right_value143 != __result_obj__ && !__freed_obj__) ? right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value143, 
            __freed_obj__ = 0, 
            _if_conditional268) {
                __result88__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value150=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value147=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 744)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value145=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value144=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "04heap.c", 744)))),"void",(_Bool)0,info)))),(char*)come_increment_ref_count(((char*)(right_value146=__builtin_string("")))))));
                if(none_generics_name_200 && !__freed_obj__) { none_generics_name_200 = come_decrement_ref_count(none_generics_name_200, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_type_201 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_201, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name3_202 && !__freed_obj__) { fun_name3_202 = come_decrement_ref_count(fun_name3_202, (void*)0, (void*)0, 0, 0, 0); }
                if(type2_189 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_189, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_190 && !__freed_obj__) { result_190 = come_decrement_ref_count(result_190, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type_191 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_191, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(stack_saved_192 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_192, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(c_value_194 && !__freed_obj__) { c_value_194 = come_decrement_ref_count(c_value_194, (void*)0, (void*)0, 0, 0, 0); }
                if(fun_name2_199 && !__freed_obj__) { fun_name2_199 = come_decrement_ref_count(fun_name2_199, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value144);
                if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value144;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value145);
                if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value145;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value146);
                if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value146;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value147);
                if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value147;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value150);
                if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[4] = right_value150;
                __freed_obj__ = 0;
                return __result88__;
            }
        }
        cloner_198=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_199);
        if(none_generics_name_200 && !__freed_obj__) { none_generics_name_200 = come_decrement_ref_count(none_generics_name_200, (void*)0, (void*)0, 0, 0, 0); }
        if(obj_type_201 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_201, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name3_202 && !__freed_obj__) { fun_name3_202 = come_decrement_ref_count(fun_name3_202, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        __dec_obj60=fun_name2_199;
        fun_name2_199=(char*)come_increment_ref_count(((char*)(right_value151=create_method_name(type,(_Bool)0,fun_name_197,info))));
        if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value151);
        if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value151;
        __freed_obj__ = 0;
        for(
        i_206=128-1 ,        0;        _for_condtionalA11=        i_206>=1 ,        _for_condtionalA11;        i_206-- ,        0        ){
            new_fun_name_207=(char*)come_increment_ref_count(((char*)(right_value152=xsprintf("%s_v%d",fun_name2_199,i_206))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value152);
            if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value152;
            __freed_obj__ = 0;
            cloner_198=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_207);
            if(_if_conditional271=cloner_198,            _if_conditional271) {
                __dec_obj61=fun_name2_199;
                fun_name2_199=(char*)come_increment_ref_count(((char*)(right_value153=__builtin_string(new_fun_name_207))));
                if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value153);
                if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value153;
                __freed_obj__ = 0;
                if(new_fun_name_207 && !__freed_obj__) { new_fun_name_207 = come_decrement_ref_count(new_fun_name_207, (void*)0, (void*)0, 0, 0, 0); }
                break;
            }
            if(new_fun_name_207 && !__freed_obj__) { new_fun_name_207 = come_decrement_ref_count(new_fun_name_207, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional272=cloner_198==((void*)0),        _if_conditional272) {
            cloner_198=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_199);
        }
    }
    if(_if_conditional273=cloner_198==((void*)0)&&!type->mClass->mNumber,    _if_conditional273) {
        multiple_assgin_var8=((struct tuple2$2sFunpcharph*)(right_value154=create_cloner_automatically(type,fun_name_197,info)));
        fun_208=multiple_assgin_var8->v1;
        new_fun_name_209=(char*)come_increment_ref_count(multiple_assgin_var8->v2);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value154);
        if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value154;
        __freed_obj__ = 0;
        __dec_obj62=fun_name2_199;
        fun_name2_199=(char*)come_increment_ref_count(new_fun_name_209);
        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0,0); }
        cloner_198=fun_208;
        if(new_fun_name_209 && !__freed_obj__) { new_fun_name_209 = come_decrement_ref_count(new_fun_name_209, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(_if_conditional274=cloner_198!=((void*)0),    _if_conditional274) {
        __dec_obj63=result_190;
        result_190=(char*)come_increment_ref_count(((char*)(right_value155=xsprintf("%s(%s)",fun_name2_199,c_value_194))));
        if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value155);
        if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value155;
        __freed_obj__ = 0;
        __dec_obj64=result_type_191;
        result_type_191=(struct sType*)come_increment_ref_count(cloner_198->mResultType);
        if(__dec_obj64) { come_call_finalizer(sType_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0); }
        __dec_obj65=result_type_191;
        result_type_191=(struct sType*)come_increment_ref_count(((struct sType*)(right_value156=solve_generics(result_type_191,type,info))));
        if(__dec_obj65) { come_call_finalizer(sType_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value156);
        if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value156;
        __freed_obj__ = 0;
    }
    else {
        type2_189->mHeap=(_Bool)1;
        type_name_210=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value157=make_type_name_string(type2_189,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value157);
        if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value157;
        __freed_obj__ = 0;
        __dec_obj66=result_190;
        result_190=(char*)come_increment_ref_count(((char*)(right_value158=xsprintf("(%s)come_memdup(%s, \"%s\", %d)",type_name_210,c_value_194,info->sname,info->sline))));
        if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value158);
        if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { right_value158 = come_decrement_ref_count(right_value158, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value158;
        __freed_obj__ = 0;
        __dec_obj67=result_type_191;
        result_type_191=(struct sType*)come_increment_ref_count(((struct sType*)(right_value159=sType_clone(type))));
        if(__dec_obj67) { come_call_finalizer(sType_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value159);
        if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value159;
        __freed_obj__ = 0;
        if(type_name_210 && !__freed_obj__) { type_name_210 = come_decrement_ref_count(type_name_210, (void*)0, (void*)0, 0, 0, 0); }
    }
    __dec_obj68=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_193);
    if(__dec_obj68) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0); }
    __dec_obj69=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_192);
    if(__dec_obj69) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0); }
    __result89__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value161=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value160=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 793)))),(struct sType*)come_increment_ref_count(result_type_191),(char*)come_increment_ref_count(result_190))));
    if(type2_189 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_189, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_190 && !__freed_obj__) { result_190 = come_decrement_ref_count(result_190, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_191 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_191, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(stack_saved_192 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_192, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(c_value_194 && !__freed_obj__) { c_value_194 = come_decrement_ref_count(c_value_194, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_name2_199 && !__freed_obj__) { fun_name2_199 = come_decrement_ref_count(fun_name2_199, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value160);
    if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { right_value160 = come_decrement_ref_count(right_value160, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value160;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value161);
    if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value161;
    __freed_obj__ = 0;
    return __result89__;
    if(type2_189 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_189, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_190 && !__freed_obj__) { result_190 = come_decrement_ref_count(result_190, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_191 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_191, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(stack_saved_192 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_192, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(c_value_194 && !__freed_obj__) { c_value_194 = come_decrement_ref_count(c_value_194, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_name2_199 && !__freed_obj__) { fun_name2_199 = come_decrement_ref_count(fun_name2_199, (void*)0, (void*)0, 0, 0, 0); }
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_203;
unsigned int it_204;
_Bool _while_condtional20;
_Bool _if_conditional263;
void* right_value142;
_Bool _if_conditional264;
struct sGenericsFun* __result83__;
_Bool _if_conditional265;
_Bool _if_conditional266;
struct sGenericsFun* __result84__;
struct sGenericsFun* __result85__;
struct sGenericsFun* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_203, 0, sizeof(unsigned int));
memset(&it_204, 0, sizeof(unsigned int));
memset(&right_value142, 0, sizeof(void*));
            hash_203=string_get_hash_key(((char*)key))%self->size;
            it_204=hash_203;
            while(_while_condtional20=(_Bool)1,            _while_condtional20) {
                if(_if_conditional263=self->item_existance[it_204],                _if_conditional263) {
                    if(_if_conditional264=optional$2boolbool_value(((struct optional$2boolbool*)(right_value142=string_equals(self->keys[it_204],key)))),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value142),
                    (right_value142 && right_value142 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value142, 
                    __freed_obj__ = 0, 
                    _if_conditional264) {
                        __result83__ = __result_obj__ = self->items[it_204];
                        return __result83__;
                    }
                    it_204++;
                    if(_if_conditional265=it_204>=self->size,                    _if_conditional265) {
                        it_204=0;
                    }
                    else {
                        if(_if_conditional266=it_204==hash_203,                        _if_conditional266) {
                            __result84__ = __result_obj__ = default_value;
                            return __result84__;
                        }
                    }
                }
                else {
                    __result85__ = __result_obj__ = default_value;
                    return __result85__;
                }
            }
            __result86__ = __result_obj__ = default_value;
            return __result86__;
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value148;
struct sType* __dec_obj58;
void* right_value149;
char* __dec_obj59;
struct tuple2$2sTypephcharph* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
                    __dec_obj58=self->v1;
                    self->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value148=sType_clone(v1))));
                    if(__dec_obj58) { come_call_finalizer(sType_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value148);
                    if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value148;
                    __freed_obj__ = 0;
                    __dec_obj59=self->v2;
                    self->v2=(char*)come_increment_ref_count(((char*)(right_value149=string_clone(v2))));
                    if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value149);
                    if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value149;
                    __freed_obj__ = 0;
                    __result87__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
                    return __result87__;
                    if(self && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional269;
_Bool _if_conditional270;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional269=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional269) {
                            if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        if(_if_conditional270=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional270) {
                            if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

_Bool create_equals_method(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional275;
char* result_211;
struct list$1CVALUEph* stack_saved_212;
struct list$1sRightValueObjectph* right_value_objects_213;
struct sClass* klass_214;
char* class_name_215;
char* fun_name_216;
void* right_value162;
struct sType* type2_217;
struct sFun* cloner_218;
char* fun_name2_219;
_Bool _if_conditional276;
void* right_value163;
char* none_generics_name_220;
void* right_value164;
struct sType* obj_type_221;
void* right_value165;
char* __dec_obj70;
void* right_value166;
char* fun_name3_222;
struct sGenericsFun* generics_fun_223;
_Bool _if_conditional277;
void* right_value167;
_Bool _if_conditional278;
_Bool __result90__;
void* right_value168;
char* __dec_obj71;
int i_224;
_Bool _for_condtionalA12;
void* right_value169;
char* new_fun_name_225;
_Bool _if_conditional279;
void* right_value170;
char* __dec_obj72;
_Bool _if_conditional280;
_Bool _if_conditional281;
void* right_value171;
struct tuple2$2sFunpcharph* multiple_assgin_var9;
struct sFun* fun_226;
char* new_fun_name_227;
char* __dec_obj73;
struct list$1sRightValueObjectph* __dec_obj74;
struct list$1CVALUEph* __dec_obj75;
_Bool __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_211, 0, sizeof(char*));
memset(&stack_saved_212, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_213, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_214, 0, sizeof(struct sClass*));
memset(&class_name_215, 0, sizeof(char*));
memset(&fun_name_216, 0, sizeof(char*));
memset(&right_value162, 0, sizeof(void*));
memset(&type2_217, 0, sizeof(struct sType*));
memset(&cloner_218, 0, sizeof(struct sFun*));
memset(&fun_name2_219, 0, sizeof(char*));
memset(&right_value163, 0, sizeof(void*));
memset(&none_generics_name_220, 0, sizeof(char*));
memset(&right_value164, 0, sizeof(void*));
memset(&obj_type_221, 0, sizeof(struct sType*));
memset(&right_value165, 0, sizeof(void*));
memset(&right_value166, 0, sizeof(void*));
memset(&fun_name3_222, 0, sizeof(char*));
memset(&generics_fun_223, 0, sizeof(struct sGenericsFun*));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
memset(&i_224, 0, sizeof(int));
memset(&right_value169, 0, sizeof(void*));
memset(&new_fun_name_225, 0, sizeof(char*));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
memset(&fun_226, 0, sizeof(struct sFun*));
memset(&new_fun_name_227, 0, sizeof(char*));
memset(&fun_226, 0, sizeof(struct sFun*));
memset(&new_fun_name_227, 0, sizeof(char*));
    if(_if_conditional275=type->mNoSolvedGenericsType->v1,    _if_conditional275) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_211=((void*)0);
    stack_saved_212=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_213=info->right_value_objects;
    klass_214=type->mClass;
    class_name_215=klass_214->mName;
    fun_name_216="equals";
    type2_217=(struct sType*)come_increment_ref_count(((struct sType*)(right_value162=sType_clone(type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value162);
    if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value162;
    __freed_obj__ = 0;
    type2_217->mHeap=(_Bool)0;
    cloner_218=((void*)0);
    if(_if_conditional276=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional276) {
        none_generics_name_220=(char*)come_increment_ref_count(((char*)(right_value163=get_none_generics_name(type->mClass->mName))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value163);
        if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { right_value163 = come_decrement_ref_count(right_value163, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value163;
        __freed_obj__ = 0;
        obj_type_221=(struct sType*)come_increment_ref_count(((struct sType*)(right_value164=solve_generics(type,info->generics_type,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value164);
        if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value164;
        __freed_obj__ = 0;
        __dec_obj70=fun_name2_219;
        fun_name2_219=(char*)come_increment_ref_count(((char*)(right_value165=create_method_name(obj_type_221,(_Bool)0,fun_name_216,info))));
        if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value165);
        if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { right_value165 = come_decrement_ref_count(right_value165, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value165;
        __freed_obj__ = 0;
        fun_name3_222=(char*)come_increment_ref_count(((char*)(right_value166=xsprintf("%s_%s",none_generics_name_220,fun_name_216))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value166);
        if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value166;
        __freed_obj__ = 0;
        generics_fun_223=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_222,((void*)0));
        if(_if_conditional277=generics_fun_223,        _if_conditional277) {
            if(_if_conditional278=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value167=__builtin_string(fun_name2_219)))),generics_fun_223,obj_type_221,info),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value167),
            (right_value167 && right_value167 != __result_obj__ && !__freed_obj__) ? right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value167, 
            __freed_obj__ = 0, 
            _if_conditional278) {
                __result90__ = (_Bool)0;
                if(none_generics_name_220 && !__freed_obj__) { none_generics_name_220 = come_decrement_ref_count(none_generics_name_220, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_type_221 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_221, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name3_222 && !__freed_obj__) { fun_name3_222 = come_decrement_ref_count(fun_name3_222, (void*)0, (void*)0, 0, 0, 0); }
                if(result_211 && !__freed_obj__) { result_211 = come_decrement_ref_count(result_211, (void*)0, (void*)0, 0, 0, 0); }
                if(stack_saved_212 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_212, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type2_217 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_217, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name2_219 && !__freed_obj__) { fun_name2_219 = come_decrement_ref_count(fun_name2_219, (void*)0, (void*)0, 0, 0, 0); }
                return __result90__;
            }
        }
        cloner_218=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_219);
        if(none_generics_name_220 && !__freed_obj__) { none_generics_name_220 = come_decrement_ref_count(none_generics_name_220, (void*)0, (void*)0, 0, 0, 0); }
        if(obj_type_221 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_221, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name3_222 && !__freed_obj__) { fun_name3_222 = come_decrement_ref_count(fun_name3_222, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        __dec_obj71=fun_name2_219;
        fun_name2_219=(char*)come_increment_ref_count(((char*)(right_value168=create_method_name(type,(_Bool)0,fun_name_216,info))));
        if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value168);
        if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value168;
        __freed_obj__ = 0;
        for(
        i_224=128-1 ,        0;        _for_condtionalA12=        i_224>=1 ,        _for_condtionalA12;        i_224-- ,        0        ){
            new_fun_name_225=(char*)come_increment_ref_count(((char*)(right_value169=xsprintf("%s_v%d",fun_name2_219,i_224))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value169);
            if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { right_value169 = come_decrement_ref_count(right_value169, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value169;
            __freed_obj__ = 0;
            cloner_218=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_225);
            if(_if_conditional279=cloner_218,            _if_conditional279) {
                __dec_obj72=fun_name2_219;
                fun_name2_219=(char*)come_increment_ref_count(((char*)(right_value170=__builtin_string(new_fun_name_225))));
                if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value170);
                if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { right_value170 = come_decrement_ref_count(right_value170, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value170;
                __freed_obj__ = 0;
                if(new_fun_name_225 && !__freed_obj__) { new_fun_name_225 = come_decrement_ref_count(new_fun_name_225, (void*)0, (void*)0, 0, 0, 0); }
                break;
            }
            if(new_fun_name_225 && !__freed_obj__) { new_fun_name_225 = come_decrement_ref_count(new_fun_name_225, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional280=cloner_218==((void*)0),        _if_conditional280) {
            cloner_218=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_219);
        }
    }
    if(_if_conditional281=cloner_218==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,    _if_conditional281) {
        multiple_assgin_var9=((struct tuple2$2sFunpcharph*)(right_value171=create_equals_automatically(type,fun_name_216,info)));
        fun_226=multiple_assgin_var9->v1;
        new_fun_name_227=(char*)come_increment_ref_count(multiple_assgin_var9->v2);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value171);
        if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value171;
        __freed_obj__ = 0;
        __dec_obj73=fun_name2_219;
        fun_name2_219=(char*)come_increment_ref_count(new_fun_name_227);
        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0,0); }
        cloner_218=fun_226;
        if(new_fun_name_227 && !__freed_obj__) { new_fun_name_227 = come_decrement_ref_count(new_fun_name_227, (void*)0, (void*)0, 0, 0, 0); }
    }
    __dec_obj74=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_213);
    if(__dec_obj74) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj74, (void*)0, (void*)0, 0, 0, 0, 0); }
    __dec_obj75=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_212);
    if(__dec_obj75) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj75, (void*)0, (void*)0, 0, 0, 0, 0); }
    __result91__ = (_Bool)1;
    if(result_211 && !__freed_obj__) { result_211 = come_decrement_ref_count(result_211, (void*)0, (void*)0, 0, 0, 0); }
    if(stack_saved_212 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_212, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_217 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_217, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_219 && !__freed_obj__) { fun_name2_219 = come_decrement_ref_count(fun_name2_219, (void*)0, (void*)0, 0, 0, 0); }
    return __result91__;
    if(result_211 && !__freed_obj__) { result_211 = come_decrement_ref_count(result_211, (void*)0, (void*)0, 0, 0, 0); }
    if(stack_saved_212 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_212, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_217 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_217, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_219 && !__freed_obj__) { fun_name2_219 = come_decrement_ref_count(fun_name2_219, (void*)0, (void*)0, 0, 0, 0); }
}

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional282;
char* result_228;
struct list$1CVALUEph* stack_saved_229;
struct list$1sRightValueObjectph* right_value_objects_230;
struct sClass* klass_231;
char* class_name_232;
char* fun_name_233;
void* right_value172;
struct sType* type2_234;
struct sFun* cloner_235;
char* fun_name2_236;
_Bool _if_conditional283;
void* right_value173;
char* none_generics_name_237;
void* right_value174;
struct sType* obj_type_238;
void* right_value175;
char* __dec_obj76;
void* right_value176;
char* fun_name3_239;
struct sGenericsFun* generics_fun_240;
_Bool _if_conditional284;
void* right_value177;
_Bool _if_conditional285;
_Bool __result92__;
void* right_value178;
char* __dec_obj77;
int i_241;
_Bool _for_condtionalA13;
void* right_value179;
char* new_fun_name_242;
_Bool _if_conditional286;
void* right_value180;
char* __dec_obj78;
_Bool _if_conditional287;
_Bool _if_conditional288;
void* right_value181;
struct tuple2$2sFunpcharph* multiple_assgin_var10;
struct sFun* fun_243;
char* new_fun_name_244;
char* __dec_obj79;
struct list$1sRightValueObjectph* __dec_obj80;
struct list$1CVALUEph* __dec_obj81;
_Bool __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_228, 0, sizeof(char*));
memset(&stack_saved_229, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_230, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_231, 0, sizeof(struct sClass*));
memset(&class_name_232, 0, sizeof(char*));
memset(&fun_name_233, 0, sizeof(char*));
memset(&right_value172, 0, sizeof(void*));
memset(&type2_234, 0, sizeof(struct sType*));
memset(&cloner_235, 0, sizeof(struct sFun*));
memset(&fun_name2_236, 0, sizeof(char*));
memset(&right_value173, 0, sizeof(void*));
memset(&none_generics_name_237, 0, sizeof(char*));
memset(&right_value174, 0, sizeof(void*));
memset(&obj_type_238, 0, sizeof(struct sType*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&fun_name3_239, 0, sizeof(char*));
memset(&generics_fun_240, 0, sizeof(struct sGenericsFun*));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
memset(&i_241, 0, sizeof(int));
memset(&right_value179, 0, sizeof(void*));
memset(&new_fun_name_242, 0, sizeof(char*));
memset(&right_value180, 0, sizeof(void*));
memset(&right_value181, 0, sizeof(void*));
memset(&fun_243, 0, sizeof(struct sFun*));
memset(&new_fun_name_244, 0, sizeof(char*));
memset(&fun_243, 0, sizeof(struct sFun*));
memset(&new_fun_name_244, 0, sizeof(char*));
    if(_if_conditional282=type->mNoSolvedGenericsType->v1,    _if_conditional282) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_228=((void*)0);
    stack_saved_229=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_230=info->right_value_objects;
    klass_231=type->mClass;
    class_name_232=klass_231->mName;
    fun_name_233="operator_equals";
    type2_234=(struct sType*)come_increment_ref_count(((struct sType*)(right_value172=sType_clone(type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value172);
    if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value172;
    __freed_obj__ = 0;
    type2_234->mHeap=(_Bool)0;
    cloner_235=((void*)0);
    if(_if_conditional283=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional283) {
        none_generics_name_237=(char*)come_increment_ref_count(((char*)(right_value173=get_none_generics_name(type->mClass->mName))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value173);
        if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { right_value173 = come_decrement_ref_count(right_value173, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value173;
        __freed_obj__ = 0;
        obj_type_238=(struct sType*)come_increment_ref_count(((struct sType*)(right_value174=solve_generics(type,info->generics_type,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value174);
        if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value174;
        __freed_obj__ = 0;
        __dec_obj76=fun_name2_236;
        fun_name2_236=(char*)come_increment_ref_count(((char*)(right_value175=create_method_name(obj_type_238,(_Bool)0,fun_name_233,info))));
        if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value175);
        if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { right_value175 = come_decrement_ref_count(right_value175, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value175;
        __freed_obj__ = 0;
        fun_name3_239=(char*)come_increment_ref_count(((char*)(right_value176=xsprintf("%s_%s",none_generics_name_237,fun_name_233))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value176);
        if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { right_value176 = come_decrement_ref_count(right_value176, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value176;
        __freed_obj__ = 0;
        generics_fun_240=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_239,((void*)0));
        if(_if_conditional284=generics_fun_240,        _if_conditional284) {
            if(_if_conditional285=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value177=__builtin_string(fun_name2_236)))),generics_fun_240,obj_type_238,info),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value177),
            (right_value177 && right_value177 != __result_obj__ && !__freed_obj__) ? right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value177, 
            __freed_obj__ = 0, 
            _if_conditional285) {
                __result92__ = (_Bool)0;
                if(none_generics_name_237 && !__freed_obj__) { none_generics_name_237 = come_decrement_ref_count(none_generics_name_237, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_type_238 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_238, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name3_239 && !__freed_obj__) { fun_name3_239 = come_decrement_ref_count(fun_name3_239, (void*)0, (void*)0, 0, 0, 0); }
                if(result_228 && !__freed_obj__) { result_228 = come_decrement_ref_count(result_228, (void*)0, (void*)0, 0, 0, 0); }
                if(stack_saved_229 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_229, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type2_234 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_234, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name2_236 && !__freed_obj__) { fun_name2_236 = come_decrement_ref_count(fun_name2_236, (void*)0, (void*)0, 0, 0, 0); }
                return __result92__;
            }
        }
        cloner_235=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_236);
        if(none_generics_name_237 && !__freed_obj__) { none_generics_name_237 = come_decrement_ref_count(none_generics_name_237, (void*)0, (void*)0, 0, 0, 0); }
        if(obj_type_238 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_238, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name3_239 && !__freed_obj__) { fun_name3_239 = come_decrement_ref_count(fun_name3_239, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        __dec_obj77=fun_name2_236;
        fun_name2_236=(char*)come_increment_ref_count(((char*)(right_value178=create_method_name(type,(_Bool)0,fun_name_233,info))));
        if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value178);
        if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { right_value178 = come_decrement_ref_count(right_value178, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value178;
        __freed_obj__ = 0;
        for(
        i_241=128-1 ,        0;        _for_condtionalA13=        i_241>=1 ,        _for_condtionalA13;        i_241-- ,        0        ){
            new_fun_name_242=(char*)come_increment_ref_count(((char*)(right_value179=xsprintf("%s_v%d",fun_name2_236,i_241))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value179);
            if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { right_value179 = come_decrement_ref_count(right_value179, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value179;
            __freed_obj__ = 0;
            cloner_235=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_242);
            if(_if_conditional286=cloner_235,            _if_conditional286) {
                __dec_obj78=fun_name2_236;
                fun_name2_236=(char*)come_increment_ref_count(((char*)(right_value180=__builtin_string(new_fun_name_242))));
                if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180);
                if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { right_value180 = come_decrement_ref_count(right_value180, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value180;
                __freed_obj__ = 0;
                if(new_fun_name_242 && !__freed_obj__) { new_fun_name_242 = come_decrement_ref_count(new_fun_name_242, (void*)0, (void*)0, 0, 0, 0); }
                break;
            }
            if(new_fun_name_242 && !__freed_obj__) { new_fun_name_242 = come_decrement_ref_count(new_fun_name_242, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional287=cloner_235==((void*)0),        _if_conditional287) {
            cloner_235=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_236);
        }
    }
    if(_if_conditional288=cloner_235==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,    _if_conditional288) {
        multiple_assgin_var10=((struct tuple2$2sFunpcharph*)(right_value181=create_operator_equals_automatically(type,fun_name_233,info)));
        fun_243=multiple_assgin_var10->v1;
        new_fun_name_244=(char*)come_increment_ref_count(multiple_assgin_var10->v2);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value181);
        if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value181;
        __freed_obj__ = 0;
        __dec_obj79=fun_name2_236;
        fun_name2_236=(char*)come_increment_ref_count(new_fun_name_244);
        if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0,0); }
        cloner_235=fun_243;
        if(new_fun_name_244 && !__freed_obj__) { new_fun_name_244 = come_decrement_ref_count(new_fun_name_244, (void*)0, (void*)0, 0, 0, 0); }
    }
    __dec_obj80=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_230);
    if(__dec_obj80) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0); }
    __dec_obj81=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_229);
    if(__dec_obj81) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0); }
    __result93__ = (_Bool)1;
    if(result_228 && !__freed_obj__) { result_228 = come_decrement_ref_count(result_228, (void*)0, (void*)0, 0, 0, 0); }
    if(stack_saved_229 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_229, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_234 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_234, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_236 && !__freed_obj__) { fun_name2_236 = come_decrement_ref_count(fun_name2_236, (void*)0, (void*)0, 0, 0, 0); }
    return __result93__;
    if(result_228 && !__freed_obj__) { result_228 = come_decrement_ref_count(result_228, (void*)0, (void*)0, 0, 0, 0); }
    if(stack_saved_229 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_229, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_234 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_234, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_236 && !__freed_obj__) { fun_name2_236 = come_decrement_ref_count(fun_name2_236, (void*)0, (void*)0, 0, 0, 0); }
}

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional289;
char* result_245;
struct list$1CVALUEph* stack_saved_246;
struct list$1sRightValueObjectph* right_value_objects_247;
struct sClass* klass_248;
char* class_name_249;
char* fun_name_250;
void* right_value182;
struct sType* type2_251;
struct sFun* cloner_252;
char* fun_name2_253;
_Bool _if_conditional290;
void* right_value183;
char* none_generics_name_254;
void* right_value184;
struct sType* obj_type_255;
void* right_value185;
char* __dec_obj82;
void* right_value186;
char* fun_name3_256;
struct sGenericsFun* generics_fun_257;
_Bool _if_conditional291;
void* right_value187;
_Bool _if_conditional292;
_Bool __result94__;
void* right_value188;
char* __dec_obj83;
int i_258;
_Bool _for_condtionalA14;
void* right_value189;
char* new_fun_name_259;
_Bool _if_conditional293;
void* right_value190;
char* __dec_obj84;
_Bool _if_conditional294;
_Bool _if_conditional295;
void* right_value191;
struct tuple2$2sFunpcharph* multiple_assgin_var11;
struct sFun* fun_260;
char* new_fun_name_261;
char* __dec_obj85;
struct list$1sRightValueObjectph* __dec_obj86;
struct list$1CVALUEph* __dec_obj87;
_Bool __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_245, 0, sizeof(char*));
memset(&stack_saved_246, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_247, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_248, 0, sizeof(struct sClass*));
memset(&class_name_249, 0, sizeof(char*));
memset(&fun_name_250, 0, sizeof(char*));
memset(&right_value182, 0, sizeof(void*));
memset(&type2_251, 0, sizeof(struct sType*));
memset(&cloner_252, 0, sizeof(struct sFun*));
memset(&fun_name2_253, 0, sizeof(char*));
memset(&right_value183, 0, sizeof(void*));
memset(&none_generics_name_254, 0, sizeof(char*));
memset(&right_value184, 0, sizeof(void*));
memset(&obj_type_255, 0, sizeof(struct sType*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
memset(&fun_name3_256, 0, sizeof(char*));
memset(&generics_fun_257, 0, sizeof(struct sGenericsFun*));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
memset(&i_258, 0, sizeof(int));
memset(&right_value189, 0, sizeof(void*));
memset(&new_fun_name_259, 0, sizeof(char*));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
memset(&fun_260, 0, sizeof(struct sFun*));
memset(&new_fun_name_261, 0, sizeof(char*));
memset(&fun_260, 0, sizeof(struct sFun*));
memset(&new_fun_name_261, 0, sizeof(char*));
    if(_if_conditional289=type->mNoSolvedGenericsType->v1,    _if_conditional289) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_245=((void*)0);
    stack_saved_246=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_247=info->right_value_objects;
    klass_248=type->mClass;
    class_name_249=klass_248->mName;
    fun_name_250="operator_not_equals";
    type2_251=(struct sType*)come_increment_ref_count(((struct sType*)(right_value182=sType_clone(type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value182);
    if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value182;
    __freed_obj__ = 0;
    type2_251->mHeap=(_Bool)0;
    cloner_252=((void*)0);
    if(_if_conditional290=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional290) {
        none_generics_name_254=(char*)come_increment_ref_count(((char*)(right_value183=get_none_generics_name(type->mClass->mName))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value183);
        if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { right_value183 = come_decrement_ref_count(right_value183, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value183;
        __freed_obj__ = 0;
        obj_type_255=(struct sType*)come_increment_ref_count(((struct sType*)(right_value184=solve_generics(type,info->generics_type,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value184);
        if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value184;
        __freed_obj__ = 0;
        __dec_obj82=fun_name2_253;
        fun_name2_253=(char*)come_increment_ref_count(((char*)(right_value185=create_method_name(obj_type_255,(_Bool)0,fun_name_250,info))));
        if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value185);
        if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { right_value185 = come_decrement_ref_count(right_value185, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value185;
        __freed_obj__ = 0;
        fun_name3_256=(char*)come_increment_ref_count(((char*)(right_value186=xsprintf("%s_%s",none_generics_name_254,fun_name_250))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value186);
        if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { right_value186 = come_decrement_ref_count(right_value186, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value186;
        __freed_obj__ = 0;
        generics_fun_257=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_256,((void*)0));
        if(_if_conditional291=generics_fun_257,        _if_conditional291) {
            if(_if_conditional292=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value187=__builtin_string(fun_name2_253)))),generics_fun_257,obj_type_255,info),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value187),
            (right_value187 && right_value187 != __result_obj__ && !__freed_obj__) ? right_value187 = come_decrement_ref_count(right_value187, (void*)0, (void*)0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value187, 
            __freed_obj__ = 0, 
            _if_conditional292) {
                __result94__ = (_Bool)0;
                if(none_generics_name_254 && !__freed_obj__) { none_generics_name_254 = come_decrement_ref_count(none_generics_name_254, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_type_255 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_255, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name3_256 && !__freed_obj__) { fun_name3_256 = come_decrement_ref_count(fun_name3_256, (void*)0, (void*)0, 0, 0, 0); }
                if(result_245 && !__freed_obj__) { result_245 = come_decrement_ref_count(result_245, (void*)0, (void*)0, 0, 0, 0); }
                if(stack_saved_246 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_246, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type2_251 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_251, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name2_253 && !__freed_obj__) { fun_name2_253 = come_decrement_ref_count(fun_name2_253, (void*)0, (void*)0, 0, 0, 0); }
                return __result94__;
            }
        }
        cloner_252=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_253);
        if(none_generics_name_254 && !__freed_obj__) { none_generics_name_254 = come_decrement_ref_count(none_generics_name_254, (void*)0, (void*)0, 0, 0, 0); }
        if(obj_type_255 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_255, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name3_256 && !__freed_obj__) { fun_name3_256 = come_decrement_ref_count(fun_name3_256, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        __dec_obj83=fun_name2_253;
        fun_name2_253=(char*)come_increment_ref_count(((char*)(right_value188=create_method_name(type,(_Bool)0,fun_name_250,info))));
        if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value188);
        if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { right_value188 = come_decrement_ref_count(right_value188, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value188;
        __freed_obj__ = 0;
        for(
        i_258=128-1 ,        0;        _for_condtionalA14=        i_258>=1 ,        _for_condtionalA14;        i_258-- ,        0        ){
            new_fun_name_259=(char*)come_increment_ref_count(((char*)(right_value189=xsprintf("%s_v%d",fun_name2_253,i_258))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value189);
            if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { right_value189 = come_decrement_ref_count(right_value189, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value189;
            __freed_obj__ = 0;
            cloner_252=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_259);
            if(_if_conditional293=cloner_252,            _if_conditional293) {
                __dec_obj84=fun_name2_253;
                fun_name2_253=(char*)come_increment_ref_count(((char*)(right_value190=__builtin_string(new_fun_name_259))));
                if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value190);
                if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { right_value190 = come_decrement_ref_count(right_value190, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value190;
                __freed_obj__ = 0;
                if(new_fun_name_259 && !__freed_obj__) { new_fun_name_259 = come_decrement_ref_count(new_fun_name_259, (void*)0, (void*)0, 0, 0, 0); }
                break;
            }
            if(new_fun_name_259 && !__freed_obj__) { new_fun_name_259 = come_decrement_ref_count(new_fun_name_259, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional294=cloner_252==((void*)0),        _if_conditional294) {
            cloner_252=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_253);
        }
    }
    if(_if_conditional295=cloner_252==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,    _if_conditional295) {
        multiple_assgin_var11=((struct tuple2$2sFunpcharph*)(right_value191=create_operator_not_equals_automatically(type,fun_name_250,info)));
        fun_260=multiple_assgin_var11->v1;
        new_fun_name_261=(char*)come_increment_ref_count(multiple_assgin_var11->v2);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value191);
        if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value191;
        __freed_obj__ = 0;
        __dec_obj85=fun_name2_253;
        fun_name2_253=(char*)come_increment_ref_count(new_fun_name_261);
        if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0,0); }
        cloner_252=fun_260;
        if(new_fun_name_261 && !__freed_obj__) { new_fun_name_261 = come_decrement_ref_count(new_fun_name_261, (void*)0, (void*)0, 0, 0, 0); }
    }
    __dec_obj86=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_247);
    if(__dec_obj86) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj86, (void*)0, (void*)0, 0, 0, 0, 0); }
    __dec_obj87=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_246);
    if(__dec_obj87) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0, 0); }
    __result95__ = (_Bool)1;
    if(result_245 && !__freed_obj__) { result_245 = come_decrement_ref_count(result_245, (void*)0, (void*)0, 0, 0, 0); }
    if(stack_saved_246 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_246, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_251 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_251, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_253 && !__freed_obj__) { fun_name2_253 = come_decrement_ref_count(fun_name2_253, (void*)0, (void*)0, 0, 0, 0); }
    return __result95__;
    if(result_245 && !__freed_obj__) { result_245 = come_decrement_ref_count(result_245, (void*)0, (void*)0, 0, 0, 0); }
    if(stack_saved_246 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_246, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_251 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_251, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_253 && !__freed_obj__) { fun_name2_253 = come_decrement_ref_count(fun_name2_253, (void*)0, (void*)0, 0, 0, 0); }
}

void free_right_value_objects(struct sInfo* info, _Bool comma){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional296;
_Bool free_right_value_262;
struct list$1sRightValueObjectph* right_value_objects_263;
int n_264;
_Bool change_freed_object_265;
struct list$1sRightValueObjectph* o2_saved_266;
struct sRightValueObject* it_267;
_Bool _for_condtionalA15;
_Bool _if_conditional297;
_Bool _if_conditional298;
void* right_value192;
struct sType* type_268;
void* right_value193;
struct sType* __dec_obj88;
_Bool _if_conditional299;
_Bool _if_conditional300;
_Bool _if_conditional301;
_Bool _if_conditional302;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&free_right_value_262, 0, sizeof(_Bool));
memset(&right_value_objects_263, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&n_264, 0, sizeof(int));
memset(&change_freed_object_265, 0, sizeof(_Bool));
memset(&o2_saved_266, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_267, 0, sizeof(struct sRightValueObject*));
memset(&right_value192, 0, sizeof(void*));
memset(&type_268, 0, sizeof(struct sType*));
memset(&right_value193, 0, sizeof(void*));
    if(_if_conditional296=gComeGC,    _if_conditional296) {
        return;
    }
    free_right_value_262=(_Bool)0;
    right_value_objects_263=info->right_value_objects;
    n_264=0;
    change_freed_object_265=(_Bool)0;
    for(
    o2_saved_266=(right_value_objects_263),it_267=list$1sRightValueObjectph_begin((o2_saved_266)) ,    0;    _for_condtionalA15=    !list$1sRightValueObjectph_end((o2_saved_266)) ,    _for_condtionalA15;    it_267=list$1sRightValueObjectph_next((o2_saved_266)) ,    0    ){
        if(_if_conditional297=it_267&&!it_267->mFreed,        _if_conditional297) {
            if(_if_conditional298=string_operator_equals(it_267->mFunName,info->come_fun->mName)&&it_267->mBlockLevel==info->block_level,            _if_conditional298) {
                change_freed_object_265=(_Bool)1;
                type_268=(struct sType*)come_increment_ref_count(((struct sType*)(right_value192=sType_clone(it_267->mType))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value192);
                if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value192;
                __freed_obj__ = 0;
                __dec_obj88=type_268;
                type_268=(struct sType*)come_increment_ref_count(((struct sType*)(right_value193=solve_type(type_268,info->generics_type,info->method_generics_types,info))));
                if(__dec_obj88) { come_call_finalizer(sType_finalize,__dec_obj88, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value193);
                if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value193;
                __freed_obj__ = 0;
                if(_if_conditional299=comma,                _if_conditional299) {
                    add_come_code(info,"__freed_obj__ = come_is_contained_element(__right_value_freed_obj, %d, %s),\n",n_264,it_267->mVarName);
                }
                else {
                    add_come_code(info,"__freed_obj__ = come_is_contained_element(__right_value_freed_obj, %d, %s);\n",n_264,it_267->mVarName);
                }
                free_object(type_268,it_267->mVarName,(_Bool)1,(_Bool)0,info,comma,(_Bool)0,(_Bool)0);
                if(_if_conditional300=comma,                _if_conditional300) {
                    add_come_code(info,"__right_value_freed_obj[%d] = %s, \n",n_264,it_267->mVarName);
                }
                else {
                    add_come_code(info,"__right_value_freed_obj[%d] = %s;\n",n_264,it_267->mVarName);
                }
                it_267->mFreed=(_Bool)1;
                free_right_value_262=(_Bool)1;
                if(type_268 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_268, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
        }
        n_264++;
    }
    if(_if_conditional301=change_freed_object_265,    _if_conditional301) {
        if(_if_conditional302=comma,        _if_conditional302) {
            add_come_code(info,"__freed_obj__ = 0, \n");
        }
        else {
            add_come_code(info,"__freed_obj__ = 0;\n");
        }
    }
}

_Bool is_right_values(int right_value_num, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional303;
_Bool __result96__;
struct list$1sRightValueObjectph* o2_saved_269;
struct sRightValueObject* it_270;
_Bool _for_condtionalA16;
_Bool _if_conditional304;
_Bool __result97__;
_Bool __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&o2_saved_269, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_270, 0, sizeof(struct sRightValueObject*));
    if(_if_conditional303=gComeGC,    _if_conditional303) {
        __result96__ = (_Bool)0;
        return __result96__;
    }
    for(
    o2_saved_269=(struct list$1sRightValueObjectph*)come_increment_ref_count((info->right_value_objects)),it_270=list$1sRightValueObjectph_begin((o2_saved_269)) ,    0;    _for_condtionalA16=    !list$1sRightValueObjectph_end((o2_saved_269)) ,    _for_condtionalA16;    it_270=list$1sRightValueObjectph_next((o2_saved_269)) ,    0    ){
        if(_if_conditional304=it_270->mID==right_value_num,        _if_conditional304) {
            __result97__ = (_Bool)1;
            if(o2_saved_269 && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,o2_saved_269, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result97__;
        }
    }
    if(o2_saved_269 && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,o2_saved_269, (void*)0, (void*)0, 0, 0, 0, 0); }
    __result98__ = (_Bool)0;
    return __result98__;
}

struct sVar* get_variable_from_table(struct sVarTable* table, char* name){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sVarTable* it_271;
_Bool _while_condtional21;
struct sVar* var__275;
_Bool _if_conditional309;
struct sVar* __result104__;
struct sVar* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_271, 0, sizeof(struct sVarTable*));
memset(&var__275, 0, sizeof(struct sVar*));
    it_271=table;
    while(_while_condtional21=it_271,    _while_condtional21) {
        var__275=map$2charphsVarphp_operator_load_element(it_271->mVars,name);
        if(_if_conditional309=var__275,        _if_conditional309) {
            __result104__ = __result_obj__ = var__275;
            return __result104__;
        }
        it_271=it_271->mParent;
    }
    __result105__ = __result_obj__ = ((void*)0);
    return __result105__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sVar* default_value_272;
unsigned int hash_273;
unsigned int it_274;
_Bool _while_condtional22;
_Bool _if_conditional305;
void* right_value194;
_Bool _if_conditional306;
struct sVar* __result99__;
_Bool _if_conditional307;
_Bool _if_conditional308;
struct sVar* __result100__;
struct sVar* __result101__;
void* right_value195;
void* right_value196;
struct sVar* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_272, 0, sizeof(struct sVar*));
memset(&hash_273, 0, sizeof(unsigned int));
memset(&it_274, 0, sizeof(unsigned int));
memset(&right_value194, 0, sizeof(void*));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
            memset(&default_value_272,0,sizeof(struct sVar*));
            hash_273=string_get_hash_key(((char*)key))%self->size;
            it_274=hash_273;
            while(_while_condtional22=(_Bool)1,            _while_condtional22) {
                if(_if_conditional305=self->item_existance[it_274],                _if_conditional305) {
                    if(_if_conditional306=optional$2boolbool_value(((struct optional$2boolbool*)(right_value194=string_equals(self->keys[it_274],key)))),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value194),
                    (right_value194 && right_value194 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value194, 
                    __freed_obj__ = 0, 
                    _if_conditional306) {
                        __result99__ = __result_obj__ = self->items[it_274];
                        return __result99__;
                    }
                    it_274++;
                    if(_if_conditional307=it_274>=self->size,                    _if_conditional307) {
                        it_274=0;
                    }
                    else {
                        if(_if_conditional308=it_274==hash_273,                        _if_conditional308) {
                            __result100__ = __result_obj__ = default_value_272;
                            return __result100__;
                        }
                    }
                }
                else {
                    __result101__ = __result_obj__ = default_value_272;
                    return __result101__;
                }
            }
            __result103__ = __result_obj__ = ((struct optional$2sVarpbool*)(right_value196=optional$2sVarpbool_initialize(((struct optional$2sVarpbool*)(right_value195=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1619))),default_value_272,(_Bool)0)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value195);
            if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { right_value195 = come_decrement_ref_count(right_value195, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value195;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value196);
            if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value196;
            __freed_obj__ = 0;
            return __result103__;
}

static struct optional$2sVarpbool* optional$2sVarpbool_initialize(struct optional$2sVarpbool* self, struct sVar* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sVarpbool* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                self->v1=v1;
                self->v2=v2;
                __result102__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result102__;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sVarpboolp_finalize(struct optional$2sVarpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional310;
struct map$2charphsVarph* o2_saved_276;
char* it_279;
_Bool _for_condtionalA17;
struct sVar* p_282;
struct sType* type_283;
struct sClass* klass_284;
_Bool _if_conditional315;
_Bool _if_conditional316;
_Bool _if_conditional317;
_Bool _if_conditional318;
void* right_value197;
char* c_value_285;
void* right_value198;
struct sType* type2_286;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&o2_saved_276, 0, sizeof(struct map$2charphsVarph*));
memset(&it_279, 0, sizeof(char*));
memset(&p_282, 0, sizeof(struct sVar*));
memset(&type_283, 0, sizeof(struct sType*));
memset(&klass_284, 0, sizeof(struct sClass*));
memset(&right_value197, 0, sizeof(void*));
memset(&c_value_285, 0, sizeof(char*));
memset(&right_value198, 0, sizeof(void*));
memset(&type2_286, 0, sizeof(struct sType*));
    if(_if_conditional310=gComeGC,    _if_conditional310) {
        return;
    }
    for(
    o2_saved_276=(struct map$2charphsVarph*)come_increment_ref_count((table->mVars)),it_279=map$2charphsVarph_begin((o2_saved_276)) ,    0;    _for_condtionalA17=    !map$2charphsVarph_end((o2_saved_276)) ,    _for_condtionalA17;    it_279=map$2charphsVarph_next((o2_saved_276)) ,    0    ){
        p_282=map$2charphsVarphp_operator_load_element(table->mVars,it_279);
        type_283=p_282->mType;
        klass_284=type_283->mClass;
        if(_if_conditional315=ret_value!=((void*)0)&&p_282->mCValueName!=((void*)0)&&string_operator_equals(p_282->mCValueName,ret_value->mCValueName)&&type_283->mHeap,        _if_conditional315) {
            free_object(p_282->mType,p_282->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)1,(_Bool)0);
        }
        else {
            if(_if_conditional316=type_283->mHeap&&p_282->mCValueName,            _if_conditional316) {
                if(_if_conditional317=type_283->mFunctionParam,                _if_conditional317) {
                    free_object(p_282->mType,p_282->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0);
                }
                else {
                    free_object(p_282->mType,p_282->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                }
            }
            else {
                if(_if_conditional318=klass_284->mStruct&&p_282->mCValueName&&type_283->mAllocaValue&&!type_283->mNoCallingDestructor,                _if_conditional318) {
                    c_value_285=(char*)come_increment_ref_count(((char*)(right_value197=xsprintf("(&%s)",p_282->mCValueName))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value197);
                    if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { right_value197 = come_decrement_ref_count(right_value197, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value197;
                    __freed_obj__ = 0;
                    type2_286=(struct sType*)come_increment_ref_count(((struct sType*)(right_value198=sType_clone(type_283))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value198);
                    if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value198;
                    __freed_obj__ = 0;
                    type2_286->mPointerNum++;
                    free_object(type2_286,c_value_285,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    if(c_value_285 && !__freed_obj__) { c_value_285 = come_decrement_ref_count(c_value_285, (void*)0, (void*)0, 0, 0, 0); }
                    if(type2_286 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_286, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
            }
        }
    }
    if(o2_saved_276 && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,o2_saved_276, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional311;
char* result_277;
char* __result106__;
_Bool _if_conditional312;
char* __result107__;
char* result_278;
char* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_277, 0, sizeof(char*));
memset(&result_278, 0, sizeof(char*));
        if(_if_conditional311=self==((void*)0),        _if_conditional311) {
            memset(&result_277,0,sizeof(char*));
            __result106__ = __result_obj__ = result_277;
            return __result106__;
        }
        self->key_list->it=self->key_list->head;
        if(_if_conditional312=self->key_list->it,        _if_conditional312) {
            __result107__ = __result_obj__ = self->key_list->it->item;
            return __result107__;
        }
        memset(&result_278,0,sizeof(char*));
        __result108__ = __result_obj__ = result_278;
        return __result108__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result109__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
        return __result109__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional313;
char* result_280;
char* __result110__;
_Bool _if_conditional314;
char* __result111__;
char* result_281;
char* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_280, 0, sizeof(char*));
memset(&result_281, 0, sizeof(char*));
        if(_if_conditional313=self==((void*)0)||self->key_list->it==((void*)0),        _if_conditional313) {
            memset(&result_280,0,sizeof(char*));
            __result110__ = __result_obj__ = result_280;
            return __result110__;
        }
        self->key_list->it=self->key_list->it->next;
        if(_if_conditional314=self->key_list->it,        _if_conditional314) {
            __result111__ = __result_obj__ = self->key_list->it->item;
            return __result111__;
        }
        memset(&result_281,0,sizeof(char*));
        __result112__ = __result_obj__ = result_281;
        return __result112__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_287;
_Bool _for_condtionalA18;
_Bool _if_conditional319;
_Bool _if_conditional320;
int i_288;
_Bool _for_condtionalA19;
_Bool _if_conditional325;
_Bool _if_conditional326;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_287, 0, sizeof(int));
memset(&i_288, 0, sizeof(int));
        for(
        i_287=0 ,        0;        _for_condtionalA18=        i_287<self->size ,        _for_condtionalA18;        i_287++ ,        0        ){
            if(_if_conditional319=self->item_existance[i_287],            _if_conditional319) {
                if(_if_conditional320=1,                _if_conditional320) {
                    if(self->items[i_287] && !__freed_obj__) { come_call_finalizer(sVar_finalize,self->items[i_287], (void*)0, (void*)0, 0, 0, 0, 0); }
                }
            }
        }
        come_free_object((char*)self->items);
        for(
        i_288=0 ,        0;        _for_condtionalA19=        i_288<self->size ,        _for_condtionalA19;        i_288++ ,        0        ){
            if(_if_conditional325=self->item_existance[i_288],            _if_conditional325) {
                if(_if_conditional326=1,                _if_conditional326) {
                    if(self->keys[i_288] && !__freed_obj__) { self->keys[i_288] = come_decrement_ref_count(self->keys[i_288], (void*)0, (void*)0, 0, 0, 0); }
                }
            }
        }
        come_free_object((char*)self->keys);
        if(self->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional321;
_Bool _if_conditional322;
_Bool _if_conditional323;
_Bool _if_conditional324;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional321=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional321) {
                            if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        if(_if_conditional322=self!=((void*)0)&&self->mCValueName!=((void*)0),                        _if_conditional322) {
                            if(self->mCValueName && !__freed_obj__) { self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        if(_if_conditional323=self!=((void*)0)&&self->mType!=((void*)0),                        _if_conditional323) {
                            if(self->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        if(_if_conditional324=self!=((void*)0)&&self->mFunName!=((void*)0),                        _if_conditional324) {
                            if(self->mFunName && !__freed_obj__) { self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_289;
_Bool _while_condtional23;
struct list_item$1charp* prev_it_290;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_289, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_290, 0, sizeof(struct list_item$1charp*));
            it_289=self->head;
            while(_while_condtional23=it_289!=((void*)0),            _while_condtional23) {
                prev_it_290=it_289;
                it_289=it_289->next;
                if(prev_it_290 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_290, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional327;
struct sVarTable* it_291;
_Bool _if_conditional328;
_Bool _while_condtional24;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_291, 0, sizeof(struct sVarTable*));
    if(_if_conditional327=gComeGC,    _if_conditional327) {
        return;
    }
    it_291=info->lv_table;
    if(_if_conditional328=it_291==info->come_fun->mBlock->mVarTable,    _if_conditional328) {
        free_objects(it_291,ret_value,info);
    }
    else {
        while(_while_condtional24=it_291!=info->come_fun->mBlock->mVarTable,        _while_condtional24) {
            free_objects(it_291,ret_value,info);
            it_291=it_291->mParent;
        }
        free_objects(it_291,ret_value,info);
    }
}

void free_objects_on_break(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional329;
struct sVar* ret_value_292;
struct sVarTable* current_loop_vtable_293;
_Bool _if_conditional330;
struct sVarTable* it_294;
_Bool _while_condtional25;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ret_value_292, 0, sizeof(struct sVar*));
memset(&current_loop_vtable_293, 0, sizeof(struct sVarTable*));
memset(&it_294, 0, sizeof(struct sVarTable*));
    if(_if_conditional329=gComeGC,    _if_conditional329) {
        return;
    }
    ret_value_292=((void*)0);
    current_loop_vtable_293=info->current_loop_vtable;
    if(_if_conditional330=current_loop_vtable_293!=((void*)0),    _if_conditional330) {
        it_294=info->lv_table;
        while(_while_condtional25=it_294!=current_loop_vtable_293,        _while_condtional25) {
            free_objects(it_294,ret_value_292,info);
            it_294=it_294->mParent;
        }
        free_objects(it_294,ret_value_292,info);
    }
}

char* append_exception_value(char* c_value, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional331;
_Bool _if_conditional332;
void* right_value199;
void* right_value200;
void* right_value201;
void* right_value202;
char* __result113__;
_Bool _if_conditional333;
static int n_295=0;
void* right_value203;
char* var_name_296;
void* right_value204;
void* right_value205;
void* right_value206;
void* right_value207;
void* right_value208;
void* right_value209;
void* right_value210;
char* __result114__;
void* right_value211;
char* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value199, 0, sizeof(void*));
memset(&right_value200, 0, sizeof(void*));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
memset(&var_name_296, 0, sizeof(char*));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
memset(&right_value207, 0, sizeof(void*));
memset(&right_value208, 0, sizeof(void*));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value210, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
    if(_if_conditional331=string_operator_equals(type->mClass->mName,"void")&&type->mPointerNum==0,    _if_conditional331) {
        if(_if_conditional332=gComeDebug,        _if_conditional332) {
            __result113__ = __result_obj__ = ((char*)(right_value202=xsprintf("(come_push_stackframe(\"\%s\", \%s),\%s,come_pop_stackframe())",((char*)(right_value199=string_to_string(info->sname))),((char*)(right_value200=int_to_string(info->sline))),((char*)(right_value201=charp_to_string(c_value))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value199);
            if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { right_value199 = come_decrement_ref_count(right_value199, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value199;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value200);
            if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { right_value200 = come_decrement_ref_count(right_value200, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value200;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value201);
            if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { right_value201 = come_decrement_ref_count(right_value201, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value201;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value202);
            if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { right_value202 = come_decrement_ref_count(right_value202, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value202;
            __freed_obj__ = 0;
            return __result113__;
        }
    }
    else {
        if(_if_conditional333=gComeDebug,        _if_conditional333) {
            ++n_295;
            var_name_296=(char*)come_increment_ref_count(((char*)(right_value203=xsprintf("__exception_result_var_b%d",n_295))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value203);
            if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { right_value203 = come_decrement_ref_count(right_value203, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value203;
            __freed_obj__ = 0;
            add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value204=make_define_var(type,var_name_296,(_Bool)0,info)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value204);
            if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value204;
            __freed_obj__ = 0;
            __result114__ = __result_obj__ = ((char*)(right_value210=xsprintf("(come_push_stackframe(\"\%s\", \%s),\%s=\%s, come_pop_stackframe(), \%s)",((char*)(right_value205=string_to_string(info->sname))),((char*)(right_value206=int_to_string(info->sline))),((char*)(right_value207=string_to_string(var_name_296))),((char*)(right_value208=charp_to_string(c_value))),((char*)(right_value209=string_to_string(var_name_296))))));
            if(var_name_296 && !__freed_obj__) { var_name_296 = come_decrement_ref_count(var_name_296, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value205);
            if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { right_value205 = come_decrement_ref_count(right_value205, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value205;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value206);
            if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value206;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value207);
            if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { right_value207 = come_decrement_ref_count(right_value207, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value207;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value208);
            if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { right_value208 = come_decrement_ref_count(right_value208, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[5] = right_value208;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value209);
            if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { right_value209 = come_decrement_ref_count(right_value209, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[6] = right_value209;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value210);
            if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { right_value210 = come_decrement_ref_count(right_value210, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[7] = right_value210;
            __freed_obj__ = 0;
            return __result114__;
            if(var_name_296 && !__freed_obj__) { var_name_296 = come_decrement_ref_count(var_name_296, (void*)0, (void*)0, 0, 0, 0); }
        }
    }
    __result115__ = __result_obj__ = ((char*)(right_value211=__builtin_string(c_value)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value211);
    if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { right_value211 = come_decrement_ref_count(right_value211, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value211;
    __freed_obj__ = 0;
    return __result115__;
}

