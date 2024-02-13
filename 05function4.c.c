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
struct tuple4$4voidpvoidpvoidpbool
{
    void* v1;
    void* v2;
    void* v3;
    _Bool v4;
};
struct optional$2sTypephbool
{
    struct sType* v1;
    _Bool v2;
};
struct tuple3$3voidpvoidpbool
{
    void* v1;
    void* v2;
    _Bool v3;
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
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
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
void check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, struct sInfo* info);

static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
void skip_pointer_attribute(struct sInfo* info);

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type);

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3);
static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2);
static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self);
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

void skip_paren(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int nest_5;
_Bool _while_condtional1;
_Bool _if_conditional5;
_Bool _if_conditional6;
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _while_condtional2;
_Bool _while_condtional3;
_Bool _while_condtional4;
_Bool _if_conditional8;
_Bool _while_condtional5;
_Bool _if_conditional9;
_Bool _if_conditional10;
int line_6;
void* right_value10;
void* right_value11;
struct buffer* fname_7;
_Bool _while_condtional6;
_Bool _if_conditional11;
_Bool _while_condtional7;
_Bool _while_condtional8;
void* right_value12;
char* __dec_obj6;
_Bool _if_conditional12;
_Bool _while_condtional9;
_Bool _while_condtional10;
_Bool _while_condtional11;
_Bool _while_condtional12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&line_6, 0, sizeof(int));
right_value10 = (void*)0;
right_value11 = (void*)0;
memset(&fname_7, 0, sizeof(struct buffer*));
right_value12 = (void*)0;
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
                fname_7=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 71, "struct buffer"))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
                if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value10, right_value10 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value11);
                if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value11, right_value11 = (void*)0;
                __freed_obj__ = 0;
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
                info->sname=(char*)come_increment_ref_count(((char*)(right_value12=buffer_to_string(fname_7))));
                if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
                if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { right_value12 = come_decrement_ref_count(right_value12, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value12, right_value12 = (void*)0;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                if(fname_7 && !__freed_obj__) { come_call_finalizer(buffer_finalize,fname_7, (void*)0, (void*)0, 0, 0, 0, 0); }
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
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char c_8;
_Bool __result7__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&c_8, 0, sizeof(char));
    c_8=*(info->p+strlen(str));
    __result7__ = strmemcmp(info->p,str)&&(c_8==59||c_8==32||c_8==9||c_8==10||c_8==10);
    return __result7__;
}

