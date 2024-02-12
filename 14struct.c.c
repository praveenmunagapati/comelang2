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
struct optional$2sClassphbool
{
    struct sClass* v1;
    _Bool v2;
};
struct sStructNode
{
    char* mName;
    struct sClass* mClass;
    int sline;
    char* sname;
    _Bool mOutput;
};
struct sStructNobodyNode
{
    char* mName;
    struct sClass* mClass;
    int sline;
    char* sname;
};
struct sGenericsStructNode
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

char* get_none_generics_name(char* class_name);

char* create_generics_name(struct sType* generics_type, struct sInfo* info);

static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
void output_struct(struct sClass* klass, struct sInfo* info);

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
_Bool is_no_contained_generics_types(struct sType* type, struct sInfo* info);

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);

static _Bool map$2charphsClassph_find(struct map$2charphsClassph* self, char* key);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
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
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static struct optional$2sClassphbool* optional$2sClassphbool_initialize(struct optional$2sClassphbool* self, struct sClass* v1, _Bool v2);
static void optional$2sClassphboolp_finalize(struct optional$2sClassphbool* self);
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
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self);
struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, _Bool output, struct sInfo* info);

static struct sClass* sClass_clone(struct sClass* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
_Bool sStructNode_terminated();

char* sStructNode_kind();

_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info);

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item);
static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self);
static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self);
static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
int sStructNode_sline(struct sStructNode* self, struct sInfo* info);

char* sStructNode_sname(struct sStructNode* self, struct sInfo* info);

struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sClass* klass, struct sInfo* info);

_Bool sStructNobodyNode_terminated();

char* sStructNobodyNode_kind();

_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info);

int sStructNobodyNode_sline(struct sStructNobodyNode* self, struct sInfo* info);

char* sStructNobodyNode_sname(struct sStructNobodyNode* self, struct sInfo* info);

struct sGenericsStructNode* sGenericsStructNode_initialize(struct sGenericsStructNode* self, struct sInfo* info);

_Bool sGenericsStructNode_terminated();

char* sGenericsStructNode_kind();

_Bool sGenericsStructNode_compile(struct sGenericsStructNode* self, struct sInfo* info);

int sGenericsStructNode_sline(struct sGenericsStructNode* self, struct sInfo* info);

char* sGenericsStructNode_sname(struct sGenericsStructNode* self, struct sInfo* info);

struct sNode* parse_struct(char* type_name, struct sInfo* info);

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_reset(struct list$1tuple2$2charphsTypephph* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);

static void sStructNobodyNode_finalize(struct sStructNobodyNode* self);
static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self);
static struct list$1charph* list$1charph_reset(struct list$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static void sGenericsStructNode_finalize(struct sGenericsStructNode* self);
static struct sGenericsStructNode* sGenericsStructNode_clone(struct sGenericsStructNode* self);
static void sStructNode_finalize(struct sStructNode* self);
static struct sStructNode* sStructNode_clone(struct sStructNode* self);
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);

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
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2008, "struct smart_pointer$1char"))));
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
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2018, "struct smart_pointer$1char"))));
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
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2028, "struct smart_pointer$1short"))));
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
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2038, "struct smart_pointer$1int"))));
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
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2048, "struct smart_pointer$1long"))));
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

