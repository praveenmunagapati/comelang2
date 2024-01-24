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
struct sDoWhileNode
{
    struct sNode* mExpressionNode;
    struct sBlock* mBlock;
    int sline;
    char* sname;
};
struct __current_stack1__
{
    int __method_block_result_kind__;
    void* __method_block_return_value__;
    char** buf;
    char** head;
    int* head_sline;
    struct sInfo** info;
};
struct optional$2voidpbool
{
    void* v1;
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

struct sDoWhileNode* sDoWhileNode_initialize(struct sDoWhileNode* self, struct sNode* expression_node, struct sBlock* block, struct sInfo* info);

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
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
_Bool sDoWhileNode_terminated();

char* sDoWhileNode_kind();

_Bool sDoWhileNode_compile(struct sDoWhileNode* self, struct sInfo* info);

static void CVALUE_finalize(struct CVALUE* self);
int sDoWhileNode_sline(struct sDoWhileNode* self, struct sInfo* info);

char* sDoWhileNode_sname(struct sDoWhileNode* self, struct sInfo* info);

struct sNode* string_node_v10(char* buf, char* head, int head_sline, struct sInfo* info);

static char* optional$2charphbool_value(struct optional$2charphbool* self);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
static int optional$2intbool_value(struct optional$2intbool* self);
static void optional$2intboolp_finalize(struct optional$2intbool* self);
static void sDoWhileNode_finalize(struct sDoWhileNode* self);
static struct sDoWhileNode* sDoWhileNode_clone(struct sDoWhileNode* self);
static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2);
static void optional$2sNodephboolp_finalize(struct optional$2sNodephbool* self);
static struct sNode* optional$2sNodephbool_catch(struct optional$2sNodephbool* self, void* parent, void (*block)(void*));
void method_block1_10dowhilec(struct __current_stack1__* parent);

static struct optional$2voidpbool* optional$2voidpbool_initialize(struct optional$2voidpbool* self, void* v1, _Bool v2);
static void optional$2voidpboolp_finalize(struct optional$2voidpbool* self);
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