char* parse_word(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value13;
void* right_value14;
struct buffer* buf_9;
_Bool _while_condtional13;
void* right_value15;
_Bool _if_conditional13;
void* right_value16;
char* __result8__;
void* right_value17;
char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value13 = (void*)0;
right_value14 = (void*)0;
memset(&buf_9, 0, sizeof(struct buffer*));
right_value15 = (void*)0;
right_value16 = (void*)0;
right_value17 = (void*)0;
    buf_9=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value14=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 145, "struct buffer"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value13);
    if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value13, right_value13 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value14);
    if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value14, right_value14 = (void*)0;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    while(_while_condtional13=(*info->p>=97&&*info->p<=122)||(*info->p>=65&&*info->p<=90)||*info->p==95||(*info->p>=48&&*info->p<=57)||(*info->p==36),    _while_condtional13) {
        buffer_append_char(buf_9,*info->p);
        info->p++;
    }
    skip_spaces_and_lf(info);
    if(_if_conditional13=string_length(((char*)(right_value15=buffer_to_string(buf_9))))==0,    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value15),
    (right_value15 && right_value15 != __result_obj__ && !__freed_obj__) ? right_value15 = come_decrement_ref_count(right_value15, (void*)0, (void*)0, 1, 0, 0):0,
    __right_value_freed_obj[0] = right_value15, right_value15 = (void*)0, 
    __freed_obj__ = 0, 
    _if_conditional13) {
        err_msg(info,"unexpected character(%c). expected word character",*info->p);
        __result8__ = __result_obj__ = ((char*)(right_value16=__builtin_string("")));
        if(buf_9 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_9, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
        if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { right_value16 = come_decrement_ref_count(right_value16, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value16, right_value16 = (void*)0;
        __freed_obj__ = 0;
        return __result8__;
    }
    __result9__ = __result_obj__ = ((char*)(right_value17=buffer_to_string(buf_9)));
    if(buf_9 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_9, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value17);
    if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { right_value17 = come_decrement_ref_count(right_value17, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value17, right_value17 = (void*)0;
    __freed_obj__ = 0;
    return __result9__;
    if(buf_9 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_9, (void*)0, (void*)0, 0, 0, 0, 0); }
}

void skip_spaces_and_lf(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _while_condtional14;
_Bool _if_conditional14;
_Bool _if_conditional15;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* o2_saved_10;
struct sType* it_13;
_Bool _for_condtionalA1;
_Bool _if_conditional20;
_Bool __result17__;
_Bool _if_conditional37;
_Bool __result18__;
_Bool __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&o2_saved_10, 0, sizeof(struct list$1sTypeph*));
memset(&it_13, 0, sizeof(struct sType*));
    for(
    o2_saved_10=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_13=list$1sTypeph_begin((o2_saved_10)) ,    0;    _for_condtionalA1=    !list$1sTypeph_end((o2_saved_10)) ,    _for_condtionalA1;    it_13=list$1sTypeph_next((o2_saved_10)) ,    0    ){
        if(_if_conditional20=is_contained_generics_class(it_13,info),        _if_conditional20) {
            __result17__ = (_Bool)1;
            if(o2_saved_10 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_10, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result17__;
        }
    }
    if(o2_saved_10 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_10, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(_if_conditional37=type->mClass->mGenerics,    _if_conditional37) {
        __result18__ = (_Bool)1;
        return __result18__;
    }
    __result19__ = (_Bool)0;
    return __result19__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional16;
struct sType* result_11;
struct sType* __result10__;
_Bool _if_conditional17;
struct sType* __result11__;
struct sType* result_12;
struct sType* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_11, 0, sizeof(struct sType*));
memset(&result_12, 0, sizeof(struct sType*));
        if(_if_conditional16=self==((void*)0),        _if_conditional16) {
            memset(&result_11,0,sizeof(struct sType*));
            __result10__ = __result_obj__ = result_11;
            return __result10__;
        }
        self->it=self->head;
        if(_if_conditional17=self->it,        _if_conditional17) {
            __result11__ = __result_obj__ = self->it->item;
            return __result11__;
        }
        memset(&result_12,0,sizeof(struct sType*));
        __result12__ = __result_obj__ = result_12;
        return __result12__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result13__ = self==((void*)0)||self->it==((void*)0);
        return __result13__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional18;
struct sType* result_14;
struct sType* __result14__;
_Bool _if_conditional19;
struct sType* __result15__;
struct sType* result_15;
struct sType* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_14, 0, sizeof(struct sType*));
memset(&result_15, 0, sizeof(struct sType*));
        if(_if_conditional18=self==((void*)0)||self->it==((void*)0),        _if_conditional18) {
            memset(&result_14,0,sizeof(struct sType*));
            __result14__ = __result_obj__ = result_14;
            return __result14__;
        }
        self->it=self->it->next;
        if(_if_conditional19=self->it,        _if_conditional19) {
            __result15__ = __result_obj__ = self->it->item;
            return __result15__;
        }
        memset(&result_15,0,sizeof(struct sType*));
        __result16__ = __result_obj__ = result_15;
        return __result16__;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sTypeph* it_16;
_Bool _while_condtional15;
struct list_item$1sTypeph* prev_it_17;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_16, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_17, 0, sizeof(struct list_item$1sTypeph*));
                it_16=self->head;
                while(_while_condtional15=it_16!=((void*)0),                _while_condtional15) {
                    prev_it_17=it_16;
                    it_16=it_16->next;
                    if(prev_it_17 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_17, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional21=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional21) {
                            if(self->item && !__freed_obj__) { come_call_finalizer(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional22;
_Bool _if_conditional24;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional29;
_Bool _if_conditional30;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional22=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                _if_conditional22) {
                                    if(self->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional24=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                _if_conditional24) {
                                    if(self->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional25=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                _if_conditional25) {
                                    if(self->mGenericsName && !__freed_obj__) { self->mGenericsName = come_decrement_ref_count(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(_if_conditional26=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                _if_conditional26) {
                                    if(self->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional27=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                _if_conditional27) {
                                    if(self->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional29=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional29) {
                                    if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional30=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional30) {
                                    if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional32=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional32) {
                                    if(self->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional33=self!=((void*)0)&&self->mAlignas!=((void*)0),                                _if_conditional33) {
                                    if(self->mAlignas && !__freed_obj__) { self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0); } 
                                }
                                if(_if_conditional34=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                _if_conditional34) {
                                    if(self->mSizeNum && !__freed_obj__) { self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                                }
                                if(_if_conditional35=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                _if_conditional35) {
                                    if(self->mOriginalTypeName && !__freed_obj__) { self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(_if_conditional36=self!=((void*)0)&&self->mAsmName!=((void*)0),                                _if_conditional36) {
                                    if(self->mAsmName && !__freed_obj__) { self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional23;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        if(_if_conditional23=self!=((void*)0)&&self->v1!=((void*)0),                                        _if_conditional23) {
                                            if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_18;
_Bool _while_condtional16;
struct list_item$1sNodeph* prev_it_19;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_18, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_19, 0, sizeof(struct list_item$1sNodeph*));
                                        it_18=self->head;
                                        while(_while_condtional16=it_18!=((void*)0),                                        _while_condtional16) {
                                            prev_it_19=it_18;
                                            it_18=it_18->next;
                                            if(prev_it_19 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_19, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional28;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                if(_if_conditional28=self!=((void*)0)&&self->item!=((void*)0),                                                _if_conditional28) {
                                                    if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0); } 
                                                }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_20;
_Bool _while_condtional17;
struct list_item$1charph* prev_it_21;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_20, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_21, 0, sizeof(struct list_item$1charph*));
                                        it_20=self->head;
                                        while(_while_condtional17=it_20!=((void*)0),                                        _while_condtional17) {
                                            prev_it_21=it_20;
                                            it_20=it_20->next;
                                            if(prev_it_21 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_21, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional31;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                if(_if_conditional31=self!=((void*)0)&&self->item!=((void*)0),                                                _if_conditional31) {
                                                    if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, 0); }
                                                }
}

struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value18;
void* right_value19;
struct list$1sTypeph* param_types_22;
void* right_value20;
void* right_value21;
struct list$1charph* param_names_23;
void* right_value22;
void* right_value23;
struct list$1charph* param_default_parametors_24;
_Bool var_args_25;
_Bool void_param_26;
char* p_27;
int sline_28;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _while_condtional18;
_Bool _if_conditional43;
void* right_value24;
struct tuple3$3sTypephcharphbool* multiple_assign_var1;
struct sType* param_type_29;
char* param_name_30;
_Bool err_31;
_Bool _if_conditional46;
void* right_value25;
void* right_value26;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result23__;
void* right_value27;
struct sType* param_type2_32;
void* right_value65;
void* right_value69;
_Bool _if_conditional121;
char* p_57;
_Bool no_comma_58;
void* right_value70;
struct sNode* node_59;
char* p2_60;
void* right_value71;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
void* right_value72;
void* right_value73;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value18 = (void*)0;
right_value19 = (void*)0;
memset(&param_types_22, 0, sizeof(struct list$1sTypeph*));
right_value20 = (void*)0;
right_value21 = (void*)0;
memset(&param_names_23, 0, sizeof(struct list$1charph*));
right_value22 = (void*)0;
right_value23 = (void*)0;
memset(&param_default_parametors_24, 0, sizeof(struct list$1charph*));
memset(&var_args_25, 0, sizeof(_Bool));
memset(&void_param_26, 0, sizeof(_Bool));
memset(&p_27, 0, sizeof(char*));
memset(&sline_28, 0, sizeof(int));
right_value24 = (void*)0;
memset(&param_type_29, 0, sizeof(struct sType*));
memset(&param_name_30, 0, sizeof(char*));
memset(&err_31, 0, sizeof(_Bool));
memset(&param_type_29, 0, sizeof(struct sType*));
memset(&param_name_30, 0, sizeof(char*));
memset(&err_31, 0, sizeof(_Bool));
right_value25 = (void*)0;
right_value26 = (void*)0;
right_value27 = (void*)0;
memset(&param_type2_32, 0, sizeof(struct sType*));
right_value65 = (void*)0;
right_value69 = (void*)0;
memset(&p_57, 0, sizeof(char*));
memset(&no_comma_58, 0, sizeof(_Bool));
right_value70 = (void*)0;
memset(&node_59, 0, sizeof(struct sNode*));
memset(&p2_60, 0, sizeof(char*));
right_value71 = (void*)0;
right_value72 = (void*)0;
right_value73 = (void*)0;
    param_types_22=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value19=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value18=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function4.c", 196, "struct list$1sTypeph"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
    if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value18, right_value18 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value19);
    if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value19, right_value19 = (void*)0;
    __freed_obj__ = 0;
    param_names_23=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value21=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value20=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function4.c", 197, "struct list$1charph"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
    if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value20, right_value20 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value21);
    if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value21, right_value21 = (void*)0;
    __freed_obj__ = 0;
    param_default_parametors_24=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value23=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value22=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function4.c", 198, "struct list$1charph"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
    if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value22, right_value22 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value23);
    if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value23, right_value23 = (void*)0;
    __freed_obj__ = 0;
    var_args_25=(_Bool)0;
    expected_next_character(40,info);
    void_param_26=(_Bool)0;
    {
        p_27=info->p;
        sline_28=info->sline;
        if(_if_conditional38=strmemcmp(info->p,"void"),        _if_conditional38) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(_if_conditional39=*info->p==41,            _if_conditional39) {
                void_param_26=(_Bool)1;
            }
        }
        info->p=p_27;
        info->sline=sline_28;
    }
    if(_if_conditional40=void_param_26,    _if_conditional40) {
        if(_if_conditional41=strmemcmp(info->p,"void"),        _if_conditional41) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(_if_conditional42=*info->p==41,            _if_conditional42) {
                info->p++;
                skip_spaces_and_lf(info);
            }
        }
    }
    else {
        while(_while_condtional18=(_Bool)1,        _while_condtional18) {
            if(_if_conditional43=*info->p==41,            _if_conditional43) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(right_value24=parse_type(info,(_Bool)1,(_Bool)0)));
            param_type_29=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            param_name_30=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_31=multiple_assign_var1->v3;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value24);
            if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value24, right_value24 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional46=!err_31,            _if_conditional46) {
                printf("%s %d: failed to function parametor\n",info->sname,info->sline);
                __result23__ = __result_obj__ = ((struct tuple4$4voidpvoidpvoidpbool*)(right_value26=tuple4$4voidpvoidpvoidpbool_initialize((struct tuple4$4voidpvoidpvoidpbool*)come_increment_ref_count(((struct tuple4$4voidpvoidpvoidpbool*)(right_value25=(struct tuple4$4voidpvoidpvoidpbool*)come_calloc(1, sizeof(struct tuple4$4voidpvoidpvoidpbool)*(1), "05function4.c", 247, "struct tuple4$4voidpvoidpvoidpbool")))),((void*)0),((void*)0),((void*)0),(_Bool)0)));
                if(param_type_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type_29, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_name_30 && !__freed_obj__) { param_name_30 = come_decrement_ref_count(param_name_30, (void*)0, (void*)0, 0, 0, 0); }
                if(param_types_22 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_22, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_names_23 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_23, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_default_parametors_24 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_24, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
                if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { right_value25 = come_decrement_ref_count(right_value25, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value25, right_value25 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value26);
                if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple4$4voidpvoidpvoidpboolp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value26, right_value26 = (void*)0;
                __freed_obj__ = 0;
                return __result23__;
            }
            param_type2_32=(struct sType*)come_increment_ref_count(((struct sType*)(right_value27=solve_generics(param_type_29,info->generics_type,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
            if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value27, right_value27 = (void*)0;
            __freed_obj__ = 0;
            param_type2_32->mFunctionParam=(_Bool)1;
            list$1sTypeph_push_back(param_types_22,(struct sType*)come_increment_ref_count(((struct sType*)(right_value65=sType_clone(param_type2_32)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
            if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value65, right_value65 = (void*)0;
            __freed_obj__ = 0;
            list$1charph_push_back(param_names_23,(char*)come_increment_ref_count(((char*)(right_value69=string_clone(param_name_30)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value69);
            if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value69, right_value69 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional121=*info->p==61,            _if_conditional121) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                p_57=info->p;
                no_comma_58=info->no_comma;
                info->no_comma=(_Bool)1;
                node_59=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value70=expression_v13(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70);
                if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { right_value70 = come_decrement_ref_count(right_value70, ((struct sNode*)right_value70)->finalize, ((struct sNode*)right_value70)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value70, right_value70 = (void*)0;
                __freed_obj__ = 0;
                info->no_comma=no_comma_58;
                p2_60=info->p;
                char buf_61[p2_60-p_57+1];
                memset(&buf_61, 0, sizeof(char)                *(p2_60-p_57+1)                );
                memcpy(buf_61,p_57,p2_60-p_57);
                buf_61[p2_60-p_57]=0;
                list$1charph_push_back(param_default_parametors_24,(char*)come_increment_ref_count(((char*)(right_value71=__builtin_string(buf_61)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value71);
                if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { right_value71 = come_decrement_ref_count(right_value71, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value71, right_value71 = (void*)0;
                __freed_obj__ = 0;
                if(node_59 && !__freed_obj__) { node_59 = come_decrement_ref_count(node_59, ((struct sNode*)node_59)->finalize, ((struct sNode*)node_59)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                list$1charph_push_back(param_default_parametors_24,((void*)0));
            }
            parse_sharp_v5(info);
            if(_if_conditional122=*info->p==44,            _if_conditional122) {
                info->p++;
                skip_spaces_and_lf(info);
                if(_if_conditional123=strmemcmp(info->p,"..."),                _if_conditional123) {
                    info->p+=strlen("...");
                    skip_spaces_and_lf(info);
                    var_args_25=(_Bool)1;
                    expected_next_character(41,info);
                    if(param_type_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type_29, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(param_name_30 && !__freed_obj__) { param_name_30 = come_decrement_ref_count(param_name_30, (void*)0, (void*)0, 0, 0, 0); }
                    if(param_type2_32 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type2_32, (void*)0, (void*)0, 0, 0, 0, 0); }
                    break;
                }
            }
            else {
                if(_if_conditional124=*info->p==41,                _if_conditional124) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(param_type_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type_29, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(param_name_30 && !__freed_obj__) { param_name_30 = come_decrement_ref_count(param_name_30, (void*)0, (void*)0, 0, 0, 0); }
                    if(param_type2_32 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type2_32, (void*)0, (void*)0, 0, 0, 0, 0); }
                    break;
                }
            }
            if(param_type_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type_29, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(param_name_30 && !__freed_obj__) { param_name_30 = come_decrement_ref_count(param_name_30, (void*)0, (void*)0, 0, 0, 0); }
            if(param_type2_32 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type2_32, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
    }
    __result43__ = __result_obj__ = ((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value73=tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_increment_ref_count(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value72=(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool)*(1), "05function4.c", 307, "struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool")))),(struct list$1sTypeph*)come_increment_ref_count(param_types_22),(struct list$1charph*)come_increment_ref_count(param_names_23),(struct list$1charph*)come_increment_ref_count(param_default_parametors_24),var_args_25)));
    if(param_types_22 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_22, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_names_23 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_23, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_default_parametors_24 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_24, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value72);
    if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { right_value72 = come_decrement_ref_count(right_value72, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value72, right_value72 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value73);
    if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value73, right_value73 = (void*)0;
    __freed_obj__ = 0;
    return __result43__;
    if(param_types_22 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_22, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_names_23 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_23, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_default_parametors_24 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_24, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result20__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result20__;
        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
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

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional44;
_Bool _if_conditional45;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional44=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional44) {
                    if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional45=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional45) {
                    if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static struct tuple4$4voidpvoidpvoidpbool* tuple4$4voidpvoidpvoidpbool_initialize(struct tuple4$4voidpvoidpvoidpbool* self, void* v1, void* v2, void* v3, _Bool v4){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct tuple4$4voidpvoidpvoidpbool* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    self->v1=v1;
                    self->v2=v2;
                    self->v3=v3;
                    self->v4=v4;
                    __result22__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(tuple4$4voidpvoidpvoidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result22__;
                    if(self && !__freed_obj__) { come_call_finalizer(tuple4$4voidpvoidpvoidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple4$4voidpvoidpvoidpboolp_finalize(struct tuple4$4voidpvoidpvoidpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional47;
void* right_value28;
struct list_item$1sTypeph* litem_33;
struct sType* __dec_obj7;
_Bool _if_conditional48;
void* right_value29;
struct list_item$1sTypeph* litem_34;
struct sType* __dec_obj8;
void* right_value30;
struct list_item$1sTypeph* litem_35;
struct sType* __dec_obj9;
struct list$1sTypeph* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value28 = (void*)0;
memset(&litem_33, 0, sizeof(struct list_item$1sTypeph*));
right_value29 = (void*)0;
memset(&litem_34, 0, sizeof(struct list_item$1sTypeph*));
right_value30 = (void*)0;
memset(&litem_35, 0, sizeof(struct list_item$1sTypeph*));
                if(_if_conditional47=self->len==0,                _if_conditional47) {
                    litem_33=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value28=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 282, "struct list_item$1sTypeph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
                    if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value28, right_value28 = (void*)0;
                    __freed_obj__ = 0;
                    litem_33->prev=((void*)0);
                    litem_33->next=((void*)0);
                    __dec_obj7=litem_33->item;
                    litem_33->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj7) { come_call_finalizer(sType_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->tail=litem_33;
                    self->head=litem_33;
                }
                else {
                    if(_if_conditional48=self->len==1,                    _if_conditional48) {
                        litem_34=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value29=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 292, "struct list_item$1sTypeph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
                        if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value29, right_value29 = (void*)0;
                        __freed_obj__ = 0;
                        litem_34->prev=self->head;
                        litem_34->next=((void*)0);
                        __dec_obj8=litem_34->item;
                        litem_34->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj8) { come_call_finalizer(sType_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail=litem_34;
                        self->head->next=litem_34;
                    }
                    else {
                        litem_35=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value30=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 302, "struct list_item$1sTypeph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
                        if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value30, right_value30 = (void*)0;
                        __freed_obj__ = 0;
                        litem_35->prev=self->tail;
                        litem_35->next=((void*)0);
                        __dec_obj9=litem_35->item;
                        litem_35->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj9) { come_call_finalizer(sType_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail->next=litem_35;
                        self->tail=litem_35;
                    }
                }
                self->len++;
                __result24__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result24__;
                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional49;
struct sType* __result25__;
void* right_value31;
struct sType* result_36;
_Bool _if_conditional50;
_Bool _if_conditional51;
void* right_value34;
struct tuple1$1sTypeph* __dec_obj11;
_Bool _if_conditional55;
void* right_value35;
struct tuple1$1sTypeph* __dec_obj12;
_Bool _if_conditional56;
void* right_value36;
char* __dec_obj13;
_Bool _if_conditional57;
void* right_value43;
struct list$1sTypeph* __dec_obj17;
_Bool _if_conditional61;
void* right_value51;
struct list$1sNodeph* __dec_obj21;
_Bool _if_conditional74;
_Bool _if_conditional75;
void* right_value52;
struct list$1sTypeph* __dec_obj22;
_Bool _if_conditional76;
void* right_value59;
struct list$1charph* __dec_obj26;
_Bool _if_conditional80;
void* right_value60;
struct tuple1$1sTypeph* __dec_obj27;
_Bool _if_conditional81;
_Bool _if_conditional82;
void* right_value61;
struct sNode* __dec_obj28;
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
_Bool _if_conditional101;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
_Bool _if_conditional106;
void* right_value62;
struct sNode* __dec_obj29;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
void* right_value63;
char* __dec_obj30;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
void* right_value64;
char* __dec_obj31;
struct sType* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value31 = (void*)0;
memset(&result_36, 0, sizeof(struct sType*));
right_value34 = (void*)0;
right_value35 = (void*)0;
right_value36 = (void*)0;
right_value43 = (void*)0;
right_value51 = (void*)0;
right_value52 = (void*)0;
right_value59 = (void*)0;
right_value60 = (void*)0;
right_value61 = (void*)0;
right_value62 = (void*)0;
right_value63 = (void*)0;
right_value64 = (void*)0;
                if(_if_conditional49=self==(void*)0,                _if_conditional49) {
                    __result25__ = __result_obj__ = (void*)0;
                    return __result25__;
                }
                result_36=(struct sType*)come_increment_ref_count(((struct sType*)(right_value31=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
                if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value31, right_value31 = (void*)0;
                __freed_obj__ = 0;
                if(_if_conditional50=self!=((void*)0),                _if_conditional50) {
                    result_36->mClass=self->mClass;
                }
                if(_if_conditional51=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional51) {
                    __dec_obj11=result_36->mNoSolvedGenericsType;
                    result_36->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value34=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                    if(__dec_obj11) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
                    if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value34, right_value34 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional55=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional55) {
                    __dec_obj12=result_36->mOriginalLoadVarType;
                    result_36->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value35=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                    if(__dec_obj12) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
                    if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value35, right_value35 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional56=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional56) {
                    __dec_obj13=result_36->mGenericsName;
                    result_36->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value36=string_clone(self->mGenericsName))));
                    if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
                    if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { right_value36 = come_decrement_ref_count(right_value36, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value36, right_value36 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional57=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional57) {
                    __dec_obj17=result_36->mGenericsTypes;
                    result_36->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value43=list$1sTypephp_clone(self->mGenericsTypes))));
                    if(__dec_obj17) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
                    if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value43, right_value43 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional61=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional61) {
                    __dec_obj21=result_36->mArrayNum;
                    result_36->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value51=list$1sNodephp_clone(self->mArrayNum))));
                    if(__dec_obj21) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
                    if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value51, right_value51 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional74=self!=((void*)0),                _if_conditional74) {
                    result_36->mOmitArrayNum=self->mOmitArrayNum;
                }
                if(_if_conditional75=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional75) {
                    __dec_obj22=result_36->mParamTypes;
                    result_36->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value52=list$1sTypephp_clone(self->mParamTypes))));
                    if(__dec_obj22) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52);
                    if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value52, right_value52 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional76=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional76) {
                    __dec_obj26=result_36->mParamNames;
                    result_36->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value59=list$1charphp_clone(self->mParamNames))));
                    if(__dec_obj26) { come_call_finalizer(list$1charph_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59);
                    if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value59, right_value59 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional80=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional80) {
                    __dec_obj27=result_36->mResultType;
                    result_36->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value60=tuple1$1sTypephp_clone(self->mResultType))));
                    if(__dec_obj27) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value60);
                    if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value60, right_value60 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional81=self!=((void*)0),                _if_conditional81) {
                    result_36->mVarArgs=self->mVarArgs;
                }
                if(_if_conditional82=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional82) {
                    __dec_obj28=result_36->mAlignas;
                    result_36->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value61=sNode_clone(self->mAlignas))));
                    if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value61);
                    if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { right_value61 = come_decrement_ref_count(right_value61, ((struct sNode*)right_value61)->finalize, ((struct sNode*)right_value61)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value61, right_value61 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional83=self!=((void*)0),                _if_conditional83) {
                    result_36->mUnsigned=self->mUnsigned;
                }
                if(_if_conditional84=self!=((void*)0),                _if_conditional84) {
                    result_36->mShort=self->mShort;
                }
                if(_if_conditional85=self!=((void*)0),                _if_conditional85) {
                    result_36->mLong=self->mLong;
                }
                if(_if_conditional86=self!=((void*)0),                _if_conditional86) {
                    result_36->mLongLong=self->mLongLong;
                }
                if(_if_conditional87=self!=((void*)0),                _if_conditional87) {
                    result_36->mConstant=self->mConstant;
                }
                if(_if_conditional88=self!=((void*)0),                _if_conditional88) {
                    result_36->mRegister=self->mRegister;
                }
                if(_if_conditional89=self!=((void*)0),                _if_conditional89) {
                    result_36->mVolatile=self->mVolatile;
                }
                if(_if_conditional90=self!=((void*)0),                _if_conditional90) {
                    result_36->mStatic=self->mStatic;
                }
                if(_if_conditional91=self!=((void*)0),                _if_conditional91) {
                    result_36->mExtern=self->mExtern;
                }
                if(_if_conditional92=self!=((void*)0),                _if_conditional92) {
                    result_36->mRestrict=self->mRestrict;
                }
                if(_if_conditional93=self!=((void*)0),                _if_conditional93) {
                    result_36->mImmutable=self->mImmutable;
                }
                if(_if_conditional94=self!=((void*)0),                _if_conditional94) {
                    result_36->mHeap=self->mHeap;
                }
                if(_if_conditional95=self!=((void*)0),                _if_conditional95) {
                    result_36->mDummyHeap=self->mDummyHeap;
                }
                if(_if_conditional96=self!=((void*)0),                _if_conditional96) {
                    result_36->mDelegate=self->mDelegate;
                }
                if(_if_conditional97=self!=((void*)0),                _if_conditional97) {
                    result_36->mShare=self->mShare;
                }
                if(_if_conditional98=self!=((void*)0),                _if_conditional98) {
                    result_36->mClone=self->mClone;
                }
                if(_if_conditional99=self!=((void*)0),                _if_conditional99) {
                    result_36->mNoHeap=self->mNoHeap;
                }
                if(_if_conditional100=self!=((void*)0),                _if_conditional100) {
                    result_36->mNoCallingDestructor=self->mNoCallingDestructor;
                }
                if(_if_conditional101=self!=((void*)0),                _if_conditional101) {
                    result_36->mRefference=self->mRefference;
                }
                if(_if_conditional102=self!=((void*)0),                _if_conditional102) {
                    result_36->mException=self->mException;
                }
                if(_if_conditional103=self!=((void*)0),                _if_conditional103) {
                    result_36->mPointerNum=self->mPointerNum;
                }
                if(_if_conditional104=self!=((void*)0),                _if_conditional104) {
                    result_36->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                }
                if(_if_conditional105=self!=((void*)0),                _if_conditional105) {
                    result_36->mNoArrayPointerNum=self->mNoArrayPointerNum;
                }
                if(_if_conditional106=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional106) {
                    __dec_obj29=result_36->mSizeNum;
                    result_36->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value62=sNode_clone(self->mSizeNum))));
                    if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
                    if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { right_value62 = come_decrement_ref_count(right_value62, ((struct sNode*)right_value62)->finalize, ((struct sNode*)right_value62)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value62, right_value62 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional107=self!=((void*)0),                _if_conditional107) {
                    result_36->mDynamicArrayNum=self->mDynamicArrayNum;
                }
                if(_if_conditional108=self!=((void*)0),                _if_conditional108) {
                    result_36->mTypeOfExpression=self->mTypeOfExpression;
                }
                if(_if_conditional109=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional109) {
                    __dec_obj30=result_36->mOriginalTypeName;
                    result_36->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value63=string_clone(self->mOriginalTypeName))));
                    if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value63);
                    if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { right_value63 = come_decrement_ref_count(right_value63, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value63, right_value63 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional110=self!=((void*)0),                _if_conditional110) {
                    result_36->mOriginalPointerNum=self->mOriginalPointerNum;
                }
                if(_if_conditional111=self!=((void*)0),                _if_conditional111) {
                    result_36->mFunctionParam=self->mFunctionParam;
                }
                if(_if_conditional112=self!=((void*)0),                _if_conditional112) {
                    result_36->mAllocaValue=self->mAllocaValue;
                }
                if(_if_conditional113=self!=((void*)0),                _if_conditional113) {
                    result_36->mGenericsStruct=self->mGenericsStruct;
                }
                if(_if_conditional114=self!=((void*)0),                _if_conditional114) {
                    result_36->mSolvedGenericsName=self->mSolvedGenericsName;
                }
                if(_if_conditional115=self!=((void*)0),                _if_conditional115) {
                    result_36->mComeMemCore=self->mComeMemCore;
                }
                if(_if_conditional116=self!=((void*)0),                _if_conditional116) {
                    result_36->mInline=self->mInline;
                }
                if(_if_conditional117=self!=((void*)0),                _if_conditional117) {
                    result_36->mNullValue=self->mNullValue;
                }
                if(_if_conditional118=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional118) {
                    __dec_obj31=result_36->mAsmName;
                    result_36->mAsmName=(char*)come_increment_ref_count(((char*)(right_value64=string_clone(self->mAsmName))));
                    if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64);
                    if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { right_value64 = come_decrement_ref_count(right_value64, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value64, right_value64 = (void*)0;
                    __freed_obj__ = 0;
                }
                __result40__ = __result_obj__ = result_36;
                if(result_36 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_36, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result40__;
                if(result_36 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_36, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional52;
struct tuple1$1sTypeph* __result26__;
void* right_value32;
struct tuple1$1sTypeph* result_37;
_Bool _if_conditional54;
void* right_value33;
struct sType* __dec_obj10;
struct tuple1$1sTypeph* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value32 = (void*)0;
memset(&result_37, 0, sizeof(struct tuple1$1sTypeph*));
right_value33 = (void*)0;
                        if(_if_conditional52=self==(void*)0,                        _if_conditional52) {
                            __result26__ = __result_obj__ = (void*)0;
                            return __result26__;
                        }
                        result_37=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value32=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
                        if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value32, right_value32 = (void*)0;
                        __freed_obj__ = 0;
                        if(_if_conditional54=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional54) {
                            __dec_obj10=result_37->v1;
                            result_37->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value33=sType_clone(self->v1))));
                            if(__dec_obj10) { come_call_finalizer(sType_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value33);
                            if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value33, right_value33 = (void*)0;
                            __freed_obj__ = 0;
                        }
                        __result27__ = __result_obj__ = result_37;
                        if(result_37 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_37, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result27__;
                        if(result_37 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_37, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional53;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional53=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional53) {
                                if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional58;
struct list$1sTypeph* __result28__;
void* right_value37;
void* right_value38;
struct list$1sTypeph* result_38;
struct list_item$1sTypeph* it_39;
_Bool _while_condtional19;
void* right_value42;
struct list$1sTypeph* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value37 = (void*)0;
right_value38 = (void*)0;
memset(&result_38, 0, sizeof(struct list$1sTypeph*));
memset(&it_39, 0, sizeof(struct list_item$1sTypeph*));
right_value42 = (void*)0;
                        if(_if_conditional58=self==((void*)0),                        _if_conditional58) {
                            __result28__ = __result_obj__ = ((void*)0);
                            return __result28__;
                        }
                        result_38=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value38=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value37=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 198, "struct list$1sTypeph"))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
                        if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value37, right_value37 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value38);
                        if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value38, right_value38 = (void*)0;
                        __freed_obj__ = 0;
                        it_39=self->head;
                        while(_while_condtional19=it_39!=((void*)0),                        _while_condtional19) {
                            list$1sTypeph_add(result_38,(struct sType*)come_increment_ref_count(((struct sType*)(right_value42=sType_clone(it_39->item)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
                            if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value42, right_value42 = (void*)0;
                            __freed_obj__ = 0;
                            it_39=it_39->next;
                        }
                        __result30__ = __result_obj__ = result_38;
                        if(result_38 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_38, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result30__;
                        if(result_38 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_38, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional59;
void* right_value39;
struct list_item$1sTypeph* litem_40;
struct sType* __dec_obj14;
_Bool _if_conditional60;
void* right_value40;
struct list_item$1sTypeph* litem_41;
struct sType* __dec_obj15;
void* right_value41;
struct list_item$1sTypeph* litem_42;
struct sType* __dec_obj16;
struct list$1sTypeph* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value39 = (void*)0;
memset(&litem_40, 0, sizeof(struct list_item$1sTypeph*));
right_value40 = (void*)0;
memset(&litem_41, 0, sizeof(struct list_item$1sTypeph*));
right_value41 = (void*)0;
memset(&litem_42, 0, sizeof(struct list_item$1sTypeph*));
                                if(_if_conditional59=self->len==0,                                _if_conditional59) {
                                    litem_40=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value39=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 212, "struct list_item$1sTypeph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
                                    if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value39, right_value39 = (void*)0;
                                    __freed_obj__ = 0;
                                    litem_40->prev=((void*)0);
                                    litem_40->next=((void*)0);
                                    __dec_obj14=litem_40->item;
                                    litem_40->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj14) { come_call_finalizer(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    self->tail=litem_40;
                                    self->head=litem_40;
                                }
                                else {
                                    if(_if_conditional60=self->len==1,                                    _if_conditional60) {
                                        litem_41=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value40=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 222, "struct list_item$1sTypeph"))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
                                        if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value40, right_value40 = (void*)0;
                                        __freed_obj__ = 0;
                                        litem_41->prev=self->head;
                                        litem_41->next=((void*)0);
                                        __dec_obj15=litem_41->item;
                                        litem_41->item=(struct sType*)come_increment_ref_count(item);
                                        if(__dec_obj15) { come_call_finalizer(sType_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        self->tail=litem_41;
                                        self->head->next=litem_41;
                                    }
                                    else {
                                        litem_42=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value41=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 232, "struct list_item$1sTypeph"))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
                                        if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value41, right_value41 = (void*)0;
                                        __freed_obj__ = 0;
                                        litem_42->prev=self->tail;
                                        litem_42->next=((void*)0);
                                        __dec_obj16=litem_42->item;
                                        litem_42->item=(struct sType*)come_increment_ref_count(item);
                                        if(__dec_obj16) { come_call_finalizer(sType_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        self->tail->next=litem_42;
                                        self->tail=litem_42;
                                    }
                                }
                                self->len++;
                                __result29__ = __result_obj__ = self;
                                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result29__;
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
_Bool _if_conditional62;
struct list$1sNodeph* __result31__;
void* right_value44;
void* right_value45;
struct list$1sNodeph* result_43;
struct list_item$1sNodeph* it_44;
_Bool _while_condtional20;
void* right_value50;
struct list$1sNodeph* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value44 = (void*)0;
right_value45 = (void*)0;
memset(&result_43, 0, sizeof(struct list$1sNodeph*));
memset(&it_44, 0, sizeof(struct list_item$1sNodeph*));
right_value50 = (void*)0;
                        if(_if_conditional62=self==((void*)0),                        _if_conditional62) {
                            __result31__ = __result_obj__ = ((void*)0);
                            return __result31__;
                        }
                        result_43=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value45=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value44=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 198, "struct list$1sNodeph"))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
                        if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value44, right_value44 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value45);
                        if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value45, right_value45 = (void*)0;
                        __freed_obj__ = 0;
                        it_44=self->head;
                        while(_while_condtional20=it_44!=((void*)0),                        _while_condtional20) {
                            list$1sNodeph_add(result_43,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value50=sNode_clone(it_44->item)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50);
                            if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { right_value50 = come_decrement_ref_count(right_value50, ((struct sNode*)right_value50)->finalize, ((struct sNode*)right_value50)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value50, right_value50 = (void*)0;
                            __freed_obj__ = 0;
                            it_44=it_44->next;
                        }
                        __result36__ = __result_obj__ = result_43;
                        if(result_43 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_43, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result36__;
                        if(result_43 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_43, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            __result32__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result32__;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional63;
void* right_value46;
struct list_item$1sNodeph* litem_45;
struct sNode* __dec_obj18;
_Bool _if_conditional64;
void* right_value47;
struct list_item$1sNodeph* litem_46;
struct sNode* __dec_obj19;
void* right_value48;
struct list_item$1sNodeph* litem_47;
struct sNode* __dec_obj20;
struct list$1sNodeph* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value46 = (void*)0;
memset(&litem_45, 0, sizeof(struct list_item$1sNodeph*));
right_value47 = (void*)0;
memset(&litem_46, 0, sizeof(struct list_item$1sNodeph*));
right_value48 = (void*)0;
memset(&litem_47, 0, sizeof(struct list_item$1sNodeph*));
                                if(_if_conditional63=self->len==0,                                _if_conditional63) {
                                    litem_45=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value46=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 212, "struct list_item$1sNodeph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value46);
                                    if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value46, right_value46 = (void*)0;
                                    __freed_obj__ = 0;
                                    litem_45->prev=((void*)0);
                                    litem_45->next=((void*)0);
                                    __dec_obj18=litem_45->item;
                                    litem_45->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0,0); }
                                    self->tail=litem_45;
                                    self->head=litem_45;
                                }
                                else {
                                    if(_if_conditional64=self->len==1,                                    _if_conditional64) {
                                        litem_46=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value47=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 222, "struct list_item$1sNodeph"))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value47);
                                        if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value47, right_value47 = (void*)0;
                                        __freed_obj__ = 0;
                                        litem_46->prev=self->head;
                                        litem_46->next=((void*)0);
                                        __dec_obj19=litem_46->item;
                                        litem_46->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0,0); }
                                        self->tail=litem_46;
                                        self->head->next=litem_46;
                                    }
                                    else {
                                        litem_47=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value48=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 232, "struct list_item$1sNodeph"))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value48);
                                        if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value48, right_value48 = (void*)0;
                                        __freed_obj__ = 0;
                                        litem_47->prev=self->tail;
                                        litem_47->next=((void*)0);
                                        __dec_obj20=litem_47->item;
                                        litem_47->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0,0); }
                                        self->tail->next=litem_47;
                                        self->tail=litem_47;
                                    }
                                }
                                self->len++;
                                __result33__ = __result_obj__ = self;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                                return __result33__;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional65;
struct sNode* __result34__;
void* right_value49;
struct sNode* result_48;
_Bool _if_conditional66;
_Bool _if_conditional67;
_Bool _if_conditional68;
_Bool _if_conditional69;
_Bool _if_conditional70;
_Bool _if_conditional71;
_Bool _if_conditional72;
_Bool _if_conditional73;
struct sNode* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value49 = (void*)0;
memset(&result_48, 0, sizeof(struct sNode*));
                                if(_if_conditional65=self==(void*)0,                                _if_conditional65) {
                                    __result34__ = __result_obj__ = (void*)0;
                                    return __result34__;
                                }
                                result_48=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value49=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49);
                                if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { right_value49 = come_decrement_ref_count(right_value49, ((struct sNode*)right_value49)->finalize, ((struct sNode*)right_value49)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value49, right_value49 = (void*)0;
                                __freed_obj__ = 0;
                                if(_if_conditional66=self!=((void*)0)&&self->clone!=((void*)0),                                _if_conditional66) {
                                    result_48->_protocol_obj=self->clone(self->_protocol_obj);
                                }
                                if(_if_conditional67=self!=((void*)0),                                _if_conditional67) {
                                    result_48->finalize=self->finalize;
                                }
                                if(_if_conditional68=self!=((void*)0),                                _if_conditional68) {
                                    result_48->clone=self->clone;
                                }
                                if(_if_conditional69=self!=((void*)0),                                _if_conditional69) {
                                    result_48->compile=self->compile;
                                }
                                if(_if_conditional70=self!=((void*)0),                                _if_conditional70) {
                                    result_48->sline=self->sline;
                                }
                                if(_if_conditional71=self!=((void*)0),                                _if_conditional71) {
                                    result_48->sname=self->sname;
                                }
                                if(_if_conditional72=self!=((void*)0),                                _if_conditional72) {
                                    result_48->terminated=self->terminated;
                                }
                                if(_if_conditional73=self!=((void*)0),                                _if_conditional73) {
                                    result_48->kind=self->kind;
                                }
                                __result35__ = __result_obj__ = result_48;
                                if(result_48 && !__freed_obj__) { result_48 = come_decrement_ref_count(result_48, ((struct sNode*)result_48)->finalize, ((struct sNode*)result_48)->_protocol_obj, 0, 1, 0); } 
                                return __result35__;
                                if(result_48 && !__freed_obj__) { result_48 = come_decrement_ref_count(result_48, ((struct sNode*)result_48)->finalize, ((struct sNode*)result_48)->_protocol_obj, 0, 0, 0); } 
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
_Bool _if_conditional77;
struct list$1charph* __result37__;
void* right_value53;
void* right_value54;
struct list$1charph* result_49;
struct list_item$1charph* it_50;
_Bool _while_condtional21;
void* right_value58;
struct list$1charph* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value53 = (void*)0;
right_value54 = (void*)0;
memset(&result_49, 0, sizeof(struct list$1charph*));
memset(&it_50, 0, sizeof(struct list_item$1charph*));
right_value58 = (void*)0;
                        if(_if_conditional77=self==((void*)0),                        _if_conditional77) {
                            __result37__ = __result_obj__ = ((void*)0);
                            return __result37__;
                        }
                        result_49=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value54=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value53=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 198, "struct list$1charph"))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
                        if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value53, right_value53 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value54);
                        if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value54, right_value54 = (void*)0;
                        __freed_obj__ = 0;
                        it_50=self->head;
                        while(_while_condtional21=it_50!=((void*)0),                        _while_condtional21) {
                            list$1charph_add(result_49,(char*)come_increment_ref_count(((char*)(right_value58=string_clone(it_50->item)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
                            if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value58, right_value58 = (void*)0;
                            __freed_obj__ = 0;
                            it_50=it_50->next;
                        }
                        __result39__ = __result_obj__ = result_49;
                        if(result_49 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_49, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result39__;
                        if(result_49 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_49, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional78;
void* right_value55;
struct list_item$1charph* litem_51;
char* __dec_obj23;
_Bool _if_conditional79;
void* right_value56;
struct list_item$1charph* litem_52;
char* __dec_obj24;
void* right_value57;
struct list_item$1charph* litem_53;
char* __dec_obj25;
struct list$1charph* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value55 = (void*)0;
memset(&litem_51, 0, sizeof(struct list_item$1charph*));
right_value56 = (void*)0;
memset(&litem_52, 0, sizeof(struct list_item$1charph*));
right_value57 = (void*)0;
memset(&litem_53, 0, sizeof(struct list_item$1charph*));
                                if(_if_conditional78=self->len==0,                                _if_conditional78) {
                                    litem_51=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value55=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 212, "struct list_item$1charph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
                                    if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value55, right_value55 = (void*)0;
                                    __freed_obj__ = 0;
                                    litem_51->prev=((void*)0);
                                    litem_51->next=((void*)0);
                                    __dec_obj23=litem_51->item;
                                    litem_51->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0,0); }
                                    self->tail=litem_51;
                                    self->head=litem_51;
                                }
                                else {
                                    if(_if_conditional79=self->len==1,                                    _if_conditional79) {
                                        litem_52=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value56=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 222, "struct list_item$1charph"))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
                                        if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value56, right_value56 = (void*)0;
                                        __freed_obj__ = 0;
                                        litem_52->prev=self->head;
                                        litem_52->next=((void*)0);
                                        __dec_obj24=litem_52->item;
                                        litem_52->item=(char*)come_increment_ref_count(item);
                                        if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0,0); }
                                        self->tail=litem_52;
                                        self->head->next=litem_52;
                                    }
                                    else {
                                        litem_53=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value57=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 232, "struct list_item$1charph"))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
                                        if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value57, right_value57 = (void*)0;
                                        __freed_obj__ = 0;
                                        litem_53->prev=self->tail;
                                        litem_53->next=((void*)0);
                                        __dec_obj25=litem_53->item;
                                        litem_53->item=(char*)come_increment_ref_count(item);
                                        if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0,0); }
                                        self->tail->next=litem_53;
                                        self->tail=litem_53;
                                    }
                                }
                                self->len++;
                                __result38__ = __result_obj__ = self;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                                return __result38__;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional119;
void* right_value66;
struct list_item$1charph* litem_54;
char* __dec_obj32;
_Bool _if_conditional120;
void* right_value67;
struct list_item$1charph* litem_55;
char* __dec_obj33;
void* right_value68;
struct list_item$1charph* litem_56;
char* __dec_obj34;
struct list$1charph* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value66 = (void*)0;
memset(&litem_54, 0, sizeof(struct list_item$1charph*));
right_value67 = (void*)0;
memset(&litem_55, 0, sizeof(struct list_item$1charph*));
right_value68 = (void*)0;
memset(&litem_56, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional119=self->len==0,                _if_conditional119) {
                    litem_54=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value66=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 282, "struct list_item$1charph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
                    if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value66, right_value66 = (void*)0;
                    __freed_obj__ = 0;
                    litem_54->prev=((void*)0);
                    litem_54->next=((void*)0);
                    __dec_obj32=litem_54->item;
                    litem_54->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0,0); }
                    self->tail=litem_54;
                    self->head=litem_54;
                }
                else {
                    if(_if_conditional120=self->len==1,                    _if_conditional120) {
                        litem_55=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value67=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 292, "struct list_item$1charph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
                        if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value67, right_value67 = (void*)0;
                        __freed_obj__ = 0;
                        litem_55->prev=self->head;
                        litem_55->next=((void*)0);
                        __dec_obj33=litem_55->item;
                        litem_55->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0,0); }
                        self->tail=litem_55;
                        self->head->next=litem_55;
                    }
                    else {
                        litem_56=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value68=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 302, "struct list_item$1charph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value68);
                        if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value68, right_value68 = (void*)0;
                        __freed_obj__ = 0;
                        litem_56->prev=self->tail;
                        litem_56->next=((void*)0);
                        __dec_obj34=litem_56->item;
                        litem_56->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
                        self->tail->next=litem_56;
                        self->tail=litem_56;
                    }
                }
                self->len++;
                __result41__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                return __result41__;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __dec_obj35;
struct list$1charph* __dec_obj36;
struct list$1charph* __dec_obj37;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __dec_obj35=self->v1;
        self->v1=(struct list$1sTypeph*)come_increment_ref_count(v1);
        if(__dec_obj35) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0); }
        __dec_obj36=self->v2;
        self->v2=(struct list$1charph*)come_increment_ref_count(v2);
        if(__dec_obj36) { come_call_finalizer(list$1charph_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
        __dec_obj37=self->v3;
        self->v3=(struct list$1charph*)come_increment_ref_count(v3);
        if(__dec_obj37) { come_call_finalizer(list$1charph_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0); }
        self->v4=v4;
        __result42__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v3 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,v3, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result42__;
        if(self && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v3 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,v3, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional125;
_Bool _if_conditional126;
_Bool _if_conditional127;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional125=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional125) {
                if(self->v1 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional126=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional126) {
                if(self->v2 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional127=self!=((void*)0)&&self->v3!=((void*)0),            _if_conditional127) {
                if(self->v3 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->v3, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

void check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value74;
struct sType* right_type2_62;
struct sType* left_no_solved_generics_type_63;
struct sType* right_no_solved_generics_type_64;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
int i_65;
_Bool _for_condtionalA2;
void* right_value75;
void* right_value76;
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
void* right_value77;
void* right_value78;
struct buffer* buf2_69;
void* right_value79;
void* right_value80;
void* right_value81;
void* right_value82;
void* right_value83;
char* __dec_obj38;
void* right_value84;
struct sType* __dec_obj39;
void* right_value85;
struct sType* __dec_obj40;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
_Bool _if_conditional151;
void* right_value86;
char* method_name_70;
void* right_value88;
_Bool _if_conditional172;
struct sType* obj_type_74;
_Bool _if_conditional173;
struct sType* obj_type2_75;
void* right_value89;
void* right_value90;
char* __dec_obj41;
void* right_value91;
void* right_value92;
struct buffer* buf2_76;
void* right_value93;
void* right_value94;
struct sType* type_77;
void* right_value95;
void* right_value96;
char* __dec_obj42;
void* right_value97;
struct sType* __dec_obj43;
void* right_value98;
struct sType* __dec_obj44;
_Bool _if_conditional174;
_Bool _if_conditional175;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool _if_conditional184;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value74 = (void*)0;
memset(&right_type2_62, 0, sizeof(struct sType*));
memset(&left_no_solved_generics_type_63, 0, sizeof(struct sType*));
memset(&right_no_solved_generics_type_64, 0, sizeof(struct sType*));
memset(&i_65, 0, sizeof(int));
right_value75 = (void*)0;
right_value76 = (void*)0;
right_value77 = (void*)0;
right_value78 = (void*)0;
memset(&buf2_69, 0, sizeof(struct buffer*));
right_value79 = (void*)0;
right_value80 = (void*)0;
right_value81 = (void*)0;
right_value82 = (void*)0;
right_value83 = (void*)0;
right_value84 = (void*)0;
right_value85 = (void*)0;
right_value86 = (void*)0;
memset(&method_name_70, 0, sizeof(char*));
right_value88 = (void*)0;
memset(&obj_type_74, 0, sizeof(struct sType*));
memset(&obj_type2_75, 0, sizeof(struct sType*));
right_value89 = (void*)0;
right_value90 = (void*)0;
right_value91 = (void*)0;
right_value92 = (void*)0;
memset(&buf2_76, 0, sizeof(struct buffer*));
right_value93 = (void*)0;
right_value94 = (void*)0;
memset(&type_77, 0, sizeof(struct sType*));
right_value95 = (void*)0;
right_value96 = (void*)0;
right_value97 = (void*)0;
right_value98 = (void*)0;
    right_type2_62=(struct sType*)come_increment_ref_count(((struct sType*)(right_value74=sType_clone(right_type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value74);
    if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value74, right_value74 = (void*)0;
    __freed_obj__ = 0;
    left_no_solved_generics_type_63=left_type->mNoSolvedGenericsType->v1;
    right_no_solved_generics_type_64=right_type2_62->mNoSolvedGenericsType->v1;
    if(_if_conditional128=left_no_solved_generics_type_63&&right_no_solved_generics_type_64,    _if_conditional128) {
        if(_if_conditional129=list$1sTypeph_length(left_no_solved_generics_type_63->mGenericsTypes)>0,        _if_conditional129) {
            if(_if_conditional130=list$1sTypeph_length(left_no_solved_generics_type_63->mGenericsTypes)!=list$1sTypeph_length(right_no_solved_generics_type_64->mGenericsTypes),            _if_conditional130) {
                err_msg(info,"generics type parametor number error");
                printf("left type generics type parametor number is %d\n",list$1sTypeph_length(left_no_solved_generics_type_63->mGenericsTypes));
                printf("right type generics type parametor number is %d\n",list$1sTypeph_length(right_no_solved_generics_type_64->mGenericsTypes));
                exit(2);
            }
            for(
            i_65=0 ,            0;            _for_condtionalA2=            i_65<list$1sTypeph_length(left_no_solved_generics_type_63->mGenericsTypes) ,            _for_condtionalA2;            i_65++ ,            0            ){
                check_assign_type(msg,((struct sType*)(right_value75=list$1sTypephp_operator_load_element(left_no_solved_generics_type_63->mGenericsTypes,i_65))),((struct sType*)(right_value76=list$1sTypephp_operator_load_element(right_no_solved_generics_type_64->mGenericsTypes,i_65))),come_value,(_Bool)1,info);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value75);
                if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value75, right_value75 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value76);
                if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value76, right_value76 = (void*)0;
                __freed_obj__ = 0;
            }
            check_assign_type(msg,left_no_solved_generics_type_63,right_no_solved_generics_type_64,come_value,(_Bool)0,info);
        }
    }
    else {
        if(_if_conditional133=check_no_pointer,        _if_conditional133) {
            if(_if_conditional134=left_type->mPointerNum>0,            _if_conditional134) {
                if(_if_conditional135=right_type2_62->mPointerNum>0,                _if_conditional135) {
                    if(_if_conditional136=string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_62->mClass->mName,"void"),                    _if_conditional136) {
                    }
                    else {
                        if(_if_conditional137=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_62->mClass->mName,"va_list"),                        _if_conditional137) {
                        }
                        else {
                            if(_if_conditional138=string_operator_not_equals(left_type->mClass->mName,right_type2_62->mClass->mName),                            _if_conditional138) {
                                err_msg(info,"type error1");
                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                printf("right type is %s pointer num %d\n",right_type2_62->mClass->mName,right_type2_62->mPointerNum);
                                exit(2);
                            }
                        }
                    }
                }
                else {
                    err_msg(info,"type error2");
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_62->mClass->mName,right_type2_62->mPointerNum);
                    exit(2);
                }
            }
            else {
                if(_if_conditional139=left_type->mPointerNum==0&&right_type2_62->mPointerNum>0,                _if_conditional139) {
                    err_msg(info,"type error3");
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_62->mClass->mName,right_type2_62->mPointerNum);
                    exit(2);
                }
                else {
                    if(_if_conditional140=string_operator_not_equals(left_type->mClass->mName,right_type2_62->mClass->mName),                    _if_conditional140) {
                        err_msg(info,"type error4");
                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                        printf("right type is %s pointer num %d\n",right_type2_62->mClass->mName,right_type2_62->mPointerNum);
                        exit(2);
                    }
                }
            }
        }
        else {
            if(_if_conditional141=!left_type->mNullValue&&right_type2_62->mNullValue,            _if_conditional141) {
                if(_if_conditional142=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_62->mClass->mName,"__builtin_va_list"),                _if_conditional142) {
                }
                else {
                    if(_if_conditional143=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_62->mClass->mName,"va_list"),                    _if_conditional143) {
                    }
                    else {
                        if(_if_conditional144=string_operator_equals(right_type2_62->mClass->mName,"void")&&right_type2_62->mPointerNum==0,                        _if_conditional144) {
                            err_msg(info,"type error6");
                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                            printf("right type is %s pointer num %d\n",right_type2_62->mClass->mName,right_type2_62->mPointerNum);
                            exit(2);
                        }
                        else {
                            buf2_69=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value78=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value77=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 387, "struct buffer"))))))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
                            if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value77, right_value77 = (void*)0;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value78);
                            if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value78, right_value78 = (void*)0;
                            __freed_obj__ = 0;
                            buffer_append_str(buf2_69,((char*)(right_value82=xsprintf("come_null_check(\%s, \"\%s\", \%s)",((char*)(right_value79=string_to_string(come_value->c_value))),((char*)(right_value80=string_to_string(info->sname))),((char*)(right_value81=int_to_string(info->sline)))))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
                            if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value79, right_value79 = (void*)0;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value80);
                            if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { right_value80 = come_decrement_ref_count(right_value80, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value80, right_value80 = (void*)0;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value81);
                            if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { right_value81 = come_decrement_ref_count(right_value81, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value81, right_value81 = (void*)0;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value82);
                            if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[3] = right_value82, right_value82 = (void*)0;
                            __freed_obj__ = 0;
                            __dec_obj38=come_value->c_value;
                            come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value83=buffer_to_string(buf2_69))));
                            if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
                            if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value83, right_value83 = (void*)0;
                            __freed_obj__ = 0;
                            __dec_obj39=come_value->type;
                            come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value84=sType_clone(left_type))));
                            if(__dec_obj39) { come_call_finalizer(sType_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value84);
                            if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value84, right_value84 = (void*)0;
                            __freed_obj__ = 0;
                            come_value->var=((void*)0);
                            __dec_obj40=right_type2_62;
                            right_type2_62=(struct sType*)come_increment_ref_count(((struct sType*)(right_value85=sType_clone(left_type))));
                            if(__dec_obj40) { come_call_finalizer(sType_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value85);
                            if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value85, right_value85 = (void*)0;
                            __freed_obj__ = 0;
                            if(buf2_69 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf2_69, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                    }
                }
            }
            else {
                if(_if_conditional145=string_operator_equals(left_type->mClass->mName,"char")&&left_type->mPointerNum==1,                _if_conditional145) {
                    if(_if_conditional146=string_operator_equals(right_type2_62->mClass->mName,"char")&&right_type2_62->mPointerNum==1,                    _if_conditional146) {
                    }
                    else {
                        if(_if_conditional147=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_62->mClass->mName,"__builtin_va_list"),                        _if_conditional147) {
                        }
                        else {
                            if(_if_conditional148=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_62->mClass->mName,"va_list"),                            _if_conditional148) {
                            }
                            else {
                                if(_if_conditional149=string_operator_equals(right_type2_62->mClass->mName,"lambda"),                                _if_conditional149) {
                                    err_msg(info,"type error6");
                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                    printf("right type is %s pointer num %d\n",right_type2_62->mClass->mName,right_type2_62->mPointerNum);
                                    exit(2);
                                }
                                else {
                                    if(_if_conditional150=string_operator_equals(right_type2_62->mClass->mName,"void")&&right_type2_62->mPointerNum>0,                                    _if_conditional150) {
                                    }
                                    else {
                                        if(_if_conditional151=string_operator_equals(right_type2_62->mClass->mName,"void"),                                        _if_conditional151) {
                                            err_msg(info,"type error6");
                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                            printf("right type is %s pointer num %d\n",right_type2_62->mClass->mName,right_type2_62->mPointerNum);
                                            exit(2);
                                        }
                                        else {
                                            method_name_70=(char*)come_increment_ref_count(((char*)(right_value86=create_method_name(right_type2_62,(_Bool)0,"to_string",info))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value86);
                                            if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value86, right_value86 = (void*)0;
                                            __freed_obj__ = 0;
                                            if(_if_conditional172=((struct sFun*)(right_value88=map$2charphsFunph_at(info->funcs,method_name_70,((void*)0))))==((void*)0),                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value88),
                                            (right_value88 && right_value88 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sFun_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                            __right_value_freed_obj[0] = right_value88, right_value88 = (void*)0, 
                                            __freed_obj__ = 0, 
                                            _if_conditional172) {
                                                obj_type_74=right_type2_62->mNoSolvedGenericsType->v1;
                                                if(_if_conditional173=obj_type_74&&list$1sTypeph_length(obj_type_74->mGenericsTypes)>0,                                                _if_conditional173) {
                                                    obj_type2_75=right_type2_62;
                                                    __dec_obj41=method_name_70;
                                                    method_name_70=(char*)come_increment_ref_count(((char*)(right_value90=make_generics_function(obj_type2_75,(char*)come_increment_ref_count(((char*)(right_value89=__builtin_string("to_string")))),info))));
                                                    if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0,0); }
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value89);
                                                    if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value89, right_value89 = (void*)0;
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value90);
                                                    if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[1] = right_value90, right_value90 = (void*)0;
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    err_msg(info,"require to_string implementation(%s)",right_type2_62->mClass->mName);
                                                    exit(1);
                                                }
                                            }
                                            buf2_76=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value92=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value91=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 434, "struct buffer"))))))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value91);
                                            if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value91, right_value91 = (void*)0;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value92);
                                            if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[1] = right_value92, right_value92 = (void*)0;
                                            __freed_obj__ = 0;
                                            buffer_append_str(buf2_76,method_name_70);
                                            buffer_append_str(buf2_76,"(");
                                            buffer_append_str(buf2_76,come_value->c_value);
                                            buffer_append_str(buf2_76,")");
                                            type_77=(struct sType*)come_increment_ref_count(((struct sType*)(right_value94=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value93=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 441, "struct sType")))),"char*",(_Bool)0,info))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
                                            if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value93, right_value93 = (void*)0;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value94);
                                            if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[1] = right_value94, right_value94 = (void*)0;
                                            __freed_obj__ = 0;
                                            type_77->mHeap=(_Bool)1;
                                            __dec_obj42=come_value->c_value;
                                            come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value96=append_object_to_right_values(((char*)(right_value95=buffer_to_string(buf2_76))),(struct sType*)come_increment_ref_count(type_77),info))));
                                            if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
                                            if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { right_value95 = come_decrement_ref_count(right_value95, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value95, right_value95 = (void*)0;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value96);
                                            if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[1] = right_value96, right_value96 = (void*)0;
                                            __freed_obj__ = 0;
                                            __dec_obj43=come_value->type;
                                            come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value97=sType_clone(type_77))));
                                            if(__dec_obj43) { come_call_finalizer(sType_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97);
                                            if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value97, right_value97 = (void*)0;
                                            __freed_obj__ = 0;
                                            come_value->var=((void*)0);
                                            __dec_obj44=right_type2_62;
                                            right_type2_62=(struct sType*)come_increment_ref_count(((struct sType*)(right_value98=sType_clone(type_77))));
                                            if(__dec_obj44) { come_call_finalizer(sType_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value98);
                                            if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value98, right_value98 = (void*)0;
                                            __freed_obj__ = 0;
                                            if(method_name_70 && !__freed_obj__) { method_name_70 = come_decrement_ref_count(method_name_70, (void*)0, (void*)0, 0, 0, 0); }
                                            if(buf2_76 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf2_76, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(type_77 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_77, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                else {
                    if(_if_conditional174=left_type->mPointerNum>0,                    _if_conditional174) {
                        if(_if_conditional175=right_type2_62->mPointerNum>0,                        _if_conditional175) {
                            if(_if_conditional176=string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_62->mClass->mName,"void"),                            _if_conditional176) {
                            }
                            else {
                                if(_if_conditional177=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_62->mClass->mName,"va_list"),                                _if_conditional177) {
                                }
                                else {
                                    if(_if_conditional178=string_operator_not_equals(left_type->mClass->mName,right_type2_62->mClass->mName),                                    _if_conditional178) {
                                        err_msg(info,"type error5");
                                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                        printf("right type is %s pointer num %d\n",right_type2_62->mClass->mName,right_type2_62->mPointerNum);
                                        exit(2);
                                    }
                                    else {
                                        if(_if_conditional179=left_type->mPointerNum!=right_type2_62->mPointerNum,                                        _if_conditional179) {
                                            printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                            printf("right type is %s pointer num %d\n",right_type2_62->mClass->mName,right_type2_62->mPointerNum);
                                        }
                                        else {
                                            if(_if_conditional180=list$1sNodeph_length(right_type2_62->mArrayNum)>0,                                            _if_conditional180) {
                                                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                                                printf("left type is %s pointer num %d array dimetion num %d\n",left_type->mClass->mName,left_type->mPointerNum,list$1sNodeph_length(left_type->mArrayNum));
                                                printf("right type is %s pointer num %d array dimetion num %d\n",right_type2_62->mClass->mName,right_type2_62->mPointerNum,list$1sNodeph_length(right_type2_62->mArrayNum));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        else {
                            if(_if_conditional181=string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_62->mClass->mName,"void"),                            _if_conditional181) {
                            }
                            else {
                                if(_if_conditional182=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_62->mClass->mName,"va_list"),                                _if_conditional182) {
                                }
                                else {
                                    if(_if_conditional183=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_62->mClass->mName,"__builtin_va_list"),                                    _if_conditional183) {
                                    }
                                    else {
                                        if(_if_conditional184=!(string_operator_equals(right_type2_62->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"))&&right_type2_62->mPointerNum==0,                                        _if_conditional184) {
                                            err_msg(info,"type error6");
                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                            printf("right type is %s pointer num %d\n",right_type2_62->mClass->mName,right_type2_62->mPointerNum);
                                            exit(2);
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
    if(right_type2_62 && !__freed_obj__) { come_call_finalizer(sType_finalize,right_type2_62, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result44__ = self->len;
            return __result44__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional131;
struct list_item$1sTypeph* it_66;
int i_67;
_Bool _while_condtional22;
_Bool _if_conditional132;
struct sType* __result45__;
struct sType* default_value_68;
struct sType* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_66, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_67, 0, sizeof(int));
memset(&default_value_68, 0, sizeof(struct sType*));
                    if(_if_conditional131=position<0,                    _if_conditional131) {
                        position+=self->len;
                    }
                    it_66=self->head;
                    i_67=0;
                    while(_while_condtional22=it_66!=((void*)0),                    _while_condtional22) {
                        if(_if_conditional132=position==i_67,                        _if_conditional132) {
                            __result45__ = __result_obj__ = it_66->item;
                            return __result45__;
                        }
                        it_66=it_66->next;
                        i_67++;
                    }
                    memset(&default_value_68,0,sizeof(struct sType*));
                    __result46__ = __result_obj__ = default_value_68;
                    if(default_value_68 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_68, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result46__;
                    if(default_value_68 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_68, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_71;
unsigned int it_72;
_Bool _while_condtional23;
_Bool _if_conditional152;
void* right_value87;
_Bool _if_conditional154;
struct sFun* __result49__;
_Bool _if_conditional170;
_Bool _if_conditional171;
struct sFun* __result50__;
struct sFun* __result51__;
struct sFun* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_71, 0, sizeof(unsigned int));
memset(&it_72, 0, sizeof(unsigned int));
right_value87 = (void*)0;
                                                hash_71=string_get_hash_key(((char*)key))%self->size;
                                                it_72=hash_71;
                                                while(_while_condtional23=(_Bool)1,                                                _while_condtional23) {
                                                    if(_if_conditional152=self->item_existance[it_72],                                                    _if_conditional152) {
                                                        if(_if_conditional154=optional$2boolbool_value(((struct optional$2boolbool*)(right_value87=string_equals(self->keys[it_72],key)))),                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value87),
                                                        (right_value87 && right_value87 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                        __right_value_freed_obj[0] = right_value87, right_value87 = (void*)0, 
                                                        __freed_obj__ = 0, 
                                                        _if_conditional154) {
                                                            __result49__ = __result_obj__ = self->items[it_72];
                                                            if(default_value && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                            return __result49__;
                                                        }
                                                        it_72++;
                                                        if(_if_conditional170=it_72>=self->size,                                                        _if_conditional170) {
                                                            it_72=0;
                                                        }
                                                        else {
                                                            if(_if_conditional171=it_72==hash_71,                                                            _if_conditional171) {
                                                                __result50__ = __result_obj__ = default_value;
                                                                if(default_value && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                                return __result50__;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        __result51__ = __result_obj__ = default_value;
                                                        if(default_value && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                        return __result51__;
                                                    }
                                                }
                                                __result52__ = __result_obj__ = default_value;
                                                if(default_value && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                return __result52__;
                                                if(default_value && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional153;
_Bool default_value_73;
_Bool __result47__;
_Bool __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_73, 0, sizeof(_Bool));
                                                            if(_if_conditional153=self==((void*)0),                                                            _if_conditional153) {
                                                                memset(&default_value_73,0,sizeof(_Bool));
                                                                __result47__ = default_value_73;
                                                                return __result47__;
                                                            }
                                                            else {
                                                                __result48__ = self->v1;
                                                                return __result48__;
                                                            }
}

static void optional$2boolboolp_finalize(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional155;
_Bool _if_conditional156;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional160;
_Bool _if_conditional161;
_Bool _if_conditional164;
_Bool _if_conditional165;
_Bool _if_conditional166;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool _if_conditional169;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                                if(_if_conditional155=self!=((void*)0)&&self->mName!=((void*)0),                                                                _if_conditional155) {
                                                                    if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                                                                }
                                                                if(_if_conditional156=self!=((void*)0)&&self->mResultType!=((void*)0),                                                                _if_conditional156) {
                                                                    if(self->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                }
                                                                if(_if_conditional157=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                                                _if_conditional157) {
                                                                    if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                }
                                                                if(_if_conditional158=self!=((void*)0)&&self->mParamNames!=((void*)0),                                                                _if_conditional158) {
                                                                    if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                }
                                                                if(_if_conditional159=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                                                _if_conditional159) {
                                                                    if(self->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                }
                                                                if(_if_conditional160=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                                                _if_conditional160) {
                                                                    if(self->mLambdaType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                }
                                                                if(_if_conditional161=self!=((void*)0)&&self->mBlock!=((void*)0),                                                                _if_conditional161) {
                                                                    if(self->mBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                }
                                                                if(_if_conditional164=self!=((void*)0)&&self->mSource!=((void*)0),                                                                _if_conditional164) {
                                                                    if(self->mSource && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                }
                                                                if(_if_conditional165=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                                                _if_conditional165) {
                                                                    if(self->mSourceHead && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                }
                                                                if(_if_conditional166=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                                                _if_conditional166) {
                                                                    if(self->mSourceHead2 && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                }
                                                                if(_if_conditional167=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                                                _if_conditional167) {
                                                                    if(self->mSourceDefer && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                }
                                                                if(_if_conditional168=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                                                _if_conditional168) {
                                                                    if(self->mComeHeader && !__freed_obj__) { self->mComeHeader = come_decrement_ref_count(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0); }
                                                                }
                                                                if(_if_conditional169=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                                                _if_conditional169) {
                                                                    if(self->mDeclareSName && !__freed_obj__) { self->mDeclareSName = come_decrement_ref_count(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
                                                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional162;
_Bool _if_conditional163;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                                        if(_if_conditional162=self!=((void*)0)&&self->mNodes!=((void*)0),                                                                        _if_conditional162) {
                                                                            if(self->mNodes && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                        }
                                                                        if(_if_conditional163=self!=((void*)0)&&self->mVarTable!=((void*)0),                                                                        _if_conditional163) {
                                                                            if(self->mVarTable && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                        }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                __result53__ = self->len;
                                                return __result53__;
}

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value99;
struct sType* result_type_78;
_Bool _if_conditional185;
char* var_name_79;
char* p_80;
int sline_81;
_Bool _if_conditional186;
void* right_value100;
char* word_82;
_Bool _if_conditional187;
_Bool between_brace_83;
char* p_84;
int sline_85;
_Bool _if_conditional188;
_Bool _if_conditional189;
void* right_value101;
char* word_86;
_Bool _if_conditional190;
_Bool _if_conditional191;
_Bool _if_conditional192;
_Bool _while_condtional24;
char* p_87;
int sline_88;
_Bool _if_conditional193;
void* right_value102;
char* word_89;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional196;
void* right_value103;
char* __dec_obj45;
static int num_anonymous_var_name_90=0;
void* right_value104;
char* __dec_obj46;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool no_comma_91;
void* right_value105;
struct sNode* node_92;
struct sNode* __dec_obj47;
_Bool _while_condtional25;
char* p_93;
int sline_94;
_Bool _if_conditional199;
void* right_value106;
char* word_95;
_Bool _if_conditional200;
_Bool _if_conditional201;
void* right_value107;
struct sNode* node_96;
void* right_value111;
void* right_value112;
struct tuple2$2sTypephcharph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value99 = (void*)0;
memset(&result_type_78, 0, sizeof(struct sType*));
memset(&var_name_79, 0, sizeof(char*));
memset(&p_80, 0, sizeof(char*));
memset(&sline_81, 0, sizeof(int));
right_value100 = (void*)0;
memset(&word_82, 0, sizeof(char*));
memset(&between_brace_83, 0, sizeof(_Bool));
memset(&p_84, 0, sizeof(char*));
memset(&sline_85, 0, sizeof(int));
right_value101 = (void*)0;
memset(&word_86, 0, sizeof(char*));
memset(&p_87, 0, sizeof(char*));
memset(&sline_88, 0, sizeof(int));
right_value102 = (void*)0;
memset(&word_89, 0, sizeof(char*));
right_value103 = (void*)0;
right_value104 = (void*)0;
memset(&no_comma_91, 0, sizeof(_Bool));
right_value105 = (void*)0;
memset(&node_92, 0, sizeof(struct sNode*));
memset(&p_93, 0, sizeof(char*));
memset(&sline_94, 0, sizeof(int));
right_value106 = (void*)0;
memset(&word_95, 0, sizeof(char*));
right_value107 = (void*)0;
memset(&node_96, 0, sizeof(struct sNode*));
right_value111 = (void*)0;
right_value112 = (void*)0;
    result_type_78=(struct sType*)come_increment_ref_count(((struct sType*)(right_value99=sType_clone(base_type_name))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value99);
    if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value99, right_value99 = (void*)0;
    __freed_obj__ = 0;
    if(_if_conditional185=!first,    _if_conditional185) {
        result_type_78->mPointerNum=0;
    }
    var_name_79=((void*)0);
    {
        p_80=info->p;
        sline_81=info->sline;
        if(_if_conditional186=xisalpha(*info->p)||*info->p==95,        _if_conditional186) {
            word_82=(char*)come_increment_ref_count(((char*)(right_value100=parse_word(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
            if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value100, right_value100 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional187=string_operator_equals(word_82,"const")||string_operator_equals(word_82,"__restrict")||string_operator_equals(word_82,"restrict")||string_operator_equals(word_82,"__user")||string_operator_equals(word_82,"volatile")||string_operator_equals(word_82,"_Nonnull")||string_operator_equals(word_82,"_Nullable")||string_operator_equals(word_82,"_Null_unspecified")||string_operator_equals(word_82,"__user"),            _if_conditional187) {
            }
            else {
                info->p=p_80;
                info->sline=sline_81;
            }
            if(word_82 && !__freed_obj__) { word_82 = come_decrement_ref_count(word_82, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            info->p=p_80;
            info->sline=sline_81;
        }
    }
    between_brace_83=(_Bool)0;
    {
        p_84=info->p;
        sline_85=info->sline;
        if(_if_conditional188=*info->p==40,        _if_conditional188) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional189=xisalpha(*info->p)||*info->p==95,            _if_conditional189) {
                word_86=(char*)come_increment_ref_count(((char*)(right_value101=parse_word(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value101);
                if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { right_value101 = come_decrement_ref_count(right_value101, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value101, right_value101 = (void*)0;
                __freed_obj__ = 0;
                if(_if_conditional190=is_type_name(word_86,info),                _if_conditional190) {
                }
                else {
                    if(_if_conditional191=*info->p==41,                    _if_conditional191) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(_if_conditional192=*info->p!=40,                        _if_conditional192) {
                            between_brace_83=(_Bool)1;
                        }
                    }
                }
                if(word_86 && !__freed_obj__) { word_86 = come_decrement_ref_count(word_86, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        info->p=p_84;
        info->sline=sline_85;
    }
    parse_sharp_v5(info);
    while(_while_condtional24=*info->p==42,    _while_condtional24) {
        info->p++;
        skip_spaces_and_lf(info);
        {
            p_87=info->p;
            sline_88=info->sline;
            if(_if_conditional193=xisalpha(*info->p)||*info->p==95,            _if_conditional193) {
                word_89=(char*)come_increment_ref_count(((char*)(right_value102=parse_word(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value102);
                if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { right_value102 = come_decrement_ref_count(right_value102, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value102, right_value102 = (void*)0;
                __freed_obj__ = 0;
                if(_if_conditional194=string_operator_equals(word_89,"const")||string_operator_equals(word_89,"__restrict")||string_operator_equals(word_89,"restrict")||string_operator_equals(word_89,"__user")||string_operator_equals(word_89,"volatile")||string_operator_equals(word_89,"_Nonnull")||string_operator_equals(word_89,"_Nullable")||string_operator_equals(word_89,"_Null_unspecified")||string_operator_equals(word_89,"__user"),                _if_conditional194) {
                }
                else {
                    info->p=p_87;
                    info->sline=sline_88;
                }
                if(word_89 && !__freed_obj__) { word_89 = come_decrement_ref_count(word_89, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                info->p=p_87;
                info->sline=sline_88;
            }
        }
        result_type_78->mPointerNum++;
    }
    parse_sharp_v5(info);
    if(_if_conditional195=between_brace_83&&*info->p==40,    _if_conditional195) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(_if_conditional196=xisalnum(*info->p)||*info->p==95,    _if_conditional196) {
        __dec_obj45=var_name_79;
        var_name_79=(char*)come_increment_ref_count(((char*)(right_value103=parse_word(info))));
        if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value103);
        if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { right_value103 = come_decrement_ref_count(right_value103, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value103, right_value103 = (void*)0;
        __freed_obj__ = 0;
    }
    else {
        num_anonymous_var_name_90++;
        __dec_obj46=var_name_79;
        var_name_79=(char*)come_increment_ref_count(((char*)(right_value104=xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name_90))));
        if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value104);
        if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value104, right_value104 = (void*)0;
        __freed_obj__ = 0;
    }
    if(_if_conditional197=between_brace_83&&*info->p==41,    _if_conditional197) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(_if_conditional198=*info->p==58,    _if_conditional198) {
        info->p++;
        skip_spaces_and_lf(info);
        no_comma_91=info->no_comma;
        info->no_comma=(_Bool)1;
        node_92=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value105=expression_v13(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
        if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { right_value105 = come_decrement_ref_count(right_value105, ((struct sNode*)right_value105)->finalize, ((struct sNode*)right_value105)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[0] = right_value105, right_value105 = (void*)0;
        __freed_obj__ = 0;
        info->no_comma=no_comma_91;
        __dec_obj47=result_type_78->mSizeNum;
        result_type_78->mSizeNum=(struct sNode*)come_increment_ref_count(node_92);
        if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0); }
        if(node_92 && !__freed_obj__) { node_92 = come_decrement_ref_count(node_92, ((struct sNode*)node_92)->finalize, ((struct sNode*)node_92)->_protocol_obj, 0, 0, 0); } 
    }
    while(_while_condtional25=*info->p==91,    _while_condtional25) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        {
            p_93=info->p;
            sline_94=info->sline;
            if(_if_conditional199=xisalpha(*info->p)||*info->p==95,            _if_conditional199) {
                word_95=(char*)come_increment_ref_count(((char*)(right_value106=parse_word(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
                if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value106, right_value106 = (void*)0;
                __freed_obj__ = 0;
                if(_if_conditional200=string_operator_equals(word_95,"const")||string_operator_equals(word_95,"__restrict")||string_operator_equals(word_95,"restrict")||string_operator_equals(word_95,"__user")||string_operator_equals(word_95,"volatile")||string_operator_equals(word_95,"_Nonnull")||string_operator_equals(word_95,"_Nullable")||string_operator_equals(word_95,"_Null_unspecified")||string_operator_equals(word_95,"__user"),                _if_conditional200) {
                }
                else {
                    info->p=p_93;
                    info->sline=sline_94;
                }
                if(word_95 && !__freed_obj__) { word_95 = come_decrement_ref_count(word_95, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                info->p=p_93;
                info->sline=sline_94;
            }
        }
        if(_if_conditional201=*info->p==93,        _if_conditional201) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_78->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_96=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value107=expression_v13(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
        if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { right_value107 = come_decrement_ref_count(right_value107, ((struct sNode*)right_value107)->finalize, ((struct sNode*)right_value107)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[0] = right_value107, right_value107 = (void*)0;
        __freed_obj__ = 0;
        list$1sNodeph_push_back(result_type_78->mArrayNum,(struct sNode*)come_increment_ref_count(node_96));
        parse_sharp_v5(info);
        expected_next_character(93,info);
        if(node_96 && !__freed_obj__) { node_96 = come_decrement_ref_count(node_96, ((struct sNode*)node_96)->finalize, ((struct sNode*)node_96)->_protocol_obj, 0, 0, 0); } 
    }
    __result56__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value112=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value111=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "05function4.c", 647, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(result_type_78),(char*)come_increment_ref_count(var_name_79))));
    if(base_type_name && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_name, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(result_type_78 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_78, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_79 && !__freed_obj__) { var_name_79 = come_decrement_ref_count(var_name_79, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value111);
    if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value111, right_value111 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value112);
    if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value112, right_value112 = (void*)0;
    __freed_obj__ = 0;
    return __result56__;
    if(base_type_name && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_name, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(result_type_78 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_78, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_79 && !__freed_obj__) { var_name_79 = come_decrement_ref_count(var_name_79, (void*)0, (void*)0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional202;
void* right_value108;
struct list_item$1sNodeph* litem_97;
struct sNode* __dec_obj48;
_Bool _if_conditional203;
void* right_value109;
struct list_item$1sNodeph* litem_98;
struct sNode* __dec_obj49;
void* right_value110;
struct list_item$1sNodeph* litem_99;
struct sNode* __dec_obj50;
struct list$1sNodeph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value108 = (void*)0;
memset(&litem_97, 0, sizeof(struct list_item$1sNodeph*));
right_value109 = (void*)0;
memset(&litem_98, 0, sizeof(struct list_item$1sNodeph*));
right_value110 = (void*)0;
memset(&litem_99, 0, sizeof(struct list_item$1sNodeph*));
            if(_if_conditional202=self->len==0,            _if_conditional202) {
                litem_97=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value108=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 282, "struct list_item$1sNodeph"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value108);
                if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value108, right_value108 = (void*)0;
                __freed_obj__ = 0;
                litem_97->prev=((void*)0);
                litem_97->next=((void*)0);
                __dec_obj48=litem_97->item;
                litem_97->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0); }
                self->tail=litem_97;
                self->head=litem_97;
            }
            else {
                if(_if_conditional203=self->len==1,                _if_conditional203) {
                    litem_98=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value109=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 292, "struct list_item$1sNodeph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
                    if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value109, right_value109 = (void*)0;
                    __freed_obj__ = 0;
                    litem_98->prev=self->head;
                    litem_98->next=((void*)0);
                    __dec_obj49=litem_98->item;
                    litem_98->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0); }
                    self->tail=litem_98;
                    self->head->next=litem_98;
                }
                else {
                    litem_99=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value110=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 302, "struct list_item$1sNodeph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value110);
                    if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value110, right_value110 = (void*)0;
                    __freed_obj__ = 0;
                    litem_99->prev=self->tail;
                    litem_99->next=((void*)0);
                    __dec_obj50=litem_99->item;
                    litem_99->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0); }
                    self->tail->next=litem_99;
                    self->tail=litem_99;
                }
            }
            self->len++;
            __result54__ = __result_obj__ = self;
            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
            return __result54__;
            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* __dec_obj51;
char* __dec_obj52;
struct tuple2$2sTypephcharph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __dec_obj51=self->v1;
        self->v1=(struct sType*)come_increment_ref_count(v1);
        if(__dec_obj51) { come_call_finalizer(sType_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0); }
        __dec_obj52=self->v2;
        self->v2=(char*)come_increment_ref_count(v2);
        if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
        __result55__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
        return __result55__;
        if(self && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional204;
_Bool _if_conditional205;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional204=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional204) {
                if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional205=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional205) {
                if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
            }
}

void skip_pointer_attribute(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* p_100;
int sline_101;
_Bool _if_conditional206;
void* right_value113;
char* word_102;
_Bool _if_conditional207;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&p_100, 0, sizeof(char*));
memset(&sline_101, 0, sizeof(int));
right_value113 = (void*)0;
memset(&word_102, 0, sizeof(char*));
    p_100=info->p;
    sline_101=info->sline;
    if(_if_conditional206=xisalpha(*info->p)||*info->p==95,    _if_conditional206) {
        word_102=(char*)come_increment_ref_count(((char*)(right_value113=parse_word(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
        if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { right_value113 = come_decrement_ref_count(right_value113, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value113, right_value113 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional207=string_operator_equals(word_102,"const")||string_operator_equals(word_102,"__restrict")||string_operator_equals(word_102,"restrict")||string_operator_equals(word_102,"__user")||string_operator_equals(word_102,"volatile")||string_operator_equals(word_102,"_Nonnull")||string_operator_equals(word_102,"_Nullable")||string_operator_equals(word_102,"_Null_unspecified")||string_operator_equals(word_102,"__user"),        _if_conditional207) {
        }
        else {
            info->p=p_100;
            info->sline=sline_101;
        }
        if(word_102 && !__freed_obj__) { word_102 = come_decrement_ref_count(word_102, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        info->p=p_100;
        info->sline=sline_101;
    }
}

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* head_103;
int head_sline_104;
void* right_value114;
char* type_name_105;
_Bool _while_condtional26;
void* right_value115;
char* __dec_obj53;
_Bool constant_106;
_Bool static__107;
_Bool exception__108;
_Bool volatile__109;
_Bool register__110;
_Bool unsigned__111;
_Bool long__112;
_Bool long_long_113;
_Bool short__114;
_Bool restrict__115;
_Bool struct__116;
_Bool union__117;
_Bool enum__118;
_Bool no_heap_119;
_Bool extern__120;
_Bool inline__121;
_Bool come_mem_core__122;
struct sNode* alignas__123;
_Bool anonymous_type_124;
_Bool anonymous_name_125;
_Bool _while_condtional27;
_Bool _if_conditional208;
_Bool _if_conditional209;
char* p_126;
int sline_127;
void* right_value116;
_Bool _if_conditional210;
void* right_value117;
char* __dec_obj54;
void* right_value118;
char* __dec_obj55;
void* right_value119;
char* __dec_obj56;
_Bool _if_conditional211;
char* p_128;
int sline_129;
_Bool _while_condtional28;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool _if_conditional214;
void* right_value120;
void* right_value121;
struct tuple3$3sTypephcharphbool* __result58__;
_Bool _if_conditional215;
char* p_130;
int sline_131;
void* right_value122;
_Bool _if_conditional216;
void* right_value123;
void* right_value124;
struct tuple3$3sTypephcharphbool* __result59__;
_Bool _if_conditional217;
_Bool _if_conditional218;
char* p_132;
int sline_133;
void* right_value125;
_Bool _if_conditional219;
void* right_value126;
char* __dec_obj59;
void* right_value127;
char* __dec_obj60;
void* right_value128;
char* __dec_obj61;
_Bool _if_conditional220;
char* p_134;
int sline_135;
void* right_value129;
_Bool _if_conditional221;
void* right_value130;
void* right_value131;
struct tuple3$3sTypephcharphbool* __result60__;
_Bool _if_conditional222;
_Bool _if_conditional223;
char* p_136;
int sline_137;
void* right_value132;
_Bool _if_conditional224;
void* right_value133;
void* right_value134;
struct tuple3$3sTypephcharphbool* __result61__;
void* right_value135;
char* __dec_obj62;
void* right_value136;
char* __dec_obj63;
_Bool _if_conditional225;
char* p_138;
int sline_139;
void* right_value137;
_Bool _if_conditional226;
void* right_value138;
void* right_value139;
struct tuple3$3sTypephcharphbool* __result62__;
_Bool _if_conditional227;
void* right_value140;
struct sNode* exp_140;
struct sNode* __dec_obj64;
void* right_value141;
char* __dec_obj65;
_Bool _if_conditional228;
void* right_value142;
char* __dec_obj66;
_Bool _if_conditional229;
void* right_value143;
char* __dec_obj67;
_Bool _if_conditional230;
void* right_value144;
char* __dec_obj68;
_Bool _if_conditional231;
void* right_value145;
char* __dec_obj69;
_Bool _if_conditional232;
void* right_value146;
char* __dec_obj70;
_Bool _if_conditional233;
void* right_value147;
char* __dec_obj71;
_Bool _if_conditional234;
void* right_value148;
char* __dec_obj72;
_Bool _if_conditional235;
void* right_value149;
char* __dec_obj73;
_Bool _if_conditional236;
char* p_141;
int sline_142;
_Bool _if_conditional237;
void* right_value150;
char* __dec_obj74;
void* right_value151;
char* __dec_obj75;
_Bool _if_conditional238;
void* right_value152;
char* __dec_obj76;
_Bool _if_conditional239;
_Bool _if_conditional240;
_Bool _if_conditional241;
void* right_value153;
char* __dec_obj77;
_Bool _if_conditional242;
_Bool _if_conditional243;
void* right_value154;
char* __dec_obj78;
_Bool _if_conditional244;
_Bool _if_conditional245;
void* right_value155;
char* __dec_obj79;
_Bool _if_conditional246;
_Bool _if_conditional247;
char* p_143;
int sline_144;
void* right_value156;
char* __dec_obj80;
_Bool _if_conditional248;
_Bool _if_conditional249;
char* p_145;
int sline_146;
void* right_value157;
char* __dec_obj81;
_Bool _if_conditional250;
void* right_value158;
char* __dec_obj82;
void* right_value159;
char* __dec_obj83;
_Bool _if_conditional251;
_Bool _if_conditional252;
char* p_147;
int sline_148;
void* right_value160;
char* __dec_obj84;
_Bool _if_conditional253;
void* right_value161;
char* __dec_obj85;
void* right_value162;
char* __dec_obj86;
_Bool _if_conditional254;
void* right_value163;
char* __dec_obj87;
void* right_value164;
char* __dec_obj88;
_Bool _if_conditional255;
void* right_value165;
char* __dec_obj89;
_Bool _if_conditional256;
void* right_value166;
char* __dec_obj90;
_Bool _if_conditional257;
void* right_value167;
char* __dec_obj91;
_Bool _if_conditional258;
void* right_value168;
char* __dec_obj92;
_Bool _if_conditional259;
_Bool _if_conditional260;
_Bool _if_conditional261;
char* p_149;
int sline_150;
void* right_value169;
char* __dec_obj93;
_Bool _if_conditional262;
_Bool _if_conditional263;
_Bool _if_conditional264;
void* right_value170;
char* __dec_obj94;
int pointer_num_151;
_Bool _while_condtional29;
_Bool heap_152;
_Bool _if_conditional265;
_Bool lambda_flag_153;
char* pX_154;
int slineX_155;
_Bool _if_conditional266;
void* right_value171;
_Bool _if_conditional267;
struct sType* type_156;
char* var_name_157;
_Bool function_pointer_flag_158;
char* p_159;
int sline_160;
_Bool _if_conditional268;
_Bool _if_conditional269;
_Bool _if_conditional270;
void* right_value172;
char* word_161;
_Bool _if_conditional271;
_Bool _if_conditional272;
_Bool var_name_between_brace_162;
char* p_163;
int sline_164;
_Bool _if_conditional273;
_Bool _if_conditional274;
void* right_value173;
char* word_165;
_Bool _if_conditional275;
_Bool _if_conditional276;
_Bool _if_conditional277;
_Bool _if_conditional278;
static int anonymous_num_166=0;
_Bool _if_conditional279;
_Bool _if_conditional280;
void* right_value174;
char* __dec_obj95;
void* right_value175;
struct sNode* node_167;
_Bool _if_conditional281;
void* right_value176;
void* right_value177;
struct tuple3$3sTypephcharphbool* __result63__;
int pointer_num_168;
_Bool _while_condtional30;
void* right_value178;
void* right_value179;
struct sType* __dec_obj96;
_Bool _if_conditional282;
_Bool _if_conditional283;
void* right_value180;
char* __dec_obj97;
void* right_value181;
struct sNode* node_169;
_Bool _if_conditional284;
_Bool _if_conditional285;
void* right_value182;
void* right_value183;
struct tuple3$3sTypephcharphbool* __result64__;
void* right_value184;
void* right_value185;
struct sType* __dec_obj98;
_Bool _if_conditional286;
_Bool _if_conditional287;
void* right_value186;
char* __dec_obj99;
void* right_value187;
struct sNode* node_170;
_Bool _if_conditional288;
void* right_value188;
void* right_value189;
struct tuple3$3sTypephcharphbool* __result65__;
int pointer_num_171;
_Bool _while_condtional31;
void* right_value190;
void* right_value191;
struct sType* __dec_obj100;
void* right_value192;
void* right_value193;
struct tuple3$3sTypephcharphbool* __result66__;
_Bool _if_conditional289;
_Bool _if_conditional290;
_Bool _if_conditional291;
void* right_value194;
char* __dec_obj101;
_Bool _if_conditional292;
static int num_anonymous_var_name_172=0;
void* right_value195;
char* __dec_obj102;
_Bool _if_conditional293;
void* right_value196;
char* __dec_obj103;
static int num_anonymous_var_name_173=0;
void* right_value197;
char* __dec_obj104;
_Bool _if_conditional294;
_Bool _if_conditional295;
_Bool no_comma_174;
void* right_value198;
struct sNode* node_175;
struct sNode* __dec_obj105;
_Bool _if_conditional296;
struct sType* result_type_176;
void* right_value202;
_Bool _if_conditional302;
void* right_value203;
void* right_value204;
struct sType* __dec_obj107;
_Bool _if_conditional308;
int i_185;
_Bool _for_condtionalA4;
void* right_value205;
_Bool _if_conditional311;
void* right_value206;
void* right_value207;
void* right_value208;
struct sType* __dec_obj108;
void* right_value209;
void* right_value210;
struct sType* __dec_obj109;
struct sNode* __dec_obj110;
void* right_value211;
char* __dec_obj111;
void* right_value212;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var2;
struct list$1sTypeph* param_types_189;
struct list$1charph* param_names_190;
struct list$1charph* param_default_parametors_191;
_Bool var_args_192;
void* right_value213;
void* right_value214;
struct sType* __dec_obj112;
void* right_value215;
void* right_value216;
struct tuple1$1sTypeph* __dec_obj114;
struct list$1sTypeph* __dec_obj115;
struct list$1charph* __dec_obj116;
_Bool _if_conditional312;
_Bool _if_conditional313;
struct sType* result_type_193;
void* right_value217;
_Bool _if_conditional314;
void* right_value218;
void* right_value219;
struct sType* __dec_obj117;
_Bool _if_conditional315;
int i_194;
_Bool _for_condtionalA5;
void* right_value220;
_Bool _if_conditional316;
void* right_value221;
void* right_value222;
void* right_value223;
struct sType* __dec_obj118;
void* right_value224;
void* right_value225;
struct sType* __dec_obj119;
struct sNode* __dec_obj120;
_Bool _if_conditional317;
void* right_value226;
char* __dec_obj121;
_Bool _if_conditional318;
void* right_value227;
void* right_value228;
struct tuple3$3sTypephcharphbool* __result85__;
static int num_anonymous_var_name_195=0;
void* right_value229;
char* __dec_obj122;
void* right_value230;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var3;
struct list$1sTypeph* param_types_196;
struct list$1charph* param_names_197;
struct list$1charph* param_default_parametors_198;
_Bool var_args_199;
void* right_value231;
void* right_value232;
struct sType* __dec_obj123;
void* right_value233;
void* right_value234;
struct tuple1$1sTypeph* __dec_obj124;
struct list$1sTypeph* __dec_obj125;
struct list$1charph* __dec_obj126;
_Bool _if_conditional319;
void* right_value235;
struct sNode* exp_200;
_Bool _if_conditional320;
void* right_value236;
void* right_value237;
struct tuple3$3sTypephcharphbool* __result87__;
void* right_value238;
struct CVALUE* come_value_201;
void* right_value239;
struct sType* __dec_obj127;
_Bool _if_conditional323;
_Bool _if_conditional324;
_Bool _if_conditional325;
void* right_value240;
char* __dec_obj128;
_Bool _if_conditional326;
static int num_anonymous_var_name_202=0;
void* right_value241;
char* __dec_obj129;
_Bool _if_conditional327;
void* right_value242;
char* __dec_obj130;
static int num_anonymous_var_name_203=0;
void* right_value243;
char* __dec_obj131;
_Bool _if_conditional328;
_Bool _if_conditional329;
_Bool no_comma_204;
void* right_value244;
struct sNode* node_205;
struct sNode* __dec_obj132;
void* right_value245;
_Bool _if_conditional330;
void* right_value246;
void* right_value247;
struct sType* __dec_obj133;
void* right_value248;
char* __dec_obj134;
struct sNode* __dec_obj135;
_Bool _if_conditional331;
int i_206;
_Bool _for_condtionalA6;
void* right_value249;
_Bool _if_conditional332;
void* right_value250;
void* right_value251;
void* right_value252;
struct sType* __dec_obj136;
struct sNode* __dec_obj137;
_Bool _if_conditional333;
void* right_value256;
_Bool _if_conditional345;
void* right_value257;
void* right_value258;
struct tuple3$3sTypephcharphbool* __result93__;
void* right_value259;
void* right_value260;
struct sType* __dec_obj139;
_Bool _while_condtional36;
void* right_value261;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* generics_type_212;
char* var_name_213;
_Bool err_214;
_Bool _if_conditional346;
void* right_value262;
void* right_value263;
struct tuple3$3sTypephcharphbool* __result94__;
_Bool _if_conditional347;
_Bool _if_conditional348;
void* right_value264;
void* right_value265;
struct tuple3$3sTypephcharphbool* __result95__;
_Bool _if_conditional349;
void* right_value266;
struct sType* __dec_obj140;
_Bool _if_conditional350;
void* right_value267;
char* new_name_215;
struct sNode* __dec_obj141;
_Bool _if_conditional351;
void* right_value268;
struct sClass* klass_216;
_Bool _if_conditional352;
void* right_value281;
void* right_value282;
void* right_value283;
void* right_value284;
struct sType* __dec_obj142;
struct sNode* __dec_obj143;
_Bool _while_condtional45;
_Bool _if_conditional400;
_Bool _if_conditional401;
_Bool _if_conditional402;
_Bool _if_conditional403;
_Bool _if_conditional404;
_Bool _if_conditional405;
_Bool _if_conditional406;
_Bool _while_condtional46;
_Bool _if_conditional407;
_Bool _if_conditional408;
void* right_value285;
void* right_value286;
struct list$1sTypeph* types_261;
void* right_value287;
_Bool _while_condtional47;
void* right_value288;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* type2_262;
char* name_263;
_Bool err_264;
_Bool _if_conditional409;
void* right_value289;
void* right_value290;
struct tuple3$3sTypephcharphbool* __result120__;
void* right_value291;
int num_tuples_265;
void* right_value292;
void* right_value293;
void* right_value294;
struct sType* __dec_obj144;
struct list$1sTypeph* o2_saved_266;
struct sType* it_267;
_Bool _for_condtionalA9;
void* right_value295;
_Bool _if_conditional410;
void* right_value296;
struct sType* __dec_obj145;
_Bool _if_conditional411;
void* right_value297;
char* new_name_268;
_Bool _if_conditional412;
_Bool _if_conditional413;
_Bool _if_conditional414;
void* right_value298;
char* __dec_obj146;
_Bool _if_conditional415;
static int num_anonymous_var_name_269=0;
void* right_value299;
char* __dec_obj147;
_Bool _if_conditional416;
void* right_value300;
char* __dec_obj148;
static int num_anonymous_var_name_270=0;
void* right_value301;
char* __dec_obj149;
_Bool _if_conditional417;
_Bool _if_conditional418;
_Bool no_comma_271;
void* right_value302;
struct sNode* node_272;
struct sNode* __dec_obj150;
_Bool _while_condtional48;
_Bool _if_conditional419;
void* right_value303;
struct sNode* node_273;
void* right_value304;
char* asm_name_274;
char* __dec_obj151;
_Bool _if_conditional420;
void* right_value305;
void* right_value306;
struct sType* type2_275;
void* right_value307;
void* right_value308;
_Bool _if_conditional421;
_Bool _if_conditional422;
void* right_value309;
void* right_value310;
struct tuple3$3sTypephcharphbool* __result121__;
void* right_value311;
void* right_value312;
struct tuple3$3sTypephcharphbool* __result122__;
void* right_value313;
void* right_value314;
struct tuple3$3sTypephcharphbool* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&head_103, 0, sizeof(char*));
memset(&head_sline_104, 0, sizeof(int));
right_value114 = (void*)0;
memset(&type_name_105, 0, sizeof(char*));
right_value115 = (void*)0;
memset(&constant_106, 0, sizeof(_Bool));
memset(&static__107, 0, sizeof(_Bool));
memset(&exception__108, 0, sizeof(_Bool));
memset(&volatile__109, 0, sizeof(_Bool));
memset(&register__110, 0, sizeof(_Bool));
memset(&unsigned__111, 0, sizeof(_Bool));
memset(&long__112, 0, sizeof(_Bool));
memset(&long_long_113, 0, sizeof(_Bool));
memset(&short__114, 0, sizeof(_Bool));
memset(&restrict__115, 0, sizeof(_Bool));
memset(&struct__116, 0, sizeof(_Bool));
memset(&union__117, 0, sizeof(_Bool));
memset(&enum__118, 0, sizeof(_Bool));
memset(&no_heap_119, 0, sizeof(_Bool));
memset(&extern__120, 0, sizeof(_Bool));
memset(&inline__121, 0, sizeof(_Bool));
memset(&come_mem_core__122, 0, sizeof(_Bool));
memset(&alignas__123, 0, sizeof(struct sNode*));
memset(&anonymous_type_124, 0, sizeof(_Bool));
memset(&anonymous_name_125, 0, sizeof(_Bool));
memset(&p_126, 0, sizeof(char*));
memset(&sline_127, 0, sizeof(int));
right_value116 = (void*)0;
right_value117 = (void*)0;
right_value118 = (void*)0;
right_value119 = (void*)0;
memset(&p_128, 0, sizeof(char*));
memset(&sline_129, 0, sizeof(int));
right_value120 = (void*)0;
right_value121 = (void*)0;
memset(&p_130, 0, sizeof(char*));
memset(&sline_131, 0, sizeof(int));
right_value122 = (void*)0;
right_value123 = (void*)0;
right_value124 = (void*)0;
memset(&p_132, 0, sizeof(char*));
memset(&sline_133, 0, sizeof(int));
right_value125 = (void*)0;
right_value126 = (void*)0;
right_value127 = (void*)0;
right_value128 = (void*)0;
memset(&p_134, 0, sizeof(char*));
memset(&sline_135, 0, sizeof(int));
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
memset(&p_136, 0, sizeof(char*));
memset(&sline_137, 0, sizeof(int));
right_value132 = (void*)0;
right_value133 = (void*)0;
right_value134 = (void*)0;
right_value135 = (void*)0;
right_value136 = (void*)0;
memset(&p_138, 0, sizeof(char*));
memset(&sline_139, 0, sizeof(int));
right_value137 = (void*)0;
right_value138 = (void*)0;
right_value139 = (void*)0;
right_value140 = (void*)0;
memset(&exp_140, 0, sizeof(struct sNode*));
right_value141 = (void*)0;
right_value142 = (void*)0;
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
right_value146 = (void*)0;
right_value147 = (void*)0;
right_value148 = (void*)0;
right_value149 = (void*)0;
memset(&p_141, 0, sizeof(char*));
memset(&sline_142, 0, sizeof(int));
right_value150 = (void*)0;
right_value151 = (void*)0;
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
right_value155 = (void*)0;
memset(&p_143, 0, sizeof(char*));
memset(&sline_144, 0, sizeof(int));
right_value156 = (void*)0;
memset(&p_145, 0, sizeof(char*));
memset(&sline_146, 0, sizeof(int));
right_value157 = (void*)0;
right_value158 = (void*)0;
right_value159 = (void*)0;
memset(&p_147, 0, sizeof(char*));
memset(&sline_148, 0, sizeof(int));
right_value160 = (void*)0;
right_value161 = (void*)0;
right_value162 = (void*)0;
right_value163 = (void*)0;
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
right_value167 = (void*)0;
right_value168 = (void*)0;
memset(&p_149, 0, sizeof(char*));
memset(&sline_150, 0, sizeof(int));
right_value169 = (void*)0;
right_value170 = (void*)0;
memset(&pointer_num_151, 0, sizeof(int));
memset(&heap_152, 0, sizeof(_Bool));
memset(&lambda_flag_153, 0, sizeof(_Bool));
memset(&pX_154, 0, sizeof(char*));
memset(&slineX_155, 0, sizeof(int));
right_value171 = (void*)0;
memset(&type_156, 0, sizeof(struct sType*));
memset(&var_name_157, 0, sizeof(char*));
memset(&function_pointer_flag_158, 0, sizeof(_Bool));
memset(&p_159, 0, sizeof(char*));
memset(&sline_160, 0, sizeof(int));
right_value172 = (void*)0;
memset(&word_161, 0, sizeof(char*));
memset(&var_name_between_brace_162, 0, sizeof(_Bool));
memset(&p_163, 0, sizeof(char*));
memset(&sline_164, 0, sizeof(int));
right_value173 = (void*)0;
memset(&word_165, 0, sizeof(char*));
right_value174 = (void*)0;
right_value175 = (void*)0;
memset(&node_167, 0, sizeof(struct sNode*));
right_value176 = (void*)0;
right_value177 = (void*)0;
memset(&pointer_num_168, 0, sizeof(int));
right_value178 = (void*)0;
right_value179 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
memset(&node_169, 0, sizeof(struct sNode*));
right_value182 = (void*)0;
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value185 = (void*)0;
right_value186 = (void*)0;
right_value187 = (void*)0;
memset(&node_170, 0, sizeof(struct sNode*));
right_value188 = (void*)0;
right_value189 = (void*)0;
memset(&pointer_num_171, 0, sizeof(int));
right_value190 = (void*)0;
right_value191 = (void*)0;
right_value192 = (void*)0;
right_value193 = (void*)0;
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value196 = (void*)0;
right_value197 = (void*)0;
memset(&no_comma_174, 0, sizeof(_Bool));
right_value198 = (void*)0;
memset(&node_175, 0, sizeof(struct sNode*));
memset(&result_type_176, 0, sizeof(struct sType*));
right_value202 = (void*)0;
right_value203 = (void*)0;
right_value204 = (void*)0;
memset(&i_185, 0, sizeof(int));
right_value205 = (void*)0;
right_value206 = (void*)0;
right_value207 = (void*)0;
right_value208 = (void*)0;
right_value209 = (void*)0;
right_value210 = (void*)0;
right_value211 = (void*)0;
right_value212 = (void*)0;
memset(&param_types_189, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_190, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_191, 0, sizeof(struct list$1charph*));
memset(&var_args_192, 0, sizeof(_Bool));
memset(&param_types_189, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_190, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_191, 0, sizeof(struct list$1charph*));
memset(&var_args_192, 0, sizeof(_Bool));
right_value213 = (void*)0;
right_value214 = (void*)0;
right_value215 = (void*)0;
right_value216 = (void*)0;
memset(&result_type_193, 0, sizeof(struct sType*));
right_value217 = (void*)0;
right_value218 = (void*)0;
right_value219 = (void*)0;
memset(&i_194, 0, sizeof(int));
right_value220 = (void*)0;
right_value221 = (void*)0;
right_value222 = (void*)0;
right_value223 = (void*)0;
right_value224 = (void*)0;
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
right_value228 = (void*)0;
right_value229 = (void*)0;
right_value230 = (void*)0;
memset(&param_types_196, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_197, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_198, 0, sizeof(struct list$1charph*));
memset(&var_args_199, 0, sizeof(_Bool));
memset(&param_types_196, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_197, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_198, 0, sizeof(struct list$1charph*));
memset(&var_args_199, 0, sizeof(_Bool));
right_value231 = (void*)0;
right_value232 = (void*)0;
right_value233 = (void*)0;
right_value234 = (void*)0;
right_value235 = (void*)0;
memset(&exp_200, 0, sizeof(struct sNode*));
right_value236 = (void*)0;
right_value237 = (void*)0;
right_value238 = (void*)0;
memset(&come_value_201, 0, sizeof(struct CVALUE*));
right_value239 = (void*)0;
right_value240 = (void*)0;
right_value241 = (void*)0;
right_value242 = (void*)0;
right_value243 = (void*)0;
memset(&no_comma_204, 0, sizeof(_Bool));
right_value244 = (void*)0;
memset(&node_205, 0, sizeof(struct sNode*));
right_value245 = (void*)0;
right_value246 = (void*)0;
right_value247 = (void*)0;
right_value248 = (void*)0;
memset(&i_206, 0, sizeof(int));
right_value249 = (void*)0;
right_value250 = (void*)0;
right_value251 = (void*)0;
right_value252 = (void*)0;
right_value256 = (void*)0;
right_value257 = (void*)0;
right_value258 = (void*)0;
right_value259 = (void*)0;
right_value260 = (void*)0;
right_value261 = (void*)0;
memset(&generics_type_212, 0, sizeof(struct sType*));
memset(&var_name_213, 0, sizeof(char*));
memset(&err_214, 0, sizeof(_Bool));
memset(&generics_type_212, 0, sizeof(struct sType*));
memset(&var_name_213, 0, sizeof(char*));
memset(&err_214, 0, sizeof(_Bool));
right_value262 = (void*)0;
right_value263 = (void*)0;
right_value264 = (void*)0;
right_value265 = (void*)0;
right_value266 = (void*)0;
right_value267 = (void*)0;
memset(&new_name_215, 0, sizeof(char*));
right_value268 = (void*)0;
memset(&klass_216, 0, sizeof(struct sClass*));
right_value281 = (void*)0;
right_value282 = (void*)0;
right_value283 = (void*)0;
right_value284 = (void*)0;
right_value285 = (void*)0;
right_value286 = (void*)0;
memset(&types_261, 0, sizeof(struct list$1sTypeph*));
right_value287 = (void*)0;
right_value288 = (void*)0;
memset(&type2_262, 0, sizeof(struct sType*));
memset(&name_263, 0, sizeof(char*));
memset(&err_264, 0, sizeof(_Bool));
memset(&type2_262, 0, sizeof(struct sType*));
memset(&name_263, 0, sizeof(char*));
memset(&err_264, 0, sizeof(_Bool));
right_value289 = (void*)0;
right_value290 = (void*)0;
right_value291 = (void*)0;
memset(&num_tuples_265, 0, sizeof(int));
right_value292 = (void*)0;
right_value293 = (void*)0;
right_value294 = (void*)0;
memset(&o2_saved_266, 0, sizeof(struct list$1sTypeph*));
memset(&it_267, 0, sizeof(struct sType*));
right_value295 = (void*)0;
right_value296 = (void*)0;
right_value297 = (void*)0;
memset(&new_name_268, 0, sizeof(char*));
right_value298 = (void*)0;
right_value299 = (void*)0;
right_value300 = (void*)0;
right_value301 = (void*)0;
memset(&no_comma_271, 0, sizeof(_Bool));
right_value302 = (void*)0;
memset(&node_272, 0, sizeof(struct sNode*));
right_value303 = (void*)0;
memset(&node_273, 0, sizeof(struct sNode*));
right_value304 = (void*)0;
memset(&asm_name_274, 0, sizeof(char*));
right_value305 = (void*)0;
right_value306 = (void*)0;
memset(&type2_275, 0, sizeof(struct sType*));
right_value307 = (void*)0;
right_value308 = (void*)0;
right_value309 = (void*)0;
right_value310 = (void*)0;
right_value311 = (void*)0;
right_value312 = (void*)0;
right_value313 = (void*)0;
right_value314 = (void*)0;
    head_103=info->p;
    head_sline_104=info->sline;
    info->define_struct=(_Bool)0;
    type_name_105=(char*)come_increment_ref_count(((char*)(right_value114=parse_word(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value114);
    if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { right_value114 = come_decrement_ref_count(right_value114, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value114, right_value114 = (void*)0;
    __freed_obj__ = 0;
    while(_while_condtional26=string_operator_equals(type_name_105,"__extension__"),    _while_condtional26) {
        __dec_obj53=type_name_105;
        type_name_105=(char*)come_increment_ref_count(((char*)(right_value115=parse_word(info))));
        if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
        if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value115, right_value115 = (void*)0;
        __freed_obj__ = 0;
    }
    constant_106=(_Bool)0;
    static__107=(_Bool)0;
    exception__108=(_Bool)0;
    volatile__109=(_Bool)0;
    register__110=(_Bool)0;
    unsigned__111=(_Bool)0;
    long__112=(_Bool)0;
    long_long_113=(_Bool)0;
    short__114=(_Bool)0;
    restrict__115=(_Bool)0;
    struct__116=(_Bool)0;
    union__117=(_Bool)0;
    enum__118=(_Bool)0;
    no_heap_119=(_Bool)0;
    extern__120=(_Bool)0;
    inline__121=(_Bool)0;
    come_mem_core__122=(_Bool)0;
    alignas__123=((void*)0);
    anonymous_type_124=(_Bool)0;
    anonymous_name_125=(_Bool)0;
    while(_while_condtional27=(_Bool)1,    _while_condtional27) {
        if(_if_conditional208=string_operator_equals(type_name_105,"struct"),        _if_conditional208) {
            struct__116=(_Bool)1;
            if(_if_conditional209=*info->p==123,            _if_conditional209) {
                p_126=info->p;
                sline_127=info->sline;
                ((char*)(right_value116=skip_block(info)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value116);
                if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { right_value116 = come_decrement_ref_count(right_value116, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value116, right_value116 = (void*)0;
                __freed_obj__ = 0;
                if(_if_conditional210=*info->p==59,                _if_conditional210) {
                    anonymous_name_125=(_Bool)1;
                    anonymous_type_124=(_Bool)1;
                    __dec_obj54=type_name_105;
                    type_name_105=(char*)come_increment_ref_count(((char*)(right_value117=__builtin_string(""))));
                    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
                    if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value117, right_value117 = (void*)0;
                    __freed_obj__ = 0;
                    info->p=p_126;
                    info->sline=sline_127;
                    break;
                }
                else {
                    anonymous_type_124=(_Bool)1;
                    __dec_obj55=type_name_105;
                    type_name_105=(char*)come_increment_ref_count(((char*)(right_value118=__builtin_string(""))));
                    if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
                    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { right_value118 = come_decrement_ref_count(right_value118, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value118, right_value118 = (void*)0;
                    __freed_obj__ = 0;
                    info->p=p_126;
                    info->sline=sline_127;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj56=type_name_105;
            type_name_105=(char*)come_increment_ref_count(((char*)(right_value119=parse_word(info))));
            if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value119);
            if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { right_value119 = come_decrement_ref_count(right_value119, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value119, right_value119 = (void*)0;
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            if(_if_conditional211=*info->p==60,            _if_conditional211) {
                p_128=info->p;
                sline_129=info->sline;
                info->p++;
                skip_spaces_and_lf(info);
                while(_while_condtional28=(_Bool)1,                _while_condtional28) {
                    if(_if_conditional212=*info->p==62,                    _if_conditional212) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(_if_conditional213=*info->p==123,                        _if_conditional213) {
                        }
                        else {
                            info->p=p_128;
                            info->sline=sline_129;
                        }
                        break;
                    }
                    else {
                        if(_if_conditional214=*info->p==0,                        _if_conditional214) {
                            err_msg(info,"invalid struct definition");
                            __result58__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value121=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value120=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 760, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            if(type_name_105 && !__freed_obj__) { type_name_105 = come_decrement_ref_count(type_name_105, (void*)0, (void*)0, 0, 0, 0); }
                            if(alignas__123 && !__freed_obj__) { alignas__123 = come_decrement_ref_count(alignas__123, ((struct sNode*)alignas__123)->finalize, ((struct sNode*)alignas__123)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120);
                            if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value120, right_value120 = (void*)0;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value121);
                            if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value121, right_value121 = (void*)0;
                            __freed_obj__ = 0;
                            return __result58__;
                        }
                        else {
                            info->p++;
                        }
                    }
                }
            }
            if(_if_conditional215=*info->p==123,            _if_conditional215) {
                p_130=info->p;
                sline_131=info->sline;
                ((char*)(right_value122=skip_block(info)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
                if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { right_value122 = come_decrement_ref_count(right_value122, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value122, right_value122 = (void*)0;
                __freed_obj__ = 0;
                if(_if_conditional216=*info->p==59,                _if_conditional216) {
                    info->p=head_103;
                    info->sline=head_sline_104;
                    info->define_struct=(_Bool)1;
                    __result59__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value124=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value123=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 778, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    if(type_name_105 && !__freed_obj__) { type_name_105 = come_decrement_ref_count(type_name_105, (void*)0, (void*)0, 0, 0, 0); }
                    if(alignas__123 && !__freed_obj__) { alignas__123 = come_decrement_ref_count(alignas__123, ((struct sNode*)alignas__123)->finalize, ((struct sNode*)alignas__123)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value123);
                    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value123, right_value123 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value124);
                    if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value124, right_value124 = (void*)0;
                    __freed_obj__ = 0;
                    return __result59__;
                }
                else {
                    anonymous_type_124=(_Bool)1;
                    info->p=p_130;
                    info->sline=sline_131;
                    break;
                }
            }
        }
        else {
            if(_if_conditional217=string_operator_equals(type_name_105,"union"),            _if_conditional217) {
                union__117=(_Bool)1;
                if(_if_conditional218=*info->p==123,                _if_conditional218) {
                    p_132=info->p;
                    sline_133=info->sline;
                    ((char*)(right_value125=skip_block(info)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
                    if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { right_value125 = come_decrement_ref_count(right_value125, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value125, right_value125 = (void*)0;
                    __freed_obj__ = 0;
                    if(_if_conditional219=*info->p==59,                    _if_conditional219) {
                        info->p=head_103;
                        info->sline=head_sline_104;
                        info->define_struct=(_Bool)0;
                        anonymous_type_124=(_Bool)1;
                        __dec_obj59=type_name_105;
                        type_name_105=(char*)come_increment_ref_count(((char*)(right_value126=__builtin_string(""))));
                        if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
                        if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { right_value126 = come_decrement_ref_count(right_value126, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value126, right_value126 = (void*)0;
                        __freed_obj__ = 0;
                        info->p=p_132;
                        info->sline=sline_133;
                        break;
                    }
                    else {
                        anonymous_type_124=(_Bool)1;
                        __dec_obj60=type_name_105;
                        type_name_105=(char*)come_increment_ref_count(((char*)(right_value127=__builtin_string(""))));
                        if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
                        if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value127, right_value127 = (void*)0;
                        __freed_obj__ = 0;
                        info->p=p_132;
                        info->sline=sline_133;
                        break;
                    }
                }
                parse_sharp_v5(info);
                __dec_obj61=type_name_105;
                type_name_105=(char*)come_increment_ref_count(((char*)(right_value128=parse_word(info))));
                if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value128);
                if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { right_value128 = come_decrement_ref_count(right_value128, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value128, right_value128 = (void*)0;
                __freed_obj__ = 0;
                parse_sharp_v5(info);
                if(_if_conditional220=*info->p==123,                _if_conditional220) {
                    p_134=info->p;
                    sline_135=info->sline;
                    ((char*)(right_value129=skip_block(info)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
                    if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value129, right_value129 = (void*)0;
                    __freed_obj__ = 0;
                    if(_if_conditional221=*info->p==59,                    _if_conditional221) {
                        info->p=head_103;
                        info->sline=head_sline_104;
                        info->define_struct=(_Bool)1;
                        __result60__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value131=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value130=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 833, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(type_name_105 && !__freed_obj__) { type_name_105 = come_decrement_ref_count(type_name_105, (void*)0, (void*)0, 0, 0, 0); }
                        if(alignas__123 && !__freed_obj__) { alignas__123 = come_decrement_ref_count(alignas__123, ((struct sNode*)alignas__123)->finalize, ((struct sNode*)alignas__123)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value130);
                        if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value130, right_value130 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value131);
                        if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value131, right_value131 = (void*)0;
                        __freed_obj__ = 0;
                        return __result60__;
                    }
                    else {
                        anonymous_type_124=(_Bool)1;
                        info->p=p_134;
                        info->sline=sline_135;
                        break;
                    }
                }
            }
            else {
                if(_if_conditional222=string_operator_equals(type_name_105,"enum"),                _if_conditional222) {
                    enum__118=(_Bool)1;
                    parse_sharp_v5(info);
                    if(_if_conditional223=*info->p==123,                    _if_conditional223) {
                        p_136=info->p;
                        sline_137=info->sline;
                        ((char*)(right_value132=skip_block(info)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value132);
                        if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { right_value132 = come_decrement_ref_count(right_value132, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value132, right_value132 = (void*)0;
                        __freed_obj__ = 0;
                        if(_if_conditional224=*info->p==59,                        _if_conditional224) {
                            info->p=head_103;
                            info->sline=head_sline_104;
                            info->define_struct=(_Bool)1;
                            __result61__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value134=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value133=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 858, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            if(type_name_105 && !__freed_obj__) { type_name_105 = come_decrement_ref_count(type_name_105, (void*)0, (void*)0, 0, 0, 0); }
                            if(alignas__123 && !__freed_obj__) { alignas__123 = come_decrement_ref_count(alignas__123, ((struct sNode*)alignas__123)->finalize, ((struct sNode*)alignas__123)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133);
                            if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value133, right_value133 = (void*)0;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value134);
                            if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value134, right_value134 = (void*)0;
                            __freed_obj__ = 0;
                            return __result61__;
                        }
                        else {
                            anonymous_type_124=(_Bool)1;
                            __dec_obj62=type_name_105;
                            type_name_105=(char*)come_increment_ref_count(((char*)(right_value135=__builtin_string(""))));
                            if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value135);
                            if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { right_value135 = come_decrement_ref_count(right_value135, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value135, right_value135 = (void*)0;
                            __freed_obj__ = 0;
                            info->p=p_136;
                            info->sline=sline_137;
                            break;
                        }
                    }
                    parse_sharp_v5(info);
                    __dec_obj63=type_name_105;
                    type_name_105=(char*)come_increment_ref_count(((char*)(right_value136=parse_word(info))));
                    if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value136);
                    if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value136, right_value136 = (void*)0;
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    if(_if_conditional225=*info->p==123,                    _if_conditional225) {
                        p_138=info->p;
                        sline_139=info->sline;
                        ((char*)(right_value137=skip_block(info)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value137);
                        if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value137, right_value137 = (void*)0;
                        __freed_obj__ = 0;
                        if(_if_conditional226=*info->p==59,                        _if_conditional226) {
                            info->p=head_103;
                            info->sline=head_sline_104;
                            info->define_struct=(_Bool)1;
                            __result62__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value139=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value138=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 885, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            if(type_name_105 && !__freed_obj__) { type_name_105 = come_decrement_ref_count(type_name_105, (void*)0, (void*)0, 0, 0, 0); }
                            if(alignas__123 && !__freed_obj__) { alignas__123 = come_decrement_ref_count(alignas__123, ((struct sNode*)alignas__123)->finalize, ((struct sNode*)alignas__123)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value138);
                            if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value138, right_value138 = (void*)0;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value139);
                            if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value139, right_value139 = (void*)0;
                            __freed_obj__ = 0;
                            return __result62__;
                        }
                        else {
                            anonymous_type_124=(_Bool)1;
                            info->p=p_138;
                            info->sline=sline_139;
                            break;
                        }
                    }
                }
                else {
                    if(_if_conditional227=string_operator_equals(type_name_105,"_Alignas"),                    _if_conditional227) {
                        expected_next_character(40,info);
                        exp_140=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value140=expression_v13(info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value140);
                        if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { right_value140 = come_decrement_ref_count(right_value140, ((struct sNode*)right_value140)->finalize, ((struct sNode*)right_value140)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value140, right_value140 = (void*)0;
                        __freed_obj__ = 0;
                        __dec_obj64=alignas__123;
                        alignas__123=(struct sNode*)come_increment_ref_count(exp_140);
                        if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0); }
                        expected_next_character(41,info);
                        __dec_obj65=type_name_105;
                        type_name_105=(char*)come_increment_ref_count(((char*)(right_value141=parse_word(info))));
                        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value141);
                        if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value141, right_value141 = (void*)0;
                        __freed_obj__ = 0;
                        if(exp_140 && !__freed_obj__) { exp_140 = come_decrement_ref_count(exp_140, ((struct sNode*)exp_140)->finalize, ((struct sNode*)exp_140)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        if(_if_conditional228=string_operator_equals(type_name_105,"const"),                        _if_conditional228) {
                            constant_106=(_Bool)1;
                            __dec_obj66=type_name_105;
                            type_name_105=(char*)come_increment_ref_count(((char*)(right_value142=parse_word(info))));
                            if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value142);
                            if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value142, right_value142 = (void*)0;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional229=string_operator_equals(type_name_105,"exception"),                            _if_conditional229) {
                                exception__108=(_Bool)1;
                                __dec_obj67=type_name_105;
                                type_name_105=(char*)come_increment_ref_count(((char*)(right_value143=parse_word(info))));
                                if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value143);
                                if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value143, right_value143 = (void*)0;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional230=string_operator_equals(type_name_105,"static"),                                _if_conditional230) {
                                    static__107=(_Bool)1;
                                    __dec_obj68=type_name_105;
                                    type_name_105=(char*)come_increment_ref_count(((char*)(right_value144=parse_word(info))));
                                    if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value144);
                                    if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { right_value144 = come_decrement_ref_count(right_value144, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value144, right_value144 = (void*)0;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional231=string_operator_equals(type_name_105,"come_mem_core"),                                    _if_conditional231) {
                                        come_mem_core__122=(_Bool)1;
                                        __dec_obj69=type_name_105;
                                        type_name_105=(char*)come_increment_ref_count(((char*)(right_value145=parse_word(info))));
                                        if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value145);
                                        if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value145, right_value145 = (void*)0;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional232=string_operator_equals(type_name_105,"extern"),                                        _if_conditional232) {
                                            extern__120=(_Bool)1;
                                            __dec_obj70=type_name_105;
                                            type_name_105=(char*)come_increment_ref_count(((char*)(right_value146=parse_word(info))));
                                            if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value146);
                                            if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value146, right_value146 = (void*)0;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional233=string_operator_equals(type_name_105,"_Noreturn"),                                            _if_conditional233) {
                                                __dec_obj71=type_name_105;
                                                type_name_105=(char*)come_increment_ref_count(((char*)(right_value147=parse_word(info))));
                                                if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value147);
                                                if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value147, right_value147 = (void*)0;
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                if(_if_conditional234=string_operator_equals(type_name_105,"inline")||string_operator_equals(type_name_105,"__inline")||string_operator_equals(type_name_105,"__inline__")||string_operator_equals(type_name_105,"__always_inline"),                                                _if_conditional234) {
                                                    inline__121=(_Bool)1;
                                                    __dec_obj72=type_name_105;
                                                    type_name_105=(char*)come_increment_ref_count(((char*)(right_value148=parse_word(info))));
                                                    if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value148);
                                                    if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value148, right_value148 = (void*)0;
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    if(_if_conditional235=string_operator_equals(type_name_105,"volatile"),                                                    _if_conditional235) {
                                                        volatile__109=(_Bool)1;
                                                        __dec_obj73=type_name_105;
                                                        type_name_105=(char*)come_increment_ref_count(((char*)(right_value149=parse_word(info))));
                                                        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0,0); }
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value149);
                                                        if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value149, right_value149 = (void*)0;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional236=string_operator_equals(type_name_105,"long"),                                                        _if_conditional236) {
                                                            {
                                                                p_141=info->p;
                                                                sline_142=info->sline;
                                                                if(_if_conditional237=!xisalpha(*info->p),                                                                _if_conditional237) {
                                                                    info->p=p_141;
                                                                    info->sline=sline_142;
                                                                    __dec_obj74=type_name_105;
                                                                    type_name_105=(char*)come_increment_ref_count(((char*)(right_value150=__builtin_string("long"))));
                                                                    if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0,0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value150);
                                                                    if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { right_value150 = come_decrement_ref_count(right_value150, (void*)0, (void*)0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value150, right_value150 = (void*)0;
                                                                    __freed_obj__ = 0;
                                                                    break;
                                                                }
                                                                else {
                                                                    __dec_obj75=type_name_105;
                                                                    type_name_105=(char*)come_increment_ref_count(((char*)(right_value151=parse_word(info))));
                                                                    if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0,0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value151);
                                                                    if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value151, right_value151 = (void*)0;
                                                                    __freed_obj__ = 0;
                                                                    if(_if_conditional238=string_operator_equals(type_name_105,"unsigned"),                                                                    _if_conditional238) {
                                                                        __dec_obj76=type_name_105;
                                                                        type_name_105=(char*)come_increment_ref_count(((char*)(right_value152=parse_word(info))));
                                                                        if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0,0); }
                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value152);
                                                                        if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
                                                                        __right_value_freed_obj[0] = right_value152, right_value152 = (void*)0;
                                                                        __freed_obj__ = 0;
                                                                        if(_if_conditional239=string_operator_equals(type_name_105,"int"),                                                                        _if_conditional239) {
                                                                            long__112=(_Bool)1;
                                                                            break;
                                                                        }
                                                                    }
                                                                    else {
                                                                        if(_if_conditional240=string_operator_equals(type_name_105,"long"),                                                                        _if_conditional240) {
                                                                            p_141=info->p;
                                                                            sline_142=info->sline;
                                                                            if(_if_conditional241=xisalpha(*info->p),                                                                            _if_conditional241) {
                                                                                long_long_113=(_Bool)1;
                                                                                __dec_obj77=type_name_105;
                                                                                type_name_105=(char*)come_increment_ref_count(((char*)(right_value153=parse_word(info))));
                                                                                if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value153);
                                                                                if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value153, right_value153 = (void*)0;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            else {
                                                                                long__112=(_Bool)1;
                                                                                break;
                                                                            }
                                                                            if(_if_conditional242=string_operator_equals(type_name_105,"int"),                                                                            _if_conditional242) {
                                                                                long_long_113=(_Bool)1;
                                                                                break;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional243=!is_type_name(type_name_105,info),                                                                                _if_conditional243) {
                                                                                    __dec_obj78=type_name_105;
                                                                                    type_name_105=(char*)come_increment_ref_count(((char*)(right_value154=__builtin_string("long"))));
                                                                                    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0,0); }
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value154);
                                                                                    if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { right_value154 = come_decrement_ref_count(right_value154, (void*)0, (void*)0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[0] = right_value154, right_value154 = (void*)0;
                                                                                    __freed_obj__ = 0;
                                                                                    long_long_113=(_Bool)1;
                                                                                    info->p=p_141;
                                                                                    info->sline=sline_142;
                                                                                    break;
                                                                                }
                                                                            }
                                                                        }
                                                                        else {
                                                                            if(_if_conditional244=is_type_name(type_name_105,info),                                                                            _if_conditional244) {
                                                                                if(_if_conditional245=long__112,                                                                                _if_conditional245) {
                                                                                    long_long_113=(_Bool)1;
                                                                                    long__112=(_Bool)0;
                                                                                }
                                                                                else {
                                                                                    long__112=(_Bool)1;
                                                                                }
                                                                                break;
                                                                            }
                                                                            else {
                                                                                info->p=p_141;
                                                                                info->sline=sline_142;
                                                                                __dec_obj79=type_name_105;
                                                                                type_name_105=(char*)come_increment_ref_count(((char*)(right_value155=__builtin_string("long"))));
                                                                                if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value155);
                                                                                if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value155, right_value155 = (void*)0;
                                                                                __freed_obj__ = 0;
                                                                                break;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        else {
                                                            if(_if_conditional246=string_operator_equals(type_name_105,"unsigned"),                                                            _if_conditional246) {
                                                                unsigned__111=(_Bool)1;
                                                                if(_if_conditional247=xisalpha(*info->p)||*info->p==95,                                                                _if_conditional247) {
                                                                    p_143=info->p;
                                                                    sline_144=info->sline;
                                                                    __dec_obj80=type_name_105;
                                                                    type_name_105=(char*)come_increment_ref_count(((char*)(right_value156=parse_word(info))));
                                                                    if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0,0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value156);
                                                                    if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value156, right_value156 = (void*)0;
                                                                    __freed_obj__ = 0;
                                                                    if(_if_conditional248=string_operator_equals(type_name_105,"short"),                                                                    _if_conditional248) {
                                                                        if(_if_conditional249=xisalpha(*info->p)||*info->p==95,                                                                        _if_conditional249) {
                                                                            p_145=info->p;
                                                                            sline_146=info->sline;
                                                                            __dec_obj81=type_name_105;
                                                                            type_name_105=(char*)come_increment_ref_count(((char*)(right_value157=parse_word(info))));
                                                                            if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0,0); }
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value157);
                                                                            if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0, 0); }
                                                                            __right_value_freed_obj[0] = right_value157, right_value157 = (void*)0;
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional250=is_type_name(type_name_105,info),                                                                            _if_conditional250) {
                                                                                short__114=(_Bool)1;
                                                                            }
                                                                            else {
                                                                                short__114=(_Bool)1;
                                                                                __dec_obj82=type_name_105;
                                                                                type_name_105=(char*)come_increment_ref_count(((char*)(right_value158=__builtin_string("int"))));
                                                                                if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value158);
                                                                                if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { right_value158 = come_decrement_ref_count(right_value158, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value158, right_value158 = (void*)0;
                                                                                __freed_obj__ = 0;
                                                                                info->p=p_145;
                                                                                info->sline=sline_146;
                                                                            }
                                                                        }
                                                                        else {
                                                                            short__114=(_Bool)1;
                                                                            __dec_obj83=type_name_105;
                                                                            type_name_105=(char*)come_increment_ref_count(((char*)(right_value159=__builtin_string("int"))));
                                                                            if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0,0); }
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value159);
                                                                            if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { right_value159 = come_decrement_ref_count(right_value159, (void*)0, (void*)0, 1, 0, 0); }
                                                                            __right_value_freed_obj[0] = right_value159, right_value159 = (void*)0;
                                                                            __freed_obj__ = 0;
                                                                            break;
                                                                        }
                                                                    }
                                                                    else {
                                                                        if(_if_conditional251=string_operator_equals(type_name_105,"long"),                                                                        _if_conditional251) {
                                                                            if(_if_conditional252=xisalpha(*info->p)||*info->p==95,                                                                            _if_conditional252) {
                                                                                p_147=info->p;
                                                                                sline_148=info->sline;
                                                                                __dec_obj84=type_name_105;
                                                                                type_name_105=(char*)come_increment_ref_count(((char*)(right_value160=parse_word(info))));
                                                                                if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value160);
                                                                                if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { right_value160 = come_decrement_ref_count(right_value160, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value160, right_value160 = (void*)0;
                                                                                __freed_obj__ = 0;
                                                                                if(_if_conditional253=is_type_name(type_name_105,info),                                                                                _if_conditional253) {
                                                                                    long__112=(_Bool)1;
                                                                                }
                                                                                else {
                                                                                    long__112=(_Bool)1;
                                                                                    __dec_obj85=type_name_105;
                                                                                    type_name_105=(char*)come_increment_ref_count(((char*)(right_value161=__builtin_string("int"))));
                                                                                    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0,0); }
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value161);
                                                                                    if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { right_value161 = come_decrement_ref_count(right_value161, (void*)0, (void*)0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[0] = right_value161, right_value161 = (void*)0;
                                                                                    __freed_obj__ = 0;
                                                                                    info->p=p_147;
                                                                                    info->sline=sline_148;
                                                                                }
                                                                            }
                                                                            else {
                                                                                long__112=(_Bool)1;
                                                                                __dec_obj86=type_name_105;
                                                                                type_name_105=(char*)come_increment_ref_count(((char*)(right_value162=__builtin_string("int"))));
                                                                                if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value162);
                                                                                if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { right_value162 = come_decrement_ref_count(right_value162, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value162, right_value162 = (void*)0;
                                                                                __freed_obj__ = 0;
                                                                                break;
                                                                            }
                                                                        }
                                                                        else {
                                                                            if(_if_conditional254=!is_type_name(type_name_105,info),                                                                            _if_conditional254) {
                                                                                __dec_obj87=type_name_105;
                                                                                type_name_105=(char*)come_increment_ref_count(((char*)(right_value163=__builtin_string("int"))));
                                                                                if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value163);
                                                                                if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { right_value163 = come_decrement_ref_count(right_value163, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value163, right_value163 = (void*)0;
                                                                                __freed_obj__ = 0;
                                                                                info->p=p_143;
                                                                                info->sline=sline_144;
                                                                                break;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                else {
                                                                    __dec_obj88=type_name_105;
                                                                    type_name_105=(char*)come_increment_ref_count(((char*)(right_value164=__builtin_string("int"))));
                                                                    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0,0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value164);
                                                                    if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { right_value164 = come_decrement_ref_count(right_value164, (void*)0, (void*)0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value164, right_value164 = (void*)0;
                                                                    __freed_obj__ = 0;
                                                                    break;
                                                                }
                                                            }
                                                            else {
                                                                if(_if_conditional255=string_operator_equals(type_name_105,"signed")||string_operator_equals(type_name_105,"__signed__"),                                                                _if_conditional255) {
                                                                    unsigned__111=(_Bool)0;
                                                                    __dec_obj89=type_name_105;
                                                                    type_name_105=(char*)come_increment_ref_count(((char*)(right_value165=parse_word(info))));
                                                                    if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0,0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value165);
                                                                    if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { right_value165 = come_decrement_ref_count(right_value165, (void*)0, (void*)0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value165, right_value165 = (void*)0;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                else {
                                                                    if(_if_conditional256=string_operator_equals(type_name_105,"register"),                                                                    _if_conditional256) {
                                                                        register__110=(_Bool)1;
                                                                        __dec_obj90=type_name_105;
                                                                        type_name_105=(char*)come_increment_ref_count(((char*)(right_value166=parse_word(info))));
                                                                        if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0,0); }
                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value166);
                                                                        if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0, 0); }
                                                                        __right_value_freed_obj[0] = right_value166, right_value166 = (void*)0;
                                                                        __freed_obj__ = 0;
                                                                    }
                                                                    else {
                                                                        if(_if_conditional257=string_operator_equals(type_name_105,"restrict"),                                                                        _if_conditional257) {
                                                                            restrict__115=(_Bool)1;
                                                                            __dec_obj91=type_name_105;
                                                                            type_name_105=(char*)come_increment_ref_count(((char*)(right_value167=parse_word(info))));
                                                                            if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0,0); }
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value167);
                                                                            if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0, 0); }
                                                                            __right_value_freed_obj[0] = right_value167, right_value167 = (void*)0;
                                                                            __freed_obj__ = 0;
                                                                        }
                                                                        else {
                                                                            if(_if_conditional258=string_operator_equals(type_name_105,"__restrict"),                                                                            _if_conditional258) {
                                                                                restrict__115=(_Bool)1;
                                                                                __dec_obj92=type_name_105;
                                                                                type_name_105=(char*)come_increment_ref_count(((char*)(right_value168=parse_word(info))));
                                                                                if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value168);
                                                                                if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value168, right_value168 = (void*)0;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional259=string_operator_equals(type_name_105,"short"),                                                                                _if_conditional259) {
                                                                                    short__114=(_Bool)1;
                                                                                    if(_if_conditional260=*info->p==58,                                                                                    _if_conditional260) {
                                                                                        break;
                                                                                    }
                                                                                    else {
                                                                                        if(_if_conditional261=xisalnum(*info->p),                                                                                        _if_conditional261) {
                                                                                            p_149=info->p;
                                                                                            sline_150=info->sline;
                                                                                            __dec_obj93=type_name_105;
                                                                                            type_name_105=(char*)come_increment_ref_count(((char*)(right_value169=parse_word(info))));
                                                                                            if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0,0); }
                                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value169);
                                                                                            if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { right_value169 = come_decrement_ref_count(right_value169, (void*)0, (void*)0, 1, 0, 0); }
                                                                                            __right_value_freed_obj[0] = right_value169, right_value169 = (void*)0;
                                                                                            __freed_obj__ = 0;
                                                                                            if(_if_conditional262=string_operator_equals(type_name_105,"int"),                                                                                            _if_conditional262) {
                                                                                                break;
                                                                                            }
                                                                                            else {
                                                                                                if(_if_conditional263=string_operator_equals(type_name_105,"short"),                                                                                                _if_conditional263) {
                                                                                                    short__114=(_Bool)0;
                                                                                                    break;
                                                                                                }
                                                                                                else {
                                                                                                    if(_if_conditional264=is_type_name(type_name_105,info),                                                                                                    _if_conditional264) {
                                                                                                        info->p=p_149;
                                                                                                        info->sline=sline_150;
                                                                                                    }
                                                                                                    else {
                                                                                                        __dec_obj94=type_name_105;
                                                                                                        type_name_105=(char*)come_increment_ref_count(((char*)(right_value170=__builtin_string("short"))));
                                                                                                        if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0,0); }
                                                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value170);
                                                                                                        if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { right_value170 = come_decrement_ref_count(right_value170, (void*)0, (void*)0, 1, 0, 0); }
                                                                                                        __right_value_freed_obj[0] = right_value170, right_value170 = (void*)0;
                                                                                                        __freed_obj__ = 0;
                                                                                                        info->p=p_149;
                                                                                                        info->sline=sline_150;
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
    }
    skip_pointer_attribute(info);
    pointer_num_151=0;
    while(_while_condtional29=*info->p==42,    _while_condtional29) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        pointer_num_151++;
    }
    heap_152=(_Bool)0;
    if(_if_conditional265=*info->p==37,    _if_conditional265) {
        info->p++;
        skip_spaces_and_lf(info);
        heap_152=(_Bool)1;
    }
    lambda_flag_153=(_Bool)0;
    {
        pX_154=info->p;
        slineX_155=info->sline;
        if(_if_conditional266=xisalpha(*info->p)||*info->p==95,        _if_conditional266) {
            (void)((char*)(right_value171=parse_word(info)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value171);
            if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { right_value171 = come_decrement_ref_count(right_value171, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value171, right_value171 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional267=*info->p==40&&info->in_typedef,            _if_conditional267) {
                lambda_flag_153=(_Bool)1;
            }
        }
        info->p=pX_154;
        info->sline=slineX_155;
    }
    function_pointer_flag_158=(_Bool)0;
    {
        p_159=info->p;
        sline_160=info->sline;
        if(_if_conditional268=*info->p==40,        _if_conditional268) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(_if_conditional269=*info->p==42||*info->p==94,            _if_conditional269) {
                function_pointer_flag_158=(_Bool)1;
            }
            else {
                if(_if_conditional270=xisalpha(*info->p)||*info->p==95,                _if_conditional270) {
                    word_161=(char*)come_increment_ref_count(((char*)(right_value172=parse_word(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value172);
                    if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { right_value172 = come_decrement_ref_count(right_value172, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value172, right_value172 = (void*)0;
                    __freed_obj__ = 0;
                    if(_if_conditional271=*info->p==41,                    _if_conditional271) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(_if_conditional272=*info->p==40,                        _if_conditional272) {
                            function_pointer_flag_158=(_Bool)1;
                        }
                    }
                    if(word_161 && !__freed_obj__) { word_161 = come_decrement_ref_count(word_161, (void*)0, (void*)0, 0, 0, 0); }
                }
            }
        }
        info->p=p_159;
        info->sline=sline_160;
    }
    var_name_between_brace_162=(_Bool)0;
    {
        p_163=info->p;
        sline_164=info->sline;
        if(_if_conditional273=*info->p==40,        _if_conditional273) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(_if_conditional274=xisalpha(*info->p)||*info->p==95,            _if_conditional274) {
                word_165=(char*)come_increment_ref_count(((char*)(right_value173=parse_word(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value173);
                if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { right_value173 = come_decrement_ref_count(right_value173, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value173, right_value173 = (void*)0;
                __freed_obj__ = 0;
                if(_if_conditional275=is_type_name(word_165,info),                _if_conditional275) {
                }
                else {
                    if(_if_conditional276=*info->p==41,                    _if_conditional276) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(_if_conditional277=*info->p!=40,                        _if_conditional277) {
                            var_name_between_brace_162=(_Bool)1;
                        }
                    }
                }
                if(word_165 && !__freed_obj__) { word_165 = come_decrement_ref_count(word_165, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        info->p=p_163;
        info->sline=sline_164;
    }
    if(_if_conditional278=anonymous_type_124&&*info->p==123,    _if_conditional278) {
        if(_if_conditional279=struct__116,        _if_conditional279) {
            if(_if_conditional280=string_operator_equals(type_name_105,""),            _if_conditional280) {
                __dec_obj95=type_name_105;
                type_name_105=(char*)come_increment_ref_count(((char*)(right_value174=xsprintf("anonymous_typeX%d",++anonymous_num_166))));
                if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value174);
                if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { right_value174 = come_decrement_ref_count(right_value174, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value174, right_value174 = (void*)0;
                __freed_obj__ = 0;
            }
            node_167=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value175=parse_struct((char*)come_increment_ref_count(type_name_105),info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value175);
            if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { right_value175 = come_decrement_ref_count(right_value175, ((struct sNode*)right_value175)->finalize, ((struct sNode*)right_value175)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value175, right_value175 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional281=!node_compile(node_167,info),            _if_conditional281) {
                err_msg(info,"parse_struct is failed");
                __result63__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value177=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value176=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1253, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                if(node_167 && !__freed_obj__) { node_167 = come_decrement_ref_count(node_167, ((struct sNode*)node_167)->finalize, ((struct sNode*)node_167)->_protocol_obj, 0, 0, 0); } 
                if(type_name_105 && !__freed_obj__) { type_name_105 = come_decrement_ref_count(type_name_105, (void*)0, (void*)0, 0, 0, 0); }
                if(alignas__123 && !__freed_obj__) { alignas__123 = come_decrement_ref_count(alignas__123, ((struct sNode*)alignas__123)->finalize, ((struct sNode*)alignas__123)->_protocol_obj, 0, 0, 0); } 
                if(type_156 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_156, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(var_name_157 && !__freed_obj__) { var_name_157 = come_decrement_ref_count(var_name_157, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value176);
                if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value176, right_value176 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value177);
                if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value177, right_value177 = (void*)0;
                __freed_obj__ = 0;
                return __result63__;
            }
            pointer_num_168=0;
            while(_while_condtional30=*info->p==42,            _while_condtional30) {
                info->p++;
                skip_spaces_and_lf(info);
                pointer_num_168++;
            }
            __dec_obj96=type_156;
            type_156=(struct sType*)come_increment_ref_count(((struct sType*)(right_value179=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value178=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1263, "struct sType")))),type_name_105,(_Bool)0,info))));
            if(__dec_obj96) { come_call_finalizer(sType_finalize,__dec_obj96, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value178);
            if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value178, right_value178 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value179);
            if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value179, right_value179 = (void*)0;
            __freed_obj__ = 0;
            type_156->mPointerNum=pointer_num_168;
            if(node_167 && !__freed_obj__) { node_167 = come_decrement_ref_count(node_167, ((struct sNode*)node_167)->finalize, ((struct sNode*)node_167)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional282=enum__118,            _if_conditional282) {
                if(_if_conditional283=string_operator_equals(type_name_105,""),                _if_conditional283) {
                    __dec_obj97=type_name_105;
                    type_name_105=(char*)come_increment_ref_count(((char*)(right_value180=xsprintf("anonymous_typeY%d",++anonymous_num_166))));
                    if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180);
                    if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { right_value180 = come_decrement_ref_count(right_value180, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value180, right_value180 = (void*)0;
                    __freed_obj__ = 0;
                }
                node_169=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value181=parse_enum((char*)come_increment_ref_count(type_name_105),info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value181);
                if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { right_value181 = come_decrement_ref_count(right_value181, ((struct sNode*)right_value181)->finalize, ((struct sNode*)right_value181)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value181, right_value181 = (void*)0;
                __freed_obj__ = 0;
                if(_if_conditional284=!info->no_output_err,                _if_conditional284) {
                    if(_if_conditional285=!node_compile(node_169,info),                    _if_conditional285) {
                        printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                        __result64__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value183=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value182=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1277, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(node_169 && !__freed_obj__) { node_169 = come_decrement_ref_count(node_169, ((struct sNode*)node_169)->finalize, ((struct sNode*)node_169)->_protocol_obj, 0, 0, 0); } 
                        if(type_name_105 && !__freed_obj__) { type_name_105 = come_decrement_ref_count(type_name_105, (void*)0, (void*)0, 0, 0, 0); }
                        if(alignas__123 && !__freed_obj__) { alignas__123 = come_decrement_ref_count(alignas__123, ((struct sNode*)alignas__123)->finalize, ((struct sNode*)alignas__123)->_protocol_obj, 0, 0, 0); } 
                        if(type_156 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_156, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_name_157 && !__freed_obj__) { var_name_157 = come_decrement_ref_count(var_name_157, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value182);
                        if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value182, right_value182 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value183);
                        if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value183, right_value183 = (void*)0;
                        __freed_obj__ = 0;
                        return __result64__;
                    }
                }
                __dec_obj98=type_156;
                type_156=(struct sType*)come_increment_ref_count(((struct sType*)(right_value185=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value184=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1281, "struct sType")))),type_name_105,(_Bool)0,info))));
                if(__dec_obj98) { come_call_finalizer(sType_finalize,__dec_obj98, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value184);
                if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value184, right_value184 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value185);
                if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value185, right_value185 = (void*)0;
                __freed_obj__ = 0;
                if(node_169 && !__freed_obj__) { node_169 = come_decrement_ref_count(node_169, ((struct sNode*)node_169)->finalize, ((struct sNode*)node_169)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional286=union__117,                _if_conditional286) {
                    if(_if_conditional287=string_operator_equals(type_name_105,""),                    _if_conditional287) {
                        __dec_obj99=type_name_105;
                        type_name_105=(char*)come_increment_ref_count(((char*)(right_value186=xsprintf("anonymous_typeZ%d",++anonymous_num_166))));
                        if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value186);
                        if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { right_value186 = come_decrement_ref_count(right_value186, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value186, right_value186 = (void*)0;
                        __freed_obj__ = 0;
                    }
                    node_170=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value187=parse_union((char*)come_increment_ref_count(type_name_105),info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value187);
                    if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { right_value187 = come_decrement_ref_count(right_value187, ((struct sNode*)right_value187)->finalize, ((struct sNode*)right_value187)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value187, right_value187 = (void*)0;
                    __freed_obj__ = 0;
                    if(_if_conditional288=!node_compile(node_170,info),                    _if_conditional288) {
                        printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                        __result65__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value189=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value188=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1293, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(node_170 && !__freed_obj__) { node_170 = come_decrement_ref_count(node_170, ((struct sNode*)node_170)->finalize, ((struct sNode*)node_170)->_protocol_obj, 0, 0, 0); } 
                        if(type_name_105 && !__freed_obj__) { type_name_105 = come_decrement_ref_count(type_name_105, (void*)0, (void*)0, 0, 0, 0); }
                        if(alignas__123 && !__freed_obj__) { alignas__123 = come_decrement_ref_count(alignas__123, ((struct sNode*)alignas__123)->finalize, ((struct sNode*)alignas__123)->_protocol_obj, 0, 0, 0); } 
                        if(type_156 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_156, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_name_157 && !__freed_obj__) { var_name_157 = come_decrement_ref_count(var_name_157, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value188);
                        if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value188, right_value188 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value189);
                        if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value189, right_value189 = (void*)0;
                        __freed_obj__ = 0;
                        return __result65__;
                    }
                    pointer_num_171=0;
                    while(_while_condtional31=*info->p==42,                    _while_condtional31) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        pointer_num_171++;
                    }
                    __dec_obj100=type_156;
                    type_156=(struct sType*)come_increment_ref_count(((struct sType*)(right_value191=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value190=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1304, "struct sType")))),type_name_105,(_Bool)0,info))));
                    if(__dec_obj100) { come_call_finalizer(sType_finalize,__dec_obj100, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value190);
                    if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value190, right_value190 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value191);
                    if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value191, right_value191 = (void*)0;
                    __freed_obj__ = 0;
                    type_156->mPointerNum=pointer_num_171;
                    if(node_170 && !__freed_obj__) { node_170 = come_decrement_ref_count(node_170, ((struct sNode*)node_170)->finalize, ((struct sNode*)node_170)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    err_msg(info,"unexpected { character");
                    __result66__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value193=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value192=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1310, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    if(type_name_105 && !__freed_obj__) { type_name_105 = come_decrement_ref_count(type_name_105, (void*)0, (void*)0, 0, 0, 0); }
                    if(alignas__123 && !__freed_obj__) { alignas__123 = come_decrement_ref_count(alignas__123, ((struct sNode*)alignas__123)->finalize, ((struct sNode*)alignas__123)->_protocol_obj, 0, 0, 0); } 
                    if(type_156 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_156, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(var_name_157 && !__freed_obj__) { var_name_157 = come_decrement_ref_count(var_name_157, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value192);
                    if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value192, right_value192 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value193);
                    if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value193, right_value193 = (void*)0;
                    __freed_obj__ = 0;
                    return __result66__;
                }
            }
        }
        if(_if_conditional289=parse_variable_name,        _if_conditional289) {
            parse_sharp_v5(info);
            if(_if_conditional290=var_name_between_brace_162&&*info->p==40,            _if_conditional290) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(_if_conditional291=*info->p==58,            _if_conditional291) {
                __dec_obj101=var_name_157;
                var_name_157=(char*)come_increment_ref_count(((char*)(right_value194=__builtin_string(""))));
                if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value194);
                if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { right_value194 = come_decrement_ref_count(right_value194, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value194, right_value194 = (void*)0;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional292=anonymous_name_125,                _if_conditional292) {
                    num_anonymous_var_name_172++;
                    __dec_obj102=var_name_157;
                    var_name_157=(char*)come_increment_ref_count(((char*)(right_value195=xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name_172))));
                    if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value195);
                    if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { right_value195 = come_decrement_ref_count(right_value195, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value195, right_value195 = (void*)0;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional293=xisalnum(*info->p)||*info->p==95,                    _if_conditional293) {
                        __dec_obj103=var_name_157;
                        var_name_157=(char*)come_increment_ref_count(((char*)(right_value196=parse_word(info))));
                        if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value196);
                        if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { right_value196 = come_decrement_ref_count(right_value196, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value196, right_value196 = (void*)0;
                        __freed_obj__ = 0;
                    }
                    else {
                        num_anonymous_var_name_173++;
                        __dec_obj104=var_name_157;
                        var_name_157=(char*)come_increment_ref_count(((char*)(right_value197=xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_173))));
                        if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value197);
                        if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { right_value197 = come_decrement_ref_count(right_value197, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value197, right_value197 = (void*)0;
                        __freed_obj__ = 0;
                    }
                }
            }
            if(_if_conditional294=var_name_between_brace_162&&*info->p==41,            _if_conditional294) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(_if_conditional295=*info->p==58,            _if_conditional295) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_174=info->no_comma;
                info->no_comma=(_Bool)1;
                node_175=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value198=expression_v13(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value198);
                if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { right_value198 = come_decrement_ref_count(right_value198, ((struct sNode*)right_value198)->finalize, ((struct sNode*)right_value198)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value198, right_value198 = (void*)0;
                __freed_obj__ = 0;
                info->no_comma=no_comma_174;
                __dec_obj105=type_156->mSizeNum;
                type_156->mSizeNum=(struct sNode*)come_increment_ref_count(node_175);
                if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0,0); }
                if(node_175 && !__freed_obj__) { node_175 = come_decrement_ref_count(node_175, ((struct sNode*)node_175)->finalize, ((struct sNode*)node_175)->_protocol_obj, 0, 0, 0); } 
            }
        }
    }
    else {
        if(_if_conditional296=lambda_flag_153,        _if_conditional296) {
            if(_if_conditional302=((struct sType*)(right_value202=map$2charphsTypephp_operator_load_element(info->types,type_name_105))),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value202),
            (right_value202 && right_value202 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sType_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value202, right_value202 = (void*)0, 
            __freed_obj__ = 0, 
            _if_conditional302) {
                __dec_obj107=result_type_176;
                result_type_176=(struct sType*)come_increment_ref_count(((struct sType*)(right_value204=sType_clone(((struct sType*)(right_value203=map$2charphsTypephp_operator_load_element(info->types,type_name_105)))))));
                if(__dec_obj107) { come_call_finalizer(sType_finalize,__dec_obj107, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value203);
                if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value203, right_value203 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value204);
                if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value204, right_value204 = (void*)0;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional308=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_105)),                _if_conditional308) {
                    for(
                    i_185=0 ,                    0;                    _for_condtionalA4=                    i_185<list$1charph_length(info->generics_type_names) ,                    _for_condtionalA4;                    i_185++ ,                    0                    ){
                        if(_if_conditional311=string_operator_equals(((char*)(right_value205=list$1charphp_operator_load_element(info->generics_type_names,i_185))),type_name_105),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value205),
                        (right_value205 && right_value205 != __result_obj__ && !__freed_obj__) ? right_value205 = come_decrement_ref_count(right_value205, (void*)0, (void*)0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value205, right_value205 = (void*)0, 
                        __freed_obj__ = 0, 
                        _if_conditional311) {
                            __dec_obj108=result_type_176;
                            result_type_176=(struct sType*)come_increment_ref_count(((struct sType*)(right_value208=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value206=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1363, "struct sType")))),((char*)(right_value207=xsprintf("generics_type%d",i_185))),(_Bool)0,info))));
                            if(__dec_obj108) { come_call_finalizer(sType_finalize,__dec_obj108, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value206);
                            if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value206, right_value206 = (void*)0;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value207);
                            if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { right_value207 = come_decrement_ref_count(right_value207, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value207, right_value207 = (void*)0;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value208);
                            if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value208, right_value208 = (void*)0;
                            __freed_obj__ = 0;
                        }
                    }
                }
                else {
                    __dec_obj109=result_type_176;
                    result_type_176=(struct sType*)come_increment_ref_count(((struct sType*)(right_value210=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value209=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1368, "struct sType")))),type_name_105,(_Bool)0,info))));
                    if(__dec_obj109) { come_call_finalizer(sType_finalize,__dec_obj109, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value209);
                    if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value209, right_value209 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value210);
                    if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value210, right_value210 = (void*)0;
                    __freed_obj__ = 0;
                }
            }
            result_type_176->mConstant=result_type_176->mConstant||constant_106;
            __dec_obj110=result_type_176->mAlignas;
            result_type_176->mAlignas=(struct sNode*)come_increment_ref_count(alignas__123);
            if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0,0,0); }
            result_type_176->mComeMemCore=result_type_176->mComeMemCore||come_mem_core__122;
            result_type_176->mRegister=register__110;
            result_type_176->mUnsigned=result_type_176->mUnsigned||unsigned__111;
            result_type_176->mVolatile=volatile__109;
            result_type_176->mStatic=result_type_176->mStatic||static__107;
            result_type_176->mExtern=result_type_176->mExtern||extern__120;
            result_type_176->mInline=result_type_176->mInline||inline__121;
            result_type_176->mRestrict=result_type_176->mRestrict||restrict__115;
            result_type_176->mLongLong=result_type_176->mLongLong||long_long_113;
            result_type_176->mLong=result_type_176->mLong||long__112;
            result_type_176->mShort=result_type_176->mShort||short__114;
            result_type_176->mPointerNum=pointer_num_151;
            result_type_176->mHeap=result_type_176->mHeap||heap_152;
            __dec_obj111=var_name_157;
            var_name_157=(char*)come_increment_ref_count(((char*)(right_value211=parse_word(info))));
            if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value211);
            if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { right_value211 = come_decrement_ref_count(right_value211, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value211, right_value211 = (void*)0;
            __freed_obj__ = 0;
            multiple_assign_var2=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value212=parse_params(info)));
            param_types_189=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var2->v1);
            param_names_190=(struct list$1charph*)come_increment_ref_count(multiple_assign_var2->v2);
            param_default_parametors_191=(struct list$1charph*)come_increment_ref_count(multiple_assign_var2->v3);
            var_args_192=multiple_assign_var2->v4;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value212);
            if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value212, right_value212 = (void*)0;
            __freed_obj__ = 0;
            __dec_obj112=type_156;
            type_156=(struct sType*)come_increment_ref_count(((struct sType*)(right_value214=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value213=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1391, "struct sType")))),"lambda",(_Bool)0,info))));
            if(__dec_obj112) { come_call_finalizer(sType_finalize,__dec_obj112, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value213);
            if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value213, right_value213 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value214);
            if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value214, right_value214 = (void*)0;
            __freed_obj__ = 0;
            __dec_obj114=type_156->mResultType;
            type_156->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value216=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value215=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function4.c", 1393, "struct tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_176)))));
            if(__dec_obj114) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj114, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value215);
            if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value215, right_value215 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value216);
            if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value216, right_value216 = (void*)0;
            __freed_obj__ = 0;
            __dec_obj115=type_156->mParamTypes;
            type_156->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_189);
            if(__dec_obj115) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0); }
            __dec_obj116=type_156->mParamNames;
            type_156->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_190);
            if(__dec_obj116) { come_call_finalizer(list$1charph_finalize,__dec_obj116, (void*)0, (void*)0, 0, 0, 0, 0); }
            type_156->mVarArgs=var_args_192;
            type_156->mExtern=extern__120;
            if(result_type_176 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_176, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(param_types_189 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_189, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(param_names_190 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_190, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(param_default_parametors_191 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_191, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            if(_if_conditional312=function_pointer_flag_158,            _if_conditional312) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                if(_if_conditional313=*info->p==42||*info->p==94,                _if_conditional313) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                skip_pointer_attribute(info);
                if(_if_conditional314=((struct sType*)(right_value217=map$2charphsTypephp_operator_load_element(info->types,type_name_105))),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value217),
                (right_value217 && right_value217 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sType_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value217, right_value217 = (void*)0, 
                __freed_obj__ = 0, 
                _if_conditional314) {
                    __dec_obj117=result_type_193;
                    result_type_193=(struct sType*)come_increment_ref_count(((struct sType*)(right_value219=sType_clone(((struct sType*)(right_value218=map$2charphsTypephp_operator_load_element(info->types,type_name_105)))))));
                    if(__dec_obj117) { come_call_finalizer(sType_finalize,__dec_obj117, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value218);
                    if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value218, right_value218 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value219);
                    if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value219, right_value219 = (void*)0;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional315=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_105)),                    _if_conditional315) {
                        for(
                        i_194=0 ,                        0;                        _for_condtionalA5=                        i_194<list$1charph_length(info->generics_type_names) ,                        _for_condtionalA5;                        i_194++ ,                        0                        ){
                            if(_if_conditional316=string_operator_equals(((char*)(right_value220=list$1charphp_operator_load_element(info->generics_type_names,i_194))),type_name_105),                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value220),
                            (right_value220 && right_value220 != __result_obj__ && !__freed_obj__) ? right_value220 = come_decrement_ref_count(right_value220, (void*)0, (void*)0, 1, 0, 0):0,
                            __right_value_freed_obj[0] = right_value220, right_value220 = (void*)0, 
                            __freed_obj__ = 0, 
                            _if_conditional316) {
                                __dec_obj118=result_type_193;
                                result_type_193=(struct sType*)come_increment_ref_count(((struct sType*)(right_value223=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value221=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1420, "struct sType")))),((char*)(right_value222=xsprintf("generics_type%d",i_194))),(_Bool)0,info))));
                                if(__dec_obj118) { come_call_finalizer(sType_finalize,__dec_obj118, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value221);
                                if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value221, right_value221 = (void*)0;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value222);
                                if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { right_value222 = come_decrement_ref_count(right_value222, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value222, right_value222 = (void*)0;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value223);
                                if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value223, right_value223 = (void*)0;
                                __freed_obj__ = 0;
                            }
                        }
                    }
                    else {
                        __dec_obj119=result_type_193;
                        result_type_193=(struct sType*)come_increment_ref_count(((struct sType*)(right_value225=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value224=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1425, "struct sType")))),type_name_105,(_Bool)0,info))));
                        if(__dec_obj119) { come_call_finalizer(sType_finalize,__dec_obj119, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value224);
                        if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value224, right_value224 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value225);
                        if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value225, right_value225 = (void*)0;
                        __freed_obj__ = 0;
                    }
                }
                result_type_193->mConstant=result_type_193->mConstant||constant_106;
                __dec_obj120=result_type_193->mAlignas;
                result_type_193->mAlignas=(struct sNode*)come_increment_ref_count(alignas__123);
                if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0,0); }
                result_type_193->mComeMemCore=result_type_193->mComeMemCore||come_mem_core__122;
                result_type_193->mRegister=register__110;
                result_type_193->mUnsigned=result_type_193->mUnsigned||unsigned__111;
                result_type_193->mVolatile=volatile__109;
                result_type_193->mStatic=result_type_193->mStatic||static__107;
                result_type_193->mExtern=result_type_193->mExtern||extern__120;
                result_type_193->mInline=result_type_193->mInline||inline__121;
                result_type_193->mRestrict=result_type_193->mRestrict||restrict__115;
                result_type_193->mLongLong=result_type_193->mLongLong||long_long_113;
                result_type_193->mLong=result_type_193->mLong||long__112;
                result_type_193->mShort=result_type_193->mShort||short__114;
                result_type_193->mPointerNum+=pointer_num_151;
                result_type_193->mHeap=result_type_193->mHeap||heap_152;
                if(_if_conditional317=xisalnum(*info->p)||*info->p==95,                _if_conditional317) {
                    __dec_obj121=var_name_157;
                    var_name_157=(char*)come_increment_ref_count(((char*)(right_value226=parse_word(info))));
                    if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value226);
                    if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { right_value226 = come_decrement_ref_count(right_value226, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value226, right_value226 = (void*)0;
                    __freed_obj__ = 0;
                    if(_if_conditional318=*info->p==40,                    _if_conditional318) {
                        __result85__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value228=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value227=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1447, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count(result_type_193),(char*)come_increment_ref_count(var_name_157),(_Bool)0)));
                        if(result_type_193 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_193, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(type_name_105 && !__freed_obj__) { type_name_105 = come_decrement_ref_count(type_name_105, (void*)0, (void*)0, 0, 0, 0); }
                        if(alignas__123 && !__freed_obj__) { alignas__123 = come_decrement_ref_count(alignas__123, ((struct sNode*)alignas__123)->finalize, ((struct sNode*)alignas__123)->_protocol_obj, 0, 0, 0); } 
                        if(type_156 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_156, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_name_157 && !__freed_obj__) { var_name_157 = come_decrement_ref_count(var_name_157, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value227);
                        if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value227, right_value227 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value228);
                        if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value228, right_value228 = (void*)0;
                        __freed_obj__ = 0;
                        return __result85__;
                    }
                }
                else {
                    num_anonymous_var_name_195++;
                    __dec_obj122=var_name_157;
                    var_name_157=(char*)come_increment_ref_count(((char*)(right_value229=xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name_195))));
                    if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value229);
                    if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { right_value229 = come_decrement_ref_count(right_value229, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value229, right_value229 = (void*)0;
                    __freed_obj__ = 0;
                }
                expected_next_character(41,info);
                multiple_assign_var3=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value230=parse_params(info)));
                param_types_196=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var3->v1);
                param_names_197=(struct list$1charph*)come_increment_ref_count(multiple_assign_var3->v2);
                param_default_parametors_198=(struct list$1charph*)come_increment_ref_count(multiple_assign_var3->v3);
                var_args_199=multiple_assign_var3->v4;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value230);
                if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value230, right_value230 = (void*)0;
                __freed_obj__ = 0;
                __dec_obj123=type_156;
                type_156=(struct sType*)come_increment_ref_count(((struct sType*)(right_value232=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value231=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1459, "struct sType")))),"lambda",(_Bool)0,info))));
                if(__dec_obj123) { come_call_finalizer(sType_finalize,__dec_obj123, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value231);
                if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value231, right_value231 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value232);
                if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value232, right_value232 = (void*)0;
                __freed_obj__ = 0;
                __dec_obj124=type_156->mResultType;
                type_156->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value234=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value233=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function4.c", 1461, "struct tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_193)))));
                if(__dec_obj124) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj124, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value233);
                if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value233, right_value233 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value234);
                if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value234, right_value234 = (void*)0;
                __freed_obj__ = 0;
                __dec_obj125=type_156->mParamTypes;
                type_156->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_196);
                if(__dec_obj125) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj125, (void*)0, (void*)0, 0, 0, 0, 0); }
                __dec_obj126=type_156->mParamNames;
                type_156->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_197);
                if(__dec_obj126) { come_call_finalizer(list$1charph_finalize,__dec_obj126, (void*)0, (void*)0, 0, 0, 0, 0); }
                type_156->mVarArgs=var_args_199;
                type_156->mExtern=extern__120;
                if(result_type_193 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_193, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_types_196 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_196, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_names_197 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_197, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_default_parametors_198 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_198, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                if(_if_conditional319=string_operator_equals(type_name_105,"__typeof__")&&*info->p==40,                _if_conditional319) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    exp_200=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value235=expression_v13(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value235);
                    if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { right_value235 = come_decrement_ref_count(right_value235, ((struct sNode*)right_value235)->finalize, ((struct sNode*)right_value235)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value235, right_value235 = (void*)0;
                    __freed_obj__ = 0;
                    expected_next_character(41,info);
                    if(_if_conditional320=!node_compile(exp_200,info),                    _if_conditional320) {
                        err_msg(info,"invalid __typeof__ expression");
                        __result87__ = __result_obj__ = ((struct tuple3$3voidpvoidpbool*)(right_value237=tuple3$3voidpvoidpbool_initialize((struct tuple3$3voidpvoidpbool*)come_increment_ref_count(((struct tuple3$3voidpvoidpbool*)(right_value236=(struct tuple3$3voidpvoidpbool*)come_calloc(1, sizeof(struct tuple3$3voidpvoidpbool)*(1), "05function4.c", 1477, "struct tuple3$3voidpvoidpbool")))),((void*)0),((void*)0),(_Bool)0)));
                        if(exp_200 && !__freed_obj__) { exp_200 = come_decrement_ref_count(exp_200, ((struct sNode*)exp_200)->finalize, ((struct sNode*)exp_200)->_protocol_obj, 0, 0, 0); } 
                        if(type_name_105 && !__freed_obj__) { type_name_105 = come_decrement_ref_count(type_name_105, (void*)0, (void*)0, 0, 0, 0); }
                        if(alignas__123 && !__freed_obj__) { alignas__123 = come_decrement_ref_count(alignas__123, ((struct sNode*)alignas__123)->finalize, ((struct sNode*)alignas__123)->_protocol_obj, 0, 0, 0); } 
                        if(type_156 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_156, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_name_157 && !__freed_obj__) { var_name_157 = come_decrement_ref_count(var_name_157, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value236);
                        if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { right_value236 = come_decrement_ref_count(right_value236, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value236, right_value236 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value237);
                        if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3voidpvoidpboolp_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value237, right_value237 = (void*)0;
                        __freed_obj__ = 0;
                        return __result87__;
                    }
                    come_value_201=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value238=get_value_from_stack(-1,info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value238);
                    if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value238, right_value238 = (void*)0;
                    __freed_obj__ = 0;
                    dec_stack_ptr(1,info);
                    __dec_obj127=type_156;
                    type_156=(struct sType*)come_increment_ref_count(((struct sType*)(right_value239=sType_clone(come_value_201->type))));
                    if(__dec_obj127) { come_call_finalizer(sType_finalize,__dec_obj127, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value239);
                    if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value239, right_value239 = (void*)0;
                    __freed_obj__ = 0;
                    if(_if_conditional323=parse_variable_name,                    _if_conditional323) {
                        parse_sharp_v5(info);
                        if(_if_conditional324=var_name_between_brace_162&&*info->p==40,                        _if_conditional324) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(_if_conditional325=*info->p==58,                        _if_conditional325) {
                            __dec_obj128=var_name_157;
                            var_name_157=(char*)come_increment_ref_count(((char*)(right_value240=__builtin_string(""))));
                            if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value240);
                            if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { right_value240 = come_decrement_ref_count(right_value240, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value240, right_value240 = (void*)0;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional326=anonymous_name_125,                            _if_conditional326) {
                                num_anonymous_var_name_202++;
                                __dec_obj129=var_name_157;
                                var_name_157=(char*)come_increment_ref_count(((char*)(right_value241=xsprintf("anonymous_var_nameXYZL%d",num_anonymous_var_name_202))));
                                if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value241);
                                if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { right_value241 = come_decrement_ref_count(right_value241, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value241, right_value241 = (void*)0;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional327=xisalnum(*info->p)||*info->p==95,                                _if_conditional327) {
                                    __dec_obj130=var_name_157;
                                    var_name_157=(char*)come_increment_ref_count(((char*)(right_value242=parse_word(info))));
                                    if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value242);
                                    if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { right_value242 = come_decrement_ref_count(right_value242, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value242, right_value242 = (void*)0;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    num_anonymous_var_name_203++;
                                    __dec_obj131=var_name_157;
                                    var_name_157=(char*)come_increment_ref_count(((char*)(right_value243=xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_203))));
                                    if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value243);
                                    if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { right_value243 = come_decrement_ref_count(right_value243, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value243, right_value243 = (void*)0;
                                    __freed_obj__ = 0;
                                }
                            }
                        }
                        if(_if_conditional328=var_name_between_brace_162&&*info->p==41,                        _if_conditional328) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(_if_conditional329=*info->p==58,                        _if_conditional329) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_204=info->no_comma;
                            info->no_comma=(_Bool)1;
                            node_205=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value244=expression_v13(info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value244);
                            if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { right_value244 = come_decrement_ref_count(right_value244, ((struct sNode*)right_value244)->finalize, ((struct sNode*)right_value244)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value244, right_value244 = (void*)0;
                            __freed_obj__ = 0;
                            info->no_comma=no_comma_204;
                            __dec_obj132=type_156->mSizeNum;
                            type_156->mSizeNum=(struct sNode*)come_increment_ref_count(node_205);
                            if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0,0); }
                            if(node_205 && !__freed_obj__) { node_205 = come_decrement_ref_count(node_205, ((struct sNode*)node_205)->finalize, ((struct sNode*)node_205)->_protocol_obj, 0, 0, 0); } 
                        }
                    }
                    if(exp_200 && !__freed_obj__) { exp_200 = come_decrement_ref_count(exp_200, ((struct sNode*)exp_200)->finalize, ((struct sNode*)exp_200)->_protocol_obj, 0, 0, 0); } 
                    if(come_value_201 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_201, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                else {
                    if(_if_conditional330=((struct sType*)(right_value245=map$2charphsTypephp_operator_load_element(info->types,type_name_105))),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value245),
                    (right_value245 && right_value245 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sType_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value245, right_value245 = (void*)0, 
                    __freed_obj__ = 0, 
                    _if_conditional330) {
                        __dec_obj133=type_156;
                        type_156=(struct sType*)come_increment_ref_count(((struct sType*)(right_value247=sType_clone(((struct sType*)(right_value246=map$2charphsTypephp_operator_load_element(info->types,type_name_105)))))));
                        if(__dec_obj133) { come_call_finalizer(sType_finalize,__dec_obj133, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value246);
                        if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value246, right_value246 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value247);
                        if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value247, right_value247 = (void*)0;
                        __freed_obj__ = 0;
                        __dec_obj134=type_156->mOriginalTypeName;
                        type_156->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value248=__builtin_string(type_name_105))));
                        if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value248);
                        if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { right_value248 = come_decrement_ref_count(right_value248, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value248, right_value248 = (void*)0;
                        __freed_obj__ = 0;
                        type_156->mOriginalTypeNamePointerNum=pointer_num_151;
                        type_156->mConstant=type_156->mConstant||constant_106;
                        __dec_obj135=type_156->mAlignas;
                        type_156->mAlignas=(struct sNode*)come_increment_ref_count(alignas__123);
                        if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0); }
                        type_156->mComeMemCore=type_156->mComeMemCore||come_mem_core__122;
                        type_156->mRegister=register__110;
                        type_156->mUnsigned=type_156->mUnsigned||unsigned__111;
                        type_156->mVolatile=volatile__109;
                        type_156->mStatic=type_156->mStatic||static__107;
                        type_156->mExtern=type_156->mExtern||extern__120;
                        type_156->mInline=type_156->mInline||inline__121;
                        type_156->mRestrict=type_156->mRestrict||restrict__115;
                        type_156->mLongLong=type_156->mLongLong||long_long_113;
                        type_156->mLong=type_156->mLong||long__112;
                        type_156->mShort=type_156->mShort||short__114;
                        type_156->mPointerNum+=pointer_num_151;
                        type_156->mHeap=type_156->mHeap||heap_152;
                    }
                    else {
                        if(_if_conditional331=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_105)),                        _if_conditional331) {
                            for(
                            i_206=0 ,                            0;                            _for_condtionalA6=                            i_206<list$1charph_length(info->generics_type_names) ,                            _for_condtionalA6;                            i_206++ ,                            0                            ){
                                if(_if_conditional332=string_operator_equals(((char*)(right_value249=list$1charphp_operator_load_element(info->generics_type_names,i_206))),type_name_105),                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value249),
                                (right_value249 && right_value249 != __result_obj__ && !__freed_obj__) ? right_value249 = come_decrement_ref_count(right_value249, (void*)0, (void*)0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value249, right_value249 = (void*)0, 
                                __freed_obj__ = 0, 
                                _if_conditional332) {
                                    __dec_obj136=type_156;
                                    type_156=(struct sType*)come_increment_ref_count(((struct sType*)(right_value252=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value250=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1554, "struct sType")))),((char*)(right_value251=xsprintf("generics_type%d",i_206))),(_Bool)0,info))));
                                    if(__dec_obj136) { come_call_finalizer(sType_finalize,__dec_obj136, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value250);
                                    if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value250, right_value250 = (void*)0;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value251);
                                    if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { right_value251 = come_decrement_ref_count(right_value251, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value251, right_value251 = (void*)0;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value252);
                                    if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[2] = right_value252, right_value252 = (void*)0;
                                    __freed_obj__ = 0;
                                }
                            }
                            type_156->mConstant=type_156->mConstant||constant_106;
                            __dec_obj137=type_156->mAlignas;
                            type_156->mAlignas=(struct sNode*)come_increment_ref_count(alignas__123);
                            if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0,0); }
                            type_156->mComeMemCore=type_156->mComeMemCore||come_mem_core__122;
                            type_156->mRegister=register__110;
                            type_156->mUnsigned=type_156->mUnsigned||unsigned__111;
                            type_156->mVolatile=volatile__109;
                            type_156->mStatic=type_156->mStatic||static__107;
                            type_156->mExtern=type_156->mExtern||extern__120;
                            type_156->mInline=type_156->mInline||inline__121;
                            type_156->mRestrict=type_156->mRestrict||restrict__115;
                            type_156->mLongLong=type_156->mLongLong||long_long_113;
                            type_156->mLong=type_156->mLong||long__112;
                            type_156->mShort=type_156->mShort||short__114;
                            type_156->mPointerNum+=pointer_num_151;
                            type_156->mHeap=type_156->mHeap||heap_152;
                        }
                        else {
                            if(_if_conditional333=*info->p==60,                            _if_conditional333) {
                                info->p++;
                                skip_spaces_and_lf(info);
                                if(_if_conditional345=((struct sClass*)(right_value256=map$2charphsClassphp_operator_load_element(info->generics_classes,type_name_105)))==((void*)0),                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value256),
                                (right_value256 && right_value256 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sClass_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value256, right_value256 = (void*)0, 
                                __freed_obj__ = 0, 
                                _if_conditional345) {
                                    __result93__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value258=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value257=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1580, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                    if(type_name_105 && !__freed_obj__) { type_name_105 = come_decrement_ref_count(type_name_105, (void*)0, (void*)0, 0, 0, 0); }
                                    if(alignas__123 && !__freed_obj__) { alignas__123 = come_decrement_ref_count(alignas__123, ((struct sNode*)alignas__123)->finalize, ((struct sNode*)alignas__123)->_protocol_obj, 0, 0, 0); } 
                                    if(type_156 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_156, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(var_name_157 && !__freed_obj__) { var_name_157 = come_decrement_ref_count(var_name_157, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value257);
                                    if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value257, right_value257 = (void*)0;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value258);
                                    if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value258, right_value258 = (void*)0;
                                    __freed_obj__ = 0;
                                    return __result93__;
                                }
                                __dec_obj139=type_156;
                                type_156=(struct sType*)come_increment_ref_count(((struct sType*)(right_value260=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value259=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1583, "struct sType")))),type_name_105,(_Bool)0,info))));
                                if(__dec_obj139) { come_call_finalizer(sType_finalize,__dec_obj139, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value259);
                                if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value259, right_value259 = (void*)0;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value260);
                                if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value260, right_value260 = (void*)0;
                                __freed_obj__ = 0;
                                while(_while_condtional36=(_Bool)1,                                _while_condtional36) {
                                    multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value261=parse_type(info,(_Bool)0,(_Bool)0)));
                                    generics_type_212=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                                    var_name_213=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                                    err_214=multiple_assign_var4->v3;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value261);
                                    if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value261, right_value261 = (void*)0;
                                    __freed_obj__ = 0;
                                    if(_if_conditional346=!err_214,                                    _if_conditional346) {
                                        __result94__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value263=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value262=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1589, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                        if(generics_type_212 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_212, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(var_name_213 && !__freed_obj__) { var_name_213 = come_decrement_ref_count(var_name_213, (void*)0, (void*)0, 0, 0, 0); }
                                        if(type_name_105 && !__freed_obj__) { type_name_105 = come_decrement_ref_count(type_name_105, (void*)0, (void*)0, 0, 0, 0); }
                                        if(alignas__123 && !__freed_obj__) { alignas__123 = come_decrement_ref_count(alignas__123, ((struct sNode*)alignas__123)->finalize, ((struct sNode*)alignas__123)->_protocol_obj, 0, 0, 0); } 
                                        if(type_156 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_156, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(var_name_157 && !__freed_obj__) { var_name_157 = come_decrement_ref_count(var_name_157, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value262);
                                        if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value262, right_value262 = (void*)0;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value263);
                                        if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[1] = right_value263, right_value263 = (void*)0;
                                        __freed_obj__ = 0;
                                        return __result94__;
                                    }
                                    list$1sTypeph_push_back(type_156->mGenericsTypes,(struct sType*)come_increment_ref_count(generics_type_212));
                                    if(_if_conditional347=*info->p==44,                                    _if_conditional347) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                    }
                                    else {
                                        if(_if_conditional348=*info->p==62,                                        _if_conditional348) {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                            if(generics_type_212 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_212, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(var_name_213 && !__freed_obj__) { var_name_213 = come_decrement_ref_count(var_name_213, (void*)0, (void*)0, 0, 0, 0); }
                                            break;
                                        }
                                        else {
                                            err_msg(info,"invalid generics type\n");
                                            __result95__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value265=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value264=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1606, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                            if(generics_type_212 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_212, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(var_name_213 && !__freed_obj__) { var_name_213 = come_decrement_ref_count(var_name_213, (void*)0, (void*)0, 0, 0, 0); }
                                            if(type_name_105 && !__freed_obj__) { type_name_105 = come_decrement_ref_count(type_name_105, (void*)0, (void*)0, 0, 0, 0); }
                                            if(alignas__123 && !__freed_obj__) { alignas__123 = come_decrement_ref_count(alignas__123, ((struct sNode*)alignas__123)->finalize, ((struct sNode*)alignas__123)->_protocol_obj, 0, 0, 0); } 
                                            if(type_156 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_156, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(var_name_157 && !__freed_obj__) { var_name_157 = come_decrement_ref_count(var_name_157, (void*)0, (void*)0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value264);
                                            if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value264, right_value264 = (void*)0;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value265);
                                            if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[1] = right_value265, right_value265 = (void*)0;
                                            __freed_obj__ = 0;
                                            return __result95__;
                                        }
                                    }
                                    if(generics_type_212 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_212, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(var_name_213 && !__freed_obj__) { var_name_213 = come_decrement_ref_count(var_name_213, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(_if_conditional349=is_contained_generics_class(type_156,info),                                _if_conditional349) {
                                    __dec_obj140=type_156;
                                    type_156=(struct sType*)come_increment_ref_count(((struct sType*)(right_value266=solve_generics(type_156,info->generics_type,info))));
                                    if(__dec_obj140) { come_call_finalizer(sType_finalize,__dec_obj140, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value266);
                                    if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value266, right_value266 = (void*)0;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional350=!output_generics_struct(type_156,type_156,info),                                    _if_conditional350) {
                                        new_name_215=(char*)come_increment_ref_count(((char*)(right_value267=create_generics_name(type_156,info))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value267);
                                        if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { right_value267 = come_decrement_ref_count(right_value267, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value267, right_value267 = (void*)0;
                                        __freed_obj__ = 0;
                                        printf("%s %d: output generics is failed(%s)\n",info->sname,info->sline,new_name_215);
                                        exit(7);
                                        if(new_name_215 && !__freed_obj__) { new_name_215 = come_decrement_ref_count(new_name_215, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                }
                                type_156->mConstant=type_156->mConstant||constant_106;
                                __dec_obj141=type_156->mAlignas;
                                type_156->mAlignas=(struct sNode*)come_increment_ref_count(alignas__123);
                                if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0,0); }
                                type_156->mComeMemCore=type_156->mComeMemCore||come_mem_core__122;
                                type_156->mRegister=register__110;
                                type_156->mUnsigned=type_156->mUnsigned||unsigned__111;
                                type_156->mVolatile=volatile__109;
                                type_156->mStatic=type_156->mStatic||static__107;
                                type_156->mExtern=type_156->mExtern||extern__120;
                                type_156->mInline=type_156->mInline||inline__121;
                                type_156->mRestrict=type_156->mRestrict||restrict__115;
                                type_156->mLongLong=type_156->mLongLong||long_long_113;
                                type_156->mLong=type_156->mLong||long__112;
                                type_156->mShort=type_156->mShort||short__114;
                                type_156->mPointerNum+=pointer_num_151;
                                type_156->mHeap=type_156->mHeap||heap_152;
                            }
                            else {
                                if(_if_conditional351=struct__116,                                _if_conditional351) {
                                    klass_216=((struct sClass*)(right_value268=map$2charphsClassphp_operator_load_element(info->classes,type_name_105)));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value268);
                                    if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value268, right_value268 = (void*)0;
                                    __freed_obj__ = 0;
                                    if(_if_conditional352=klass_216==((void*)0)&&*info->p!=60,                                    _if_conditional352) {
                                        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_105),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value282=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value281=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05function4.c", 1643, "struct sClass")))),type_name_105,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value281);
                                        if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value281, right_value281 = (void*)0;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value282);
                                        if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[1] = right_value282, right_value282 = (void*)0;
                                        __freed_obj__ = 0;
                                    }
                                }
                                __dec_obj142=type_156;
                                type_156=(struct sType*)come_increment_ref_count(((struct sType*)(right_value284=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value283=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1647, "struct sType")))),type_name_105,(_Bool)0,info))));
                                if(__dec_obj142) { come_call_finalizer(sType_finalize,__dec_obj142, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value283);
                                if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value283, right_value283 = (void*)0;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value284);
                                if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value284, right_value284 = (void*)0;
                                __freed_obj__ = 0;
                                type_156->mConstant=type_156->mConstant||constant_106;
                                __dec_obj143=type_156->mAlignas;
                                type_156->mAlignas=(struct sNode*)come_increment_ref_count(alignas__123);
                                if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0,0); }
                                type_156->mComeMemCore=type_156->mComeMemCore||come_mem_core__122;
                                type_156->mRegister=register__110;
                                type_156->mUnsigned=type_156->mUnsigned||unsigned__111;
                                type_156->mVolatile=volatile__109;
                                type_156->mStatic=type_156->mStatic||static__107;
                                type_156->mExtern=type_156->mExtern||extern__120;
                                type_156->mInline=type_156->mInline||inline__121;
                                type_156->mRestrict=type_156->mRestrict||restrict__115;
                                type_156->mLongLong=type_156->mLongLong||long_long_113;
                                type_156->mLong=type_156->mLong||long__112;
                                type_156->mShort=type_156->mShort||short__114;
                                type_156->mPointerNum+=pointer_num_151;
                                type_156->mHeap=type_156->mHeap||heap_152;
                            }
                        }
                    }
                    skip_pointer_attribute(info);
                    while(_while_condtional45=*info->p==42,                    _while_condtional45) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        skip_pointer_attribute(info);
                        type_156->mPointerNum++;
                        if(_if_conditional400=type_156->mNoSolvedGenericsType->v1,                        _if_conditional400) {
                            type_156->mNoSolvedGenericsType->v1->mPointerNum++;
                        }
                    }
                    if(_if_conditional401=*info->p==37,                    _if_conditional401) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_156->mHeap=(_Bool)1;
                        if(_if_conditional402=type_156->mNoSolvedGenericsType->v1,                        _if_conditional402) {
                            type_156->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
                        }
                    }
                    if(_if_conditional403=*info->p==38,                    _if_conditional403) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_156->mNoHeap=(_Bool)1;
                        if(_if_conditional404=type_156->mNoSolvedGenericsType->v1,                        _if_conditional404) {
                            type_156->mNoSolvedGenericsType->v1->mHeap=(_Bool)0;
                        }
                    }
                    if(_if_conditional405=*info->p==63,                    _if_conditional405) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_156->mNullValue=(_Bool)1;
                    }
                    if(_if_conditional406=*info->p==124,                    _if_conditional406) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_156->mNoCallingDestructor=(_Bool)1;
                    }
                    skip_pointer_attribute(info);
                    while(_while_condtional46=*info->p==42,                    _while_condtional46) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        skip_pointer_attribute(info);
                        type_156->mPointerNum++;
                        if(_if_conditional407=type_156->mNoSolvedGenericsType->v1,                        _if_conditional407) {
                            type_156->mNoSolvedGenericsType->v1->mPointerNum++;
                        }
                    }
                    if(_if_conditional408=parse_multiple_type&&*info->p==44,                    _if_conditional408) {
                        types_261=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value286=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value285=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function4.c", 1730, "struct list$1sTypeph"))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value285);
                        if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value285, right_value285 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value286);
                        if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value286, right_value286 = (void*)0;
                        __freed_obj__ = 0;
                        list$1sTypeph_push_back(types_261,(struct sType*)come_increment_ref_count(((struct sType*)(right_value287=sType_clone(type_156)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value287);
                        if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value287, right_value287 = (void*)0;
                        __freed_obj__ = 0;
                        while(_while_condtional47=*info->p==44,                        _while_condtional47) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value288=parse_type(info,(_Bool)0,(_Bool)0)));
                            type2_262=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                            name_263=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                            err_264=multiple_assign_var5->v3;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value288);
                            if(right_value288 && right_value288 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value288, right_value288 = (void*)0;
                            __freed_obj__ = 0;
                            if(_if_conditional409=!err_264,                            _if_conditional409) {
                                __result120__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value290=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value289=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1741, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                if(type2_262 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_262, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(name_263 && !__freed_obj__) { name_263 = come_decrement_ref_count(name_263, (void*)0, (void*)0, 0, 0, 0); }
                                if(types_261 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,types_261, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(type_name_105 && !__freed_obj__) { type_name_105 = come_decrement_ref_count(type_name_105, (void*)0, (void*)0, 0, 0, 0); }
                                if(alignas__123 && !__freed_obj__) { alignas__123 = come_decrement_ref_count(alignas__123, ((struct sNode*)alignas__123)->finalize, ((struct sNode*)alignas__123)->_protocol_obj, 0, 0, 0); } 
                                if(type_156 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_156, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(var_name_157 && !__freed_obj__) { var_name_157 = come_decrement_ref_count(var_name_157, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value289);
                                if(right_value289 && right_value289 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value289, right_value289 = (void*)0;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value290);
                                if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value290, right_value290 = (void*)0;
                                __freed_obj__ = 0;
                                return __result120__;
                            }
                            list$1sTypeph_push_back(types_261,(struct sType*)come_increment_ref_count(((struct sType*)(right_value291=sType_clone(type2_262)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value291);
                            if(right_value291 && right_value291 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value291, right_value291 = (void*)0;
                            __freed_obj__ = 0;
                            if(type2_262 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_262, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(name_263 && !__freed_obj__) { name_263 = come_decrement_ref_count(name_263, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        num_tuples_265=list$1sTypeph_length(types_261);
                        __dec_obj144=type_156;
                        type_156=(struct sType*)come_increment_ref_count(((struct sType*)(right_value294=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value292=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1749, "struct sType")))),((char*)(right_value293=xsprintf("tuple%d",num_tuples_265))),(_Bool)0,info))));
                        if(__dec_obj144) { come_call_finalizer(sType_finalize,__dec_obj144, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value292);
                        if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value292, right_value292 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value293);
                        if(right_value293 && right_value293 != __result_obj__ && !__freed_obj__) { right_value293 = come_decrement_ref_count(right_value293, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value293, right_value293 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value294);
                        if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value294, right_value294 = (void*)0;
                        __freed_obj__ = 0;
                        type_156->mPointerNum++;
                        type_156->mHeap=(_Bool)1;
                        for(
                        o2_saved_266=(struct list$1sTypeph*)come_increment_ref_count((types_261)),it_267=list$1sTypeph_begin((o2_saved_266)) ,                        0;                        _for_condtionalA9=                        !list$1sTypeph_end((o2_saved_266)) ,                        _for_condtionalA9;                        it_267=list$1sTypeph_next((o2_saved_266)) ,                        0                        ){
                            list$1sTypeph_push_back(type_156->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value295=sType_clone(it_267)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value295);
                            if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value295, right_value295 = (void*)0;
                            __freed_obj__ = 0;
                        }
                        if(o2_saved_266 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_266, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(_if_conditional410=is_contained_generics_class(type_156,info),                        _if_conditional410) {
                            __dec_obj145=type_156;
                            type_156=(struct sType*)come_increment_ref_count(((struct sType*)(right_value296=solve_generics(type_156,info->generics_type,info))));
                            if(__dec_obj145) { come_call_finalizer(sType_finalize,__dec_obj145, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value296);
                            if(right_value296 && right_value296 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value296, right_value296 = (void*)0;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional411=!output_generics_struct(type_156,type_156,info),                            _if_conditional411) {
                                new_name_268=(char*)come_increment_ref_count(((char*)(right_value297=create_generics_name(type_156,info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value297);
                                if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { right_value297 = come_decrement_ref_count(right_value297, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value297, right_value297 = (void*)0;
                                __freed_obj__ = 0;
                                printf("output generics is failed(%s)\n",new_name_268);
                                exit(9);
                                if(new_name_268 && !__freed_obj__) { new_name_268 = come_decrement_ref_count(new_name_268, (void*)0, (void*)0, 0, 0, 0); }
                            }
                        }
                        if(types_261 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,types_261, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional412=parse_variable_name,                    _if_conditional412) {
                        parse_sharp_v5(info);
                        if(_if_conditional413=var_name_between_brace_162&&*info->p==40,                        _if_conditional413) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(_if_conditional414=*info->p==58,                        _if_conditional414) {
                            __dec_obj146=var_name_157;
                            var_name_157=(char*)come_increment_ref_count(((char*)(right_value298=__builtin_string(""))));
                            if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value298);
                            if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { right_value298 = come_decrement_ref_count(right_value298, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value298, right_value298 = (void*)0;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional415=anonymous_name_125,                            _if_conditional415) {
                                num_anonymous_var_name_269++;
                                __dec_obj147=var_name_157;
                                var_name_157=(char*)come_increment_ref_count(((char*)(right_value299=xsprintf("anonymous_var_nameXYZLO%d",num_anonymous_var_name_269))));
                                if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value299);
                                if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { right_value299 = come_decrement_ref_count(right_value299, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value299, right_value299 = (void*)0;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional416=xisalnum(*info->p)||*info->p==95,                                _if_conditional416) {
                                    __dec_obj148=var_name_157;
                                    var_name_157=(char*)come_increment_ref_count(((char*)(right_value300=parse_word(info))));
                                    if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value300);
                                    if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { right_value300 = come_decrement_ref_count(right_value300, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value300, right_value300 = (void*)0;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    num_anonymous_var_name_270++;
                                    __dec_obj149=var_name_157;
                                    var_name_157=(char*)come_increment_ref_count(((char*)(right_value301=xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_270))));
                                    if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count(__dec_obj149, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value301);
                                    if(right_value301 && right_value301 != __result_obj__ && !__freed_obj__) { right_value301 = come_decrement_ref_count(right_value301, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value301, right_value301 = (void*)0;
                                    __freed_obj__ = 0;
                                }
                            }
                        }
                        if(_if_conditional417=var_name_between_brace_162&&*info->p==41,                        _if_conditional417) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(_if_conditional418=*info->p==58,                        _if_conditional418) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_271=info->no_comma;
                            info->no_comma=(_Bool)1;
                            node_272=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value302=expression_v13(info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value302);
                            if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { right_value302 = come_decrement_ref_count(right_value302, ((struct sNode*)right_value302)->finalize, ((struct sNode*)right_value302)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value302, right_value302 = (void*)0;
                            __freed_obj__ = 0;
                            info->no_comma=no_comma_271;
                            __dec_obj150=type_156->mSizeNum;
                            type_156->mSizeNum=(struct sNode*)come_increment_ref_count(node_272);
                            if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0,0); }
                            if(node_272 && !__freed_obj__) { node_272 = come_decrement_ref_count(node_272, ((struct sNode*)node_272)->finalize, ((struct sNode*)node_272)->_protocol_obj, 0, 0, 0); } 
                        }
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    while(_while_condtional48=*info->p==91,    _while_condtional48) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        skip_pointer_attribute(info);
        if(_if_conditional419=*info->p==93,        _if_conditional419) {
            info->p++;
            skip_spaces_and_lf(info);
            type_156->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_273=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value303=expression_v13(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value303);
        if(right_value303 && right_value303 != __result_obj__ && !__freed_obj__) { right_value303 = come_decrement_ref_count(right_value303, ((struct sNode*)right_value303)->finalize, ((struct sNode*)right_value303)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[0] = right_value303, right_value303 = (void*)0;
        __freed_obj__ = 0;
        list$1sNodeph_push_back(type_156->mArrayNum,(struct sNode*)come_increment_ref_count(node_273));
        parse_sharp_v5(info);
        expected_next_character(93,info);
        if(node_273 && !__freed_obj__) { node_273 = come_decrement_ref_count(node_273, ((struct sNode*)node_273)->finalize, ((struct sNode*)node_273)->_protocol_obj, 0, 0, 0); } 
    }
    asm_name_274=(char*)come_increment_ref_count(((char*)(right_value304=parse_attribute(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value304);
    if(right_value304 && right_value304 != __result_obj__ && !__freed_obj__) { right_value304 = come_decrement_ref_count(right_value304, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value304, right_value304 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj151=type_156->mAsmName;
    type_156->mAsmName=(char*)come_increment_ref_count(asm_name_274);
    if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0,0,0); }
    parse_sharp_v5(info);
    if(_if_conditional420=exception__108,    _if_conditional420) {
        type2_275=(struct sType*)come_increment_ref_count(((struct sType*)(right_value306=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value305=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1844, "struct sType")))),"optional",(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value305);
        if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value305, right_value305 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value306);
        if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value306, right_value306 = (void*)0;
        __freed_obj__ = 0;
        list$1sTypeph_add(type2_275->mGenericsTypes,(struct sType*)come_increment_ref_count(type_156));
        list$1sTypeph_add(type2_275->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value308=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value307=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1846, "struct sType")))),"bool",(_Bool)0,info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value307);
        if(right_value307 && right_value307 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value307, right_value307 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value308);
        if(right_value308 && right_value308 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value308, right_value308 = (void*)0;
        __freed_obj__ = 0;
        type2_275->mPointerNum++;
        type2_275->mHeap=(_Bool)1;
        type2_275->mException=(_Bool)1;
        if(_if_conditional421=!is_contained_generics_class(type2_275,info),        _if_conditional421) {
            if(_if_conditional422=!output_generics_struct(type2_275,type2_275,info),            _if_conditional422) {
                err_msg(info,"invalid exception definition");
                __result121__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value310=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value309=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1856, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                if(type2_275 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_275, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_name_105 && !__freed_obj__) { type_name_105 = come_decrement_ref_count(type_name_105, (void*)0, (void*)0, 0, 0, 0); }
                if(alignas__123 && !__freed_obj__) { alignas__123 = come_decrement_ref_count(alignas__123, ((struct sNode*)alignas__123)->finalize, ((struct sNode*)alignas__123)->_protocol_obj, 0, 0, 0); } 
                if(type_156 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_156, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(var_name_157 && !__freed_obj__) { var_name_157 = come_decrement_ref_count(var_name_157, (void*)0, (void*)0, 0, 0, 0); }
                if(asm_name_274 && !__freed_obj__) { asm_name_274 = come_decrement_ref_count(asm_name_274, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value309);
                if(right_value309 && right_value309 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value309, right_value309 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value310);
                if(right_value310 && right_value310 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value310, right_value310 = (void*)0;
                __freed_obj__ = 0;
                return __result121__;
            }
        }
        __result122__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value312=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value311=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1860, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count(type2_275),(char*)come_increment_ref_count(var_name_157),(_Bool)1)));
        if(type2_275 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_275, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type_name_105 && !__freed_obj__) { type_name_105 = come_decrement_ref_count(type_name_105, (void*)0, (void*)0, 0, 0, 0); }
        if(alignas__123 && !__freed_obj__) { alignas__123 = come_decrement_ref_count(alignas__123, ((struct sNode*)alignas__123)->finalize, ((struct sNode*)alignas__123)->_protocol_obj, 0, 0, 0); } 
        if(type_156 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_156, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(var_name_157 && !__freed_obj__) { var_name_157 = come_decrement_ref_count(var_name_157, (void*)0, (void*)0, 0, 0, 0); }
        if(asm_name_274 && !__freed_obj__) { asm_name_274 = come_decrement_ref_count(asm_name_274, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value311);
        if(right_value311 && right_value311 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value311, right_value311 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value312);
        if(right_value312 && right_value312 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value312, right_value312 = (void*)0;
        __freed_obj__ = 0;
        return __result122__;
        if(type2_275 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_275, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result123__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value314=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value313=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1863, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count(type_156),(char*)come_increment_ref_count(var_name_157),(_Bool)1)));
    if(type_name_105 && !__freed_obj__) { type_name_105 = come_decrement_ref_count(type_name_105, (void*)0, (void*)0, 0, 0, 0); }
    if(alignas__123 && !__freed_obj__) { alignas__123 = come_decrement_ref_count(alignas__123, ((struct sNode*)alignas__123)->finalize, ((struct sNode*)alignas__123)->_protocol_obj, 0, 0, 0); } 
    if(type_156 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_156, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_157 && !__freed_obj__) { var_name_157 = come_decrement_ref_count(var_name_157, (void*)0, (void*)0, 0, 0, 0); }
    if(asm_name_274 && !__freed_obj__) { asm_name_274 = come_decrement_ref_count(asm_name_274, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value313);
    if(right_value313 && right_value313 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value313, right_value313 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value314);
    if(right_value314 && right_value314 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value314, right_value314 = (void*)0;
    __freed_obj__ = 0;
    return __result123__;
    if(type_name_105 && !__freed_obj__) { type_name_105 = come_decrement_ref_count(type_name_105, (void*)0, (void*)0, 0, 0, 0); }
    if(alignas__123 && !__freed_obj__) { alignas__123 = come_decrement_ref_count(alignas__123, ((struct sNode*)alignas__123)->finalize, ((struct sNode*)alignas__123)->_protocol_obj, 0, 0, 0); } 
    if(type_156 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_156, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_157 && !__freed_obj__) { var_name_157 = come_decrement_ref_count(var_name_157, (void*)0, (void*)0, 0, 0, 0); }
    if(asm_name_274 && !__freed_obj__) { asm_name_274 = come_decrement_ref_count(asm_name_274, (void*)0, (void*)0, 0, 0, 0); }
}

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* __dec_obj57;
char* __dec_obj58;
struct tuple3$3sTypephcharphbool* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                __dec_obj57=self->v1;
                                self->v1=(struct sType*)come_increment_ref_count(v1);
                                if(__dec_obj57) { come_call_finalizer(sType_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __dec_obj58=self->v2;
                                self->v2=(char*)come_increment_ref_count(v2);
                                if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0,0); }
                                self->v3=v3;
                                __result57__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
                                return __result57__;
                                if(self && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* default_value_177;
unsigned int hash_178;
unsigned int it_179;
_Bool _while_condtional32;
_Bool _if_conditional297;
void* right_value199;
_Bool _if_conditional298;
struct sType* __result67__;
_Bool _if_conditional299;
_Bool _if_conditional300;
struct sType* __result68__;
struct sType* __result69__;
void* right_value200;
void* right_value201;
struct sType* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_177, 0, sizeof(struct sType*));
memset(&hash_178, 0, sizeof(unsigned int));
memset(&it_179, 0, sizeof(unsigned int));
right_value199 = (void*)0;
right_value200 = (void*)0;
right_value201 = (void*)0;
                memset(&default_value_177,0,sizeof(struct sType*));
                hash_178=string_get_hash_key(((char*)key))%self->size;
                it_179=hash_178;
                while(_while_condtional32=(_Bool)1,                _while_condtional32) {
                    if(_if_conditional297=self->item_existance[it_179],                    _if_conditional297) {
                        if(_if_conditional298=optional$2boolbool_value(((struct optional$2boolbool*)(right_value199=string_equals(self->keys[it_179],key)))),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value199),
                        (right_value199 && right_value199 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value199, right_value199 = (void*)0, 
                        __freed_obj__ = 0, 
                        _if_conditional298) {
                            __result67__ = __result_obj__ = self->items[it_179];
                            if(default_value_177 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_177, (void*)0, (void*)0, 0, 0, 0, 0); }
                            return __result67__;
                        }
                        it_179++;
                        if(_if_conditional299=it_179>=self->size,                        _if_conditional299) {
                            it_179=0;
                        }
                        else {
                            if(_if_conditional300=it_179==hash_178,                            _if_conditional300) {
                                __result68__ = __result_obj__ = default_value_177;
                                if(default_value_177 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_177, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result68__;
                            }
                        }
                    }
                    else {
                        __result69__ = __result_obj__ = default_value_177;
                        if(default_value_177 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_177, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result69__;
                    }
                }
                __result71__ = __result_obj__ = ((struct optional$2sTypephbool*)(right_value201=optional$2sTypephbool_initialize(((struct optional$2sTypephbool*)(right_value200=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 1630, "struct optional$2sTypephbool"))),(struct sType*)come_increment_ref_count(default_value_177),(_Bool)0)));
                if(default_value_177 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_177, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value200);
                if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { right_value200 = come_decrement_ref_count(right_value200, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value200, right_value200 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value201);
                if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value201, right_value201 = (void*)0;
                __freed_obj__ = 0;
                return __result71__;
                if(default_value_177 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_177, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* __dec_obj106;
struct optional$2sTypephbool* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __dec_obj106=self->v1;
                    self->v1=(struct sType*)come_increment_ref_count(v1);
                    if(__dec_obj106) { come_call_finalizer(sType_finalize,__dec_obj106, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->v2=v2;
                    __result70__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result70__;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional301;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional301=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional301) {
                            if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static _Bool list$1charph_contained(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* it_182;
_Bool _for_condtionalA3;
_Bool _if_conditional307;
_Bool __result79__;
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_182, 0, sizeof(char*));
                    for(
                    it_182=list$1charph_begin(self) ,                    0;                    _for_condtionalA3=                    !list$1charph_end(self) ,                    _for_condtionalA3;                    it_182=list$1charph_next(self) ,                    0                    ){
                        if(_if_conditional307=string_operator_equals(it_182,item),                        _if_conditional307) {
                            __result79__ = (_Bool)1;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                            return __result79__;
                        }
                    }
                    __result80__ = (_Bool)0;
                    if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                    return __result80__;
                    if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional303;
char* result_180;
char* __result72__;
_Bool _if_conditional304;
char* __result73__;
char* result_181;
char* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_180, 0, sizeof(char*));
memset(&result_181, 0, sizeof(char*));
                        if(_if_conditional303=self==((void*)0),                        _if_conditional303) {
                            memset(&result_180,0,sizeof(char*));
                            __result72__ = __result_obj__ = result_180;
                            return __result72__;
                        }
                        self->it=self->head;
                        if(_if_conditional304=self->it,                        _if_conditional304) {
                            __result73__ = __result_obj__ = self->it->item;
                            return __result73__;
                        }
                        memset(&result_181,0,sizeof(char*));
                        __result74__ = __result_obj__ = result_181;
                        return __result74__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result75__ = self==((void*)0)||self->it==((void*)0);
                        return __result75__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional305;
char* result_183;
char* __result76__;
_Bool _if_conditional306;
char* __result77__;
char* result_184;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_183, 0, sizeof(char*));
memset(&result_184, 0, sizeof(char*));
                        if(_if_conditional305=self==((void*)0)||self->it==((void*)0),                        _if_conditional305) {
                            memset(&result_183,0,sizeof(char*));
                            __result76__ = __result_obj__ = result_183;
                            return __result76__;
                        }
                        self->it=self->it->next;
                        if(_if_conditional306=self->it,                        _if_conditional306) {
                            __result77__ = __result_obj__ = self->it->item;
                            return __result77__;
                        }
                        memset(&result_184,0,sizeof(char*));
                        __result78__ = __result_obj__ = result_184;
                        return __result78__;
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result81__ = self->len;
                        return __result81__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional309;
struct list_item$1charph* it_186;
int i_187;
_Bool _while_condtional33;
_Bool _if_conditional310;
char* __result82__;
char* default_value_188;
char* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_186, 0, sizeof(struct list_item$1charph*));
memset(&i_187, 0, sizeof(int));
memset(&default_value_188, 0, sizeof(char*));
                            if(_if_conditional309=position<0,                            _if_conditional309) {
                                position+=self->len;
                            }
                            it_186=self->head;
                            i_187=0;
                            while(_while_condtional33=it_186!=((void*)0),                            _while_condtional33) {
                                if(_if_conditional310=position==i_187,                                _if_conditional310) {
                                    __result82__ = __result_obj__ = it_186->item;
                                    return __result82__;
                                }
                                it_186=it_186->next;
                                i_187++;
                            }
                            memset(&default_value_188,0,sizeof(char*));
                            __result83__ = __result_obj__ = default_value_188;
                            if(default_value_188 && !__freed_obj__) { default_value_188 = come_decrement_ref_count(default_value_188, (void*)0, (void*)0, 0, 1, 0); }
                            return __result83__;
                            if(default_value_188 && !__freed_obj__) { default_value_188 = come_decrement_ref_count(default_value_188, (void*)0, (void*)0, 0, 0, 0); }
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* __dec_obj113;
struct tuple1$1sTypeph* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __dec_obj113=self->v1;
                self->v1=(struct sType*)come_increment_ref_count(v1);
                if(__dec_obj113) { come_call_finalizer(sType_finalize,__dec_obj113, (void*)0, (void*)0, 0, 0, 0, 0); }
                __result84__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result84__;
                if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct tuple3$3voidpvoidpbool* tuple3$3voidpvoidpbool_initialize(struct tuple3$3voidpvoidpbool* self, void* v1, void* v2, _Bool v3){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct tuple3$3voidpvoidpbool* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            self->v1=v1;
                            self->v2=v2;
                            self->v3=v3;
                            __result86__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(tuple3$3voidpvoidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result86__;
                            if(self && !__freed_obj__) { come_call_finalizer(tuple3$3voidpvoidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple3$3voidpvoidpboolp_finalize(struct tuple3$3voidpvoidpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional321;
_Bool _if_conditional322;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional321=self!=((void*)0)&&self->c_value!=((void*)0),                        _if_conditional321) {
                            if(self->c_value && !__freed_obj__) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        if(_if_conditional322=self!=((void*)0)&&self->type!=((void*)0),                        _if_conditional322) {
                            if(self->type && !__freed_obj__) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* default_value_207;
unsigned int hash_208;
unsigned int it_209;
_Bool _while_condtional34;
_Bool _if_conditional334;
void* right_value253;
_Bool _if_conditional335;
struct sClass* __result88__;
_Bool _if_conditional342;
_Bool _if_conditional343;
struct sClass* __result89__;
struct sClass* __result90__;
void* right_value254;
void* right_value255;
struct sClass* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_207, 0, sizeof(struct sClass*));
memset(&hash_208, 0, sizeof(unsigned int));
memset(&it_209, 0, sizeof(unsigned int));
right_value253 = (void*)0;
right_value254 = (void*)0;
right_value255 = (void*)0;
                                    memset(&default_value_207,0,sizeof(struct sClass*));
                                    hash_208=string_get_hash_key(((char*)key))%self->size;
                                    it_209=hash_208;
                                    while(_while_condtional34=(_Bool)1,                                    _while_condtional34) {
                                        if(_if_conditional334=self->item_existance[it_209],                                        _if_conditional334) {
                                            if(_if_conditional335=optional$2boolbool_value(((struct optional$2boolbool*)(right_value253=string_equals(self->keys[it_209],key)))),                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value253),
                                            (right_value253 && right_value253 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                            __right_value_freed_obj[0] = right_value253, right_value253 = (void*)0, 
                                            __freed_obj__ = 0, 
                                            _if_conditional335) {
                                                __result88__ = __result_obj__ = self->items[it_209];
                                                if(default_value_207 && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value_207, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                return __result88__;
                                            }
                                            it_209++;
                                            if(_if_conditional342=it_209>=self->size,                                            _if_conditional342) {
                                                it_209=0;
                                            }
                                            else {
                                                if(_if_conditional343=it_209==hash_208,                                                _if_conditional343) {
                                                    __result89__ = __result_obj__ = default_value_207;
                                                    if(default_value_207 && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value_207, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                    return __result89__;
                                                }
                                            }
                                        }
                                        else {
                                            __result90__ = __result_obj__ = default_value_207;
                                            if(default_value_207 && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value_207, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            return __result90__;
                                        }
                                    }
                                    __result92__ = __result_obj__ = ((struct optional$2sClassphbool*)(right_value255=optional$2sClassphbool_initialize(((struct optional$2sClassphbool*)(right_value254=(struct optional$2sClassphbool*)come_calloc(1, sizeof(struct optional$2sClassphbool)*(1), "./comelang2.h", 1630, "struct optional$2sClassphbool"))),(struct sClass*)come_increment_ref_count(default_value_207),(_Bool)0)));
                                    if(default_value_207 && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value_207, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value254);
                                    if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { right_value254 = come_decrement_ref_count(right_value254, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value254, right_value254 = (void*)0;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value255);
                                    if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClassphboolp_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value255, right_value255 = (void*)0;
                                    __freed_obj__ = 0;
                                    return __result92__;
                                    if(default_value_207 && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value_207, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional336;
_Bool _if_conditional337;
_Bool _if_conditional341;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                    if(_if_conditional336=self!=((void*)0)&&self->mName!=((void*)0),                                                    _if_conditional336) {
                                                        if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                                                    }
                                                    if(_if_conditional337=self!=((void*)0)&&self->mFields!=((void*)0),                                                    _if_conditional337) {
                                                        if(self->mFields && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    }
                                                    if(_if_conditional341=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                                    _if_conditional341) {
                                                        if(self->mDeclareSName && !__freed_obj__) { self->mDeclareSName = come_decrement_ref_count(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
                                                    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphsTypephph* it_210;
_Bool _while_condtional35;
struct list_item$1tuple2$2charphsTypephph* prev_it_211;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_210, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_211, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                                            it_210=self->head;
                                                            while(_while_condtional35=it_210!=((void*)0),                                                            _while_condtional35) {
                                                                prev_it_211=it_210;
                                                                it_210=it_210->next;
                                                                if(prev_it_211 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_211, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional338;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                                    if(_if_conditional338=self!=((void*)0)&&self->item!=((void*)0),                                                                    _if_conditional338) {
                                                                        if(self->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional339;
_Bool _if_conditional340;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                                            if(_if_conditional339=self!=((void*)0)&&self->v1!=((void*)0),                                                                            _if_conditional339) {
                                                                                if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                                                                            }
                                                                            if(_if_conditional340=self!=((void*)0)&&self->v2!=((void*)0),                                                                            _if_conditional340) {
                                                                                if(self->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                            }
}

static struct optional$2sClassphbool* optional$2sClassphbool_initialize(struct optional$2sClassphbool* self, struct sClass* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* __dec_obj138;
struct optional$2sClassphbool* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        __dec_obj138=self->v1;
                                        self->v1=(struct sClass*)come_increment_ref_count(v1);
                                        if(__dec_obj138) { come_call_finalizer(sClass_finalize,__dec_obj138, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        self->v2=v2;
                                        __result91__ = __result_obj__ = self;
                                        if(self && !__freed_obj__) { come_call_finalizer(optional$2sClassphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        if(v1 && !__freed_obj__) { come_call_finalizer(sClass_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        return __result91__;
                                        if(self && !__freed_obj__) { come_call_finalizer(optional$2sClassphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        if(v1 && !__freed_obj__) { come_call_finalizer(sClass_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sClassphboolp_finalize(struct optional$2sClassphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional344;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                            if(_if_conditional344=self!=((void*)0)&&self->v1!=((void*)0),                                            _if_conditional344) {
                                                if(self->v1 && !__freed_obj__) { come_call_finalizer(sClass_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional353;
unsigned int hash_234;
unsigned int it_235;
_Bool _while_condtional39;
_Bool _if_conditional365;
void* right_value275;
_Bool _if_conditional366;
_Bool _if_conditional367;
_Bool _if_conditional387;
_Bool _if_conditional388;
_Bool _if_conditional389;
_Bool _if_conditional390;
_Bool _if_conditional391;
_Bool same_key_exist_252;
char* it2_255;
_Bool _for_condtionalA8;
void* right_value277;
_Bool _if_conditional396;
_Bool _if_conditional397;
struct map$2charphsClassph* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_234, 0, sizeof(unsigned int));
memset(&it_235, 0, sizeof(unsigned int));
right_value275 = (void*)0;
memset(&same_key_exist_252, 0, sizeof(_Bool));
memset(&it2_255, 0, sizeof(char*));
right_value277 = (void*)0;
                                            if(_if_conditional353=self->len*10>=self->size,                                            _if_conditional353) {
                                                map$2charphsClassph_rehash(self);
                                            }
                                            hash_234=string_get_hash_key(key)%self->size;
                                            it_235=hash_234;
                                            while(_while_condtional39=(_Bool)1,                                            _while_condtional39) {
                                                if(_if_conditional365=self->item_existance[it_235],                                                _if_conditional365) {
                                                    if(_if_conditional366=optional$2boolbool_value(((struct optional$2boolbool*)(right_value275=string_equals(self->keys[it_235],key)))),                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value275),
                                                    (right_value275 && right_value275 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                    __right_value_freed_obj[0] = right_value275, right_value275 = (void*)0, 
                                                    __freed_obj__ = 0, 
                                                    _if_conditional366) {
                                                        if(_if_conditional367=1,                                                        _if_conditional367) {
                                                            list$1charp_remove(self->key_list,self->keys[it_235]);
                                                            if(self->keys[it_235] && !__freed_obj__) { self->keys[it_235] = come_decrement_ref_count(self->keys[it_235], (void*)0, (void*)0, 0, 0, 0); }
                                                            self->keys[it_235]=(char*)come_increment_ref_count(key);
                                                        }
                                                        else {
                                                            list$1charp_remove(self->key_list,self->keys[it_235]);
                                                            self->keys[it_235]=key;
                                                        }
                                                        if(_if_conditional387=1,                                                        _if_conditional387) {
                                                            if(self->items[it_235] && !__freed_obj__) { come_call_finalizer(sClass_finalize,self->items[it_235], (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            self->items[it_235]=(struct sClass*)come_increment_ref_count(item);
                                                        }
                                                        else {
                                                            self->items[it_235]=item;
                                                        }
                                                        break;
                                                    }
                                                    it_235++;
                                                    if(_if_conditional388=it_235>=self->size,                                                    _if_conditional388) {
                                                        it_235=0;
                                                    }
                                                    else {
                                                        if(_if_conditional389=it_235==hash_234,                                                        _if_conditional389) {
                                                            printf("unexpected error in map.insert\n");
                                                            stackframe();
                                                            exit(2);
                                                        }
                                                    }
                                                }
                                                else {
                                                    self->item_existance[it_235]=(_Bool)1;
                                                    if(_if_conditional390=1,                                                    _if_conditional390) {
                                                        self->keys[it_235]=(char*)come_increment_ref_count(key);
                                                    }
                                                    else {
                                                        self->keys[it_235]=key;
                                                    }
                                                    if(_if_conditional391=1,                                                    _if_conditional391) {
                                                        self->items[it_235]=(struct sClass*)come_increment_ref_count(item);
                                                    }
                                                    else {
                                                        self->items[it_235]=item;
                                                    }
                                                    self->len++;
                                                    break;
                                                }
                                            }
                                            same_key_exist_252=(_Bool)0;
                                            for(
                                            it2_255=list$1charp_begin(self->key_list) ,                                            0;                                            _for_condtionalA8=                                            !list$1charp_end(self->key_list) ,                                            _for_condtionalA8;                                            it2_255=list$1charp_next(self->key_list) ,                                            0                                            ){
                                                if(_if_conditional396=optional$2boolbool_value(((struct optional$2boolbool*)(right_value277=string_equals(it2_255,key)))),                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value277),
                                                (right_value277 && right_value277 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                __right_value_freed_obj[0] = right_value277, right_value277 = (void*)0, 
                                                __freed_obj__ = 0, 
                                                _if_conditional396) {
                                                    same_key_exist_252=(_Bool)1;
                                                }
                                            }
                                            if(_if_conditional397=!same_key_exist_252,                                            _if_conditional397) {
                                                list$1charp_push_back(self->key_list,key);
                                            }
                                            __result119__ = __result_obj__ = self;
                                            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                                            if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            return __result119__;
                                            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                                            if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_217;
void* right_value269;
char** keys_218;
void* right_value270;
struct sClass** items_219;
void* right_value271;
_Bool* item_existance_220;
int len_221;
char* it_224;
_Bool _for_condtionalA7;
struct sClass* default_value_227;
void* right_value273;
struct sClass* it2_230;
unsigned int hash_231;
int n_232;
_Bool _while_condtional38;
_Bool _if_conditional362;
_Bool _if_conditional363;
_Bool _if_conditional364;
struct sClass* default_value_233;
void* right_value274;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_217, 0, sizeof(int));
right_value269 = (void*)0;
memset(&keys_218, 0, sizeof(char**));
right_value270 = (void*)0;
memset(&items_219, 0, sizeof(struct sClass**));
right_value271 = (void*)0;
memset(&item_existance_220, 0, sizeof(_Bool*));
memset(&len_221, 0, sizeof(int));
memset(&it_224, 0, sizeof(char*));
memset(&default_value_227, 0, sizeof(struct sClass*));
right_value273 = (void*)0;
memset(&it2_230, 0, sizeof(struct sClass*));
memset(&hash_231, 0, sizeof(unsigned int));
memset(&n_232, 0, sizeof(int));
memset(&default_value_233, 0, sizeof(struct sClass*));
right_value274 = (void*)0;
                                                    size_217=self->size*10;
                                                    keys_218=(char**)come_increment_ref_count(((char**)(right_value269=(char**)come_calloc(1, sizeof(char*)*(1*(size_217)), "./comelang2.h", 1388, "char*"))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value269);
                                                    if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { right_value269 = come_decrement_ref_count(right_value269, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value269, right_value269 = (void*)0;
                                                    __freed_obj__ = 0;
                                                    items_219=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value270=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_217)), "./comelang2.h", 1389, "struct sClass*"))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value270);
                                                    if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value270, right_value270 = (void*)0;
                                                    __freed_obj__ = 0;
                                                    item_existance_220=(_Bool*)come_increment_ref_count(((_Bool*)(right_value271=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_217)), "./comelang2.h", 1390, "_Bool"))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value271);
                                                    if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { right_value271 = come_decrement_ref_count(right_value271, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value271, right_value271 = (void*)0;
                                                    __freed_obj__ = 0;
                                                    len_221=0;
                                                    for(
                                                    it_224=map$2charphsClassph_begin(self) ,                                                    0;                                                    _for_condtionalA7=                                                    !map$2charphsClassph_end(self) ,                                                    _for_condtionalA7;                                                    it_224=map$2charphsClassph_next(self) ,                                                    0                                                    ){
                                                        memset(&default_value_227,0,sizeof(struct sClass*));
                                                        it2_230=((struct sClass*)(right_value273=map$2charphsClassph_at(self,it_224,default_value_227)));
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value273);
                                                        if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value273, right_value273 = (void*)0;
                                                        __freed_obj__ = 0;
                                                        hash_231=string_get_hash_key(it_224)%size_217;
                                                        n_232=hash_231;
                                                        while(_while_condtional38=(_Bool)1,                                                        _while_condtional38) {
                                                            if(_if_conditional362=item_existance_220[n_232],                                                            _if_conditional362) {
                                                                n_232++;
                                                                if(_if_conditional363=n_232>=size_217,                                                                _if_conditional363) {
                                                                    n_232=0;
                                                                }
                                                                else {
                                                                    if(_if_conditional364=n_232==hash_231,                                                                    _if_conditional364) {
                                                                        printf("unexpected error in map.rehash(1)\n");
                                                                        stackframe();
                                                                        exit(2);
                                                                    }
                                                                }
                                                            }
                                                            else {
                                                                item_existance_220[n_232]=(_Bool)1;
                                                                keys_218[n_232]=it_224;
                                                                items_219[n_232]=((struct sClass*)(right_value274=map$2charphsClassph_at(self,it_224,default_value_233)));
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value274);
                                                                if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                __right_value_freed_obj[0] = right_value274, right_value274 = (void*)0;
                                                                __freed_obj__ = 0;
                                                                len_221++;
                                                                break;
                                                            }
                                                        }
                                                    }
                                                    come_free((char*)self->items);
                                                    if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                                                    come_free((char*)self->keys);
                                                    self->keys=keys_218;
                                                    self->items=items_219;
                                                    self->item_existance=item_existance_220;
                                                    self->size=size_217;
                                                    self->len=len_221;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional354;
char* result_222;
char* __result96__;
_Bool _if_conditional355;
char* __result97__;
char* result_223;
char* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_222, 0, sizeof(char*));
memset(&result_223, 0, sizeof(char*));
                                                        if(_if_conditional354=self==((void*)0),                                                        _if_conditional354) {
                                                            memset(&result_222,0,sizeof(char*));
                                                            __result96__ = __result_obj__ = result_222;
                                                            return __result96__;
                                                        }
                                                        self->key_list->it=self->key_list->head;
                                                        if(_if_conditional355=self->key_list->it,                                                        _if_conditional355) {
                                                            __result97__ = __result_obj__ = self->key_list->it->item;
                                                            return __result97__;
                                                        }
                                                        memset(&result_223,0,sizeof(char*));
                                                        __result98__ = __result_obj__ = result_223;
                                                        return __result98__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        __result99__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                                                        return __result99__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional356;
char* result_225;
char* __result100__;
_Bool _if_conditional357;
char* __result101__;
char* result_226;
char* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_225, 0, sizeof(char*));
memset(&result_226, 0, sizeof(char*));
                                                        if(_if_conditional356=self==((void*)0)||self->key_list->it==((void*)0),                                                        _if_conditional356) {
                                                            memset(&result_225,0,sizeof(char*));
                                                            __result100__ = __result_obj__ = result_225;
                                                            return __result100__;
                                                        }
                                                        self->key_list->it=self->key_list->it->next;
                                                        if(_if_conditional357=self->key_list->it,                                                        _if_conditional357) {
                                                            __result101__ = __result_obj__ = self->key_list->it->item;
                                                            return __result101__;
                                                        }
                                                        memset(&result_226,0,sizeof(char*));
                                                        __result102__ = __result_obj__ = result_226;
                                                        return __result102__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_228;
unsigned int it_229;
_Bool _while_condtional37;
_Bool _if_conditional358;
void* right_value272;
_Bool _if_conditional359;
struct sClass* __result103__;
_Bool _if_conditional360;
_Bool _if_conditional361;
struct sClass* __result104__;
struct sClass* __result105__;
struct sClass* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_228, 0, sizeof(unsigned int));
memset(&it_229, 0, sizeof(unsigned int));
right_value272 = (void*)0;
                                                            hash_228=string_get_hash_key(((char*)key))%self->size;
                                                            it_229=hash_228;
                                                            while(_while_condtional37=(_Bool)1,                                                            _while_condtional37) {
                                                                if(_if_conditional358=self->item_existance[it_229],                                                                _if_conditional358) {
                                                                    if(_if_conditional359=optional$2boolbool_value(((struct optional$2boolbool*)(right_value272=string_equals(self->keys[it_229],key)))),                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value272),
                                                                    (right_value272 && right_value272 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                                    __right_value_freed_obj[0] = right_value272, right_value272 = (void*)0, 
                                                                    __freed_obj__ = 0, 
                                                                    _if_conditional359) {
                                                                        __result103__ = __result_obj__ = self->items[it_229];
                                                                        if(default_value && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                                        return __result103__;
                                                                    }
                                                                    it_229++;
                                                                    if(_if_conditional360=it_229>=self->size,                                                                    _if_conditional360) {
                                                                        it_229=0;
                                                                    }
                                                                    else {
                                                                        if(_if_conditional361=it_229==hash_228,                                                                        _if_conditional361) {
                                                                            __result104__ = __result_obj__ = default_value;
                                                                            if(default_value && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                                            return __result104__;
                                                                        }
                                                                    }
                                                                }
                                                                else {
                                                                    __result105__ = __result_obj__ = default_value;
                                                                    if(default_value && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                                    return __result105__;
                                                                }
                                                            }
                                                            __result106__ = __result_obj__ = default_value;
                                                            if(default_value && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                            return __result106__;
                                                            if(default_value && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int it2_236;
struct list_item$1charp* it_237;
_Bool _while_condtional40;
void* right_value276;
_Bool _if_conditional368;
struct list$1charp* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_236, 0, sizeof(int));
memset(&it_237, 0, sizeof(struct list_item$1charp*));
right_value276 = (void*)0;
                                                                it2_236=0;
                                                                it_237=self->head;
                                                                while(_while_condtional40=it_237!=((void*)0),                                                                _while_condtional40) {
                                                                    if(_if_conditional368=optional$2boolbool_value(((struct optional$2boolbool*)(right_value276=string_equals(it_237->item,item)))),                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value276),
                                                                    (right_value276 && right_value276 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                                    __right_value_freed_obj[0] = right_value276, right_value276 = (void*)0, 
                                                                    __freed_obj__ = 0, 
                                                                    _if_conditional368) {
                                                                        list$1charp_delete(self,it2_236,it2_236+1);
                                                                        break;
                                                                    }
                                                                    it2_236++;
                                                                    it_237=it_237->next;
                                                                }
                                                                __result110__ = __result_obj__ = self;
                                                                return __result110__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional369;
_Bool _if_conditional370;
_Bool _if_conditional371;
int tmp_238;
_Bool _if_conditional372;
_Bool _if_conditional373;
_Bool _if_conditional374;
struct list$1charp* __result107__;
_Bool _if_conditional375;
_Bool _if_conditional376;
struct list_item$1charp* it_241;
int i_242;
_Bool _while_condtional42;
_Bool _if_conditional377;
struct list_item$1charp* prev_it_243;
_Bool _if_conditional378;
_Bool _if_conditional379;
struct list_item$1charp* it_244;
int i_245;
_Bool _while_condtional43;
_Bool _if_conditional380;
_Bool _if_conditional381;
struct list_item$1charp* prev_it_246;
struct list_item$1charp* it_247;
struct list_item$1charp* head_prev_it_248;
struct list_item$1charp* tail_it_249;
int i_250;
_Bool _while_condtional44;
_Bool _if_conditional382;
_Bool _if_conditional383;
_Bool _if_conditional384;
struct list_item$1charp* prev_it_251;
_Bool _if_conditional385;
_Bool _if_conditional386;
struct list$1charp* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_238, 0, sizeof(int));
memset(&it_241, 0, sizeof(struct list_item$1charp*));
memset(&i_242, 0, sizeof(int));
memset(&prev_it_243, 0, sizeof(struct list_item$1charp*));
memset(&it_244, 0, sizeof(struct list_item$1charp*));
memset(&i_245, 0, sizeof(int));
memset(&prev_it_246, 0, sizeof(struct list_item$1charp*));
memset(&it_247, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_248, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_249, 0, sizeof(struct list_item$1charp*));
memset(&i_250, 0, sizeof(int));
memset(&prev_it_251, 0, sizeof(struct list_item$1charp*));
                                                                            if(_if_conditional369=head<0,                                                                            _if_conditional369) {
                                                                                head+=self->len;
                                                                            }
                                                                            if(_if_conditional370=tail<0,                                                                            _if_conditional370) {
                                                                                tail+=self->len+1;
                                                                            }
                                                                            if(_if_conditional371=head>tail,                                                                            _if_conditional371) {
                                                                                tmp_238=tail;
                                                                                tail=head;
                                                                                head=tmp_238;
                                                                            }
                                                                            if(_if_conditional372=head<0,                                                                            _if_conditional372) {
                                                                                head=0;
                                                                            }
                                                                            if(_if_conditional373=tail>self->len,                                                                            _if_conditional373) {
                                                                                tail=self->len;
                                                                            }
                                                                            if(_if_conditional374=head==tail,                                                                            _if_conditional374) {
                                                                                __result107__ = __result_obj__ = self;
                                                                                return __result107__;
                                                                            }
                                                                            if(_if_conditional375=head==0&&tail==self->len,                                                                            _if_conditional375) {
                                                                                list$1charp_reset(self);
                                                                            }
                                                                            else {
                                                                                if(_if_conditional376=head==0,                                                                                _if_conditional376) {
                                                                                    it_241=self->head;
                                                                                    i_242=0;
                                                                                    while(_while_condtional42=it_241!=((void*)0),                                                                                    _while_condtional42) {
                                                                                        if(_if_conditional377=i_242<tail,                                                                                        _if_conditional377) {
                                                                                            prev_it_243=it_241;
                                                                                            it_241=it_241->next;
                                                                                            i_242++;
                                                                                            if(prev_it_243 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_243, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                            self->len--;
                                                                                        }
                                                                                        else {
                                                                                            if(_if_conditional378=i_242==tail,                                                                                            _if_conditional378) {
                                                                                                self->head=it_241;
                                                                                                self->head->prev=((void*)0);
                                                                                                break;
                                                                                            }
                                                                                            else {
                                                                                                it_241=it_241->next;
                                                                                                i_242++;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional379=tail==self->len,                                                                                    _if_conditional379) {
                                                                                        it_244=self->head;
                                                                                        i_245=0;
                                                                                        while(_while_condtional43=it_244!=((void*)0),                                                                                        _while_condtional43) {
                                                                                            if(_if_conditional380=i_245==head,                                                                                            _if_conditional380) {
                                                                                                self->tail=it_244->prev;
                                                                                                self->tail->next=((void*)0);
                                                                                            }
                                                                                            if(_if_conditional381=i_245>=head,                                                                                            _if_conditional381) {
                                                                                                prev_it_246=it_244;
                                                                                                it_244=it_244->next;
                                                                                                i_245++;
                                                                                                if(prev_it_246 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_246, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                                self->len--;
                                                                                            }
                                                                                            else {
                                                                                                it_244=it_244->next;
                                                                                                i_245++;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                    else {
                                                                                        it_247=self->head;
                                                                                        head_prev_it_248=((void*)0);
                                                                                        tail_it_249=((void*)0);
                                                                                        i_250=0;
                                                                                        while(_while_condtional44=it_247!=((void*)0),                                                                                        _while_condtional44) {
                                                                                            if(_if_conditional382=i_250==head,                                                                                            _if_conditional382) {
                                                                                                head_prev_it_248=it_247->prev;
                                                                                            }
                                                                                            if(_if_conditional383=i_250==tail,                                                                                            _if_conditional383) {
                                                                                                tail_it_249=it_247;
                                                                                            }
                                                                                            if(_if_conditional384=i_250>=head&&i_250<tail,                                                                                            _if_conditional384) {
                                                                                                prev_it_251=it_247;
                                                                                                it_247=it_247->next;
                                                                                                i_250++;
                                                                                                if(prev_it_251 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_251, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                                self->len--;
                                                                                            }
                                                                                            else {
                                                                                                it_247=it_247->next;
                                                                                                i_250++;
                                                                                            }
                                                                                        }
                                                                                        if(_if_conditional385=head_prev_it_248!=((void*)0),                                                                                        _if_conditional385) {
                                                                                            head_prev_it_248->next=tail_it_249;
                                                                                        }
                                                                                        if(_if_conditional386=tail_it_249!=((void*)0),                                                                                        _if_conditional386) {
                                                                                            tail_it_249->prev=head_prev_it_248;
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                            __result109__ = __result_obj__ = self;
                                                                            return __result109__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_239;
_Bool _while_condtional41;
struct list_item$1charp* prev_it_240;
struct list$1charp* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_239, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_240, 0, sizeof(struct list_item$1charp*));
                                                                                    it_239=self->head;
                                                                                    while(_while_condtional41=it_239!=((void*)0),                                                                                    _while_condtional41) {
                                                                                        prev_it_240=it_239;
                                                                                        it_239=it_239->next;
                                                                                        if(prev_it_240 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_240, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                    }
                                                                                    self->head=((void*)0);
                                                                                    self->tail=((void*)0);
                                                                                    self->len=0;
                                                                                    __result108__ = __result_obj__ = self;
                                                                                    return __result108__;
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
_Bool _if_conditional392;
char* result_253;
char* __result111__;
_Bool _if_conditional393;
char* __result112__;
char* result_254;
char* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_253, 0, sizeof(char*));
memset(&result_254, 0, sizeof(char*));
                                                if(_if_conditional392=self==((void*)0),                                                _if_conditional392) {
                                                    memset(&result_253,0,sizeof(char*));
                                                    __result111__ = __result_obj__ = result_253;
                                                    return __result111__;
                                                }
                                                self->it=self->head;
                                                if(_if_conditional393=self->it,                                                _if_conditional393) {
                                                    __result112__ = __result_obj__ = self->it->item;
                                                    return __result112__;
                                                }
                                                memset(&result_254,0,sizeof(char*));
                                                __result113__ = __result_obj__ = result_254;
                                                return __result113__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                __result114__ = self==((void*)0)||self->it==((void*)0);
                                                return __result114__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional394;
char* result_256;
char* __result115__;
_Bool _if_conditional395;
char* __result116__;
char* result_257;
char* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_256, 0, sizeof(char*));
memset(&result_257, 0, sizeof(char*));
                                                if(_if_conditional394=self==((void*)0)||self->it==((void*)0),                                                _if_conditional394) {
                                                    memset(&result_256,0,sizeof(char*));
                                                    __result115__ = __result_obj__ = result_256;
                                                    return __result115__;
                                                }
                                                self->it=self->it->next;
                                                if(_if_conditional395=self->it,                                                _if_conditional395) {
                                                    __result116__ = __result_obj__ = self->it->item;
                                                    return __result116__;
                                                }
                                                memset(&result_257,0,sizeof(char*));
                                                __result117__ = __result_obj__ = result_257;
                                                return __result117__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional398;
void* right_value278;
struct list_item$1charp* litem_258;
_Bool _if_conditional399;
void* right_value279;
struct list_item$1charp* litem_259;
void* right_value280;
struct list_item$1charp* litem_260;
struct list$1charp* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value278 = (void*)0;
memset(&litem_258, 0, sizeof(struct list_item$1charp*));
right_value279 = (void*)0;
memset(&litem_259, 0, sizeof(struct list_item$1charp*));
right_value280 = (void*)0;
memset(&litem_260, 0, sizeof(struct list_item$1charp*));
                                                    if(_if_conditional398=self->len==0,                                                    _if_conditional398) {
                                                        litem_258=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value278=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 282, "struct list_item$1charp"))));
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value278);
                                                        if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value278, right_value278 = (void*)0;
                                                        __freed_obj__ = 0;
                                                        litem_258->prev=((void*)0);
                                                        litem_258->next=((void*)0);
                                                        litem_258->item=item;
                                                        self->tail=litem_258;
                                                        self->head=litem_258;
                                                    }
                                                    else {
                                                        if(_if_conditional399=self->len==1,                                                        _if_conditional399) {
                                                            litem_259=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value279=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 292, "struct list_item$1charp"))));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value279);
                                                            if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value279, right_value279 = (void*)0;
                                                            __freed_obj__ = 0;
                                                            litem_259->prev=self->head;
                                                            litem_259->next=((void*)0);
                                                            litem_259->item=item;
                                                            self->tail=litem_259;
                                                            self->head->next=litem_259;
                                                        }
                                                        else {
                                                            litem_260=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value280=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 302, "struct list_item$1charp"))));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value280);
                                                            if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value280, right_value280 = (void*)0;
                                                            __freed_obj__ = 0;
                                                            litem_260->prev=self->tail;
                                                            litem_260->next=((void*)0);
                                                            litem_260->item=item;
                                                            self->tail->next=litem_260;
                                                            self->tail=litem_260;
                                                        }
                                                    }
                                                    self->len++;
                                                    __result118__ = __result_obj__ = self;
                                                    return __result118__;
}