char* get_none_generics_name(char* class_name){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* p_5;
_Bool _while_condtional1;
_Bool _if_conditional5;
void* right_value10;
void* right_value11;
char* __result7__;
void* right_value12;
char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&p_5, 0, sizeof(char*));
memset(&right_value10, 0, sizeof(void*));
memset(&right_value11, 0, sizeof(void*));
memset(&right_value12, 0, sizeof(void*));
    p_5=class_name;
    while(_while_condtional1=*p_5,    _while_condtional1) {
        if(_if_conditional5=*p_5==36,        _if_conditional5) {
            __result7__ = __result_obj__ = ((char*)(right_value11=string_substring(((char*)(right_value10=__builtin_string(class_name))),0,p_5-class_name)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
            if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value10;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value11);
            if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { right_value11 = come_decrement_ref_count(right_value11, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value11;
            __freed_obj__ = 0;
            return __result7__;
        }
        else {
            p_5++;
        }
    }
    __result8__ = __result_obj__ = ((char*)(right_value12=__builtin_string(class_name)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { right_value12 = come_decrement_ref_count(right_value12, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value12;
    __freed_obj__ = 0;
    return __result8__;
}

char* create_generics_name(struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value13;
void* right_value14;
struct buffer* buf_6;
struct sClass* klass_7;
char* class_name_8;
_Bool _if_conditional6;
int i_9;
_Bool _for_condtionalA1;
void* right_value15;
struct sType* type_19;
void* right_value16;
char* type_name_20;
int i_21;
_Bool _for_condtionalA2;
_Bool _if_conditional25;
void* right_value17;
char* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value13, 0, sizeof(void*));
memset(&right_value14, 0, sizeof(void*));
memset(&buf_6, 0, sizeof(struct buffer*));
memset(&klass_7, 0, sizeof(struct sClass*));
memset(&class_name_8, 0, sizeof(char*));
memset(&i_9, 0, sizeof(int));
memset(&right_value15, 0, sizeof(void*));
memset(&type_19, 0, sizeof(struct sType*));
memset(&right_value16, 0, sizeof(void*));
memset(&type_name_20, 0, sizeof(char*));
memset(&i_21, 0, sizeof(int));
memset(&right_value17, 0, sizeof(void*));
    buf_6=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value14=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 20, "struct buffer"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value13);
    if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value13;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value14);
    if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value14;
    __freed_obj__ = 0;
    klass_7=generics_type->mClass;
    class_name_8=klass_7->mName;
    buffer_append_str(buf_6,class_name_8);
    if(_if_conditional6=list$1sTypeph_length(generics_type->mGenericsTypes)>0,    _if_conditional6) {
        buffer_append_char(buf_6,36);
        buffer_append_char(buf_6,list$1sTypeph_length(generics_type->mGenericsTypes)+48);
        for(
        i_9=0 ,        0;        _for_condtionalA1=        i_9<list$1sTypeph_length(generics_type->mGenericsTypes) ,        _for_condtionalA1;        i_9++ ,        0        ){
            type_19=((struct sType*)(right_value15=list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,i_9)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value15);
            if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value15;
            __freed_obj__ = 0;
            type_name_20=(char*)come_increment_ref_count(((char*)(right_value16=create_generics_name(type_19,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
            if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { right_value16 = come_decrement_ref_count(right_value16, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value16;
            __freed_obj__ = 0;
            buffer_append_str(buf_6,type_name_20);
            for(
            i_21=0 ,            0;            _for_condtionalA2=            i_21<type_19->mPointerNum ,            _for_condtionalA2;            i_21++ ,            0            ){
                buffer_append_char(buf_6,112);
            }
            if(_if_conditional25=type_19->mHeap,            _if_conditional25) {
                buffer_append_str(buf_6,"h");
            }
            if(type_name_20 && !__freed_obj__) { type_name_20 = come_decrement_ref_count(type_name_20, (void*)0, (void*)0, 0, 0, 0); }
        }
    }
    __result12__ = __result_obj__ = ((char*)(right_value17=buffer_to_string(buf_6)));
    if(buf_6 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_6, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value17);
    if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { right_value17 = come_decrement_ref_count(right_value17, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value17;
    __freed_obj__ = 0;
    return __result12__;
    if(buf_6 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_6, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result9__ = self->len;
        return __result9__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional7;
struct list_item$1sTypeph* it_10;
int i_11;
_Bool _while_condtional2;
_Bool _if_conditional8;
struct sType* __result10__;
struct sType* default_value_12;
struct sType* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_10, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_11, 0, sizeof(int));
memset(&default_value_12, 0, sizeof(struct sType*));
                if(_if_conditional7=position<0,                _if_conditional7) {
                    position+=self->len;
                }
                it_10=self->head;
                i_11=0;
                while(_while_condtional2=it_10!=((void*)0),                _while_condtional2) {
                    if(_if_conditional8=position==i_11,                    _if_conditional8) {
                        __result10__ = __result_obj__ = it_10->item;
                        return __result10__;
                    }
                    it_10=it_10->next;
                    i_11++;
                }
                memset(&default_value_12,0,sizeof(struct sType*));
                __result11__ = __result_obj__ = default_value_12;
                if(default_value_12 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_12, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result11__;
                if(default_value_12 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_12, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional9;
_Bool _if_conditional11;
_Bool _if_conditional12;
_Bool _if_conditional13;
_Bool _if_conditional15;
_Bool _if_conditional17;
_Bool _if_conditional18;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional9=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                    _if_conditional9) {
                        if(self->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional11=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                    _if_conditional11) {
                        if(self->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional12=self!=((void*)0)&&self->mGenericsName!=((void*)0),                    _if_conditional12) {
                        if(self->mGenericsName && !__freed_obj__) { self->mGenericsName = come_decrement_ref_count(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    if(_if_conditional13=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                    _if_conditional13) {
                        if(self->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional15=self!=((void*)0)&&self->mArrayNum!=((void*)0),                    _if_conditional15) {
                        if(self->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional17=self!=((void*)0)&&self->mParamTypes!=((void*)0),                    _if_conditional17) {
                        if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional18=self!=((void*)0)&&self->mParamNames!=((void*)0),                    _if_conditional18) {
                        if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional20=self!=((void*)0)&&self->mResultType!=((void*)0),                    _if_conditional20) {
                        if(self->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional21=self!=((void*)0)&&self->mAlignas!=((void*)0),                    _if_conditional21) {
                        if(self->mAlignas && !__freed_obj__) { self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional22=self!=((void*)0)&&self->mSizeNum!=((void*)0),                    _if_conditional22) {
                        if(self->mSizeNum && !__freed_obj__) { self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional23=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                    _if_conditional23) {
                        if(self->mOriginalTypeName && !__freed_obj__) { self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    if(_if_conditional24=self!=((void*)0)&&self->mAsmName!=((void*)0),                    _if_conditional24) {
                        if(self->mAsmName && !__freed_obj__) { self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional10;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional10=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional10) {
                                if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sTypeph* it_13;
_Bool _while_condtional3;
struct list_item$1sTypeph* prev_it_14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_13, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_14, 0, sizeof(struct list_item$1sTypeph*));
                            it_13=self->head;
                            while(_while_condtional3=it_13!=((void*)0),                            _while_condtional3) {
                                prev_it_14=it_13;
                                it_13=it_13->next;
                                if(prev_it_14 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_14, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional14=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional14) {
                                        if(self->item && !__freed_obj__) { come_call_finalizer(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_15;
_Bool _while_condtional4;
struct list_item$1sNodeph* prev_it_16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_15, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_16, 0, sizeof(struct list_item$1sNodeph*));
                            it_15=self->head;
                            while(_while_condtional4=it_15!=((void*)0),                            _while_condtional4) {
                                prev_it_16=it_15;
                                it_15=it_15->next;
                                if(prev_it_16 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_16, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional16=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional16) {
                                        if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0); } 
                                    }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_17;
_Bool _while_condtional5;
struct list_item$1charph* prev_it_18;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_17, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_18, 0, sizeof(struct list_item$1charph*));
                            it_17=self->head;
                            while(_while_condtional5=it_17!=((void*)0),                            _while_condtional5) {
                                prev_it_18=it_17;
                                it_17=it_17->next;
                                if(prev_it_18 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_18, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional19;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional19=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional19) {
                                        if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, 0); }
                                    }
}

void output_struct(struct sClass* klass, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional26;
void* right_value18;
void* right_value19;
struct buffer* buf_22;
void* right_value20;
struct list$1tuple2$2charphsTypephph* o2_saved_23;
struct tuple2$2charphsTypeph* it_26;
_Bool _for_condtionalA3;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* name_29;
struct sType* type_30;
void* right_value21;
_Bool _if_conditional34;
void* right_value22;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value18, 0, sizeof(void*));
memset(&right_value19, 0, sizeof(void*));
memset(&buf_22, 0, sizeof(struct buffer*));
memset(&right_value20, 0, sizeof(void*));
memset(&o2_saved_23, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_26, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_29, 0, sizeof(char*));
memset(&type_30, 0, sizeof(struct sType*));
memset(&name_29, 0, sizeof(char*));
memset(&type_30, 0, sizeof(struct sType*));
memset(&right_value21, 0, sizeof(void*));
memset(&right_value22, 0, sizeof(void*));
    if(_if_conditional26=!klass->mOutputed,    _if_conditional26) {
        klass->mOutputed=(_Bool)1;
        buf_22=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value19=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value18=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 61, "struct buffer"))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
        if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value18;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value19);
        if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value19;
        __freed_obj__ = 0;
        buffer_append_str(buf_22,((char*)(right_value20=xsprintf("struct %s\n{\n",klass->mName))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
        if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { right_value20 = come_decrement_ref_count(right_value20, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value20;
        __freed_obj__ = 0;
        for(
        o2_saved_23=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass->mFields)),it_26=list$1tuple2$2charphsTypephph_begin((o2_saved_23)) ,        0;        _for_condtionalA3=        !list$1tuple2$2charphsTypephph_end((o2_saved_23)) ,        _for_condtionalA3;        it_26=list$1tuple2$2charphsTypephph_next((o2_saved_23)) ,        0        ){
            multiple_assign_var1=it_26;
            name_29=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            type_30=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
            type_30->mStatic=(_Bool)0;
            buffer_append_str(buf_22,"    ");
            buffer_append_str(buf_22,((char*)(right_value21=make_define_var(type_30,name_29,(_Bool)0,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
            if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { right_value21 = come_decrement_ref_count(right_value21, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value21;
            __freed_obj__ = 0;
            buffer_append_str(buf_22,";\n");
            if(name_29 && !__freed_obj__) { name_29 = come_decrement_ref_count(name_29, (void*)0, (void*)0, 0, 0, 0); }
            if(type_30 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_30, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_23 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_23, (void*)0, (void*)0, 0, 0, 0, 0); }
        buffer_append_str(buf_22,"};\n");
        if(_if_conditional34=info->output_header_file&&string_operator_not_equals(klass->mDeclareSName,info->base_sname),        _if_conditional34) {
        }
        else {
            add_come_code_at_source_head(info,"%s",((char*)(right_value22=buffer_to_string(buf_22))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
            if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { right_value22 = come_decrement_ref_count(right_value22, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value22;
            __freed_obj__ = 0;
        }
        if(buf_22 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_22, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional27;
struct tuple2$2charphsTypeph* result_24;
struct tuple2$2charphsTypeph* __result13__;
_Bool _if_conditional28;
struct tuple2$2charphsTypeph* __result14__;
struct tuple2$2charphsTypeph* result_25;
struct tuple2$2charphsTypeph* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_24, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_25, 0, sizeof(struct tuple2$2charphsTypeph*));
            if(_if_conditional27=self==((void*)0),            _if_conditional27) {
                memset(&result_24,0,sizeof(struct tuple2$2charphsTypeph*));
                __result13__ = __result_obj__ = result_24;
                return __result13__;
            }
            self->it=self->head;
            if(_if_conditional28=self->it,            _if_conditional28) {
                __result14__ = __result_obj__ = self->it->item;
                return __result14__;
            }
            memset(&result_25,0,sizeof(struct tuple2$2charphsTypeph*));
            __result15__ = __result_obj__ = result_25;
            return __result15__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result16__ = self==((void*)0)||self->it==((void*)0);
            return __result16__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional29;
struct tuple2$2charphsTypeph* result_27;
struct tuple2$2charphsTypeph* __result17__;
_Bool _if_conditional30;
struct tuple2$2charphsTypeph* __result18__;
struct tuple2$2charphsTypeph* result_28;
struct tuple2$2charphsTypeph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_27, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_28, 0, sizeof(struct tuple2$2charphsTypeph*));
            if(_if_conditional29=self==((void*)0)||self->it==((void*)0),            _if_conditional29) {
                memset(&result_27,0,sizeof(struct tuple2$2charphsTypeph*));
                __result17__ = __result_obj__ = result_27;
                return __result17__;
            }
            self->it=self->it->next;
            if(_if_conditional30=self->it,            _if_conditional30) {
                __result18__ = __result_obj__ = self->it->item;
                return __result18__;
            }
            memset(&result_28,0,sizeof(struct tuple2$2charphsTypeph*));
            __result19__ = __result_obj__ = result_28;
            return __result19__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphsTypephph* it_31;
_Bool _while_condtional6;
struct list_item$1tuple2$2charphsTypephph* prev_it_32;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_31, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_32, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
            it_31=self->head;
            while(_while_condtional6=it_31!=((void*)0),            _while_condtional6) {
                prev_it_32=it_31;
                it_31=it_31->next;
                if(prev_it_32 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_32, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional31;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional31=self!=((void*)0)&&self->item!=((void*)0),                    _if_conditional31) {
                        if(self->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional32;
_Bool _if_conditional33;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional32=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional32) {
                                if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            if(_if_conditional33=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional33) {
                                if(self->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

_Bool is_no_contained_generics_types(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* klass_33;
_Bool _if_conditional35;
_Bool __result20__;
int i_34;
_Bool _for_condtionalA4;
void* right_value23;
_Bool result_35;
_Bool _if_conditional36;
_Bool __result21__;
_Bool __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&klass_33, 0, sizeof(struct sClass*));
memset(&i_34, 0, sizeof(int));
memset(&right_value23, 0, sizeof(void*));
memset(&result_35, 0, sizeof(_Bool));
    klass_33=type->mClass;
    if(_if_conditional35=klass_33->mGenerics,    _if_conditional35) {
        __result20__ = (_Bool)0;
        return __result20__;
    }
    for(
    i_34=0 ,    0;    _for_condtionalA4=    i_34<list$1sTypeph_length(type->mGenericsTypes) ,    _for_condtionalA4;    i_34++ ,    0    ){
        result_35=is_no_contained_generics_types(((struct sType*)(right_value23=list$1sTypephp_operator_load_element(type->mGenericsTypes,i_34))),info);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
        if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value23;
        __freed_obj__ = 0;
        if(_if_conditional36=!result_35,        _if_conditional36) {
            __result21__ = (_Bool)0;
            return __result21__;
        }
    }
    __result22__ = (_Bool)1;
    return __result22__;
}

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value24;
char* new_name_36;
_Bool _if_conditional42;
void* right_value60;
struct sType* type2_58;
void* right_value64;
struct sClass* generics_class_62;
_Bool _if_conditional121;
_Bool __result52__;
void* right_value65;
void* right_value66;
struct sClass* new_class_63;
void* right_value79;
int i_108;
struct list$1tuple2$2charphsTypephph* o2_saved_109;
struct tuple2$2charphsTypeph* it_110;
_Bool _for_condtionalA7;
struct tuple2$2charphsTypeph* multiple_assign_var2;
char* name_111;
struct sType* type_112;
void* right_value80;
struct sType* new_type_113;
void* right_value84;
void* right_value85;
void* right_value86;
void* right_value87;
void* right_value88;
struct sType* __dec_obj34;
_Bool _if_conditional173;
void* right_value89;
struct sClass* generics_class_119;
_Bool _if_conditional174;
_Bool __result80__;
void* right_value90;
void* right_value91;
struct sClass* new_class_120;
void* right_value92;
int i_121;
struct list$1tuple2$2charphsTypephph* o2_saved_122;
struct tuple2$2charphsTypeph* it_123;
_Bool _for_condtionalA8;
struct tuple2$2charphsTypeph* multiple_assign_var3;
char* name_124;
struct sType* type_125;
void* right_value93;
struct sType* new_type_126;
void* right_value94;
void* right_value95;
void* right_value96;
void* right_value97;
void* right_value98;
struct sType* __dec_obj35;
_Bool _if_conditional175;
void* right_value99;
struct sType* __dec_obj36;
void* right_value100;
_Bool __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value24, 0, sizeof(void*));
memset(&new_name_36, 0, sizeof(char*));
memset(&right_value60, 0, sizeof(void*));
memset(&type2_58, 0, sizeof(struct sType*));
memset(&right_value64, 0, sizeof(void*));
memset(&generics_class_62, 0, sizeof(struct sClass*));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&new_class_63, 0, sizeof(struct sClass*));
memset(&right_value79, 0, sizeof(void*));
memset(&i_108, 0, sizeof(int));
memset(&o2_saved_109, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_110, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_111, 0, sizeof(char*));
memset(&type_112, 0, sizeof(struct sType*));
memset(&name_111, 0, sizeof(char*));
memset(&type_112, 0, sizeof(struct sType*));
memset(&right_value80, 0, sizeof(void*));
memset(&new_type_113, 0, sizeof(struct sType*));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
memset(&right_value89, 0, sizeof(void*));
memset(&generics_class_119, 0, sizeof(struct sClass*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&new_class_120, 0, sizeof(struct sClass*));
memset(&right_value92, 0, sizeof(void*));
memset(&i_121, 0, sizeof(int));
memset(&o2_saved_122, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_123, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_124, 0, sizeof(char*));
memset(&type_125, 0, sizeof(struct sType*));
memset(&name_124, 0, sizeof(char*));
memset(&type_125, 0, sizeof(struct sType*));
memset(&right_value93, 0, sizeof(void*));
memset(&new_type_126, 0, sizeof(struct sType*));
memset(&right_value94, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
    new_name_36=(char*)come_increment_ref_count(((char*)(right_value24=create_generics_name(type,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value24);
    if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { right_value24 = come_decrement_ref_count(right_value24, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value24;
    __freed_obj__ = 0;
    if(_if_conditional42=is_no_contained_generics_types(type,info)&&!map$2charphsClassph_find(info->classes,new_name_36),    _if_conditional42) {
        type2_58=(struct sType*)come_increment_ref_count(((struct sType*)(right_value60=sType_clone(type))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value60);
        if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value60;
        __freed_obj__ = 0;
        generics_class_62=((struct sClass*)(right_value64=map$2charphsClassphp_operator_load_element(info->generics_classes,type->mClass->mName)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64);
        if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value64;
        __freed_obj__ = 0;
        if(_if_conditional121=generics_class_62==((void*)0),        _if_conditional121) {
            err_msg(info,"generics_class(%s) is null",type->mClass->mName);
            __result52__ = (_Bool)0;
            if(type2_58 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_58, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(new_name_36 && !__freed_obj__) { new_name_36 = come_decrement_ref_count(new_name_36, (void*)0, (void*)0, 0, 0, 0); }
            return __result52__;
        }
        new_class_63=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value66=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value65=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 120, "struct sClass")))),new_name_36,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
        if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value65;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value66);
        if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value66;
        __freed_obj__ = 0;
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value79=__builtin_string(new_name_36)))),(struct sClass*)come_increment_ref_count(new_class_63));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
        if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value79;
        __freed_obj__ = 0;
        i_108=0;
        for(
        o2_saved_109=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((generics_class_62->mFields)),it_110=list$1tuple2$2charphsTypephph_begin((o2_saved_109)) ,        0;        _for_condtionalA7=        !list$1tuple2$2charphsTypephph_end((o2_saved_109)) ,        _for_condtionalA7;        it_110=list$1tuple2$2charphsTypephph_next((o2_saved_109)) ,        0        ){
            multiple_assign_var2=it_110;
            name_111=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            type_112=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
            new_type_113=(struct sType*)come_increment_ref_count(((struct sType*)(right_value80=solve_generics(type_112,type2_58,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value80);
            if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value80;
            __freed_obj__ = 0;
            list$1tuple2$2charphsTypephph_push_back(new_class_63->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value87=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value86=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 130, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value84=string_clone(name_111)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value85=sType_clone(new_type_113)))))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value84);
            if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { right_value84 = come_decrement_ref_count(right_value84, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value84;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value85);
            if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value85;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value86);
            if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value86;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value87);
            if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value87;
            __freed_obj__ = 0;
            if(name_111 && !__freed_obj__) { name_111 = come_decrement_ref_count(name_111, (void*)0, (void*)0, 0, 0, 0); }
            if(type_112 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_112, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(new_type_113 && !__freed_obj__) { come_call_finalizer(sType_finalize,new_type_113, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_109 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_109, (void*)0, (void*)0, 0, 0, 0, 0); }
        __dec_obj34=type->mNoSolvedGenericsType->v1;
        type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value88=sType_clone(type))));
        if(__dec_obj34) { come_call_finalizer(sType_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value88);
        if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value88;
        __freed_obj__ = 0;
        type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
        type->mClass=new_class_63;
        list$1sTypeph_reset(type->mGenericsTypes);
        output_struct(new_class_63,info);
        if(type2_58 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_58, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(new_class_63 && !__freed_obj__) { come_call_finalizer(sClass_finalize,new_class_63, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        if(_if_conditional173=!map$2charphsClassph_find(info->classes,new_name_36),        _if_conditional173) {
            generics_class_119=((struct sClass*)(right_value89=map$2charphsClassphp_operator_load_element(info->generics_classes,type->mClass->mName)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value89);
            if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value89;
            __freed_obj__ = 0;
            if(_if_conditional174=generics_class_119==((void*)0),            _if_conditional174) {
                err_msg(info,"generics_class(%s) is null",type->mClass->mName);
                __result80__ = (_Bool)0;
                if(new_name_36 && !__freed_obj__) { new_name_36 = come_decrement_ref_count(new_name_36, (void*)0, (void*)0, 0, 0, 0); }
                return __result80__;
            }
            new_class_120=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value91=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value90=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 148, "struct sClass")))),new_name_36,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
            if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value90;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value91);
            if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value91;
            __freed_obj__ = 0;
            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value92=__builtin_string(new_name_36)))),(struct sClass*)come_increment_ref_count(new_class_120));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value92);
            if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value92;
            __freed_obj__ = 0;
            i_121=0;
            for(
            o2_saved_122=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((generics_class_119->mFields)),it_123=list$1tuple2$2charphsTypephph_begin((o2_saved_122)) ,            0;            _for_condtionalA8=            !list$1tuple2$2charphsTypephph_end((o2_saved_122)) ,            _for_condtionalA8;            it_123=list$1tuple2$2charphsTypephph_next((o2_saved_122)) ,            0            ){
                multiple_assign_var3=it_123;
                name_124=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                type_125=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
                new_type_126=(struct sType*)come_increment_ref_count(((struct sType*)(right_value93=solve_generics(type_125,generics_type,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
                if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value93;
                __freed_obj__ = 0;
                list$1tuple2$2charphsTypephph_push_back(new_class_120->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value97=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value96=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 158, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value94=string_clone(name_124)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value95=sType_clone(new_type_126)))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94);
                if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { right_value94 = come_decrement_ref_count(right_value94, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value94;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value95);
                if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value95;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value96);
                if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value96;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value97);
                if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value97;
                __freed_obj__ = 0;
                if(name_124 && !__freed_obj__) { name_124 = come_decrement_ref_count(name_124, (void*)0, (void*)0, 0, 0, 0); }
                if(type_125 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_125, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(new_type_126 && !__freed_obj__) { come_call_finalizer(sType_finalize,new_type_126, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(o2_saved_122 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_122, (void*)0, (void*)0, 0, 0, 0, 0); }
            __dec_obj35=type->mNoSolvedGenericsType->v1;
            type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value98=sType_clone(type))));
            if(__dec_obj35) { come_call_finalizer(sType_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value98);
            if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value98;
            __freed_obj__ = 0;
            type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
            type->mClass=new_class_120;
            list$1sTypeph_reset(type->mGenericsTypes);
            output_struct(new_class_120,info);
            if(new_class_120 && !__freed_obj__) { come_call_finalizer(sClass_finalize,new_class_120, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            if(_if_conditional175=type->mNoSolvedGenericsType->v1==((void*)0),            _if_conditional175) {
                __dec_obj36=type->mNoSolvedGenericsType->v1;
                type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value99=sType_clone(type))));
                if(__dec_obj36) { come_call_finalizer(sType_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value99);
                if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value99;
                __freed_obj__ = 0;
                type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
            }
            type->mClass=((struct sClass*)(right_value100=map$2charphsClassphp_operator_load_element(info->classes,new_name_36)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
            if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value100;
            __freed_obj__ = 0;
            list$1sTypeph_reset(type->mGenericsTypes);
        }
    }
    __result81__ = (_Bool)1;
    if(new_name_36 && !__freed_obj__) { new_name_36 = come_decrement_ref_count(new_name_36, (void*)0, (void*)0, 0, 0, 0); }
    return __result81__;
    if(new_name_36 && !__freed_obj__) { new_name_36 = come_decrement_ref_count(new_name_36, (void*)0, (void*)0, 0, 0, 0); }
}

static _Bool map$2charphsClassph_find(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_37;
int it_38;
_Bool _while_condtional7;
_Bool _if_conditional37;
void* right_value25;
_Bool _if_conditional39;
_Bool __result25__;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool __result26__;
_Bool __result27__;
_Bool __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_37, 0, sizeof(unsigned int));
memset(&it_38, 0, sizeof(int));
memset(&right_value25, 0, sizeof(void*));
        hash_37=string_get_hash_key(((char*)key))%self->size;
        it_38=hash_37;
        while(_while_condtional7=(_Bool)1,        _while_condtional7) {
            if(_if_conditional37=self->item_existance[it_38],            _if_conditional37) {
                if(_if_conditional39=optional$2boolbool_value(((struct optional$2boolbool*)(right_value25=string_equals(self->keys[it_38],key)))),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25),
                (right_value25 && right_value25 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value25, 
                __freed_obj__ = 0, 
                _if_conditional39) {
                    __result25__ = (_Bool)1;
                    return __result25__;
                }
                it_38++;
                if(_if_conditional40=it_38>=self->size,                _if_conditional40) {
                    it_38=0;
                }
                else {
                    if(_if_conditional41=it_38==hash_37,                    _if_conditional41) {
                        __result26__ = (_Bool)0;
                        return __result26__;
                    }
                }
            }
            else {
                __result27__ = (_Bool)0;
                return __result27__;
            }
        }
        __result28__ = (_Bool)0;
        return __result28__;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional38;
_Bool default_value_39;
_Bool __result23__;
_Bool __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_39, 0, sizeof(_Bool));
                    if(_if_conditional38=self==((void*)0),                    _if_conditional38) {
                        memset(&default_value_39,0,sizeof(_Bool));
                        __result23__ = default_value_39;
                        return __result23__;
                    }
                    else {
                        __result24__ = self->v1;
                        return __result24__;
                    }
}

static void optional$2boolboolp_finalize(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional43;
struct sType* __result29__;
void* right_value26;
struct sType* result_40;
_Bool _if_conditional44;
_Bool _if_conditional45;
void* right_value29;
struct tuple1$1sTypeph* __dec_obj7;
_Bool _if_conditional49;
void* right_value30;
struct tuple1$1sTypeph* __dec_obj8;
_Bool _if_conditional50;
void* right_value31;
char* __dec_obj9;
_Bool _if_conditional51;
void* right_value38;
struct list$1sTypeph* __dec_obj13;
_Bool _if_conditional55;
void* right_value46;
struct list$1sNodeph* __dec_obj17;
_Bool _if_conditional68;
_Bool _if_conditional69;
void* right_value47;
struct list$1sTypeph* __dec_obj18;
_Bool _if_conditional70;
void* right_value54;
struct list$1charph* __dec_obj22;
_Bool _if_conditional74;
void* right_value55;
struct tuple1$1sTypeph* __dec_obj23;
_Bool _if_conditional75;
_Bool _if_conditional76;
void* right_value56;
struct sNode* __dec_obj24;
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
_Bool _if_conditional93;
_Bool _if_conditional94;
_Bool _if_conditional95;
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
void* right_value57;
struct sNode* __dec_obj25;
_Bool _if_conditional101;
_Bool _if_conditional102;
_Bool _if_conditional103;
void* right_value58;
char* __dec_obj26;
_Bool _if_conditional104;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
void* right_value59;
char* __dec_obj27;
struct sType* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value26, 0, sizeof(void*));
memset(&result_40, 0, sizeof(struct sType*));
memset(&right_value29, 0, sizeof(void*));
memset(&right_value30, 0, sizeof(void*));
memset(&right_value31, 0, sizeof(void*));
memset(&right_value38, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&right_value47, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
            if(_if_conditional43=self==(void*)0,            _if_conditional43) {
                __result29__ = __result_obj__ = (void*)0;
                return __result29__;
            }
            result_40=(struct sType*)come_increment_ref_count(((struct sType*)(right_value26=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value26);
            if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value26;
            __freed_obj__ = 0;
            if(_if_conditional44=self!=((void*)0),            _if_conditional44) {
                result_40->mClass=self->mClass;
            }
            if(_if_conditional45=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional45) {
                __dec_obj7=result_40->mNoSolvedGenericsType;
                result_40->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value29=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                if(__dec_obj7) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
                if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value29;
                __freed_obj__ = 0;
            }
            if(_if_conditional49=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional49) {
                __dec_obj8=result_40->mOriginalLoadVarType;
                result_40->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value30=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                if(__dec_obj8) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
                if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value30;
                __freed_obj__ = 0;
            }
            if(_if_conditional50=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional50) {
                __dec_obj9=result_40->mGenericsName;
                result_40->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value31=string_clone(self->mGenericsName))));
                if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
                if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { right_value31 = come_decrement_ref_count(right_value31, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value31;
                __freed_obj__ = 0;
            }
            if(_if_conditional51=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional51) {
                __dec_obj13=result_40->mGenericsTypes;
                result_40->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value38=list$1sTypephp_clone(self->mGenericsTypes))));
                if(__dec_obj13) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
                if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value38;
                __freed_obj__ = 0;
            }
            if(_if_conditional55=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional55) {
                __dec_obj17=result_40->mArrayNum;
                result_40->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value46=list$1sNodephp_clone(self->mArrayNum))));
                if(__dec_obj17) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value46);
                if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value46;
                __freed_obj__ = 0;
            }
            if(_if_conditional68=self!=((void*)0),            _if_conditional68) {
                result_40->mOmitArrayNum=self->mOmitArrayNum;
            }
            if(_if_conditional69=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional69) {
                __dec_obj18=result_40->mParamTypes;
                result_40->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value47=list$1sTypephp_clone(self->mParamTypes))));
                if(__dec_obj18) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value47);
                if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value47;
                __freed_obj__ = 0;
            }
            if(_if_conditional70=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional70) {
                __dec_obj22=result_40->mParamNames;
                result_40->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value54=list$1charphp_clone(self->mParamNames))));
                if(__dec_obj22) { come_call_finalizer(list$1charph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
                if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value54;
                __freed_obj__ = 0;
            }
            if(_if_conditional74=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional74) {
                __dec_obj23=result_40->mResultType;
                result_40->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value55=tuple1$1sTypephp_clone(self->mResultType))));
                if(__dec_obj23) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
                if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value55;
                __freed_obj__ = 0;
            }
            if(_if_conditional75=self!=((void*)0),            _if_conditional75) {
                result_40->mVarArgs=self->mVarArgs;
            }
            if(_if_conditional76=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional76) {
                __dec_obj24=result_40->mAlignas;
                result_40->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value56=sNode_clone(self->mAlignas))));
                if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
                if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { right_value56 = come_decrement_ref_count(right_value56, ((struct sNode*)right_value56)->finalize, ((struct sNode*)right_value56)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value56;
                __freed_obj__ = 0;
            }
            if(_if_conditional77=self!=((void*)0),            _if_conditional77) {
                result_40->mUnsigned=self->mUnsigned;
            }
            if(_if_conditional78=self!=((void*)0),            _if_conditional78) {
                result_40->mShort=self->mShort;
            }
            if(_if_conditional79=self!=((void*)0),            _if_conditional79) {
                result_40->mLong=self->mLong;
            }
            if(_if_conditional80=self!=((void*)0),            _if_conditional80) {
                result_40->mLongLong=self->mLongLong;
            }
            if(_if_conditional81=self!=((void*)0),            _if_conditional81) {
                result_40->mConstant=self->mConstant;
            }
            if(_if_conditional82=self!=((void*)0),            _if_conditional82) {
                result_40->mRegister=self->mRegister;
            }
            if(_if_conditional83=self!=((void*)0),            _if_conditional83) {
                result_40->mVolatile=self->mVolatile;
            }
            if(_if_conditional84=self!=((void*)0),            _if_conditional84) {
                result_40->mStatic=self->mStatic;
            }
            if(_if_conditional85=self!=((void*)0),            _if_conditional85) {
                result_40->mExtern=self->mExtern;
            }
            if(_if_conditional86=self!=((void*)0),            _if_conditional86) {
                result_40->mRestrict=self->mRestrict;
            }
            if(_if_conditional87=self!=((void*)0),            _if_conditional87) {
                result_40->mImmutable=self->mImmutable;
            }
            if(_if_conditional88=self!=((void*)0),            _if_conditional88) {
                result_40->mHeap=self->mHeap;
            }
            if(_if_conditional89=self!=((void*)0),            _if_conditional89) {
                result_40->mDummyHeap=self->mDummyHeap;
            }
            if(_if_conditional90=self!=((void*)0),            _if_conditional90) {
                result_40->mDelegate=self->mDelegate;
            }
            if(_if_conditional91=self!=((void*)0),            _if_conditional91) {
                result_40->mShare=self->mShare;
            }
            if(_if_conditional92=self!=((void*)0),            _if_conditional92) {
                result_40->mClone=self->mClone;
            }
            if(_if_conditional93=self!=((void*)0),            _if_conditional93) {
                result_40->mNoHeap=self->mNoHeap;
            }
            if(_if_conditional94=self!=((void*)0),            _if_conditional94) {
                result_40->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            if(_if_conditional95=self!=((void*)0),            _if_conditional95) {
                result_40->mRefference=self->mRefference;
            }
            if(_if_conditional96=self!=((void*)0),            _if_conditional96) {
                result_40->mException=self->mException;
            }
            if(_if_conditional97=self!=((void*)0),            _if_conditional97) {
                result_40->mPointerNum=self->mPointerNum;
            }
            if(_if_conditional98=self!=((void*)0),            _if_conditional98) {
                result_40->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
            }
            if(_if_conditional99=self!=((void*)0),            _if_conditional99) {
                result_40->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            if(_if_conditional100=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional100) {
                __dec_obj25=result_40->mSizeNum;
                result_40->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value57=sNode_clone(self->mSizeNum))));
                if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
                if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { right_value57 = come_decrement_ref_count(right_value57, ((struct sNode*)right_value57)->finalize, ((struct sNode*)right_value57)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value57;
                __freed_obj__ = 0;
            }
            if(_if_conditional101=self!=((void*)0),            _if_conditional101) {
                result_40->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            if(_if_conditional102=self!=((void*)0),            _if_conditional102) {
                result_40->mTypeOfExpression=self->mTypeOfExpression;
            }
            if(_if_conditional103=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional103) {
                __dec_obj26=result_40->mOriginalTypeName;
                result_40->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value58=string_clone(self->mOriginalTypeName))));
                if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
                if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value58;
                __freed_obj__ = 0;
            }
            if(_if_conditional104=self!=((void*)0),            _if_conditional104) {
                result_40->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            if(_if_conditional105=self!=((void*)0),            _if_conditional105) {
                result_40->mFunctionParam=self->mFunctionParam;
            }
            if(_if_conditional106=self!=((void*)0),            _if_conditional106) {
                result_40->mAllocaValue=self->mAllocaValue;
            }
            if(_if_conditional107=self!=((void*)0),            _if_conditional107) {
                result_40->mGenericsStruct=self->mGenericsStruct;
            }
            if(_if_conditional108=self!=((void*)0),            _if_conditional108) {
                result_40->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            if(_if_conditional109=self!=((void*)0),            _if_conditional109) {
                result_40->mComeMemCore=self->mComeMemCore;
            }
            if(_if_conditional110=self!=((void*)0),            _if_conditional110) {
                result_40->mInline=self->mInline;
            }
            if(_if_conditional111=self!=((void*)0),            _if_conditional111) {
                result_40->mNullValue=self->mNullValue;
            }
            if(_if_conditional112=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional112) {
                __dec_obj27=result_40->mAsmName;
                result_40->mAsmName=(char*)come_increment_ref_count(((char*)(right_value59=string_clone(self->mAsmName))));
                if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59);
                if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value59;
                __freed_obj__ = 0;
            }
            __result46__ = __result_obj__ = result_40;
            if(result_40 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_40, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result46__;
            if(result_40 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_40, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional46;
struct tuple1$1sTypeph* __result30__;
void* right_value27;
struct tuple1$1sTypeph* result_41;
_Bool _if_conditional48;
void* right_value28;
struct sType* __dec_obj6;
struct tuple1$1sTypeph* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value27, 0, sizeof(void*));
memset(&result_41, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value28, 0, sizeof(void*));
                    if(_if_conditional46=self==(void*)0,                    _if_conditional46) {
                        __result30__ = __result_obj__ = (void*)0;
                        return __result30__;
                    }
                    result_41=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value27=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
                    if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value27;
                    __freed_obj__ = 0;
                    if(_if_conditional48=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional48) {
                        __dec_obj6=result_41->v1;
                        result_41->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value28=sType_clone(self->v1))));
                        if(__dec_obj6) { come_call_finalizer(sType_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
                        if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value28;
                        __freed_obj__ = 0;
                    }
                    __result31__ = __result_obj__ = result_41;
                    if(result_41 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_41, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result31__;
                    if(result_41 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_41, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional47;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional47=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional47) {
                            if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional52;
struct list$1sTypeph* __result32__;
void* right_value32;
void* right_value33;
struct list$1sTypeph* result_42;
struct list_item$1sTypeph* it_43;
_Bool _while_condtional8;
void* right_value37;
struct list$1sTypeph* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value32, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
memset(&result_42, 0, sizeof(struct list$1sTypeph*));
memset(&it_43, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value37, 0, sizeof(void*));
                    if(_if_conditional52=self==((void*)0),                    _if_conditional52) {
                        __result32__ = __result_obj__ = ((void*)0);
                        return __result32__;
                    }
                    result_42=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value33=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value32=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 198, "struct list$1sTypeph"))))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
                    if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value32;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value33);
                    if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value33;
                    __freed_obj__ = 0;
                    it_43=self->head;
                    while(_while_condtional8=it_43!=((void*)0),                    _while_condtional8) {
                        list$1sTypeph_add(result_42,(struct sType*)come_increment_ref_count(((struct sType*)(right_value37=sType_clone(it_43->item)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
                        if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value37;
                        __freed_obj__ = 0;
                        it_43=it_43->next;
                    }
                    __result35__ = __result_obj__ = result_42;
                    if(result_42 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_42, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result35__;
                    if(result_42 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_42, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result33__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result33__;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional53;
void* right_value34;
struct list_item$1sTypeph* litem_44;
struct sType* __dec_obj10;
_Bool _if_conditional54;
void* right_value35;
struct list_item$1sTypeph* litem_45;
struct sType* __dec_obj11;
void* right_value36;
struct list_item$1sTypeph* litem_46;
struct sType* __dec_obj12;
struct list$1sTypeph* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value34, 0, sizeof(void*));
memset(&litem_44, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value35, 0, sizeof(void*));
memset(&litem_45, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value36, 0, sizeof(void*));
memset(&litem_46, 0, sizeof(struct list_item$1sTypeph*));
                            if(_if_conditional53=self->len==0,                            _if_conditional53) {
                                litem_44=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value34=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 212, "struct list_item$1sTypeph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
                                if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value34;
                                __freed_obj__ = 0;
                                litem_44->prev=((void*)0);
                                litem_44->next=((void*)0);
                                __dec_obj10=litem_44->item;
                                litem_44->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj10) { come_call_finalizer(sType_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
                                self->tail=litem_44;
                                self->head=litem_44;
                            }
                            else {
                                if(_if_conditional54=self->len==1,                                _if_conditional54) {
                                    litem_45=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value35=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 222, "struct list_item$1sTypeph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
                                    if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value35;
                                    __freed_obj__ = 0;
                                    litem_45->prev=self->head;
                                    litem_45->next=((void*)0);
                                    __dec_obj11=litem_45->item;
                                    litem_45->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj11) { come_call_finalizer(sType_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    self->tail=litem_45;
                                    self->head->next=litem_45;
                                }
                                else {
                                    litem_46=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value36=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 232, "struct list_item$1sTypeph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
                                    if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value36;
                                    __freed_obj__ = 0;
                                    litem_46->prev=self->tail;
                                    litem_46->next=((void*)0);
                                    __dec_obj12=litem_46->item;
                                    litem_46->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj12) { come_call_finalizer(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    self->tail->next=litem_46;
                                    self->tail=litem_46;
                                }
                            }
                            self->len++;
                            __result34__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result34__;
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
_Bool _if_conditional56;
struct list$1sNodeph* __result36__;
void* right_value39;
void* right_value40;
struct list$1sNodeph* result_47;
struct list_item$1sNodeph* it_48;
_Bool _while_condtional9;
void* right_value45;
struct list$1sNodeph* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value39, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
memset(&result_47, 0, sizeof(struct list$1sNodeph*));
memset(&it_48, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value45, 0, sizeof(void*));
                    if(_if_conditional56=self==((void*)0),                    _if_conditional56) {
                        __result36__ = __result_obj__ = ((void*)0);
                        return __result36__;
                    }
                    result_47=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value40=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value39=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 198, "struct list$1sNodeph"))))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
                    if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value39;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value40);
                    if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value40;
                    __freed_obj__ = 0;
                    it_48=self->head;
                    while(_while_condtional9=it_48!=((void*)0),                    _while_condtional9) {
                        list$1sNodeph_add(result_47,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value45=sNode_clone(it_48->item)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
                        if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { right_value45 = come_decrement_ref_count(right_value45, ((struct sNode*)right_value45)->finalize, ((struct sNode*)right_value45)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value45;
                        __freed_obj__ = 0;
                        it_48=it_48->next;
                    }
                    __result41__ = __result_obj__ = result_47;
                    if(result_47 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_47, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result41__;
                    if(result_47 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_47, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result37__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result37__;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional57;
void* right_value41;
struct list_item$1sNodeph* litem_49;
struct sNode* __dec_obj14;
_Bool _if_conditional58;
void* right_value42;
struct list_item$1sNodeph* litem_50;
struct sNode* __dec_obj15;
void* right_value43;
struct list_item$1sNodeph* litem_51;
struct sNode* __dec_obj16;
struct list$1sNodeph* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value41, 0, sizeof(void*));
memset(&litem_49, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value42, 0, sizeof(void*));
memset(&litem_50, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value43, 0, sizeof(void*));
memset(&litem_51, 0, sizeof(struct list_item$1sNodeph*));
                            if(_if_conditional57=self->len==0,                            _if_conditional57) {
                                litem_49=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value41=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 212, "struct list_item$1sNodeph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
                                if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value41;
                                __freed_obj__ = 0;
                                litem_49->prev=((void*)0);
                                litem_49->next=((void*)0);
                                __dec_obj14=litem_49->item;
                                litem_49->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0,0,0); }
                                self->tail=litem_49;
                                self->head=litem_49;
                            }
                            else {
                                if(_if_conditional58=self->len==1,                                _if_conditional58) {
                                    litem_50=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value42=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 222, "struct list_item$1sNodeph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
                                    if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value42;
                                    __freed_obj__ = 0;
                                    litem_50->prev=self->head;
                                    litem_50->next=((void*)0);
                                    __dec_obj15=litem_50->item;
                                    litem_50->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0); }
                                    self->tail=litem_50;
                                    self->head->next=litem_50;
                                }
                                else {
                                    litem_51=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value43=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 232, "struct list_item$1sNodeph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
                                    if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value43;
                                    __freed_obj__ = 0;
                                    litem_51->prev=self->tail;
                                    litem_51->next=((void*)0);
                                    __dec_obj16=litem_51->item;
                                    litem_51->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0); }
                                    self->tail->next=litem_51;
                                    self->tail=litem_51;
                                }
                            }
                            self->len++;
                            __result38__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                            return __result38__;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional59;
struct sNode* __result39__;
void* right_value44;
struct sNode* result_52;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional63;
_Bool _if_conditional64;
_Bool _if_conditional65;
_Bool _if_conditional66;
_Bool _if_conditional67;
struct sNode* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value44, 0, sizeof(void*));
memset(&result_52, 0, sizeof(struct sNode*));
                            if(_if_conditional59=self==(void*)0,                            _if_conditional59) {
                                __result39__ = __result_obj__ = (void*)0;
                                return __result39__;
                            }
                            result_52=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value44=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
                            if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { right_value44 = come_decrement_ref_count(right_value44, ((struct sNode*)right_value44)->finalize, ((struct sNode*)right_value44)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value44;
                            __freed_obj__ = 0;
                            if(_if_conditional60=self!=((void*)0)&&self->clone!=((void*)0),                            _if_conditional60) {
                                result_52->_protocol_obj=self->clone(self->_protocol_obj);
                            }
                            if(_if_conditional61=self!=((void*)0),                            _if_conditional61) {
                                result_52->finalize=self->finalize;
                            }
                            if(_if_conditional62=self!=((void*)0),                            _if_conditional62) {
                                result_52->clone=self->clone;
                            }
                            if(_if_conditional63=self!=((void*)0),                            _if_conditional63) {
                                result_52->compile=self->compile;
                            }
                            if(_if_conditional64=self!=((void*)0),                            _if_conditional64) {
                                result_52->sline=self->sline;
                            }
                            if(_if_conditional65=self!=((void*)0),                            _if_conditional65) {
                                result_52->sname=self->sname;
                            }
                            if(_if_conditional66=self!=((void*)0),                            _if_conditional66) {
                                result_52->terminated=self->terminated;
                            }
                            if(_if_conditional67=self!=((void*)0),                            _if_conditional67) {
                                result_52->kind=self->kind;
                            }
                            __result40__ = __result_obj__ = result_52;
                            if(result_52 && !__freed_obj__) { result_52 = come_decrement_ref_count(result_52, ((struct sNode*)result_52)->finalize, ((struct sNode*)result_52)->_protocol_obj, 0, 1, 0); } 
                            return __result40__;
                            if(result_52 && !__freed_obj__) { result_52 = come_decrement_ref_count(result_52, ((struct sNode*)result_52)->finalize, ((struct sNode*)result_52)->_protocol_obj, 0, 0, 0); } 
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
_Bool _if_conditional71;
struct list$1charph* __result42__;
void* right_value48;
void* right_value49;
struct list$1charph* result_53;
struct list_item$1charph* it_54;
_Bool _while_condtional10;
void* right_value53;
struct list$1charph* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value48, 0, sizeof(void*));
memset(&right_value49, 0, sizeof(void*));
memset(&result_53, 0, sizeof(struct list$1charph*));
memset(&it_54, 0, sizeof(struct list_item$1charph*));
memset(&right_value53, 0, sizeof(void*));
                    if(_if_conditional71=self==((void*)0),                    _if_conditional71) {
                        __result42__ = __result_obj__ = ((void*)0);
                        return __result42__;
                    }
                    result_53=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value49=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value48=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 198, "struct list$1charph"))))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value48);
                    if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value48;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value49);
                    if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value49;
                    __freed_obj__ = 0;
                    it_54=self->head;
                    while(_while_condtional10=it_54!=((void*)0),                    _while_condtional10) {
                        list$1charph_add(result_53,(char*)come_increment_ref_count(((char*)(right_value53=string_clone(it_54->item)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
                        if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { right_value53 = come_decrement_ref_count(right_value53, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value53;
                        __freed_obj__ = 0;
                        it_54=it_54->next;
                    }
                    __result45__ = __result_obj__ = result_53;
                    if(result_53 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_53, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result45__;
                    if(result_53 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_53, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result43__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result43__;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional72;
void* right_value50;
struct list_item$1charph* litem_55;
char* __dec_obj19;
_Bool _if_conditional73;
void* right_value51;
struct list_item$1charph* litem_56;
char* __dec_obj20;
void* right_value52;
struct list_item$1charph* litem_57;
char* __dec_obj21;
struct list$1charph* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value50, 0, sizeof(void*));
memset(&litem_55, 0, sizeof(struct list_item$1charph*));
memset(&right_value51, 0, sizeof(void*));
memset(&litem_56, 0, sizeof(struct list_item$1charph*));
memset(&right_value52, 0, sizeof(void*));
memset(&litem_57, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional72=self->len==0,                            _if_conditional72) {
                                litem_55=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value50=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 212, "struct list_item$1charph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50);
                                if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value50;
                                __freed_obj__ = 0;
                                litem_55->prev=((void*)0);
                                litem_55->next=((void*)0);
                                __dec_obj19=litem_55->item;
                                litem_55->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0,0); }
                                self->tail=litem_55;
                                self->head=litem_55;
                            }
                            else {
                                if(_if_conditional73=self->len==1,                                _if_conditional73) {
                                    litem_56=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value51=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 222, "struct list_item$1charph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
                                    if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value51;
                                    __freed_obj__ = 0;
                                    litem_56->prev=self->head;
                                    litem_56->next=((void*)0);
                                    __dec_obj20=litem_56->item;
                                    litem_56->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0,0); }
                                    self->tail=litem_56;
                                    self->head->next=litem_56;
                                }
                                else {
                                    litem_57=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value52=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 232, "struct list_item$1charph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52);
                                    if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value52;
                                    __freed_obj__ = 0;
                                    litem_57->prev=self->tail;
                                    litem_57->next=((void*)0);
                                    __dec_obj21=litem_57->item;
                                    litem_57->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0,0); }
                                    self->tail->next=litem_57;
                                    self->tail=litem_57;
                                }
                            }
                            self->len++;
                            __result44__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                            return __result44__;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* default_value_59;
unsigned int hash_60;
unsigned int it_61;
_Bool _while_condtional11;
_Bool _if_conditional113;
void* right_value61;
_Bool _if_conditional114;
struct sClass* __result47__;
_Bool _if_conditional118;
_Bool _if_conditional119;
struct sClass* __result48__;
struct sClass* __result49__;
void* right_value62;
void* right_value63;
struct sClass* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_59, 0, sizeof(struct sClass*));
memset(&hash_60, 0, sizeof(unsigned int));
memset(&it_61, 0, sizeof(unsigned int));
memset(&right_value61, 0, sizeof(void*));
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
            memset(&default_value_59,0,sizeof(struct sClass*));
            hash_60=string_get_hash_key(((char*)key))%self->size;
            it_61=hash_60;
            while(_while_condtional11=(_Bool)1,            _while_condtional11) {
                if(_if_conditional113=self->item_existance[it_61],                _if_conditional113) {
                    if(_if_conditional114=optional$2boolbool_value(((struct optional$2boolbool*)(right_value61=string_equals(self->keys[it_61],key)))),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value61),
                    (right_value61 && right_value61 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value61, 
                    __freed_obj__ = 0, 
                    _if_conditional114) {
                        __result47__ = __result_obj__ = self->items[it_61];
                        if(default_value_59 && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value_59, (void*)0, (void*)0, 0, 0, 0, 0); }
                        return __result47__;
                    }
                    it_61++;
                    if(_if_conditional118=it_61>=self->size,                    _if_conditional118) {
                        it_61=0;
                    }
                    else {
                        if(_if_conditional119=it_61==hash_60,                        _if_conditional119) {
                            __result48__ = __result_obj__ = default_value_59;
                            if(default_value_59 && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value_59, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result48__;
                        }
                    }
                }
                else {
                    __result49__ = __result_obj__ = default_value_59;
                    if(default_value_59 && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value_59, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result49__;
                }
            }
            __result51__ = __result_obj__ = ((struct optional$2sClassphbool*)(right_value63=optional$2sClassphbool_initialize(((struct optional$2sClassphbool*)(right_value62=(struct optional$2sClassphbool*)come_calloc(1, sizeof(struct optional$2sClassphbool)*(1), "./comelang2.h", 1630, "struct optional$2sClassphbool"))),(struct sClass*)come_increment_ref_count(default_value_59),(_Bool)0)));
            if(default_value_59 && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value_59, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
            if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { right_value62 = come_decrement_ref_count(right_value62, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value62;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value63);
            if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClassphboolp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value63;
            __freed_obj__ = 0;
            return __result51__;
            if(default_value_59 && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value_59, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional115=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional115) {
                                if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            if(_if_conditional116=self!=((void*)0)&&self->mFields!=((void*)0),                            _if_conditional116) {
                                if(self->mFields && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(_if_conditional117=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                            _if_conditional117) {
                                if(self->mDeclareSName && !__freed_obj__) { self->mDeclareSName = come_decrement_ref_count(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
                            }
}

static struct optional$2sClassphbool* optional$2sClassphbool_initialize(struct optional$2sClassphbool* self, struct sClass* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* __dec_obj28;
struct optional$2sClassphbool* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __dec_obj28=self->v1;
                self->v1=(struct sClass*)come_increment_ref_count(v1);
                if(__dec_obj28) { come_call_finalizer(sClass_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->v2=v2;
                __result50__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2sClassphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { come_call_finalizer(sClass_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result50__;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2sClassphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { come_call_finalizer(sClass_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sClassphboolp_finalize(struct optional$2sClassphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional120;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional120=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional120) {
                        if(self->v1 && !__freed_obj__) { come_call_finalizer(sClass_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional122;
unsigned int hash_81;
unsigned int it_82;
_Bool _while_condtional14;
_Bool _if_conditional134;
void* right_value73;
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool _if_conditional156;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional160;
_Bool same_key_exist_99;
char* it2_102;
_Bool _for_condtionalA6;
void* right_value75;
_Bool _if_conditional165;
_Bool _if_conditional166;
struct map$2charphsClassph* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_81, 0, sizeof(unsigned int));
memset(&it_82, 0, sizeof(unsigned int));
memset(&right_value73, 0, sizeof(void*));
memset(&same_key_exist_99, 0, sizeof(_Bool));
memset(&it2_102, 0, sizeof(char*));
memset(&right_value75, 0, sizeof(void*));
            if(_if_conditional122=self->len*10>=self->size,            _if_conditional122) {
                map$2charphsClassph_rehash(self);
            }
            hash_81=string_get_hash_key(key)%self->size;
            it_82=hash_81;
            while(_while_condtional14=(_Bool)1,            _while_condtional14) {
                if(_if_conditional134=self->item_existance[it_82],                _if_conditional134) {
                    if(_if_conditional135=optional$2boolbool_value(((struct optional$2boolbool*)(right_value73=string_equals(self->keys[it_82],key)))),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value73),
                    (right_value73 && right_value73 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value73, 
                    __freed_obj__ = 0, 
                    _if_conditional135) {
                        if(_if_conditional136=1,                        _if_conditional136) {
                            list$1charp_remove(self->key_list,self->keys[it_82]);
                            if(self->keys[it_82] && !__freed_obj__) { self->keys[it_82] = come_decrement_ref_count(self->keys[it_82], (void*)0, (void*)0, 0, 0, 0); }
                            self->keys[it_82]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            list$1charp_remove(self->key_list,self->keys[it_82]);
                            self->keys[it_82]=key;
                        }
                        if(_if_conditional156=1,                        _if_conditional156) {
                            if(self->items[it_82] && !__freed_obj__) { come_call_finalizer(sClass_finalize,self->items[it_82], (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->items[it_82]=(struct sClass*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_82]=item;
                        }
                        break;
                    }
                    it_82++;
                    if(_if_conditional157=it_82>=self->size,                    _if_conditional157) {
                        it_82=0;
                    }
                    else {
                        if(_if_conditional158=it_82==hash_81,                        _if_conditional158) {
                            printf("unexpected error in map.insert\n");
                            stackframe();
                            exit(2);
                        }
                    }
                }
                else {
                    self->item_existance[it_82]=(_Bool)1;
                    if(_if_conditional159=1,                    _if_conditional159) {
                        self->keys[it_82]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        self->keys[it_82]=key;
                    }
                    if(_if_conditional160=1,                    _if_conditional160) {
                        self->items[it_82]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_82]=item;
                    }
                    self->len++;
                    break;
                }
            }
            same_key_exist_99=(_Bool)0;
            for(
            it2_102=list$1charp_begin(self->key_list) ,            0;            _for_condtionalA6=            !list$1charp_end(self->key_list) ,            _for_condtionalA6;            it2_102=list$1charp_next(self->key_list) ,            0            ){
                if(_if_conditional165=optional$2boolbool_value(((struct optional$2boolbool*)(right_value75=string_equals(it2_102,key)))),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value75),
                (right_value75 && right_value75 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value75, 
                __freed_obj__ = 0, 
                _if_conditional165) {
                    same_key_exist_99=(_Bool)1;
                }
            }
            if(_if_conditional166=!same_key_exist_99,            _if_conditional166) {
                list$1charp_push_back(self->key_list,key);
            }
            __result76__ = __result_obj__ = self;
            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
            if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result76__;
            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
            if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_64;
void* right_value67;
char** keys_65;
void* right_value68;
struct sClass** items_66;
void* right_value69;
_Bool* item_existance_67;
int len_68;
char* it_71;
_Bool _for_condtionalA5;
struct sClass* default_value_74;
void* right_value71;
struct sClass* it2_77;
unsigned int hash_78;
int n_79;
_Bool _while_condtional13;
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool _if_conditional133;
struct sClass* default_value_80;
void* right_value72;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_64, 0, sizeof(int));
memset(&right_value67, 0, sizeof(void*));
memset(&keys_65, 0, sizeof(char**));
memset(&right_value68, 0, sizeof(void*));
memset(&items_66, 0, sizeof(struct sClass**));
memset(&right_value69, 0, sizeof(void*));
memset(&item_existance_67, 0, sizeof(_Bool*));
memset(&len_68, 0, sizeof(int));
memset(&it_71, 0, sizeof(char*));
memset(&default_value_74, 0, sizeof(struct sClass*));
memset(&right_value71, 0, sizeof(void*));
memset(&it2_77, 0, sizeof(struct sClass*));
memset(&hash_78, 0, sizeof(unsigned int));
memset(&n_79, 0, sizeof(int));
memset(&default_value_80, 0, sizeof(struct sClass*));
memset(&right_value72, 0, sizeof(void*));
                    size_64=self->size*10;
                    keys_65=(char**)come_increment_ref_count(((char**)(right_value67=(char**)come_calloc(1, sizeof(char*)*(1*(size_64)), "./comelang2.h", 1388, "char*"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
                    if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value67;
                    __freed_obj__ = 0;
                    items_66=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value68=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_64)), "./comelang2.h", 1389, "struct sClass*"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value68);
                    if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value68;
                    __freed_obj__ = 0;
                    item_existance_67=(_Bool*)come_increment_ref_count(((_Bool*)(right_value69=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_64)), "./comelang2.h", 1390, "_Bool"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value69);
                    if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value69;
                    __freed_obj__ = 0;
                    len_68=0;
                    for(
                    it_71=map$2charphsClassph_begin(self) ,                    0;                    _for_condtionalA5=                    !map$2charphsClassph_end(self) ,                    _for_condtionalA5;                    it_71=map$2charphsClassph_next(self) ,                    0                    ){
                        memset(&default_value_74,0,sizeof(struct sClass*));
                        it2_77=((struct sClass*)(right_value71=map$2charphsClassph_at(self,it_71,default_value_74)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value71);
                        if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value71;
                        __freed_obj__ = 0;
                        hash_78=string_get_hash_key(it_71)%size_64;
                        n_79=hash_78;
                        while(_while_condtional13=(_Bool)1,                        _while_condtional13) {
                            if(_if_conditional131=item_existance_67[n_79],                            _if_conditional131) {
                                n_79++;
                                if(_if_conditional132=n_79>=size_64,                                _if_conditional132) {
                                    n_79=0;
                                }
                                else {
                                    if(_if_conditional133=n_79==hash_78,                                    _if_conditional133) {
                                        printf("unexpected error in map.rehash(1)\n");
                                        stackframe();
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                item_existance_67[n_79]=(_Bool)1;
                                keys_65[n_79]=it_71;
                                items_66[n_79]=((struct sClass*)(right_value72=map$2charphsClassph_at(self,it_71,default_value_80)));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value72);
                                if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value72;
                                __freed_obj__ = 0;
                                len_68++;
                                break;
                            }
                        }
                    }
                    come_free((char*)self->items);
                    if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                    come_free((char*)self->keys);
                    self->keys=keys_65;
                    self->items=items_66;
                    self->item_existance=item_existance_67;
                    self->size=size_64;
                    self->len=len_68;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional123;
char* result_69;
char* __result53__;
_Bool _if_conditional124;
char* __result54__;
char* result_70;
char* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_69, 0, sizeof(char*));
memset(&result_70, 0, sizeof(char*));
                        if(_if_conditional123=self==((void*)0),                        _if_conditional123) {
                            memset(&result_69,0,sizeof(char*));
                            __result53__ = __result_obj__ = result_69;
                            return __result53__;
                        }
                        self->key_list->it=self->key_list->head;
                        if(_if_conditional124=self->key_list->it,                        _if_conditional124) {
                            __result54__ = __result_obj__ = self->key_list->it->item;
                            return __result54__;
                        }
                        memset(&result_70,0,sizeof(char*));
                        __result55__ = __result_obj__ = result_70;
                        return __result55__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result56__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result56__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional125;
char* result_72;
char* __result57__;
_Bool _if_conditional126;
char* __result58__;
char* result_73;
char* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_72, 0, sizeof(char*));
memset(&result_73, 0, sizeof(char*));
                        if(_if_conditional125=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional125) {
                            memset(&result_72,0,sizeof(char*));
                            __result57__ = __result_obj__ = result_72;
                            return __result57__;
                        }
                        self->key_list->it=self->key_list->it->next;
                        if(_if_conditional126=self->key_list->it,                        _if_conditional126) {
                            __result58__ = __result_obj__ = self->key_list->it->item;
                            return __result58__;
                        }
                        memset(&result_73,0,sizeof(char*));
                        __result59__ = __result_obj__ = result_73;
                        return __result59__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_75;
unsigned int it_76;
_Bool _while_condtional12;
_Bool _if_conditional127;
void* right_value70;
_Bool _if_conditional128;
struct sClass* __result60__;
_Bool _if_conditional129;
_Bool _if_conditional130;
struct sClass* __result61__;
struct sClass* __result62__;
struct sClass* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_75, 0, sizeof(unsigned int));
memset(&it_76, 0, sizeof(unsigned int));
memset(&right_value70, 0, sizeof(void*));
                            hash_75=string_get_hash_key(((char*)key))%self->size;
                            it_76=hash_75;
                            while(_while_condtional12=(_Bool)1,                            _while_condtional12) {
                                if(_if_conditional127=self->item_existance[it_76],                                _if_conditional127) {
                                    if(_if_conditional128=optional$2boolbool_value(((struct optional$2boolbool*)(right_value70=string_equals(self->keys[it_76],key)))),                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70),
                                    (right_value70 && right_value70 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                    __right_value_freed_obj[0] = right_value70, 
                                    __freed_obj__ = 0, 
                                    _if_conditional128) {
                                        __result60__ = __result_obj__ = self->items[it_76];
                                        if(default_value && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        return __result60__;
                                    }
                                    it_76++;
                                    if(_if_conditional129=it_76>=self->size,                                    _if_conditional129) {
                                        it_76=0;
                                    }
                                    else {
                                        if(_if_conditional130=it_76==hash_75,                                        _if_conditional130) {
                                            __result61__ = __result_obj__ = default_value;
                                            if(default_value && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            return __result61__;
                                        }
                                    }
                                }
                                else {
                                    __result62__ = __result_obj__ = default_value;
                                    if(default_value && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    return __result62__;
                                }
                            }
                            __result63__ = __result_obj__ = default_value;
                            if(default_value && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result63__;
                            if(default_value && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int it2_83;
struct list_item$1charp* it_84;
_Bool _while_condtional15;
void* right_value74;
_Bool _if_conditional137;
struct list$1charp* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_83, 0, sizeof(int));
memset(&it_84, 0, sizeof(struct list_item$1charp*));
memset(&right_value74, 0, sizeof(void*));
                                it2_83=0;
                                it_84=self->head;
                                while(_while_condtional15=it_84!=((void*)0),                                _while_condtional15) {
                                    if(_if_conditional137=optional$2boolbool_value(((struct optional$2boolbool*)(right_value74=string_equals(it_84->item,item)))),                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value74),
                                    (right_value74 && right_value74 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                    __right_value_freed_obj[0] = right_value74, 
                                    __freed_obj__ = 0, 
                                    _if_conditional137) {
                                        list$1charp_delete(self,it2_83,it2_83+1);
                                        break;
                                    }
                                    it2_83++;
                                    it_84=it_84->next;
                                }
                                __result67__ = __result_obj__ = self;
                                return __result67__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional138;
_Bool _if_conditional139;
_Bool _if_conditional140;
int tmp_85;
_Bool _if_conditional141;
_Bool _if_conditional142;
_Bool _if_conditional143;
struct list$1charp* __result64__;
_Bool _if_conditional144;
_Bool _if_conditional145;
struct list_item$1charp* it_88;
int i_89;
_Bool _while_condtional17;
_Bool _if_conditional146;
struct list_item$1charp* prev_it_90;
_Bool _if_conditional147;
_Bool _if_conditional148;
struct list_item$1charp* it_91;
int i_92;
_Bool _while_condtional18;
_Bool _if_conditional149;
_Bool _if_conditional150;
struct list_item$1charp* prev_it_93;
struct list_item$1charp* it_94;
struct list_item$1charp* head_prev_it_95;
struct list_item$1charp* tail_it_96;
int i_97;
_Bool _while_condtional19;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
struct list_item$1charp* prev_it_98;
_Bool _if_conditional154;
_Bool _if_conditional155;
struct list$1charp* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_85, 0, sizeof(int));
memset(&it_88, 0, sizeof(struct list_item$1charp*));
memset(&i_89, 0, sizeof(int));
memset(&prev_it_90, 0, sizeof(struct list_item$1charp*));
memset(&it_91, 0, sizeof(struct list_item$1charp*));
memset(&i_92, 0, sizeof(int));
memset(&prev_it_93, 0, sizeof(struct list_item$1charp*));
memset(&it_94, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_95, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_96, 0, sizeof(struct list_item$1charp*));
memset(&i_97, 0, sizeof(int));
memset(&prev_it_98, 0, sizeof(struct list_item$1charp*));
                                            if(_if_conditional138=head<0,                                            _if_conditional138) {
                                                head+=self->len;
                                            }
                                            if(_if_conditional139=tail<0,                                            _if_conditional139) {
                                                tail+=self->len+1;
                                            }
                                            if(_if_conditional140=head>tail,                                            _if_conditional140) {
                                                tmp_85=tail;
                                                tail=head;
                                                head=tmp_85;
                                            }
                                            if(_if_conditional141=head<0,                                            _if_conditional141) {
                                                head=0;
                                            }
                                            if(_if_conditional142=tail>self->len,                                            _if_conditional142) {
                                                tail=self->len;
                                            }
                                            if(_if_conditional143=head==tail,                                            _if_conditional143) {
                                                __result64__ = __result_obj__ = self;
                                                return __result64__;
                                            }
                                            if(_if_conditional144=head==0&&tail==self->len,                                            _if_conditional144) {
                                                list$1charp_reset(self);
                                            }
                                            else {
                                                if(_if_conditional145=head==0,                                                _if_conditional145) {
                                                    it_88=self->head;
                                                    i_89=0;
                                                    while(_while_condtional17=it_88!=((void*)0),                                                    _while_condtional17) {
                                                        if(_if_conditional146=i_89<tail,                                                        _if_conditional146) {
                                                            prev_it_90=it_88;
                                                            it_88=it_88->next;
                                                            i_89++;
                                                            if(prev_it_90 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_90, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            self->len--;
                                                        }
                                                        else {
                                                            if(_if_conditional147=i_89==tail,                                                            _if_conditional147) {
                                                                self->head=it_88;
                                                                self->head->prev=((void*)0);
                                                                break;
                                                            }
                                                            else {
                                                                it_88=it_88->next;
                                                                i_89++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    if(_if_conditional148=tail==self->len,                                                    _if_conditional148) {
                                                        it_91=self->head;
                                                        i_92=0;
                                                        while(_while_condtional18=it_91!=((void*)0),                                                        _while_condtional18) {
                                                            if(_if_conditional149=i_92==head,                                                            _if_conditional149) {
                                                                self->tail=it_91->prev;
                                                                self->tail->next=((void*)0);
                                                            }
                                                            if(_if_conditional150=i_92>=head,                                                            _if_conditional150) {
                                                                prev_it_93=it_91;
                                                                it_91=it_91->next;
                                                                i_92++;
                                                                if(prev_it_93 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_93, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_91=it_91->next;
                                                                i_92++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        it_94=self->head;
                                                        head_prev_it_95=((void*)0);
                                                        tail_it_96=((void*)0);
                                                        i_97=0;
                                                        while(_while_condtional19=it_94!=((void*)0),                                                        _while_condtional19) {
                                                            if(_if_conditional151=i_97==head,                                                            _if_conditional151) {
                                                                head_prev_it_95=it_94->prev;
                                                            }
                                                            if(_if_conditional152=i_97==tail,                                                            _if_conditional152) {
                                                                tail_it_96=it_94;
                                                            }
                                                            if(_if_conditional153=i_97>=head&&i_97<tail,                                                            _if_conditional153) {
                                                                prev_it_98=it_94;
                                                                it_94=it_94->next;
                                                                i_97++;
                                                                if(prev_it_98 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_98, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_94=it_94->next;
                                                                i_97++;
                                                            }
                                                        }
                                                        if(_if_conditional154=head_prev_it_95!=((void*)0),                                                        _if_conditional154) {
                                                            head_prev_it_95->next=tail_it_96;
                                                        }
                                                        if(_if_conditional155=tail_it_96!=((void*)0),                                                        _if_conditional155) {
                                                            tail_it_96->prev=head_prev_it_95;
                                                        }
                                                    }
                                                }
                                            }
                                            __result66__ = __result_obj__ = self;
                                            return __result66__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_86;
_Bool _while_condtional16;
struct list_item$1charp* prev_it_87;
struct list$1charp* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_86, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_87, 0, sizeof(struct list_item$1charp*));
                                                    it_86=self->head;
                                                    while(_while_condtional16=it_86!=((void*)0),                                                    _while_condtional16) {
                                                        prev_it_87=it_86;
                                                        it_86=it_86->next;
                                                        if(prev_it_87 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_87, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    }
                                                    self->head=((void*)0);
                                                    self->tail=((void*)0);
                                                    self->len=0;
                                                    __result65__ = __result_obj__ = self;
                                                    return __result65__;
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
_Bool _if_conditional161;
char* result_100;
char* __result68__;
_Bool _if_conditional162;
char* __result69__;
char* result_101;
char* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_100, 0, sizeof(char*));
memset(&result_101, 0, sizeof(char*));
                if(_if_conditional161=self==((void*)0),                _if_conditional161) {
                    memset(&result_100,0,sizeof(char*));
                    __result68__ = __result_obj__ = result_100;
                    return __result68__;
                }
                self->it=self->head;
                if(_if_conditional162=self->it,                _if_conditional162) {
                    __result69__ = __result_obj__ = self->it->item;
                    return __result69__;
                }
                memset(&result_101,0,sizeof(char*));
                __result70__ = __result_obj__ = result_101;
                return __result70__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __result71__ = self==((void*)0)||self->it==((void*)0);
                return __result71__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional163;
char* result_103;
char* __result72__;
_Bool _if_conditional164;
char* __result73__;
char* result_104;
char* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_103, 0, sizeof(char*));
memset(&result_104, 0, sizeof(char*));
                if(_if_conditional163=self==((void*)0)||self->it==((void*)0),                _if_conditional163) {
                    memset(&result_103,0,sizeof(char*));
                    __result72__ = __result_obj__ = result_103;
                    return __result72__;
                }
                self->it=self->it->next;
                if(_if_conditional164=self->it,                _if_conditional164) {
                    __result73__ = __result_obj__ = self->it->item;
                    return __result73__;
                }
                memset(&result_104,0,sizeof(char*));
                __result74__ = __result_obj__ = result_104;
                return __result74__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional167;
void* right_value76;
struct list_item$1charp* litem_105;
_Bool _if_conditional168;
void* right_value77;
struct list_item$1charp* litem_106;
void* right_value78;
struct list_item$1charp* litem_107;
struct list$1charp* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value76, 0, sizeof(void*));
memset(&litem_105, 0, sizeof(struct list_item$1charp*));
memset(&right_value77, 0, sizeof(void*));
memset(&litem_106, 0, sizeof(struct list_item$1charp*));
memset(&right_value78, 0, sizeof(void*));
memset(&litem_107, 0, sizeof(struct list_item$1charp*));
                    if(_if_conditional167=self->len==0,                    _if_conditional167) {
                        litem_105=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value76=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 282, "struct list_item$1charp"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value76);
                        if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value76;
                        __freed_obj__ = 0;
                        litem_105->prev=((void*)0);
                        litem_105->next=((void*)0);
                        litem_105->item=item;
                        self->tail=litem_105;
                        self->head=litem_105;
                    }
                    else {
                        if(_if_conditional168=self->len==1,                        _if_conditional168) {
                            litem_106=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value77=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 292, "struct list_item$1charp"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
                            if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value77;
                            __freed_obj__ = 0;
                            litem_106->prev=self->head;
                            litem_106->next=((void*)0);
                            litem_106->item=item;
                            self->tail=litem_106;
                            self->head->next=litem_106;
                        }
                        else {
                            litem_107=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value78=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 302, "struct list_item$1charp"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value78);
                            if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value78;
                            __freed_obj__ = 0;
                            litem_107->prev=self->tail;
                            litem_107->next=((void*)0);
                            litem_107->item=item;
                            self->tail->next=litem_107;
                            self->tail=litem_107;
                        }
                    }
                    self->len++;
                    __result75__ = __result_obj__ = self;
                    return __result75__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional169;
void* right_value81;
struct list_item$1tuple2$2charphsTypephph* litem_114;
struct tuple2$2charphsTypeph* __dec_obj29;
_Bool _if_conditional172;
void* right_value82;
struct list_item$1tuple2$2charphsTypephph* litem_115;
struct tuple2$2charphsTypeph* __dec_obj30;
void* right_value83;
struct list_item$1tuple2$2charphsTypephph* litem_116;
struct tuple2$2charphsTypeph* __dec_obj31;
struct list$1tuple2$2charphsTypephph* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value81, 0, sizeof(void*));
memset(&litem_114, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value82, 0, sizeof(void*));
memset(&litem_115, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value83, 0, sizeof(void*));
memset(&litem_116, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                if(_if_conditional169=self->len==0,                _if_conditional169) {
                    litem_114=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value81=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 282, "struct list_item$1tuple2$2charphsTypephph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
                    if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value81;
                    __freed_obj__ = 0;
                    litem_114->prev=((void*)0);
                    litem_114->next=((void*)0);
                    __dec_obj29=litem_114->item;
                    litem_114->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    if(__dec_obj29) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->tail=litem_114;
                    self->head=litem_114;
                }
                else {
                    if(_if_conditional172=self->len==1,                    _if_conditional172) {
                        litem_115=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value82=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 292, "struct list_item$1tuple2$2charphsTypephph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value82);
                        if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value82;
                        __freed_obj__ = 0;
                        litem_115->prev=self->head;
                        litem_115->next=((void*)0);
                        __dec_obj30=litem_115->item;
                        litem_115->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                        if(__dec_obj30) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail=litem_115;
                        self->head->next=litem_115;
                    }
                    else {
                        litem_116=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value83=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 302, "struct list_item$1tuple2$2charphsTypephph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
                        if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value83;
                        __freed_obj__ = 0;
                        litem_116->prev=self->tail;
                        litem_116->next=((void*)0);
                        __dec_obj31=litem_116->item;
                        litem_116->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                        if(__dec_obj31) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail->next=litem_116;
                        self->tail=litem_116;
                    }
                }
                self->len++;
                __result77__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result77__;
                if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional170;
_Bool _if_conditional171;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional170=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional170) {
                            if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        if(_if_conditional171=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional171) {
                            if(self->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __dec_obj32;
struct sType* __dec_obj33;
struct tuple2$2charphsTypeph* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __dec_obj32=self->v1;
                self->v1=(char*)come_increment_ref_count(v1);
                if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0,0); }
                __dec_obj33=self->v2;
                self->v2=(struct sType*)come_increment_ref_count(v2);
                if(__dec_obj33) { come_call_finalizer(sType_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0); }
                __result78__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
                if(v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result78__;
                if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
                if(v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sTypeph* it_117;
_Bool _while_condtional20;
struct list_item$1sTypeph* prev_it_118;
struct list$1sTypeph* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_117, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_118, 0, sizeof(struct list_item$1sTypeph*));
            it_117=self->head;
            while(_while_condtional20=it_117!=((void*)0),            _while_condtional20) {
                prev_it_118=it_117;
                it_117=it_117->next;
                if(prev_it_118 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_118, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result79__ = __result_obj__ = self;
            return __result79__;
}

struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, _Bool output, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value101;
char* __dec_obj37;
void* right_value102;
char* __dec_obj38;
void* right_value116;
struct sClass* __dec_obj47;
struct sStructNode* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj37=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value101=__builtin_string(info->sname))));
    if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value101);
    if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { right_value101 = come_decrement_ref_count(right_value101, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value101;
    __freed_obj__ = 0;
    __dec_obj38=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value102=__builtin_string(name))));
    if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value102);
    if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { right_value102 = come_decrement_ref_count(right_value102, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value102;
    __freed_obj__ = 0;
    __dec_obj47=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value116=sClass_clone(klass))));
    if(__dec_obj47) { come_call_finalizer(sClass_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value116);
    if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value116;
    __freed_obj__ = 0;
    self->mOutput=output;
    __result90__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sStructNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(klass && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result90__;
    if(self && !__freed_obj__) { come_call_finalizer(sStructNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(klass && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional176;
struct sClass* __result82__;
void* right_value103;
struct sClass* result_127;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool _if_conditional184;
_Bool _if_conditional185;
void* right_value104;
char* __dec_obj39;
_Bool _if_conditional186;
_Bool _if_conditional187;
_Bool _if_conditional188;
void* right_value114;
struct list$1tuple2$2charphsTypephph* __dec_obj45;
_Bool _if_conditional195;
_Bool _if_conditional196;
void* right_value115;
char* __dec_obj46;
struct sClass* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value103, 0, sizeof(void*));
memset(&result_127, 0, sizeof(struct sClass*));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&right_value115, 0, sizeof(void*));
        if(_if_conditional176=self==(void*)0,        _if_conditional176) {
            __result82__ = __result_obj__ = (void*)0;
            return __result82__;
        }
        result_127=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value103=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "struct sClass"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value103);
        if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value103;
        __freed_obj__ = 0;
        if(_if_conditional177=self!=((void*)0),        _if_conditional177) {
            result_127->mStruct=self->mStruct;
        }
        if(_if_conditional178=self!=((void*)0),        _if_conditional178) {
            result_127->mFloat=self->mFloat;
        }
        if(_if_conditional179=self!=((void*)0),        _if_conditional179) {
            result_127->mUnion=self->mUnion;
        }
        if(_if_conditional180=self!=((void*)0),        _if_conditional180) {
            result_127->mGenerics=self->mGenerics;
        }
        if(_if_conditional181=self!=((void*)0),        _if_conditional181) {
            result_127->mMethodGenerics=self->mMethodGenerics;
        }
        if(_if_conditional182=self!=((void*)0),        _if_conditional182) {
            result_127->mEnum=self->mEnum;
        }
        if(_if_conditional183=self!=((void*)0),        _if_conditional183) {
            result_127->mProtocol=self->mProtocol;
        }
        if(_if_conditional184=self!=((void*)0),        _if_conditional184) {
            result_127->mNumber=self->mNumber;
        }
        if(_if_conditional185=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional185) {
            __dec_obj39=result_127->mName;
            result_127->mName=(char*)come_increment_ref_count(((char*)(right_value104=string_clone(self->mName))));
            if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value104);
            if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value104;
            __freed_obj__ = 0;
        }
        if(_if_conditional186=self!=((void*)0),        _if_conditional186) {
            result_127->mGenericsNum=self->mGenericsNum;
        }
        if(_if_conditional187=self!=((void*)0),        _if_conditional187) {
            result_127->mMethodGenericsNum=self->mMethodGenericsNum;
        }
        if(_if_conditional188=self!=((void*)0)&&self->mFields!=((void*)0),        _if_conditional188) {
            __dec_obj45=result_127->mFields;
            result_127->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value114=list$1tuple2$2charphsTypephphp_clone(self->mFields))));
            if(__dec_obj45) { come_call_finalizer(list$1tuple2$2charphsTypephph_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value114);
            if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value114;
            __freed_obj__ = 0;
        }
        if(_if_conditional195=self!=((void*)0),        _if_conditional195) {
            result_127->mOutputed=self->mOutputed;
        }
        if(_if_conditional196=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional196) {
            __dec_obj46=result_127->mDeclareSName;
            result_127->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value115=string_clone(self->mDeclareSName))));
            if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
            if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value115;
            __freed_obj__ = 0;
        }
        __result89__ = __result_obj__ = result_127;
        if(result_127 && !__freed_obj__) { come_call_finalizer(sClass_finalize,result_127, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result89__;
        if(result_127 && !__freed_obj__) { come_call_finalizer(sClass_finalize,result_127, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional189;
struct list$1tuple2$2charphsTypephph* __result83__;
void* right_value105;
void* right_value106;
struct list$1tuple2$2charphsTypephph* result_128;
struct list_item$1tuple2$2charphsTypephph* it_129;
_Bool _while_condtional21;
void* right_value113;
struct list$1tuple2$2charphsTypephph* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value105, 0, sizeof(void*));
memset(&right_value106, 0, sizeof(void*));
memset(&result_128, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_129, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value113, 0, sizeof(void*));
                if(_if_conditional189=self==((void*)0),                _if_conditional189) {
                    __result83__ = __result_obj__ = ((void*)0);
                    return __result83__;
                }
                result_128=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value106=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value105=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 198, "struct list$1tuple2$2charphsTypephph"))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
                if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value105;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value106);
                if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value106;
                __freed_obj__ = 0;
                it_129=self->head;
                while(_while_condtional21=it_129!=((void*)0),                _while_condtional21) {
                    list$1tuple2$2charphsTypephph_add(result_128,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value113=tuple2$2charphsTypephp_clone(it_129->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
                    if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value113;
                    __freed_obj__ = 0;
                    it_129=it_129->next;
                }
                __result88__ = __result_obj__ = result_128;
                if(result_128 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,result_128, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result88__;
                if(result_128 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,result_128, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1tuple2$2charphsTypephph* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result84__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result84__;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional190;
void* right_value107;
struct list_item$1tuple2$2charphsTypephph* litem_130;
struct tuple2$2charphsTypeph* __dec_obj40;
_Bool _if_conditional191;
void* right_value108;
struct list_item$1tuple2$2charphsTypephph* litem_131;
struct tuple2$2charphsTypeph* __dec_obj41;
void* right_value109;
struct list_item$1tuple2$2charphsTypephph* litem_132;
struct tuple2$2charphsTypeph* __dec_obj42;
struct list$1tuple2$2charphsTypephph* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value107, 0, sizeof(void*));
memset(&litem_130, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value108, 0, sizeof(void*));
memset(&litem_131, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value109, 0, sizeof(void*));
memset(&litem_132, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                        if(_if_conditional190=self->len==0,                        _if_conditional190) {
                            litem_130=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value107=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 212, "struct list_item$1tuple2$2charphsTypephph"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
                            if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value107;
                            __freed_obj__ = 0;
                            litem_130->prev=((void*)0);
                            litem_130->next=((void*)0);
                            __dec_obj40=litem_130->item;
                            litem_130->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                            if(__dec_obj40) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->tail=litem_130;
                            self->head=litem_130;
                        }
                        else {
                            if(_if_conditional191=self->len==1,                            _if_conditional191) {
                                litem_131=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value108=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 222, "struct list_item$1tuple2$2charphsTypephph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value108);
                                if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value108;
                                __freed_obj__ = 0;
                                litem_131->prev=self->head;
                                litem_131->next=((void*)0);
                                __dec_obj41=litem_131->item;
                                litem_131->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                if(__dec_obj41) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
                                self->tail=litem_131;
                                self->head->next=litem_131;
                            }
                            else {
                                litem_132=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value109=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 232, "struct list_item$1tuple2$2charphsTypephph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
                                if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value109;
                                __freed_obj__ = 0;
                                litem_132->prev=self->tail;
                                litem_132->next=((void*)0);
                                __dec_obj42=litem_132->item;
                                litem_132->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                if(__dec_obj42) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0); }
                                self->tail->next=litem_132;
                                self->tail=litem_132;
                            }
                        }
                        self->len++;
                        __result85__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result85__;
                        if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional192;
struct tuple2$2charphsTypeph* __result86__;
void* right_value110;
struct tuple2$2charphsTypeph* result_133;
_Bool _if_conditional193;
void* right_value111;
char* __dec_obj43;
_Bool _if_conditional194;
void* right_value112;
struct sType* __dec_obj44;
struct tuple2$2charphsTypeph* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value110, 0, sizeof(void*));
memset(&result_133, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
                        if(_if_conditional192=self==(void*)0,                        _if_conditional192) {
                            __result86__ = __result_obj__ = (void*)0;
                            return __result86__;
                        }
                        result_133=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value110=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "struct tuple2$2charphsTypeph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value110);
                        if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value110;
                        __freed_obj__ = 0;
                        if(_if_conditional193=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional193) {
                            __dec_obj43=result_133->v1;
                            result_133->v1=(char*)come_increment_ref_count(((char*)(right_value111=string_clone(self->v1))));
                            if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value111);
                            if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value111;
                            __freed_obj__ = 0;
                        }
                        if(_if_conditional194=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional194) {
                            __dec_obj44=result_133->v2;
                            result_133->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value112=sType_clone(self->v2))));
                            if(__dec_obj44) { come_call_finalizer(sType_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value112);
                            if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value112;
                            __freed_obj__ = 0;
                        }
                        __result87__ = __result_obj__ = result_133;
                        if(result_133 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,result_133, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result87__;
                        if(result_133 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,result_133, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

_Bool sStructNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result91__ = (_Bool)1;
    return __result91__;
}

char* sStructNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value117;
char* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value117, 0, sizeof(void*));
    __result92__ = __result_obj__ = ((char*)(right_value117=__builtin_string("sStructNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
    if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value117;
    __freed_obj__ = 0;
    return __result92__;
}

_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value118;
struct sClass* klass_134;
void* right_value119;
char* name_135;
void* right_value120;
_Bool _if_conditional200;
void* right_value121;
void* right_value122;
_Bool _if_conditional201;
void* right_value123;
struct sClass* klass2_136;
void* right_value124;
struct list$1tuple2$2charphsTypephph* __dec_obj48;
void* right_value125;
void* right_value126;
struct sType* type_137;
void* right_value135;
_Bool _if_conditional224;
_Bool __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value118, 0, sizeof(void*));
memset(&klass_134, 0, sizeof(struct sClass*));
memset(&right_value119, 0, sizeof(void*));
memset(&name_135, 0, sizeof(char*));
memset(&right_value120, 0, sizeof(void*));
memset(&right_value121, 0, sizeof(void*));
memset(&right_value122, 0, sizeof(void*));
memset(&right_value123, 0, sizeof(void*));
memset(&klass2_136, 0, sizeof(struct sClass*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&right_value126, 0, sizeof(void*));
memset(&type_137, 0, sizeof(struct sType*));
memset(&right_value135, 0, sizeof(void*));
    klass_134=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value118=sClass_clone(self->mClass))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value118;
    __freed_obj__ = 0;
    name_135=(char*)come_increment_ref_count(((char*)(right_value119=__builtin_string(self->mName))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value119);
    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { right_value119 = come_decrement_ref_count(right_value119, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value119;
    __freed_obj__ = 0;
    if(_if_conditional200=((struct sClass*)(right_value120=map$2charphsClassph_at(info->classes,name_135,((void*)0))))==((void*)0),    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120),
    (right_value120 && right_value120 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sClass_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0):0,
    __right_value_freed_obj[0] = right_value120, 
    __freed_obj__ = 0, 
    _if_conditional200) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(name_135),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value121=sClass_clone(klass_134)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value121);
        if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value121;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional201=list$1tuple2$2charphsTypephph_length(((struct sClass*)(right_value122=map$2charphsClassph_at(info->classes,name_135,((void*)0))))->mFields)==0&&list$1tuple2$2charphsTypephph_length(klass_134->mFields)>0,        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122),
        (right_value122 && right_value122 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sClass_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __right_value_freed_obj[0] = right_value122, 
        __freed_obj__ = 0, 
        _if_conditional201) {
            klass2_136=((struct sClass*)(right_value123=map$2charphsClassph_at(info->classes,name_135,((void*)0))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value123);
            if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value123;
            __freed_obj__ = 0;
            __dec_obj48=klass2_136->mFields;
            klass2_136->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value124=list$1tuple2$2charphsTypephphp_clone(klass_134->mFields))));
            if(__dec_obj48) { come_call_finalizer(list$1tuple2$2charphsTypephph_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value124);
            if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value124;
            __freed_obj__ = 0;
        }
    }
    type_137=(struct sType*)come_increment_ref_count(((struct sType*)(right_value126=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value125=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 227, "struct sType")))),name_135,(_Bool)0,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
    if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value125;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value126);
    if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value126;
    __freed_obj__ = 0;
    map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(name_135),(struct sType*)come_increment_ref_count(((struct sType*)(right_value135=sType_clone(type_137)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value135);
    if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value135;
    __freed_obj__ = 0;
    if(_if_conditional224=self->mOutput,    _if_conditional224) {
        output_struct(klass_134,info);
    }
    __result106__ = (_Bool)1;
    if(klass_134 && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass_134, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(name_135 && !__freed_obj__) { name_135 = come_decrement_ref_count(name_135, (void*)0, (void*)0, 0, 0, 0); }
    if(type_137 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_137, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result106__;
    if(klass_134 && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass_134, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(name_135 && !__freed_obj__) { name_135 = come_decrement_ref_count(name_135, (void*)0, (void*)0, 0, 0, 0); }
    if(type_137 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_137, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result93__ = self->len;
            return __result93__;
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional202;
unsigned int hash_155;
unsigned int it_156;
_Bool _while_condtional24;
_Bool _if_conditional214;
void* right_value133;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool same_key_exist_157;
char* it2_158;
_Bool _for_condtionalA10;
void* right_value134;
_Bool _if_conditional222;
_Bool _if_conditional223;
struct map$2charphsTypeph* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_155, 0, sizeof(unsigned int));
memset(&it_156, 0, sizeof(unsigned int));
memset(&right_value133, 0, sizeof(void*));
memset(&same_key_exist_157, 0, sizeof(_Bool));
memset(&it2_158, 0, sizeof(char*));
memset(&right_value134, 0, sizeof(void*));
        if(_if_conditional202=self->len*10>=self->size,        _if_conditional202) {
            map$2charphsTypeph_rehash(self);
        }
        hash_155=string_get_hash_key(key)%self->size;
        it_156=hash_155;
        while(_while_condtional24=(_Bool)1,        _while_condtional24) {
            if(_if_conditional214=self->item_existance[it_156],            _if_conditional214) {
                if(_if_conditional215=optional$2boolbool_value(((struct optional$2boolbool*)(right_value133=string_equals(self->keys[it_156],key)))),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133),
                (right_value133 && right_value133 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value133, 
                __freed_obj__ = 0, 
                _if_conditional215) {
                    if(_if_conditional216=1,                    _if_conditional216) {
                        list$1charp_remove(self->key_list,self->keys[it_156]);
                        if(self->keys[it_156] && !__freed_obj__) { self->keys[it_156] = come_decrement_ref_count(self->keys[it_156], (void*)0, (void*)0, 0, 0, 0); }
                        self->keys[it_156]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charp_remove(self->key_list,self->keys[it_156]);
                        self->keys[it_156]=key;
                    }
                    if(_if_conditional217=1,                    _if_conditional217) {
                        if(self->items[it_156] && !__freed_obj__) { come_call_finalizer(sType_finalize,self->items[it_156], (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->items[it_156]=(struct sType*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_156]=item;
                    }
                    break;
                }
                it_156++;
                if(_if_conditional218=it_156>=self->size,                _if_conditional218) {
                    it_156=0;
                }
                else {
                    if(_if_conditional219=it_156==hash_155,                    _if_conditional219) {
                        printf("unexpected error in map.insert\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                self->item_existance[it_156]=(_Bool)1;
                if(_if_conditional220=1,                _if_conditional220) {
                    self->keys[it_156]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_156]=key;
                }
                if(_if_conditional221=1,                _if_conditional221) {
                    self->items[it_156]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_156]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_157=(_Bool)0;
        for(
        it2_158=list$1charp_begin(self->key_list) ,        0;        _for_condtionalA10=        !list$1charp_end(self->key_list) ,        _for_condtionalA10;        it2_158=list$1charp_next(self->key_list) ,        0        ){
            if(_if_conditional222=optional$2boolbool_value(((struct optional$2boolbool*)(right_value134=string_equals(it2_158,key)))),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value134),
            (right_value134 && right_value134 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value134, 
            __freed_obj__ = 0, 
            _if_conditional222) {
                same_key_exist_157=(_Bool)1;
            }
        }
        if(_if_conditional223=!same_key_exist_157,        _if_conditional223) {
            list$1charp_push_back(self->key_list,key);
        }
        __result105__ = __result_obj__ = self;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result105__;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_138;
void* right_value127;
char** keys_139;
void* right_value128;
struct sType** items_140;
void* right_value129;
_Bool* item_existance_141;
int len_142;
char* it_145;
_Bool _for_condtionalA9;
struct sType* default_value_148;
void* right_value131;
struct sType* it2_151;
unsigned int hash_152;
int n_153;
_Bool _while_condtional23;
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional213;
struct sType* default_value_154;
void* right_value132;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_138, 0, sizeof(int));
memset(&right_value127, 0, sizeof(void*));
memset(&keys_139, 0, sizeof(char**));
memset(&right_value128, 0, sizeof(void*));
memset(&items_140, 0, sizeof(struct sType**));
memset(&right_value129, 0, sizeof(void*));
memset(&item_existance_141, 0, sizeof(_Bool*));
memset(&len_142, 0, sizeof(int));
memset(&it_145, 0, sizeof(char*));
memset(&default_value_148, 0, sizeof(struct sType*));
memset(&right_value131, 0, sizeof(void*));
memset(&it2_151, 0, sizeof(struct sType*));
memset(&hash_152, 0, sizeof(unsigned int));
memset(&n_153, 0, sizeof(int));
memset(&default_value_154, 0, sizeof(struct sType*));
memset(&right_value132, 0, sizeof(void*));
                size_138=self->size*10;
                keys_139=(char**)come_increment_ref_count(((char**)(right_value127=(char**)come_calloc(1, sizeof(char*)*(1*(size_138)), "./comelang2.h", 1388, "char*"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
                if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value127;
                __freed_obj__ = 0;
                items_140=(struct sType**)come_increment_ref_count(((struct sType**)(right_value128=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_138)), "./comelang2.h", 1389, "struct sType*"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value128);
                if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value128;
                __freed_obj__ = 0;
                item_existance_141=(_Bool*)come_increment_ref_count(((_Bool*)(right_value129=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_138)), "./comelang2.h", 1390, "_Bool"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
                if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value129;
                __freed_obj__ = 0;
                len_142=0;
                for(
                it_145=map$2charphsTypeph_begin(self) ,                0;                _for_condtionalA9=                !map$2charphsTypeph_end(self) ,                _for_condtionalA9;                it_145=map$2charphsTypeph_next(self) ,                0                ){
                    memset(&default_value_148,0,sizeof(struct sType*));
                    it2_151=((struct sType*)(right_value131=map$2charphsTypeph_at(self,it_145,default_value_148)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value131);
                    if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value131;
                    __freed_obj__ = 0;
                    hash_152=string_get_hash_key(it_145)%size_138;
                    n_153=hash_152;
                    while(_while_condtional23=(_Bool)1,                    _while_condtional23) {
                        if(_if_conditional211=item_existance_141[n_153],                        _if_conditional211) {
                            n_153++;
                            if(_if_conditional212=n_153>=size_138,                            _if_conditional212) {
                                n_153=0;
                            }
                            else {
                                if(_if_conditional213=n_153==hash_152,                                _if_conditional213) {
                                    printf("unexpected error in map.rehash(1)\n");
                                    stackframe();
                                    exit(2);
                                }
                            }
                        }
                        else {
                            item_existance_141[n_153]=(_Bool)1;
                            keys_139[n_153]=it_145;
                            items_140[n_153]=((struct sType*)(right_value132=map$2charphsTypeph_at(self,it_145,default_value_154)));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value132);
                            if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value132;
                            __freed_obj__ = 0;
                            len_142++;
                            break;
                        }
                    }
                }
                come_free((char*)self->items);
                if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                come_free((char*)self->keys);
                self->keys=keys_139;
                self->items=items_140;
                self->item_existance=item_existance_141;
                self->size=size_138;
                self->len=len_142;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional203;
char* result_143;
char* __result94__;
_Bool _if_conditional204;
char* __result95__;
char* result_144;
char* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_143, 0, sizeof(char*));
memset(&result_144, 0, sizeof(char*));
                    if(_if_conditional203=self==((void*)0),                    _if_conditional203) {
                        memset(&result_143,0,sizeof(char*));
                        __result94__ = __result_obj__ = result_143;
                        return __result94__;
                    }
                    self->key_list->it=self->key_list->head;
                    if(_if_conditional204=self->key_list->it,                    _if_conditional204) {
                        __result95__ = __result_obj__ = self->key_list->it->item;
                        return __result95__;
                    }
                    memset(&result_144,0,sizeof(char*));
                    __result96__ = __result_obj__ = result_144;
                    return __result96__;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __result97__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result97__;
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional205;
char* result_146;
char* __result98__;
_Bool _if_conditional206;
char* __result99__;
char* result_147;
char* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_146, 0, sizeof(char*));
memset(&result_147, 0, sizeof(char*));
                    if(_if_conditional205=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional205) {
                        memset(&result_146,0,sizeof(char*));
                        __result98__ = __result_obj__ = result_146;
                        return __result98__;
                    }
                    self->key_list->it=self->key_list->it->next;
                    if(_if_conditional206=self->key_list->it,                    _if_conditional206) {
                        __result99__ = __result_obj__ = self->key_list->it->item;
                        return __result99__;
                    }
                    memset(&result_147,0,sizeof(char*));
                    __result100__ = __result_obj__ = result_147;
                    return __result100__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_149;
unsigned int it_150;
_Bool _while_condtional22;
_Bool _if_conditional207;
void* right_value130;
_Bool _if_conditional208;
struct sType* __result101__;
_Bool _if_conditional209;
_Bool _if_conditional210;
struct sType* __result102__;
struct sType* __result103__;
struct sType* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_149, 0, sizeof(unsigned int));
memset(&it_150, 0, sizeof(unsigned int));
memset(&right_value130, 0, sizeof(void*));
                        hash_149=string_get_hash_key(((char*)key))%self->size;
                        it_150=hash_149;
                        while(_while_condtional22=(_Bool)1,                        _while_condtional22) {
                            if(_if_conditional207=self->item_existance[it_150],                            _if_conditional207) {
                                if(_if_conditional208=optional$2boolbool_value(((struct optional$2boolbool*)(right_value130=string_equals(self->keys[it_150],key)))),                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value130),
                                (right_value130 && right_value130 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value130, 
                                __freed_obj__ = 0, 
                                _if_conditional208) {
                                    __result101__ = __result_obj__ = self->items[it_150];
                                    if(default_value && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    return __result101__;
                                }
                                it_150++;
                                if(_if_conditional209=it_150>=self->size,                                _if_conditional209) {
                                    it_150=0;
                                }
                                else {
                                    if(_if_conditional210=it_150==hash_149,                                    _if_conditional210) {
                                        __result102__ = __result_obj__ = default_value;
                                        if(default_value && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        return __result102__;
                                    }
                                }
                            }
                            else {
                                __result103__ = __result_obj__ = default_value;
                                if(default_value && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result103__;
                            }
                        }
                        __result104__ = __result_obj__ = default_value;
                        if(default_value && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result104__;
                        if(default_value && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
}

int sStructNode_sline(struct sStructNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result107__ = self->sline;
    return __result107__;
}

char* sStructNode_sname(struct sStructNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value136;
char* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value136, 0, sizeof(void*));
    __result108__ = __result_obj__ = ((char*)(right_value136=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value136);
    if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value136;
    __freed_obj__ = 0;
    return __result108__;
}

struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value137;
char* __dec_obj49;
void* right_value138;
char* __dec_obj50;
void* right_value139;
struct sClass* __dec_obj51;
struct sStructNobodyNode* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj49=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value137=__builtin_string(info->sname))));
    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value137);
    if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value137;
    __freed_obj__ = 0;
    __dec_obj50=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value138=__builtin_string(name))));
    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value138);
    if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value138;
    __freed_obj__ = 0;
    __dec_obj51=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value139=sClass_clone(klass))));
    if(__dec_obj51) { come_call_finalizer(sClass_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value139);
    if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value139;
    __freed_obj__ = 0;
    __result109__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sStructNobodyNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(klass && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result109__;
    if(self && !__freed_obj__) { come_call_finalizer(sStructNobodyNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(klass && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sStructNobodyNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result110__ = (_Bool)1;
    return __result110__;
}

char* sStructNobodyNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value140;
char* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value140, 0, sizeof(void*));
    __result111__ = __result_obj__ = ((char*)(right_value140=__builtin_string("sStructNobodyNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value140);
    if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value140;
    __freed_obj__ = 0;
    return __result111__;
}

_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value141;
char* name_159;
struct sClass* klass_160;
void* right_value142;
_Bool _if_conditional228;
void* right_value143;
void* right_value144;
void* right_value145;
struct sType* type_161;
void* right_value146;
_Bool _if_conditional229;
_Bool __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value141, 0, sizeof(void*));
memset(&name_159, 0, sizeof(char*));
memset(&klass_160, 0, sizeof(struct sClass*));
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&type_161, 0, sizeof(struct sType*));
memset(&right_value146, 0, sizeof(void*));
    name_159=(char*)come_increment_ref_count(((char*)(right_value141=__builtin_string(self->mName))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value141);
    if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value141;
    __freed_obj__ = 0;
    klass_160=self->mClass;
    if(_if_conditional228=((struct sClass*)(right_value142=map$2charphsClassph_at(info->classes,name_159,((void*)0))))==((void*)0),    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value142),
    (right_value142 && right_value142 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sClass_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0):0,
    __right_value_freed_obj[0] = right_value142, 
    __freed_obj__ = 0, 
    _if_conditional228) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(name_159),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value143=sClass_clone(klass_160)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value143);
        if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value143;
        __freed_obj__ = 0;
    }
    type_161=(struct sType*)come_increment_ref_count(((struct sType*)(right_value145=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value144=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 286, "struct sType")))),name_159,(_Bool)0,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value144);
    if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value144;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value145);
    if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value145;
    __freed_obj__ = 0;
    map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(name_159),(struct sType*)come_increment_ref_count(((struct sType*)(right_value146=sType_clone(type_161)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value146);
    if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value146;
    __freed_obj__ = 0;
    if(_if_conditional229=info->output_header_file&&string_operator_not_equals(klass_160->mDeclareSName,info->base_sname),    _if_conditional229) {
    }
    else {
        add_come_code_at_source_head(info,"struct %s;\n",name_159);
    }
    __result112__ = (_Bool)1;
    if(name_159 && !__freed_obj__) { name_159 = come_decrement_ref_count(name_159, (void*)0, (void*)0, 0, 0, 0); }
    if(type_161 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_161, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result112__;
    if(name_159 && !__freed_obj__) { name_159 = come_decrement_ref_count(name_159, (void*)0, (void*)0, 0, 0, 0); }
    if(type_161 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_161, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sStructNobodyNode_sline(struct sStructNobodyNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result113__ = self->sline;
    return __result113__;
}

char* sStructNobodyNode_sname(struct sStructNobodyNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value147;
char* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value147, 0, sizeof(void*));
    __result114__ = __result_obj__ = ((char*)(right_value147=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value147);
    if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value147;
    __freed_obj__ = 0;
    return __result114__;
}

struct sGenericsStructNode* sGenericsStructNode_initialize(struct sGenericsStructNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value148;
char* __dec_obj52;
struct sGenericsStructNode* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value148, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj52=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value148=__builtin_string(info->sname))));
    if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value148);
    if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value148;
    __freed_obj__ = 0;
    __result115__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sGenericsStructNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result115__;
    if(self && !__freed_obj__) { come_call_finalizer(sGenericsStructNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sGenericsStructNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result116__ = (_Bool)1;
    return __result116__;
}

char* sGenericsStructNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value149;
char* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value149, 0, sizeof(void*));
    __result117__ = __result_obj__ = ((char*)(right_value149=__builtin_string("sGenericsStructNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value149);
    if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value149;
    __freed_obj__ = 0;
    return __result117__;
}

_Bool sGenericsStructNode_compile(struct sGenericsStructNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result118__ = (_Bool)1;
    return __result118__;
}

int sGenericsStructNode_sline(struct sGenericsStructNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result119__ = self->sline;
    return __result119__;
}

char* sGenericsStructNode_sname(struct sGenericsStructNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value150;
char* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value150, 0, sizeof(void*));
    __result120__ = __result_obj__ = ((char*)(right_value150=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value150);
    if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { right_value150 = come_decrement_ref_count(right_value150, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value150;
    __freed_obj__ = 0;
    return __result120__;
}

struct sNode* parse_struct(char* type_name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* klass_162;
_Bool output_163;
void* right_value151;
_Bool _if_conditional231;
void* right_value152;
void* right_value153;
void* right_value154;
struct sClass* __dec_obj53;
void* right_value155;
void* right_value156;
void* right_value157;
struct sClass* __dec_obj54;
_Bool _while_condtional26;
_Bool multiple_declare_166;
char* p_167;
int sline_168;
_Bool no_output_err_169;
void* right_value158;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* type_170;
char* name_171;
_Bool err_172;
_Bool _if_conditional234;
_Bool _if_conditional235;
void* right_value159;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* base_type_173;
char* name_174;
_Bool err_175;
void* right_value160;
struct tuple2$2sTypephcharph* multiple_assign_var6;
struct sType* type2_176;
char* name2_177;
_Bool _if_conditional238;
void* right_value161;
void* right_value162;
_Bool _while_condtional27;
void* right_value163;
struct tuple2$2sTypephcharph* multiple_assign_var7;
struct sType* type2_178;
char* name2_179;
_Bool _if_conditional239;
void* right_value164;
void* right_value165;
void* right_value166;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* type2_180;
char* name_181;
_Bool err_182;
_Bool _if_conditional240;
_Bool _if_conditional241;
void* right_value167;
void* right_value168;
_Bool _if_conditional242;
void* right_value169;
void* right_value170;
void* right_value171;
struct sNode* _inf_value1;
struct sStructNode* _inf_obj_value1;
void* right_value176;
struct sNode* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&klass_162, 0, sizeof(struct sClass*));
memset(&output_163, 0, sizeof(_Bool));
memset(&right_value151, 0, sizeof(void*));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&multiple_declare_166, 0, sizeof(_Bool));
memset(&p_167, 0, sizeof(char*));
memset(&sline_168, 0, sizeof(int));
memset(&no_output_err_169, 0, sizeof(_Bool));
memset(&right_value158, 0, sizeof(void*));
memset(&type_170, 0, sizeof(struct sType*));
memset(&name_171, 0, sizeof(char*));
memset(&err_172, 0, sizeof(_Bool));
memset(&type_170, 0, sizeof(struct sType*));
memset(&name_171, 0, sizeof(char*));
memset(&err_172, 0, sizeof(_Bool));
memset(&right_value159, 0, sizeof(void*));
memset(&base_type_173, 0, sizeof(struct sType*));
memset(&name_174, 0, sizeof(char*));
memset(&err_175, 0, sizeof(_Bool));
memset(&base_type_173, 0, sizeof(struct sType*));
memset(&name_174, 0, sizeof(char*));
memset(&err_175, 0, sizeof(_Bool));
memset(&right_value160, 0, sizeof(void*));
memset(&type2_176, 0, sizeof(struct sType*));
memset(&name2_177, 0, sizeof(char*));
memset(&type2_176, 0, sizeof(struct sType*));
memset(&name2_177, 0, sizeof(char*));
memset(&right_value161, 0, sizeof(void*));
memset(&right_value162, 0, sizeof(void*));
memset(&right_value163, 0, sizeof(void*));
memset(&type2_178, 0, sizeof(struct sType*));
memset(&name2_179, 0, sizeof(char*));
memset(&type2_178, 0, sizeof(struct sType*));
memset(&name2_179, 0, sizeof(char*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&right_value166, 0, sizeof(void*));
memset(&type2_180, 0, sizeof(struct sType*));
memset(&name_181, 0, sizeof(char*));
memset(&err_182, 0, sizeof(_Bool));
memset(&type2_180, 0, sizeof(struct sType*));
memset(&name_181, 0, sizeof(char*));
memset(&err_182, 0, sizeof(_Bool));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
    if(_if_conditional231=((struct sClass*)(right_value151=map$2charphsClassph_at(info->classes,type_name,((void*)0))))==((void*)0),    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value151),
    (right_value151 && right_value151 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sClass_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0):0,
    __right_value_freed_obj[0] = right_value151, 
    __freed_obj__ = 0, 
    _if_conditional231) {
        output_163=(_Bool)1;
        __dec_obj53=klass_162;
        klass_162=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value154=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value152=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 356, "struct sClass")))),((char*)(right_value153=__builtin_string(type_name))),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
        if(__dec_obj53) { come_call_finalizer(sClass_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value152);
        if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value152;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value153);
        if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value153;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value154);
        if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value154;
        __freed_obj__ = 0;
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value155=__builtin_string(type_name)))),(struct sClass*)come_increment_ref_count(klass_162));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value155);
        if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value155;
        __freed_obj__ = 0;
    }
    else {
        output_163=(_Bool)0;
        __dec_obj54=klass_162;
        klass_162=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value157=sClass_clone(((struct sClass*)(right_value156=map$2charphsClassph_at(info->classes,type_name,((void*)0))))))));
        if(__dec_obj54) { come_call_finalizer(sClass_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value156);
        if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value156;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value157);
        if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value157;
        __freed_obj__ = 0;
    }
    list$1tuple2$2charphsTypephph_reset(klass_162->mFields);
    expected_next_character(123,info);
    while(_while_condtional26=(_Bool)1,    _while_condtional26) {
        multiple_declare_166=(_Bool)0;
        {
            p_167=info->p;
            sline_168=info->sline;
            no_output_err_169=info->no_output_err;
            info->no_output_err=(_Bool)1;
            multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value158=parse_type(info,(_Bool)1,(_Bool)1)));
            type_170=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
            name_171=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            err_172=multiple_assign_var4->v3;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value158);
            if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value158;
            __freed_obj__ = 0;
            info->no_output_err=no_output_err_169;
            if(_if_conditional234=err_172&&*info->p==44,            _if_conditional234) {
                multiple_declare_166=(_Bool)1;
            }
            info->p=p_167;
            info->sline=sline_168;
            if(type_170 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_170, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(name_171 && !__freed_obj__) { name_171 = come_decrement_ref_count(name_171, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional235=multiple_declare_166,        _if_conditional235) {
            multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value159=parse_type(info,(_Bool)0,(_Bool)1)));
            base_type_173=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
            name_174=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            err_175=multiple_assign_var5->v3;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value159);
            if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value159;
            __freed_obj__ = 0;
            multiple_assign_var6=((struct tuple2$2sTypephcharph*)(right_value160=parse_variable_name((struct sType*)come_increment_ref_count(base_type_173),(_Bool)1,info)));
            type2_176=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
            name2_177=(char*)come_increment_ref_count(multiple_assign_var6->v2);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value160);
            if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value160;
            __freed_obj__ = 0;
            if(_if_conditional238=!info->no_output_err,            _if_conditional238) {
                list$1tuple2$2charphsTypephph_push_back(klass_162->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value162=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value161=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 393, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_177),(struct sType*)come_increment_ref_count(type2_176))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value161);
                if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value161;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value162);
                if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value162;
                __freed_obj__ = 0;
            }
            while(_while_condtional27=*info->p==44,            _while_condtional27) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var7=((struct tuple2$2sTypephcharph*)(right_value163=parse_variable_name((struct sType*)come_increment_ref_count(base_type_173),(_Bool)0,info)));
                type2_178=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                name2_179=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value163);
                if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value163;
                __freed_obj__ = 0;
                if(_if_conditional239=!info->no_output_err,                _if_conditional239) {
                    list$1tuple2$2charphsTypephph_push_back(klass_162->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value165=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value164=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 403, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_179),(struct sType*)come_increment_ref_count(type2_178))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value164);
                    if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value164;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value165);
                    if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value165;
                    __freed_obj__ = 0;
                }
                if(type2_178 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_178, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(name2_179 && !__freed_obj__) { name2_179 = come_decrement_ref_count(name2_179, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(base_type_173 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_173, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(name_174 && !__freed_obj__) { name_174 = come_decrement_ref_count(name_174, (void*)0, (void*)0, 0, 0, 0); }
            if(type2_176 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_176, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(name2_177 && !__freed_obj__) { name2_177 = come_decrement_ref_count(name2_177, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            parse_sharp_v5(info);
            multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(right_value166=parse_type(info,(_Bool)1,(_Bool)1)));
            type2_180=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
            name_181=(char*)come_increment_ref_count(multiple_assign_var8->v2);
            err_182=multiple_assign_var8->v3;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value166);
            if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value166;
            __freed_obj__ = 0;
            if(_if_conditional240=!err_182,            _if_conditional240) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            if(_if_conditional241=!info->no_output_err,            _if_conditional241) {
                list$1tuple2$2charphsTypephph_push_back(klass_162->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value168=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value167=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 416, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_181),(struct sType*)come_increment_ref_count(type2_180))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value167);
                if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value167;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value168);
                if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value168;
                __freed_obj__ = 0;
            }
            if(type2_180 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_180, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(name_181 && !__freed_obj__) { name_181 = come_decrement_ref_count(name_181, (void*)0, (void*)0, 0, 0, 0); }
        }
        expected_next_character(59,info);
        parse_sharp_v5(info);
        if(_if_conditional242=*info->p==125,        _if_conditional242) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        parse_sharp_v5(info);
    }
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 431, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sStructNode*)(right_value171=sStructNode_initialize((struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(right_value169=(struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 431, "struct sStructNode")))),(char*)come_increment_ref_count(((char*)(right_value170=__builtin_string(type_name)))),(struct sClass*)come_increment_ref_count(klass_162),output_163,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStructNode_finalize;
    _inf_value1->clone=(void*)sStructNode_clone;
    _inf_value1->compile=(void*)sStructNode_compile;
    _inf_value1->sline=(void*)sStructNode_sline;
    _inf_value1->sname=(void*)sStructNode_sname;
    _inf_value1->terminated=(void*)sStructNode_terminated;
    _inf_value1->kind=(void*)sStructNode_kind;
    __result124__ = __result_obj__ = ((struct sNode*)(right_value176=_inf_value1));
    if(type_name && !__freed_obj__) { type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 1, 0); }
    if(klass_162 && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass_162, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value169);
    if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStructNode_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value169;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value170);
    if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { right_value170 = come_decrement_ref_count(right_value170, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value170;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value171);
    if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStructNode_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value171;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value176);
    if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { right_value176 = come_decrement_ref_count(right_value176, ((struct sNode*)right_value176)->finalize, ((struct sNode*)right_value176)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[3] = right_value176;
    __freed_obj__ = 0;
    return __result124__;
    if(type_name && !__freed_obj__) { type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 1, 0); }
    if(klass_162 && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass_162, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_reset(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphsTypephph* it_164;
_Bool _while_condtional25;
struct list_item$1tuple2$2charphsTypephph* prev_it_165;
struct list$1tuple2$2charphsTypephph* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_164, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_165, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
        it_164=self->head;
        while(_while_condtional25=it_164!=((void*)0),        _while_condtional25) {
            prev_it_165=it_164;
            it_164=it_164->next;
            if(prev_it_165 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_165, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result121__ = __result_obj__ = self;
        return __result121__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional232;
_Bool _if_conditional233;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional232=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional232) {
                    if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional233=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional233) {
                    if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional236;
_Bool _if_conditional237;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional236=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional236) {
                    if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional237=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional237) {
                    if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
                }
}

struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional252;
char* header_head_184;
void* right_value177;
char* type_name_185;
_Bool _if_conditional253;
struct sClass* struct_class_186;
void* right_value178;
_Bool _if_conditional254;
void* right_value179;
void* right_value180;
struct sClass* __dec_obj58;
void* right_value181;
void* right_value182;
struct sClass* __dec_obj59;
void* right_value183;
void* right_value184;
void* right_value185;
struct sNode* _inf_value2;
struct sStructNobodyNode* _inf_obj_value2;
void* right_value190;
struct sNode* __result127__;
_Bool _if_conditional263;
_Bool _while_condtional29;
void* right_value191;
char* T_190;
void* right_value195;
_Bool _if_conditional266;
_Bool _if_conditional267;
struct sClass* generics_class_194;
void* right_value196;
_Bool _if_conditional268;
void* right_value197;
void* right_value198;
struct sClass* __dec_obj66;
void* right_value199;
_Bool _if_conditional269;
_Bool _while_condtional30;
void* right_value200;
struct tuple3$3sTypephcharphbool* multiple_assign_var9;
struct sType* type2_195;
char* name_196;
_Bool err_197;
_Bool _if_conditional270;
_Bool _if_conditional271;
void* right_value201;
void* right_value202;
_Bool _while_condtional31;
void* right_value203;
char* name2_198;
void* right_value204;
struct sType* type3_199;
_Bool _if_conditional272;
_Bool no_comma_200;
void* right_value205;
struct sNode* node_201;
struct sNode* __dec_obj67;
void* right_value206;
void* right_value207;
void* right_value208;
void* right_value209;
_Bool _if_conditional273;
void* right_value210;
void* right_value211;
struct sNode* _inf_value3;
struct sGenericsStructNode* _inf_obj_value3;
void* right_value214;
struct sNode* __result132__;
struct sClass* struct_class_203;
void* right_value215;
_Bool _if_conditional278;
void* right_value216;
void* right_value217;
struct sClass* __dec_obj69;
void* right_value218;
void* right_value219;
struct sClass* __dec_obj70;
_Bool _while_condtional32;
_Bool multiple_declare_204;
char* p_205;
int sline_206;
_Bool no_output_err_207;
void* right_value220;
struct tuple3$3sTypephcharphbool* multiple_assign_var10;
struct sType* type_208;
char* name_209;
_Bool err_210;
_Bool _if_conditional279;
_Bool _if_conditional280;
void* right_value221;
struct tuple3$3sTypephcharphbool* multiple_assign_var11;
struct sType* base_type_211;
char* name_212;
_Bool err_213;
void* right_value222;
struct tuple2$2sTypephcharph* multiple_assign_var12;
struct sType* type2_214;
char* name2_215;
void* right_value223;
void* right_value224;
_Bool _while_condtional33;
void* right_value225;
struct tuple2$2sTypephcharph* multiple_assign_var13;
struct sType* type2_216;
char* name2_217;
void* right_value226;
void* right_value227;
void* right_value228;
struct tuple3$3sTypephcharphbool* multiple_assign_var14;
struct sType* type2_218;
char* name_219;
_Bool err_220;
_Bool _if_conditional281;
void* right_value229;
void* right_value230;
_Bool _if_conditional282;
void* right_value231;
void* right_value232;
void* right_value233;
void* right_value234;
struct sNode* _inf_value4;
struct sStructNode* _inf_obj_value4;
void* right_value239;
struct sNode* __result135__;
void* right_value240;
struct sNode* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&header_head_184, 0, sizeof(char*));
memset(&right_value177, 0, sizeof(void*));
memset(&type_name_185, 0, sizeof(char*));
memset(&struct_class_186, 0, sizeof(struct sClass*));
memset(&right_value178, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
memset(&right_value180, 0, sizeof(void*));
memset(&right_value181, 0, sizeof(void*));
memset(&right_value182, 0, sizeof(void*));
memset(&right_value183, 0, sizeof(void*));
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
memset(&T_190, 0, sizeof(char*));
memset(&right_value195, 0, sizeof(void*));
memset(&generics_class_194, 0, sizeof(struct sClass*));
memset(&right_value196, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
memset(&right_value198, 0, sizeof(void*));
memset(&right_value199, 0, sizeof(void*));
memset(&right_value200, 0, sizeof(void*));
memset(&type2_195, 0, sizeof(struct sType*));
memset(&name_196, 0, sizeof(char*));
memset(&err_197, 0, sizeof(_Bool));
memset(&type2_195, 0, sizeof(struct sType*));
memset(&name_196, 0, sizeof(char*));
memset(&err_197, 0, sizeof(_Bool));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
memset(&name2_198, 0, sizeof(char*));
memset(&right_value204, 0, sizeof(void*));
memset(&type3_199, 0, sizeof(struct sType*));
memset(&no_comma_200, 0, sizeof(_Bool));
memset(&right_value205, 0, sizeof(void*));
memset(&node_201, 0, sizeof(struct sNode*));
memset(&right_value206, 0, sizeof(void*));
memset(&right_value207, 0, sizeof(void*));
memset(&right_value208, 0, sizeof(void*));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value210, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
memset(&right_value214, 0, sizeof(void*));
memset(&struct_class_203, 0, sizeof(struct sClass*));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
memset(&right_value217, 0, sizeof(void*));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
memset(&multiple_declare_204, 0, sizeof(_Bool));
memset(&p_205, 0, sizeof(char*));
memset(&sline_206, 0, sizeof(int));
memset(&no_output_err_207, 0, sizeof(_Bool));
memset(&right_value220, 0, sizeof(void*));
memset(&type_208, 0, sizeof(struct sType*));
memset(&name_209, 0, sizeof(char*));
memset(&err_210, 0, sizeof(_Bool));
memset(&type_208, 0, sizeof(struct sType*));
memset(&name_209, 0, sizeof(char*));
memset(&err_210, 0, sizeof(_Bool));
memset(&right_value221, 0, sizeof(void*));
memset(&base_type_211, 0, sizeof(struct sType*));
memset(&name_212, 0, sizeof(char*));
memset(&err_213, 0, sizeof(_Bool));
memset(&base_type_211, 0, sizeof(struct sType*));
memset(&name_212, 0, sizeof(char*));
memset(&err_213, 0, sizeof(_Bool));
memset(&right_value222, 0, sizeof(void*));
memset(&type2_214, 0, sizeof(struct sType*));
memset(&name2_215, 0, sizeof(char*));
memset(&type2_214, 0, sizeof(struct sType*));
memset(&name2_215, 0, sizeof(char*));
memset(&right_value223, 0, sizeof(void*));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
memset(&type2_216, 0, sizeof(struct sType*));
memset(&name2_217, 0, sizeof(char*));
memset(&type2_216, 0, sizeof(struct sType*));
memset(&name2_217, 0, sizeof(char*));
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
memset(&right_value228, 0, sizeof(void*));
memset(&type2_218, 0, sizeof(struct sType*));
memset(&name_219, 0, sizeof(char*));
memset(&err_220, 0, sizeof(_Bool));
memset(&type2_218, 0, sizeof(struct sType*));
memset(&name_219, 0, sizeof(char*));
memset(&err_220, 0, sizeof(_Bool));
memset(&right_value229, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
memset(&right_value231, 0, sizeof(void*));
memset(&right_value232, 0, sizeof(void*));
memset(&right_value233, 0, sizeof(void*));
memset(&right_value234, 0, sizeof(void*));
memset(&right_value239, 0, sizeof(void*));
memset(&right_value240, 0, sizeof(void*));
    if(_if_conditional252=charp_operator_equals(buf,"struct"),    _if_conditional252) {
        header_head_184=head;
        type_name_185=(char*)come_increment_ref_count(((char*)(right_value177=parse_word(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value177);
        if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value177;
        __freed_obj__ = 0;
        if(_if_conditional253=*info->p==59,        _if_conditional253) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional254=((struct sClass*)(right_value178=map$2charphsClassph_at(info->classes,type_name_185,((void*)0))))==((void*)0),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value178),
            (right_value178 && right_value178 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sClass_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value178, 
            __freed_obj__ = 0, 
            _if_conditional254) {
                __dec_obj58=struct_class_186;
                struct_class_186=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value180=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value179=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 447, "struct sClass")))),type_name_185,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
                if(__dec_obj58) { come_call_finalizer(sClass_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value179);
                if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value179;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value180);
                if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value180;
                __freed_obj__ = 0;
            }
            else {
                __dec_obj59=struct_class_186;
                struct_class_186=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value182=sClass_clone(((struct sClass*)(right_value181=map$2charphsClassph_at(info->classes,type_name_185,((void*)0))))))));
                if(__dec_obj59) { come_call_finalizer(sClass_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value181);
                if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value181;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value182);
                if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value182;
                __freed_obj__ = 0;
            }
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 453, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sStructNobodyNode*)(right_value185=sStructNobodyNode_initialize((struct sStructNobodyNode*)come_increment_ref_count(((struct sStructNobodyNode*)(right_value183=(struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "14struct.c", 453, "struct sStructNobodyNode")))),(char*)come_increment_ref_count(((char*)(right_value184=__builtin_string(type_name_185)))),(struct sClass*)come_increment_ref_count(struct_class_186),info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sStructNobodyNode_finalize;
            _inf_value2->clone=(void*)sStructNobodyNode_clone;
            _inf_value2->compile=(void*)sStructNobodyNode_compile;
            _inf_value2->sline=(void*)sStructNobodyNode_sline;
            _inf_value2->sname=(void*)sStructNobodyNode_sname;
            _inf_value2->terminated=(void*)sStructNobodyNode_terminated;
            _inf_value2->kind=(void*)sStructNobodyNode_kind;
            __result127__ = __result_obj__ = ((struct sNode*)(right_value190=_inf_value2));
            if(struct_class_186 && !__freed_obj__) { come_call_finalizer(sClass_finalize,struct_class_186, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(type_name_185 && !__freed_obj__) { type_name_185 = come_decrement_ref_count(type_name_185, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value183);
            if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStructNobodyNode_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value183;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value184);
            if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { right_value184 = come_decrement_ref_count(right_value184, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value184;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value185);
            if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStructNobodyNode_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value185;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value190);
            if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { right_value190 = come_decrement_ref_count(right_value190, ((struct sNode*)right_value190)->finalize, ((struct sNode*)right_value190)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[3] = right_value190;
            __freed_obj__ = 0;
            return __result127__;
            if(struct_class_186 && !__freed_obj__) { come_call_finalizer(sClass_finalize,struct_class_186, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            if(_if_conditional263=*info->p==60,            _if_conditional263) {
                list$1charph_reset(info->generics_type_names);
                info->p++;
                skip_spaces_and_lf(info);
                while(_while_condtional29=(_Bool)1,                _while_condtional29) {
                    T_190=(char*)come_increment_ref_count(((char*)(right_value191=parse_word(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value191);
                    if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { right_value191 = come_decrement_ref_count(right_value191, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value191;
                    __freed_obj__ = 0;
                    list$1charph_push_back(info->generics_type_names,(char*)come_increment_ref_count(((char*)(right_value195=string_clone(T_190)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value195);
                    if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { right_value195 = come_decrement_ref_count(right_value195, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value195;
                    __freed_obj__ = 0;
                    if(_if_conditional266=*info->p==62,                    _if_conditional266) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(T_190 && !__freed_obj__) { T_190 = come_decrement_ref_count(T_190, (void*)0, (void*)0, 0, 0, 0); }
                        break;
                    }
                    else {
                        if(_if_conditional267=*info->p==44,                        _if_conditional267) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else {
                            err_msg(info,"invalid generics struct definition");
                            exit(2);
                        }
                    }
                    if(T_190 && !__freed_obj__) { T_190 = come_decrement_ref_count(T_190, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(_if_conditional268=((struct sClass*)(right_value196=map$2charphsClassph_at(info->generics_classes,type_name_185,((void*)0))))!=((void*)0),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value196),
                (right_value196 && right_value196 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sClass_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value196, 
                __freed_obj__ = 0, 
                _if_conditional268) {
                    err_msg(info,"redifined generics struct(%s)",type_name_185);
                    exit(2);
                }
                else {
                    __dec_obj66=generics_class_194;
                    generics_class_194=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value198=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value197=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 487, "struct sClass")))),type_name_185,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
                    if(__dec_obj66) { come_call_finalizer(sClass_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value197);
                    if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value197;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value198);
                    if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value198;
                    __freed_obj__ = 0;
                }
                if(_if_conditional269=((struct sClass*)(right_value199=map$2charphsClassph_at(info->generics_classes,type_name_185,((void*)0))))==((void*)0),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value199),
                (right_value199 && right_value199 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sClass_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value199, 
                __freed_obj__ = 0, 
                _if_conditional269) {
                    map$2charphsClassph_insert(info->generics_classes,(char*)come_increment_ref_count(type_name_185),(struct sClass*)come_increment_ref_count(generics_class_194));
                }
                expected_next_character(123,info);
                while(_while_condtional30=(_Bool)1,                _while_condtional30) {
                    parse_sharp_v5(info);
                    multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(right_value200=parse_type(info,(_Bool)1,(_Bool)1)));
                    type2_195=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                    name_196=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                    err_197=multiple_assign_var9->v3;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value200);
                    if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value200;
                    __freed_obj__ = 0;
                    if(_if_conditional270=!err_197,                    _if_conditional270) {
                        printf("%s %d: parse_type failed\n",info->sname,info->sline);
                        exit(2);
                    }
                    if(_if_conditional271=*info->p==44,                    _if_conditional271) {
                        list$1tuple2$2charphsTypephph_push_back(generics_class_194->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value202=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value201=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 507, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_196),(struct sType*)come_increment_ref_count(type2_195))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value201);
                        if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value201;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value202);
                        if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value202;
                        __freed_obj__ = 0;
                        while(_while_condtional31=*info->p==44,                        _while_condtional31) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            name2_198=(char*)come_increment_ref_count(((char*)(right_value203=parse_word(info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value203);
                            if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { right_value203 = come_decrement_ref_count(right_value203, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value203;
                            __freed_obj__ = 0;
                            type3_199=(struct sType*)come_increment_ref_count(((struct sType*)(right_value204=sType_clone(type2_195))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value204);
                            if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value204;
                            __freed_obj__ = 0;
                            if(_if_conditional272=*info->p==58,                            _if_conditional272) {
                                info->p++;
                                skip_spaces_and_lf(info);
                                no_comma_200=info->no_comma;
                                info->no_comma=(_Bool)1;
                                node_201=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value205=expression_v13(info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value205);
                                if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { right_value205 = come_decrement_ref_count(right_value205, ((struct sNode*)right_value205)->finalize, ((struct sNode*)right_value205)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value205;
                                __freed_obj__ = 0;
                                info->no_comma=no_comma_200;
                                __dec_obj67=type3_199->mSizeNum;
                                type3_199->mSizeNum=(struct sNode*)come_increment_ref_count(node_201);
                                if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0,0); }
                                if(node_201 && !__freed_obj__) { node_201 = come_decrement_ref_count(node_201, ((struct sNode*)node_201)->finalize, ((struct sNode*)node_201)->_protocol_obj, 0, 0, 0); } 
                            }
                            list$1tuple2$2charphsTypephph_push_back(generics_class_194->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value207=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value206=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 529, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_198),(struct sType*)come_increment_ref_count(type3_199))))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value206);
                            if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value206;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value207);
                            if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value207;
                            __freed_obj__ = 0;
                            if(name2_198 && !__freed_obj__) { name2_198 = come_decrement_ref_count(name2_198, (void*)0, (void*)0, 0, 0, 0); }
                            if(type3_199 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_199, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                    }
                    else {
                        list$1tuple2$2charphsTypephph_push_back(generics_class_194->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value209=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value208=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 533, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_196),(struct sType*)come_increment_ref_count(type2_195))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value208);
                        if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value208;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value209);
                        if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value209;
                        __freed_obj__ = 0;
                    }
                    expected_next_character(59,info);
                    parse_sharp_v5(info);
                    if(_if_conditional273=*info->p==125,                    _if_conditional273) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(type2_195 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_195, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(name_196 && !__freed_obj__) { name_196 = come_decrement_ref_count(name_196, (void*)0, (void*)0, 0, 0, 0); }
                        break;
                    }
                    parse_sharp_v5(info);
                    if(type2_195 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_195, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(name_196 && !__freed_obj__) { name_196 = come_decrement_ref_count(name_196, (void*)0, (void*)0, 0, 0, 0); }
                }
                list$1charph_reset(info->generics_type_names);
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 550, "struct sNode");
                _inf_obj_value3=come_increment_ref_count(((struct sGenericsStructNode*)(right_value211=sGenericsStructNode_initialize((struct sGenericsStructNode*)come_increment_ref_count(((struct sGenericsStructNode*)(right_value210=(struct sGenericsStructNode*)come_calloc(1, sizeof(struct sGenericsStructNode)*(1), "14struct.c", 550, "struct sGenericsStructNode")))),info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sGenericsStructNode_finalize;
                _inf_value3->clone=(void*)sGenericsStructNode_clone;
                _inf_value3->compile=(void*)sGenericsStructNode_compile;
                _inf_value3->sline=(void*)sGenericsStructNode_sline;
                _inf_value3->sname=(void*)sGenericsStructNode_sname;
                _inf_value3->terminated=(void*)sGenericsStructNode_terminated;
                _inf_value3->kind=(void*)sGenericsStructNode_kind;
                __result132__ = __result_obj__ = ((struct sNode*)(right_value214=_inf_value3));
                if(generics_class_194 && !__freed_obj__) { come_call_finalizer(sClass_finalize,generics_class_194, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_name_185 && !__freed_obj__) { type_name_185 = come_decrement_ref_count(type_name_185, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value210);
                if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsStructNode_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value210;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value211);
                if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsStructNode_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value211;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value214);
                if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { right_value214 = come_decrement_ref_count(right_value214, ((struct sNode*)right_value214)->finalize, ((struct sNode*)right_value214)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value214;
                __freed_obj__ = 0;
                return __result132__;
                if(generics_class_194 && !__freed_obj__) { come_call_finalizer(sClass_finalize,generics_class_194, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                if(_if_conditional278=((struct sClass*)(right_value215=map$2charphsClassph_at(info->classes,type_name_185,((void*)0))))==((void*)0),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value215),
                (right_value215 && right_value215 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sClass_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value215, 
                __freed_obj__ = 0, 
                _if_conditional278) {
                    __dec_obj69=struct_class_203;
                    struct_class_203=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value217=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value216=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 555, "struct sClass")))),type_name_185,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
                    if(__dec_obj69) { come_call_finalizer(sClass_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value216);
                    if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value216;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value217);
                    if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value217;
                    __freed_obj__ = 0;
                }
                else {
                    __dec_obj70=struct_class_203;
                    struct_class_203=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value219=sClass_clone(((struct sClass*)(right_value218=map$2charphsClassph_at(info->classes,type_name_185,((void*)0))))))));
                    if(__dec_obj70) { come_call_finalizer(sClass_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value218);
                    if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value218;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value219);
                    if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value219;
                    __freed_obj__ = 0;
                }
                expected_next_character(123,info);
                while(_while_condtional32=(_Bool)1,                _while_condtional32) {
                    parse_sharp_v5(info);
                    multiple_declare_204=(_Bool)0;
                    {
                        p_205=info->p;
                        sline_206=info->sline;
                        no_output_err_207=info->no_output_err;
                        info->no_output_err=(_Bool)1;
                        multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(right_value220=parse_type(info,(_Bool)1,(_Bool)1)));
                        type_208=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
                        name_209=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                        err_210=multiple_assign_var10->v3;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value220);
                        if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value220;
                        __freed_obj__ = 0;
                        info->no_output_err=no_output_err_207;
                        if(_if_conditional279=err_210&&*info->p==44,                        _if_conditional279) {
                            multiple_declare_204=(_Bool)1;
                        }
                        info->p=p_205;
                        info->sline=sline_206;
                        if(type_208 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_208, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(name_209 && !__freed_obj__) { name_209 = come_decrement_ref_count(name_209, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    if(_if_conditional280=multiple_declare_204,                    _if_conditional280) {
                        multiple_assign_var11=((struct tuple3$3sTypephcharphbool*)(right_value221=parse_type(info,(_Bool)0,(_Bool)1)));
                        base_type_211=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
                        name_212=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                        err_213=multiple_assign_var11->v3;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value221);
                        if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value221;
                        __freed_obj__ = 0;
                        multiple_assign_var12=((struct tuple2$2sTypephcharph*)(right_value222=parse_variable_name((struct sType*)come_increment_ref_count(base_type_211),(_Bool)1,info)));
                        type2_214=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
                        name2_215=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value222);
                        if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value222;
                        __freed_obj__ = 0;
                        list$1tuple2$2charphsTypephph_push_back(struct_class_203->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value224=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value223=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 589, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_215),(struct sType*)come_increment_ref_count(type2_214))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value223);
                        if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value223;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value224);
                        if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value224;
                        __freed_obj__ = 0;
                        while(_while_condtional33=*info->p==44,                        _while_condtional33) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            multiple_assign_var13=((struct tuple2$2sTypephcharph*)(right_value225=parse_variable_name((struct sType*)come_increment_ref_count(base_type_211),(_Bool)0,info)));
                            type2_216=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
                            name2_217=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value225);
                            if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value225;
                            __freed_obj__ = 0;
                            list$1tuple2$2charphsTypephph_push_back(struct_class_203->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value227=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value226=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 597, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_217),(struct sType*)come_increment_ref_count(type2_216))))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value226);
                            if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value226;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value227);
                            if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value227;
                            __freed_obj__ = 0;
                            if(type2_216 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_216, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(name2_217 && !__freed_obj__) { name2_217 = come_decrement_ref_count(name2_217, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        if(base_type_211 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_211, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(name_212 && !__freed_obj__) { name_212 = come_decrement_ref_count(name_212, (void*)0, (void*)0, 0, 0, 0); }
                        if(type2_214 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_214, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(name2_215 && !__freed_obj__) { name2_215 = come_decrement_ref_count(name2_215, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    else {
                        multiple_assign_var14=((struct tuple3$3sTypephcharphbool*)(right_value228=parse_type(info,(_Bool)1,(_Bool)1)));
                        type2_218=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
                        name_219=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                        err_220=multiple_assign_var14->v3;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value228);
                        if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value228;
                        __freed_obj__ = 0;
                        if(_if_conditional281=!err_220,                        _if_conditional281) {
                            printf("%s %d: parse_type failed\n",info->sname,info->sline);
                            exit(2);
                        }
                        list$1tuple2$2charphsTypephph_push_back(struct_class_203->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value230=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value229=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 607, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_219),(struct sType*)come_increment_ref_count(type2_218))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value229);
                        if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value229;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value230);
                        if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value230;
                        __freed_obj__ = 0;
                        if(type2_218 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_218, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(name_219 && !__freed_obj__) { name_219 = come_decrement_ref_count(name_219, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    expected_next_character(59,info);
                    parse_sharp_v5(info);
                    if(_if_conditional282=*info->p==125,                    _if_conditional282) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        break;
                    }
                    parse_sharp_v5(info);
                }
                list$1charph_reset(info->generics_type_names);
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 624, "struct sNode");
                _inf_obj_value4=come_increment_ref_count(((struct sStructNode*)(right_value234=sStructNode_initialize((struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(right_value231=(struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 624, "struct sStructNode")))),(char*)come_increment_ref_count(((char*)(right_value232=__builtin_string(type_name_185)))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value233=sClass_clone(struct_class_203)))),(_Bool)1,info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sStructNode_finalize;
                _inf_value4->clone=(void*)sStructNode_clone;
                _inf_value4->compile=(void*)sStructNode_compile;
                _inf_value4->sline=(void*)sStructNode_sline;
                _inf_value4->sname=(void*)sStructNode_sname;
                _inf_value4->terminated=(void*)sStructNode_terminated;
                _inf_value4->kind=(void*)sStructNode_kind;
                __result135__ = __result_obj__ = ((struct sNode*)(right_value239=_inf_value4));
                if(struct_class_203 && !__freed_obj__) { come_call_finalizer(sClass_finalize,struct_class_203, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_name_185 && !__freed_obj__) { type_name_185 = come_decrement_ref_count(type_name_185, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value231);
                if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStructNode_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value231;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value232);
                if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { right_value232 = come_decrement_ref_count(right_value232, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value232;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value233);
                if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value233;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value234);
                if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStructNode_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value234;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value239);
                if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { right_value239 = come_decrement_ref_count(right_value239, ((struct sNode*)right_value239)->finalize, ((struct sNode*)right_value239)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[4] = right_value239;
                __freed_obj__ = 0;
                return __result135__;
                if(struct_class_203 && !__freed_obj__) { come_call_finalizer(sClass_finalize,struct_class_203, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
        }
        if(type_name_185 && !__freed_obj__) { type_name_185 = come_decrement_ref_count(type_name_185, (void*)0, (void*)0, 0, 0, 0); }
    }
    __result136__ = __result_obj__ = ((struct sNode*)(right_value240=top_level_v97(buf,head,head_sline,info)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value240);
    if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { right_value240 = come_decrement_ref_count(right_value240, ((struct sNode*)right_value240)->finalize, ((struct sNode*)right_value240)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value240;
    __freed_obj__ = 0;
    return __result136__;
}

static void sStructNobodyNode_finalize(struct sStructNobodyNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional255;
_Bool _if_conditional256;
_Bool _if_conditional257;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional255=self!=((void*)0)&&self->mName!=((void*)0),                _if_conditional255) {
                    if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(_if_conditional256=self!=((void*)0)&&self->mClass!=((void*)0),                _if_conditional256) {
                    if(self->mClass && !__freed_obj__) { come_call_finalizer(sClass_finalize,self->mClass, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional257=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional257) {
                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional258;
struct sStructNobodyNode* __result125__;
void* right_value186;
struct sStructNobodyNode* result_187;
_Bool _if_conditional259;
void* right_value187;
char* __dec_obj60;
_Bool _if_conditional260;
void* right_value188;
struct sClass* __dec_obj61;
_Bool _if_conditional261;
_Bool _if_conditional262;
void* right_value189;
char* __dec_obj62;
struct sStructNobodyNode* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value186, 0, sizeof(void*));
memset(&result_187, 0, sizeof(struct sStructNobodyNode*));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
memset(&right_value189, 0, sizeof(void*));
                if(_if_conditional258=self==(void*)0,                _if_conditional258) {
                    __result125__ = __result_obj__ = (void*)0;
                    return __result125__;
                }
                result_187=(struct sStructNobodyNode*)come_increment_ref_count(((struct sStructNobodyNode*)(right_value186=(struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "sStructNobodyNode_clone", 3, "struct sStructNobodyNode"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value186);
                if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStructNobodyNode_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value186;
                __freed_obj__ = 0;
                if(_if_conditional259=self!=((void*)0)&&self->mName!=((void*)0),                _if_conditional259) {
                    __dec_obj60=result_187->mName;
                    result_187->mName=(char*)come_increment_ref_count(((char*)(right_value187=string_clone(self->mName))));
                    if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value187);
                    if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { right_value187 = come_decrement_ref_count(right_value187, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value187;
                    __freed_obj__ = 0;
                }
                if(_if_conditional260=self!=((void*)0)&&self->mClass!=((void*)0),                _if_conditional260) {
                    __dec_obj61=result_187->mClass;
                    result_187->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value188=sClass_clone(self->mClass))));
                    if(__dec_obj61) { come_call_finalizer(sClass_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value188);
                    if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value188;
                    __freed_obj__ = 0;
                }
                if(_if_conditional261=self!=((void*)0),                _if_conditional261) {
                    result_187->sline=self->sline;
                }
                if(_if_conditional262=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional262) {
                    __dec_obj62=result_187->sname;
                    result_187->sname=(char*)come_increment_ref_count(((char*)(right_value189=string_clone(self->sname))));
                    if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value189);
                    if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { right_value189 = come_decrement_ref_count(right_value189, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value189;
                    __freed_obj__ = 0;
                }
                __result126__ = __result_obj__ = result_187;
                if(result_187 && !__freed_obj__) { come_call_finalizer(sStructNobodyNode_finalize,result_187, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result126__;
                if(result_187 && !__freed_obj__) { come_call_finalizer(sStructNobodyNode_finalize,result_187, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_188;
_Bool _while_condtional28;
struct list_item$1charph* prev_it_189;
struct list$1charph* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_188, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_189, 0, sizeof(struct list_item$1charph*));
                    it_188=self->head;
                    while(_while_condtional28=it_188!=((void*)0),                    _while_condtional28) {
                        prev_it_189=it_188;
                        it_188=it_188->next;
                        if(prev_it_189 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_189, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result128__ = __result_obj__ = self;
                    return __result128__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional264;
void* right_value192;
struct list_item$1charph* litem_191;
char* __dec_obj63;
_Bool _if_conditional265;
void* right_value193;
struct list_item$1charph* litem_192;
char* __dec_obj64;
void* right_value194;
struct list_item$1charph* litem_193;
char* __dec_obj65;
struct list$1charph* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value192, 0, sizeof(void*));
memset(&litem_191, 0, sizeof(struct list_item$1charph*));
memset(&right_value193, 0, sizeof(void*));
memset(&litem_192, 0, sizeof(struct list_item$1charph*));
memset(&right_value194, 0, sizeof(void*));
memset(&litem_193, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional264=self->len==0,                        _if_conditional264) {
                            litem_191=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value192=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 282, "struct list_item$1charph"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value192);
                            if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value192;
                            __freed_obj__ = 0;
                            litem_191->prev=((void*)0);
                            litem_191->next=((void*)0);
                            __dec_obj63=litem_191->item;
                            litem_191->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0,0); }
                            self->tail=litem_191;
                            self->head=litem_191;
                        }
                        else {
                            if(_if_conditional265=self->len==1,                            _if_conditional265) {
                                litem_192=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value193=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 292, "struct list_item$1charph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value193);
                                if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value193;
                                __freed_obj__ = 0;
                                litem_192->prev=self->head;
                                litem_192->next=((void*)0);
                                __dec_obj64=litem_192->item;
                                litem_192->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0,0); }
                                self->tail=litem_192;
                                self->head->next=litem_192;
                            }
                            else {
                                litem_193=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value194=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 302, "struct list_item$1charph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value194);
                                if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value194;
                                __freed_obj__ = 0;
                                litem_193->prev=self->tail;
                                litem_193->next=((void*)0);
                                __dec_obj65=litem_193->item;
                                litem_193->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0,0); }
                                self->tail->next=litem_193;
                                self->tail=litem_193;
                            }
                        }
                        self->len++;
                        __result129__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                        return __result129__;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void sGenericsStructNode_finalize(struct sGenericsStructNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional274;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional274=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional274) {
                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct sGenericsStructNode* sGenericsStructNode_clone(struct sGenericsStructNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional275;
struct sGenericsStructNode* __result130__;
void* right_value212;
struct sGenericsStructNode* result_202;
_Bool _if_conditional276;
_Bool _if_conditional277;
void* right_value213;
char* __dec_obj68;
struct sGenericsStructNode* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value212, 0, sizeof(void*));
memset(&result_202, 0, sizeof(struct sGenericsStructNode*));
memset(&right_value213, 0, sizeof(void*));
                    if(_if_conditional275=self==(void*)0,                    _if_conditional275) {
                        __result130__ = __result_obj__ = (void*)0;
                        return __result130__;
                    }
                    result_202=(struct sGenericsStructNode*)come_increment_ref_count(((struct sGenericsStructNode*)(right_value212=(struct sGenericsStructNode*)come_calloc(1, sizeof(struct sGenericsStructNode)*(1), "sGenericsStructNode_clone", 3, "struct sGenericsStructNode"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value212);
                    if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsStructNode_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value212;
                    __freed_obj__ = 0;
                    if(_if_conditional276=self!=((void*)0),                    _if_conditional276) {
                        result_202->sline=self->sline;
                    }
                    if(_if_conditional277=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional277) {
                        __dec_obj68=result_202->sname;
                        result_202->sname=(char*)come_increment_ref_count(((char*)(right_value213=string_clone(self->sname))));
                        if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value213);
                        if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { right_value213 = come_decrement_ref_count(right_value213, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value213;
                        __freed_obj__ = 0;
                    }
                    __result131__ = __result_obj__ = result_202;
                    if(result_202 && !__freed_obj__) { come_call_finalizer(sGenericsStructNode_finalize,result_202, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result131__;
                    if(result_202 && !__freed_obj__) { come_call_finalizer(sGenericsStructNode_finalize,result_202, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sStructNode_finalize(struct sStructNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional283;
_Bool _if_conditional284;
_Bool _if_conditional285;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional283=self!=((void*)0)&&self->mName!=((void*)0),                    _if_conditional283) {
                        if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    if(_if_conditional284=self!=((void*)0)&&self->mClass!=((void*)0),                    _if_conditional284) {
                        if(self->mClass && !__freed_obj__) { come_call_finalizer(sClass_finalize,self->mClass, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional285=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional285) {
                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct sStructNode* sStructNode_clone(struct sStructNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional286;
struct sStructNode* __result133__;
void* right_value235;
struct sStructNode* result_221;
_Bool _if_conditional287;
void* right_value236;
char* __dec_obj71;
_Bool _if_conditional288;
void* right_value237;
struct sClass* __dec_obj72;
_Bool _if_conditional289;
_Bool _if_conditional290;
void* right_value238;
char* __dec_obj73;
_Bool _if_conditional291;
struct sStructNode* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value235, 0, sizeof(void*));
memset(&result_221, 0, sizeof(struct sStructNode*));
memset(&right_value236, 0, sizeof(void*));
memset(&right_value237, 0, sizeof(void*));
memset(&right_value238, 0, sizeof(void*));
                    if(_if_conditional286=self==(void*)0,                    _if_conditional286) {
                        __result133__ = __result_obj__ = (void*)0;
                        return __result133__;
                    }
                    result_221=(struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(right_value235=(struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "sStructNode_clone", 3, "struct sStructNode"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value235);
                    if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStructNode_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value235;
                    __freed_obj__ = 0;
                    if(_if_conditional287=self!=((void*)0)&&self->mName!=((void*)0),                    _if_conditional287) {
                        __dec_obj71=result_221->mName;
                        result_221->mName=(char*)come_increment_ref_count(((char*)(right_value236=string_clone(self->mName))));
                        if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value236);
                        if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { right_value236 = come_decrement_ref_count(right_value236, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value236;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional288=self!=((void*)0)&&self->mClass!=((void*)0),                    _if_conditional288) {
                        __dec_obj72=result_221->mClass;
                        result_221->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value237=sClass_clone(self->mClass))));
                        if(__dec_obj72) { come_call_finalizer(sClass_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value237);
                        if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value237;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional289=self!=((void*)0),                    _if_conditional289) {
                        result_221->sline=self->sline;
                    }
                    if(_if_conditional290=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional290) {
                        __dec_obj73=result_221->sname;
                        result_221->sname=(char*)come_increment_ref_count(((char*)(right_value238=string_clone(self->sname))));
                        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value238);
                        if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { right_value238 = come_decrement_ref_count(right_value238, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value238;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional291=self!=((void*)0),                    _if_conditional291) {
                        result_221->mOutput=self->mOutput;
                    }
                    __result134__ = __result_obj__ = result_221;
                    if(result_221 && !__freed_obj__) { come_call_finalizer(sStructNode_finalize,result_221, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result134__;
                    if(result_221 && !__freed_obj__) { come_call_finalizer(sStructNode_finalize,result_221, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool define_struct_222;
char* p_223;
int sline_224;
_Bool _if_conditional292;
void* right_value241;
char* type_name_225;
_Bool _if_conditional293;
void* right_value242;
_Bool _if_conditional294;
_Bool _if_conditional295;
void* right_value243;
char* type_name_226;
void* right_value244;
struct sNode* __result137__;
void* right_value245;
struct sNode* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&define_struct_222, 0, sizeof(_Bool));
memset(&p_223, 0, sizeof(char*));
memset(&sline_224, 0, sizeof(int));
memset(&right_value241, 0, sizeof(void*));
memset(&type_name_225, 0, sizeof(char*));
memset(&right_value242, 0, sizeof(void*));
memset(&right_value243, 0, sizeof(void*));
memset(&type_name_226, 0, sizeof(char*));
memset(&right_value244, 0, sizeof(void*));
memset(&right_value245, 0, sizeof(void*));
    define_struct_222=(_Bool)0;
    {
        p_223=info->p;
        sline_224=info->sline;
        if(_if_conditional292=charp_operator_equals(buf,"struct"),        _if_conditional292) {
            type_name_225=(char*)come_increment_ref_count(((char*)(right_value241=parse_word(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value241);
            if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { right_value241 = come_decrement_ref_count(right_value241, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value241;
            __freed_obj__ = 0;
            if(_if_conditional293=*info->p==123,            _if_conditional293) {
                ((char*)(right_value242=skip_block(info)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value242);
                if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { right_value242 = come_decrement_ref_count(right_value242, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value242;
                __freed_obj__ = 0;
                if(_if_conditional294=*info->p==59,                _if_conditional294) {
                    define_struct_222=(_Bool)1;
                }
            }
            if(type_name_225 && !__freed_obj__) { type_name_225 = come_decrement_ref_count(type_name_225, (void*)0, (void*)0, 0, 0, 0); }
        }
        info->p=p_223;
        info->sline=sline_224;
    }
    if(_if_conditional295=define_struct_222,    _if_conditional295) {
        type_name_226=(char*)come_increment_ref_count(((char*)(right_value243=parse_word(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value243);
        if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { right_value243 = come_decrement_ref_count(right_value243, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value243;
        __freed_obj__ = 0;
        __result137__ = __result_obj__ = ((struct sNode*)(right_value244=parse_struct((char*)come_increment_ref_count(type_name_226),info)));
        if(type_name_226 && !__freed_obj__) { type_name_226 = come_decrement_ref_count(type_name_226, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value244);
        if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { right_value244 = come_decrement_ref_count(right_value244, ((struct sNode*)right_value244)->finalize, ((struct sNode*)right_value244)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[0] = right_value244;
        __freed_obj__ = 0;
        return __result137__;
        if(type_name_226 && !__freed_obj__) { type_name_226 = come_decrement_ref_count(type_name_226, (void*)0, (void*)0, 0, 0, 0); }
    }
    __result138__ = __result_obj__ = ((struct sNode*)(right_value245=string_node_v13(buf,head,head_sline,info)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value245);
    if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { right_value245 = come_decrement_ref_count(right_value245, ((struct sNode*)right_value245)->finalize, ((struct sNode*)right_value245)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value245;
    __freed_obj__ = 0;
    return __result138__;
}