struct sDoWhileNode* sDoWhileNode_initialize(struct sDoWhileNode* self, struct sNode* expression_node, struct sBlock* block, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value10;
char* __dec_obj6;
void* right_value12;
struct sNode* __dec_obj7;
void* right_value41;
struct sBlock* __dec_obj15;
struct sDoWhileNode* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
memset(&right_value12, 0, sizeof(void*));
memset(&right_value41, 0, sizeof(void*));
    # 15 "10do_while.c"
    self->sline=info->sline;
    # 16 "10do_while.c"
    __dec_obj6=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value10=__builtin_string(info->sname))));
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
    if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value10;
    __freed_obj__ = 0;
    # 18 "10do_while.c"
    __dec_obj7=self->mExpressionNode;
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value12=sNode_clone(expression_node))));
    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, ((struct sNode*)__dec_obj7)->finalize, ((struct sNode*)__dec_obj7)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value12);
    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { right_value12 = come_decrement_ref_count(right_value12, ((struct sNode*)right_value12)->finalize, ((struct sNode*)right_value12)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value12;
    __freed_obj__ = 0;
    # 19 "10do_while.c"
    __dec_obj15=self->mBlock;
    self->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value41=sBlock_clone(block))));
    if(__dec_obj15) { come_call_finalizer(sBlock_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value41);
    if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value41;
    __freed_obj__ = 0;
    # 21 "10do_while.c"
    __result47__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sDoWhileNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(expression_node && !__freed_obj__) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
    return __result47__;
    if(self && !__freed_obj__) { come_call_finalizer(sDoWhileNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
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
        # 3 "sNode_clone"
        # 2 "sNode_clone"
        if(_if_conditional5=self==(void*)0,        _if_conditional5) {
            # 2 "sNode_clone"
            __result7__ = __result_obj__ = (void*)0;
            return __result7__;
        }
        # 3 "sNode_clone"
        result_5=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value11);
        if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { right_value11 = come_decrement_ref_count(right_value11, ((struct sNode*)right_value11)->finalize, ((struct sNode*)right_value11)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[0] = right_value11;
        __freed_obj__ = 0;
        # 5 "sNode_clone"
        # 4 "sNode_clone"
        if(_if_conditional6=self!=((void*)0)&&self->clone!=((void*)0),        _if_conditional6) {
            # 4 "sNode_clone"
            result_5->_protocol_obj=self->clone(self->_protocol_obj);
        }
        # 6 "sNode_clone"
        # 5 "sNode_clone"
        if(_if_conditional7=self!=((void*)0),        _if_conditional7) {
            # 5 "sNode_clone"
            result_5->finalize=self->finalize;
        }
        # 7 "sNode_clone"
        # 6 "sNode_clone"
        if(_if_conditional8=self!=((void*)0),        _if_conditional8) {
            # 6 "sNode_clone"
            result_5->clone=self->clone;
        }
        # 8 "sNode_clone"
        # 7 "sNode_clone"
        if(_if_conditional9=self!=((void*)0),        _if_conditional9) {
            # 7 "sNode_clone"
            result_5->compile=self->compile;
        }
        # 9 "sNode_clone"
        # 8 "sNode_clone"
        if(_if_conditional10=self!=((void*)0),        _if_conditional10) {
            # 8 "sNode_clone"
            result_5->sline=self->sline;
        }
        # 10 "sNode_clone"
        # 9 "sNode_clone"
        if(_if_conditional11=self!=((void*)0),        _if_conditional11) {
            # 9 "sNode_clone"
            result_5->sname=self->sname;
        }
        # 11 "sNode_clone"
        # 10 "sNode_clone"
        if(_if_conditional12=self!=((void*)0),        _if_conditional12) {
            # 10 "sNode_clone"
            result_5->terminated=self->terminated;
        }
        # 12 "sNode_clone"
        # 11 "sNode_clone"
        if(_if_conditional13=self!=((void*)0),        _if_conditional13) {
            # 11 "sNode_clone"
            result_5->kind=self->kind;
        }
        # 12 "sNode_clone"
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
void* right_value40;
struct sVarTable* __dec_obj14;
struct sBlock* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value13, 0, sizeof(void*));
memset(&result_6, 0, sizeof(struct sBlock*));
memset(&right_value20, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
        # 3 "sBlock_clone"
        # 2 "sBlock_clone"
        if(_if_conditional14=self==(void*)0,        _if_conditional14) {
            # 2 "sBlock_clone"
            __result9__ = __result_obj__ = (void*)0;
            return __result9__;
        }
        # 3 "sBlock_clone"
        result_6=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value13=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value13);
        if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value13;
        __freed_obj__ = 0;
        # 5 "sBlock_clone"
        # 4 "sBlock_clone"
        if(_if_conditional18=self!=((void*)0)&&self->mNodes!=((void*)0),        _if_conditional18) {
            # 4 "sBlock_clone"
            __dec_obj11=result_6->mNodes;
            result_6->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value20=list$1sNodephp_clone(self->mNodes))));
            if(__dec_obj11) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
            if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value20;
            __freed_obj__ = 0;
        }
        # 6 "sBlock_clone"
        # 5 "sBlock_clone"
        if(_if_conditional22=self!=((void*)0)&&self->mVarTable!=((void*)0),        _if_conditional22) {
            # 5 "sBlock_clone"
            __dec_obj14=result_6->mVarTable;
            result_6->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value40=sVarTable_clone(self->mVarTable))));
            if(__dec_obj14) { come_call_finalizer(sVarTable_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
            if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value40;
            __freed_obj__ = 0;
        }
        # 6 "sBlock_clone"
        __result46__ = __result_obj__ = result_6;
        if(result_6 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,result_6, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result46__;
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
            # 1 "sBlock_finalize"
            # 0 "sBlock_finalize"
            if(_if_conditional15=self!=((void*)0)&&self->mNodes!=((void*)0),            _if_conditional15) {
                # 0 "sBlock_finalize"
                if(self->mNodes && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            # 2 "sBlock_finalize"
            # 1 "sBlock_finalize"
            if(_if_conditional17=self!=((void*)0)&&self->mVarTable!=((void*)0),            _if_conditional17) {
                # 1 "sBlock_finalize"
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
                    # 176 "./comelang2.h"
                    it_7=self->head;
                    # 182 "./comelang2.h"
                    while(_while_condtional1=it_7!=((void*)0),                    _while_condtional1) {
                        # 178 "./comelang2.h"
                        prev_it_8=it_7;
                        # 179 "./comelang2.h"
                        it_7=it_7->next;
                        # 180 "./comelang2.h"
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
                            # 1 "list_item$1sNodephp_finalize"
                            # 0 "list_item$1sNodephp_finalize"
                            if(_if_conditional16=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional16) {
                                # 0 "list_item$1sNodephp_finalize"
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
                # 195 "./comelang2.h"
                # 192 "./comelang2.h"
                if(_if_conditional19=self==((void*)0),                _if_conditional19) {
                    # 193 "./comelang2.h"
                    __result10__ = __result_obj__ = ((void*)0);
                    return __result10__;
                }
                # 195 "./comelang2.h"
                result_9=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value15=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value14=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 195))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value14);
                if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value14;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value15);
                if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value15;
                __freed_obj__ = 0;
                # 197 "./comelang2.h"
                it_10=self->head;
                # 204 "./comelang2.h"
                while(_while_condtional2=it_10!=((void*)0),                _while_condtional2) {
                    # 199 "./comelang2.h"
                    list$1sNodeph_add(result_9,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value19=sNode_clone(it_10->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19);
                    if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { right_value19 = come_decrement_ref_count(right_value19, ((struct sNode*)right_value19)->finalize, ((struct sNode*)right_value19)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value19;
                    __freed_obj__ = 0;
                    # 201 "./comelang2.h"
                    it_10=it_10->next;
                }
                # 204 "./comelang2.h"
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
                    # 157 "./comelang2.h"
                    self->head=((void*)0);
                    # 158 "./comelang2.h"
                    self->tail=((void*)0);
                    # 159 "./comelang2.h"
                    self->len=0;
                    # 161 "./comelang2.h"
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
                        # 239 "./comelang2.h"
                        # 208 "./comelang2.h"
                        if(_if_conditional20=self->len==0,                        _if_conditional20) {
                            # 209 "./comelang2.h"
                            litem_11=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value16=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 209))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
                            if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value16;
                            __freed_obj__ = 0;
                            # 211 "./comelang2.h"
                            litem_11->prev=((void*)0);
                            # 212 "./comelang2.h"
                            litem_11->next=((void*)0);
                            # 213 "./comelang2.h"
                            __dec_obj8=litem_11->item;
                            litem_11->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0,0,0); }
                            # 215 "./comelang2.h"
                            self->tail=litem_11;
                            # 216 "./comelang2.h"
                            self->head=litem_11;
                        }
                        else {
                            # 239 "./comelang2.h"
                            # 218 "./comelang2.h"
                            if(_if_conditional21=self->len==1,                            _if_conditional21) {
                                # 219 "./comelang2.h"
                                litem_12=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value17=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 219))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value17);
                                if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value17;
                                __freed_obj__ = 0;
                                # 221 "./comelang2.h"
                                litem_12->prev=self->head;
                                # 222 "./comelang2.h"
                                litem_12->next=((void*)0);
                                # 223 "./comelang2.h"
                                __dec_obj9=litem_12->item;
                                litem_12->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0,0); }
                                # 225 "./comelang2.h"
                                self->tail=litem_12;
                                # 226 "./comelang2.h"
                                self->head->next=litem_12;
                            }
                            else {
                                # 229 "./comelang2.h"
                                litem_13=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value18=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 229))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
                                if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value18;
                                __freed_obj__ = 0;
                                # 231 "./comelang2.h"
                                litem_13->prev=self->tail;
                                # 232 "./comelang2.h"
                                litem_13->next=((void*)0);
                                # 233 "./comelang2.h"
                                __dec_obj10=litem_13->item;
                                litem_13->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0,0); }
                                # 235 "./comelang2.h"
                                self->tail->next=litem_13;
                                # 236 "./comelang2.h"
                                self->tail=litem_13;
                            }
                        }
                        # 239 "./comelang2.h"
                        self->len++;
                        # 241 "./comelang2.h"
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
void* right_value39;
struct map$2charphsVarph* __dec_obj13;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
struct sVarTable* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value21, 0, sizeof(void*));
memset(&result_14, 0, sizeof(struct sVarTable*));
memset(&right_value39, 0, sizeof(void*));
                # 3 "sVarTable_clone"
                # 2 "sVarTable_clone"
                if(_if_conditional23=self==(void*)0,                _if_conditional23) {
                    # 2 "sVarTable_clone"
                    __result14__ = __result_obj__ = (void*)0;
                    return __result14__;
                }
                # 3 "sVarTable_clone"
                result_14=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value21=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
                if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value21;
                __freed_obj__ = 0;
                # 5 "sVarTable_clone"
                # 4 "sVarTable_clone"
                if(_if_conditional24=self!=((void*)0)&&self->mVars!=((void*)0),                _if_conditional24) {
                    # 4 "sVarTable_clone"
                    __dec_obj13=result_14->mVars;
                    result_14->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value39=map$2charphsVarphp_clone(self->mVars))));
                    if(__dec_obj13) { come_call_finalizer(map$2charphsVarph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
                    if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value39;
                    __freed_obj__ = 0;
                }
                # 6 "sVarTable_clone"
                # 5 "sVarTable_clone"
                if(_if_conditional98=self!=((void*)0),                _if_conditional98) {
                    # 5 "sVarTable_clone"
                    result_14->mGlobal=self->mGlobal;
                }
                # 7 "sVarTable_clone"
                # 6 "sVarTable_clone"
                if(_if_conditional99=self!=((void*)0),                _if_conditional99) {
                    # 6 "sVarTable_clone"
                    result_14->mParent=self->mParent;
                }
                # 8 "sVarTable_clone"
                # 7 "sVarTable_clone"
                if(_if_conditional100=self!=((void*)0),                _if_conditional100) {
                    # 7 "sVarTable_clone"
                    result_14->mID=self->mID;
                }
                # 8 "sVarTable_clone"
                __result45__ = __result_obj__ = result_14;
                if(result_14 && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,result_14, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result45__;
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
struct sVar* it2_34;
struct map$2charphsVarph* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value22, 0, sizeof(void*));
memset(&right_value28, 0, sizeof(void*));
memset(&result_24, 0, sizeof(struct map$2charphsVarph*));
memset(&it_27, 0, sizeof(char*));
memset(&default_value_30, 0, sizeof(struct sVar*));
memset(&it2_34, 0, sizeof(struct sVar*));
                        # 1222 "./comelang2.h"
                        # 1219 "./comelang2.h"
                        if(_if_conditional25=self==((void*)0),                        _if_conditional25) {
                            # 1220 "./comelang2.h"
                            __result15__ = __result_obj__ = ((void*)0);
                            return __result15__;
                        }
                        # 1222 "./comelang2.h"
                        result_24=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value28=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value22=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang2.h", 1222))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
                        if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value22;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value28);
                        if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value28;
                        __freed_obj__ = 0;
                        # 1233 "./comelang2.h"
                        for(
                        it_27=map$2charphsVarph_begin(self) ,                        0;                        _for_condtionalA4=                        !map$2charphsVarph_end(self) ,                        _for_condtionalA4;                        it_27=map$2charphsVarph_next(self) ,                        0                        ){
                            # 1225 "./comelang2.h"
                            # 1226 "./comelang2.h"
                            memset(&default_value_30,0,sizeof(struct sVar*));
                            # 1228 "./comelang2.h"
                            it2_34=map$2charphsVarph_at(self,it_27,default_value_30);
                            # 1230 "./comelang2.h"
                            map$2charphsVarph_insert2(result_24,it_27,it2_34);
                        }
                        # 1233 "./comelang2.h"
                        __result44__ = __result_obj__ = result_24;
                        if(result_24 && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result44__;
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
                            # 1129 "./comelang2.h"
                            self->keys=(char**)come_increment_ref_count(((char**)(right_value23=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1129))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
                            if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { right_value23 = come_decrement_ref_count(right_value23, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value23;
                            __freed_obj__ = 0;
                            # 1130 "./comelang2.h"
                            self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value24=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(1024)), "./comelang2.h", 1130))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value24);
                            if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value24;
                            __freed_obj__ = 0;
                            # 1131 "./comelang2.h"
                            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value25=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1131))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value25);
                            if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { right_value25 = come_decrement_ref_count(right_value25, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value25;
                            __freed_obj__ = 0;
                            # 1138 "./comelang2.h"
                            for(
                            i_19=0 ,                            0;                            _for_condtionalA1=                            i_19<1024 ,                            _for_condtionalA1;                            i_19++ ,                            0                            ){
                                # 1135 "./comelang2.h"
                                self->item_existance[i_19]=(_Bool)0;
                            }
                            # 1138 "./comelang2.h"
                            self->size=1024;
                            # 1139 "./comelang2.h"
                            self->len=0;
                            # 1141 "./comelang2.h"
                            __dec_obj12=self->key_list;
                            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value27=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value26=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1141))))))));
                            if(__dec_obj12) { come_call_finalizer(list$1charp_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value26);
                            if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[3] = right_value26;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value27);
                            if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[4] = right_value27;
                            __freed_obj__ = 0;
                            # 1143 "./comelang2.h"
                            self->it=0;
                            # 1145 "./comelang2.h"
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
                                # 1 "sVar_finalize"
                                # 0 "sVar_finalize"
                                if(_if_conditional26=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional26) {
                                    # 0 "sVar_finalize"
                                    if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                # 2 "sVar_finalize"
                                # 1 "sVar_finalize"
                                if(_if_conditional27=self!=((void*)0)&&self->mCValueName!=((void*)0),                                _if_conditional27) {
                                    # 1 "sVar_finalize"
                                    if(self->mCValueName && !__freed_obj__) { self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                # 3 "sVar_finalize"
                                # 2 "sVar_finalize"
                                if(_if_conditional28=self!=((void*)0)&&self->mType!=((void*)0),                                _if_conditional28) {
                                    # 2 "sVar_finalize"
                                    if(self->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                # 4 "sVar_finalize"
                                # 3 "sVar_finalize"
                                if(_if_conditional44=self!=((void*)0)&&self->mFunName!=((void*)0),                                _if_conditional44) {
                                    # 3 "sVar_finalize"
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
                                        # 1 "sType_finalize"
                                        # 0 "sType_finalize"
                                        if(_if_conditional29=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                        _if_conditional29) {
                                            # 0 "sType_finalize"
                                            if(self->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        # 2 "sType_finalize"
                                        # 1 "sType_finalize"
                                        if(_if_conditional31=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                        _if_conditional31) {
                                            # 1 "sType_finalize"
                                            if(self->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        # 3 "sType_finalize"
                                        # 2 "sType_finalize"
                                        if(_if_conditional32=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                        _if_conditional32) {
                                            # 2 "sType_finalize"
                                            if(self->mGenericsName && !__freed_obj__) { self->mGenericsName = come_decrement_ref_count(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                                        }
                                        # 4 "sType_finalize"
                                        # 3 "sType_finalize"
                                        if(_if_conditional33=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                        _if_conditional33) {
                                            # 3 "sType_finalize"
                                            if(self->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        # 5 "sType_finalize"
                                        # 4 "sType_finalize"
                                        if(_if_conditional35=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                        _if_conditional35) {
                                            # 4 "sType_finalize"
                                            if(self->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        # 6 "sType_finalize"
                                        # 5 "sType_finalize"
                                        if(_if_conditional36=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                        _if_conditional36) {
                                            # 5 "sType_finalize"
                                            if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        # 7 "sType_finalize"
                                        # 6 "sType_finalize"
                                        if(_if_conditional37=self!=((void*)0)&&self->mParamNames!=((void*)0),                                        _if_conditional37) {
                                            # 6 "sType_finalize"
                                            if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        # 8 "sType_finalize"
                                        # 7 "sType_finalize"
                                        if(_if_conditional39=self!=((void*)0)&&self->mResultType!=((void*)0),                                        _if_conditional39) {
                                            # 7 "sType_finalize"
                                            if(self->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        # 9 "sType_finalize"
                                        # 8 "sType_finalize"
                                        if(_if_conditional40=self!=((void*)0)&&self->mAlignas!=((void*)0),                                        _if_conditional40) {
                                            # 8 "sType_finalize"
                                            if(self->mAlignas && !__freed_obj__) { self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0); } 
                                        }
                                        # 10 "sType_finalize"
                                        # 9 "sType_finalize"
                                        if(_if_conditional41=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                        _if_conditional41) {
                                            # 9 "sType_finalize"
                                            if(self->mSizeNum && !__freed_obj__) { self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                                        }
                                        # 11 "sType_finalize"
                                        # 10 "sType_finalize"
                                        if(_if_conditional42=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                        _if_conditional42) {
                                            # 10 "sType_finalize"
                                            if(self->mOriginalTypeName && !__freed_obj__) { self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                                        }
                                        # 12 "sType_finalize"
                                        # 11 "sType_finalize"
                                        if(_if_conditional43=self!=((void*)0)&&self->mAsmName!=((void*)0),                                        _if_conditional43) {
                                            # 11 "sType_finalize"
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
                                                # 1 "tuple1$1sTypephp_finalize"
                                                # 0 "tuple1$1sTypephp_finalize"
                                                if(_if_conditional30=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional30) {
                                                    # 0 "tuple1$1sTypephp_finalize"
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
                                                # 176 "./comelang2.h"
                                                it_15=self->head;
                                                # 182 "./comelang2.h"
                                                while(_while_condtional3=it_15!=((void*)0),                                                _while_condtional3) {
                                                    # 178 "./comelang2.h"
                                                    prev_it_16=it_15;
                                                    # 179 "./comelang2.h"
                                                    it_15=it_15->next;
                                                    # 180 "./comelang2.h"
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
                                                        # 1 "list_item$1sTypephp_finalize"
                                                        # 0 "list_item$1sTypephp_finalize"
                                                        if(_if_conditional34=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional34) {
                                                            # 0 "list_item$1sTypephp_finalize"
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
                                                # 176 "./comelang2.h"
                                                it_17=self->head;
                                                # 182 "./comelang2.h"
                                                while(_while_condtional4=it_17!=((void*)0),                                                _while_condtional4) {
                                                    # 178 "./comelang2.h"
                                                    prev_it_18=it_17;
                                                    # 179 "./comelang2.h"
                                                    it_17=it_17->next;
                                                    # 180 "./comelang2.h"
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
                                                        # 1 "list_item$1charphp_finalize"
                                                        # 0 "list_item$1charphp_finalize"
                                                        if(_if_conditional38=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional38) {
                                                            # 0 "list_item$1charphp_finalize"
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
                                # 157 "./comelang2.h"
                                self->head=((void*)0);
                                # 158 "./comelang2.h"
                                self->tail=((void*)0);
                                # 159 "./comelang2.h"
                                self->len=0;
                                # 161 "./comelang2.h"
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
                                    # 176 "./comelang2.h"
                                    it_20=self->head;
                                    # 182 "./comelang2.h"
                                    while(_while_condtional5=it_20!=((void*)0),                                    _while_condtional5) {
                                        # 178 "./comelang2.h"
                                        prev_it_21=it_20;
                                        # 179 "./comelang2.h"
                                        it_20=it_20->next;
                                        # 180 "./comelang2.h"
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
                                # 1179 "./comelang2.h"
                                for(
                                i_22=0 ,                                0;                                _for_condtionalA2=                                i_22<self->size ,                                _for_condtionalA2;                                i_22++ ,                                0                                ){
                                    # 1178 "./comelang2.h"
                                    # 1173 "./comelang2.h"
                                    if(_if_conditional45=self->item_existance[i_22],                                    _if_conditional45) {
                                        # 1177 "./comelang2.h"
                                        # 1174 "./comelang2.h"
                                        if(_if_conditional46=1,                                        _if_conditional46) {
                                            # 1175 "./comelang2.h"
                                            if(self->items[i_22] && !__freed_obj__) { come_call_finalizer(sVar_finalize,self->items[i_22], (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                    }
                                }
                                # 1179 "./comelang2.h"
                                come_free_object((char*)self->items);
                                # 1188 "./comelang2.h"
                                for(
                                i_23=0 ,                                0;                                _for_condtionalA3=                                i_23<self->size ,                                _for_condtionalA3;                                i_23++ ,                                0                                ){
                                    # 1187 "./comelang2.h"
                                    # 1182 "./comelang2.h"
                                    if(_if_conditional47=self->item_existance[i_23],                                    _if_conditional47) {
                                        # 1186 "./comelang2.h"
                                        # 1183 "./comelang2.h"
                                        if(_if_conditional48=1,                                        _if_conditional48) {
                                            # 1184 "./comelang2.h"
                                            if(self->keys[i_23] && !__freed_obj__) { self->keys[i_23] = come_decrement_ref_count(self->keys[i_23], (void*)0, (void*)0, 0, 0, 0); }
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
                            # 1343 "./comelang2.h"
                            # 1338 "./comelang2.h"
                            if(_if_conditional49=self==((void*)0),                            _if_conditional49) {
                                # 1339 "./comelang2.h"
                                # 1340 "./comelang2.h"
                                memset(&result_25,0,sizeof(char*));
                                # 1341 "./comelang2.h"
                                __result18__ = __result_obj__ = result_25;
                                return __result18__;
                            }
                            # 1343 "./comelang2.h"
                            self->key_list->it=self->key_list->head;
                            # 1349 "./comelang2.h"
                            # 1345 "./comelang2.h"
                            if(_if_conditional50=self->key_list->it,                            _if_conditional50) {
                                # 1346 "./comelang2.h"
                                __result19__ = __result_obj__ = self->key_list->it->item;
                                return __result19__;
                            }
                            # 1349 "./comelang2.h"
                            # 1350 "./comelang2.h"
                            memset(&result_26,0,sizeof(char*));
                            # 1351 "./comelang2.h"
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
                            # 1372 "./comelang2.h"
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
                            # 1360 "./comelang2.h"
                            # 1355 "./comelang2.h"
                            if(_if_conditional51=self==((void*)0)||self->key_list->it==((void*)0),                            _if_conditional51) {
                                # 1356 "./comelang2.h"
                                # 1357 "./comelang2.h"
                                memset(&result_28,0,sizeof(char*));
                                # 1358 "./comelang2.h"
                                __result22__ = __result_obj__ = result_28;
                                return __result22__;
                            }
                            # 1360 "./comelang2.h"
                            self->key_list->it=self->key_list->it->next;
                            # 1366 "./comelang2.h"
                            # 1362 "./comelang2.h"
                            if(_if_conditional52=self->key_list->it,                            _if_conditional52) {
                                # 1363 "./comelang2.h"
                                __result23__ = __result_obj__ = self->key_list->it->item;
                                return __result23__;
                            }
                            # 1366 "./comelang2.h"
                            # 1367 "./comelang2.h"
                            memset(&result_29,0,sizeof(char*));
                            # 1368 "./comelang2.h"
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
                                # 1265 "./comelang2.h"
                                hash_31=string_get_hash_key(((char*)key))%self->size;
                                # 1266 "./comelang2.h"
                                it_32=hash_31;
                                # 1290 "./comelang2.h"
                                while(_while_condtional6=(_Bool)1,                                _while_condtional6) {
                                    # 1288 "./comelang2.h"
                                    # 1269 "./comelang2.h"
                                    if(_if_conditional53=self->item_existance[it_32],                                    _if_conditional53) {
                                        # 1276 "./comelang2.h"
                                        # 1271 "./comelang2.h"
                                        if(_if_conditional55=optional$2boolbool_value(((struct optional$2boolbool*)(right_value29=string_equals(self->keys[it_32],key)))),                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29),
                                        (right_value29 && right_value29 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                        __right_value_freed_obj[0] = right_value29, 
                                        __freed_obj__ = 0, 
                                        _if_conditional55) {
                                            # 1273 "./comelang2.h"
                                            __result27__ = __result_obj__ = self->items[it_32];
                                            return __result27__;
                                        }
                                        # 1276 "./comelang2.h"
                                        it_32++;
                                        # 1284 "./comelang2.h"
                                        # 1278 "./comelang2.h"
                                        if(_if_conditional56=it_32>=self->size,                                        _if_conditional56) {
                                            # 1279 "./comelang2.h"
                                            it_32=0;
                                        }
                                        else {
                                            # 1284 "./comelang2.h"
                                            # 1281 "./comelang2.h"
                                            if(_if_conditional57=it_32==hash_31,                                            _if_conditional57) {
                                                # 1282 "./comelang2.h"
                                                __result28__ = __result_obj__ = default_value;
                                                return __result28__;
                                            }
                                        }
                                    }
                                    else {
                                        # 1286 "./comelang2.h"
                                        __result29__ = __result_obj__ = default_value;
                                        return __result29__;
                                    }
                                }
                                # 1290 "./comelang2.h"
                                __result30__ = __result_obj__ = default_value;
                                return __result30__;
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
                                            # 69 "./comelang2.h"
                                            # 61 "./comelang2.h"
                                            if(_if_conditional54=self==((void*)0),                                            _if_conditional54) {
                                                # 62 "./comelang2.h"
                                                # 63 "./comelang2.h"
                                                memset(&default_value_33,0,sizeof(_Bool));
                                                # 64 "./comelang2.h"
                                                __result25__ = default_value_33;
                                                return __result25__;
                                            }
                                            else {
                                                # 67 "./comelang2.h"
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
void* right_value33;
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
void* right_value35;
_Bool _if_conditional93;
_Bool _if_conditional94;
struct map$2charphsVarph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_46, 0, sizeof(unsigned int));
memset(&it_47, 0, sizeof(int));
memset(&right_value33, 0, sizeof(void*));
memset(&same_key_exist_64, 0, sizeof(_Bool));
memset(&it2_67, 0, sizeof(char*));
memset(&right_value35, 0, sizeof(void*));
                                # 1509 "./comelang2.h"
                                # 1506 "./comelang2.h"
                                if(_if_conditional58=self->len*2>=self->size,                                _if_conditional58) {
                                    # 1507 "./comelang2.h"
                                    map$2charphsVarph_rehash(self);
                                }
                                # 1509 "./comelang2.h"
                                hash_46=string_get_hash_key(key)%self->size;
                                # 1510 "./comelang2.h"
                                it_47=hash_46;
                                # 1568 "./comelang2.h"
                                while(_while_condtional8=(_Bool)1,                                _while_condtional8) {
                                    # 1566 "./comelang2.h"
                                    # 1513 "./comelang2.h"
                                    if(_if_conditional62=self->item_existance[it_47],                                    _if_conditional62) {
                                        # 1536 "./comelang2.h"
                                        # 1515 "./comelang2.h"
                                        if(_if_conditional63=optional$2boolbool_value(((struct optional$2boolbool*)(right_value33=string_equals(self->keys[it_47],key)))),                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value33),
                                        (right_value33 && right_value33 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                        __right_value_freed_obj[0] = right_value33, 
                                        __freed_obj__ = 0, 
                                        _if_conditional63) {
                                            # 1526 "./comelang2.h"
                                            # 1517 "./comelang2.h"
                                            if(_if_conditional64=1,                                            _if_conditional64) {
                                                # 1518 "./comelang2.h"
                                                if(self->keys[it_47] && !__freed_obj__) { self->keys[it_47] = come_decrement_ref_count(self->keys[it_47], (void*)0, (void*)0, 0, 0, 0); }
                                                # 1519 "./comelang2.h"
                                                list$1charp_remove(self->key_list,self->keys[it_47]);
                                                # 1520 "./comelang2.h"
                                                self->keys[it_47]=(char*)come_increment_ref_count(key);
                                            }
                                            else {
                                                # 1523 "./comelang2.h"
                                                list$1charp_remove(self->key_list,self->keys[it_47]);
                                                # 1524 "./comelang2.h"
                                                self->keys[it_47]=key;
                                            }
                                            # 1533 "./comelang2.h"
                                            # 1526 "./comelang2.h"
                                            if(_if_conditional84=1,                                            _if_conditional84) {
                                                # 1527 "./comelang2.h"
                                                if(self->items[it_47] && !__freed_obj__) { come_call_finalizer(sVar_finalize,self->items[it_47], (void*)0, (void*)0, 0, 0, 0, 0); }
                                                # 1528 "./comelang2.h"
                                                self->items[it_47]=(struct sVar*)come_increment_ref_count(item);
                                            }
                                            else {
                                                # 1531 "./comelang2.h"
                                                self->items[it_47]=item;
                                            }
                                            # 1533 "./comelang2.h"
                                            break;
                                        }
                                        # 1536 "./comelang2.h"
                                        it_47++;
                                        # 1546 "./comelang2.h"
                                        # 1538 "./comelang2.h"
                                        if(_if_conditional85=it_47>=self->size,                                        _if_conditional85) {
                                            # 1539 "./comelang2.h"
                                            it_47=0;
                                        }
                                        else {
                                            # 1546 "./comelang2.h"
                                            # 1541 "./comelang2.h"
                                            if(_if_conditional86=it_47==hash_46,                                            _if_conditional86) {
                                                # 1542 "./comelang2.h"
                                                printf("unexpected error in map.insert\n");
                                                # 1543 "./comelang2.h"
                                                stackframe();
                                                # 1544 "./comelang2.h"
                                                exit(2);
                                            }
                                        }
                                    }
                                    else {
                                        # 1548 "./comelang2.h"
                                        self->item_existance[it_47]=(_Bool)1;
                                        # 1555 "./comelang2.h"
                                        # 1549 "./comelang2.h"
                                        if(_if_conditional87=1,                                        _if_conditional87) {
                                            # 1550 "./comelang2.h"
                                            self->keys[it_47]=(char*)come_increment_ref_count(key);
                                        }
                                        else {
                                            # 1553 "./comelang2.h"
                                            self->keys[it_47]=key;
                                        }
                                        # 1562 "./comelang2.h"
                                        # 1555 "./comelang2.h"
                                        if(_if_conditional88=1,                                        _if_conditional88) {
                                            # 1556 "./comelang2.h"
                                            self->items[it_47]=(struct sVar*)come_increment_ref_count(item);
                                        }
                                        else {
                                            # 1559 "./comelang2.h"
                                            self->items[it_47]=item;
                                        }
                                        # 1562 "./comelang2.h"
                                        self->len++;
                                        # 1564 "./comelang2.h"
                                        break;
                                    }
                                }
                                # 1568 "./comelang2.h"
                                same_key_exist_64=(_Bool)0;
                                # 1576 "./comelang2.h"
                                for(
                                it2_67=list$1charp_begin(self->key_list) ,                                0;                                _for_condtionalA6=                                !list$1charp_end(self->key_list) ,                                _for_condtionalA6;                                it2_67=list$1charp_next(self->key_list) ,                                0                                ){
                                    # 1574 "./comelang2.h"
                                    # 1571 "./comelang2.h"
                                    if(_if_conditional93=optional$2boolbool_value(((struct optional$2boolbool*)(right_value35=string_equals(it2_67,key)))),                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35),
                                    (right_value35 && right_value35 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                    __right_value_freed_obj[0] = right_value35, 
                                    __freed_obj__ = 0, 
                                    _if_conditional93) {
                                        # 1572 "./comelang2.h"
                                        same_key_exist_64=(_Bool)1;
                                    }
                                }
                                # 1580 "./comelang2.h"
                                # 1576 "./comelang2.h"
                                if(_if_conditional94=!same_key_exist_64,                                _if_conditional94) {
                                    # 1577 "./comelang2.h"
                                    list$1charp_push_back(self->key_list,key);
                                }
                                # 1580 "./comelang2.h"
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
void* right_value30;
char** keys_36;
void* right_value31;
struct sVar** items_37;
void* right_value32;
_Bool* item_existance_38;
int len_39;
char* it_40;
_Bool _for_condtionalA5;
struct sVar* default_value_41;
struct sVar* it2_42;
unsigned int hash_43;
int n_44;
_Bool _while_condtional7;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
struct sVar* default_value_45;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_35, 0, sizeof(int));
memset(&right_value30, 0, sizeof(void*));
memset(&keys_36, 0, sizeof(char**));
memset(&right_value31, 0, sizeof(void*));
memset(&items_37, 0, sizeof(struct sVar**));
memset(&right_value32, 0, sizeof(void*));
memset(&item_existance_38, 0, sizeof(_Bool*));
memset(&len_39, 0, sizeof(int));
memset(&it_40, 0, sizeof(char*));
memset(&default_value_41, 0, sizeof(struct sVar*));
memset(&it2_42, 0, sizeof(struct sVar*));
memset(&hash_43, 0, sizeof(unsigned int));
memset(&n_44, 0, sizeof(int));
memset(&default_value_45, 0, sizeof(struct sVar*));
                                        # 1376 "./comelang2.h"
                                        size_35=self->size*10;
                                        # 1377 "./comelang2.h"
                                        keys_36=(char**)come_increment_ref_count(((char**)(right_value30=(char**)come_calloc(1, sizeof(char*)*(1*(size_35)), "./comelang2.h", 1377))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
                                        if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { right_value30 = come_decrement_ref_count(right_value30, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value30;
                                        __freed_obj__ = 0;
                                        # 1378 "./comelang2.h"
                                        items_37=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value31=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_35)), "./comelang2.h", 1378))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value31);
                                        if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[1] = right_value31;
                                        __freed_obj__ = 0;
                                        # 1379 "./comelang2.h"
                                        item_existance_38=(_Bool*)come_increment_ref_count(((_Bool*)(right_value32=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_35)), "./comelang2.h", 1379))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value32);
                                        if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { right_value32 = come_decrement_ref_count(right_value32, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[2] = right_value32;
                                        __freed_obj__ = 0;
                                        # 1381 "./comelang2.h"
                                        len_39=0;
                                        # 1416 "./comelang2.h"
                                        for(
                                        it_40=map$2charphsVarph_begin(self) ,                                        0;                                        _for_condtionalA5=                                        !map$2charphsVarph_end(self) ,                                        _for_condtionalA5;                                        it_40=map$2charphsVarph_next(self) ,                                        0                                        ){
                                            # 1384 "./comelang2.h"
                                            # 1385 "./comelang2.h"
                                            memset(&default_value_41,0,sizeof(struct sVar*));
                                            # 1386 "./comelang2.h"
                                            it2_42=map$2charphsVarph_at(self,it_40,default_value_41);
                                            # 1387 "./comelang2.h"
                                            hash_43=string_get_hash_key(it_40)%size_35;
                                            # 1388 "./comelang2.h"
                                            n_44=hash_43;
                                            # 1414 "./comelang2.h"
                                            while(_while_condtional7=(_Bool)1,                                            _while_condtional7) {
                                                # 1413 "./comelang2.h"
                                                # 1391 "./comelang2.h"
                                                if(_if_conditional59=item_existance_38[n_44],                                                _if_conditional59) {
                                                    # 1393 "./comelang2.h"
                                                    n_44++;
                                                    # 1403 "./comelang2.h"
                                                    # 1395 "./comelang2.h"
                                                    if(_if_conditional60=n_44>=size_35,                                                    _if_conditional60) {
                                                        # 1396 "./comelang2.h"
                                                        n_44=0;
                                                    }
                                                    else {
                                                        # 1403 "./comelang2.h"
                                                        # 1398 "./comelang2.h"
                                                        if(_if_conditional61=n_44==hash_43,                                                        _if_conditional61) {
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
                                                    item_existance_38[n_44]=(_Bool)1;
                                                    # 1406 "./comelang2.h"
                                                    keys_36[n_44]=it_40;
                                                    # 1407 "./comelang2.h"
                                                    # 1408 "./comelang2.h"
                                                    items_37[n_44]=map$2charphsVarph_at(self,it_40,default_value_45);
                                                    # 1410 "./comelang2.h"
                                                    len_39++;
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
                                        self->keys=keys_36;
                                        # 1421 "./comelang2.h"
                                        self->items=items_37;
                                        # 1422 "./comelang2.h"
                                        self->item_existance=item_existance_38;
                                        # 1424 "./comelang2.h"
                                        self->size=size_35;
                                        # 1425 "./comelang2.h"
                                        self->len=len_39;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int it2_48;
struct list_item$1charp* it_49;
_Bool _while_condtional9;
void* right_value34;
_Bool _if_conditional65;
struct list$1charp* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_48, 0, sizeof(int));
memset(&it_49, 0, sizeof(struct list_item$1charp*));
memset(&right_value34, 0, sizeof(void*));
                                                    # 498 "./comelang2.h"
                                                    it2_48=0;
                                                    # 499 "./comelang2.h"
                                                    it_49=self->head;
                                                    # 510 "./comelang2.h"
                                                    while(_while_condtional9=it_49!=((void*)0),                                                    _while_condtional9) {
                                                        # 505 "./comelang2.h"
                                                        # 501 "./comelang2.h"
                                                        if(_if_conditional65=optional$2boolbool_value(((struct optional$2boolbool*)(right_value34=string_equals(it_49->item,item)))),                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34),
                                                        (right_value34 && right_value34 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                        __right_value_freed_obj[0] = right_value34, 
                                                        __freed_obj__ = 0, 
                                                        _if_conditional65) {
                                                            # 502 "./comelang2.h"
                                                            list$1charp_delete(self,it2_48,it2_48+1);
                                                            # 503 "./comelang2.h"
                                                            break;
                                                        }
                                                        # 505 "./comelang2.h"
                                                        it2_48++;
                                                        # 507 "./comelang2.h"
                                                        it_49=it_49->next;
                                                    }
                                                    # 510 "./comelang2.h"
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
                                                                # 517 "./comelang2.h"
                                                                # 514 "./comelang2.h"
                                                                if(_if_conditional66=head<0,                                                                _if_conditional66) {
                                                                    # 515 "./comelang2.h"
                                                                    head+=self->len;
                                                                }
                                                                # 521 "./comelang2.h"
                                                                # 517 "./comelang2.h"
                                                                if(_if_conditional67=tail<0,                                                                _if_conditional67) {
                                                                    # 518 "./comelang2.h"
                                                                    tail+=self->len+1;
                                                                }
                                                                # 527 "./comelang2.h"
                                                                # 521 "./comelang2.h"
                                                                if(_if_conditional68=head>tail,                                                                _if_conditional68) {
                                                                    # 522 "./comelang2.h"
                                                                    tmp_50=tail;
                                                                    # 523 "./comelang2.h"
                                                                    tail=head;
                                                                    # 524 "./comelang2.h"
                                                                    head=tmp_50;
                                                                }
                                                                # 531 "./comelang2.h"
                                                                # 527 "./comelang2.h"
                                                                if(_if_conditional69=head<0,                                                                _if_conditional69) {
                                                                    # 528 "./comelang2.h"
                                                                    head=0;
                                                                }
                                                                # 535 "./comelang2.h"
                                                                # 531 "./comelang2.h"
                                                                if(_if_conditional70=tail>self->len,                                                                _if_conditional70) {
                                                                    # 532 "./comelang2.h"
                                                                    tail=self->len;
                                                                }
                                                                # 539 "./comelang2.h"
                                                                # 535 "./comelang2.h"
                                                                if(_if_conditional71=head==tail,                                                                _if_conditional71) {
                                                                    # 536 "./comelang2.h"
                                                                    __result31__ = __result_obj__ = self;
                                                                    return __result31__;
                                                                }
                                                                # 634 "./comelang2.h"
                                                                # 539 "./comelang2.h"
                                                                if(_if_conditional72=head==0&&tail==self->len,                                                                _if_conditional72) {
                                                                    # 541 "./comelang2.h"
                                                                    list$1charp_reset(self);
                                                                }
                                                                else {
                                                                    # 634 "./comelang2.h"
                                                                    # 543 "./comelang2.h"
                                                                    if(_if_conditional73=head==0,                                                                    _if_conditional73) {
                                                                        # 544 "./comelang2.h"
                                                                        it_53=self->head;
                                                                        # 545 "./comelang2.h"
                                                                        i_54=0;
                                                                        # 567 "./comelang2.h"
                                                                        while(_while_condtional11=it_53!=((void*)0),                                                                        _while_condtional11) {
                                                                            # 566 "./comelang2.h"
                                                                            # 547 "./comelang2.h"
                                                                            if(_if_conditional74=i_54<tail,                                                                            _if_conditional74) {
                                                                                # 548 "./comelang2.h"
                                                                                prev_it_55=it_53;
                                                                                # 550 "./comelang2.h"
                                                                                it_53=it_53->next;
                                                                                # 551 "./comelang2.h"
                                                                                i_54++;
                                                                                # 553 "./comelang2.h"
                                                                                if(prev_it_55 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_55, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                # 555 "./comelang2.h"
                                                                                self->len--;
                                                                            }
                                                                            else {
                                                                                # 566 "./comelang2.h"
                                                                                # 557 "./comelang2.h"
                                                                                if(_if_conditional75=i_54==tail,                                                                                _if_conditional75) {
                                                                                    # 558 "./comelang2.h"
                                                                                    self->head=it_53;
                                                                                    # 559 "./comelang2.h"
                                                                                    self->head->prev=((void*)0);
                                                                                    # 560 "./comelang2.h"
                                                                                    break;
                                                                                }
                                                                                else {
                                                                                    # 563 "./comelang2.h"
                                                                                    it_53=it_53->next;
                                                                                    # 564 "./comelang2.h"
                                                                                    i_54++;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                    else {
                                                                        # 634 "./comelang2.h"
                                                                        # 568 "./comelang2.h"
                                                                        if(_if_conditional76=tail==self->len,                                                                        _if_conditional76) {
                                                                            # 569 "./comelang2.h"
                                                                            it_56=self->head;
                                                                            # 570 "./comelang2.h"
                                                                            i_57=0;
                                                                            # 592 "./comelang2.h"
                                                                            while(_while_condtional12=it_56!=((void*)0),                                                                            _while_condtional12) {
                                                                                # 577 "./comelang2.h"
                                                                                # 572 "./comelang2.h"
                                                                                if(_if_conditional77=i_57==head,                                                                                _if_conditional77) {
                                                                                    # 573 "./comelang2.h"
                                                                                    self->tail=it_56->prev;
                                                                                    # 574 "./comelang2.h"
                                                                                    self->tail->next=((void*)0);
                                                                                }
                                                                                # 591 "./comelang2.h"
                                                                                # 577 "./comelang2.h"
                                                                                if(_if_conditional78=i_57>=head,                                                                                _if_conditional78) {
                                                                                    # 578 "./comelang2.h"
                                                                                    prev_it_58=it_56;
                                                                                    # 580 "./comelang2.h"
                                                                                    it_56=it_56->next;
                                                                                    # 581 "./comelang2.h"
                                                                                    i_57++;
                                                                                    # 583 "./comelang2.h"
                                                                                    if(prev_it_58 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_58, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                    # 585 "./comelang2.h"
                                                                                    self->len--;
                                                                                }
                                                                                else {
                                                                                    # 588 "./comelang2.h"
                                                                                    it_56=it_56->next;
                                                                                    # 589 "./comelang2.h"
                                                                                    i_57++;
                                                                                }
                                                                            }
                                                                        }
                                                                        else {
                                                                            # 594 "./comelang2.h"
                                                                            it_59=self->head;
                                                                            # 596 "./comelang2.h"
                                                                            head_prev_it_60=((void*)0);
                                                                            # 597 "./comelang2.h"
                                                                            tail_it_61=((void*)0);
                                                                            # 600 "./comelang2.h"
                                                                            i_62=0;
                                                                            # 626 "./comelang2.h"
                                                                            while(_while_condtional13=it_59!=((void*)0),                                                                            _while_condtional13) {
                                                                                # 605 "./comelang2.h"
                                                                                # 602 "./comelang2.h"
                                                                                if(_if_conditional79=i_62==head,                                                                                _if_conditional79) {
                                                                                    # 603 "./comelang2.h"
                                                                                    head_prev_it_60=it_59->prev;
                                                                                }
                                                                                # 609 "./comelang2.h"
                                                                                # 605 "./comelang2.h"
                                                                                if(_if_conditional80=i_62==tail,                                                                                _if_conditional80) {
                                                                                    # 606 "./comelang2.h"
                                                                                    tail_it_61=it_59;
                                                                                }
                                                                                # 624 "./comelang2.h"
                                                                                # 609 "./comelang2.h"
                                                                                if(_if_conditional81=i_62>=head&&i_62<tail,                                                                                _if_conditional81) {
                                                                                    # 611 "./comelang2.h"
                                                                                    prev_it_63=it_59;
                                                                                    # 613 "./comelang2.h"
                                                                                    it_59=it_59->next;
                                                                                    # 614 "./comelang2.h"
                                                                                    i_62++;
                                                                                    # 616 "./comelang2.h"
                                                                                    if(prev_it_63 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_63, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                    # 618 "./comelang2.h"
                                                                                    self->len--;
                                                                                }
                                                                                else {
                                                                                    # 621 "./comelang2.h"
                                                                                    it_59=it_59->next;
                                                                                    # 622 "./comelang2.h"
                                                                                    i_62++;
                                                                                }
                                                                            }
                                                                            # 629 "./comelang2.h"
                                                                            # 626 "./comelang2.h"
                                                                            if(_if_conditional82=head_prev_it_60!=((void*)0),                                                                            _if_conditional82) {
                                                                                # 627 "./comelang2.h"
                                                                                head_prev_it_60->next=tail_it_61;
                                                                            }
                                                                            # 632 "./comelang2.h"
                                                                            # 629 "./comelang2.h"
                                                                            if(_if_conditional83=tail_it_61!=((void*)0),                                                                            _if_conditional83) {
                                                                                # 630 "./comelang2.h"
                                                                                tail_it_61->prev=head_prev_it_60;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                # 634 "./comelang2.h"
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
                                                                        # 483 "./comelang2.h"
                                                                        it_51=self->head;
                                                                        # 490 "./comelang2.h"
                                                                        while(_while_condtional10=it_51!=((void*)0),                                                                        _while_condtional10) {
                                                                            # 485 "./comelang2.h"
                                                                            prev_it_52=it_51;
                                                                            # 486 "./comelang2.h"
                                                                            it_51=it_51->next;
                                                                            # 487 "./comelang2.h"
                                                                            if(prev_it_52 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_52, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                        }
                                                                        # 490 "./comelang2.h"
                                                                        self->head=((void*)0);
                                                                        # 491 "./comelang2.h"
                                                                        self->tail=((void*)0);
                                                                        # 493 "./comelang2.h"
                                                                        self->len=0;
                                                                        # 495 "./comelang2.h"
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
                                    # 343 "./comelang2.h"
                                    # 338 "./comelang2.h"
                                    if(_if_conditional89=self==((void*)0),                                    _if_conditional89) {
                                        # 339 "./comelang2.h"
                                        # 340 "./comelang2.h"
                                        memset(&result_65,0,sizeof(char*));
                                        # 341 "./comelang2.h"
                                        __result35__ = __result_obj__ = result_65;
                                        return __result35__;
                                    }
                                    # 343 "./comelang2.h"
                                    self->it=self->head;
                                    # 349 "./comelang2.h"
                                    # 345 "./comelang2.h"
                                    if(_if_conditional90=self->it,                                    _if_conditional90) {
                                        # 346 "./comelang2.h"
                                        __result36__ = __result_obj__ = self->it->item;
                                        return __result36__;
                                    }
                                    # 349 "./comelang2.h"
                                    # 350 "./comelang2.h"
                                    memset(&result_66,0,sizeof(char*));
                                    # 351 "./comelang2.h"
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
                                    # 373 "./comelang2.h"
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
                                    # 361 "./comelang2.h"
                                    # 355 "./comelang2.h"
                                    if(_if_conditional91=self==((void*)0)||self->it==((void*)0),                                    _if_conditional91) {
                                        # 356 "./comelang2.h"
                                        # 357 "./comelang2.h"
                                        memset(&result_68,0,sizeof(char*));
                                        # 358 "./comelang2.h"
                                        __result39__ = __result_obj__ = result_68;
                                        return __result39__;
                                    }
                                    # 361 "./comelang2.h"
                                    self->it=self->it->next;
                                    # 367 "./comelang2.h"
                                    # 363 "./comelang2.h"
                                    if(_if_conditional92=self->it,                                    _if_conditional92) {
                                        # 364 "./comelang2.h"
                                        __result40__ = __result_obj__ = self->it->item;
                                        return __result40__;
                                    }
                                    # 367 "./comelang2.h"
                                    # 368 "./comelang2.h"
                                    memset(&result_69,0,sizeof(char*));
                                    # 369 "./comelang2.h"
                                    __result41__ = __result_obj__ = result_69;
                                    return __result41__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional95;
void* right_value36;
struct list_item$1charp* litem_70;
_Bool _if_conditional96;
void* right_value37;
struct list_item$1charp* litem_71;
void* right_value38;
struct list_item$1charp* litem_72;
struct list$1charp* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value36, 0, sizeof(void*));
memset(&litem_70, 0, sizeof(struct list_item$1charp*));
memset(&right_value37, 0, sizeof(void*));
memset(&litem_71, 0, sizeof(struct list_item$1charp*));
memset(&right_value38, 0, sizeof(void*));
memset(&litem_72, 0, sizeof(struct list_item$1charp*));
                                        # 309 "./comelang2.h"
                                        # 278 "./comelang2.h"
                                        if(_if_conditional95=self->len==0,                                        _if_conditional95) {
                                            # 279 "./comelang2.h"
                                            litem_70=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value36=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 279))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
                                            if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value36;
                                            __freed_obj__ = 0;
                                            # 281 "./comelang2.h"
                                            litem_70->prev=((void*)0);
                                            # 282 "./comelang2.h"
                                            litem_70->next=((void*)0);
                                            # 283 "./comelang2.h"
                                            litem_70->item=item;
                                            # 285 "./comelang2.h"
                                            self->tail=litem_70;
                                            # 286 "./comelang2.h"
                                            self->head=litem_70;
                                        }
                                        else {
                                            # 309 "./comelang2.h"
                                            # 288 "./comelang2.h"
                                            if(_if_conditional96=self->len==1,                                            _if_conditional96) {
                                                # 289 "./comelang2.h"
                                                litem_71=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value37=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 289))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
                                                if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value37;
                                                __freed_obj__ = 0;
                                                # 291 "./comelang2.h"
                                                litem_71->prev=self->head;
                                                # 292 "./comelang2.h"
                                                litem_71->next=((void*)0);
                                                # 293 "./comelang2.h"
                                                litem_71->item=item;
                                                # 295 "./comelang2.h"
                                                self->tail=litem_71;
                                                # 296 "./comelang2.h"
                                                self->head->next=litem_71;
                                            }
                                            else {
                                                # 299 "./comelang2.h"
                                                litem_72=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value38=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 299))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
                                                if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value38;
                                                __freed_obj__ = 0;
                                                # 301 "./comelang2.h"
                                                litem_72->prev=self->tail;
                                                # 302 "./comelang2.h"
                                                litem_72->next=((void*)0);
                                                # 303 "./comelang2.h"
                                                litem_72->item=item;
                                                # 305 "./comelang2.h"
                                                self->tail->next=litem_72;
                                                # 306 "./comelang2.h"
                                                self->tail=litem_72;
                                            }
                                        }
                                        # 309 "./comelang2.h"
                                        self->len++;
                                        # 311 "./comelang2.h"
                                        __result42__ = __result_obj__ = self;
                                        return __result42__;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional97;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        # 1 "map$2charphsVarph_finalize"
                        # 0 "map$2charphsVarph_finalize"
                        if(_if_conditional97=self!=((void*)0)&&self->key_list!=((void*)0),                        _if_conditional97) {
                            # 0 "map$2charphsVarph_finalize"
                            if(self->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

_Bool sDoWhileNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 26 "10do_while.c"
    __result48__ = (_Bool)1;
    return __result48__;
}

char* sDoWhileNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value42;
char* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value42, 0, sizeof(void*));
    # 31 "10do_while.c"
    __result49__ = __result_obj__ = ((char*)(right_value42=__builtin_string("sDoWhileNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
    if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value42;
    __freed_obj__ = 0;
    return __result49__;
}

_Bool sDoWhileNode_compile(struct sDoWhileNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool in_loop_73;
struct sBlock* block_74;
struct sNode* expression_node_75;
_Bool _if_conditional104;
_Bool __result50__;
void* right_value43;
struct CVALUE* conditional_value_76;
static int num_while_condtional_77=0;
int num_while_conditional_stack_78;
_Bool __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&in_loop_73, 0, sizeof(_Bool));
memset(&block_74, 0, sizeof(struct sBlock*));
memset(&expression_node_75, 0, sizeof(struct sNode*));
memset(&right_value43, 0, sizeof(void*));
memset(&conditional_value_76, 0, sizeof(struct CVALUE*));
memset(&num_while_conditional_stack_78, 0, sizeof(int));
    # 36 "10do_while.c"
    in_loop_73=info->in_loop;
    # 37 "10do_while.c"
    info->in_loop=(_Bool)1;
    # 39 "10do_while.c"
    block_74=self->mBlock;
    # 41 "10do_while.c"
    add_come_code(info,"do {\n");
    # 43 "10do_while.c"
    transpile_block(block_74,((void*)0),((void*)0),info,(_Bool)0,(_Bool)1);
    # 46 "10do_while.c"
    expression_node_75=self->mExpressionNode;
    # 48 "10do_while.c"
    info->writing_source_file_position=(_Bool)1;
    # 49 "10do_while.c"
    info->without_semicolon=(_Bool)1;
    # 53 "10do_while.c"
    # 50 "10do_while.c"
    if(_if_conditional104=!node_compile(expression_node_75,info),    _if_conditional104) {
        # 51 "10do_while.c"
        __result50__ = (_Bool)0;
        return __result50__;
    }
    # 53 "10do_while.c"
    info->without_semicolon=(_Bool)0;
    # 55 "10do_while.c"
    conditional_value_76=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value43=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
    if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value43;
    __freed_obj__ = 0;
    # 56 "10do_while.c"
    dec_stack_ptr(1,info);
    # 58 "10do_while.c"
    # 59 "10do_while.c"
    add_come_code_at_function_head(info,"_Bool _do_while_condtional%d;\n",++num_while_condtional_77);
    # 60 "10do_while.c"
    num_while_conditional_stack_78=num_while_condtional_77;
    # 62 "10do_while.c"
    add_come_code(info,"} while(_do_while_condtional%d=%s,",num_while_condtional_77,conditional_value_76->c_value);
    # 63 "10do_while.c"
    add_last_code_to_source_with_comma(info);
    # 64 "10do_while.c"
    free_right_value_objects(info,(_Bool)1);
    # 65 "10do_while.c"
    add_come_code(info,"_do_while_condtional%d);\n",num_while_conditional_stack_78);
    # 67 "10do_while.c"
    transpiler_clear_last_code(info);
    # 69 "10do_while.c"
    info->in_loop=in_loop_73;
    # 71 "10do_while.c"
    __result51__ = (_Bool)1;
    if(conditional_value_76 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,conditional_value_76, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result51__;
    if(conditional_value_76 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,conditional_value_76, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional105;
_Bool _if_conditional106;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        # 1 "CVALUE_finalize"
        # 0 "CVALUE_finalize"
        if(_if_conditional105=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional105) {
            # 0 "CVALUE_finalize"
            if(self->c_value && !__freed_obj__) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, 0); }
        }
        # 2 "CVALUE_finalize"
        # 1 "CVALUE_finalize"
        if(_if_conditional106=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional106) {
            # 1 "CVALUE_finalize"
            if(self->type && !__freed_obj__) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}

int sDoWhileNode_sline(struct sDoWhileNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 76 "10do_while.c"
    __result52__ = self->sline;
    return __result52__;
}

char* sDoWhileNode_sname(struct sDoWhileNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value44;
char* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value44, 0, sizeof(void*));
    # 81 "10do_while.c"
    __result53__ = __result_obj__ = ((char*)(right_value44=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
    if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { right_value44 = come_decrement_ref_count(right_value44, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value44;
    __freed_obj__ = 0;
    return __result53__;
}

struct sNode* string_node_v10(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional107;
void* right_value45;
char* sname_79;
int sline_80;
void* right_value46;
struct sBlock* block_81;
void* right_value47;
char* buf2_83;
_Bool _if_conditional110;
void* right_value48;
void* right_value49;
struct sNode* expression_node_85;
void* right_value50;
void* right_value51;
void* right_value52;
struct sNode* _inf_value1;
struct sDoWhileNode* _inf_obj_value1;
void* right_value57;
void* right_value58;
void* right_value59;
struct sNode* __result61__;
void* right_value60;
struct __current_stack1__ __current_stack1__;
void* right_value63;
struct sNode* result_87;
void* right_value64;
void* right_value65;
struct sNode* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value45, 0, sizeof(void*));
memset(&sname_79, 0, sizeof(char*));
memset(&sline_80, 0, sizeof(int));
memset(&right_value46, 0, sizeof(void*));
memset(&block_81, 0, sizeof(struct sBlock*));
memset(&right_value47, 0, sizeof(void*));
memset(&buf2_83, 0, sizeof(char*));
memset(&right_value48, 0, sizeof(void*));
memset(&right_value49, 0, sizeof(void*));
memset(&expression_node_85, 0, sizeof(struct sNode*));
memset(&right_value50, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
memset(&right_value63, 0, sizeof(void*));
memset(&result_87, 0, sizeof(struct sNode*));
memset(&right_value64, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
    # 109 "10do_while.c"
    # 86 "10do_while.c"
    if(_if_conditional107=charp_operator_equals(buf,"do"),    _if_conditional107) {
        # 87 "10do_while.c"
        sname_79=(char*)come_increment_ref_count(((char*)(right_value45=string_clone(info->sname))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
        if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value45;
        __freed_obj__ = 0;
        # 88 "10do_while.c"
        sline_80=info->sline;
        # 90 "10do_while.c"
        block_81=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value46=parse_block(info,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value46);
        if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value46;
        __freed_obj__ = 0;
        # 92 "10do_while.c"
        buf2_83=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value47=parse_word(info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value47);
        if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value47;
        __freed_obj__ = 0;
        # 99 "10do_while.c"
        # 94 "10do_while.c"
        if(_if_conditional110=string_operator_not_equals(buf2_83,"while"),        _if_conditional110) {
            # 95 "10do_while.c"
            err_msg(info,"require while");
            # 96 "10do_while.c"
            exit(2);
        }
        # 99 "10do_while.c"
        optional$2intbool_value(((struct optional$2intbool*)(right_value48=expected_next_character(40,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value48);
        if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value48;
        __freed_obj__ = 0;
        # 102 "10do_while.c"
        expression_node_85=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value49=expression_v13(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value49);
        if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { right_value49 = come_decrement_ref_count(right_value49, ((struct sNode*)right_value49)->finalize, ((struct sNode*)right_value49)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[4] = right_value49;
        __freed_obj__ = 0;
        # 104 "10do_while.c"
        optional$2intbool_value(((struct optional$2intbool*)(right_value50=expected_next_character(41,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value50);
        if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value50;
        __freed_obj__ = 0;
        # 106 "10do_while.c"
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "10do_while.c", 106);
        _inf_obj_value1=come_increment_ref_count(((struct sDoWhileNode*)(right_value52=sDoWhileNode_initialize((struct sDoWhileNode*)come_increment_ref_count(((struct sDoWhileNode*)(right_value51=(struct sDoWhileNode*)come_calloc(1, sizeof(struct sDoWhileNode)*(1), "10do_while.c", 106)))),(struct sNode*)come_increment_ref_count(expression_node_85),block_81,info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sDoWhileNode_finalize;
        _inf_value1->clone=(void*)sDoWhileNode_clone;
        _inf_value1->compile=(void*)sDoWhileNode_compile;
        _inf_value1->sline=(void*)sDoWhileNode_sline;
        _inf_value1->sname=(void*)sDoWhileNode_sname;
        _inf_value1->terminated=(void*)sDoWhileNode_terminated;
        _inf_value1->kind=(void*)sDoWhileNode_kind;
        __result61__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value59=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value58=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "10do_while.c", 106)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value57=_inf_value1))),(_Bool)1)));
        if(sname_79 && !__freed_obj__) { sname_79 = come_decrement_ref_count(sname_79, (void*)0, (void*)0, 0, 0, 0); }
        if(block_81 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,block_81, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf2_83 && !__freed_obj__) { buf2_83 = come_decrement_ref_count(buf2_83, (void*)0, (void*)0, 0, 0, 0); }
        if(expression_node_85 && !__freed_obj__) { expression_node_85 = come_decrement_ref_count(expression_node_85, ((struct sNode*)expression_node_85)->finalize, ((struct sNode*)expression_node_85)->_protocol_obj, 0, 0, 0); } 
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value51);
        if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDoWhileNode_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value51;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value52);
        if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDoWhileNode_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value52;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value57);
        if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { right_value57 = come_decrement_ref_count(right_value57, ((struct sNode*)right_value57)->finalize, ((struct sNode*)right_value57)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[8] = right_value57;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value58);
        if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[9] = right_value58;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value59);
        if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[10] = right_value59;
        __freed_obj__ = 0;
        return __result61__;
        if(sname_79 && !__freed_obj__) { sname_79 = come_decrement_ref_count(sname_79, (void*)0, (void*)0, 0, 0, 0); }
        if(block_81 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,block_81, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf2_83 && !__freed_obj__) { buf2_83 = come_decrement_ref_count(buf2_83, (void*)0, (void*)0, 0, 0, 0); }
        if(expression_node_85 && !__freed_obj__) { expression_node_85 = come_decrement_ref_count(expression_node_85, ((struct sNode*)expression_node_85)->finalize, ((struct sNode*)expression_node_85)->_protocol_obj, 0, 0, 0); } 
    }
    # 113 "10do_while.c"
    __current_stack1__.buf = &buf;
    __current_stack1__.head = &head;
    __current_stack1__.head_sline = &head_sline;
    __current_stack1__.info = &info;
    result_87=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value63=optional$2sNodephbool_catch(((struct optional$2sNodephbool*)(right_value60=string_node_v9(buf,head,head_sline,info))),&__current_stack1__,(void*)method_block1_10dowhilec))));
                        if(__current_stack1__.__method_block_result_kind__ == 3)
                    {
                        return (struct sNode*)__current_stack1__.__method_block_return_value__;
                    }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value60);
    if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value60;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value63);
    if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { right_value63 = come_decrement_ref_count(right_value63, ((struct sNode*)right_value63)->finalize, ((struct sNode*)right_value63)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value63;
    __freed_obj__ = 0;
    # 113 "10do_while.c"
    __result65__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value65=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value64=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "10do_while.c", 113)))),(struct sNode*)come_increment_ref_count(result_87),(_Bool)1)));
    if(result_87 && !__freed_obj__) { result_87 = come_decrement_ref_count(result_87, ((struct sNode*)result_87)->finalize, ((struct sNode*)result_87)->_protocol_obj, 0, 0, 0); } 
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value64);
    if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { right_value64 = come_decrement_ref_count(right_value64, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value64;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value65);
    if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value65;
    __freed_obj__ = 0;
    return __result65__;
    if(result_87 && !__freed_obj__) { result_87 = come_decrement_ref_count(result_87, ((struct sNode*)result_87)->finalize, ((struct sNode*)result_87)->_protocol_obj, 0, 0, 0); } 
}

static char* optional$2charphbool_value(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional108;
char* default_value_82;
char* __result54__;
char* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_82, 0, sizeof(char*));
            # 69 "./comelang2.h"
            # 61 "./comelang2.h"
            if(_if_conditional108=self==((void*)0),            _if_conditional108) {
                # 62 "./comelang2.h"
                # 63 "./comelang2.h"
                memset(&default_value_82,0,sizeof(char*));
                # 64 "./comelang2.h"
                __result54__ = __result_obj__ = default_value_82;
                return __result54__;
            }
            else {
                # 67 "./comelang2.h"
                __result55__ = __result_obj__ = self->v1;
                return __result55__;
            }
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional109;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            # 1 "optional$2charphboolp_finalize"
            # 0 "optional$2charphboolp_finalize"
            if(_if_conditional109=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional109) {
                # 0 "optional$2charphboolp_finalize"
                if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static int optional$2intbool_value(struct optional$2intbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional111;
int default_value_84;
int __result56__;
int __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_84, 0, sizeof(int));
            # 69 "./comelang2.h"
            # 61 "./comelang2.h"
            if(_if_conditional111=self==((void*)0),            _if_conditional111) {
                # 62 "./comelang2.h"
                # 63 "./comelang2.h"
                memset(&default_value_84,0,sizeof(int));
                # 64 "./comelang2.h"
                __result56__ = default_value_84;
                return __result56__;
            }
            else {
                # 67 "./comelang2.h"
                __result57__ = self->v1;
                return __result57__;
            }
}

static void optional$2intboolp_finalize(struct optional$2intbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void sDoWhileNode_finalize(struct sDoWhileNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            # 1 "sDoWhileNode_finalize"
            # 0 "sDoWhileNode_finalize"
            if(_if_conditional112=self!=((void*)0)&&self->mExpressionNode!=((void*)0),            _if_conditional112) {
                # 0 "sDoWhileNode_finalize"
                if(self->mExpressionNode && !__freed_obj__) { self->mExpressionNode = come_decrement_ref_count(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0, 0); } 
            }
            # 2 "sDoWhileNode_finalize"
            # 1 "sDoWhileNode_finalize"
            if(_if_conditional113=self!=((void*)0)&&self->mBlock!=((void*)0),            _if_conditional113) {
                # 1 "sDoWhileNode_finalize"
                if(self->mBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            # 3 "sDoWhileNode_finalize"
            # 2 "sDoWhileNode_finalize"
            if(_if_conditional114=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional114) {
                # 2 "sDoWhileNode_finalize"
                if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static struct sDoWhileNode* sDoWhileNode_clone(struct sDoWhileNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional115;
struct sDoWhileNode* __result58__;
void* right_value53;
struct sDoWhileNode* result_86;
_Bool _if_conditional116;
void* right_value54;
struct sNode* __dec_obj16;
_Bool _if_conditional117;
void* right_value55;
struct sBlock* __dec_obj17;
_Bool _if_conditional118;
_Bool _if_conditional119;
void* right_value56;
char* __dec_obj18;
struct sDoWhileNode* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value53, 0, sizeof(void*));
memset(&result_86, 0, sizeof(struct sDoWhileNode*));
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
            # 3 "sDoWhileNode_clone"
            # 2 "sDoWhileNode_clone"
            if(_if_conditional115=self==(void*)0,            _if_conditional115) {
                # 2 "sDoWhileNode_clone"
                __result58__ = __result_obj__ = (void*)0;
                return __result58__;
            }
            # 3 "sDoWhileNode_clone"
            result_86=(struct sDoWhileNode*)come_increment_ref_count(((struct sDoWhileNode*)(right_value53=(struct sDoWhileNode*)come_calloc(1, sizeof(struct sDoWhileNode)*(1), "sDoWhileNode_clone", 3))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
            if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDoWhileNode_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value53;
            __freed_obj__ = 0;
            # 5 "sDoWhileNode_clone"
            # 4 "sDoWhileNode_clone"
            if(_if_conditional116=self!=((void*)0)&&self->mExpressionNode!=((void*)0),            _if_conditional116) {
                # 4 "sDoWhileNode_clone"
                __dec_obj16=result_86->mExpressionNode;
                result_86->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value54=sNode_clone(self->mExpressionNode))));
                if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
                if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { right_value54 = come_decrement_ref_count(right_value54, ((struct sNode*)right_value54)->finalize, ((struct sNode*)right_value54)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value54;
                __freed_obj__ = 0;
            }
            # 6 "sDoWhileNode_clone"
            # 5 "sDoWhileNode_clone"
            if(_if_conditional117=self!=((void*)0)&&self->mBlock!=((void*)0),            _if_conditional117) {
                # 5 "sDoWhileNode_clone"
                __dec_obj17=result_86->mBlock;
                result_86->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value55=sBlock_clone(self->mBlock))));
                if(__dec_obj17) { come_call_finalizer(sBlock_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
                if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value55;
                __freed_obj__ = 0;
            }
            # 7 "sDoWhileNode_clone"
            # 6 "sDoWhileNode_clone"
            if(_if_conditional118=self!=((void*)0),            _if_conditional118) {
                # 6 "sDoWhileNode_clone"
                result_86->sline=self->sline;
            }
            # 8 "sDoWhileNode_clone"
            # 7 "sDoWhileNode_clone"
            if(_if_conditional119=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional119) {
                # 7 "sDoWhileNode_clone"
                __dec_obj18=result_86->sname;
                result_86->sname=(char*)come_increment_ref_count(((char*)(right_value56=string_clone(self->sname))));
                if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
                if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { right_value56 = come_decrement_ref_count(right_value56, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value56;
                __freed_obj__ = 0;
            }
            # 8 "sDoWhileNode_clone"
            __result59__ = __result_obj__ = result_86;
            if(result_86 && !__freed_obj__) { come_call_finalizer(sDoWhileNode_finalize,result_86, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result59__;
            if(result_86 && !__freed_obj__) { come_call_finalizer(sDoWhileNode_finalize,result_86, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* __dec_obj19;
struct optional$2sNodephbool* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            # 40 "./comelang2.h"
            __dec_obj19=self->v1;
            self->v1=(struct sNode*)come_increment_ref_count(v1);
            if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0,0); }
            # 41 "./comelang2.h"
            self->v2=v2;
            # 43 "./comelang2.h"
            __result60__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
            return __result60__;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
}

static void optional$2sNodephboolp_finalize(struct optional$2sNodephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional120;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                # 1 "optional$2sNodephboolp_finalize"
                # 0 "optional$2sNodephboolp_finalize"
                if(_if_conditional120=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional120) {
                    # 0 "optional$2sNodephboolp_finalize"
                    if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, ((struct sNode*)self->v1)->finalize, ((struct sNode*)self->v1)->_protocol_obj, 0, 0, 0); } 
                }
}

static struct sNode* optional$2sNodephbool_catch(struct optional$2sNodephbool* self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional121;
_Bool _if_conditional122;
struct sNode* __result62__;
struct sNode* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        # 56 "./comelang2.h"
        # 48 "./comelang2.h"
        if(_if_conditional121=!self->v2,        _if_conditional121) {
            # 49 "./comelang2.h"
            block(parent);
            # 54 "./comelang2.h"
            # 51 "./comelang2.h"
            if(_if_conditional122=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional122) {
                # 52 "./comelang2.h"
                __result62__ = __result_obj__ = self->v1;
                return __result62__;
            }
        }
        # 56 "./comelang2.h"
        __result63__ = __result_obj__ = self->v1;
        return __result63__;
}

void method_block1_10dowhilec(struct __current_stack1__* parent){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value61;
void* right_value62;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value61, 0, sizeof(void*));
memset(&right_value62, 0, sizeof(void*));
        # 111 "10do_while.c"
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value61);
        if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { right_value61 = come_decrement_ref_count(right_value61, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value61;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value62);
        if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value62;
        __freed_obj__ = 0;
                    ((struct __current_stack1__*) parent)->__method_block_result_kind__ = 3;
            ((struct __current_stack1__*) parent)->__method_block_return_value__ = (struct optional$2voidpbool*)come_increment_ref_count(((struct optional$2voidpbool*)(right_value62=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value61=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "10do_while.c", 111))),((void*)0),(_Bool)0))));
        return;}

static struct optional$2voidpbool* optional$2voidpbool_initialize(struct optional$2voidpbool* self, void* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2voidpbool* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            # 40 "./comelang2.h"
            self->v1=v1;
            # 41 "./comelang2.h"
            self->v2=v2;
            # 43 "./comelang2.h"
            __result64__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result64__;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2voidpboolp_finalize(struct optional$2voidpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

