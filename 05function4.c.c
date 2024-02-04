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
struct tuple4$4voidpvoidpvoidpbool
{
    void* v1;
    void* v2;
    void* v3;
    _Bool v4;
};
struct optional$2sTypepbool
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
struct optional$2sClasspbool
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
static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self);
static struct list$1charph* list$1charph_clone(struct list$1charph* self);
static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
void check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, struct sInfo* info);

static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
void skip_pointer_attribute(struct sInfo* info);

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type);

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3);
static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
static struct optional$2sTypepbool* optional$2sTypepbool_initialize(struct optional$2sTypepbool* self, struct sType* v1, _Bool v2);
static void optional$2sTypepboolp_finalize(struct optional$2sTypepbool* self);
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
static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2);
static void optional$2sClasspboolp_finalize(struct optional$2sClasspbool* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
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
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2010, "struct smart_pointer$1char"))));
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
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2020, "struct smart_pointer$1short"))));
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
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2030, "struct smart_pointer$1int"))));
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
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2040, "struct smart_pointer$1long"))));
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
memset(&right_value10, 0, sizeof(void*));
memset(&right_value11, 0, sizeof(void*));
memset(&fname_7, 0, sizeof(struct buffer*));
memset(&right_value12, 0, sizeof(void*));
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
                __right_value_freed_obj[0] = right_value10;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value11);
                if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value11;
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
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value12);
                if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { right_value12 = come_decrement_ref_count(right_value12, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value12;
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
memset(&right_value13, 0, sizeof(void*));
memset(&right_value14, 0, sizeof(void*));
memset(&buf_9, 0, sizeof(struct buffer*));
memset(&right_value15, 0, sizeof(void*));
memset(&right_value16, 0, sizeof(void*));
memset(&right_value17, 0, sizeof(void*));
    buf_9=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value14=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 145, "struct buffer"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value13);
    if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value13;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value14);
    if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value14;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    while(_while_condtional13=(*info->p>=97&&*info->p<=122)||(*info->p>=65&&*info->p<=90)||*info->p==95||(*info->p>=48&&*info->p<=57)||(*info->p==36),    _while_condtional13) {
        buffer_append_char(buf_9,*info->p);
        info->p++;
    }
    skip_spaces_and_lf(info);
    if(_if_conditional13=string_length(((char*)(right_value15=buffer_to_string(buf_9))))==0,    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value15),
    (right_value15 && right_value15 != __result_obj__ && !__freed_obj__) ? right_value15 = come_decrement_ref_count(right_value15, (void*)0, (void*)0, 1, 0, 0):0,
    __right_value_freed_obj[2] = right_value15, 
    __freed_obj__ = 0, 
    _if_conditional13) {
        err_msg(info,"unexpected character(%c). expected word character",*info->p);
        __result8__ = __result_obj__ = ((char*)(right_value16=__builtin_string("")));
        if(buf_9 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_9, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
        if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { right_value16 = come_decrement_ref_count(right_value16, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value16;
        __freed_obj__ = 0;
        return __result8__;
    }
    __result9__ = __result_obj__ = ((char*)(right_value17=buffer_to_string(buf_9)));
    if(buf_9 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_9, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value17);
    if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { right_value17 = come_decrement_ref_count(right_value17, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value17;
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
void* right_value82;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value18, 0, sizeof(void*));
memset(&right_value19, 0, sizeof(void*));
memset(&param_types_22, 0, sizeof(struct list$1sTypeph*));
memset(&right_value20, 0, sizeof(void*));
memset(&right_value21, 0, sizeof(void*));
memset(&param_names_23, 0, sizeof(struct list$1charph*));
memset(&right_value22, 0, sizeof(void*));
memset(&right_value23, 0, sizeof(void*));
memset(&param_default_parametors_24, 0, sizeof(struct list$1charph*));
memset(&var_args_25, 0, sizeof(_Bool));
memset(&void_param_26, 0, sizeof(_Bool));
memset(&p_27, 0, sizeof(char*));
memset(&sline_28, 0, sizeof(int));
memset(&right_value24, 0, sizeof(void*));
memset(&param_type_29, 0, sizeof(struct sType*));
memset(&param_name_30, 0, sizeof(char*));
memset(&err_31, 0, sizeof(_Bool));
memset(&param_type_29, 0, sizeof(struct sType*));
memset(&param_name_30, 0, sizeof(char*));
memset(&err_31, 0, sizeof(_Bool));
memset(&right_value25, 0, sizeof(void*));
memset(&right_value26, 0, sizeof(void*));
memset(&right_value27, 0, sizeof(void*));
memset(&param_type2_32, 0, sizeof(struct sType*));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&p_57, 0, sizeof(char*));
memset(&no_comma_58, 0, sizeof(_Bool));
memset(&right_value70, 0, sizeof(void*));
memset(&node_59, 0, sizeof(struct sNode*));
memset(&p2_60, 0, sizeof(char*));
memset(&right_value71, 0, sizeof(void*));
memset(&right_value72, 0, sizeof(void*));
memset(&right_value82, 0, sizeof(void*));
    param_types_22=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value19=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value18=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function4.c", 196, "struct list$1sTypeph"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
    if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value18;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value19);
    if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value19;
    __freed_obj__ = 0;
    param_names_23=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value21=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value20=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function4.c", 197, "struct list$1charph"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value20);
    if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value20;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value21);
    if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value21;
    __freed_obj__ = 0;
    param_default_parametors_24=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value23=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value22=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function4.c", 198, "struct list$1charph"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value22);
    if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value22;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value23);
    if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value23;
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
            __right_value_freed_obj[0] = right_value24;
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
                __right_value_freed_obj[0] = right_value25;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value26);
                if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple4$4voidpvoidpvoidpboolp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value26;
                __freed_obj__ = 0;
                return __result23__;
            }
            param_type2_32=(struct sType*)come_increment_ref_count(((struct sType*)(right_value27=solve_generics(param_type_29,info->generics_type,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value27);
            if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value27;
            __freed_obj__ = 0;
            param_type2_32->mFunctionParam=(_Bool)1;
            list$1sTypeph_push_back(param_types_22,(struct sType*)come_increment_ref_count(((struct sType*)(right_value65=sType_clone(param_type2_32)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value65);
            if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value65;
            __freed_obj__ = 0;
            list$1charph_push_back(param_names_23,(char*)come_increment_ref_count(((char*)(right_value69=string_clone(param_name_30)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value69);
            if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value69;
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
                __right_value_freed_obj[0] = right_value70;
                __freed_obj__ = 0;
                info->no_comma=no_comma_58;
                p2_60=info->p;
                char buf_61[p2_60-p_57+1];
                memset(&buf_61, 0, sizeof(char)                *(p2_60-p_57+1)                );
                memcpy(buf_61,p_57,p2_60-p_57);
                buf_61[p2_60-p_57]=0;
                list$1charph_push_back(param_default_parametors_24,(char*)come_increment_ref_count(((char*)(right_value71=__builtin_string(buf_61)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value71);
                if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { right_value71 = come_decrement_ref_count(right_value71, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value71;
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
    __result47__ = __result_obj__ = ((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value82=tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_increment_ref_count(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value72=(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool)*(1), "05function4.c", 307, "struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool")))),(struct list$1sTypeph*)come_increment_ref_count(param_types_22),(struct list$1charph*)come_increment_ref_count(param_names_23),(struct list$1charph*)come_increment_ref_count(param_default_parametors_24),var_args_25)));
    if(param_types_22 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_22, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_names_23 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_23, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_default_parametors_24 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_24, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value72);
    if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { right_value72 = come_decrement_ref_count(right_value72, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value72;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value82);
    if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value82;
    __freed_obj__ = 0;
    return __result47__;
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
memset(&right_value28, 0, sizeof(void*));
memset(&litem_33, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value29, 0, sizeof(void*));
memset(&litem_34, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value30, 0, sizeof(void*));
memset(&litem_35, 0, sizeof(struct list_item$1sTypeph*));
                if(_if_conditional47=self->len==0,                _if_conditional47) {
                    litem_33=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value28=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 282, "struct list_item$1sTypeph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
                    if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value28;
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
                        __right_value_freed_obj[0] = right_value29;
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
                        __right_value_freed_obj[0] = right_value30;
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
memset(&right_value31, 0, sizeof(void*));
memset(&result_36, 0, sizeof(struct sType*));
memset(&right_value34, 0, sizeof(void*));
memset(&right_value35, 0, sizeof(void*));
memset(&right_value36, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
memset(&right_value64, 0, sizeof(void*));
                if(_if_conditional49=self==(void*)0,                _if_conditional49) {
                    __result25__ = __result_obj__ = (void*)0;
                    return __result25__;
                }
                result_36=(struct sType*)come_increment_ref_count(((struct sType*)(right_value31=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
                if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value31;
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
                    __right_value_freed_obj[0] = right_value34;
                    __freed_obj__ = 0;
                }
                if(_if_conditional55=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional55) {
                    __dec_obj12=result_36->mOriginalLoadVarType;
                    result_36->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value35=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                    if(__dec_obj12) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
                    if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value35;
                    __freed_obj__ = 0;
                }
                if(_if_conditional56=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional56) {
                    __dec_obj13=result_36->mGenericsName;
                    result_36->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value36=string_clone(self->mGenericsName))));
                    if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
                    if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { right_value36 = come_decrement_ref_count(right_value36, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value36;
                    __freed_obj__ = 0;
                }
                if(_if_conditional57=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional57) {
                    __dec_obj17=result_36->mGenericsTypes;
                    result_36->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value43=list$1sTypephp_clone(self->mGenericsTypes))));
                    if(__dec_obj17) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
                    if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value43;
                    __freed_obj__ = 0;
                }
                if(_if_conditional61=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional61) {
                    __dec_obj21=result_36->mArrayNum;
                    result_36->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value51=list$1sNodephp_clone(self->mArrayNum))));
                    if(__dec_obj21) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
                    if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value51;
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
                    __right_value_freed_obj[0] = right_value52;
                    __freed_obj__ = 0;
                }
                if(_if_conditional76=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional76) {
                    __dec_obj26=result_36->mParamNames;
                    result_36->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value59=list$1charphp_clone(self->mParamNames))));
                    if(__dec_obj26) { come_call_finalizer(list$1charph_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59);
                    if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value59;
                    __freed_obj__ = 0;
                }
                if(_if_conditional80=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional80) {
                    __dec_obj27=result_36->mResultType;
                    result_36->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value60=tuple1$1sTypephp_clone(self->mResultType))));
                    if(__dec_obj27) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value60);
                    if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value60;
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
                    __right_value_freed_obj[0] = right_value61;
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
                    __right_value_freed_obj[0] = right_value62;
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
                    __right_value_freed_obj[0] = right_value63;
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
                    __right_value_freed_obj[0] = right_value64;
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
memset(&right_value32, 0, sizeof(void*));
memset(&result_37, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value33, 0, sizeof(void*));
                        if(_if_conditional52=self==(void*)0,                        _if_conditional52) {
                            __result26__ = __result_obj__ = (void*)0;
                            return __result26__;
                        }
                        result_37=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value32=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
                        if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value32;
                        __freed_obj__ = 0;
                        if(_if_conditional54=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional54) {
                            __dec_obj10=result_37->v1;
                            result_37->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value33=sType_clone(self->v1))));
                            if(__dec_obj10) { come_call_finalizer(sType_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value33);
                            if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value33;
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
memset(&right_value37, 0, sizeof(void*));
memset(&right_value38, 0, sizeof(void*));
memset(&result_38, 0, sizeof(struct list$1sTypeph*));
memset(&it_39, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value42, 0, sizeof(void*));
                        if(_if_conditional58=self==((void*)0),                        _if_conditional58) {
                            __result28__ = __result_obj__ = ((void*)0);
                            return __result28__;
                        }
                        result_38=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value38=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value37=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 198, "struct list$1sTypeph"))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
                        if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value37;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value38);
                        if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value38;
                        __freed_obj__ = 0;
                        it_39=self->head;
                        while(_while_condtional19=it_39!=((void*)0),                        _while_condtional19) {
                            list$1sTypeph_add(result_38,(struct sType*)come_increment_ref_count(((struct sType*)(right_value42=sType_clone(it_39->item)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
                            if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value42;
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
memset(&right_value39, 0, sizeof(void*));
memset(&litem_40, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value40, 0, sizeof(void*));
memset(&litem_41, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value41, 0, sizeof(void*));
memset(&litem_42, 0, sizeof(struct list_item$1sTypeph*));
                                if(_if_conditional59=self->len==0,                                _if_conditional59) {
                                    litem_40=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value39=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 212, "struct list_item$1sTypeph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
                                    if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value39;
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
                                        __right_value_freed_obj[0] = right_value40;
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
                                        __right_value_freed_obj[0] = right_value41;
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
memset(&right_value44, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
memset(&result_43, 0, sizeof(struct list$1sNodeph*));
memset(&it_44, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value50, 0, sizeof(void*));
                        if(_if_conditional62=self==((void*)0),                        _if_conditional62) {
                            __result31__ = __result_obj__ = ((void*)0);
                            return __result31__;
                        }
                        result_43=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value45=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value44=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 198, "struct list$1sNodeph"))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
                        if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value44;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value45);
                        if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value45;
                        __freed_obj__ = 0;
                        it_44=self->head;
                        while(_while_condtional20=it_44!=((void*)0),                        _while_condtional20) {
                            list$1sNodeph_add(result_43,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value50=sNode_clone(it_44->item)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50);
                            if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { right_value50 = come_decrement_ref_count(right_value50, ((struct sNode*)right_value50)->finalize, ((struct sNode*)right_value50)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value50;
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
memset(&right_value46, 0, sizeof(void*));
memset(&litem_45, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value47, 0, sizeof(void*));
memset(&litem_46, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value48, 0, sizeof(void*));
memset(&litem_47, 0, sizeof(struct list_item$1sNodeph*));
                                if(_if_conditional63=self->len==0,                                _if_conditional63) {
                                    litem_45=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value46=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 212, "struct list_item$1sNodeph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value46);
                                    if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value46;
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
                                        __right_value_freed_obj[0] = right_value47;
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
                                        __right_value_freed_obj[0] = right_value48;
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
memset(&right_value49, 0, sizeof(void*));
memset(&result_48, 0, sizeof(struct sNode*));
                                if(_if_conditional65=self==(void*)0,                                _if_conditional65) {
                                    __result34__ = __result_obj__ = (void*)0;
                                    return __result34__;
                                }
                                result_48=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value49=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49);
                                if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { right_value49 = come_decrement_ref_count(right_value49, ((struct sNode*)right_value49)->finalize, ((struct sNode*)right_value49)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value49;
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
memset(&right_value53, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
memset(&result_49, 0, sizeof(struct list$1charph*));
memset(&it_50, 0, sizeof(struct list_item$1charph*));
memset(&right_value58, 0, sizeof(void*));
                        if(_if_conditional77=self==((void*)0),                        _if_conditional77) {
                            __result37__ = __result_obj__ = ((void*)0);
                            return __result37__;
                        }
                        result_49=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value54=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value53=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 198, "struct list$1charph"))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
                        if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value53;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value54);
                        if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value54;
                        __freed_obj__ = 0;
                        it_50=self->head;
                        while(_while_condtional21=it_50!=((void*)0),                        _while_condtional21) {
                            list$1charph_add(result_49,(char*)come_increment_ref_count(((char*)(right_value58=string_clone(it_50->item)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
                            if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value58;
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
memset(&right_value55, 0, sizeof(void*));
memset(&litem_51, 0, sizeof(struct list_item$1charph*));
memset(&right_value56, 0, sizeof(void*));
memset(&litem_52, 0, sizeof(struct list_item$1charph*));
memset(&right_value57, 0, sizeof(void*));
memset(&litem_53, 0, sizeof(struct list_item$1charph*));
                                if(_if_conditional78=self->len==0,                                _if_conditional78) {
                                    litem_51=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value55=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 212, "struct list_item$1charph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
                                    if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value55;
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
                                        __right_value_freed_obj[0] = right_value56;
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
                                        __right_value_freed_obj[0] = right_value57;
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
memset(&right_value66, 0, sizeof(void*));
memset(&litem_54, 0, sizeof(struct list_item$1charph*));
memset(&right_value67, 0, sizeof(void*));
memset(&litem_55, 0, sizeof(struct list_item$1charph*));
memset(&right_value68, 0, sizeof(void*));
memset(&litem_56, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional119=self->len==0,                _if_conditional119) {
                    litem_54=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value66=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 282, "struct list_item$1charph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
                    if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value66;
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
                        __right_value_freed_obj[0] = right_value67;
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
                        __right_value_freed_obj[0] = right_value68;
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
void* right_value76;
struct list$1sTypeph* __dec_obj35;
void* right_value80;
struct list$1charph* __dec_obj36;
void* right_value81;
struct list$1charph* __dec_obj37;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
        __dec_obj35=self->v1;
        self->v1=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value76=list$1sTypeph_clone(v1))));
        if(__dec_obj35) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value76);
        if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value76;
        __freed_obj__ = 0;
        __dec_obj36=self->v2;
        self->v2=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value80=list$1charph_clone(v2))));
        if(__dec_obj36) { come_call_finalizer(list$1charph_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value80);
        if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value80;
        __freed_obj__ = 0;
        __dec_obj37=self->v3;
        self->v3=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value81=list$1charph_clone(v3))));
        if(__dec_obj37) { come_call_finalizer(list$1charph_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value81);
        if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value81;
        __freed_obj__ = 0;
        self->v4=v4;
        __result46__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v3 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,v3, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result46__;
        if(self && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v3 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,v3, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional125;
struct list$1sTypeph* __result42__;
void* right_value73;
void* right_value74;
struct list$1sTypeph* result_62;
struct list_item$1sTypeph* it_63;
_Bool _while_condtional22;
void* right_value75;
struct list$1sTypeph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value73, 0, sizeof(void*));
memset(&right_value74, 0, sizeof(void*));
memset(&result_62, 0, sizeof(struct list$1sTypeph*));
memset(&it_63, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value75, 0, sizeof(void*));
            if(_if_conditional125=self==((void*)0),            _if_conditional125) {
                __result42__ = __result_obj__ = ((void*)0);
                return __result42__;
            }
            result_62=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value74=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value73=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 198, "struct list$1sTypeph"))))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value73);
            if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value73;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value74);
            if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value74;
            __freed_obj__ = 0;
            it_63=self->head;
            while(_while_condtional22=it_63!=((void*)0),            _while_condtional22) {
                list$1sTypeph_add(result_62,(struct sType*)come_increment_ref_count(((struct sType*)(right_value75=sType_clone(it_63->item)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value75);
                if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value75;
                __freed_obj__ = 0;
                it_63=it_63->next;
            }
            __result43__ = __result_obj__ = result_62;
            if(result_62 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_62, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result43__;
            if(result_62 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_62, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional126;
struct list$1charph* __result44__;
void* right_value77;
void* right_value78;
struct list$1charph* result_64;
struct list_item$1charph* it_65;
_Bool _while_condtional23;
void* right_value79;
struct list$1charph* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&result_64, 0, sizeof(struct list$1charph*));
memset(&it_65, 0, sizeof(struct list_item$1charph*));
memset(&right_value79, 0, sizeof(void*));
            if(_if_conditional126=self==((void*)0),            _if_conditional126) {
                __result44__ = __result_obj__ = ((void*)0);
                return __result44__;
            }
            result_64=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value78=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value77=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 198, "struct list$1charph"))))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
            if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value77;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value78);
            if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value78;
            __freed_obj__ = 0;
            it_65=self->head;
            while(_while_condtional23=it_65!=((void*)0),            _while_condtional23) {
                list$1charph_add(result_64,(char*)come_increment_ref_count(((char*)(right_value79=string_clone(it_65->item)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
                if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value79;
                __freed_obj__ = 0;
                it_65=it_65->next;
            }
            __result45__ = __result_obj__ = result_64;
            if(result_64 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_64, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result45__;
            if(result_64 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_64, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional127=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional127) {
                if(self->v1 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional128=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional128) {
                if(self->v2 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional129=self!=((void*)0)&&self->v3!=((void*)0),            _if_conditional129) {
                if(self->v3 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->v3, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

void check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value83;
struct sType* right_type2_66;
struct sType* left_no_solved_generics_type_67;
struct sType* right_no_solved_generics_type_68;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
int i_69;
_Bool _for_condtionalA2;
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
void* right_value84;
void* right_value85;
struct buffer* buf2_73;
void* right_value86;
void* right_value87;
void* right_value88;
void* right_value89;
void* right_value90;
char* __dec_obj38;
void* right_value91;
struct sType* __dec_obj39;
void* right_value92;
struct sType* __dec_obj40;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
void* right_value93;
char* method_name_74;
_Bool _if_conditional159;
struct sType* obj_type_78;
_Bool _if_conditional160;
struct sType* obj_type2_79;
void* right_value95;
void* right_value96;
char* __dec_obj41;
void* right_value97;
void* right_value98;
struct buffer* buf2_80;
void* right_value99;
void* right_value100;
struct sType* type_81;
void* right_value101;
void* right_value102;
char* __dec_obj42;
void* right_value103;
struct sType* __dec_obj43;
void* right_value104;
struct sType* __dec_obj44;
_Bool _if_conditional161;
_Bool _if_conditional162;
_Bool _if_conditional163;
_Bool _if_conditional164;
_Bool _if_conditional165;
_Bool _if_conditional166;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool _if_conditional171;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value83, 0, sizeof(void*));
memset(&right_type2_66, 0, sizeof(struct sType*));
memset(&left_no_solved_generics_type_67, 0, sizeof(struct sType*));
memset(&right_no_solved_generics_type_68, 0, sizeof(struct sType*));
memset(&i_69, 0, sizeof(int));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value85, 0, sizeof(void*));
memset(&buf2_73, 0, sizeof(struct buffer*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
memset(&right_value89, 0, sizeof(void*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&method_name_74, 0, sizeof(char*));
memset(&obj_type_78, 0, sizeof(struct sType*));
memset(&obj_type2_79, 0, sizeof(struct sType*));
memset(&right_value95, 0, sizeof(void*));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
memset(&right_value98, 0, sizeof(void*));
memset(&buf2_80, 0, sizeof(struct buffer*));
memset(&right_value99, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&type_81, 0, sizeof(struct sType*));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
    right_type2_66=(struct sType*)come_increment_ref_count(((struct sType*)(right_value83=sType_clone(right_type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
    if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value83;
    __freed_obj__ = 0;
    left_no_solved_generics_type_67=left_type->mNoSolvedGenericsType->v1;
    right_no_solved_generics_type_68=right_type2_66->mNoSolvedGenericsType->v1;
    if(_if_conditional130=left_no_solved_generics_type_67&&right_no_solved_generics_type_68,    _if_conditional130) {
        if(_if_conditional131=list$1sTypeph_length(left_no_solved_generics_type_67->mGenericsTypes)>0,        _if_conditional131) {
            if(_if_conditional132=list$1sTypeph_length(left_no_solved_generics_type_67->mGenericsTypes)!=list$1sTypeph_length(right_no_solved_generics_type_68->mGenericsTypes),            _if_conditional132) {
                err_msg(info,"generics type parametor number error");
                printf("left type generics type parametor number is %d\n",list$1sTypeph_length(left_no_solved_generics_type_67->mGenericsTypes));
                printf("right type generics type parametor number is %d\n",list$1sTypeph_length(right_no_solved_generics_type_68->mGenericsTypes));
                exit(2);
            }
            for(
            i_69=0 ,            0;            _for_condtionalA2=            i_69<list$1sTypeph_length(left_no_solved_generics_type_67->mGenericsTypes) ,            _for_condtionalA2;            i_69++ ,            0            ){
                check_assign_type(msg,list$1sTypephp_operator_load_element(left_no_solved_generics_type_67->mGenericsTypes,i_69),list$1sTypephp_operator_load_element(right_no_solved_generics_type_68->mGenericsTypes,i_69),come_value,(_Bool)1,info);
            }
            check_assign_type(msg,left_no_solved_generics_type_67,right_no_solved_generics_type_68,come_value,(_Bool)0,info);
        }
    }
    else {
        if(_if_conditional135=check_no_pointer,        _if_conditional135) {
            if(_if_conditional136=left_type->mPointerNum>0,            _if_conditional136) {
                if(_if_conditional137=right_type2_66->mPointerNum>0,                _if_conditional137) {
                    if(_if_conditional138=string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_66->mClass->mName,"void"),                    _if_conditional138) {
                    }
                    else {
                        if(_if_conditional139=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_66->mClass->mName,"va_list"),                        _if_conditional139) {
                        }
                        else {
                            if(_if_conditional140=string_operator_not_equals(left_type->mClass->mName,right_type2_66->mClass->mName),                            _if_conditional140) {
                                err_msg(info,"type error1");
                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                printf("right type is %s pointer num %d\n",right_type2_66->mClass->mName,right_type2_66->mPointerNum);
                                exit(2);
                            }
                        }
                    }
                }
                else {
                    err_msg(info,"type error2");
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_66->mClass->mName,right_type2_66->mPointerNum);
                    exit(2);
                }
            }
            else {
                if(_if_conditional141=left_type->mPointerNum==0&&right_type2_66->mPointerNum>0,                _if_conditional141) {
                    err_msg(info,"type error3");
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_66->mClass->mName,right_type2_66->mPointerNum);
                    exit(2);
                }
                else {
                    if(_if_conditional142=string_operator_not_equals(left_type->mClass->mName,right_type2_66->mClass->mName),                    _if_conditional142) {
                        err_msg(info,"type error4");
                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                        printf("right type is %s pointer num %d\n",right_type2_66->mClass->mName,right_type2_66->mPointerNum);
                        exit(2);
                    }
                }
            }
        }
        else {
            if(_if_conditional143=!left_type->mNullValue&&right_type2_66->mNullValue,            _if_conditional143) {
                if(_if_conditional144=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_66->mClass->mName,"__builtin_va_list"),                _if_conditional144) {
                }
                else {
                    if(_if_conditional145=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_66->mClass->mName,"va_list"),                    _if_conditional145) {
                    }
                    else {
                        if(_if_conditional146=string_operator_equals(right_type2_66->mClass->mName,"void")&&right_type2_66->mPointerNum==0,                        _if_conditional146) {
                            err_msg(info,"type error6");
                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                            printf("right type is %s pointer num %d\n",right_type2_66->mClass->mName,right_type2_66->mPointerNum);
                            exit(2);
                        }
                        else {
                            buf2_73=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value85=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value84=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 387, "struct buffer"))))))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value84);
                            if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value84;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value85);
                            if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value85;
                            __freed_obj__ = 0;
                            buffer_append_str(buf2_73,((char*)(right_value89=xsprintf("come_null_check(\%s, \"\%s\", \%s)",((char*)(right_value86=string_to_string(come_value->c_value))),((char*)(right_value87=string_to_string(info->sname))),((char*)(right_value88=int_to_string(info->sline)))))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value86);
                            if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value86;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value87);
                            if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[3] = right_value87;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value88);
                            if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[4] = right_value88;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value89);
                            if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[5] = right_value89;
                            __freed_obj__ = 0;
                            __dec_obj38=come_value->c_value;
                            come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value90=buffer_to_string(buf2_73))));
                            if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value90);
                            if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[6] = right_value90;
                            __freed_obj__ = 0;
                            __dec_obj39=come_value->type;
                            come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value91=sType_clone(left_type))));
                            if(__dec_obj39) { come_call_finalizer(sType_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value91);
                            if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[7] = right_value91;
                            __freed_obj__ = 0;
                            come_value->var=((void*)0);
                            __dec_obj40=right_type2_66;
                            right_type2_66=(struct sType*)come_increment_ref_count(((struct sType*)(right_value92=sType_clone(left_type))));
                            if(__dec_obj40) { come_call_finalizer(sType_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value92);
                            if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[8] = right_value92;
                            __freed_obj__ = 0;
                            if(buf2_73 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf2_73, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                    }
                }
            }
            else {
                if(_if_conditional147=string_operator_equals(left_type->mClass->mName,"char")&&left_type->mPointerNum==1,                _if_conditional147) {
                    if(_if_conditional148=string_operator_equals(right_type2_66->mClass->mName,"char")&&right_type2_66->mPointerNum==1,                    _if_conditional148) {
                    }
                    else {
                        if(_if_conditional149=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_66->mClass->mName,"__builtin_va_list"),                        _if_conditional149) {
                        }
                        else {
                            if(_if_conditional150=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_66->mClass->mName,"va_list"),                            _if_conditional150) {
                            }
                            else {
                                if(_if_conditional151=string_operator_equals(right_type2_66->mClass->mName,"lambda"),                                _if_conditional151) {
                                    err_msg(info,"type error6");
                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                    printf("right type is %s pointer num %d\n",right_type2_66->mClass->mName,right_type2_66->mPointerNum);
                                    exit(2);
                                }
                                else {
                                    if(_if_conditional152=string_operator_equals(right_type2_66->mClass->mName,"void")&&right_type2_66->mPointerNum>0,                                    _if_conditional152) {
                                    }
                                    else {
                                        if(_if_conditional153=string_operator_equals(right_type2_66->mClass->mName,"void"),                                        _if_conditional153) {
                                            err_msg(info,"type error6");
                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                            printf("right type is %s pointer num %d\n",right_type2_66->mClass->mName,right_type2_66->mPointerNum);
                                            exit(2);
                                        }
                                        else {
                                            method_name_74=(char*)come_increment_ref_count(((char*)(right_value93=create_method_name(right_type2_66,(_Bool)0,"to_string",info))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
                                            if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value93;
                                            __freed_obj__ = 0;
                                            if(_if_conditional159=map$2charphsFunph_at(info->funcs,method_name_74,((void*)0))==((void*)0),                                            _if_conditional159) {
                                                obj_type_78=right_type2_66->mNoSolvedGenericsType->v1;
                                                if(_if_conditional160=obj_type_78&&list$1sTypeph_length(obj_type_78->mGenericsTypes)>0,                                                _if_conditional160) {
                                                    obj_type2_79=right_type2_66;
                                                    __dec_obj41=method_name_74;
                                                    method_name_74=(char*)come_increment_ref_count(((char*)(right_value96=make_generics_function(obj_type2_79,(char*)come_increment_ref_count(((char*)(right_value95=__builtin_string("to_string")))),info))));
                                                    if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0,0); }
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
                                                    if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { right_value95 = come_decrement_ref_count(right_value95, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value95;
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value96);
                                                    if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[1] = right_value96;
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    err_msg(info,"require to_string implementation(%s)",right_type2_66->mClass->mName);
                                                    exit(1);
                                                }
                                            }
                                            buf2_80=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value98=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value97=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 434, "struct buffer"))))))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value97);
                                            if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[1] = right_value97;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value98);
                                            if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[2] = right_value98;
                                            __freed_obj__ = 0;
                                            buffer_append_str(buf2_80,method_name_74);
                                            buffer_append_str(buf2_80,"(");
                                            buffer_append_str(buf2_80,come_value->c_value);
                                            buffer_append_str(buf2_80,")");
                                            type_81=(struct sType*)come_increment_ref_count(((struct sType*)(right_value100=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value99=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 441, "struct sType")))),"char*",(_Bool)0,info))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value99);
                                            if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[3] = right_value99;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value100);
                                            if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[4] = right_value100;
                                            __freed_obj__ = 0;
                                            type_81->mHeap=(_Bool)1;
                                            __dec_obj42=come_value->c_value;
                                            come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value102=append_object_to_right_values(((char*)(right_value101=buffer_to_string(buf2_80))),(struct sType*)come_increment_ref_count(type_81),info))));
                                            if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value101);
                                            if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { right_value101 = come_decrement_ref_count(right_value101, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[5] = right_value101;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value102);
                                            if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { right_value102 = come_decrement_ref_count(right_value102, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[6] = right_value102;
                                            __freed_obj__ = 0;
                                            __dec_obj43=come_value->type;
                                            come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value103=sType_clone(type_81))));
                                            if(__dec_obj43) { come_call_finalizer(sType_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value103);
                                            if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[7] = right_value103;
                                            __freed_obj__ = 0;
                                            come_value->var=((void*)0);
                                            __dec_obj44=right_type2_66;
                                            right_type2_66=(struct sType*)come_increment_ref_count(((struct sType*)(right_value104=sType_clone(type_81))));
                                            if(__dec_obj44) { come_call_finalizer(sType_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value104);
                                            if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[8] = right_value104;
                                            __freed_obj__ = 0;
                                            if(method_name_74 && !__freed_obj__) { method_name_74 = come_decrement_ref_count(method_name_74, (void*)0, (void*)0, 0, 0, 0); }
                                            if(buf2_80 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf2_80, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(type_81 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_81, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                else {
                    if(_if_conditional161=left_type->mPointerNum>0,                    _if_conditional161) {
                        if(_if_conditional162=right_type2_66->mPointerNum>0,                        _if_conditional162) {
                            if(_if_conditional163=string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_66->mClass->mName,"void"),                            _if_conditional163) {
                            }
                            else {
                                if(_if_conditional164=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_66->mClass->mName,"va_list"),                                _if_conditional164) {
                                }
                                else {
                                    if(_if_conditional165=string_operator_not_equals(left_type->mClass->mName,right_type2_66->mClass->mName),                                    _if_conditional165) {
                                        err_msg(info,"type error5");
                                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                        printf("right type is %s pointer num %d\n",right_type2_66->mClass->mName,right_type2_66->mPointerNum);
                                        exit(2);
                                    }
                                    else {
                                        if(_if_conditional166=left_type->mPointerNum!=right_type2_66->mPointerNum,                                        _if_conditional166) {
                                            printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                            printf("right type is %s pointer num %d\n",right_type2_66->mClass->mName,right_type2_66->mPointerNum);
                                        }
                                        else {
                                            if(_if_conditional167=list$1sNodeph_length(right_type2_66->mArrayNum)>0,                                            _if_conditional167) {
                                                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                                                printf("left type is %s pointer num %d array dimetion num %d\n",left_type->mClass->mName,left_type->mPointerNum,list$1sNodeph_length(left_type->mArrayNum));
                                                printf("right type is %s pointer num %d array dimetion num %d\n",right_type2_66->mClass->mName,right_type2_66->mPointerNum,list$1sNodeph_length(right_type2_66->mArrayNum));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        else {
                            if(_if_conditional168=string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_66->mClass->mName,"void"),                            _if_conditional168) {
                            }
                            else {
                                if(_if_conditional169=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_66->mClass->mName,"va_list"),                                _if_conditional169) {
                                }
                                else {
                                    if(_if_conditional170=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_66->mClass->mName,"__builtin_va_list"),                                    _if_conditional170) {
                                    }
                                    else {
                                        if(_if_conditional171=!(string_operator_equals(right_type2_66->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"))&&right_type2_66->mPointerNum==0,                                        _if_conditional171) {
                                            err_msg(info,"type error6");
                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                            printf("right type is %s pointer num %d\n",right_type2_66->mClass->mName,right_type2_66->mPointerNum);
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
    if(right_type2_66 && !__freed_obj__) { come_call_finalizer(sType_finalize,right_type2_66, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result48__ = self->len;
            return __result48__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional133;
struct list_item$1sTypeph* it_70;
int i_71;
_Bool _while_condtional24;
_Bool _if_conditional134;
struct sType* __result49__;
struct sType* default_value_72;
struct sType* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_70, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_71, 0, sizeof(int));
memset(&default_value_72, 0, sizeof(struct sType*));
                    if(_if_conditional133=position<0,                    _if_conditional133) {
                        position+=self->len;
                    }
                    it_70=self->head;
                    i_71=0;
                    while(_while_condtional24=it_70!=((void*)0),                    _while_condtional24) {
                        if(_if_conditional134=position==i_71,                        _if_conditional134) {
                            __result49__ = __result_obj__ = it_70->item;
                            return __result49__;
                        }
                        it_70=it_70->next;
                        i_71++;
                    }
                    memset(&default_value_72,0,sizeof(struct sType*));
                    __result50__ = __result_obj__ = default_value_72;
                    if(default_value_72 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_72, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result50__;
                    if(default_value_72 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_72, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_75;
unsigned int it_76;
_Bool _while_condtional25;
_Bool _if_conditional154;
void* right_value94;
_Bool _if_conditional156;
struct sFun* __result53__;
_Bool _if_conditional157;
_Bool _if_conditional158;
struct sFun* __result54__;
struct sFun* __result55__;
struct sFun* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_75, 0, sizeof(unsigned int));
memset(&it_76, 0, sizeof(unsigned int));
memset(&right_value94, 0, sizeof(void*));
                                                hash_75=string_get_hash_key(((char*)key))%self->size;
                                                it_76=hash_75;
                                                while(_while_condtional25=(_Bool)1,                                                _while_condtional25) {
                                                    if(_if_conditional154=self->item_existance[it_76],                                                    _if_conditional154) {
                                                        if(_if_conditional156=optional$2boolbool_value(((struct optional$2boolbool*)(right_value94=string_equals(self->keys[it_76],key)))),                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94),
                                                        (right_value94 && right_value94 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                        __right_value_freed_obj[0] = right_value94, 
                                                        __freed_obj__ = 0, 
                                                        _if_conditional156) {
                                                            __result53__ = __result_obj__ = self->items[it_76];
                                                            return __result53__;
                                                        }
                                                        it_76++;
                                                        if(_if_conditional157=it_76>=self->size,                                                        _if_conditional157) {
                                                            it_76=0;
                                                        }
                                                        else {
                                                            if(_if_conditional158=it_76==hash_75,                                                            _if_conditional158) {
                                                                __result54__ = __result_obj__ = default_value;
                                                                return __result54__;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        __result55__ = __result_obj__ = default_value;
                                                        return __result55__;
                                                    }
                                                }
                                                __result56__ = __result_obj__ = default_value;
                                                return __result56__;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional155;
_Bool default_value_77;
_Bool __result51__;
_Bool __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_77, 0, sizeof(_Bool));
                                                            if(_if_conditional155=self==((void*)0),                                                            _if_conditional155) {
                                                                memset(&default_value_77,0,sizeof(_Bool));
                                                                __result51__ = default_value_77;
                                                                return __result51__;
                                                            }
                                                            else {
                                                                __result52__ = self->v1;
                                                                return __result52__;
                                                            }
}

static void optional$2boolboolp_finalize(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                __result57__ = self->len;
                                                return __result57__;
}

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value105;
struct sType* result_type_82;
_Bool _if_conditional172;
char* var_name_83;
char* p_84;
int sline_85;
_Bool _if_conditional173;
void* right_value106;
char* word_86;
_Bool _if_conditional174;
_Bool between_brace_87;
char* p_88;
int sline_89;
_Bool _if_conditional175;
_Bool _if_conditional176;
void* right_value107;
char* word_90;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _while_condtional26;
char* p_91;
int sline_92;
_Bool _if_conditional180;
void* right_value108;
char* word_93;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool _if_conditional183;
void* right_value109;
char* __dec_obj45;
static int num_anonymous_var_name_94=0;
void* right_value110;
char* __dec_obj46;
_Bool _if_conditional184;
_Bool _if_conditional185;
_Bool no_comma_95;
void* right_value111;
struct sNode* node_96;
struct sNode* __dec_obj47;
_Bool _while_condtional27;
char* p_97;
int sline_98;
_Bool _if_conditional186;
void* right_value112;
char* word_99;
_Bool _if_conditional187;
_Bool _if_conditional188;
void* right_value113;
struct sNode* node_100;
void* right_value117;
void* right_value120;
struct tuple2$2sTypephcharph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value105, 0, sizeof(void*));
memset(&result_type_82, 0, sizeof(struct sType*));
memset(&var_name_83, 0, sizeof(char*));
memset(&p_84, 0, sizeof(char*));
memset(&sline_85, 0, sizeof(int));
memset(&right_value106, 0, sizeof(void*));
memset(&word_86, 0, sizeof(char*));
memset(&between_brace_87, 0, sizeof(_Bool));
memset(&p_88, 0, sizeof(char*));
memset(&sline_89, 0, sizeof(int));
memset(&right_value107, 0, sizeof(void*));
memset(&word_90, 0, sizeof(char*));
memset(&p_91, 0, sizeof(char*));
memset(&sline_92, 0, sizeof(int));
memset(&right_value108, 0, sizeof(void*));
memset(&word_93, 0, sizeof(char*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&no_comma_95, 0, sizeof(_Bool));
memset(&right_value111, 0, sizeof(void*));
memset(&node_96, 0, sizeof(struct sNode*));
memset(&p_97, 0, sizeof(char*));
memset(&sline_98, 0, sizeof(int));
memset(&right_value112, 0, sizeof(void*));
memset(&word_99, 0, sizeof(char*));
memset(&right_value113, 0, sizeof(void*));
memset(&node_100, 0, sizeof(struct sNode*));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
    result_type_82=(struct sType*)come_increment_ref_count(((struct sType*)(right_value105=sType_clone(base_type_name))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
    if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value105;
    __freed_obj__ = 0;
    if(_if_conditional172=!first,    _if_conditional172) {
        result_type_82->mPointerNum=0;
    }
    var_name_83=((void*)0);
    {
        p_84=info->p;
        sline_85=info->sline;
        if(_if_conditional173=xisalpha(*info->p)||*info->p==95,        _if_conditional173) {
            word_86=(char*)come_increment_ref_count(((char*)(right_value106=parse_word(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
            if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value106;
            __freed_obj__ = 0;
            if(_if_conditional174=string_operator_equals(word_86,"const")||string_operator_equals(word_86,"__restrict")||string_operator_equals(word_86,"restrict")||string_operator_equals(word_86,"__user")||string_operator_equals(word_86,"volatile")||string_operator_equals(word_86,"_Nonnull")||string_operator_equals(word_86,"_Nullable")||string_operator_equals(word_86,"_Null_unspecified")||string_operator_equals(word_86,"__user"),            _if_conditional174) {
            }
            else {
                info->p=p_84;
                info->sline=sline_85;
            }
            if(word_86 && !__freed_obj__) { word_86 = come_decrement_ref_count(word_86, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            info->p=p_84;
            info->sline=sline_85;
        }
    }
    between_brace_87=(_Bool)0;
    {
        p_88=info->p;
        sline_89=info->sline;
        if(_if_conditional175=*info->p==40,        _if_conditional175) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional176=xisalpha(*info->p)||*info->p==95,            _if_conditional176) {
                word_90=(char*)come_increment_ref_count(((char*)(right_value107=parse_word(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
                if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { right_value107 = come_decrement_ref_count(right_value107, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value107;
                __freed_obj__ = 0;
                if(_if_conditional177=is_type_name(word_90,info),                _if_conditional177) {
                }
                else {
                    if(_if_conditional178=*info->p==41,                    _if_conditional178) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(_if_conditional179=*info->p!=40,                        _if_conditional179) {
                            between_brace_87=(_Bool)1;
                        }
                    }
                }
                if(word_90 && !__freed_obj__) { word_90 = come_decrement_ref_count(word_90, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        info->p=p_88;
        info->sline=sline_89;
    }
    parse_sharp_v5(info);
    while(_while_condtional26=*info->p==42,    _while_condtional26) {
        info->p++;
        skip_spaces_and_lf(info);
        {
            p_91=info->p;
            sline_92=info->sline;
            if(_if_conditional180=xisalpha(*info->p)||*info->p==95,            _if_conditional180) {
                word_93=(char*)come_increment_ref_count(((char*)(right_value108=parse_word(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value108);
                if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value108;
                __freed_obj__ = 0;
                if(_if_conditional181=string_operator_equals(word_93,"const")||string_operator_equals(word_93,"__restrict")||string_operator_equals(word_93,"restrict")||string_operator_equals(word_93,"__user")||string_operator_equals(word_93,"volatile")||string_operator_equals(word_93,"_Nonnull")||string_operator_equals(word_93,"_Nullable")||string_operator_equals(word_93,"_Null_unspecified")||string_operator_equals(word_93,"__user"),                _if_conditional181) {
                }
                else {
                    info->p=p_91;
                    info->sline=sline_92;
                }
                if(word_93 && !__freed_obj__) { word_93 = come_decrement_ref_count(word_93, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                info->p=p_91;
                info->sline=sline_92;
            }
        }
        result_type_82->mPointerNum++;
    }
    parse_sharp_v5(info);
    if(_if_conditional182=between_brace_87&&*info->p==40,    _if_conditional182) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(_if_conditional183=xisalnum(*info->p)||*info->p==95,    _if_conditional183) {
        __dec_obj45=var_name_83;
        var_name_83=(char*)come_increment_ref_count(((char*)(right_value109=parse_word(info))));
        if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
        if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { right_value109 = come_decrement_ref_count(right_value109, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value109;
        __freed_obj__ = 0;
    }
    else {
        num_anonymous_var_name_94++;
        __dec_obj46=var_name_83;
        var_name_83=(char*)come_increment_ref_count(((char*)(right_value110=xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name_94))));
        if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value110);
        if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { right_value110 = come_decrement_ref_count(right_value110, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value110;
        __freed_obj__ = 0;
    }
    if(_if_conditional184=between_brace_87&&*info->p==41,    _if_conditional184) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(_if_conditional185=*info->p==58,    _if_conditional185) {
        info->p++;
        skip_spaces_and_lf(info);
        no_comma_95=info->no_comma;
        info->no_comma=(_Bool)1;
        node_96=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value111=expression_v13(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value111);
        if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { right_value111 = come_decrement_ref_count(right_value111, ((struct sNode*)right_value111)->finalize, ((struct sNode*)right_value111)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[0] = right_value111;
        __freed_obj__ = 0;
        info->no_comma=no_comma_95;
        __dec_obj47=result_type_82->mSizeNum;
        result_type_82->mSizeNum=(struct sNode*)come_increment_ref_count(node_96);
        if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0); }
        if(node_96 && !__freed_obj__) { node_96 = come_decrement_ref_count(node_96, ((struct sNode*)node_96)->finalize, ((struct sNode*)node_96)->_protocol_obj, 0, 0, 0); } 
    }
    while(_while_condtional27=*info->p==91,    _while_condtional27) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        {
            p_97=info->p;
            sline_98=info->sline;
            if(_if_conditional186=xisalpha(*info->p)||*info->p==95,            _if_conditional186) {
                word_99=(char*)come_increment_ref_count(((char*)(right_value112=parse_word(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value112);
                if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { right_value112 = come_decrement_ref_count(right_value112, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value112;
                __freed_obj__ = 0;
                if(_if_conditional187=string_operator_equals(word_99,"const")||string_operator_equals(word_99,"__restrict")||string_operator_equals(word_99,"restrict")||string_operator_equals(word_99,"__user")||string_operator_equals(word_99,"volatile")||string_operator_equals(word_99,"_Nonnull")||string_operator_equals(word_99,"_Nullable")||string_operator_equals(word_99,"_Null_unspecified")||string_operator_equals(word_99,"__user"),                _if_conditional187) {
                }
                else {
                    info->p=p_97;
                    info->sline=sline_98;
                }
                if(word_99 && !__freed_obj__) { word_99 = come_decrement_ref_count(word_99, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                info->p=p_97;
                info->sline=sline_98;
            }
        }
        if(_if_conditional188=*info->p==93,        _if_conditional188) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_82->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_100=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value113=expression_v13(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
        if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { right_value113 = come_decrement_ref_count(right_value113, ((struct sNode*)right_value113)->finalize, ((struct sNode*)right_value113)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[0] = right_value113;
        __freed_obj__ = 0;
        list$1sNodeph_push_back(result_type_82->mArrayNum,(struct sNode*)come_increment_ref_count(node_100));
        parse_sharp_v5(info);
        expected_next_character(93,info);
        if(node_100 && !__freed_obj__) { node_100 = come_decrement_ref_count(node_100, ((struct sNode*)node_100)->finalize, ((struct sNode*)node_100)->_protocol_obj, 0, 0, 0); } 
    }
    __result60__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value120=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value117=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "05function4.c", 647, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(result_type_82),(char*)come_increment_ref_count(var_name_83))));
    if(base_type_name && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_name, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(result_type_82 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_82, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_83 && !__freed_obj__) { var_name_83 = come_decrement_ref_count(var_name_83, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value117);
    if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value117;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value120);
    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value120;
    __freed_obj__ = 0;
    return __result60__;
    if(base_type_name && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_name, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(result_type_82 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_82, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_83 && !__freed_obj__) { var_name_83 = come_decrement_ref_count(var_name_83, (void*)0, (void*)0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional189;
void* right_value114;
struct list_item$1sNodeph* litem_101;
struct sNode* __dec_obj48;
_Bool _if_conditional190;
void* right_value115;
struct list_item$1sNodeph* litem_102;
struct sNode* __dec_obj49;
void* right_value116;
struct list_item$1sNodeph* litem_103;
struct sNode* __dec_obj50;
struct list$1sNodeph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value114, 0, sizeof(void*));
memset(&litem_101, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value115, 0, sizeof(void*));
memset(&litem_102, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value116, 0, sizeof(void*));
memset(&litem_103, 0, sizeof(struct list_item$1sNodeph*));
            if(_if_conditional189=self->len==0,            _if_conditional189) {
                litem_101=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value114=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 282, "struct list_item$1sNodeph"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value114);
                if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value114;
                __freed_obj__ = 0;
                litem_101->prev=((void*)0);
                litem_101->next=((void*)0);
                __dec_obj48=litem_101->item;
                litem_101->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0); }
                self->tail=litem_101;
                self->head=litem_101;
            }
            else {
                if(_if_conditional190=self->len==1,                _if_conditional190) {
                    litem_102=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value115=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 292, "struct list_item$1sNodeph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
                    if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value115;
                    __freed_obj__ = 0;
                    litem_102->prev=self->head;
                    litem_102->next=((void*)0);
                    __dec_obj49=litem_102->item;
                    litem_102->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0); }
                    self->tail=litem_102;
                    self->head->next=litem_102;
                }
                else {
                    litem_103=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value116=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 302, "struct list_item$1sNodeph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value116);
                    if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value116;
                    __freed_obj__ = 0;
                    litem_103->prev=self->tail;
                    litem_103->next=((void*)0);
                    __dec_obj50=litem_103->item;
                    litem_103->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0); }
                    self->tail->next=litem_103;
                    self->tail=litem_103;
                }
            }
            self->len++;
            __result58__ = __result_obj__ = self;
            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
            return __result58__;
            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value118;
struct sType* __dec_obj51;
void* right_value119;
char* __dec_obj52;
struct tuple2$2sTypephcharph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
        __dec_obj51=self->v1;
        self->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value118=sType_clone(v1))));
        if(__dec_obj51) { come_call_finalizer(sType_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
        if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value118;
        __freed_obj__ = 0;
        __dec_obj52=self->v2;
        self->v2=(char*)come_increment_ref_count(((char*)(right_value119=string_clone(v2))));
        if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value119);
        if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { right_value119 = come_decrement_ref_count(right_value119, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value119;
        __freed_obj__ = 0;
        __result59__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
        return __result59__;
        if(self && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional191;
_Bool _if_conditional192;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional191=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional191) {
                if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional192=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional192) {
                if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
            }
}

void skip_pointer_attribute(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* p_104;
int sline_105;
_Bool _if_conditional193;
void* right_value121;
char* word_106;
_Bool _if_conditional194;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&p_104, 0, sizeof(char*));
memset(&sline_105, 0, sizeof(int));
memset(&right_value121, 0, sizeof(void*));
memset(&word_106, 0, sizeof(char*));
    p_104=info->p;
    sline_105=info->sline;
    if(_if_conditional193=xisalpha(*info->p)||*info->p==95,    _if_conditional193) {
        word_106=(char*)come_increment_ref_count(((char*)(right_value121=parse_word(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value121);
        if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { right_value121 = come_decrement_ref_count(right_value121, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value121;
        __freed_obj__ = 0;
        if(_if_conditional194=string_operator_equals(word_106,"const")||string_operator_equals(word_106,"__restrict")||string_operator_equals(word_106,"restrict")||string_operator_equals(word_106,"__user")||string_operator_equals(word_106,"volatile")||string_operator_equals(word_106,"_Nonnull")||string_operator_equals(word_106,"_Nullable")||string_operator_equals(word_106,"_Null_unspecified")||string_operator_equals(word_106,"__user"),        _if_conditional194) {
        }
        else {
            info->p=p_104;
            info->sline=sline_105;
        }
        if(word_106 && !__freed_obj__) { word_106 = come_decrement_ref_count(word_106, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        info->p=p_104;
        info->sline=sline_105;
    }
}

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* head_107;
int head_sline_108;
void* right_value122;
char* type_name_109;
_Bool _while_condtional28;
void* right_value123;
char* __dec_obj53;
_Bool constant_110;
_Bool static__111;
_Bool exception__112;
_Bool volatile__113;
_Bool register__114;
_Bool unsigned__115;
_Bool long__116;
_Bool long_long_117;
_Bool short__118;
_Bool restrict__119;
_Bool struct__120;
_Bool union__121;
_Bool enum__122;
_Bool no_heap_123;
_Bool extern__124;
_Bool inline__125;
_Bool come_mem_core__126;
struct sNode* alignas__127;
_Bool anonymous_type_128;
_Bool anonymous_name_129;
_Bool _while_condtional29;
_Bool _if_conditional195;
_Bool _if_conditional196;
char* p_130;
int sline_131;
void* right_value124;
_Bool _if_conditional197;
void* right_value125;
char* __dec_obj54;
void* right_value126;
char* __dec_obj55;
void* right_value127;
char* __dec_obj56;
_Bool _if_conditional198;
char* p_132;
int sline_133;
_Bool _while_condtional30;
_Bool _if_conditional199;
_Bool _if_conditional200;
_Bool _if_conditional201;
void* right_value128;
void* right_value131;
struct tuple3$3sTypephcharphbool* __result62__;
_Bool _if_conditional202;
char* p_134;
int sline_135;
void* right_value132;
_Bool _if_conditional203;
void* right_value133;
void* right_value134;
struct tuple3$3sTypephcharphbool* __result63__;
_Bool _if_conditional204;
_Bool _if_conditional205;
char* p_136;
int sline_137;
void* right_value135;
_Bool _if_conditional206;
void* right_value136;
char* __dec_obj59;
void* right_value137;
char* __dec_obj60;
void* right_value138;
char* __dec_obj61;
_Bool _if_conditional207;
char* p_138;
int sline_139;
void* right_value139;
_Bool _if_conditional208;
void* right_value140;
void* right_value141;
struct tuple3$3sTypephcharphbool* __result64__;
_Bool _if_conditional209;
_Bool _if_conditional210;
char* p_140;
int sline_141;
void* right_value142;
_Bool _if_conditional211;
void* right_value143;
void* right_value144;
struct tuple3$3sTypephcharphbool* __result65__;
void* right_value145;
char* __dec_obj62;
void* right_value146;
char* __dec_obj63;
_Bool _if_conditional212;
char* p_142;
int sline_143;
void* right_value147;
_Bool _if_conditional213;
void* right_value148;
void* right_value149;
struct tuple3$3sTypephcharphbool* __result66__;
_Bool _if_conditional214;
void* right_value150;
struct sNode* exp_144;
struct sNode* __dec_obj64;
void* right_value151;
char* __dec_obj65;
_Bool _if_conditional215;
void* right_value152;
char* __dec_obj66;
_Bool _if_conditional216;
void* right_value153;
char* __dec_obj67;
_Bool _if_conditional217;
void* right_value154;
char* __dec_obj68;
_Bool _if_conditional218;
void* right_value155;
char* __dec_obj69;
_Bool _if_conditional219;
void* right_value156;
char* __dec_obj70;
_Bool _if_conditional220;
void* right_value157;
char* __dec_obj71;
_Bool _if_conditional221;
void* right_value158;
char* __dec_obj72;
_Bool _if_conditional222;
void* right_value159;
char* __dec_obj73;
_Bool _if_conditional223;
char* p_145;
int sline_146;
_Bool _if_conditional224;
void* right_value160;
char* __dec_obj74;
void* right_value161;
char* __dec_obj75;
_Bool _if_conditional225;
void* right_value162;
char* __dec_obj76;
_Bool _if_conditional226;
_Bool _if_conditional227;
_Bool _if_conditional228;
void* right_value163;
char* __dec_obj77;
_Bool _if_conditional229;
_Bool _if_conditional230;
void* right_value164;
char* __dec_obj78;
_Bool _if_conditional231;
_Bool _if_conditional232;
void* right_value165;
char* __dec_obj79;
_Bool _if_conditional233;
_Bool _if_conditional234;
char* p_147;
int sline_148;
void* right_value166;
char* __dec_obj80;
_Bool _if_conditional235;
_Bool _if_conditional236;
char* p_149;
int sline_150;
void* right_value167;
char* __dec_obj81;
_Bool _if_conditional237;
void* right_value168;
char* __dec_obj82;
void* right_value169;
char* __dec_obj83;
_Bool _if_conditional238;
_Bool _if_conditional239;
char* p_151;
int sline_152;
void* right_value170;
char* __dec_obj84;
_Bool _if_conditional240;
void* right_value171;
char* __dec_obj85;
void* right_value172;
char* __dec_obj86;
_Bool _if_conditional241;
void* right_value173;
char* __dec_obj87;
void* right_value174;
char* __dec_obj88;
_Bool _if_conditional242;
void* right_value175;
char* __dec_obj89;
_Bool _if_conditional243;
void* right_value176;
char* __dec_obj90;
_Bool _if_conditional244;
void* right_value177;
char* __dec_obj91;
_Bool _if_conditional245;
void* right_value178;
char* __dec_obj92;
_Bool _if_conditional246;
_Bool _if_conditional247;
_Bool _if_conditional248;
char* p_153;
int sline_154;
void* right_value179;
char* __dec_obj93;
_Bool _if_conditional249;
_Bool _if_conditional250;
_Bool _if_conditional251;
void* right_value180;
char* __dec_obj94;
int pointer_num_155;
_Bool _while_condtional31;
_Bool lambda_flag_156;
char* pX_157;
int slineX_158;
_Bool _if_conditional252;
void* right_value181;
_Bool _if_conditional253;
struct sType* type_159;
char* var_name_160;
_Bool function_pointer_flag_161;
char* p_162;
int sline_163;
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool _if_conditional256;
void* right_value182;
char* word_164;
_Bool _if_conditional257;
_Bool _if_conditional258;
_Bool var_name_between_brace_165;
char* p_166;
int sline_167;
_Bool _if_conditional259;
_Bool _if_conditional260;
void* right_value183;
char* word_168;
_Bool _if_conditional261;
_Bool _if_conditional262;
_Bool _if_conditional263;
_Bool _if_conditional264;
static int anonymous_num_169=0;
_Bool _if_conditional265;
_Bool _if_conditional266;
void* right_value184;
char* __dec_obj95;
void* right_value185;
struct sNode* node_170;
_Bool _if_conditional267;
void* right_value186;
void* right_value187;
struct tuple3$3sTypephcharphbool* __result67__;
int pointer_num_171;
_Bool _while_condtional32;
void* right_value188;
void* right_value189;
struct sType* __dec_obj96;
_Bool _if_conditional268;
_Bool _if_conditional269;
void* right_value190;
char* __dec_obj97;
void* right_value191;
struct sNode* node_172;
_Bool _if_conditional270;
_Bool _if_conditional271;
void* right_value192;
void* right_value193;
struct tuple3$3sTypephcharphbool* __result68__;
void* right_value194;
void* right_value195;
struct sType* __dec_obj98;
_Bool _if_conditional272;
_Bool _if_conditional273;
void* right_value196;
char* __dec_obj99;
void* right_value197;
struct sNode* node_173;
_Bool _if_conditional274;
void* right_value198;
void* right_value199;
struct tuple3$3sTypephcharphbool* __result69__;
int pointer_num_174;
_Bool _while_condtional33;
void* right_value200;
void* right_value201;
struct sType* __dec_obj100;
void* right_value202;
void* right_value203;
struct tuple3$3sTypephcharphbool* __result70__;
_Bool _if_conditional275;
_Bool _if_conditional276;
_Bool _if_conditional277;
void* right_value204;
char* __dec_obj101;
_Bool _if_conditional278;
static int num_anonymous_var_name_175=0;
void* right_value205;
char* __dec_obj102;
_Bool _if_conditional279;
void* right_value206;
char* __dec_obj103;
static int num_anonymous_var_name_176=0;
void* right_value207;
char* __dec_obj104;
_Bool _if_conditional280;
_Bool _if_conditional281;
_Bool no_comma_177;
void* right_value208;
struct sNode* node_178;
struct sNode* __dec_obj105;
_Bool _if_conditional282;
struct sType* result_type_179;
_Bool _if_conditional287;
void* right_value212;
struct sType* __dec_obj106;
_Bool _if_conditional293;
int i_188;
_Bool _for_condtionalA4;
_Bool _if_conditional296;
void* right_value213;
void* right_value214;
void* right_value215;
struct sType* __dec_obj107;
void* right_value216;
void* right_value217;
struct sType* __dec_obj108;
struct sNode* __dec_obj109;
void* right_value218;
char* __dec_obj110;
void* right_value219;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var2;
struct list$1sTypeph* param_types_192;
struct list$1charph* param_names_193;
struct list$1charph* param_default_parametors_194;
_Bool var_args_195;
void* right_value220;
void* right_value221;
struct sType* __dec_obj111;
void* right_value222;
void* right_value224;
struct tuple1$1sTypeph* __dec_obj113;
struct list$1sTypeph* __dec_obj114;
struct list$1charph* __dec_obj115;
_Bool _if_conditional297;
_Bool _if_conditional298;
struct sType* result_type_196;
_Bool _if_conditional299;
void* right_value225;
struct sType* __dec_obj116;
_Bool _if_conditional300;
int i_197;
_Bool _for_condtionalA5;
_Bool _if_conditional301;
void* right_value226;
void* right_value227;
void* right_value228;
struct sType* __dec_obj117;
void* right_value229;
void* right_value230;
struct sType* __dec_obj118;
struct sNode* __dec_obj119;
_Bool _if_conditional302;
void* right_value231;
char* __dec_obj120;
_Bool _if_conditional303;
void* right_value232;
void* right_value233;
struct tuple3$3sTypephcharphbool* __result89__;
static int num_anonymous_var_name_198=0;
void* right_value234;
char* __dec_obj121;
void* right_value235;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var3;
struct list$1sTypeph* param_types_199;
struct list$1charph* param_names_200;
struct list$1charph* param_default_parametors_201;
_Bool var_args_202;
void* right_value236;
void* right_value237;
struct sType* __dec_obj122;
void* right_value238;
void* right_value239;
struct tuple1$1sTypeph* __dec_obj123;
struct list$1sTypeph* __dec_obj124;
struct list$1charph* __dec_obj125;
_Bool _if_conditional304;
void* right_value240;
struct sNode* exp_203;
_Bool _if_conditional305;
void* right_value241;
void* right_value242;
struct tuple3$3sTypephcharphbool* __result91__;
void* right_value243;
struct CVALUE* come_value_204;
void* right_value244;
struct sType* __dec_obj126;
_Bool _if_conditional308;
_Bool _if_conditional309;
_Bool _if_conditional310;
void* right_value245;
char* __dec_obj127;
_Bool _if_conditional311;
static int num_anonymous_var_name_205=0;
void* right_value246;
char* __dec_obj128;
_Bool _if_conditional312;
void* right_value247;
char* __dec_obj129;
static int num_anonymous_var_name_206=0;
void* right_value248;
char* __dec_obj130;
_Bool _if_conditional313;
_Bool _if_conditional314;
_Bool no_comma_207;
void* right_value249;
struct sNode* node_208;
struct sNode* __dec_obj131;
_Bool _if_conditional315;
void* right_value250;
struct sType* __dec_obj132;
void* right_value251;
char* __dec_obj133;
struct sNode* __dec_obj134;
_Bool _if_conditional316;
int i_209;
_Bool _for_condtionalA6;
_Bool _if_conditional317;
void* right_value252;
void* right_value253;
void* right_value254;
struct sType* __dec_obj135;
struct sNode* __dec_obj136;
_Bool _if_conditional318;
_Bool _if_conditional323;
void* right_value258;
void* right_value259;
struct tuple3$3sTypephcharphbool* __result97__;
void* right_value260;
void* right_value261;
struct sType* __dec_obj137;
_Bool _while_condtional37;
void* right_value262;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* generics_type_213;
char* var_name_214;
_Bool err_215;
_Bool _if_conditional324;
void* right_value263;
void* right_value264;
struct tuple3$3sTypephcharphbool* __result98__;
_Bool _if_conditional325;
_Bool _if_conditional326;
void* right_value265;
void* right_value266;
struct tuple3$3sTypephcharphbool* __result99__;
_Bool _if_conditional327;
void* right_value267;
struct sType* __dec_obj138;
_Bool _if_conditional328;
void* right_value268;
char* new_name_216;
struct sNode* __dec_obj139;
_Bool _if_conditional329;
struct sClass* klass_217;
_Bool _if_conditional330;
void* right_value279;
void* right_value280;
void* right_value281;
void* right_value282;
struct sType* __dec_obj140;
struct sNode* __dec_obj141;
_Bool _while_condtional47;
_Bool _if_conditional384;
_Bool _if_conditional385;
_Bool _if_conditional386;
_Bool _if_conditional387;
_Bool _if_conditional388;
_Bool _if_conditional389;
_Bool _if_conditional390;
_Bool _while_condtional48;
_Bool _if_conditional391;
_Bool _if_conditional392;
void* right_value283;
void* right_value284;
struct list$1sTypeph* types_264;
void* right_value285;
_Bool _while_condtional49;
void* right_value286;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* type2_265;
char* name_266;
_Bool err_267;
_Bool _if_conditional393;
void* right_value287;
void* right_value288;
struct tuple3$3sTypephcharphbool* __result124__;
void* right_value289;
int num_tuples_268;
void* right_value290;
void* right_value291;
void* right_value292;
struct sType* __dec_obj142;
struct list$1sTypeph* o2_saved_269;
struct sType* it_270;
_Bool _for_condtionalA9;
void* right_value293;
_Bool _if_conditional394;
void* right_value294;
struct sType* __dec_obj143;
_Bool _if_conditional395;
void* right_value295;
char* new_name_271;
_Bool _if_conditional396;
_Bool _if_conditional397;
_Bool _if_conditional398;
void* right_value296;
char* __dec_obj144;
_Bool _if_conditional399;
static int num_anonymous_var_name_272=0;
void* right_value297;
char* __dec_obj145;
_Bool _if_conditional400;
void* right_value298;
char* __dec_obj146;
static int num_anonymous_var_name_273=0;
void* right_value299;
char* __dec_obj147;
_Bool _if_conditional401;
_Bool _if_conditional402;
_Bool no_comma_274;
void* right_value300;
struct sNode* node_275;
struct sNode* __dec_obj148;
_Bool _while_condtional50;
_Bool _if_conditional403;
void* right_value301;
struct sNode* node_276;
void* right_value302;
char* asm_name_277;
char* __dec_obj149;
_Bool _if_conditional404;
void* right_value303;
void* right_value304;
struct sType* type2_278;
void* right_value305;
void* right_value306;
_Bool _if_conditional405;
_Bool _if_conditional406;
void* right_value307;
void* right_value308;
struct tuple3$3sTypephcharphbool* __result125__;
void* right_value309;
void* right_value310;
struct tuple3$3sTypephcharphbool* __result126__;
void* right_value311;
void* right_value312;
struct tuple3$3sTypephcharphbool* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&head_107, 0, sizeof(char*));
memset(&head_sline_108, 0, sizeof(int));
memset(&right_value122, 0, sizeof(void*));
memset(&type_name_109, 0, sizeof(char*));
memset(&right_value123, 0, sizeof(void*));
memset(&constant_110, 0, sizeof(_Bool));
memset(&static__111, 0, sizeof(_Bool));
memset(&exception__112, 0, sizeof(_Bool));
memset(&volatile__113, 0, sizeof(_Bool));
memset(&register__114, 0, sizeof(_Bool));
memset(&unsigned__115, 0, sizeof(_Bool));
memset(&long__116, 0, sizeof(_Bool));
memset(&long_long_117, 0, sizeof(_Bool));
memset(&short__118, 0, sizeof(_Bool));
memset(&restrict__119, 0, sizeof(_Bool));
memset(&struct__120, 0, sizeof(_Bool));
memset(&union__121, 0, sizeof(_Bool));
memset(&enum__122, 0, sizeof(_Bool));
memset(&no_heap_123, 0, sizeof(_Bool));
memset(&extern__124, 0, sizeof(_Bool));
memset(&inline__125, 0, sizeof(_Bool));
memset(&come_mem_core__126, 0, sizeof(_Bool));
memset(&alignas__127, 0, sizeof(struct sNode*));
memset(&anonymous_type_128, 0, sizeof(_Bool));
memset(&anonymous_name_129, 0, sizeof(_Bool));
memset(&p_130, 0, sizeof(char*));
memset(&sline_131, 0, sizeof(int));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&right_value126, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
memset(&p_132, 0, sizeof(char*));
memset(&sline_133, 0, sizeof(int));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
memset(&p_134, 0, sizeof(char*));
memset(&sline_135, 0, sizeof(int));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&p_136, 0, sizeof(char*));
memset(&sline_137, 0, sizeof(int));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&p_138, 0, sizeof(char*));
memset(&sline_139, 0, sizeof(int));
memset(&right_value139, 0, sizeof(void*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&p_140, 0, sizeof(char*));
memset(&sline_141, 0, sizeof(int));
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&p_142, 0, sizeof(char*));
memset(&sline_143, 0, sizeof(int));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&exp_144, 0, sizeof(struct sNode*));
memset(&right_value151, 0, sizeof(void*));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&p_145, 0, sizeof(char*));
memset(&sline_146, 0, sizeof(int));
memset(&right_value160, 0, sizeof(void*));
memset(&right_value161, 0, sizeof(void*));
memset(&right_value162, 0, sizeof(void*));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&p_147, 0, sizeof(char*));
memset(&sline_148, 0, sizeof(int));
memset(&right_value166, 0, sizeof(void*));
memset(&p_149, 0, sizeof(char*));
memset(&sline_150, 0, sizeof(int));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
memset(&p_151, 0, sizeof(char*));
memset(&sline_152, 0, sizeof(int));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
memset(&p_153, 0, sizeof(char*));
memset(&sline_154, 0, sizeof(int));
memset(&right_value179, 0, sizeof(void*));
memset(&right_value180, 0, sizeof(void*));
memset(&pointer_num_155, 0, sizeof(int));
memset(&lambda_flag_156, 0, sizeof(_Bool));
memset(&pX_157, 0, sizeof(char*));
memset(&slineX_158, 0, sizeof(int));
memset(&right_value181, 0, sizeof(void*));
memset(&type_159, 0, sizeof(struct sType*));
memset(&var_name_160, 0, sizeof(char*));
memset(&function_pointer_flag_161, 0, sizeof(_Bool));
memset(&p_162, 0, sizeof(char*));
memset(&sline_163, 0, sizeof(int));
memset(&right_value182, 0, sizeof(void*));
memset(&word_164, 0, sizeof(char*));
memset(&var_name_between_brace_165, 0, sizeof(_Bool));
memset(&p_166, 0, sizeof(char*));
memset(&sline_167, 0, sizeof(int));
memset(&right_value183, 0, sizeof(void*));
memset(&word_168, 0, sizeof(char*));
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
memset(&node_170, 0, sizeof(struct sNode*));
memset(&right_value186, 0, sizeof(void*));
memset(&right_value187, 0, sizeof(void*));
memset(&pointer_num_171, 0, sizeof(int));
memset(&right_value188, 0, sizeof(void*));
memset(&right_value189, 0, sizeof(void*));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
memset(&node_172, 0, sizeof(struct sNode*));
memset(&right_value192, 0, sizeof(void*));
memset(&right_value193, 0, sizeof(void*));
memset(&right_value194, 0, sizeof(void*));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
memset(&node_173, 0, sizeof(struct sNode*));
memset(&right_value198, 0, sizeof(void*));
memset(&right_value199, 0, sizeof(void*));
memset(&pointer_num_174, 0, sizeof(int));
memset(&right_value200, 0, sizeof(void*));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
memset(&right_value207, 0, sizeof(void*));
memset(&no_comma_177, 0, sizeof(_Bool));
memset(&right_value208, 0, sizeof(void*));
memset(&node_178, 0, sizeof(struct sNode*));
memset(&result_type_179, 0, sizeof(struct sType*));
memset(&right_value212, 0, sizeof(void*));
memset(&i_188, 0, sizeof(int));
memset(&right_value213, 0, sizeof(void*));
memset(&right_value214, 0, sizeof(void*));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
memset(&right_value217, 0, sizeof(void*));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
memset(&param_types_192, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_193, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_194, 0, sizeof(struct list$1charph*));
memset(&var_args_195, 0, sizeof(_Bool));
memset(&param_types_192, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_193, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_194, 0, sizeof(struct list$1charph*));
memset(&var_args_195, 0, sizeof(_Bool));
memset(&right_value220, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
memset(&right_value222, 0, sizeof(void*));
memset(&right_value224, 0, sizeof(void*));
memset(&result_type_196, 0, sizeof(struct sType*));
memset(&right_value225, 0, sizeof(void*));
memset(&i_197, 0, sizeof(int));
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
memset(&right_value228, 0, sizeof(void*));
memset(&right_value229, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
memset(&right_value231, 0, sizeof(void*));
memset(&right_value232, 0, sizeof(void*));
memset(&right_value233, 0, sizeof(void*));
memset(&right_value234, 0, sizeof(void*));
memset(&right_value235, 0, sizeof(void*));
memset(&param_types_199, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_200, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_201, 0, sizeof(struct list$1charph*));
memset(&var_args_202, 0, sizeof(_Bool));
memset(&param_types_199, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_200, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_201, 0, sizeof(struct list$1charph*));
memset(&var_args_202, 0, sizeof(_Bool));
memset(&right_value236, 0, sizeof(void*));
memset(&right_value237, 0, sizeof(void*));
memset(&right_value238, 0, sizeof(void*));
memset(&right_value239, 0, sizeof(void*));
memset(&right_value240, 0, sizeof(void*));
memset(&exp_203, 0, sizeof(struct sNode*));
memset(&right_value241, 0, sizeof(void*));
memset(&right_value242, 0, sizeof(void*));
memset(&right_value243, 0, sizeof(void*));
memset(&come_value_204, 0, sizeof(struct CVALUE*));
memset(&right_value244, 0, sizeof(void*));
memset(&right_value245, 0, sizeof(void*));
memset(&right_value246, 0, sizeof(void*));
memset(&right_value247, 0, sizeof(void*));
memset(&right_value248, 0, sizeof(void*));
memset(&no_comma_207, 0, sizeof(_Bool));
memset(&right_value249, 0, sizeof(void*));
memset(&node_208, 0, sizeof(struct sNode*));
memset(&right_value250, 0, sizeof(void*));
memset(&right_value251, 0, sizeof(void*));
memset(&i_209, 0, sizeof(int));
memset(&right_value252, 0, sizeof(void*));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
memset(&right_value260, 0, sizeof(void*));
memset(&right_value261, 0, sizeof(void*));
memset(&right_value262, 0, sizeof(void*));
memset(&generics_type_213, 0, sizeof(struct sType*));
memset(&var_name_214, 0, sizeof(char*));
memset(&err_215, 0, sizeof(_Bool));
memset(&generics_type_213, 0, sizeof(struct sType*));
memset(&var_name_214, 0, sizeof(char*));
memset(&err_215, 0, sizeof(_Bool));
memset(&right_value263, 0, sizeof(void*));
memset(&right_value264, 0, sizeof(void*));
memset(&right_value265, 0, sizeof(void*));
memset(&right_value266, 0, sizeof(void*));
memset(&right_value267, 0, sizeof(void*));
memset(&right_value268, 0, sizeof(void*));
memset(&new_name_216, 0, sizeof(char*));
memset(&klass_217, 0, sizeof(struct sClass*));
memset(&right_value279, 0, sizeof(void*));
memset(&right_value280, 0, sizeof(void*));
memset(&right_value281, 0, sizeof(void*));
memset(&right_value282, 0, sizeof(void*));
memset(&right_value283, 0, sizeof(void*));
memset(&right_value284, 0, sizeof(void*));
memset(&types_264, 0, sizeof(struct list$1sTypeph*));
memset(&right_value285, 0, sizeof(void*));
memset(&right_value286, 0, sizeof(void*));
memset(&type2_265, 0, sizeof(struct sType*));
memset(&name_266, 0, sizeof(char*));
memset(&err_267, 0, sizeof(_Bool));
memset(&type2_265, 0, sizeof(struct sType*));
memset(&name_266, 0, sizeof(char*));
memset(&err_267, 0, sizeof(_Bool));
memset(&right_value287, 0, sizeof(void*));
memset(&right_value288, 0, sizeof(void*));
memset(&right_value289, 0, sizeof(void*));
memset(&num_tuples_268, 0, sizeof(int));
memset(&right_value290, 0, sizeof(void*));
memset(&right_value291, 0, sizeof(void*));
memset(&right_value292, 0, sizeof(void*));
memset(&o2_saved_269, 0, sizeof(struct list$1sTypeph*));
memset(&it_270, 0, sizeof(struct sType*));
memset(&right_value293, 0, sizeof(void*));
memset(&right_value294, 0, sizeof(void*));
memset(&right_value295, 0, sizeof(void*));
memset(&new_name_271, 0, sizeof(char*));
memset(&right_value296, 0, sizeof(void*));
memset(&right_value297, 0, sizeof(void*));
memset(&right_value298, 0, sizeof(void*));
memset(&right_value299, 0, sizeof(void*));
memset(&no_comma_274, 0, sizeof(_Bool));
memset(&right_value300, 0, sizeof(void*));
memset(&node_275, 0, sizeof(struct sNode*));
memset(&right_value301, 0, sizeof(void*));
memset(&node_276, 0, sizeof(struct sNode*));
memset(&right_value302, 0, sizeof(void*));
memset(&asm_name_277, 0, sizeof(char*));
memset(&right_value303, 0, sizeof(void*));
memset(&right_value304, 0, sizeof(void*));
memset(&type2_278, 0, sizeof(struct sType*));
memset(&right_value305, 0, sizeof(void*));
memset(&right_value306, 0, sizeof(void*));
memset(&right_value307, 0, sizeof(void*));
memset(&right_value308, 0, sizeof(void*));
memset(&right_value309, 0, sizeof(void*));
memset(&right_value310, 0, sizeof(void*));
memset(&right_value311, 0, sizeof(void*));
memset(&right_value312, 0, sizeof(void*));
    head_107=info->p;
    head_sline_108=info->sline;
    info->define_struct=(_Bool)0;
    type_name_109=(char*)come_increment_ref_count(((char*)(right_value122=parse_word(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { right_value122 = come_decrement_ref_count(right_value122, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value122;
    __freed_obj__ = 0;
    while(_while_condtional28=string_operator_equals(type_name_109,"__extension__"),    _while_condtional28) {
        __dec_obj53=type_name_109;
        type_name_109=(char*)come_increment_ref_count(((char*)(right_value123=parse_word(info))));
        if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value123);
        if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { right_value123 = come_decrement_ref_count(right_value123, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value123;
        __freed_obj__ = 0;
    }
    constant_110=(_Bool)0;
    static__111=(_Bool)0;
    exception__112=(_Bool)0;
    volatile__113=(_Bool)0;
    register__114=(_Bool)0;
    unsigned__115=(_Bool)0;
    long__116=(_Bool)0;
    long_long_117=(_Bool)0;
    short__118=(_Bool)0;
    restrict__119=(_Bool)0;
    struct__120=(_Bool)0;
    union__121=(_Bool)0;
    enum__122=(_Bool)0;
    no_heap_123=(_Bool)0;
    extern__124=(_Bool)0;
    inline__125=(_Bool)0;
    come_mem_core__126=(_Bool)0;
    alignas__127=((void*)0);
    anonymous_type_128=(_Bool)0;
    anonymous_name_129=(_Bool)0;
    while(_while_condtional29=(_Bool)1,    _while_condtional29) {
        if(_if_conditional195=string_operator_equals(type_name_109,"struct"),        _if_conditional195) {
            struct__120=(_Bool)1;
            if(_if_conditional196=*info->p==123,            _if_conditional196) {
                p_130=info->p;
                sline_131=info->sline;
                ((char*)(right_value124=skip_block(info)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value124);
                if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { right_value124 = come_decrement_ref_count(right_value124, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value124;
                __freed_obj__ = 0;
                if(_if_conditional197=*info->p==59,                _if_conditional197) {
                    anonymous_name_129=(_Bool)1;
                    anonymous_type_128=(_Bool)1;
                    __dec_obj54=type_name_109;
                    type_name_109=(char*)come_increment_ref_count(((char*)(right_value125=__builtin_string(""))));
                    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
                    if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { right_value125 = come_decrement_ref_count(right_value125, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value125;
                    __freed_obj__ = 0;
                    info->p=p_130;
                    info->sline=sline_131;
                    break;
                }
                else {
                    anonymous_type_128=(_Bool)1;
                    __dec_obj55=type_name_109;
                    type_name_109=(char*)come_increment_ref_count(((char*)(right_value126=__builtin_string(""))));
                    if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
                    if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { right_value126 = come_decrement_ref_count(right_value126, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value126;
                    __freed_obj__ = 0;
                    info->p=p_130;
                    info->sline=sline_131;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj56=type_name_109;
            type_name_109=(char*)come_increment_ref_count(((char*)(right_value127=parse_word(info))));
            if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
            if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value127;
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            if(_if_conditional198=*info->p==60,            _if_conditional198) {
                p_132=info->p;
                sline_133=info->sline;
                info->p++;
                skip_spaces_and_lf(info);
                while(_while_condtional30=(_Bool)1,                _while_condtional30) {
                    if(_if_conditional199=*info->p==62,                    _if_conditional199) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(_if_conditional200=*info->p==123,                        _if_conditional200) {
                        }
                        else {
                            info->p=p_132;
                            info->sline=sline_133;
                        }
                        break;
                    }
                    else {
                        if(_if_conditional201=*info->p==0,                        _if_conditional201) {
                            err_msg(info,"invalid struct definition");
                            __result62__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value131=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value128=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 760, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            if(type_name_109 && !__freed_obj__) { type_name_109 = come_decrement_ref_count(type_name_109, (void*)0, (void*)0, 0, 0, 0); }
                            if(alignas__127 && !__freed_obj__) { alignas__127 = come_decrement_ref_count(alignas__127, ((struct sNode*)alignas__127)->finalize, ((struct sNode*)alignas__127)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value128);
                            if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value128;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value131);
                            if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value131;
                            __freed_obj__ = 0;
                            return __result62__;
                        }
                        else {
                            info->p++;
                        }
                    }
                }
            }
            if(_if_conditional202=*info->p==123,            _if_conditional202) {
                p_134=info->p;
                sline_135=info->sline;
                ((char*)(right_value132=skip_block(info)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value132);
                if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { right_value132 = come_decrement_ref_count(right_value132, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value132;
                __freed_obj__ = 0;
                if(_if_conditional203=*info->p==59,                _if_conditional203) {
                    info->p=head_107;
                    info->sline=head_sline_108;
                    info->define_struct=(_Bool)1;
                    __result63__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value134=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value133=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 778, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    if(type_name_109 && !__freed_obj__) { type_name_109 = come_decrement_ref_count(type_name_109, (void*)0, (void*)0, 0, 0, 0); }
                    if(alignas__127 && !__freed_obj__) { alignas__127 = come_decrement_ref_count(alignas__127, ((struct sNode*)alignas__127)->finalize, ((struct sNode*)alignas__127)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133);
                    if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value133;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value134);
                    if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value134;
                    __freed_obj__ = 0;
                    return __result63__;
                }
                else {
                    anonymous_type_128=(_Bool)1;
                    info->p=p_134;
                    info->sline=sline_135;
                    break;
                }
            }
        }
        else {
            if(_if_conditional204=string_operator_equals(type_name_109,"union"),            _if_conditional204) {
                union__121=(_Bool)1;
                if(_if_conditional205=*info->p==123,                _if_conditional205) {
                    p_136=info->p;
                    sline_137=info->sline;
                    ((char*)(right_value135=skip_block(info)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value135);
                    if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { right_value135 = come_decrement_ref_count(right_value135, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value135;
                    __freed_obj__ = 0;
                    if(_if_conditional206=*info->p==59,                    _if_conditional206) {
                        info->p=head_107;
                        info->sline=head_sline_108;
                        info->define_struct=(_Bool)0;
                        anonymous_type_128=(_Bool)1;
                        __dec_obj59=type_name_109;
                        type_name_109=(char*)come_increment_ref_count(((char*)(right_value136=__builtin_string(""))));
                        if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value136);
                        if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value136;
                        __freed_obj__ = 0;
                        info->p=p_136;
                        info->sline=sline_137;
                        break;
                    }
                    else {
                        anonymous_type_128=(_Bool)1;
                        __dec_obj60=type_name_109;
                        type_name_109=(char*)come_increment_ref_count(((char*)(right_value137=__builtin_string(""))));
                        if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value137);
                        if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value137;
                        __freed_obj__ = 0;
                        info->p=p_136;
                        info->sline=sline_137;
                        break;
                    }
                }
                parse_sharp_v5(info);
                __dec_obj61=type_name_109;
                type_name_109=(char*)come_increment_ref_count(((char*)(right_value138=parse_word(info))));
                if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value138);
                if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value138;
                __freed_obj__ = 0;
                parse_sharp_v5(info);
                if(_if_conditional207=*info->p==123,                _if_conditional207) {
                    p_138=info->p;
                    sline_139=info->sline;
                    ((char*)(right_value139=skip_block(info)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value139);
                    if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value139;
                    __freed_obj__ = 0;
                    if(_if_conditional208=*info->p==59,                    _if_conditional208) {
                        info->p=head_107;
                        info->sline=head_sline_108;
                        info->define_struct=(_Bool)1;
                        __result64__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value141=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value140=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 833, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(type_name_109 && !__freed_obj__) { type_name_109 = come_decrement_ref_count(type_name_109, (void*)0, (void*)0, 0, 0, 0); }
                        if(alignas__127 && !__freed_obj__) { alignas__127 = come_decrement_ref_count(alignas__127, ((struct sNode*)alignas__127)->finalize, ((struct sNode*)alignas__127)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value140);
                        if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value140;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value141);
                        if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value141;
                        __freed_obj__ = 0;
                        return __result64__;
                    }
                    else {
                        anonymous_type_128=(_Bool)1;
                        info->p=p_138;
                        info->sline=sline_139;
                        break;
                    }
                }
            }
            else {
                if(_if_conditional209=string_operator_equals(type_name_109,"enum"),                _if_conditional209) {
                    enum__122=(_Bool)1;
                    parse_sharp_v5(info);
                    if(_if_conditional210=*info->p==123,                    _if_conditional210) {
                        p_140=info->p;
                        sline_141=info->sline;
                        ((char*)(right_value142=skip_block(info)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value142);
                        if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value142;
                        __freed_obj__ = 0;
                        if(_if_conditional211=*info->p==59,                        _if_conditional211) {
                            info->p=head_107;
                            info->sline=head_sline_108;
                            info->define_struct=(_Bool)1;
                            __result65__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value144=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value143=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 858, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            if(type_name_109 && !__freed_obj__) { type_name_109 = come_decrement_ref_count(type_name_109, (void*)0, (void*)0, 0, 0, 0); }
                            if(alignas__127 && !__freed_obj__) { alignas__127 = come_decrement_ref_count(alignas__127, ((struct sNode*)alignas__127)->finalize, ((struct sNode*)alignas__127)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value143);
                            if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value143;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value144);
                            if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value144;
                            __freed_obj__ = 0;
                            return __result65__;
                        }
                        else {
                            anonymous_type_128=(_Bool)1;
                            __dec_obj62=type_name_109;
                            type_name_109=(char*)come_increment_ref_count(((char*)(right_value145=__builtin_string(""))));
                            if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value145);
                            if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value145;
                            __freed_obj__ = 0;
                            info->p=p_140;
                            info->sline=sline_141;
                            break;
                        }
                    }
                    parse_sharp_v5(info);
                    __dec_obj63=type_name_109;
                    type_name_109=(char*)come_increment_ref_count(((char*)(right_value146=parse_word(info))));
                    if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value146);
                    if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value146;
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    if(_if_conditional212=*info->p==123,                    _if_conditional212) {
                        p_142=info->p;
                        sline_143=info->sline;
                        ((char*)(right_value147=skip_block(info)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value147);
                        if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value147;
                        __freed_obj__ = 0;
                        if(_if_conditional213=*info->p==59,                        _if_conditional213) {
                            info->p=head_107;
                            info->sline=head_sline_108;
                            info->define_struct=(_Bool)1;
                            __result66__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value149=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value148=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 885, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            if(type_name_109 && !__freed_obj__) { type_name_109 = come_decrement_ref_count(type_name_109, (void*)0, (void*)0, 0, 0, 0); }
                            if(alignas__127 && !__freed_obj__) { alignas__127 = come_decrement_ref_count(alignas__127, ((struct sNode*)alignas__127)->finalize, ((struct sNode*)alignas__127)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value148);
                            if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value148;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value149);
                            if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value149;
                            __freed_obj__ = 0;
                            return __result66__;
                        }
                        else {
                            anonymous_type_128=(_Bool)1;
                            info->p=p_142;
                            info->sline=sline_143;
                            break;
                        }
                    }
                }
                else {
                    if(_if_conditional214=string_operator_equals(type_name_109,"_Alignas"),                    _if_conditional214) {
                        expected_next_character(40,info);
                        exp_144=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value150=expression_v13(info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value150);
                        if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { right_value150 = come_decrement_ref_count(right_value150, ((struct sNode*)right_value150)->finalize, ((struct sNode*)right_value150)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value150;
                        __freed_obj__ = 0;
                        __dec_obj64=alignas__127;
                        alignas__127=(struct sNode*)come_increment_ref_count(exp_144);
                        if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0); }
                        expected_next_character(41,info);
                        __dec_obj65=type_name_109;
                        type_name_109=(char*)come_increment_ref_count(((char*)(right_value151=parse_word(info))));
                        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value151);
                        if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value151;
                        __freed_obj__ = 0;
                        if(exp_144 && !__freed_obj__) { exp_144 = come_decrement_ref_count(exp_144, ((struct sNode*)exp_144)->finalize, ((struct sNode*)exp_144)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        if(_if_conditional215=string_operator_equals(type_name_109,"const"),                        _if_conditional215) {
                            constant_110=(_Bool)1;
                            __dec_obj66=type_name_109;
                            type_name_109=(char*)come_increment_ref_count(((char*)(right_value152=parse_word(info))));
                            if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value152);
                            if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value152;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional216=string_operator_equals(type_name_109,"exception"),                            _if_conditional216) {
                                exception__112=(_Bool)1;
                                __dec_obj67=type_name_109;
                                type_name_109=(char*)come_increment_ref_count(((char*)(right_value153=parse_word(info))));
                                if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value153);
                                if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value153;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional217=string_operator_equals(type_name_109,"static"),                                _if_conditional217) {
                                    static__111=(_Bool)1;
                                    __dec_obj68=type_name_109;
                                    type_name_109=(char*)come_increment_ref_count(((char*)(right_value154=parse_word(info))));
                                    if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value154);
                                    if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { right_value154 = come_decrement_ref_count(right_value154, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value154;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional218=string_operator_equals(type_name_109,"come_mem_core"),                                    _if_conditional218) {
                                        come_mem_core__126=(_Bool)1;
                                        __dec_obj69=type_name_109;
                                        type_name_109=(char*)come_increment_ref_count(((char*)(right_value155=parse_word(info))));
                                        if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value155);
                                        if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value155;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional219=string_operator_equals(type_name_109,"extern"),                                        _if_conditional219) {
                                            extern__124=(_Bool)1;
                                            __dec_obj70=type_name_109;
                                            type_name_109=(char*)come_increment_ref_count(((char*)(right_value156=parse_word(info))));
                                            if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value156);
                                            if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value156;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional220=string_operator_equals(type_name_109,"_Noreturn"),                                            _if_conditional220) {
                                                __dec_obj71=type_name_109;
                                                type_name_109=(char*)come_increment_ref_count(((char*)(right_value157=parse_word(info))));
                                                if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value157);
                                                if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value157;
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                if(_if_conditional221=string_operator_equals(type_name_109,"inline")||string_operator_equals(type_name_109,"__inline")||string_operator_equals(type_name_109,"__inline__")||string_operator_equals(type_name_109,"__always_inline"),                                                _if_conditional221) {
                                                    inline__125=(_Bool)1;
                                                    __dec_obj72=type_name_109;
                                                    type_name_109=(char*)come_increment_ref_count(((char*)(right_value158=parse_word(info))));
                                                    if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value158);
                                                    if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { right_value158 = come_decrement_ref_count(right_value158, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value158;
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    if(_if_conditional222=string_operator_equals(type_name_109,"volatile"),                                                    _if_conditional222) {
                                                        volatile__113=(_Bool)1;
                                                        __dec_obj73=type_name_109;
                                                        type_name_109=(char*)come_increment_ref_count(((char*)(right_value159=parse_word(info))));
                                                        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0,0); }
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value159);
                                                        if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { right_value159 = come_decrement_ref_count(right_value159, (void*)0, (void*)0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value159;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional223=string_operator_equals(type_name_109,"long"),                                                        _if_conditional223) {
                                                            {
                                                                p_145=info->p;
                                                                sline_146=info->sline;
                                                                if(_if_conditional224=!xisalpha(*info->p),                                                                _if_conditional224) {
                                                                    info->p=p_145;
                                                                    info->sline=sline_146;
                                                                    __dec_obj74=type_name_109;
                                                                    type_name_109=(char*)come_increment_ref_count(((char*)(right_value160=__builtin_string("long"))));
                                                                    if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0,0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value160);
                                                                    if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { right_value160 = come_decrement_ref_count(right_value160, (void*)0, (void*)0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value160;
                                                                    __freed_obj__ = 0;
                                                                    break;
                                                                }
                                                                else {
                                                                    __dec_obj75=type_name_109;
                                                                    type_name_109=(char*)come_increment_ref_count(((char*)(right_value161=parse_word(info))));
                                                                    if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0,0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value161);
                                                                    if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { right_value161 = come_decrement_ref_count(right_value161, (void*)0, (void*)0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value161;
                                                                    __freed_obj__ = 0;
                                                                    if(_if_conditional225=string_operator_equals(type_name_109,"unsigned"),                                                                    _if_conditional225) {
                                                                        __dec_obj76=type_name_109;
                                                                        type_name_109=(char*)come_increment_ref_count(((char*)(right_value162=parse_word(info))));
                                                                        if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0,0); }
                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value162);
                                                                        if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { right_value162 = come_decrement_ref_count(right_value162, (void*)0, (void*)0, 1, 0, 0); }
                                                                        __right_value_freed_obj[0] = right_value162;
                                                                        __freed_obj__ = 0;
                                                                        if(_if_conditional226=string_operator_equals(type_name_109,"int"),                                                                        _if_conditional226) {
                                                                            long__116=(_Bool)1;
                                                                            break;
                                                                        }
                                                                    }
                                                                    else {
                                                                        if(_if_conditional227=string_operator_equals(type_name_109,"long"),                                                                        _if_conditional227) {
                                                                            p_145=info->p;
                                                                            sline_146=info->sline;
                                                                            if(_if_conditional228=xisalpha(*info->p),                                                                            _if_conditional228) {
                                                                                long_long_117=(_Bool)1;
                                                                                __dec_obj77=type_name_109;
                                                                                type_name_109=(char*)come_increment_ref_count(((char*)(right_value163=parse_word(info))));
                                                                                if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value163);
                                                                                if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { right_value163 = come_decrement_ref_count(right_value163, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value163;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            else {
                                                                                long__116=(_Bool)1;
                                                                                break;
                                                                            }
                                                                            if(_if_conditional229=string_operator_equals(type_name_109,"int"),                                                                            _if_conditional229) {
                                                                                long_long_117=(_Bool)1;
                                                                                break;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional230=!is_type_name(type_name_109,info),                                                                                _if_conditional230) {
                                                                                    __dec_obj78=type_name_109;
                                                                                    type_name_109=(char*)come_increment_ref_count(((char*)(right_value164=__builtin_string("long"))));
                                                                                    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0,0); }
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value164);
                                                                                    if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { right_value164 = come_decrement_ref_count(right_value164, (void*)0, (void*)0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[0] = right_value164;
                                                                                    __freed_obj__ = 0;
                                                                                    long_long_117=(_Bool)1;
                                                                                    info->p=p_145;
                                                                                    info->sline=sline_146;
                                                                                    break;
                                                                                }
                                                                            }
                                                                        }
                                                                        else {
                                                                            if(_if_conditional231=is_type_name(type_name_109,info),                                                                            _if_conditional231) {
                                                                                if(_if_conditional232=long__116,                                                                                _if_conditional232) {
                                                                                    long_long_117=(_Bool)1;
                                                                                    long__116=(_Bool)0;
                                                                                }
                                                                                else {
                                                                                    long__116=(_Bool)1;
                                                                                }
                                                                                break;
                                                                            }
                                                                            else {
                                                                                info->p=p_145;
                                                                                info->sline=sline_146;
                                                                                __dec_obj79=type_name_109;
                                                                                type_name_109=(char*)come_increment_ref_count(((char*)(right_value165=__builtin_string("long"))));
                                                                                if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value165);
                                                                                if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { right_value165 = come_decrement_ref_count(right_value165, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value165;
                                                                                __freed_obj__ = 0;
                                                                                break;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        else {
                                                            if(_if_conditional233=string_operator_equals(type_name_109,"unsigned"),                                                            _if_conditional233) {
                                                                unsigned__115=(_Bool)1;
                                                                if(_if_conditional234=xisalpha(*info->p)||*info->p==95,                                                                _if_conditional234) {
                                                                    p_147=info->p;
                                                                    sline_148=info->sline;
                                                                    __dec_obj80=type_name_109;
                                                                    type_name_109=(char*)come_increment_ref_count(((char*)(right_value166=parse_word(info))));
                                                                    if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0,0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value166);
                                                                    if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value166;
                                                                    __freed_obj__ = 0;
                                                                    if(_if_conditional235=string_operator_equals(type_name_109,"short"),                                                                    _if_conditional235) {
                                                                        if(_if_conditional236=xisalpha(*info->p)||*info->p==95,                                                                        _if_conditional236) {
                                                                            p_149=info->p;
                                                                            sline_150=info->sline;
                                                                            __dec_obj81=type_name_109;
                                                                            type_name_109=(char*)come_increment_ref_count(((char*)(right_value167=parse_word(info))));
                                                                            if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0,0); }
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value167);
                                                                            if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0, 0); }
                                                                            __right_value_freed_obj[0] = right_value167;
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional237=is_type_name(type_name_109,info),                                                                            _if_conditional237) {
                                                                                short__118=(_Bool)1;
                                                                            }
                                                                            else {
                                                                                short__118=(_Bool)1;
                                                                                __dec_obj82=type_name_109;
                                                                                type_name_109=(char*)come_increment_ref_count(((char*)(right_value168=__builtin_string("int"))));
                                                                                if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value168);
                                                                                if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value168;
                                                                                __freed_obj__ = 0;
                                                                                info->p=p_149;
                                                                                info->sline=sline_150;
                                                                            }
                                                                        }
                                                                        else {
                                                                            short__118=(_Bool)1;
                                                                            __dec_obj83=type_name_109;
                                                                            type_name_109=(char*)come_increment_ref_count(((char*)(right_value169=__builtin_string("int"))));
                                                                            if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0,0); }
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value169);
                                                                            if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { right_value169 = come_decrement_ref_count(right_value169, (void*)0, (void*)0, 1, 0, 0); }
                                                                            __right_value_freed_obj[0] = right_value169;
                                                                            __freed_obj__ = 0;
                                                                            break;
                                                                        }
                                                                    }
                                                                    else {
                                                                        if(_if_conditional238=string_operator_equals(type_name_109,"long"),                                                                        _if_conditional238) {
                                                                            if(_if_conditional239=xisalpha(*info->p)||*info->p==95,                                                                            _if_conditional239) {
                                                                                p_151=info->p;
                                                                                sline_152=info->sline;
                                                                                __dec_obj84=type_name_109;
                                                                                type_name_109=(char*)come_increment_ref_count(((char*)(right_value170=parse_word(info))));
                                                                                if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value170);
                                                                                if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { right_value170 = come_decrement_ref_count(right_value170, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value170;
                                                                                __freed_obj__ = 0;
                                                                                if(_if_conditional240=is_type_name(type_name_109,info),                                                                                _if_conditional240) {
                                                                                    long__116=(_Bool)1;
                                                                                }
                                                                                else {
                                                                                    long__116=(_Bool)1;
                                                                                    __dec_obj85=type_name_109;
                                                                                    type_name_109=(char*)come_increment_ref_count(((char*)(right_value171=__builtin_string("int"))));
                                                                                    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0,0); }
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value171);
                                                                                    if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { right_value171 = come_decrement_ref_count(right_value171, (void*)0, (void*)0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[0] = right_value171;
                                                                                    __freed_obj__ = 0;
                                                                                    info->p=p_151;
                                                                                    info->sline=sline_152;
                                                                                }
                                                                            }
                                                                            else {
                                                                                long__116=(_Bool)1;
                                                                                __dec_obj86=type_name_109;
                                                                                type_name_109=(char*)come_increment_ref_count(((char*)(right_value172=__builtin_string("int"))));
                                                                                if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value172);
                                                                                if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { right_value172 = come_decrement_ref_count(right_value172, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value172;
                                                                                __freed_obj__ = 0;
                                                                                break;
                                                                            }
                                                                        }
                                                                        else {
                                                                            if(_if_conditional241=!is_type_name(type_name_109,info),                                                                            _if_conditional241) {
                                                                                __dec_obj87=type_name_109;
                                                                                type_name_109=(char*)come_increment_ref_count(((char*)(right_value173=__builtin_string("int"))));
                                                                                if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value173);
                                                                                if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { right_value173 = come_decrement_ref_count(right_value173, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value173;
                                                                                __freed_obj__ = 0;
                                                                                info->p=p_147;
                                                                                info->sline=sline_148;
                                                                                break;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                else {
                                                                    __dec_obj88=type_name_109;
                                                                    type_name_109=(char*)come_increment_ref_count(((char*)(right_value174=__builtin_string("int"))));
                                                                    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0,0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value174);
                                                                    if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { right_value174 = come_decrement_ref_count(right_value174, (void*)0, (void*)0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value174;
                                                                    __freed_obj__ = 0;
                                                                    break;
                                                                }
                                                            }
                                                            else {
                                                                if(_if_conditional242=string_operator_equals(type_name_109,"signed")||string_operator_equals(type_name_109,"__signed__"),                                                                _if_conditional242) {
                                                                    unsigned__115=(_Bool)0;
                                                                    __dec_obj89=type_name_109;
                                                                    type_name_109=(char*)come_increment_ref_count(((char*)(right_value175=parse_word(info))));
                                                                    if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0,0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value175);
                                                                    if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { right_value175 = come_decrement_ref_count(right_value175, (void*)0, (void*)0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value175;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                else {
                                                                    if(_if_conditional243=string_operator_equals(type_name_109,"register"),                                                                    _if_conditional243) {
                                                                        register__114=(_Bool)1;
                                                                        __dec_obj90=type_name_109;
                                                                        type_name_109=(char*)come_increment_ref_count(((char*)(right_value176=parse_word(info))));
                                                                        if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0,0); }
                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value176);
                                                                        if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { right_value176 = come_decrement_ref_count(right_value176, (void*)0, (void*)0, 1, 0, 0); }
                                                                        __right_value_freed_obj[0] = right_value176;
                                                                        __freed_obj__ = 0;
                                                                    }
                                                                    else {
                                                                        if(_if_conditional244=string_operator_equals(type_name_109,"restrict"),                                                                        _if_conditional244) {
                                                                            restrict__119=(_Bool)1;
                                                                            __dec_obj91=type_name_109;
                                                                            type_name_109=(char*)come_increment_ref_count(((char*)(right_value177=parse_word(info))));
                                                                            if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0,0); }
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value177);
                                                                            if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0); }
                                                                            __right_value_freed_obj[0] = right_value177;
                                                                            __freed_obj__ = 0;
                                                                        }
                                                                        else {
                                                                            if(_if_conditional245=string_operator_equals(type_name_109,"__restrict"),                                                                            _if_conditional245) {
                                                                                restrict__119=(_Bool)1;
                                                                                __dec_obj92=type_name_109;
                                                                                type_name_109=(char*)come_increment_ref_count(((char*)(right_value178=parse_word(info))));
                                                                                if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value178);
                                                                                if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { right_value178 = come_decrement_ref_count(right_value178, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value178;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional246=string_operator_equals(type_name_109,"short"),                                                                                _if_conditional246) {
                                                                                    short__118=(_Bool)1;
                                                                                    if(_if_conditional247=*info->p==58,                                                                                    _if_conditional247) {
                                                                                        break;
                                                                                    }
                                                                                    else {
                                                                                        if(_if_conditional248=xisalnum(*info->p),                                                                                        _if_conditional248) {
                                                                                            p_153=info->p;
                                                                                            sline_154=info->sline;
                                                                                            __dec_obj93=type_name_109;
                                                                                            type_name_109=(char*)come_increment_ref_count(((char*)(right_value179=parse_word(info))));
                                                                                            if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0,0); }
                                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value179);
                                                                                            if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { right_value179 = come_decrement_ref_count(right_value179, (void*)0, (void*)0, 1, 0, 0); }
                                                                                            __right_value_freed_obj[0] = right_value179;
                                                                                            __freed_obj__ = 0;
                                                                                            if(_if_conditional249=string_operator_equals(type_name_109,"int"),                                                                                            _if_conditional249) {
                                                                                                break;
                                                                                            }
                                                                                            else {
                                                                                                if(_if_conditional250=string_operator_equals(type_name_109,"short"),                                                                                                _if_conditional250) {
                                                                                                    short__118=(_Bool)0;
                                                                                                    break;
                                                                                                }
                                                                                                else {
                                                                                                    if(_if_conditional251=is_type_name(type_name_109,info),                                                                                                    _if_conditional251) {
                                                                                                        info->p=p_153;
                                                                                                        info->sline=sline_154;
                                                                                                    }
                                                                                                    else {
                                                                                                        __dec_obj94=type_name_109;
                                                                                                        type_name_109=(char*)come_increment_ref_count(((char*)(right_value180=__builtin_string("short"))));
                                                                                                        if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0,0); }
                                                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180);
                                                                                                        if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { right_value180 = come_decrement_ref_count(right_value180, (void*)0, (void*)0, 1, 0, 0); }
                                                                                                        __right_value_freed_obj[0] = right_value180;
                                                                                                        __freed_obj__ = 0;
                                                                                                        info->p=p_153;
                                                                                                        info->sline=sline_154;
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
    pointer_num_155=0;
    while(_while_condtional31=*info->p==42,    _while_condtional31) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        pointer_num_155++;
    }
    lambda_flag_156=(_Bool)0;
    {
        pX_157=info->p;
        slineX_158=info->sline;
        if(_if_conditional252=xisalpha(*info->p)||*info->p==95,        _if_conditional252) {
            (void)((char*)(right_value181=parse_word(info)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value181);
            if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { right_value181 = come_decrement_ref_count(right_value181, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value181;
            __freed_obj__ = 0;
            if(_if_conditional253=*info->p==40&&info->in_typedef,            _if_conditional253) {
                lambda_flag_156=(_Bool)1;
            }
        }
        info->p=pX_157;
        info->sline=slineX_158;
    }
    function_pointer_flag_161=(_Bool)0;
    {
        p_162=info->p;
        sline_163=info->sline;
        if(_if_conditional254=*info->p==40,        _if_conditional254) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(_if_conditional255=*info->p==42||*info->p==94,            _if_conditional255) {
                function_pointer_flag_161=(_Bool)1;
            }
            else {
                if(_if_conditional256=xisalpha(*info->p)||*info->p==95,                _if_conditional256) {
                    word_164=(char*)come_increment_ref_count(((char*)(right_value182=parse_word(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value182);
                    if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { right_value182 = come_decrement_ref_count(right_value182, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value182;
                    __freed_obj__ = 0;
                    if(_if_conditional257=*info->p==41,                    _if_conditional257) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(_if_conditional258=*info->p==40,                        _if_conditional258) {
                            function_pointer_flag_161=(_Bool)1;
                        }
                    }
                    if(word_164 && !__freed_obj__) { word_164 = come_decrement_ref_count(word_164, (void*)0, (void*)0, 0, 0, 0); }
                }
            }
        }
        info->p=p_162;
        info->sline=sline_163;
    }
    var_name_between_brace_165=(_Bool)0;
    {
        p_166=info->p;
        sline_167=info->sline;
        if(_if_conditional259=*info->p==40,        _if_conditional259) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(_if_conditional260=xisalpha(*info->p)||*info->p==95,            _if_conditional260) {
                word_168=(char*)come_increment_ref_count(((char*)(right_value183=parse_word(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value183);
                if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { right_value183 = come_decrement_ref_count(right_value183, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value183;
                __freed_obj__ = 0;
                if(_if_conditional261=is_type_name(word_168,info),                _if_conditional261) {
                }
                else {
                    if(_if_conditional262=*info->p==41,                    _if_conditional262) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(_if_conditional263=*info->p!=40,                        _if_conditional263) {
                            var_name_between_brace_165=(_Bool)1;
                        }
                    }
                }
                if(word_168 && !__freed_obj__) { word_168 = come_decrement_ref_count(word_168, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        info->p=p_166;
        info->sline=sline_167;
    }
    if(_if_conditional264=anonymous_type_128&&*info->p==123,    _if_conditional264) {
        if(_if_conditional265=struct__120,        _if_conditional265) {
            if(_if_conditional266=string_operator_equals(type_name_109,""),            _if_conditional266) {
                __dec_obj95=type_name_109;
                type_name_109=(char*)come_increment_ref_count(((char*)(right_value184=xsprintf("anonymous_typeX%d",++anonymous_num_169))));
                if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value184);
                if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { right_value184 = come_decrement_ref_count(right_value184, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value184;
                __freed_obj__ = 0;
            }
            node_170=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value185=parse_struct((char*)come_increment_ref_count(type_name_109),info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value185);
            if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { right_value185 = come_decrement_ref_count(right_value185, ((struct sNode*)right_value185)->finalize, ((struct sNode*)right_value185)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value185;
            __freed_obj__ = 0;
            if(_if_conditional267=!node_compile(node_170,info),            _if_conditional267) {
                err_msg(info,"parse_struct is failed");
                __result67__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value187=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value186=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1245, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                if(node_170 && !__freed_obj__) { node_170 = come_decrement_ref_count(node_170, ((struct sNode*)node_170)->finalize, ((struct sNode*)node_170)->_protocol_obj, 0, 0, 0); } 
                if(type_name_109 && !__freed_obj__) { type_name_109 = come_decrement_ref_count(type_name_109, (void*)0, (void*)0, 0, 0, 0); }
                if(alignas__127 && !__freed_obj__) { alignas__127 = come_decrement_ref_count(alignas__127, ((struct sNode*)alignas__127)->finalize, ((struct sNode*)alignas__127)->_protocol_obj, 0, 0, 0); } 
                if(type_159 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_159, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(var_name_160 && !__freed_obj__) { var_name_160 = come_decrement_ref_count(var_name_160, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value186);
                if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value186;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value187);
                if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value187;
                __freed_obj__ = 0;
                return __result67__;
            }
            pointer_num_171=0;
            while(_while_condtional32=*info->p==42,            _while_condtional32) {
                info->p++;
                skip_spaces_and_lf(info);
                pointer_num_171++;
            }
            __dec_obj96=type_159;
            type_159=(struct sType*)come_increment_ref_count(((struct sType*)(right_value189=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value188=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1255, "struct sType")))),type_name_109,(_Bool)0,info))));
            if(__dec_obj96) { come_call_finalizer(sType_finalize,__dec_obj96, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value188);
            if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value188;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value189);
            if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value189;
            __freed_obj__ = 0;
            type_159->mPointerNum=pointer_num_171;
            if(node_170 && !__freed_obj__) { node_170 = come_decrement_ref_count(node_170, ((struct sNode*)node_170)->finalize, ((struct sNode*)node_170)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional268=enum__122,            _if_conditional268) {
                if(_if_conditional269=string_operator_equals(type_name_109,""),                _if_conditional269) {
                    __dec_obj97=type_name_109;
                    type_name_109=(char*)come_increment_ref_count(((char*)(right_value190=xsprintf("anonymous_typeY%d",++anonymous_num_169))));
                    if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value190);
                    if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { right_value190 = come_decrement_ref_count(right_value190, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value190;
                    __freed_obj__ = 0;
                }
                node_172=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value191=parse_enum((char*)come_increment_ref_count(type_name_109),info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value191);
                if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { right_value191 = come_decrement_ref_count(right_value191, ((struct sNode*)right_value191)->finalize, ((struct sNode*)right_value191)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value191;
                __freed_obj__ = 0;
                if(_if_conditional270=!info->no_output_err,                _if_conditional270) {
                    if(_if_conditional271=!node_compile(node_172,info),                    _if_conditional271) {
                        printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                        __result68__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value193=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value192=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1269, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(node_172 && !__freed_obj__) { node_172 = come_decrement_ref_count(node_172, ((struct sNode*)node_172)->finalize, ((struct sNode*)node_172)->_protocol_obj, 0, 0, 0); } 
                        if(type_name_109 && !__freed_obj__) { type_name_109 = come_decrement_ref_count(type_name_109, (void*)0, (void*)0, 0, 0, 0); }
                        if(alignas__127 && !__freed_obj__) { alignas__127 = come_decrement_ref_count(alignas__127, ((struct sNode*)alignas__127)->finalize, ((struct sNode*)alignas__127)->_protocol_obj, 0, 0, 0); } 
                        if(type_159 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_159, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_name_160 && !__freed_obj__) { var_name_160 = come_decrement_ref_count(var_name_160, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value192);
                        if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value192;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value193);
                        if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value193;
                        __freed_obj__ = 0;
                        return __result68__;
                    }
                }
                __dec_obj98=type_159;
                type_159=(struct sType*)come_increment_ref_count(((struct sType*)(right_value195=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value194=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1273, "struct sType")))),type_name_109,(_Bool)0,info))));
                if(__dec_obj98) { come_call_finalizer(sType_finalize,__dec_obj98, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value194);
                if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value194;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value195);
                if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value195;
                __freed_obj__ = 0;
                if(node_172 && !__freed_obj__) { node_172 = come_decrement_ref_count(node_172, ((struct sNode*)node_172)->finalize, ((struct sNode*)node_172)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional272=union__121,                _if_conditional272) {
                    if(_if_conditional273=string_operator_equals(type_name_109,""),                    _if_conditional273) {
                        __dec_obj99=type_name_109;
                        type_name_109=(char*)come_increment_ref_count(((char*)(right_value196=xsprintf("anonymous_typeZ%d",++anonymous_num_169))));
                        if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value196);
                        if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { right_value196 = come_decrement_ref_count(right_value196, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value196;
                        __freed_obj__ = 0;
                    }
                    node_173=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value197=parse_union((char*)come_increment_ref_count(type_name_109),info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value197);
                    if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { right_value197 = come_decrement_ref_count(right_value197, ((struct sNode*)right_value197)->finalize, ((struct sNode*)right_value197)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value197;
                    __freed_obj__ = 0;
                    if(_if_conditional274=!node_compile(node_173,info),                    _if_conditional274) {
                        printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                        __result69__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value199=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value198=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1285, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(node_173 && !__freed_obj__) { node_173 = come_decrement_ref_count(node_173, ((struct sNode*)node_173)->finalize, ((struct sNode*)node_173)->_protocol_obj, 0, 0, 0); } 
                        if(type_name_109 && !__freed_obj__) { type_name_109 = come_decrement_ref_count(type_name_109, (void*)0, (void*)0, 0, 0, 0); }
                        if(alignas__127 && !__freed_obj__) { alignas__127 = come_decrement_ref_count(alignas__127, ((struct sNode*)alignas__127)->finalize, ((struct sNode*)alignas__127)->_protocol_obj, 0, 0, 0); } 
                        if(type_159 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_159, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_name_160 && !__freed_obj__) { var_name_160 = come_decrement_ref_count(var_name_160, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value198);
                        if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value198;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value199);
                        if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value199;
                        __freed_obj__ = 0;
                        return __result69__;
                    }
                    pointer_num_174=0;
                    while(_while_condtional33=*info->p==42,                    _while_condtional33) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        pointer_num_174++;
                    }
                    __dec_obj100=type_159;
                    type_159=(struct sType*)come_increment_ref_count(((struct sType*)(right_value201=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value200=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1296, "struct sType")))),type_name_109,(_Bool)0,info))));
                    if(__dec_obj100) { come_call_finalizer(sType_finalize,__dec_obj100, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value200);
                    if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value200;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value201);
                    if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value201;
                    __freed_obj__ = 0;
                    type_159->mPointerNum=pointer_num_174;
                    if(node_173 && !__freed_obj__) { node_173 = come_decrement_ref_count(node_173, ((struct sNode*)node_173)->finalize, ((struct sNode*)node_173)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    err_msg(info,"unexpected { character");
                    __result70__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value203=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value202=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1302, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    if(type_name_109 && !__freed_obj__) { type_name_109 = come_decrement_ref_count(type_name_109, (void*)0, (void*)0, 0, 0, 0); }
                    if(alignas__127 && !__freed_obj__) { alignas__127 = come_decrement_ref_count(alignas__127, ((struct sNode*)alignas__127)->finalize, ((struct sNode*)alignas__127)->_protocol_obj, 0, 0, 0); } 
                    if(type_159 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_159, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(var_name_160 && !__freed_obj__) { var_name_160 = come_decrement_ref_count(var_name_160, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value202);
                    if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value202;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value203);
                    if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value203;
                    __freed_obj__ = 0;
                    return __result70__;
                }
            }
        }
        if(_if_conditional275=parse_variable_name,        _if_conditional275) {
            parse_sharp_v5(info);
            if(_if_conditional276=var_name_between_brace_165&&*info->p==40,            _if_conditional276) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(_if_conditional277=*info->p==58,            _if_conditional277) {
                __dec_obj101=var_name_160;
                var_name_160=(char*)come_increment_ref_count(((char*)(right_value204=__builtin_string(""))));
                if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value204);
                if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { right_value204 = come_decrement_ref_count(right_value204, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value204;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional278=anonymous_name_129,                _if_conditional278) {
                    num_anonymous_var_name_175++;
                    __dec_obj102=var_name_160;
                    var_name_160=(char*)come_increment_ref_count(((char*)(right_value205=xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name_175))));
                    if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value205);
                    if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { right_value205 = come_decrement_ref_count(right_value205, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value205;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional279=xisalnum(*info->p)||*info->p==95,                    _if_conditional279) {
                        __dec_obj103=var_name_160;
                        var_name_160=(char*)come_increment_ref_count(((char*)(right_value206=parse_word(info))));
                        if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value206);
                        if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value206;
                        __freed_obj__ = 0;
                    }
                    else {
                        num_anonymous_var_name_176++;
                        __dec_obj104=var_name_160;
                        var_name_160=(char*)come_increment_ref_count(((char*)(right_value207=xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_176))));
                        if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value207);
                        if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { right_value207 = come_decrement_ref_count(right_value207, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value207;
                        __freed_obj__ = 0;
                    }
                }
            }
            if(_if_conditional280=var_name_between_brace_165&&*info->p==41,            _if_conditional280) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(_if_conditional281=*info->p==58,            _if_conditional281) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_177=info->no_comma;
                info->no_comma=(_Bool)1;
                node_178=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value208=expression_v13(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value208);
                if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { right_value208 = come_decrement_ref_count(right_value208, ((struct sNode*)right_value208)->finalize, ((struct sNode*)right_value208)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value208;
                __freed_obj__ = 0;
                info->no_comma=no_comma_177;
                __dec_obj105=type_159->mSizeNum;
                type_159->mSizeNum=(struct sNode*)come_increment_ref_count(node_178);
                if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0,0); }
                if(node_178 && !__freed_obj__) { node_178 = come_decrement_ref_count(node_178, ((struct sNode*)node_178)->finalize, ((struct sNode*)node_178)->_protocol_obj, 0, 0, 0); } 
            }
        }
    }
    else {
        if(_if_conditional282=lambda_flag_156,        _if_conditional282) {
            if(_if_conditional287=map$2charphsTypephp_operator_load_element(info->types,type_name_109),            _if_conditional287) {
                __dec_obj106=result_type_179;
                result_type_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value212=sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_109)))));
                if(__dec_obj106) { come_call_finalizer(sType_finalize,__dec_obj106, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value212);
                if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value212;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional293=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_109)),                _if_conditional293) {
                    for(
                    i_188=0 ,                    0;                    _for_condtionalA4=                    i_188<list$1charph_length(info->generics_type_names) ,                    _for_condtionalA4;                    i_188++ ,                    0                    ){
                        if(_if_conditional296=string_operator_equals(list$1charphp_operator_load_element(info->generics_type_names,i_188),type_name_109),                        _if_conditional296) {
                            __dec_obj107=result_type_179;
                            result_type_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value215=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value213=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1355, "struct sType")))),((char*)(right_value214=xsprintf("generics_type%d",i_188))),(_Bool)0,info))));
                            if(__dec_obj107) { come_call_finalizer(sType_finalize,__dec_obj107, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value213);
                            if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value213;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value214);
                            if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { right_value214 = come_decrement_ref_count(right_value214, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value214;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value215);
                            if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value215;
                            __freed_obj__ = 0;
                        }
                    }
                }
                else {
                    __dec_obj108=result_type_179;
                    result_type_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value217=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value216=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1360, "struct sType")))),type_name_109,(_Bool)0,info))));
                    if(__dec_obj108) { come_call_finalizer(sType_finalize,__dec_obj108, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value216);
                    if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value216;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value217);
                    if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value217;
                    __freed_obj__ = 0;
                }
            }
            result_type_179->mConstant=result_type_179->mConstant||constant_110;
            __dec_obj109=result_type_179->mAlignas;
            result_type_179->mAlignas=(struct sNode*)come_increment_ref_count(alignas__127);
            if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0,0); }
            result_type_179->mComeMemCore=result_type_179->mComeMemCore||come_mem_core__126;
            result_type_179->mRegister=register__114;
            result_type_179->mUnsigned=result_type_179->mUnsigned||unsigned__115;
            result_type_179->mVolatile=volatile__113;
            result_type_179->mStatic=result_type_179->mStatic||static__111;
            result_type_179->mExtern=result_type_179->mExtern||extern__124;
            result_type_179->mInline=result_type_179->mInline||inline__125;
            result_type_179->mRestrict=result_type_179->mRestrict||restrict__119;
            result_type_179->mLongLong=result_type_179->mLongLong||long_long_117;
            result_type_179->mLong=result_type_179->mLong||long__116;
            result_type_179->mShort=result_type_179->mShort||short__118;
            result_type_179->mPointerNum=pointer_num_155;
            __dec_obj110=var_name_160;
            var_name_160=(char*)come_increment_ref_count(((char*)(right_value218=parse_word(info))));
            if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value218);
            if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { right_value218 = come_decrement_ref_count(right_value218, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value218;
            __freed_obj__ = 0;
            multiple_assign_var2=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value219=parse_params(info)));
            param_types_192=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var2->v1);
            param_names_193=(struct list$1charph*)come_increment_ref_count(multiple_assign_var2->v2);
            param_default_parametors_194=(struct list$1charph*)come_increment_ref_count(multiple_assign_var2->v3);
            var_args_195=multiple_assign_var2->v4;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value219);
            if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value219;
            __freed_obj__ = 0;
            __dec_obj111=type_159;
            type_159=(struct sType*)come_increment_ref_count(((struct sType*)(right_value221=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value220=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1382, "struct sType")))),"lambda",(_Bool)0,info))));
            if(__dec_obj111) { come_call_finalizer(sType_finalize,__dec_obj111, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value220);
            if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value220;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value221);
            if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value221;
            __freed_obj__ = 0;
            __dec_obj113=type_159->mResultType;
            type_159->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value224=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value222=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function4.c", 1384, "struct tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_179)))));
            if(__dec_obj113) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj113, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value222);
            if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value222;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value224);
            if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[5] = right_value224;
            __freed_obj__ = 0;
            __dec_obj114=type_159->mParamTypes;
            type_159->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_192);
            if(__dec_obj114) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj114, (void*)0, (void*)0, 0, 0, 0, 0); }
            __dec_obj115=type_159->mParamNames;
            type_159->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_193);
            if(__dec_obj115) { come_call_finalizer(list$1charph_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0); }
            type_159->mVarArgs=var_args_195;
            type_159->mExtern=extern__124;
            if(result_type_179 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_179, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(param_types_192 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_192, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(param_names_193 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_193, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(param_default_parametors_194 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_194, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            if(_if_conditional297=function_pointer_flag_161,            _if_conditional297) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                if(_if_conditional298=*info->p==42||*info->p==94,                _if_conditional298) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                skip_pointer_attribute(info);
                if(_if_conditional299=map$2charphsTypephp_operator_load_element(info->types,type_name_109),                _if_conditional299) {
                    __dec_obj116=result_type_196;
                    result_type_196=(struct sType*)come_increment_ref_count(((struct sType*)(right_value225=sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_109)))));
                    if(__dec_obj116) { come_call_finalizer(sType_finalize,__dec_obj116, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value225);
                    if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value225;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional300=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_109)),                    _if_conditional300) {
                        for(
                        i_197=0 ,                        0;                        _for_condtionalA5=                        i_197<list$1charph_length(info->generics_type_names) ,                        _for_condtionalA5;                        i_197++ ,                        0                        ){
                            if(_if_conditional301=string_operator_equals(list$1charphp_operator_load_element(info->generics_type_names,i_197),type_name_109),                            _if_conditional301) {
                                __dec_obj117=result_type_196;
                                result_type_196=(struct sType*)come_increment_ref_count(((struct sType*)(right_value228=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value226=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1411, "struct sType")))),((char*)(right_value227=xsprintf("generics_type%d",i_197))),(_Bool)0,info))));
                                if(__dec_obj117) { come_call_finalizer(sType_finalize,__dec_obj117, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value226);
                                if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value226;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value227);
                                if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { right_value227 = come_decrement_ref_count(right_value227, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value227;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value228);
                                if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value228;
                                __freed_obj__ = 0;
                            }
                        }
                    }
                    else {
                        __dec_obj118=result_type_196;
                        result_type_196=(struct sType*)come_increment_ref_count(((struct sType*)(right_value230=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value229=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1416, "struct sType")))),type_name_109,(_Bool)0,info))));
                        if(__dec_obj118) { come_call_finalizer(sType_finalize,__dec_obj118, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value229);
                        if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value229;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value230);
                        if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value230;
                        __freed_obj__ = 0;
                    }
                }
                result_type_196->mConstant=result_type_196->mConstant||constant_110;
                __dec_obj119=result_type_196->mAlignas;
                result_type_196->mAlignas=(struct sNode*)come_increment_ref_count(alignas__127);
                if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0,0); }
                result_type_196->mComeMemCore=result_type_196->mComeMemCore||come_mem_core__126;
                result_type_196->mRegister=register__114;
                result_type_196->mUnsigned=result_type_196->mUnsigned||unsigned__115;
                result_type_196->mVolatile=volatile__113;
                result_type_196->mStatic=result_type_196->mStatic||static__111;
                result_type_196->mExtern=result_type_196->mExtern||extern__124;
                result_type_196->mInline=result_type_196->mInline||inline__125;
                result_type_196->mRestrict=result_type_196->mRestrict||restrict__119;
                result_type_196->mLongLong=result_type_196->mLongLong||long_long_117;
                result_type_196->mLong=result_type_196->mLong||long__116;
                result_type_196->mShort=result_type_196->mShort||short__118;
                result_type_196->mPointerNum+=pointer_num_155;
                if(_if_conditional302=xisalnum(*info->p)||*info->p==95,                _if_conditional302) {
                    __dec_obj120=var_name_160;
                    var_name_160=(char*)come_increment_ref_count(((char*)(right_value231=parse_word(info))));
                    if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value231);
                    if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { right_value231 = come_decrement_ref_count(right_value231, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value231;
                    __freed_obj__ = 0;
                    if(_if_conditional303=*info->p==40,                    _if_conditional303) {
                        __result89__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value233=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value232=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1437, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count(result_type_196),(char*)come_increment_ref_count(var_name_160),(_Bool)0)));
                        if(result_type_196 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_196, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(type_name_109 && !__freed_obj__) { type_name_109 = come_decrement_ref_count(type_name_109, (void*)0, (void*)0, 0, 0, 0); }
                        if(alignas__127 && !__freed_obj__) { alignas__127 = come_decrement_ref_count(alignas__127, ((struct sNode*)alignas__127)->finalize, ((struct sNode*)alignas__127)->_protocol_obj, 0, 0, 0); } 
                        if(type_159 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_159, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_name_160 && !__freed_obj__) { var_name_160 = come_decrement_ref_count(var_name_160, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value232);
                        if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value232;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value233);
                        if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value233;
                        __freed_obj__ = 0;
                        return __result89__;
                    }
                }
                else {
                    num_anonymous_var_name_198++;
                    __dec_obj121=var_name_160;
                    var_name_160=(char*)come_increment_ref_count(((char*)(right_value234=xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name_198))));
                    if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value234);
                    if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { right_value234 = come_decrement_ref_count(right_value234, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value234;
                    __freed_obj__ = 0;
                }
                expected_next_character(41,info);
                multiple_assign_var3=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value235=parse_params(info)));
                param_types_199=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var3->v1);
                param_names_200=(struct list$1charph*)come_increment_ref_count(multiple_assign_var3->v2);
                param_default_parametors_201=(struct list$1charph*)come_increment_ref_count(multiple_assign_var3->v3);
                var_args_202=multiple_assign_var3->v4;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value235);
                if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value235;
                __freed_obj__ = 0;
                __dec_obj122=type_159;
                type_159=(struct sType*)come_increment_ref_count(((struct sType*)(right_value237=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value236=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1449, "struct sType")))),"lambda",(_Bool)0,info))));
                if(__dec_obj122) { come_call_finalizer(sType_finalize,__dec_obj122, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value236);
                if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value236;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value237);
                if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value237;
                __freed_obj__ = 0;
                __dec_obj123=type_159->mResultType;
                type_159->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value239=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value238=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function4.c", 1451, "struct tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_196)))));
                if(__dec_obj123) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj123, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value238);
                if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value238;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value239);
                if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[4] = right_value239;
                __freed_obj__ = 0;
                __dec_obj124=type_159->mParamTypes;
                type_159->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_199);
                if(__dec_obj124) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj124, (void*)0, (void*)0, 0, 0, 0, 0); }
                __dec_obj125=type_159->mParamNames;
                type_159->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_200);
                if(__dec_obj125) { come_call_finalizer(list$1charph_finalize,__dec_obj125, (void*)0, (void*)0, 0, 0, 0, 0); }
                type_159->mVarArgs=var_args_202;
                type_159->mExtern=extern__124;
                if(result_type_196 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_196, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_types_199 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_199, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_names_200 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_200, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_default_parametors_201 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_201, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                if(_if_conditional304=string_operator_equals(type_name_109,"__typeof__")&&*info->p==40,                _if_conditional304) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    exp_203=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value240=expression_v13(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value240);
                    if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { right_value240 = come_decrement_ref_count(right_value240, ((struct sNode*)right_value240)->finalize, ((struct sNode*)right_value240)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value240;
                    __freed_obj__ = 0;
                    expected_next_character(41,info);
                    if(_if_conditional305=!node_compile(exp_203,info),                    _if_conditional305) {
                        err_msg(info,"invalid __typeof__ expression");
                        __result91__ = __result_obj__ = ((struct tuple3$3voidpvoidpbool*)(right_value242=tuple3$3voidpvoidpbool_initialize((struct tuple3$3voidpvoidpbool*)come_increment_ref_count(((struct tuple3$3voidpvoidpbool*)(right_value241=(struct tuple3$3voidpvoidpbool*)come_calloc(1, sizeof(struct tuple3$3voidpvoidpbool)*(1), "05function4.c", 1467, "struct tuple3$3voidpvoidpbool")))),((void*)0),((void*)0),(_Bool)0)));
                        if(exp_203 && !__freed_obj__) { exp_203 = come_decrement_ref_count(exp_203, ((struct sNode*)exp_203)->finalize, ((struct sNode*)exp_203)->_protocol_obj, 0, 0, 0); } 
                        if(type_name_109 && !__freed_obj__) { type_name_109 = come_decrement_ref_count(type_name_109, (void*)0, (void*)0, 0, 0, 0); }
                        if(alignas__127 && !__freed_obj__) { alignas__127 = come_decrement_ref_count(alignas__127, ((struct sNode*)alignas__127)->finalize, ((struct sNode*)alignas__127)->_protocol_obj, 0, 0, 0); } 
                        if(type_159 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_159, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_name_160 && !__freed_obj__) { var_name_160 = come_decrement_ref_count(var_name_160, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value241);
                        if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { right_value241 = come_decrement_ref_count(right_value241, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value241;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value242);
                        if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3voidpvoidpboolp_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value242;
                        __freed_obj__ = 0;
                        return __result91__;
                    }
                    come_value_204=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value243=get_value_from_stack(-1,info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value243);
                    if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value243;
                    __freed_obj__ = 0;
                    dec_stack_ptr(1,info);
                    __dec_obj126=type_159;
                    type_159=(struct sType*)come_increment_ref_count(((struct sType*)(right_value244=sType_clone(come_value_204->type))));
                    if(__dec_obj126) { come_call_finalizer(sType_finalize,__dec_obj126, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value244);
                    if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value244;
                    __freed_obj__ = 0;
                    if(_if_conditional308=parse_variable_name,                    _if_conditional308) {
                        parse_sharp_v5(info);
                        if(_if_conditional309=var_name_between_brace_165&&*info->p==40,                        _if_conditional309) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(_if_conditional310=*info->p==58,                        _if_conditional310) {
                            __dec_obj127=var_name_160;
                            var_name_160=(char*)come_increment_ref_count(((char*)(right_value245=__builtin_string(""))));
                            if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value245);
                            if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { right_value245 = come_decrement_ref_count(right_value245, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value245;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional311=anonymous_name_129,                            _if_conditional311) {
                                num_anonymous_var_name_205++;
                                __dec_obj128=var_name_160;
                                var_name_160=(char*)come_increment_ref_count(((char*)(right_value246=xsprintf("anonymous_var_nameXYZL%d",num_anonymous_var_name_205))));
                                if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value246);
                                if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { right_value246 = come_decrement_ref_count(right_value246, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value246;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional312=xisalnum(*info->p)||*info->p==95,                                _if_conditional312) {
                                    __dec_obj129=var_name_160;
                                    var_name_160=(char*)come_increment_ref_count(((char*)(right_value247=parse_word(info))));
                                    if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value247);
                                    if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { right_value247 = come_decrement_ref_count(right_value247, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value247;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    num_anonymous_var_name_206++;
                                    __dec_obj130=var_name_160;
                                    var_name_160=(char*)come_increment_ref_count(((char*)(right_value248=xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_206))));
                                    if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value248);
                                    if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { right_value248 = come_decrement_ref_count(right_value248, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value248;
                                    __freed_obj__ = 0;
                                }
                            }
                        }
                        if(_if_conditional313=var_name_between_brace_165&&*info->p==41,                        _if_conditional313) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(_if_conditional314=*info->p==58,                        _if_conditional314) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_207=info->no_comma;
                            info->no_comma=(_Bool)1;
                            node_208=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value249=expression_v13(info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value249);
                            if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { right_value249 = come_decrement_ref_count(right_value249, ((struct sNode*)right_value249)->finalize, ((struct sNode*)right_value249)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value249;
                            __freed_obj__ = 0;
                            info->no_comma=no_comma_207;
                            __dec_obj131=type_159->mSizeNum;
                            type_159->mSizeNum=(struct sNode*)come_increment_ref_count(node_208);
                            if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0,0,0); }
                            if(node_208 && !__freed_obj__) { node_208 = come_decrement_ref_count(node_208, ((struct sNode*)node_208)->finalize, ((struct sNode*)node_208)->_protocol_obj, 0, 0, 0); } 
                        }
                    }
                    if(exp_203 && !__freed_obj__) { exp_203 = come_decrement_ref_count(exp_203, ((struct sNode*)exp_203)->finalize, ((struct sNode*)exp_203)->_protocol_obj, 0, 0, 0); } 
                    if(come_value_204 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_204, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                else {
                    if(_if_conditional315=map$2charphsTypephp_operator_load_element(info->types,type_name_109),                    _if_conditional315) {
                        __dec_obj132=type_159;
                        type_159=(struct sType*)come_increment_ref_count(((struct sType*)(right_value250=sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_109)))));
                        if(__dec_obj132) { come_call_finalizer(sType_finalize,__dec_obj132, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value250);
                        if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value250;
                        __freed_obj__ = 0;
                        __dec_obj133=type_159->mOriginalTypeName;
                        type_159->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value251=__builtin_string(type_name_109))));
                        if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value251);
                        if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { right_value251 = come_decrement_ref_count(right_value251, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value251;
                        __freed_obj__ = 0;
                        type_159->mOriginalTypeNamePointerNum=pointer_num_155;
                        type_159->mConstant=type_159->mConstant||constant_110;
                        __dec_obj134=type_159->mAlignas;
                        type_159->mAlignas=(struct sNode*)come_increment_ref_count(alignas__127);
                        if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0); }
                        type_159->mComeMemCore=type_159->mComeMemCore||come_mem_core__126;
                        type_159->mRegister=register__114;
                        type_159->mUnsigned=type_159->mUnsigned||unsigned__115;
                        type_159->mVolatile=volatile__113;
                        type_159->mStatic=type_159->mStatic||static__111;
                        type_159->mExtern=type_159->mExtern||extern__124;
                        type_159->mInline=type_159->mInline||inline__125;
                        type_159->mRestrict=type_159->mRestrict||restrict__119;
                        type_159->mLongLong=type_159->mLongLong||long_long_117;
                        type_159->mLong=type_159->mLong||long__116;
                        type_159->mShort=type_159->mShort||short__118;
                        type_159->mPointerNum+=pointer_num_155;
                    }
                    else {
                        if(_if_conditional316=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_109)),                        _if_conditional316) {
                            for(
                            i_209=0 ,                            0;                            _for_condtionalA6=                            i_209<list$1charph_length(info->generics_type_names) ,                            _for_condtionalA6;                            i_209++ ,                            0                            ){
                                if(_if_conditional317=string_operator_equals(list$1charphp_operator_load_element(info->generics_type_names,i_209),type_name_109),                                _if_conditional317) {
                                    __dec_obj135=type_159;
                                    type_159=(struct sType*)come_increment_ref_count(((struct sType*)(right_value254=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value252=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1543, "struct sType")))),((char*)(right_value253=xsprintf("generics_type%d",i_209))),(_Bool)0,info))));
                                    if(__dec_obj135) { come_call_finalizer(sType_finalize,__dec_obj135, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value252);
                                    if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value252;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value253);
                                    if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { right_value253 = come_decrement_ref_count(right_value253, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value253;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value254);
                                    if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[2] = right_value254;
                                    __freed_obj__ = 0;
                                }
                            }
                            type_159->mConstant=type_159->mConstant||constant_110;
                            __dec_obj136=type_159->mAlignas;
                            type_159->mAlignas=(struct sNode*)come_increment_ref_count(alignas__127);
                            if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0,0); }
                            type_159->mComeMemCore=type_159->mComeMemCore||come_mem_core__126;
                            type_159->mRegister=register__114;
                            type_159->mUnsigned=type_159->mUnsigned||unsigned__115;
                            type_159->mVolatile=volatile__113;
                            type_159->mStatic=type_159->mStatic||static__111;
                            type_159->mExtern=type_159->mExtern||extern__124;
                            type_159->mInline=type_159->mInline||inline__125;
                            type_159->mRestrict=type_159->mRestrict||restrict__119;
                            type_159->mLongLong=type_159->mLongLong||long_long_117;
                            type_159->mLong=type_159->mLong||long__116;
                            type_159->mShort=type_159->mShort||short__118;
                            type_159->mPointerNum+=pointer_num_155;
                        }
                        else {
                            if(_if_conditional318=*info->p==60,                            _if_conditional318) {
                                info->p++;
                                skip_spaces_and_lf(info);
                                if(_if_conditional323=map$2charphsClassphp_operator_load_element(info->generics_classes,type_name_109)==((void*)0),                                _if_conditional323) {
                                    __result97__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value259=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value258=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1568, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                    if(type_name_109 && !__freed_obj__) { type_name_109 = come_decrement_ref_count(type_name_109, (void*)0, (void*)0, 0, 0, 0); }
                                    if(alignas__127 && !__freed_obj__) { alignas__127 = come_decrement_ref_count(alignas__127, ((struct sNode*)alignas__127)->finalize, ((struct sNode*)alignas__127)->_protocol_obj, 0, 0, 0); } 
                                    if(type_159 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_159, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(var_name_160 && !__freed_obj__) { var_name_160 = come_decrement_ref_count(var_name_160, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value258);
                                    if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value258;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value259);
                                    if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value259;
                                    __freed_obj__ = 0;
                                    return __result97__;
                                }
                                __dec_obj137=type_159;
                                type_159=(struct sType*)come_increment_ref_count(((struct sType*)(right_value261=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value260=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1571, "struct sType")))),type_name_109,(_Bool)0,info))));
                                if(__dec_obj137) { come_call_finalizer(sType_finalize,__dec_obj137, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value260);
                                if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value260;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value261);
                                if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value261;
                                __freed_obj__ = 0;
                                while(_while_condtional37=(_Bool)1,                                _while_condtional37) {
                                    multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value262=parse_type(info,(_Bool)0,(_Bool)0)));
                                    generics_type_213=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                                    var_name_214=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                                    err_215=multiple_assign_var4->v3;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value262);
                                    if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value262;
                                    __freed_obj__ = 0;
                                    if(_if_conditional324=!err_215,                                    _if_conditional324) {
                                        __result98__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value264=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value263=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1577, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                        if(generics_type_213 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_213, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(var_name_214 && !__freed_obj__) { var_name_214 = come_decrement_ref_count(var_name_214, (void*)0, (void*)0, 0, 0, 0); }
                                        if(type_name_109 && !__freed_obj__) { type_name_109 = come_decrement_ref_count(type_name_109, (void*)0, (void*)0, 0, 0, 0); }
                                        if(alignas__127 && !__freed_obj__) { alignas__127 = come_decrement_ref_count(alignas__127, ((struct sNode*)alignas__127)->finalize, ((struct sNode*)alignas__127)->_protocol_obj, 0, 0, 0); } 
                                        if(type_159 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_159, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(var_name_160 && !__freed_obj__) { var_name_160 = come_decrement_ref_count(var_name_160, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value263);
                                        if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value263;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value264);
                                        if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[1] = right_value264;
                                        __freed_obj__ = 0;
                                        return __result98__;
                                    }
                                    list$1sTypeph_push_back(type_159->mGenericsTypes,(struct sType*)come_increment_ref_count(generics_type_213));
                                    if(_if_conditional325=*info->p==44,                                    _if_conditional325) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                    }
                                    else {
                                        if(_if_conditional326=*info->p==62,                                        _if_conditional326) {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                            if(generics_type_213 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_213, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(var_name_214 && !__freed_obj__) { var_name_214 = come_decrement_ref_count(var_name_214, (void*)0, (void*)0, 0, 0, 0); }
                                            break;
                                        }
                                        else {
                                            err_msg(info,"invalid generics type\n");
                                            __result99__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value266=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value265=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1594, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                            if(generics_type_213 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_213, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(var_name_214 && !__freed_obj__) { var_name_214 = come_decrement_ref_count(var_name_214, (void*)0, (void*)0, 0, 0, 0); }
                                            if(type_name_109 && !__freed_obj__) { type_name_109 = come_decrement_ref_count(type_name_109, (void*)0, (void*)0, 0, 0, 0); }
                                            if(alignas__127 && !__freed_obj__) { alignas__127 = come_decrement_ref_count(alignas__127, ((struct sNode*)alignas__127)->finalize, ((struct sNode*)alignas__127)->_protocol_obj, 0, 0, 0); } 
                                            if(type_159 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_159, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(var_name_160 && !__freed_obj__) { var_name_160 = come_decrement_ref_count(var_name_160, (void*)0, (void*)0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value265);
                                            if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value265;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value266);
                                            if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[1] = right_value266;
                                            __freed_obj__ = 0;
                                            return __result99__;
                                        }
                                    }
                                    if(generics_type_213 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_213, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(var_name_214 && !__freed_obj__) { var_name_214 = come_decrement_ref_count(var_name_214, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(_if_conditional327=is_contained_generics_class(type_159,info),                                _if_conditional327) {
                                    __dec_obj138=type_159;
                                    type_159=(struct sType*)come_increment_ref_count(((struct sType*)(right_value267=solve_generics(type_159,info->generics_type,info))));
                                    if(__dec_obj138) { come_call_finalizer(sType_finalize,__dec_obj138, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value267);
                                    if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value267;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional328=!output_generics_struct(type_159,type_159,info),                                    _if_conditional328) {
                                        new_name_216=(char*)come_increment_ref_count(((char*)(right_value268=create_generics_name(type_159,info))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value268);
                                        if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { right_value268 = come_decrement_ref_count(right_value268, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value268;
                                        __freed_obj__ = 0;
                                        printf("%s %d: output generics is failed(%s)\n",info->sname,info->sline,new_name_216);
                                        exit(7);
                                        if(new_name_216 && !__freed_obj__) { new_name_216 = come_decrement_ref_count(new_name_216, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                }
                                type_159->mConstant=type_159->mConstant||constant_110;
                                __dec_obj139=type_159->mAlignas;
                                type_159->mAlignas=(struct sNode*)come_increment_ref_count(alignas__127);
                                if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0,0,0); }
                                type_159->mComeMemCore=type_159->mComeMemCore||come_mem_core__126;
                                type_159->mRegister=register__114;
                                type_159->mUnsigned=type_159->mUnsigned||unsigned__115;
                                type_159->mVolatile=volatile__113;
                                type_159->mStatic=type_159->mStatic||static__111;
                                type_159->mExtern=type_159->mExtern||extern__124;
                                type_159->mInline=type_159->mInline||inline__125;
                                type_159->mRestrict=type_159->mRestrict||restrict__119;
                                type_159->mLongLong=type_159->mLongLong||long_long_117;
                                type_159->mLong=type_159->mLong||long__116;
                                type_159->mShort=type_159->mShort||short__118;
                                type_159->mPointerNum+=pointer_num_155;
                            }
                            else {
                                if(_if_conditional329=struct__120,                                _if_conditional329) {
                                    klass_217=map$2charphsClassphp_operator_load_element(info->classes,type_name_109);
                                    if(_if_conditional330=klass_217==((void*)0)&&*info->p!=60,                                    _if_conditional330) {
                                        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_109),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value280=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value279=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05function4.c", 1630, "struct sClass")))),type_name_109,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value279);
                                        if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value279;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value280);
                                        if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[1] = right_value280;
                                        __freed_obj__ = 0;
                                    }
                                }
                                __dec_obj140=type_159;
                                type_159=(struct sType*)come_increment_ref_count(((struct sType*)(right_value282=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value281=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1634, "struct sType")))),type_name_109,(_Bool)0,info))));
                                if(__dec_obj140) { come_call_finalizer(sType_finalize,__dec_obj140, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value281);
                                if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value281;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value282);
                                if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value282;
                                __freed_obj__ = 0;
                                type_159->mConstant=type_159->mConstant||constant_110;
                                __dec_obj141=type_159->mAlignas;
                                type_159->mAlignas=(struct sNode*)come_increment_ref_count(alignas__127);
                                if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0,0); }
                                type_159->mComeMemCore=type_159->mComeMemCore||come_mem_core__126;
                                type_159->mRegister=register__114;
                                type_159->mUnsigned=type_159->mUnsigned||unsigned__115;
                                type_159->mVolatile=volatile__113;
                                type_159->mStatic=type_159->mStatic||static__111;
                                type_159->mExtern=type_159->mExtern||extern__124;
                                type_159->mInline=type_159->mInline||inline__125;
                                type_159->mRestrict=type_159->mRestrict||restrict__119;
                                type_159->mLongLong=type_159->mLongLong||long_long_117;
                                type_159->mLong=type_159->mLong||long__116;
                                type_159->mShort=type_159->mShort||short__118;
                                type_159->mPointerNum+=pointer_num_155;
                            }
                        }
                    }
                    skip_pointer_attribute(info);
                    while(_while_condtional47=*info->p==42,                    _while_condtional47) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        skip_pointer_attribute(info);
                        type_159->mPointerNum++;
                        if(_if_conditional384=type_159->mNoSolvedGenericsType->v1,                        _if_conditional384) {
                            type_159->mNoSolvedGenericsType->v1->mPointerNum++;
                        }
                    }
                    if(_if_conditional385=*info->p==37,                    _if_conditional385) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_159->mHeap=(_Bool)1;
                        if(_if_conditional386=type_159->mNoSolvedGenericsType->v1,                        _if_conditional386) {
                            type_159->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
                        }
                    }
                    if(_if_conditional387=*info->p==38,                    _if_conditional387) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_159->mNoHeap=(_Bool)1;
                        if(_if_conditional388=type_159->mNoSolvedGenericsType->v1,                        _if_conditional388) {
                            type_159->mNoSolvedGenericsType->v1->mHeap=(_Bool)0;
                        }
                    }
                    if(_if_conditional389=*info->p==63,                    _if_conditional389) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_159->mNullValue=(_Bool)1;
                    }
                    if(_if_conditional390=*info->p==124,                    _if_conditional390) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_159->mNoCallingDestructor=(_Bool)1;
                    }
                    skip_pointer_attribute(info);
                    while(_while_condtional48=*info->p==42,                    _while_condtional48) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        skip_pointer_attribute(info);
                        type_159->mPointerNum++;
                        if(_if_conditional391=type_159->mNoSolvedGenericsType->v1,                        _if_conditional391) {
                            type_159->mNoSolvedGenericsType->v1->mPointerNum++;
                        }
                    }
                    if(_if_conditional392=parse_multiple_type&&*info->p==44,                    _if_conditional392) {
                        types_264=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value284=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value283=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function4.c", 1716, "struct list$1sTypeph"))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value283);
                        if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value283;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value284);
                        if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value284;
                        __freed_obj__ = 0;
                        list$1sTypeph_push_back(types_264,(struct sType*)come_increment_ref_count(((struct sType*)(right_value285=sType_clone(type_159)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value285);
                        if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value285;
                        __freed_obj__ = 0;
                        while(_while_condtional49=*info->p==44,                        _while_condtional49) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value286=parse_type(info,(_Bool)0,(_Bool)0)));
                            type2_265=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                            name_266=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                            err_267=multiple_assign_var5->v3;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value286);
                            if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value286;
                            __freed_obj__ = 0;
                            if(_if_conditional393=!err_267,                            _if_conditional393) {
                                __result124__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value288=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value287=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1727, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                if(type2_265 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_265, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(name_266 && !__freed_obj__) { name_266 = come_decrement_ref_count(name_266, (void*)0, (void*)0, 0, 0, 0); }
                                if(types_264 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,types_264, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(type_name_109 && !__freed_obj__) { type_name_109 = come_decrement_ref_count(type_name_109, (void*)0, (void*)0, 0, 0, 0); }
                                if(alignas__127 && !__freed_obj__) { alignas__127 = come_decrement_ref_count(alignas__127, ((struct sNode*)alignas__127)->finalize, ((struct sNode*)alignas__127)->_protocol_obj, 0, 0, 0); } 
                                if(type_159 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_159, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(var_name_160 && !__freed_obj__) { var_name_160 = come_decrement_ref_count(var_name_160, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value287);
                                if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value287;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value288);
                                if(right_value288 && right_value288 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value288;
                                __freed_obj__ = 0;
                                return __result124__;
                            }
                            list$1sTypeph_push_back(types_264,(struct sType*)come_increment_ref_count(((struct sType*)(right_value289=sType_clone(type2_265)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value289);
                            if(right_value289 && right_value289 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value289;
                            __freed_obj__ = 0;
                            if(type2_265 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_265, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(name_266 && !__freed_obj__) { name_266 = come_decrement_ref_count(name_266, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        num_tuples_268=list$1sTypeph_length(types_264);
                        __dec_obj142=type_159;
                        type_159=(struct sType*)come_increment_ref_count(((struct sType*)(right_value292=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value290=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1735, "struct sType")))),((char*)(right_value291=xsprintf("tuple%d",num_tuples_268))),(_Bool)0,info))));
                        if(__dec_obj142) { come_call_finalizer(sType_finalize,__dec_obj142, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value290);
                        if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value290;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value291);
                        if(right_value291 && right_value291 != __result_obj__ && !__freed_obj__) { right_value291 = come_decrement_ref_count(right_value291, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[4] = right_value291;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value292);
                        if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[5] = right_value292;
                        __freed_obj__ = 0;
                        type_159->mPointerNum++;
                        type_159->mHeap=(_Bool)1;
                        for(
                        o2_saved_269=(struct list$1sTypeph*)come_increment_ref_count((types_264)),it_270=list$1sTypeph_begin((o2_saved_269)) ,                        0;                        _for_condtionalA9=                        !list$1sTypeph_end((o2_saved_269)) ,                        _for_condtionalA9;                        it_270=list$1sTypeph_next((o2_saved_269)) ,                        0                        ){
                            list$1sTypeph_push_back(type_159->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value293=sType_clone(it_270)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value293);
                            if(right_value293 && right_value293 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value293;
                            __freed_obj__ = 0;
                        }
                        if(o2_saved_269 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_269, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(_if_conditional394=is_contained_generics_class(type_159,info),                        _if_conditional394) {
                            __dec_obj143=type_159;
                            type_159=(struct sType*)come_increment_ref_count(((struct sType*)(right_value294=solve_generics(type_159,info->generics_type,info))));
                            if(__dec_obj143) { come_call_finalizer(sType_finalize,__dec_obj143, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value294);
                            if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value294;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional395=!output_generics_struct(type_159,type_159,info),                            _if_conditional395) {
                                new_name_271=(char*)come_increment_ref_count(((char*)(right_value295=create_generics_name(type_159,info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value295);
                                if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { right_value295 = come_decrement_ref_count(right_value295, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value295;
                                __freed_obj__ = 0;
                                printf("output generics is failed(%s)\n",new_name_271);
                                exit(9);
                                if(new_name_271 && !__freed_obj__) { new_name_271 = come_decrement_ref_count(new_name_271, (void*)0, (void*)0, 0, 0, 0); }
                            }
                        }
                        if(types_264 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,types_264, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional396=parse_variable_name,                    _if_conditional396) {
                        parse_sharp_v5(info);
                        if(_if_conditional397=var_name_between_brace_165&&*info->p==40,                        _if_conditional397) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(_if_conditional398=*info->p==58,                        _if_conditional398) {
                            __dec_obj144=var_name_160;
                            var_name_160=(char*)come_increment_ref_count(((char*)(right_value296=__builtin_string(""))));
                            if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value296);
                            if(right_value296 && right_value296 != __result_obj__ && !__freed_obj__) { right_value296 = come_decrement_ref_count(right_value296, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value296;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional399=anonymous_name_129,                            _if_conditional399) {
                                num_anonymous_var_name_272++;
                                __dec_obj145=var_name_160;
                                var_name_160=(char*)come_increment_ref_count(((char*)(right_value297=xsprintf("anonymous_var_nameXYZLO%d",num_anonymous_var_name_272))));
                                if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value297);
                                if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { right_value297 = come_decrement_ref_count(right_value297, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value297;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional400=xisalnum(*info->p)||*info->p==95,                                _if_conditional400) {
                                    __dec_obj146=var_name_160;
                                    var_name_160=(char*)come_increment_ref_count(((char*)(right_value298=parse_word(info))));
                                    if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value298);
                                    if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { right_value298 = come_decrement_ref_count(right_value298, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value298;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    num_anonymous_var_name_273++;
                                    __dec_obj147=var_name_160;
                                    var_name_160=(char*)come_increment_ref_count(((char*)(right_value299=xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_273))));
                                    if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value299);
                                    if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { right_value299 = come_decrement_ref_count(right_value299, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value299;
                                    __freed_obj__ = 0;
                                }
                            }
                        }
                        if(_if_conditional401=var_name_between_brace_165&&*info->p==41,                        _if_conditional401) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(_if_conditional402=*info->p==58,                        _if_conditional402) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_274=info->no_comma;
                            info->no_comma=(_Bool)1;
                            node_275=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value300=expression_v13(info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value300);
                            if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { right_value300 = come_decrement_ref_count(right_value300, ((struct sNode*)right_value300)->finalize, ((struct sNode*)right_value300)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value300;
                            __freed_obj__ = 0;
                            info->no_comma=no_comma_274;
                            __dec_obj148=type_159->mSizeNum;
                            type_159->mSizeNum=(struct sNode*)come_increment_ref_count(node_275);
                            if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0,0); }
                            if(node_275 && !__freed_obj__) { node_275 = come_decrement_ref_count(node_275, ((struct sNode*)node_275)->finalize, ((struct sNode*)node_275)->_protocol_obj, 0, 0, 0); } 
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
        if(_if_conditional403=*info->p==93,        _if_conditional403) {
            info->p++;
            skip_spaces_and_lf(info);
            type_159->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_276=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value301=expression_v13(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value301);
        if(right_value301 && right_value301 != __result_obj__ && !__freed_obj__) { right_value301 = come_decrement_ref_count(right_value301, ((struct sNode*)right_value301)->finalize, ((struct sNode*)right_value301)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[0] = right_value301;
        __freed_obj__ = 0;
        list$1sNodeph_push_back(type_159->mArrayNum,(struct sNode*)come_increment_ref_count(node_276));
        parse_sharp_v5(info);
        expected_next_character(93,info);
        if(node_276 && !__freed_obj__) { node_276 = come_decrement_ref_count(node_276, ((struct sNode*)node_276)->finalize, ((struct sNode*)node_276)->_protocol_obj, 0, 0, 0); } 
    }
    asm_name_277=(char*)come_increment_ref_count(((char*)(right_value302=parse_attribute(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value302);
    if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { right_value302 = come_decrement_ref_count(right_value302, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value302;
    __freed_obj__ = 0;
    __dec_obj149=type_159->mAsmName;
    type_159->mAsmName=(char*)come_increment_ref_count(asm_name_277);
    if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count(__dec_obj149, (void*)0, (void*)0, 0,0,0); }
    parse_sharp_v5(info);
    if(_if_conditional404=exception__112,    _if_conditional404) {
        type2_278=(struct sType*)come_increment_ref_count(((struct sType*)(right_value304=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value303=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1830, "struct sType")))),"optional",(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value303);
        if(right_value303 && right_value303 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value303;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value304);
        if(right_value304 && right_value304 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value304;
        __freed_obj__ = 0;
        list$1sTypeph_add(type2_278->mGenericsTypes,(struct sType*)come_increment_ref_count(type_159));
        list$1sTypeph_add(type2_278->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value306=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value305=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1832, "struct sType")))),"bool",(_Bool)0,info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value305);
        if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value305;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value306);
        if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value306;
        __freed_obj__ = 0;
        type2_278->mPointerNum++;
        type2_278->mHeap=(_Bool)1;
        type2_278->mException=(_Bool)1;
        if(_if_conditional405=!is_contained_generics_class(type2_278,info),        _if_conditional405) {
            if(_if_conditional406=!output_generics_struct(type2_278,type2_278,info),            _if_conditional406) {
                err_msg(info,"invalid exception definition");
                __result125__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value308=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value307=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1842, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                if(type2_278 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_278, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_name_109 && !__freed_obj__) { type_name_109 = come_decrement_ref_count(type_name_109, (void*)0, (void*)0, 0, 0, 0); }
                if(alignas__127 && !__freed_obj__) { alignas__127 = come_decrement_ref_count(alignas__127, ((struct sNode*)alignas__127)->finalize, ((struct sNode*)alignas__127)->_protocol_obj, 0, 0, 0); } 
                if(type_159 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_159, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(var_name_160 && !__freed_obj__) { var_name_160 = come_decrement_ref_count(var_name_160, (void*)0, (void*)0, 0, 0, 0); }
                if(asm_name_277 && !__freed_obj__) { asm_name_277 = come_decrement_ref_count(asm_name_277, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value307);
                if(right_value307 && right_value307 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value307;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value308);
                if(right_value308 && right_value308 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value308;
                __freed_obj__ = 0;
                return __result125__;
            }
        }
        __result126__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value310=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value309=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1846, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count(type2_278),(char*)come_increment_ref_count(var_name_160),(_Bool)1)));
        if(type2_278 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_278, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type_name_109 && !__freed_obj__) { type_name_109 = come_decrement_ref_count(type_name_109, (void*)0, (void*)0, 0, 0, 0); }
        if(alignas__127 && !__freed_obj__) { alignas__127 = come_decrement_ref_count(alignas__127, ((struct sNode*)alignas__127)->finalize, ((struct sNode*)alignas__127)->_protocol_obj, 0, 0, 0); } 
        if(type_159 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_159, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(var_name_160 && !__freed_obj__) { var_name_160 = come_decrement_ref_count(var_name_160, (void*)0, (void*)0, 0, 0, 0); }
        if(asm_name_277 && !__freed_obj__) { asm_name_277 = come_decrement_ref_count(asm_name_277, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value309);
        if(right_value309 && right_value309 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value309;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value310);
        if(right_value310 && right_value310 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value310;
        __freed_obj__ = 0;
        return __result126__;
        if(type2_278 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_278, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result127__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value312=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value311=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1849, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count(type_159),(char*)come_increment_ref_count(var_name_160),(_Bool)1)));
    if(type_name_109 && !__freed_obj__) { type_name_109 = come_decrement_ref_count(type_name_109, (void*)0, (void*)0, 0, 0, 0); }
    if(alignas__127 && !__freed_obj__) { alignas__127 = come_decrement_ref_count(alignas__127, ((struct sNode*)alignas__127)->finalize, ((struct sNode*)alignas__127)->_protocol_obj, 0, 0, 0); } 
    if(type_159 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_159, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_160 && !__freed_obj__) { var_name_160 = come_decrement_ref_count(var_name_160, (void*)0, (void*)0, 0, 0, 0); }
    if(asm_name_277 && !__freed_obj__) { asm_name_277 = come_decrement_ref_count(asm_name_277, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value311);
    if(right_value311 && right_value311 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value311;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value312);
    if(right_value312 && right_value312 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value312;
    __freed_obj__ = 0;
    return __result127__;
    if(type_name_109 && !__freed_obj__) { type_name_109 = come_decrement_ref_count(type_name_109, (void*)0, (void*)0, 0, 0, 0); }
    if(alignas__127 && !__freed_obj__) { alignas__127 = come_decrement_ref_count(alignas__127, ((struct sNode*)alignas__127)->finalize, ((struct sNode*)alignas__127)->_protocol_obj, 0, 0, 0); } 
    if(type_159 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_159, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_160 && !__freed_obj__) { var_name_160 = come_decrement_ref_count(var_name_160, (void*)0, (void*)0, 0, 0, 0); }
    if(asm_name_277 && !__freed_obj__) { asm_name_277 = come_decrement_ref_count(asm_name_277, (void*)0, (void*)0, 0, 0, 0); }
}

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value129;
struct sType* __dec_obj57;
void* right_value130;
char* __dec_obj58;
struct tuple3$3sTypephcharphbool* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
                                __dec_obj57=self->v1;
                                self->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value129=sType_clone(v1))));
                                if(__dec_obj57) { come_call_finalizer(sType_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
                                if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value129;
                                __freed_obj__ = 0;
                                __dec_obj58=self->v2;
                                self->v2=(char*)come_increment_ref_count(((char*)(right_value130=string_clone(v2))));
                                if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value130);
                                if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value130;
                                __freed_obj__ = 0;
                                self->v3=v3;
                                __result61__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
                                return __result61__;
                                if(self && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* default_value_180;
unsigned int hash_181;
unsigned int it_182;
_Bool _while_condtional34;
_Bool _if_conditional283;
void* right_value209;
_Bool _if_conditional284;
struct sType* __result71__;
_Bool _if_conditional285;
_Bool _if_conditional286;
struct sType* __result72__;
struct sType* __result73__;
void* right_value210;
void* right_value211;
struct sType* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_180, 0, sizeof(struct sType*));
memset(&hash_181, 0, sizeof(unsigned int));
memset(&it_182, 0, sizeof(unsigned int));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value210, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
                memset(&default_value_180,0,sizeof(struct sType*));
                hash_181=string_get_hash_key(((char*)key))%self->size;
                it_182=hash_181;
                while(_while_condtional34=(_Bool)1,                _while_condtional34) {
                    if(_if_conditional283=self->item_existance[it_182],                    _if_conditional283) {
                        if(_if_conditional284=optional$2boolbool_value(((struct optional$2boolbool*)(right_value209=string_equals(self->keys[it_182],key)))),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value209),
                        (right_value209 && right_value209 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value209, 
                        __freed_obj__ = 0, 
                        _if_conditional284) {
                            __result71__ = __result_obj__ = self->items[it_182];
                            return __result71__;
                        }
                        it_182++;
                        if(_if_conditional285=it_182>=self->size,                        _if_conditional285) {
                            it_182=0;
                        }
                        else {
                            if(_if_conditional286=it_182==hash_181,                            _if_conditional286) {
                                __result72__ = __result_obj__ = default_value_180;
                                return __result72__;
                            }
                        }
                    }
                    else {
                        __result73__ = __result_obj__ = default_value_180;
                        return __result73__;
                    }
                }
                __result75__ = __result_obj__ = ((struct optional$2sTypepbool*)(right_value211=optional$2sTypepbool_initialize(((struct optional$2sTypepbool*)(right_value210=(struct optional$2sTypepbool*)come_calloc(1, sizeof(struct optional$2sTypepbool)*(1), "./comelang2.h", 1622, "struct optional$2sTypepbool"))),default_value_180,(_Bool)0)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value210);
                if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { right_value210 = come_decrement_ref_count(right_value210, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value210;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value211);
                if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypepboolp_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value211;
                __freed_obj__ = 0;
                return __result75__;
}

static struct optional$2sTypepbool* optional$2sTypepbool_initialize(struct optional$2sTypepbool* self, struct sType* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sTypepbool* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    self->v1=v1;
                    self->v2=v2;
                    __result74__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypepboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result74__;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypepboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sTypepboolp_finalize(struct optional$2sTypepbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static _Bool list$1charph_contained(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* it_185;
_Bool _for_condtionalA3;
_Bool _if_conditional292;
_Bool __result83__;
_Bool __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_185, 0, sizeof(char*));
                    for(
                    it_185=list$1charph_begin(self) ,                    0;                    _for_condtionalA3=                    !list$1charph_end(self) ,                    _for_condtionalA3;                    it_185=list$1charph_next(self) ,                    0                    ){
                        if(_if_conditional292=string_operator_equals(it_185,item),                        _if_conditional292) {
                            __result83__ = (_Bool)1;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                            return __result83__;
                        }
                    }
                    __result84__ = (_Bool)0;
                    if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                    return __result84__;
                    if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional288;
char* result_183;
char* __result76__;
_Bool _if_conditional289;
char* __result77__;
char* result_184;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_183, 0, sizeof(char*));
memset(&result_184, 0, sizeof(char*));
                        if(_if_conditional288=self==((void*)0),                        _if_conditional288) {
                            memset(&result_183,0,sizeof(char*));
                            __result76__ = __result_obj__ = result_183;
                            return __result76__;
                        }
                        self->it=self->head;
                        if(_if_conditional289=self->it,                        _if_conditional289) {
                            __result77__ = __result_obj__ = self->it->item;
                            return __result77__;
                        }
                        memset(&result_184,0,sizeof(char*));
                        __result78__ = __result_obj__ = result_184;
                        return __result78__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result79__ = self==((void*)0)||self->it==((void*)0);
                        return __result79__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional290;
char* result_186;
char* __result80__;
_Bool _if_conditional291;
char* __result81__;
char* result_187;
char* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_186, 0, sizeof(char*));
memset(&result_187, 0, sizeof(char*));
                        if(_if_conditional290=self==((void*)0)||self->it==((void*)0),                        _if_conditional290) {
                            memset(&result_186,0,sizeof(char*));
                            __result80__ = __result_obj__ = result_186;
                            return __result80__;
                        }
                        self->it=self->it->next;
                        if(_if_conditional291=self->it,                        _if_conditional291) {
                            __result81__ = __result_obj__ = self->it->item;
                            return __result81__;
                        }
                        memset(&result_187,0,sizeof(char*));
                        __result82__ = __result_obj__ = result_187;
                        return __result82__;
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result85__ = self->len;
                        return __result85__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional294;
struct list_item$1charph* it_189;
int i_190;
_Bool _while_condtional35;
_Bool _if_conditional295;
char* __result86__;
char* default_value_191;
char* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_189, 0, sizeof(struct list_item$1charph*));
memset(&i_190, 0, sizeof(int));
memset(&default_value_191, 0, sizeof(char*));
                            if(_if_conditional294=position<0,                            _if_conditional294) {
                                position+=self->len;
                            }
                            it_189=self->head;
                            i_190=0;
                            while(_while_condtional35=it_189!=((void*)0),                            _while_condtional35) {
                                if(_if_conditional295=position==i_190,                                _if_conditional295) {
                                    __result86__ = __result_obj__ = it_189->item;
                                    return __result86__;
                                }
                                it_189=it_189->next;
                                i_190++;
                            }
                            memset(&default_value_191,0,sizeof(char*));
                            __result87__ = __result_obj__ = default_value_191;
                            if(default_value_191 && !__freed_obj__) { default_value_191 = come_decrement_ref_count(default_value_191, (void*)0, (void*)0, 0, 1, 0); }
                            return __result87__;
                            if(default_value_191 && !__freed_obj__) { default_value_191 = come_decrement_ref_count(default_value_191, (void*)0, (void*)0, 0, 0, 0); }
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value223;
struct sType* __dec_obj112;
struct tuple1$1sTypeph* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value223, 0, sizeof(void*));
                __dec_obj112=self->v1;
                self->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value223=sType_clone(v1))));
                if(__dec_obj112) { come_call_finalizer(sType_finalize,__dec_obj112, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value223);
                if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value223;
                __freed_obj__ = 0;
                __result88__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result88__;
                if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct tuple3$3voidpvoidpbool* tuple3$3voidpvoidpbool_initialize(struct tuple3$3voidpvoidpbool* self, void* v1, void* v2, _Bool v3){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct tuple3$3voidpvoidpbool* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            self->v1=v1;
                            self->v2=v2;
                            self->v3=v3;
                            __result90__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(tuple3$3voidpvoidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result90__;
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
_Bool _if_conditional306;
_Bool _if_conditional307;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional306=self!=((void*)0)&&self->c_value!=((void*)0),                        _if_conditional306) {
                            if(self->c_value && !__freed_obj__) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        if(_if_conditional307=self!=((void*)0)&&self->type!=((void*)0),                        _if_conditional307) {
                            if(self->type && !__freed_obj__) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* default_value_210;
unsigned int hash_211;
unsigned int it_212;
_Bool _while_condtional36;
_Bool _if_conditional319;
void* right_value255;
_Bool _if_conditional320;
struct sClass* __result92__;
_Bool _if_conditional321;
_Bool _if_conditional322;
struct sClass* __result93__;
struct sClass* __result94__;
void* right_value256;
void* right_value257;
struct sClass* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_210, 0, sizeof(struct sClass*));
memset(&hash_211, 0, sizeof(unsigned int));
memset(&it_212, 0, sizeof(unsigned int));
memset(&right_value255, 0, sizeof(void*));
memset(&right_value256, 0, sizeof(void*));
memset(&right_value257, 0, sizeof(void*));
                                    memset(&default_value_210,0,sizeof(struct sClass*));
                                    hash_211=string_get_hash_key(((char*)key))%self->size;
                                    it_212=hash_211;
                                    while(_while_condtional36=(_Bool)1,                                    _while_condtional36) {
                                        if(_if_conditional319=self->item_existance[it_212],                                        _if_conditional319) {
                                            if(_if_conditional320=optional$2boolbool_value(((struct optional$2boolbool*)(right_value255=string_equals(self->keys[it_212],key)))),                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value255),
                                            (right_value255 && right_value255 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                            __right_value_freed_obj[0] = right_value255, 
                                            __freed_obj__ = 0, 
                                            _if_conditional320) {
                                                __result92__ = __result_obj__ = self->items[it_212];
                                                return __result92__;
                                            }
                                            it_212++;
                                            if(_if_conditional321=it_212>=self->size,                                            _if_conditional321) {
                                                it_212=0;
                                            }
                                            else {
                                                if(_if_conditional322=it_212==hash_211,                                                _if_conditional322) {
                                                    __result93__ = __result_obj__ = default_value_210;
                                                    return __result93__;
                                                }
                                            }
                                        }
                                        else {
                                            __result94__ = __result_obj__ = default_value_210;
                                            return __result94__;
                                        }
                                    }
                                    __result96__ = __result_obj__ = ((struct optional$2sClasspbool*)(right_value257=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value256=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1622, "struct optional$2sClasspbool"))),default_value_210,(_Bool)0)));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value256);
                                    if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { right_value256 = come_decrement_ref_count(right_value256, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value256;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value257);
                                    if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value257;
                                    __freed_obj__ = 0;
                                    return __result96__;
}

static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sClasspbool* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        self->v1=v1;
                                        self->v2=v2;
                                        __result95__ = __result_obj__ = self;
                                        if(self && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        return __result95__;
                                        if(self && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sClasspboolp_finalize(struct optional$2sClasspbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional331;
unsigned int hash_237;
unsigned int it_238;
_Bool _while_condtional41;
_Bool _if_conditional349;
void* right_value273;
_Bool _if_conditional350;
_Bool _if_conditional351;
_Bool _if_conditional371;
_Bool _if_conditional372;
_Bool _if_conditional373;
_Bool _if_conditional374;
_Bool _if_conditional375;
_Bool same_key_exist_255;
char* it2_258;
_Bool _for_condtionalA8;
void* right_value275;
_Bool _if_conditional380;
_Bool _if_conditional381;
struct map$2charphsClassph* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_237, 0, sizeof(unsigned int));
memset(&it_238, 0, sizeof(unsigned int));
memset(&right_value273, 0, sizeof(void*));
memset(&same_key_exist_255, 0, sizeof(_Bool));
memset(&it2_258, 0, sizeof(char*));
memset(&right_value275, 0, sizeof(void*));
                                            if(_if_conditional331=self->len*10>=self->size,                                            _if_conditional331) {
                                                map$2charphsClassph_rehash(self);
                                            }
                                            hash_237=string_get_hash_key(key)%self->size;
                                            it_238=hash_237;
                                            while(_while_condtional41=(_Bool)1,                                            _while_condtional41) {
                                                if(_if_conditional349=self->item_existance[it_238],                                                _if_conditional349) {
                                                    if(_if_conditional350=optional$2boolbool_value(((struct optional$2boolbool*)(right_value273=string_equals(self->keys[it_238],key)))),                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value273),
                                                    (right_value273 && right_value273 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                    __right_value_freed_obj[0] = right_value273, 
                                                    __freed_obj__ = 0, 
                                                    _if_conditional350) {
                                                        if(_if_conditional351=1,                                                        _if_conditional351) {
                                                            list$1charp_remove(self->key_list,self->keys[it_238]);
                                                            if(self->keys[it_238] && !__freed_obj__) { self->keys[it_238] = come_decrement_ref_count(self->keys[it_238], (void*)0, (void*)0, 0, 0, 0); }
                                                            self->keys[it_238]=(char*)come_increment_ref_count(key);
                                                        }
                                                        else {
                                                            list$1charp_remove(self->key_list,self->keys[it_238]);
                                                            self->keys[it_238]=key;
                                                        }
                                                        if(_if_conditional371=1,                                                        _if_conditional371) {
                                                            if(self->items[it_238] && !__freed_obj__) { come_call_finalizer(sClass_finalize,self->items[it_238], (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            self->items[it_238]=(struct sClass*)come_increment_ref_count(item);
                                                        }
                                                        else {
                                                            self->items[it_238]=item;
                                                        }
                                                        break;
                                                    }
                                                    it_238++;
                                                    if(_if_conditional372=it_238>=self->size,                                                    _if_conditional372) {
                                                        it_238=0;
                                                    }
                                                    else {
                                                        if(_if_conditional373=it_238==hash_237,                                                        _if_conditional373) {
                                                            printf("unexpected error in map.insert\n");
                                                            stackframe();
                                                            exit(2);
                                                        }
                                                    }
                                                }
                                                else {
                                                    self->item_existance[it_238]=(_Bool)1;
                                                    if(_if_conditional374=1,                                                    _if_conditional374) {
                                                        self->keys[it_238]=(char*)come_increment_ref_count(key);
                                                    }
                                                    else {
                                                        self->keys[it_238]=key;
                                                    }
                                                    if(_if_conditional375=1,                                                    _if_conditional375) {
                                                        self->items[it_238]=(struct sClass*)come_increment_ref_count(item);
                                                    }
                                                    else {
                                                        self->items[it_238]=item;
                                                    }
                                                    self->len++;
                                                    break;
                                                }
                                            }
                                            same_key_exist_255=(_Bool)0;
                                            for(
                                            it2_258=list$1charp_begin(self->key_list) ,                                            0;                                            _for_condtionalA8=                                            !list$1charp_end(self->key_list) ,                                            _for_condtionalA8;                                            it2_258=list$1charp_next(self->key_list) ,                                            0                                            ){
                                                if(_if_conditional380=optional$2boolbool_value(((struct optional$2boolbool*)(right_value275=string_equals(it2_258,key)))),                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value275),
                                                (right_value275 && right_value275 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                __right_value_freed_obj[0] = right_value275, 
                                                __freed_obj__ = 0, 
                                                _if_conditional380) {
                                                    same_key_exist_255=(_Bool)1;
                                                }
                                            }
                                            if(_if_conditional381=!same_key_exist_255,                                            _if_conditional381) {
                                                list$1charp_push_back(self->key_list,key);
                                            }
                                            __result123__ = __result_obj__ = self;
                                            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                                            if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            return __result123__;
                                            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                                            if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_218;
void* right_value269;
char** keys_219;
void* right_value270;
struct sClass** items_220;
void* right_value271;
_Bool* item_existance_223;
int len_224;
char* it_227;
_Bool _for_condtionalA7;
struct sClass* default_value_230;
struct sClass* it2_233;
unsigned int hash_234;
int n_235;
_Bool _while_condtional40;
_Bool _if_conditional346;
_Bool _if_conditional347;
_Bool _if_conditional348;
struct sClass* default_value_236;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_218, 0, sizeof(int));
memset(&right_value269, 0, sizeof(void*));
memset(&keys_219, 0, sizeof(char**));
memset(&right_value270, 0, sizeof(void*));
memset(&items_220, 0, sizeof(struct sClass**));
memset(&right_value271, 0, sizeof(void*));
memset(&item_existance_223, 0, sizeof(_Bool*));
memset(&len_224, 0, sizeof(int));
memset(&it_227, 0, sizeof(char*));
memset(&default_value_230, 0, sizeof(struct sClass*));
memset(&it2_233, 0, sizeof(struct sClass*));
memset(&hash_234, 0, sizeof(unsigned int));
memset(&n_235, 0, sizeof(int));
memset(&default_value_236, 0, sizeof(struct sClass*));
                                                    size_218=self->size*10;
                                                    keys_219=(char**)come_increment_ref_count(((char**)(right_value269=(char**)come_calloc(1, sizeof(char*)*(1*(size_218)), "./comelang2.h", 1380, "char*"))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value269);
                                                    if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { right_value269 = come_decrement_ref_count(right_value269, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value269;
                                                    __freed_obj__ = 0;
                                                    items_220=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value270=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_218)), "./comelang2.h", 1381, "struct sClass*"))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value270);
                                                    if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[1] = right_value270;
                                                    __freed_obj__ = 0;
                                                    item_existance_223=(_Bool*)come_increment_ref_count(((_Bool*)(right_value271=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_218)), "./comelang2.h", 1382, "_Bool"))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value271);
                                                    if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { right_value271 = come_decrement_ref_count(right_value271, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[2] = right_value271;
                                                    __freed_obj__ = 0;
                                                    len_224=0;
                                                    for(
                                                    it_227=map$2charphsClassph_begin(self) ,                                                    0;                                                    _for_condtionalA7=                                                    !map$2charphsClassph_end(self) ,                                                    _for_condtionalA7;                                                    it_227=map$2charphsClassph_next(self) ,                                                    0                                                    ){
                                                        memset(&default_value_230,0,sizeof(struct sClass*));
                                                        it2_233=map$2charphsClassph_at(self,it_227,default_value_230);
                                                        hash_234=string_get_hash_key(it_227)%size_218;
                                                        n_235=hash_234;
                                                        while(_while_condtional40=(_Bool)1,                                                        _while_condtional40) {
                                                            if(_if_conditional346=item_existance_223[n_235],                                                            _if_conditional346) {
                                                                n_235++;
                                                                if(_if_conditional347=n_235>=size_218,                                                                _if_conditional347) {
                                                                    n_235=0;
                                                                }
                                                                else {
                                                                    if(_if_conditional348=n_235==hash_234,                                                                    _if_conditional348) {
                                                                        printf("unexpected error in map.rehash(1)\n");
                                                                        stackframe();
                                                                        exit(2);
                                                                    }
                                                                }
                                                            }
                                                            else {
                                                                item_existance_223[n_235]=(_Bool)1;
                                                                keys_219[n_235]=it_227;
                                                                items_220[n_235]=map$2charphsClassph_at(self,it_227,default_value_236);
                                                                len_224++;
                                                                break;
                                                            }
                                                        }
                                                    }
                                                    come_free((char*)self->items);
                                                    if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                                                    come_free((char*)self->keys);
                                                    self->keys=keys_219;
                                                    self->items=items_220;
                                                    self->item_existance=item_existance_223;
                                                    self->size=size_218;
                                                    self->len=len_224;
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional332;
_Bool _if_conditional333;
_Bool _if_conditional337;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        if(_if_conditional332=self!=((void*)0)&&self->mName!=((void*)0),                                                        _if_conditional332) {
                                                            if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                                                        }
                                                        if(_if_conditional333=self!=((void*)0)&&self->mFields!=((void*)0),                                                        _if_conditional333) {
                                                            if(self->mFields && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        }
                                                        if(_if_conditional337=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                                        _if_conditional337) {
                                                            if(self->mDeclareSName && !__freed_obj__) { self->mDeclareSName = come_decrement_ref_count(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
                                                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphsTypephph* it_221;
_Bool _while_condtional38;
struct list_item$1tuple2$2charphsTypephph* prev_it_222;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_221, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_222, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                                                it_221=self->head;
                                                                while(_while_condtional38=it_221!=((void*)0),                                                                _while_condtional38) {
                                                                    prev_it_222=it_221;
                                                                    it_221=it_221->next;
                                                                    if(prev_it_222 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_222, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional334;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                                        if(_if_conditional334=self!=((void*)0)&&self->item!=((void*)0),                                                                        _if_conditional334) {
                                                                            if(self->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional335;
_Bool _if_conditional336;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                                                if(_if_conditional335=self!=((void*)0)&&self->v1!=((void*)0),                                                                                _if_conditional335) {
                                                                                    if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                                                                                }
                                                                                if(_if_conditional336=self!=((void*)0)&&self->v2!=((void*)0),                                                                                _if_conditional336) {
                                                                                    if(self->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                }
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional338;
char* result_225;
char* __result100__;
_Bool _if_conditional339;
char* __result101__;
char* result_226;
char* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_225, 0, sizeof(char*));
memset(&result_226, 0, sizeof(char*));
                                                        if(_if_conditional338=self==((void*)0),                                                        _if_conditional338) {
                                                            memset(&result_225,0,sizeof(char*));
                                                            __result100__ = __result_obj__ = result_225;
                                                            return __result100__;
                                                        }
                                                        self->key_list->it=self->key_list->head;
                                                        if(_if_conditional339=self->key_list->it,                                                        _if_conditional339) {
                                                            __result101__ = __result_obj__ = self->key_list->it->item;
                                                            return __result101__;
                                                        }
                                                        memset(&result_226,0,sizeof(char*));
                                                        __result102__ = __result_obj__ = result_226;
                                                        return __result102__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        __result103__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                                                        return __result103__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional340;
char* result_228;
char* __result104__;
_Bool _if_conditional341;
char* __result105__;
char* result_229;
char* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_228, 0, sizeof(char*));
memset(&result_229, 0, sizeof(char*));
                                                        if(_if_conditional340=self==((void*)0)||self->key_list->it==((void*)0),                                                        _if_conditional340) {
                                                            memset(&result_228,0,sizeof(char*));
                                                            __result104__ = __result_obj__ = result_228;
                                                            return __result104__;
                                                        }
                                                        self->key_list->it=self->key_list->it->next;
                                                        if(_if_conditional341=self->key_list->it,                                                        _if_conditional341) {
                                                            __result105__ = __result_obj__ = self->key_list->it->item;
                                                            return __result105__;
                                                        }
                                                        memset(&result_229,0,sizeof(char*));
                                                        __result106__ = __result_obj__ = result_229;
                                                        return __result106__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_231;
unsigned int it_232;
_Bool _while_condtional39;
_Bool _if_conditional342;
void* right_value272;
_Bool _if_conditional343;
struct sClass* __result107__;
_Bool _if_conditional344;
_Bool _if_conditional345;
struct sClass* __result108__;
struct sClass* __result109__;
struct sClass* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_231, 0, sizeof(unsigned int));
memset(&it_232, 0, sizeof(unsigned int));
memset(&right_value272, 0, sizeof(void*));
                                                            hash_231=string_get_hash_key(((char*)key))%self->size;
                                                            it_232=hash_231;
                                                            while(_while_condtional39=(_Bool)1,                                                            _while_condtional39) {
                                                                if(_if_conditional342=self->item_existance[it_232],                                                                _if_conditional342) {
                                                                    if(_if_conditional343=optional$2boolbool_value(((struct optional$2boolbool*)(right_value272=string_equals(self->keys[it_232],key)))),                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value272),
                                                                    (right_value272 && right_value272 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                                    __right_value_freed_obj[0] = right_value272, 
                                                                    __freed_obj__ = 0, 
                                                                    _if_conditional343) {
                                                                        __result107__ = __result_obj__ = self->items[it_232];
                                                                        return __result107__;
                                                                    }
                                                                    it_232++;
                                                                    if(_if_conditional344=it_232>=self->size,                                                                    _if_conditional344) {
                                                                        it_232=0;
                                                                    }
                                                                    else {
                                                                        if(_if_conditional345=it_232==hash_231,                                                                        _if_conditional345) {
                                                                            __result108__ = __result_obj__ = default_value;
                                                                            return __result108__;
                                                                        }
                                                                    }
                                                                }
                                                                else {
                                                                    __result109__ = __result_obj__ = default_value;
                                                                    return __result109__;
                                                                }
                                                            }
                                                            __result110__ = __result_obj__ = default_value;
                                                            return __result110__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int it2_239;
struct list_item$1charp* it_240;
_Bool _while_condtional42;
void* right_value274;
_Bool _if_conditional352;
struct list$1charp* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_239, 0, sizeof(int));
memset(&it_240, 0, sizeof(struct list_item$1charp*));
memset(&right_value274, 0, sizeof(void*));
                                                                it2_239=0;
                                                                it_240=self->head;
                                                                while(_while_condtional42=it_240!=((void*)0),                                                                _while_condtional42) {
                                                                    if(_if_conditional352=optional$2boolbool_value(((struct optional$2boolbool*)(right_value274=string_equals(it_240->item,item)))),                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value274),
                                                                    (right_value274 && right_value274 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                                    __right_value_freed_obj[0] = right_value274, 
                                                                    __freed_obj__ = 0, 
                                                                    _if_conditional352) {
                                                                        list$1charp_delete(self,it2_239,it2_239+1);
                                                                        break;
                                                                    }
                                                                    it2_239++;
                                                                    it_240=it_240->next;
                                                                }
                                                                __result114__ = __result_obj__ = self;
                                                                return __result114__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional353;
_Bool _if_conditional354;
_Bool _if_conditional355;
int tmp_241;
_Bool _if_conditional356;
_Bool _if_conditional357;
_Bool _if_conditional358;
struct list$1charp* __result111__;
_Bool _if_conditional359;
_Bool _if_conditional360;
struct list_item$1charp* it_244;
int i_245;
_Bool _while_condtional44;
_Bool _if_conditional361;
struct list_item$1charp* prev_it_246;
_Bool _if_conditional362;
_Bool _if_conditional363;
struct list_item$1charp* it_247;
int i_248;
_Bool _while_condtional45;
_Bool _if_conditional364;
_Bool _if_conditional365;
struct list_item$1charp* prev_it_249;
struct list_item$1charp* it_250;
struct list_item$1charp* head_prev_it_251;
struct list_item$1charp* tail_it_252;
int i_253;
_Bool _while_condtional46;
_Bool _if_conditional366;
_Bool _if_conditional367;
_Bool _if_conditional368;
struct list_item$1charp* prev_it_254;
_Bool _if_conditional369;
_Bool _if_conditional370;
struct list$1charp* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_241, 0, sizeof(int));
memset(&it_244, 0, sizeof(struct list_item$1charp*));
memset(&i_245, 0, sizeof(int));
memset(&prev_it_246, 0, sizeof(struct list_item$1charp*));
memset(&it_247, 0, sizeof(struct list_item$1charp*));
memset(&i_248, 0, sizeof(int));
memset(&prev_it_249, 0, sizeof(struct list_item$1charp*));
memset(&it_250, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_251, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_252, 0, sizeof(struct list_item$1charp*));
memset(&i_253, 0, sizeof(int));
memset(&prev_it_254, 0, sizeof(struct list_item$1charp*));
                                                                            if(_if_conditional353=head<0,                                                                            _if_conditional353) {
                                                                                head+=self->len;
                                                                            }
                                                                            if(_if_conditional354=tail<0,                                                                            _if_conditional354) {
                                                                                tail+=self->len+1;
                                                                            }
                                                                            if(_if_conditional355=head>tail,                                                                            _if_conditional355) {
                                                                                tmp_241=tail;
                                                                                tail=head;
                                                                                head=tmp_241;
                                                                            }
                                                                            if(_if_conditional356=head<0,                                                                            _if_conditional356) {
                                                                                head=0;
                                                                            }
                                                                            if(_if_conditional357=tail>self->len,                                                                            _if_conditional357) {
                                                                                tail=self->len;
                                                                            }
                                                                            if(_if_conditional358=head==tail,                                                                            _if_conditional358) {
                                                                                __result111__ = __result_obj__ = self;
                                                                                return __result111__;
                                                                            }
                                                                            if(_if_conditional359=head==0&&tail==self->len,                                                                            _if_conditional359) {
                                                                                list$1charp_reset(self);
                                                                            }
                                                                            else {
                                                                                if(_if_conditional360=head==0,                                                                                _if_conditional360) {
                                                                                    it_244=self->head;
                                                                                    i_245=0;
                                                                                    while(_while_condtional44=it_244!=((void*)0),                                                                                    _while_condtional44) {
                                                                                        if(_if_conditional361=i_245<tail,                                                                                        _if_conditional361) {
                                                                                            prev_it_246=it_244;
                                                                                            it_244=it_244->next;
                                                                                            i_245++;
                                                                                            if(prev_it_246 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_246, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                            self->len--;
                                                                                        }
                                                                                        else {
                                                                                            if(_if_conditional362=i_245==tail,                                                                                            _if_conditional362) {
                                                                                                self->head=it_244;
                                                                                                self->head->prev=((void*)0);
                                                                                                break;
                                                                                            }
                                                                                            else {
                                                                                                it_244=it_244->next;
                                                                                                i_245++;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional363=tail==self->len,                                                                                    _if_conditional363) {
                                                                                        it_247=self->head;
                                                                                        i_248=0;
                                                                                        while(_while_condtional45=it_247!=((void*)0),                                                                                        _while_condtional45) {
                                                                                            if(_if_conditional364=i_248==head,                                                                                            _if_conditional364) {
                                                                                                self->tail=it_247->prev;
                                                                                                self->tail->next=((void*)0);
                                                                                            }
                                                                                            if(_if_conditional365=i_248>=head,                                                                                            _if_conditional365) {
                                                                                                prev_it_249=it_247;
                                                                                                it_247=it_247->next;
                                                                                                i_248++;
                                                                                                if(prev_it_249 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_249, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                                self->len--;
                                                                                            }
                                                                                            else {
                                                                                                it_247=it_247->next;
                                                                                                i_248++;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                    else {
                                                                                        it_250=self->head;
                                                                                        head_prev_it_251=((void*)0);
                                                                                        tail_it_252=((void*)0);
                                                                                        i_253=0;
                                                                                        while(_while_condtional46=it_250!=((void*)0),                                                                                        _while_condtional46) {
                                                                                            if(_if_conditional366=i_253==head,                                                                                            _if_conditional366) {
                                                                                                head_prev_it_251=it_250->prev;
                                                                                            }
                                                                                            if(_if_conditional367=i_253==tail,                                                                                            _if_conditional367) {
                                                                                                tail_it_252=it_250;
                                                                                            }
                                                                                            if(_if_conditional368=i_253>=head&&i_253<tail,                                                                                            _if_conditional368) {
                                                                                                prev_it_254=it_250;
                                                                                                it_250=it_250->next;
                                                                                                i_253++;
                                                                                                if(prev_it_254 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_254, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                                self->len--;
                                                                                            }
                                                                                            else {
                                                                                                it_250=it_250->next;
                                                                                                i_253++;
                                                                                            }
                                                                                        }
                                                                                        if(_if_conditional369=head_prev_it_251!=((void*)0),                                                                                        _if_conditional369) {
                                                                                            head_prev_it_251->next=tail_it_252;
                                                                                        }
                                                                                        if(_if_conditional370=tail_it_252!=((void*)0),                                                                                        _if_conditional370) {
                                                                                            tail_it_252->prev=head_prev_it_251;
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                            __result113__ = __result_obj__ = self;
                                                                            return __result113__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_242;
_Bool _while_condtional43;
struct list_item$1charp* prev_it_243;
struct list$1charp* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_242, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_243, 0, sizeof(struct list_item$1charp*));
                                                                                    it_242=self->head;
                                                                                    while(_while_condtional43=it_242!=((void*)0),                                                                                    _while_condtional43) {
                                                                                        prev_it_243=it_242;
                                                                                        it_242=it_242->next;
                                                                                        if(prev_it_243 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_243, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                    }
                                                                                    self->head=((void*)0);
                                                                                    self->tail=((void*)0);
                                                                                    self->len=0;
                                                                                    __result112__ = __result_obj__ = self;
                                                                                    return __result112__;
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
_Bool _if_conditional376;
char* result_256;
char* __result115__;
_Bool _if_conditional377;
char* __result116__;
char* result_257;
char* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_256, 0, sizeof(char*));
memset(&result_257, 0, sizeof(char*));
                                                if(_if_conditional376=self==((void*)0),                                                _if_conditional376) {
                                                    memset(&result_256,0,sizeof(char*));
                                                    __result115__ = __result_obj__ = result_256;
                                                    return __result115__;
                                                }
                                                self->it=self->head;
                                                if(_if_conditional377=self->it,                                                _if_conditional377) {
                                                    __result116__ = __result_obj__ = self->it->item;
                                                    return __result116__;
                                                }
                                                memset(&result_257,0,sizeof(char*));
                                                __result117__ = __result_obj__ = result_257;
                                                return __result117__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                __result118__ = self==((void*)0)||self->it==((void*)0);
                                                return __result118__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional378;
char* result_259;
char* __result119__;
_Bool _if_conditional379;
char* __result120__;
char* result_260;
char* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_259, 0, sizeof(char*));
memset(&result_260, 0, sizeof(char*));
                                                if(_if_conditional378=self==((void*)0)||self->it==((void*)0),                                                _if_conditional378) {
                                                    memset(&result_259,0,sizeof(char*));
                                                    __result119__ = __result_obj__ = result_259;
                                                    return __result119__;
                                                }
                                                self->it=self->it->next;
                                                if(_if_conditional379=self->it,                                                _if_conditional379) {
                                                    __result120__ = __result_obj__ = self->it->item;
                                                    return __result120__;
                                                }
                                                memset(&result_260,0,sizeof(char*));
                                                __result121__ = __result_obj__ = result_260;
                                                return __result121__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional382;
void* right_value276;
struct list_item$1charp* litem_261;
_Bool _if_conditional383;
void* right_value277;
struct list_item$1charp* litem_262;
void* right_value278;
struct list_item$1charp* litem_263;
struct list$1charp* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value276, 0, sizeof(void*));
memset(&litem_261, 0, sizeof(struct list_item$1charp*));
memset(&right_value277, 0, sizeof(void*));
memset(&litem_262, 0, sizeof(struct list_item$1charp*));
memset(&right_value278, 0, sizeof(void*));
memset(&litem_263, 0, sizeof(struct list_item$1charp*));
                                                    if(_if_conditional382=self->len==0,                                                    _if_conditional382) {
                                                        litem_261=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value276=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 282, "struct list_item$1charp"))));
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value276);
                                                        if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value276;
                                                        __freed_obj__ = 0;
                                                        litem_261->prev=((void*)0);
                                                        litem_261->next=((void*)0);
                                                        litem_261->item=item;
                                                        self->tail=litem_261;
                                                        self->head=litem_261;
                                                    }
                                                    else {
                                                        if(_if_conditional383=self->len==1,                                                        _if_conditional383) {
                                                            litem_262=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value277=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 292, "struct list_item$1charp"))));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value277);
                                                            if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value277;
                                                            __freed_obj__ = 0;
                                                            litem_262->prev=self->head;
                                                            litem_262->next=((void*)0);
                                                            litem_262->item=item;
                                                            self->tail=litem_262;
                                                            self->head->next=litem_262;
                                                        }
                                                        else {
                                                            litem_263=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value278=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 302, "struct list_item$1charp"))));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value278);
                                                            if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value278;
                                                            __freed_obj__ = 0;
                                                            litem_263->prev=self->tail;
                                                            litem_263->next=((void*)0);
                                                            litem_263->item=item;
                                                            self->tail->next=litem_263;
                                                            self->tail=litem_263;
                                                        }
                                                    }
                                                    self->len++;
                                                    __result122__ = __result_obj__ = self;
                                                    return __result122__;
}

