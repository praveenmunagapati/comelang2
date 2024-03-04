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
struct sPlusPlusNode
{
    struct sNode* mLeft;
    int sline;
    char* sname;
    _Bool mQuote;
};
struct sMinusMinusNode
{
    struct sNode* mLeft;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sPlusEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sMinusEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sMultEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sDivEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sModEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sLShifEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sRShiftEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sXorEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sOrEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sAndEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sExpEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
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

struct sPlusPlusNode* sPlusPlusNode_initialize(struct sPlusPlusNode* self, struct sNode* left, _Bool quote, struct sInfo* info);

static struct sNode* sNode_clone(struct sNode* self);
_Bool sPlusPlusNode_terminated();

char* sPlusPlusNode_kind();

_Bool sPlusPlusNode_compile(struct sPlusPlusNode* self, struct sInfo* info);

static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
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
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
int sPlusPlusNode_sline(struct sPlusPlusNode* self, struct sInfo* info);

char* sPlusPlusNode_sname(struct sPlusPlusNode* self, struct sInfo* info);

struct sMinusMinusNode* sMinusMinusNode_initialize(struct sMinusMinusNode* self, struct sNode* left, _Bool quote, struct sInfo* info);

_Bool sMinusMinusNode_terminated();

char* sMinusMinusNode_kind();

_Bool sMinusMinusNode_compile(struct sMinusMinusNode* self, struct sInfo* info);

int sMinusMinusNode_sline(struct sMinusMinusNode* self, struct sInfo* info);

char* sMinusMinusNode_sname(struct sMinusMinusNode* self, struct sInfo* info);

struct sPlusEqualNode* sPlusEqualNode_initialize(struct sPlusEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sPlusEqualNode_terminated();

char* sPlusEqualNode_kind();

_Bool sPlusEqualNode_compile(struct sPlusEqualNode* self, struct sInfo* info);

int sPlusEqualNode_sline(struct sPlusEqualNode* self, struct sInfo* info);

char* sPlusEqualNode_sname(struct sPlusEqualNode* self, struct sInfo* info);

struct sMinusEqualNode* sMinusEqualNode_initialize(struct sMinusEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sMinusEqualNode_terminated();

char* sMinusEqualNode_kind();

_Bool sMinusEqualNode_compile(struct sMinusEqualNode* self, struct sInfo* info);

int sMinusEqualNode_sline(struct sMinusEqualNode* self, struct sInfo* info);

char* sMinusEqualNode_sname(struct sMinusEqualNode* self, struct sInfo* info);

struct sMultEqualNode* sMultEqualNode_initialize(struct sMultEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sMultEqualNode_terminated();

char* sMultEqualNode_kind();

_Bool sMultEqualNode_compile(struct sMultEqualNode* self, struct sInfo* info);

int sMultEqualNode_sline(struct sMultEqualNode* self, struct sInfo* info);

char* sMultEqualNode_sname(struct sMultEqualNode* self, struct sInfo* info);

struct sDivEqualNode* sDivEqualNode_initialize(struct sDivEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sDivEqualNode_terminated();

char* sDivEqualNode_kind();

_Bool sDivEqualNode_compile(struct sDivEqualNode* self, struct sInfo* info);

int sDivEqualNode_sline(struct sDivEqualNode* self, struct sInfo* info);

char* sDivEqualNode_sname(struct sDivEqualNode* self, struct sInfo* info);

struct sModEqualNode* sModEqualNode_initialize(struct sModEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sModEqualNode_terminated();

char* sModEqualNode_kind();

_Bool sModEqualNode_compile(struct sModEqualNode* self, struct sInfo* info);

int sModEqualNode_sline(struct sModEqualNode* self, struct sInfo* info);

char* sModEqualNode_sname(struct sModEqualNode* self, struct sInfo* info);

struct sLShifEqualNode* sLShifEqualNode_initialize(struct sLShifEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sLShifEqualNode_terminated();

char* sLShifEqualNode_kind();

_Bool sLShifEqualNode_compile(struct sLShifEqualNode* self, struct sInfo* info);

int sLShifEqualNode_sline(struct sLShifEqualNode* self, struct sInfo* info);

char* sLShifEqualNode_sname(struct sLShifEqualNode* self, struct sInfo* info);

struct sRShiftEqualNode* sRShiftEqualNode_initialize(struct sRShiftEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sRShiftEqualNode_terminated();

char* sRShiftEqualNode_kind();

_Bool sRShiftEqualNode_compile(struct sRShiftEqualNode* self, struct sInfo* info);

int sRShiftEqualNode_sline(struct sRShiftEqualNode* self, struct sInfo* info);

char* sRShiftEqualNode_sname(struct sRShiftEqualNode* self, struct sInfo* info);

struct sXorEqualNode* sXorEqualNode_initialize(struct sXorEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sXorEqualNode_terminated();

char* sXorEqualNode_kind();

_Bool sXorEqualNode_compile(struct sXorEqualNode* self, struct sInfo* info);

int sXorEqualNode_sline(struct sXorEqualNode* self, struct sInfo* info);

char* sXorEqualNode_sname(struct sXorEqualNode* self, struct sInfo* info);

struct sOrEqualNode* sOrEqualNode_initialize(struct sOrEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sOrEqualNode_terminated();

char* sOrEqualNode_kind();

_Bool sOrEqualNode_compile(struct sOrEqualNode* self, struct sInfo* info);

int sOrEqualNode_sline(struct sOrEqualNode* self, struct sInfo* info);

char* sOrEqualNode_sname(struct sOrEqualNode* self, struct sInfo* info);

struct sAndEqualNode* sAndEqualNode_initialize(struct sAndEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sAndEqualNode_terminated();

char* sAndEqualNode_kind();

_Bool sAndEqualNode_compile(struct sAndEqualNode* self, struct sInfo* info);

int sAndEqualNode_sline(struct sAndEqualNode* self, struct sInfo* info);

char* sAndEqualNode_sname(struct sAndEqualNode* self, struct sInfo* info);

struct sExpEqualNode* sExpEqualNode_initialize(struct sExpEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sExpEqualNode_terminated();

char* sExpEqualNode_kind();

_Bool sExpEqualNode_compile(struct sExpEqualNode* self, struct sInfo* info);

int sExpEqualNode_sline(struct sExpEqualNode* self, struct sInfo* info);

char* sExpEqualNode_sname(struct sExpEqualNode* self, struct sInfo* info);

struct sNode* post_position_operator2_v19(struct sNode* node, struct sInfo* info);

static void sPlusPlusNode_finalize(struct sPlusPlusNode* self);
static struct sPlusPlusNode* sPlusPlusNode_clone(struct sPlusPlusNode* self);
static void sMinusMinusNode_finalize(struct sMinusMinusNode* self);
static struct sMinusMinusNode* sMinusMinusNode_clone(struct sMinusMinusNode* self);
static void sPlusEqualNode_finalize(struct sPlusEqualNode* self);
static struct sPlusEqualNode* sPlusEqualNode_clone(struct sPlusEqualNode* self);
static void sMinusEqualNode_finalize(struct sMinusEqualNode* self);
static struct sMinusEqualNode* sMinusEqualNode_clone(struct sMinusEqualNode* self);
static void sMultEqualNode_finalize(struct sMultEqualNode* self);
static struct sMultEqualNode* sMultEqualNode_clone(struct sMultEqualNode* self);
static void sDivEqualNode_finalize(struct sDivEqualNode* self);
static struct sDivEqualNode* sDivEqualNode_clone(struct sDivEqualNode* self);
static void sModEqualNode_finalize(struct sModEqualNode* self);
static struct sModEqualNode* sModEqualNode_clone(struct sModEqualNode* self);
static void sLShifEqualNode_finalize(struct sLShifEqualNode* self);
static struct sLShifEqualNode* sLShifEqualNode_clone(struct sLShifEqualNode* self);
static void sRShiftEqualNode_finalize(struct sRShiftEqualNode* self);
static struct sRShiftEqualNode* sRShiftEqualNode_clone(struct sRShiftEqualNode* self);
static void sXorEqualNode_finalize(struct sXorEqualNode* self);
static struct sXorEqualNode* sXorEqualNode_clone(struct sXorEqualNode* self);
static void sAndEqualNode_finalize(struct sAndEqualNode* self);
static struct sAndEqualNode* sAndEqualNode_clone(struct sAndEqualNode* self);
static void sOrEqualNode_finalize(struct sOrEqualNode* self);
static struct sOrEqualNode* sOrEqualNode_clone(struct sOrEqualNode* self);
static void sExpEqualNode_finalize(struct sExpEqualNode* self);
static struct sExpEqualNode* sExpEqualNode_clone(struct sExpEqualNode* self);
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




struct sPlusPlusNode* sPlusPlusNode_initialize(struct sPlusPlusNode* self, struct sNode* left, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value13;
char* __dec_obj6;
void* right_value15;
struct sNode* __dec_obj7;
struct sPlusPlusNode* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
right_value13 = (void*)0;
right_value15 = (void*)0;
    self->sline=info->sline;
    __dec_obj6=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value13=__builtin_string(info->sname))));
    __dec_obj6 = come_decrement_ref_count2(__dec_obj6, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value13 = come_decrement_ref_count2(right_value13, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj7=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value15=sNode_clone(left))));
    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count2(__dec_obj7, ((struct sNode*)__dec_obj7)->finalize, ((struct sNode*)__dec_obj7)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value15) { right_value15 = come_decrement_ref_count2(right_value15, ((struct sNode*)right_value15)->finalize, ((struct sNode*)right_value15)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->mQuote=quote;
    __result12__ = __result_obj__ = self;
    come_call_finalizer2(sPlusPlusNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result12__;
    come_call_finalizer2(sPlusPlusNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional5;
struct sNode* __result10__;
void* right_value14;
struct sNode* result_5;
_Bool _if_conditional6;
_Bool _if_conditional7;
_Bool _if_conditional8;
_Bool _if_conditional9;
_Bool _if_conditional10;
_Bool _if_conditional11;
_Bool _if_conditional12;
_Bool _if_conditional13;
struct sNode* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
right_value14 = (void*)0;
memset(&result_5, 0, sizeof(struct sNode*));
        if(_if_conditional5=self==(void*)0,        _if_conditional5) {
            __result10__ = __result_obj__ = (void*)0;
            return __result10__;
        }
        result_5=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
        if(right_value14) { right_value14 = come_decrement_ref_count2(right_value14, ((struct sNode*)right_value14)->finalize, ((struct sNode*)right_value14)->_protocol_obj, 1, 0, 0, __result_obj__); } 
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
        __result11__ = __result_obj__ = result_5;
        if(result_5) { result_5 = come_decrement_ref_count2(result_5, ((struct sNode*)result_5)->finalize, ((struct sNode*)result_5)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result11__;
        if(result_5) { result_5 = come_decrement_ref_count2(result_5, ((struct sNode*)result_5)->finalize, ((struct sNode*)result_5)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

_Bool sPlusPlusNode_terminated(){
void* __result_obj__;
_Bool __result13__;
memset(&__result_obj__, 0, sizeof(void*));
    __result13__ = (_Bool)0;
    return __result13__;
}

char* sPlusPlusNode_kind(){
void* __result_obj__;
void* right_value16;
char* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
right_value16 = (void*)0;
    __result14__ = __result_obj__ = ((char*)(right_value16=__builtin_string("sPlusPlusNode")));
    right_value16 = come_decrement_ref_count2(right_value16, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result14__;
}

_Bool sPlusPlusNode_compile(struct sPlusPlusNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_6;
_Bool _if_conditional16;
_Bool __result15__;
void* right_value17;
struct CVALUE* left_value_7;
struct sType* type_14;
char* fun_name_15;
_Bool calling_fun_16;
_Bool _if_conditional35;
_Bool _if_conditional36;
void* right_value18;
struct CVALUE* come_value_17;
void* right_value19;
char* __dec_obj8;
void* right_value53;
struct sType* __dec_obj31;
_Bool __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_6, 0, sizeof(struct sNode*));
right_value17 = (void*)0;
memset(&left_value_7, 0, sizeof(struct CVALUE*));
memset(&type_14, 0, sizeof(struct sType*));
memset(&fun_name_15, 0, sizeof(char*));
memset(&calling_fun_16, 0, sizeof(_Bool));
right_value18 = (void*)0;
memset(&come_value_17, 0, sizeof(struct CVALUE*));
right_value19 = (void*)0;
right_value53 = (void*)0;
    left_6=self->mLeft;
    if(_if_conditional16=!node_compile(left_6,info),    _if_conditional16) {
        __result15__ = (_Bool)0;
        return __result15__;
    }
    left_value_7=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value17=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_14=(struct sType*)come_increment_ref_count(left_value_7->type);
    fun_name_15="operator_plus_plus";
    if(self->mQuote) {
        calling_fun_16=(_Bool)0;
    }
    else {
        calling_fun_16=operator_overload_fun_self(type_14,fun_name_15,left_value_7,info);
    }
    if(_if_conditional36=!calling_fun_16,    _if_conditional36) {
        come_value_17=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value18=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 57, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj8=come_value_17->c_value;
        come_value_17->c_value=(char*)come_increment_ref_count(((char*)(right_value19=xsprintf("%s++",left_value_7->c_value))));
        __dec_obj8 = come_decrement_ref_count2(__dec_obj8, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value19 = come_decrement_ref_count2(right_value19, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj31=come_value_17->type;
        come_value_17->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value53=sType_clone(left_value_7->type))));
        come_call_finalizer2(sType_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_17->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_17));
        add_come_last_code(info,"%s;\n",come_value_17->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result33__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result33__;
    come_call_finalizer2(CVALUE_finalize,left_value_7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional17;
_Bool _if_conditional18;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional17=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional17) {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional18=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional18) {
            come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional19;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional25;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional30;
_Bool _if_conditional31;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _if_conditional34;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional19=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional19) {
                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional21=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional21) {
                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional22=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional22) {
                    self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional23=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional23) {
                    come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional25=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional25) {
                    come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional27=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional27) {
                    come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional28=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional28) {
                    come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional30=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional30) {
                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional31=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional31) {
                    if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional32=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional32) {
                    if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional33=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional33) {
                    self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional34=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional34) {
                    self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional20;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional20=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional20) {
                            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_8;
_Bool _while_condtional1;
struct list_item$1sTypeph* prev_it_9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_8, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_9, 0, sizeof(struct list_item$1sTypeph*));
                        it_8=self->head;
                        while(_while_condtional1=it_8!=((void*)0),                        _while_condtional1) {
                            prev_it_9=it_8;
                            it_8=it_8->next;
                            come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional24=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional24) {
                                    come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_10;
_Bool _while_condtional2;
struct list_item$1sNodeph* prev_it_11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_10, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_11, 0, sizeof(struct list_item$1sNodeph*));
                        it_10=self->head;
                        while(_while_condtional2=it_10!=((void*)0),                        _while_condtional2) {
                            prev_it_11=it_10;
                            it_10=it_10->next;
                            come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional26;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional26=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional26) {
                                    if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_12;
_Bool _while_condtional3;
struct list_item$1charph* prev_it_13;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_12, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_13, 0, sizeof(struct list_item$1charph*));
                        it_12=self->head;
                        while(_while_condtional3=it_12!=((void*)0),                        _while_condtional3) {
                            prev_it_13=it_12;
                            it_12=it_12->next;
                            come_call_finalizer2(list_item$1charphp_finalize,prev_it_13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional29;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional29=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional29) {
                                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional37;
struct sType* __result16__;
void* right_value20;
struct sType* result_18;
_Bool _if_conditional38;
_Bool _if_conditional39;
void* right_value23;
struct tuple1$1sTypeph* __dec_obj10;
_Bool _if_conditional43;
void* right_value24;
struct tuple1$1sTypeph* __dec_obj11;
_Bool _if_conditional44;
void* right_value25;
char* __dec_obj12;
_Bool _if_conditional45;
void* right_value32;
struct list$1sTypeph* __dec_obj16;
_Bool _if_conditional49;
void* right_value39;
struct list$1sNodeph* __dec_obj20;
_Bool _if_conditional53;
_Bool _if_conditional54;
void* right_value40;
struct list$1sTypeph* __dec_obj21;
_Bool _if_conditional55;
void* right_value47;
struct list$1charph* __dec_obj25;
_Bool _if_conditional59;
void* right_value48;
struct tuple1$1sTypeph* __dec_obj26;
_Bool _if_conditional60;
_Bool _if_conditional61;
void* right_value49;
struct sNode* __dec_obj27;
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
_Bool _if_conditional85;
void* right_value50;
struct sNode* __dec_obj28;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
void* right_value51;
char* __dec_obj29;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool _if_conditional92;
_Bool _if_conditional93;
_Bool _if_conditional94;
_Bool _if_conditional95;
_Bool _if_conditional96;
_Bool _if_conditional97;
void* right_value52;
char* __dec_obj30;
struct sType* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
right_value20 = (void*)0;
memset(&result_18, 0, sizeof(struct sType*));
right_value23 = (void*)0;
right_value24 = (void*)0;
right_value25 = (void*)0;
right_value32 = (void*)0;
right_value39 = (void*)0;
right_value40 = (void*)0;
right_value47 = (void*)0;
right_value48 = (void*)0;
right_value49 = (void*)0;
right_value50 = (void*)0;
right_value51 = (void*)0;
right_value52 = (void*)0;
            if(_if_conditional37=self==(void*)0,            _if_conditional37) {
                __result16__ = __result_obj__ = (void*)0;
                return __result16__;
            }
            result_18=(struct sType*)come_increment_ref_count(((struct sType*)(right_value20=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
            come_call_finalizer2(sType_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional38=self!=((void*)0),            _if_conditional38) {
                result_18->mClass=self->mClass;
            }
            if(_if_conditional39=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional39) {
                __dec_obj10=result_18->mNoSolvedGenericsType;
                result_18->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value23=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional43=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional43) {
                __dec_obj11=result_18->mOriginalLoadVarType;
                result_18->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value24=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional44=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional44) {
                __dec_obj12=result_18->mGenericsName;
                result_18->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value25=string_clone(self->mGenericsName))));
                __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value25 = come_decrement_ref_count2(right_value25, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional45=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional45) {
                __dec_obj16=result_18->mGenericsTypes;
                result_18->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value32=list$1sTypephp_clone(self->mGenericsTypes))));
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional49=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional49) {
                __dec_obj20=result_18->mArrayNum;
                result_18->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value39=list$1sNodephp_clone(self->mArrayNum))));
                come_call_finalizer2(list$1sNodeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sNodephp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional53=self!=((void*)0),            _if_conditional53) {
                result_18->mOmitArrayNum=self->mOmitArrayNum;
            }
            if(_if_conditional54=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional54) {
                __dec_obj21=result_18->mParamTypes;
                result_18->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value40=list$1sTypephp_clone(self->mParamTypes))));
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional55=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional55) {
                __dec_obj25=result_18->mParamNames;
                result_18->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value47=list$1charphp_clone(self->mParamNames))));
                come_call_finalizer2(list$1charph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional59=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional59) {
                __dec_obj26=result_18->mResultType;
                result_18->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value48=tuple1$1sTypephp_clone(self->mResultType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional60=self!=((void*)0),            _if_conditional60) {
                result_18->mVarArgs=self->mVarArgs;
            }
            if(_if_conditional61=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional61) {
                __dec_obj27=result_18->mAlignas;
                result_18->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value49=sNode_clone(self->mAlignas))));
                if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count2(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value49) { right_value49 = come_decrement_ref_count2(right_value49, ((struct sNode*)right_value49)->finalize, ((struct sNode*)right_value49)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional62=self!=((void*)0),            _if_conditional62) {
                result_18->mUnsigned=self->mUnsigned;
            }
            if(_if_conditional63=self!=((void*)0),            _if_conditional63) {
                result_18->mShort=self->mShort;
            }
            if(_if_conditional64=self!=((void*)0),            _if_conditional64) {
                result_18->mLong=self->mLong;
            }
            if(_if_conditional65=self!=((void*)0),            _if_conditional65) {
                result_18->mLongLong=self->mLongLong;
            }
            if(_if_conditional66=self!=((void*)0),            _if_conditional66) {
                result_18->mConstant=self->mConstant;
            }
            if(_if_conditional67=self!=((void*)0),            _if_conditional67) {
                result_18->mRegister=self->mRegister;
            }
            if(_if_conditional68=self!=((void*)0),            _if_conditional68) {
                result_18->mVolatile=self->mVolatile;
            }
            if(_if_conditional69=self!=((void*)0),            _if_conditional69) {
                result_18->mStatic=self->mStatic;
            }
            if(_if_conditional70=self!=((void*)0),            _if_conditional70) {
                result_18->mExtern=self->mExtern;
            }
            if(_if_conditional71=self!=((void*)0),            _if_conditional71) {
                result_18->mRestrict=self->mRestrict;
            }
            if(_if_conditional72=self!=((void*)0),            _if_conditional72) {
                result_18->mImmutable=self->mImmutable;
            }
            if(_if_conditional73=self!=((void*)0),            _if_conditional73) {
                result_18->mHeap=self->mHeap;
            }
            if(_if_conditional74=self!=((void*)0),            _if_conditional74) {
                result_18->mDummyHeap=self->mDummyHeap;
            }
            if(_if_conditional75=self!=((void*)0),            _if_conditional75) {
                result_18->mDelegate=self->mDelegate;
            }
            if(_if_conditional76=self!=((void*)0),            _if_conditional76) {
                result_18->mShare=self->mShare;
            }
            if(_if_conditional77=self!=((void*)0),            _if_conditional77) {
                result_18->mClone=self->mClone;
            }
            if(_if_conditional78=self!=((void*)0),            _if_conditional78) {
                result_18->mNoHeap=self->mNoHeap;
            }
            if(_if_conditional79=self!=((void*)0),            _if_conditional79) {
                result_18->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            if(_if_conditional80=self!=((void*)0),            _if_conditional80) {
                result_18->mRefference=self->mRefference;
            }
            if(_if_conditional81=self!=((void*)0),            _if_conditional81) {
                result_18->mException=self->mException;
            }
            if(_if_conditional82=self!=((void*)0),            _if_conditional82) {
                result_18->mPointerNum=self->mPointerNum;
            }
            if(_if_conditional83=self!=((void*)0),            _if_conditional83) {
                result_18->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
            }
            if(_if_conditional84=self!=((void*)0),            _if_conditional84) {
                result_18->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            if(_if_conditional85=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional85) {
                __dec_obj28=result_18->mSizeNum;
                result_18->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value50=sNode_clone(self->mSizeNum))));
                if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count2(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value50) { right_value50 = come_decrement_ref_count2(right_value50, ((struct sNode*)right_value50)->finalize, ((struct sNode*)right_value50)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional86=self!=((void*)0),            _if_conditional86) {
                result_18->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            if(_if_conditional87=self!=((void*)0),            _if_conditional87) {
                result_18->mTypeOfExpression=self->mTypeOfExpression;
            }
            if(_if_conditional88=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional88) {
                __dec_obj29=result_18->mOriginalTypeName;
                result_18->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value51=string_clone(self->mOriginalTypeName))));
                __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value51 = come_decrement_ref_count2(right_value51, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional89=self!=((void*)0),            _if_conditional89) {
                result_18->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            if(_if_conditional90=self!=((void*)0),            _if_conditional90) {
                result_18->mFunctionParam=self->mFunctionParam;
            }
            if(_if_conditional91=self!=((void*)0),            _if_conditional91) {
                result_18->mAllocaValue=self->mAllocaValue;
            }
            if(_if_conditional92=self!=((void*)0),            _if_conditional92) {
                result_18->mGenericsStruct=self->mGenericsStruct;
            }
            if(_if_conditional93=self!=((void*)0),            _if_conditional93) {
                result_18->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            if(_if_conditional94=self!=((void*)0),            _if_conditional94) {
                result_18->mComeMemCore=self->mComeMemCore;
            }
            if(_if_conditional95=self!=((void*)0),            _if_conditional95) {
                result_18->mInline=self->mInline;
            }
            if(_if_conditional96=self!=((void*)0),            _if_conditional96) {
                result_18->mNullValue=self->mNullValue;
            }
            if(_if_conditional97=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional97) {
                __dec_obj30=result_18->mAsmName;
                result_18->mAsmName=(char*)come_increment_ref_count(((char*)(right_value52=string_clone(self->mAsmName))));
                __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value52 = come_decrement_ref_count2(right_value52, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result31__ = __result_obj__ = result_18;
            come_call_finalizer2(sType_finalize,result_18, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result31__;
            come_call_finalizer2(sType_finalize,result_18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional40;
struct tuple1$1sTypeph* __result17__;
void* right_value21;
struct tuple1$1sTypeph* result_19;
_Bool _if_conditional42;
void* right_value22;
struct sType* __dec_obj9;
struct tuple1$1sTypeph* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
right_value21 = (void*)0;
memset(&result_19, 0, sizeof(struct tuple1$1sTypeph*));
right_value22 = (void*)0;
                    if(_if_conditional40=self==(void*)0,                    _if_conditional40) {
                        __result17__ = __result_obj__ = (void*)0;
                        return __result17__;
                    }
                    result_19=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value21=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional42=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional42) {
                        __dec_obj9=result_19->v1;
                        result_19->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value22=sType_clone(self->v1))));
                        come_call_finalizer2(sType_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    __result18__ = __result_obj__ = result_19;
                    come_call_finalizer2(tuple1$1sTypeph_finalize,result_19, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result18__;
                    come_call_finalizer2(tuple1$1sTypeph_finalize,result_19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional41;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional41=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional41) {
                            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional46;
struct list$1sTypeph* __result19__;
void* right_value26;
void* right_value27;
struct list$1sTypeph* result_20;
struct list_item$1sTypeph* it_21;
_Bool _while_condtional4;
void* right_value31;
struct list$1sTypeph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
right_value26 = (void*)0;
right_value27 = (void*)0;
memset(&result_20, 0, sizeof(struct list$1sTypeph*));
memset(&it_21, 0, sizeof(struct list_item$1sTypeph*));
right_value31 = (void*)0;
                    if(_if_conditional46=self==((void*)0),                    _if_conditional46) {
                        __result19__ = __result_obj__ = ((void*)0);
                        return __result19__;
                    }
                    result_20=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value27=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value26=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 141, "struct list$1sTypeph"))))))));
                    come_call_finalizer2(list$1sTypephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_21=self->head;
                    while(_while_condtional4=it_21!=((void*)0),                    _while_condtional4) {
                        list$1sTypeph_add(result_20,(struct sType*)come_increment_ref_count(((struct sType*)(right_value31=sType_clone(it_21->item)))));
                        come_call_finalizer2(sType_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        it_21=it_21->next;
                    }
                    __result22__ = __result_obj__ = result_20;
                    come_call_finalizer2(list$1sTypephp_finalize,result_20, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result22__;
                    come_call_finalizer2(list$1sTypephp_finalize,result_20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result20__ = __result_obj__ = self;
                        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result20__;
                        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional47;
void* right_value28;
struct list_item$1sTypeph* litem_22;
struct sType* __dec_obj13;
_Bool _if_conditional48;
void* right_value29;
struct list_item$1sTypeph* litem_23;
struct sType* __dec_obj14;
void* right_value30;
struct list_item$1sTypeph* litem_24;
struct sType* __dec_obj15;
struct list$1sTypeph* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
right_value28 = (void*)0;
memset(&litem_22, 0, sizeof(struct list_item$1sTypeph*));
right_value29 = (void*)0;
memset(&litem_23, 0, sizeof(struct list_item$1sTypeph*));
right_value30 = (void*)0;
memset(&litem_24, 0, sizeof(struct list_item$1sTypeph*));
                            if(_if_conditional47=self->len==0,                            _if_conditional47) {
                                litem_22=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value28=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 155, "struct list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_22->prev=((void*)0);
                                litem_22->next=((void*)0);
                                __dec_obj13=litem_22->item;
                                litem_22->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_22;
                                self->head=litem_22;
                            }
                            else {
                                if(_if_conditional48=self->len==1,                                _if_conditional48) {
                                    litem_23=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value29=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 165, "struct list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_23->prev=self->head;
                                    litem_23->next=((void*)0);
                                    __dec_obj14=litem_23->item;
                                    litem_23->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    self->tail=litem_23;
                                    self->head->next=litem_23;
                                }
                                else {
                                    litem_24=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value30=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 175, "struct list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_24->prev=self->tail;
                                    litem_24->next=((void*)0);
                                    __dec_obj15=litem_24->item;
                                    litem_24->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    self->tail->next=litem_24;
                                    self->tail=litem_24;
                                }
                            }
                            self->len++;
                            __result21__ = __result_obj__ = self;
                            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result21__;
                            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional50;
struct list$1sNodeph* __result23__;
void* right_value33;
void* right_value34;
struct list$1sNodeph* result_25;
struct list_item$1sNodeph* it_26;
_Bool _while_condtional5;
void* right_value38;
struct list$1sNodeph* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
right_value33 = (void*)0;
right_value34 = (void*)0;
memset(&result_25, 0, sizeof(struct list$1sNodeph*));
memset(&it_26, 0, sizeof(struct list_item$1sNodeph*));
right_value38 = (void*)0;
                    if(_if_conditional50=self==((void*)0),                    _if_conditional50) {
                        __result23__ = __result_obj__ = ((void*)0);
                        return __result23__;
                    }
                    result_25=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value34=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value33=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 141, "struct list$1sNodeph"))))))));
                    come_call_finalizer2(list$1sNodephp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1sNodephp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_26=self->head;
                    while(_while_condtional5=it_26!=((void*)0),                    _while_condtional5) {
                        list$1sNodeph_add(result_25,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value38=sNode_clone(it_26->item)))));
                        if(right_value38) { right_value38 = come_decrement_ref_count2(right_value38, ((struct sNode*)right_value38)->finalize, ((struct sNode*)right_value38)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        it_26=it_26->next;
                    }
                    __result26__ = __result_obj__ = result_25;
                    come_call_finalizer2(list$1sNodephp_finalize,result_25, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result26__;
                    come_call_finalizer2(list$1sNodephp_finalize,result_25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result24__ = __result_obj__ = self;
                        come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result24__;
                        come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional51;
void* right_value35;
struct list_item$1sNodeph* litem_27;
struct sNode* __dec_obj17;
_Bool _if_conditional52;
void* right_value36;
struct list_item$1sNodeph* litem_28;
struct sNode* __dec_obj18;
void* right_value37;
struct list_item$1sNodeph* litem_29;
struct sNode* __dec_obj19;
struct list$1sNodeph* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
right_value35 = (void*)0;
memset(&litem_27, 0, sizeof(struct list_item$1sNodeph*));
right_value36 = (void*)0;
memset(&litem_28, 0, sizeof(struct list_item$1sNodeph*));
right_value37 = (void*)0;
memset(&litem_29, 0, sizeof(struct list_item$1sNodeph*));
                            if(_if_conditional51=self->len==0,                            _if_conditional51) {
                                litem_27=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value35=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 155, "struct list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_27->prev=((void*)0);
                                litem_27->next=((void*)0);
                                __dec_obj17=litem_27->item;
                                litem_27->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count2(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_27;
                                self->head=litem_27;
                            }
                            else {
                                if(_if_conditional52=self->len==1,                                _if_conditional52) {
                                    litem_28=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value36=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 165, "struct list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_28->prev=self->head;
                                    litem_28->next=((void*)0);
                                    __dec_obj18=litem_28->item;
                                    litem_28->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count2(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail=litem_28;
                                    self->head->next=litem_28;
                                }
                                else {
                                    litem_29=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value37=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 175, "struct list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_29->prev=self->tail;
                                    litem_29->next=((void*)0);
                                    __dec_obj19=litem_29->item;
                                    litem_29->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count2(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail->next=litem_29;
                                    self->tail=litem_29;
                                }
                            }
                            self->len++;
                            __result25__ = __result_obj__ = self;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result25__;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional56;
struct list$1charph* __result27__;
void* right_value41;
void* right_value42;
struct list$1charph* result_30;
struct list_item$1charph* it_31;
_Bool _while_condtional6;
void* right_value46;
struct list$1charph* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
right_value41 = (void*)0;
right_value42 = (void*)0;
memset(&result_30, 0, sizeof(struct list$1charph*));
memset(&it_31, 0, sizeof(struct list_item$1charph*));
right_value46 = (void*)0;
                    if(_if_conditional56=self==((void*)0),                    _if_conditional56) {
                        __result27__ = __result_obj__ = ((void*)0);
                        return __result27__;
                    }
                    result_30=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value42=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value41=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 141, "struct list$1charph"))))))));
                    come_call_finalizer2(list$1charphp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1charphp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_31=self->head;
                    while(_while_condtional6=it_31!=((void*)0),                    _while_condtional6) {
                        list$1charph_add(result_30,(char*)come_increment_ref_count(((char*)(right_value46=string_clone(it_31->item)))));
                        right_value46 = come_decrement_ref_count2(right_value46, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        it_31=it_31->next;
                    }
                    __result30__ = __result_obj__ = result_30;
                    come_call_finalizer2(list$1charphp_finalize,result_30, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result30__;
                    come_call_finalizer2(list$1charphp_finalize,result_30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result28__ = __result_obj__ = self;
                        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result28__;
                        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional57;
void* right_value43;
struct list_item$1charph* litem_32;
char* __dec_obj22;
_Bool _if_conditional58;
void* right_value44;
struct list_item$1charph* litem_33;
char* __dec_obj23;
void* right_value45;
struct list_item$1charph* litem_34;
char* __dec_obj24;
struct list$1charph* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
right_value43 = (void*)0;
memset(&litem_32, 0, sizeof(struct list_item$1charph*));
right_value44 = (void*)0;
memset(&litem_33, 0, sizeof(struct list_item$1charph*));
right_value45 = (void*)0;
memset(&litem_34, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional57=self->len==0,                            _if_conditional57) {
                                litem_32=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value43=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 155, "struct list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_32->prev=((void*)0);
                                litem_32->next=((void*)0);
                                __dec_obj22=litem_32->item;
                                litem_32->item=(char*)come_increment_ref_count(item);
                                __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_32;
                                self->head=litem_32;
                            }
                            else {
                                if(_if_conditional58=self->len==1,                                _if_conditional58) {
                                    litem_33=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value44=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 165, "struct list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_33->prev=self->head;
                                    litem_33->next=((void*)0);
                                    __dec_obj23=litem_33->item;
                                    litem_33->item=(char*)come_increment_ref_count(item);
                                    __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail=litem_33;
                                    self->head->next=litem_33;
                                }
                                else {
                                    litem_34=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value45=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 175, "struct list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_34->prev=self->tail;
                                    litem_34->next=((void*)0);
                                    __dec_obj24=litem_34->item;
                                    litem_34->item=(char*)come_increment_ref_count(item);
                                    __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail->next=litem_34;
                                    self->tail=litem_34;
                                }
                            }
                            self->len++;
                            __result29__ = __result_obj__ = self;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result29__;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional98;
void* right_value54;
struct list_item$1CVALUEph* litem_35;
struct CVALUE* __dec_obj32;
_Bool _if_conditional100;
void* right_value55;
struct list_item$1CVALUEph* litem_36;
struct CVALUE* __dec_obj33;
void* right_value56;
struct list_item$1CVALUEph* litem_37;
struct CVALUE* __dec_obj34;
struct list$1CVALUEph* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
right_value54 = (void*)0;
memset(&litem_35, 0, sizeof(struct list_item$1CVALUEph*));
right_value55 = (void*)0;
memset(&litem_36, 0, sizeof(struct list_item$1CVALUEph*));
right_value56 = (void*)0;
memset(&litem_37, 0, sizeof(struct list_item$1CVALUEph*));
            if(_if_conditional98=self->len==0,            _if_conditional98) {
                litem_35=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value54=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 225, "struct list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_35->prev=((void*)0);
                litem_35->next=((void*)0);
                __dec_obj32=litem_35->item;
                litem_35->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_35;
                self->head=litem_35;
            }
            else {
                if(_if_conditional100=self->len==1,                _if_conditional100) {
                    litem_36=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value55=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 235, "struct list_item$1CVALUEph"))));
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_36->prev=self->head;
                    litem_36->next=((void*)0);
                    __dec_obj33=litem_36->item;
                    litem_36->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer2(CVALUE_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_36;
                    self->head->next=litem_36;
                }
                else {
                    litem_37=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value56=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 245, "struct list_item$1CVALUEph"))));
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_37->prev=self->tail;
                    litem_37->next=((void*)0);
                    __dec_obj34=litem_37->item;
                    litem_37->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer2(CVALUE_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail->next=litem_37;
                    self->tail=litem_37;
                }
            }
            self->len++;
            __result32__ = __result_obj__ = self;
            come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result32__;
            come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional99;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional99=self!=((void*)0)&&self->item!=((void*)0),                    _if_conditional99) {
                        come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

int sPlusPlusNode_sline(struct sPlusPlusNode* self, struct sInfo* info){
void* __result_obj__;
int __result34__;
memset(&__result_obj__, 0, sizeof(void*));
    __result34__ = self->sline;
    return __result34__;
}

char* sPlusPlusNode_sname(struct sPlusPlusNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value57;
char* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
right_value57 = (void*)0;
    __result35__ = __result_obj__ = ((char*)(right_value57=__builtin_string(self->sname)));
    right_value57 = come_decrement_ref_count2(right_value57, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result35__;
}

struct sMinusMinusNode* sMinusMinusNode_initialize(struct sMinusMinusNode* self, struct sNode* left, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value58;
char* __dec_obj35;
void* right_value59;
struct sNode* __dec_obj36;
struct sMinusMinusNode* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
right_value58 = (void*)0;
right_value59 = (void*)0;
    self->sline=info->sline;
    __dec_obj35=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value58=__builtin_string(info->sname))));
    __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value58 = come_decrement_ref_count2(right_value58, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj36=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value59=sNode_clone(left))));
    if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count2(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value59) { right_value59 = come_decrement_ref_count2(right_value59, ((struct sNode*)right_value59)->finalize, ((struct sNode*)right_value59)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->mQuote=quote;
    __result36__ = __result_obj__ = self;
    come_call_finalizer2(sMinusMinusNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result36__;
    come_call_finalizer2(sMinusMinusNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sMinusMinusNode_terminated(){
void* __result_obj__;
_Bool __result37__;
memset(&__result_obj__, 0, sizeof(void*));
    __result37__ = (_Bool)0;
    return __result37__;
}

char* sMinusMinusNode_kind(){
void* __result_obj__;
void* right_value60;
char* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
right_value60 = (void*)0;
    __result38__ = __result_obj__ = ((char*)(right_value60=__builtin_string("sMinusMinusNode")));
    right_value60 = come_decrement_ref_count2(right_value60, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result38__;
}

_Bool sMinusMinusNode_compile(struct sMinusMinusNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_38;
_Bool _if_conditional103;
_Bool __result39__;
void* right_value61;
struct CVALUE* left_value_39;
struct sType* type_40;
char* fun_name_41;
_Bool calling_fun_42;
_Bool _if_conditional104;
_Bool _if_conditional105;
void* right_value62;
struct CVALUE* come_value_43;
void* right_value63;
char* __dec_obj37;
void* right_value64;
struct sType* __dec_obj38;
_Bool __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_38, 0, sizeof(struct sNode*));
right_value61 = (void*)0;
memset(&left_value_39, 0, sizeof(struct CVALUE*));
memset(&type_40, 0, sizeof(struct sType*));
memset(&fun_name_41, 0, sizeof(char*));
memset(&calling_fun_42, 0, sizeof(_Bool));
right_value62 = (void*)0;
memset(&come_value_43, 0, sizeof(struct CVALUE*));
right_value63 = (void*)0;
right_value64 = (void*)0;
    left_38=self->mLeft;
    if(_if_conditional103=!node_compile(left_38,info),    _if_conditional103) {
        __result39__ = (_Bool)0;
        return __result39__;
    }
    left_value_39=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value61=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_40=(struct sType*)come_increment_ref_count(left_value_39->type);
    fun_name_41="operator_minus_minus";
    if(self->mQuote) {
        calling_fun_42=(_Bool)0;
    }
    else {
        calling_fun_42=operator_overload_fun_self(type_40,fun_name_41,left_value_39,info);
    }
    if(_if_conditional105=!calling_fun_42,    _if_conditional105) {
        come_value_43=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value62=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 135, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj37=come_value_43->c_value;
        come_value_43->c_value=(char*)come_increment_ref_count(((char*)(right_value63=xsprintf("%s--",left_value_39->c_value))));
        __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value63 = come_decrement_ref_count2(right_value63, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj38=come_value_43->type;
        come_value_43->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value64=sType_clone(left_value_39->type))));
        come_call_finalizer2(sType_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_43->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_43));
        add_come_last_code(info,"%s;\n",come_value_43->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result40__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result40__;
    come_call_finalizer2(CVALUE_finalize,left_value_39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sMinusMinusNode_sline(struct sMinusMinusNode* self, struct sInfo* info){
void* __result_obj__;
int __result41__;
memset(&__result_obj__, 0, sizeof(void*));
    __result41__ = self->sline;
    return __result41__;
}

char* sMinusMinusNode_sname(struct sMinusMinusNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value65;
char* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
right_value65 = (void*)0;
    __result42__ = __result_obj__ = ((char*)(right_value65=__builtin_string(self->sname)));
    right_value65 = come_decrement_ref_count2(right_value65, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result42__;
}

struct sPlusEqualNode* sPlusEqualNode_initialize(struct sPlusEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value66;
char* __dec_obj39;
void* right_value67;
struct sNode* __dec_obj40;
void* right_value68;
struct sNode* __dec_obj41;
struct sPlusEqualNode* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
right_value66 = (void*)0;
right_value67 = (void*)0;
right_value68 = (void*)0;
    self->sline=info->sline;
    __dec_obj39=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value66=__builtin_string(info->sname))));
    __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value66 = come_decrement_ref_count2(right_value66, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj40=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value67=sNode_clone(left))));
    if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count2(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value67) { right_value67 = come_decrement_ref_count2(right_value67, ((struct sNode*)right_value67)->finalize, ((struct sNode*)right_value67)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj41=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value68=sNode_clone(right))));
    if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count2(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value68) { right_value68 = come_decrement_ref_count2(right_value68, ((struct sNode*)right_value68)->finalize, ((struct sNode*)right_value68)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->mQuote=quote;
    __result43__ = __result_obj__ = self;
    come_call_finalizer2(sPlusEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result43__;
    come_call_finalizer2(sPlusEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sPlusEqualNode_terminated(){
void* __result_obj__;
_Bool __result44__;
memset(&__result_obj__, 0, sizeof(void*));
    __result44__ = (_Bool)0;
    return __result44__;
}

char* sPlusEqualNode_kind(){
void* __result_obj__;
void* right_value69;
char* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
right_value69 = (void*)0;
    __result45__ = __result_obj__ = ((char*)(right_value69=__builtin_string("sPlusEqualNode")));
    right_value69 = come_decrement_ref_count2(right_value69, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result45__;
}

_Bool sPlusEqualNode_compile(struct sPlusEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_44;
_Bool _if_conditional109;
_Bool __result46__;
void* right_value70;
struct CVALUE* left_value_45;
struct sNode* right_46;
_Bool _if_conditional110;
_Bool __result47__;
void* right_value71;
struct CVALUE* right_value_47;
struct sType* type_48;
char* fun_name_49;
_Bool calling_fun_50;
_Bool _if_conditional111;
_Bool _if_conditional112;
void* right_value72;
struct CVALUE* come_value_51;
void* right_value73;
char* __dec_obj42;
void* right_value74;
struct sType* __dec_obj43;
_Bool __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_44, 0, sizeof(struct sNode*));
right_value70 = (void*)0;
memset(&left_value_45, 0, sizeof(struct CVALUE*));
memset(&right_46, 0, sizeof(struct sNode*));
right_value71 = (void*)0;
memset(&right_value_47, 0, sizeof(struct CVALUE*));
memset(&type_48, 0, sizeof(struct sType*));
memset(&fun_name_49, 0, sizeof(char*));
memset(&calling_fun_50, 0, sizeof(_Bool));
right_value72 = (void*)0;
memset(&come_value_51, 0, sizeof(struct CVALUE*));
right_value73 = (void*)0;
right_value74 = (void*)0;
    left_44=self->mLeft;
    if(_if_conditional109=!node_compile(left_44,info),    _if_conditional109) {
        __result46__ = (_Bool)0;
        return __result46__;
    }
    left_value_45=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value70=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_46=self->mRight;
    if(_if_conditional110=!node_compile(right_46,info),    _if_conditional110) {
        __result47__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result47__;
    }
    right_value_47=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value71=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_48=(struct sType*)come_increment_ref_count(left_value_45->type);
    fun_name_49="operator_plus_equal";
    if(self->mQuote) {
        calling_fun_50=(_Bool)0;
    }
    else {
        calling_fun_50=operator_overload_fun(type_48,fun_name_49,left_value_45,right_value_47,info);
    }
    if(_if_conditional112=!calling_fun_50,    _if_conditional112) {
        come_value_51=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value72=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 223, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj42=come_value_51->c_value;
        come_value_51->c_value=(char*)come_increment_ref_count(((char*)(right_value73=xsprintf("%s+=%s",left_value_45->c_value,right_value_47->c_value))));
        __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value73 = come_decrement_ref_count2(right_value73, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj43=come_value_51->type;
        come_value_51->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value74=sType_clone(left_value_45->type))));
        come_call_finalizer2(sType_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_51->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_51));
        add_come_last_code(info,"%s;\n",come_value_51->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result48__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result48__;
    come_call_finalizer2(CVALUE_finalize,left_value_45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sPlusEqualNode_sline(struct sPlusEqualNode* self, struct sInfo* info){
void* __result_obj__;
int __result49__;
memset(&__result_obj__, 0, sizeof(void*));
    __result49__ = self->sline;
    return __result49__;
}

char* sPlusEqualNode_sname(struct sPlusEqualNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value75;
char* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
right_value75 = (void*)0;
    __result50__ = __result_obj__ = ((char*)(right_value75=__builtin_string(self->sname)));
    right_value75 = come_decrement_ref_count2(right_value75, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result50__;
}

struct sMinusEqualNode* sMinusEqualNode_initialize(struct sMinusEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value76;
char* __dec_obj44;
void* right_value77;
struct sNode* __dec_obj45;
void* right_value78;
struct sNode* __dec_obj46;
struct sMinusEqualNode* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
right_value76 = (void*)0;
right_value77 = (void*)0;
right_value78 = (void*)0;
    self->sline=info->sline;
    __dec_obj44=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value76=__builtin_string(info->sname))));
    __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value76 = come_decrement_ref_count2(right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj45=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value77=sNode_clone(left))));
    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count2(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value77) { right_value77 = come_decrement_ref_count2(right_value77, ((struct sNode*)right_value77)->finalize, ((struct sNode*)right_value77)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj46=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value78=sNode_clone(right))));
    if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count2(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value78) { right_value78 = come_decrement_ref_count2(right_value78, ((struct sNode*)right_value78)->finalize, ((struct sNode*)right_value78)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result51__ = __result_obj__ = self;
    come_call_finalizer2(sMinusEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result51__;
    come_call_finalizer2(sMinusEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sMinusEqualNode_terminated(){
void* __result_obj__;
_Bool __result52__;
memset(&__result_obj__, 0, sizeof(void*));
    __result52__ = (_Bool)0;
    return __result52__;
}

char* sMinusEqualNode_kind(){
void* __result_obj__;
void* right_value79;
char* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
    __result53__ = __result_obj__ = ((char*)(right_value79=__builtin_string("sPlusEqualNode")));
    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result53__;
}

_Bool sMinusEqualNode_compile(struct sMinusEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_52;
_Bool _if_conditional116;
_Bool __result54__;
void* right_value80;
struct CVALUE* left_value_53;
struct sNode* right_54;
_Bool _if_conditional117;
_Bool __result55__;
void* right_value81;
struct CVALUE* right_value_55;
struct sType* type_56;
char* fun_name_57;
_Bool calling_fun_58;
_Bool _if_conditional118;
_Bool _if_conditional119;
void* right_value82;
struct CVALUE* come_value_59;
void* right_value83;
char* __dec_obj47;
void* right_value84;
struct sType* __dec_obj48;
_Bool __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_52, 0, sizeof(struct sNode*));
right_value80 = (void*)0;
memset(&left_value_53, 0, sizeof(struct CVALUE*));
memset(&right_54, 0, sizeof(struct sNode*));
right_value81 = (void*)0;
memset(&right_value_55, 0, sizeof(struct CVALUE*));
memset(&type_56, 0, sizeof(struct sType*));
memset(&fun_name_57, 0, sizeof(char*));
memset(&calling_fun_58, 0, sizeof(_Bool));
right_value82 = (void*)0;
memset(&come_value_59, 0, sizeof(struct CVALUE*));
right_value83 = (void*)0;
right_value84 = (void*)0;
    left_52=self->mLeft;
    if(_if_conditional116=!node_compile(left_52,info),    _if_conditional116) {
        __result54__ = (_Bool)0;
        return __result54__;
    }
    left_value_53=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value80=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_54=self->mRight;
    if(_if_conditional117=!node_compile(right_54,info),    _if_conditional117) {
        __result55__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result55__;
    }
    right_value_55=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value81=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_56=(struct sType*)come_increment_ref_count(left_value_53->type);
    fun_name_57="operator_minus_equal";
    if(self->mQuote) {
        calling_fun_58=(_Bool)0;
    }
    else {
        calling_fun_58=operator_overload_fun(type_56,fun_name_57,left_value_53,right_value_55,info);
    }
    if(_if_conditional119=!calling_fun_58,    _if_conditional119) {
        come_value_59=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value82=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 311, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj47=come_value_59->c_value;
        come_value_59->c_value=(char*)come_increment_ref_count(((char*)(right_value83=xsprintf("%s-=%s",left_value_53->c_value,right_value_55->c_value))));
        __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj48=come_value_59->type;
        come_value_59->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value84=sType_clone(left_value_53->type))));
        come_call_finalizer2(sType_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_59->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_59));
        add_come_last_code(info,"%s;\n",come_value_59->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result56__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_56, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result56__;
    come_call_finalizer2(CVALUE_finalize,left_value_53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_56, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sMinusEqualNode_sline(struct sMinusEqualNode* self, struct sInfo* info){
void* __result_obj__;
int __result57__;
memset(&__result_obj__, 0, sizeof(void*));
    __result57__ = self->sline;
    return __result57__;
}

char* sMinusEqualNode_sname(struct sMinusEqualNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value85;
char* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value85 = (void*)0;
    __result58__ = __result_obj__ = ((char*)(right_value85=__builtin_string(self->sname)));
    right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result58__;
}

struct sMultEqualNode* sMultEqualNode_initialize(struct sMultEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value86;
char* __dec_obj49;
void* right_value87;
struct sNode* __dec_obj50;
void* right_value88;
struct sNode* __dec_obj51;
struct sMultEqualNode* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
right_value86 = (void*)0;
right_value87 = (void*)0;
right_value88 = (void*)0;
    self->sline=info->sline;
    __dec_obj49=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value86=__builtin_string(info->sname))));
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj50=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value87=sNode_clone(left))));
    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value87) { right_value87 = come_decrement_ref_count2(right_value87, ((struct sNode*)right_value87)->finalize, ((struct sNode*)right_value87)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj51=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value88=sNode_clone(right))));
    if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count2(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value88) { right_value88 = come_decrement_ref_count2(right_value88, ((struct sNode*)right_value88)->finalize, ((struct sNode*)right_value88)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result59__ = __result_obj__ = self;
    come_call_finalizer2(sMultEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result59__;
    come_call_finalizer2(sMultEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sMultEqualNode_terminated(){
void* __result_obj__;
_Bool __result60__;
memset(&__result_obj__, 0, sizeof(void*));
    __result60__ = (_Bool)0;
    return __result60__;
}

char* sMultEqualNode_kind(){
void* __result_obj__;
void* right_value89;
char* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value89 = (void*)0;
    __result61__ = __result_obj__ = ((char*)(right_value89=__builtin_string("sMultEqualNode")));
    right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result61__;
}

_Bool sMultEqualNode_compile(struct sMultEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_60;
_Bool _if_conditional123;
_Bool __result62__;
void* right_value90;
struct CVALUE* left_value_61;
struct sNode* right_62;
_Bool _if_conditional124;
_Bool __result63__;
void* right_value91;
struct CVALUE* right_value_63;
struct sType* type_64;
char* fun_name_65;
_Bool calling_fun_66;
_Bool _if_conditional125;
_Bool _if_conditional126;
void* right_value92;
struct CVALUE* come_value_67;
void* right_value93;
char* __dec_obj52;
void* right_value94;
struct sType* __dec_obj53;
_Bool __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_60, 0, sizeof(struct sNode*));
right_value90 = (void*)0;
memset(&left_value_61, 0, sizeof(struct CVALUE*));
memset(&right_62, 0, sizeof(struct sNode*));
right_value91 = (void*)0;
memset(&right_value_63, 0, sizeof(struct CVALUE*));
memset(&type_64, 0, sizeof(struct sType*));
memset(&fun_name_65, 0, sizeof(char*));
memset(&calling_fun_66, 0, sizeof(_Bool));
right_value92 = (void*)0;
memset(&come_value_67, 0, sizeof(struct CVALUE*));
right_value93 = (void*)0;
right_value94 = (void*)0;
    left_60=self->mLeft;
    if(_if_conditional123=!node_compile(left_60,info),    _if_conditional123) {
        __result62__ = (_Bool)0;
        return __result62__;
    }
    left_value_61=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value90=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_62=self->mRight;
    if(_if_conditional124=!node_compile(right_62,info),    _if_conditional124) {
        __result63__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result63__;
    }
    right_value_63=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value91=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_64=(struct sType*)come_increment_ref_count(left_value_61->type);
    fun_name_65="operator_mult_equal";
    if(self->mQuote) {
        calling_fun_66=(_Bool)0;
    }
    else {
        calling_fun_66=operator_overload_fun(type_64,fun_name_65,left_value_61,right_value_63,info);
    }
    if(_if_conditional126=!calling_fun_66,    _if_conditional126) {
        come_value_67=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value92=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 399, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj52=come_value_67->c_value;
        come_value_67->c_value=(char*)come_increment_ref_count(((char*)(right_value93=xsprintf("%s*=%s",left_value_61->c_value,right_value_63->c_value))));
        __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj53=come_value_67->type;
        come_value_67->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value94=sType_clone(left_value_61->type))));
        come_call_finalizer2(sType_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_67->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_67));
        add_come_last_code(info,"%s;\n",come_value_67->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result64__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_63, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result64__;
    come_call_finalizer2(CVALUE_finalize,left_value_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_63, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sMultEqualNode_sline(struct sMultEqualNode* self, struct sInfo* info){
void* __result_obj__;
int __result65__;
memset(&__result_obj__, 0, sizeof(void*));
    __result65__ = self->sline;
    return __result65__;
}

char* sMultEqualNode_sname(struct sMultEqualNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value95;
char* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
right_value95 = (void*)0;
    __result66__ = __result_obj__ = ((char*)(right_value95=__builtin_string(self->sname)));
    right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result66__;
}

struct sDivEqualNode* sDivEqualNode_initialize(struct sDivEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value96;
char* __dec_obj54;
void* right_value97;
struct sNode* __dec_obj55;
void* right_value98;
struct sNode* __dec_obj56;
struct sDivEqualNode* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value96 = (void*)0;
right_value97 = (void*)0;
right_value98 = (void*)0;
    self->sline=info->sline;
    __dec_obj54=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value96=__builtin_string(info->sname))));
    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj55=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value97=sNode_clone(left))));
    if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count2(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value97) { right_value97 = come_decrement_ref_count2(right_value97, ((struct sNode*)right_value97)->finalize, ((struct sNode*)right_value97)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj56=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value98=sNode_clone(right))));
    if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count2(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value98) { right_value98 = come_decrement_ref_count2(right_value98, ((struct sNode*)right_value98)->finalize, ((struct sNode*)right_value98)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result67__ = __result_obj__ = self;
    come_call_finalizer2(sDivEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result67__;
    come_call_finalizer2(sDivEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sDivEqualNode_terminated(){
void* __result_obj__;
_Bool __result68__;
memset(&__result_obj__, 0, sizeof(void*));
    __result68__ = (_Bool)0;
    return __result68__;
}

char* sDivEqualNode_kind(){
void* __result_obj__;
void* right_value99;
char* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value99 = (void*)0;
    __result69__ = __result_obj__ = ((char*)(right_value99=__builtin_string("sDivEqualNode")));
    right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result69__;
}

_Bool sDivEqualNode_compile(struct sDivEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_68;
_Bool _if_conditional130;
_Bool __result70__;
void* right_value100;
struct CVALUE* left_value_69;
struct sNode* right_70;
_Bool _if_conditional131;
_Bool __result71__;
void* right_value101;
struct CVALUE* right_value_71;
struct sType* type_72;
char* fun_name_73;
_Bool calling_fun_74;
_Bool _if_conditional132;
_Bool _if_conditional133;
void* right_value102;
struct CVALUE* come_value_75;
void* right_value103;
char* __dec_obj57;
void* right_value104;
struct sType* __dec_obj58;
_Bool __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_68, 0, sizeof(struct sNode*));
right_value100 = (void*)0;
memset(&left_value_69, 0, sizeof(struct CVALUE*));
memset(&right_70, 0, sizeof(struct sNode*));
right_value101 = (void*)0;
memset(&right_value_71, 0, sizeof(struct CVALUE*));
memset(&type_72, 0, sizeof(struct sType*));
memset(&fun_name_73, 0, sizeof(char*));
memset(&calling_fun_74, 0, sizeof(_Bool));
right_value102 = (void*)0;
memset(&come_value_75, 0, sizeof(struct CVALUE*));
right_value103 = (void*)0;
right_value104 = (void*)0;
    left_68=self->mLeft;
    if(_if_conditional130=!node_compile(left_68,info),    _if_conditional130) {
        __result70__ = (_Bool)0;
        return __result70__;
    }
    left_value_69=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value100=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_70=self->mRight;
    if(_if_conditional131=!node_compile(right_70,info),    _if_conditional131) {
        __result71__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_69, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result71__;
    }
    right_value_71=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value101=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_72=(struct sType*)come_increment_ref_count(left_value_69->type);
    fun_name_73="operator_div_equal";
    if(self->mQuote) {
        calling_fun_74=(_Bool)0;
    }
    else {
        calling_fun_74=operator_overload_fun(type_72,fun_name_73,left_value_69,right_value_71,info);
    }
    if(_if_conditional133=!calling_fun_74,    _if_conditional133) {
        come_value_75=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value102=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 487, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj57=come_value_75->c_value;
        come_value_75->c_value=(char*)come_increment_ref_count(((char*)(right_value103=xsprintf("%s/=%s",left_value_69->c_value,right_value_71->c_value))));
        __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj58=come_value_75->type;
        come_value_75->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value104=sType_clone(left_value_69->type))));
        come_call_finalizer2(sType_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_75->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_75));
        add_come_last_code(info,"%s;\n",come_value_75->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result72__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_69, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result72__;
    come_call_finalizer2(CVALUE_finalize,left_value_69, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sDivEqualNode_sline(struct sDivEqualNode* self, struct sInfo* info){
void* __result_obj__;
int __result73__;
memset(&__result_obj__, 0, sizeof(void*));
    __result73__ = self->sline;
    return __result73__;
}

char* sDivEqualNode_sname(struct sDivEqualNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value105;
char* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value105 = (void*)0;
    __result74__ = __result_obj__ = ((char*)(right_value105=__builtin_string(self->sname)));
    right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result74__;
}

struct sModEqualNode* sModEqualNode_initialize(struct sModEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value106;
char* __dec_obj59;
void* right_value107;
struct sNode* __dec_obj60;
void* right_value108;
struct sNode* __dec_obj61;
struct sModEqualNode* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
right_value107 = (void*)0;
right_value108 = (void*)0;
    self->sline=info->sline;
    __dec_obj59=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value106=__builtin_string(info->sname))));
    __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj60=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value107=sNode_clone(left))));
    if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count2(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value107) { right_value107 = come_decrement_ref_count2(right_value107, ((struct sNode*)right_value107)->finalize, ((struct sNode*)right_value107)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj61=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value108=sNode_clone(right))));
    if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value108) { right_value108 = come_decrement_ref_count2(right_value108, ((struct sNode*)right_value108)->finalize, ((struct sNode*)right_value108)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result75__ = __result_obj__ = self;
    come_call_finalizer2(sModEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result75__;
    come_call_finalizer2(sModEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sModEqualNode_terminated(){
void* __result_obj__;
_Bool __result76__;
memset(&__result_obj__, 0, sizeof(void*));
    __result76__ = (_Bool)0;
    return __result76__;
}

char* sModEqualNode_kind(){
void* __result_obj__;
void* right_value109;
char* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value109 = (void*)0;
    __result77__ = __result_obj__ = ((char*)(right_value109=__builtin_string("sModEqualNode")));
    right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result77__;
}

_Bool sModEqualNode_compile(struct sModEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_76;
_Bool _if_conditional137;
_Bool __result78__;
void* right_value110;
struct CVALUE* left_value_77;
struct sNode* right_78;
_Bool _if_conditional138;
_Bool __result79__;
void* right_value111;
struct CVALUE* right_value_79;
struct sType* type_80;
char* fun_name_81;
_Bool calling_fun_82;
_Bool _if_conditional139;
_Bool _if_conditional140;
void* right_value112;
struct CVALUE* come_value_83;
void* right_value113;
char* __dec_obj62;
void* right_value114;
struct sType* __dec_obj63;
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_76, 0, sizeof(struct sNode*));
right_value110 = (void*)0;
memset(&left_value_77, 0, sizeof(struct CVALUE*));
memset(&right_78, 0, sizeof(struct sNode*));
right_value111 = (void*)0;
memset(&right_value_79, 0, sizeof(struct CVALUE*));
memset(&type_80, 0, sizeof(struct sType*));
memset(&fun_name_81, 0, sizeof(char*));
memset(&calling_fun_82, 0, sizeof(_Bool));
right_value112 = (void*)0;
memset(&come_value_83, 0, sizeof(struct CVALUE*));
right_value113 = (void*)0;
right_value114 = (void*)0;
    left_76=self->mLeft;
    if(_if_conditional137=!node_compile(left_76,info),    _if_conditional137) {
        __result78__ = (_Bool)0;
        return __result78__;
    }
    left_value_77=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value110=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_78=self->mRight;
    if(_if_conditional138=!node_compile(right_78,info),    _if_conditional138) {
        __result79__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result79__;
    }
    right_value_79=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value111=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_80=(struct sType*)come_increment_ref_count(left_value_77->type);
    fun_name_81="operator_mod_equal";
    if(self->mQuote) {
        calling_fun_82=(_Bool)0;
    }
    else {
        calling_fun_82=operator_overload_fun(type_80,fun_name_81,left_value_77,right_value_79,info);
    }
    if(_if_conditional140=!calling_fun_82,    _if_conditional140) {
        come_value_83=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value112=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 575, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj62=come_value_83->c_value;
        come_value_83->c_value=(char*)come_increment_ref_count(((char*)(right_value113=xsprintf("%s%%=%s",left_value_77->c_value,right_value_79->c_value))));
        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj63=come_value_83->type;
        come_value_83->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value114=sType_clone(left_value_77->type))));
        come_call_finalizer2(sType_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_83->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_83));
        add_come_last_code(info,"%s;\n",come_value_83->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result80__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result80__;
    come_call_finalizer2(CVALUE_finalize,left_value_77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sModEqualNode_sline(struct sModEqualNode* self, struct sInfo* info){
void* __result_obj__;
int __result81__;
memset(&__result_obj__, 0, sizeof(void*));
    __result81__ = self->sline;
    return __result81__;
}

char* sModEqualNode_sname(struct sModEqualNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value115;
char* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
right_value115 = (void*)0;
    __result82__ = __result_obj__ = ((char*)(right_value115=__builtin_string(self->sname)));
    right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result82__;
}

struct sLShifEqualNode* sLShifEqualNode_initialize(struct sLShifEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value116;
char* __dec_obj64;
void* right_value117;
struct sNode* __dec_obj65;
void* right_value118;
struct sNode* __dec_obj66;
struct sLShifEqualNode* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value116 = (void*)0;
right_value117 = (void*)0;
right_value118 = (void*)0;
    self->sline=info->sline;
    __dec_obj64=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value116=__builtin_string(info->sname))));
    __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj65=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value117=sNode_clone(left))));
    if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value117) { right_value117 = come_decrement_ref_count2(right_value117, ((struct sNode*)right_value117)->finalize, ((struct sNode*)right_value117)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj66=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value118=sNode_clone(right))));
    if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value118) { right_value118 = come_decrement_ref_count2(right_value118, ((struct sNode*)right_value118)->finalize, ((struct sNode*)right_value118)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result83__ = __result_obj__ = self;
    come_call_finalizer2(sLShifEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result83__;
    come_call_finalizer2(sLShifEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sLShifEqualNode_terminated(){
void* __result_obj__;
_Bool __result84__;
memset(&__result_obj__, 0, sizeof(void*));
    __result84__ = (_Bool)0;
    return __result84__;
}

char* sLShifEqualNode_kind(){
void* __result_obj__;
void* right_value119;
char* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value119 = (void*)0;
    __result85__ = __result_obj__ = ((char*)(right_value119=__builtin_string("sLShifEqualNode")));
    right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result85__;
}

_Bool sLShifEqualNode_compile(struct sLShifEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_84;
_Bool _if_conditional144;
_Bool __result86__;
void* right_value120;
struct CVALUE* left_value_85;
struct sNode* right_86;
_Bool _if_conditional145;
_Bool __result87__;
void* right_value121;
struct CVALUE* right_value_87;
struct sType* type_88;
char* fun_name_89;
_Bool calling_fun_90;
_Bool _if_conditional146;
_Bool _if_conditional147;
void* right_value122;
struct CVALUE* come_value_91;
void* right_value123;
char* __dec_obj67;
void* right_value124;
struct sType* __dec_obj68;
_Bool __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_84, 0, sizeof(struct sNode*));
right_value120 = (void*)0;
memset(&left_value_85, 0, sizeof(struct CVALUE*));
memset(&right_86, 0, sizeof(struct sNode*));
right_value121 = (void*)0;
memset(&right_value_87, 0, sizeof(struct CVALUE*));
memset(&type_88, 0, sizeof(struct sType*));
memset(&fun_name_89, 0, sizeof(char*));
memset(&calling_fun_90, 0, sizeof(_Bool));
right_value122 = (void*)0;
memset(&come_value_91, 0, sizeof(struct CVALUE*));
right_value123 = (void*)0;
right_value124 = (void*)0;
    left_84=self->mLeft;
    if(_if_conditional144=!node_compile(left_84,info),    _if_conditional144) {
        __result86__ = (_Bool)0;
        return __result86__;
    }
    left_value_85=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value120=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_86=self->mRight;
    if(_if_conditional145=!node_compile(right_86,info),    _if_conditional145) {
        __result87__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result87__;
    }
    right_value_87=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value121=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_88=(struct sType*)come_increment_ref_count(left_value_85->type);
    fun_name_89="operator_lshift_equal";
    if(self->mQuote) {
        calling_fun_90=(_Bool)0;
    }
    else {
        calling_fun_90=operator_overload_fun(type_88,fun_name_89,left_value_85,right_value_87,info);
    }
    if(_if_conditional147=!calling_fun_90,    _if_conditional147) {
        come_value_91=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value122=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 664, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj67=come_value_91->c_value;
        come_value_91->c_value=(char*)come_increment_ref_count(((char*)(right_value123=xsprintf("%s<<=%s",left_value_85->c_value,right_value_87->c_value))));
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj68=come_value_91->type;
        come_value_91->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value124=sType_clone(left_value_85->type))));
        come_call_finalizer2(sType_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_91->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_91));
        add_come_last_code(info,"%s;\n",come_value_91->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result88__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result88__;
    come_call_finalizer2(CVALUE_finalize,left_value_85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sLShifEqualNode_sline(struct sLShifEqualNode* self, struct sInfo* info){
void* __result_obj__;
int __result89__;
memset(&__result_obj__, 0, sizeof(void*));
    __result89__ = self->sline;
    return __result89__;
}

char* sLShifEqualNode_sname(struct sLShifEqualNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value125;
char* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value125 = (void*)0;
    __result90__ = __result_obj__ = ((char*)(right_value125=__builtin_string(self->sname)));
    right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result90__;
}

struct sRShiftEqualNode* sRShiftEqualNode_initialize(struct sRShiftEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value126;
char* __dec_obj69;
void* right_value127;
struct sNode* __dec_obj70;
void* right_value128;
struct sNode* __dec_obj71;
struct sRShiftEqualNode* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value126 = (void*)0;
right_value127 = (void*)0;
right_value128 = (void*)0;
    self->sline=info->sline;
    __dec_obj69=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value126=__builtin_string(info->sname))));
    __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj70=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value127=sNode_clone(left))));
    if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count2(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value127) { right_value127 = come_decrement_ref_count2(right_value127, ((struct sNode*)right_value127)->finalize, ((struct sNode*)right_value127)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj71=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value128=sNode_clone(right))));
    if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count2(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value128) { right_value128 = come_decrement_ref_count2(right_value128, ((struct sNode*)right_value128)->finalize, ((struct sNode*)right_value128)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result91__ = __result_obj__ = self;
    come_call_finalizer2(sRShiftEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result91__;
    come_call_finalizer2(sRShiftEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sRShiftEqualNode_terminated(){
void* __result_obj__;
_Bool __result92__;
memset(&__result_obj__, 0, sizeof(void*));
    __result92__ = (_Bool)0;
    return __result92__;
}

char* sRShiftEqualNode_kind(){
void* __result_obj__;
void* right_value129;
char* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
right_value129 = (void*)0;
    __result93__ = __result_obj__ = ((char*)(right_value129=__builtin_string("sRShiftEqualNode")));
    right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result93__;
}

_Bool sRShiftEqualNode_compile(struct sRShiftEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_92;
_Bool _if_conditional151;
_Bool __result94__;
void* right_value130;
struct CVALUE* left_value_93;
struct sNode* right_94;
_Bool _if_conditional152;
_Bool __result95__;
void* right_value131;
struct CVALUE* right_value_95;
struct sType* type_96;
char* fun_name_97;
_Bool calling_fun_98;
_Bool _if_conditional153;
_Bool _if_conditional154;
void* right_value132;
struct CVALUE* come_value_99;
void* right_value133;
char* __dec_obj72;
void* right_value134;
struct sType* __dec_obj73;
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_92, 0, sizeof(struct sNode*));
right_value130 = (void*)0;
memset(&left_value_93, 0, sizeof(struct CVALUE*));
memset(&right_94, 0, sizeof(struct sNode*));
right_value131 = (void*)0;
memset(&right_value_95, 0, sizeof(struct CVALUE*));
memset(&type_96, 0, sizeof(struct sType*));
memset(&fun_name_97, 0, sizeof(char*));
memset(&calling_fun_98, 0, sizeof(_Bool));
right_value132 = (void*)0;
memset(&come_value_99, 0, sizeof(struct CVALUE*));
right_value133 = (void*)0;
right_value134 = (void*)0;
    left_92=self->mLeft;
    if(_if_conditional151=!node_compile(left_92,info),    _if_conditional151) {
        __result94__ = (_Bool)0;
        return __result94__;
    }
    left_value_93=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value130=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_94=self->mRight;
    if(_if_conditional152=!node_compile(right_94,info),    _if_conditional152) {
        __result95__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result95__;
    }
    right_value_95=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value131=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_96=(struct sType*)come_increment_ref_count(left_value_93->type);
    fun_name_97="operator_rshift_equal";
    if(self->mQuote) {
        calling_fun_98=(_Bool)0;
    }
    else {
        calling_fun_98=operator_overload_fun(type_96,fun_name_97,left_value_93,right_value_95,info);
    }
    if(_if_conditional154=!calling_fun_98,    _if_conditional154) {
        come_value_99=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value132=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 752, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj72=come_value_99->c_value;
        come_value_99->c_value=(char*)come_increment_ref_count(((char*)(right_value133=xsprintf("%s>>=%s",left_value_93->c_value,right_value_95->c_value))));
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj73=come_value_99->type;
        come_value_99->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value134=sType_clone(left_value_93->type))));
        come_call_finalizer2(sType_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_99->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_99));
        add_come_last_code(info,"%s;\n",come_value_99->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_99, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result96__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result96__;
    come_call_finalizer2(CVALUE_finalize,left_value_93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sRShiftEqualNode_sline(struct sRShiftEqualNode* self, struct sInfo* info){
void* __result_obj__;
int __result97__;
memset(&__result_obj__, 0, sizeof(void*));
    __result97__ = self->sline;
    return __result97__;
}

char* sRShiftEqualNode_sname(struct sRShiftEqualNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value135;
char* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
right_value135 = (void*)0;
    __result98__ = __result_obj__ = ((char*)(right_value135=__builtin_string(self->sname)));
    right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result98__;
}

struct sXorEqualNode* sXorEqualNode_initialize(struct sXorEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value136;
char* __dec_obj74;
void* right_value137;
struct sNode* __dec_obj75;
void* right_value138;
struct sNode* __dec_obj76;
struct sXorEqualNode* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
right_value136 = (void*)0;
right_value137 = (void*)0;
right_value138 = (void*)0;
    self->sline=info->sline;
    __dec_obj74=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value136=__builtin_string(info->sname))));
    __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj75=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value137=sNode_clone(left))));
    if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count2(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value137) { right_value137 = come_decrement_ref_count2(right_value137, ((struct sNode*)right_value137)->finalize, ((struct sNode*)right_value137)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj76=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value138=sNode_clone(right))));
    if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value138) { right_value138 = come_decrement_ref_count2(right_value138, ((struct sNode*)right_value138)->finalize, ((struct sNode*)right_value138)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result99__ = __result_obj__ = self;
    come_call_finalizer2(sXorEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result99__;
    come_call_finalizer2(sXorEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sXorEqualNode_terminated(){
void* __result_obj__;
_Bool __result100__;
memset(&__result_obj__, 0, sizeof(void*));
    __result100__ = (_Bool)0;
    return __result100__;
}

char* sXorEqualNode_kind(){
void* __result_obj__;
void* right_value139;
char* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value139 = (void*)0;
    __result101__ = __result_obj__ = ((char*)(right_value139=__builtin_string("sXorEqualNode")));
    right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result101__;
}

_Bool sXorEqualNode_compile(struct sXorEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_100;
_Bool _if_conditional158;
_Bool __result102__;
void* right_value140;
struct CVALUE* left_value_101;
struct sNode* right_102;
_Bool _if_conditional159;
_Bool __result103__;
void* right_value141;
struct CVALUE* right_value_103;
struct sType* type_104;
char* fun_name_105;
_Bool calling_fun_106;
_Bool _if_conditional160;
_Bool _if_conditional161;
void* right_value142;
struct CVALUE* come_value_107;
void* right_value143;
char* __dec_obj77;
void* right_value144;
struct sType* __dec_obj78;
_Bool __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_100, 0, sizeof(struct sNode*));
right_value140 = (void*)0;
memset(&left_value_101, 0, sizeof(struct CVALUE*));
memset(&right_102, 0, sizeof(struct sNode*));
right_value141 = (void*)0;
memset(&right_value_103, 0, sizeof(struct CVALUE*));
memset(&type_104, 0, sizeof(struct sType*));
memset(&fun_name_105, 0, sizeof(char*));
memset(&calling_fun_106, 0, sizeof(_Bool));
right_value142 = (void*)0;
memset(&come_value_107, 0, sizeof(struct CVALUE*));
right_value143 = (void*)0;
right_value144 = (void*)0;
    left_100=self->mLeft;
    if(_if_conditional158=!node_compile(left_100,info),    _if_conditional158) {
        __result102__ = (_Bool)0;
        return __result102__;
    }
    left_value_101=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value140=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_102=self->mRight;
    if(_if_conditional159=!node_compile(right_102,info),    _if_conditional159) {
        __result103__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result103__;
    }
    right_value_103=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value141=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_104=(struct sType*)come_increment_ref_count(left_value_101->type);
    fun_name_105="operator_xor_equal";
    if(self->mQuote) {
        calling_fun_106=(_Bool)0;
    }
    else {
        calling_fun_106=operator_overload_fun(type_104,fun_name_105,left_value_101,right_value_103,info);
    }
    if(_if_conditional161=!calling_fun_106,    _if_conditional161) {
        come_value_107=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value142=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 840, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj77=come_value_107->c_value;
        come_value_107->c_value=(char*)come_increment_ref_count(((char*)(right_value143=xsprintf("%s^=%s",left_value_101->c_value,right_value_103->c_value))));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj78=come_value_107->type;
        come_value_107->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value144=sType_clone(left_value_101->type))));
        come_call_finalizer2(sType_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_107->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_107));
        add_come_last_code(info,"%s;\n",come_value_107->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result104__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_104, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result104__;
    come_call_finalizer2(CVALUE_finalize,left_value_101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_104, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sXorEqualNode_sline(struct sXorEqualNode* self, struct sInfo* info){
void* __result_obj__;
int __result105__;
memset(&__result_obj__, 0, sizeof(void*));
    __result105__ = self->sline;
    return __result105__;
}

char* sXorEqualNode_sname(struct sXorEqualNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value145;
char* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
right_value145 = (void*)0;
    __result106__ = __result_obj__ = ((char*)(right_value145=__builtin_string(self->sname)));
    right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result106__;
}

struct sOrEqualNode* sOrEqualNode_initialize(struct sOrEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value146;
char* __dec_obj79;
void* right_value147;
struct sNode* __dec_obj80;
void* right_value148;
struct sNode* __dec_obj81;
struct sOrEqualNode* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
right_value146 = (void*)0;
right_value147 = (void*)0;
right_value148 = (void*)0;
    self->sline=info->sline;
    __dec_obj79=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value146=__builtin_string(info->sname))));
    __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj80=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value147=sNode_clone(left))));
    if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count2(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value147) { right_value147 = come_decrement_ref_count2(right_value147, ((struct sNode*)right_value147)->finalize, ((struct sNode*)right_value147)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj81=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value148=sNode_clone(right))));
    if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count2(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value148) { right_value148 = come_decrement_ref_count2(right_value148, ((struct sNode*)right_value148)->finalize, ((struct sNode*)right_value148)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result107__ = __result_obj__ = self;
    come_call_finalizer2(sOrEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result107__;
    come_call_finalizer2(sOrEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sOrEqualNode_terminated(){
void* __result_obj__;
_Bool __result108__;
memset(&__result_obj__, 0, sizeof(void*));
    __result108__ = (_Bool)0;
    return __result108__;
}

char* sOrEqualNode_kind(){
void* __result_obj__;
void* right_value149;
char* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
right_value149 = (void*)0;
    __result109__ = __result_obj__ = ((char*)(right_value149=__builtin_string("sOrEqualNode")));
    right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result109__;
}

_Bool sOrEqualNode_compile(struct sOrEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_108;
_Bool _if_conditional165;
_Bool __result110__;
void* right_value150;
struct CVALUE* left_value_109;
struct sNode* right_110;
_Bool _if_conditional166;
_Bool __result111__;
void* right_value151;
struct CVALUE* right_value_111;
struct sType* type_112;
char* fun_name_113;
_Bool calling_fun_114;
_Bool _if_conditional167;
_Bool _if_conditional168;
void* right_value152;
struct CVALUE* come_value_115;
void* right_value153;
char* __dec_obj82;
void* right_value154;
struct sType* __dec_obj83;
_Bool __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_108, 0, sizeof(struct sNode*));
right_value150 = (void*)0;
memset(&left_value_109, 0, sizeof(struct CVALUE*));
memset(&right_110, 0, sizeof(struct sNode*));
right_value151 = (void*)0;
memset(&right_value_111, 0, sizeof(struct CVALUE*));
memset(&type_112, 0, sizeof(struct sType*));
memset(&fun_name_113, 0, sizeof(char*));
memset(&calling_fun_114, 0, sizeof(_Bool));
right_value152 = (void*)0;
memset(&come_value_115, 0, sizeof(struct CVALUE*));
right_value153 = (void*)0;
right_value154 = (void*)0;
    left_108=self->mLeft;
    if(_if_conditional165=!node_compile(left_108,info),    _if_conditional165) {
        __result110__ = (_Bool)0;
        return __result110__;
    }
    left_value_109=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value150=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_110=self->mRight;
    if(_if_conditional166=!node_compile(right_110,info),    _if_conditional166) {
        __result111__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result111__;
    }
    right_value_111=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value151=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_112=(struct sType*)come_increment_ref_count(left_value_109->type);
    fun_name_113="operator_or_equal";
    if(self->mQuote) {
        calling_fun_114=(_Bool)0;
    }
    else {
        calling_fun_114=operator_overload_fun(type_112,fun_name_113,left_value_109,right_value_111,info);
    }
    if(_if_conditional168=!calling_fun_114,    _if_conditional168) {
        come_value_115=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value152=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 928, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj82=come_value_115->c_value;
        come_value_115->c_value=(char*)come_increment_ref_count(((char*)(right_value153=xsprintf("%s|=%s",left_value_109->c_value,right_value_111->c_value))));
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj83=come_value_115->type;
        come_value_115->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value154=sType_clone(left_value_109->type))));
        come_call_finalizer2(sType_finalize,__dec_obj83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_115->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_115));
        add_come_last_code(info,"%s;\n",come_value_115->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_115, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result112__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result112__;
    come_call_finalizer2(CVALUE_finalize,left_value_109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sOrEqualNode_sline(struct sOrEqualNode* self, struct sInfo* info){
void* __result_obj__;
int __result113__;
memset(&__result_obj__, 0, sizeof(void*));
    __result113__ = self->sline;
    return __result113__;
}

char* sOrEqualNode_sname(struct sOrEqualNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value155;
char* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
right_value155 = (void*)0;
    __result114__ = __result_obj__ = ((char*)(right_value155=__builtin_string(self->sname)));
    right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result114__;
}

struct sAndEqualNode* sAndEqualNode_initialize(struct sAndEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value156;
char* __dec_obj84;
void* right_value157;
struct sNode* __dec_obj85;
void* right_value158;
struct sNode* __dec_obj86;
struct sAndEqualNode* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value158 = (void*)0;
    self->sline=info->sline;
    __dec_obj84=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value156=__builtin_string(info->sname))));
    __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj85=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value157=sNode_clone(left))));
    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count2(__dec_obj85, ((struct sNode*)__dec_obj85)->finalize, ((struct sNode*)__dec_obj85)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value157) { right_value157 = come_decrement_ref_count2(right_value157, ((struct sNode*)right_value157)->finalize, ((struct sNode*)right_value157)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj86=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value158=sNode_clone(right))));
    if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count2(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value158) { right_value158 = come_decrement_ref_count2(right_value158, ((struct sNode*)right_value158)->finalize, ((struct sNode*)right_value158)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result115__ = __result_obj__ = self;
    come_call_finalizer2(sAndEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result115__;
    come_call_finalizer2(sAndEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sAndEqualNode_terminated(){
void* __result_obj__;
_Bool __result116__;
memset(&__result_obj__, 0, sizeof(void*));
    __result116__ = (_Bool)0;
    return __result116__;
}

char* sAndEqualNode_kind(){
void* __result_obj__;
void* right_value159;
char* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
right_value159 = (void*)0;
    __result117__ = __result_obj__ = ((char*)(right_value159=__builtin_string("sAndEqualNode")));
    right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result117__;
}

_Bool sAndEqualNode_compile(struct sAndEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_116;
_Bool _if_conditional172;
_Bool __result118__;
void* right_value160;
struct CVALUE* left_value_117;
struct sNode* right_118;
_Bool _if_conditional173;
_Bool __result119__;
void* right_value161;
struct CVALUE* right_value_119;
struct sType* type_120;
char* fun_name_121;
_Bool calling_fun_122;
_Bool _if_conditional174;
_Bool _if_conditional175;
void* right_value162;
struct CVALUE* come_value_123;
void* right_value163;
char* __dec_obj87;
void* right_value164;
struct sType* __dec_obj88;
_Bool __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_116, 0, sizeof(struct sNode*));
right_value160 = (void*)0;
memset(&left_value_117, 0, sizeof(struct CVALUE*));
memset(&right_118, 0, sizeof(struct sNode*));
right_value161 = (void*)0;
memset(&right_value_119, 0, sizeof(struct CVALUE*));
memset(&type_120, 0, sizeof(struct sType*));
memset(&fun_name_121, 0, sizeof(char*));
memset(&calling_fun_122, 0, sizeof(_Bool));
right_value162 = (void*)0;
memset(&come_value_123, 0, sizeof(struct CVALUE*));
right_value163 = (void*)0;
right_value164 = (void*)0;
    left_116=self->mLeft;
    if(_if_conditional172=!node_compile(left_116,info),    _if_conditional172) {
        __result118__ = (_Bool)0;
        return __result118__;
    }
    left_value_117=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value160=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_118=self->mRight;
    if(_if_conditional173=!node_compile(right_118,info),    _if_conditional173) {
        __result119__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result119__;
    }
    right_value_119=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value161=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_120=(struct sType*)come_increment_ref_count(left_value_117->type);
    fun_name_121="operator_and_equal";
    if(self->mQuote) {
        calling_fun_122=(_Bool)0;
    }
    else {
        calling_fun_122=operator_overload_fun(type_120,fun_name_121,left_value_117,right_value_119,info);
    }
    if(_if_conditional175=!calling_fun_122,    _if_conditional175) {
        come_value_123=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value162=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 1016, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj87=come_value_123->c_value;
        come_value_123->c_value=(char*)come_increment_ref_count(((char*)(right_value163=xsprintf("%s&=%s",left_value_117->c_value,right_value_119->c_value))));
        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj88=come_value_123->type;
        come_value_123->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value164=sType_clone(left_value_117->type))));
        come_call_finalizer2(sType_finalize,__dec_obj88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_123->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_123));
        add_come_last_code(info,"%s;\n",come_value_123->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result120__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result120__;
    come_call_finalizer2(CVALUE_finalize,left_value_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sAndEqualNode_sline(struct sAndEqualNode* self, struct sInfo* info){
void* __result_obj__;
int __result121__;
memset(&__result_obj__, 0, sizeof(void*));
    __result121__ = self->sline;
    return __result121__;
}

char* sAndEqualNode_sname(struct sAndEqualNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value165;
char* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
right_value165 = (void*)0;
    __result122__ = __result_obj__ = ((char*)(right_value165=__builtin_string(self->sname)));
    right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result122__;
}

struct sExpEqualNode* sExpEqualNode_initialize(struct sExpEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value166;
char* __dec_obj89;
void* right_value167;
struct sNode* __dec_obj90;
void* right_value168;
struct sNode* __dec_obj91;
struct sExpEqualNode* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value166 = (void*)0;
right_value167 = (void*)0;
right_value168 = (void*)0;
    self->sline=info->sline;
    __dec_obj89=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value166=__builtin_string(info->sname))));
    __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj90=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value167=sNode_clone(left))));
    if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count2(__dec_obj90, ((struct sNode*)__dec_obj90)->finalize, ((struct sNode*)__dec_obj90)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value167) { right_value167 = come_decrement_ref_count2(right_value167, ((struct sNode*)right_value167)->finalize, ((struct sNode*)right_value167)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj91=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value168=sNode_clone(right))));
    if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count2(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value168) { right_value168 = come_decrement_ref_count2(right_value168, ((struct sNode*)right_value168)->finalize, ((struct sNode*)right_value168)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result123__ = __result_obj__ = self;
    come_call_finalizer2(sExpEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result123__;
    come_call_finalizer2(sExpEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sExpEqualNode_terminated(){
void* __result_obj__;
_Bool __result124__;
memset(&__result_obj__, 0, sizeof(void*));
    __result124__ = (_Bool)0;
    return __result124__;
}

char* sExpEqualNode_kind(){
void* __result_obj__;
void* right_value169;
char* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
right_value169 = (void*)0;
    __result125__ = __result_obj__ = ((char*)(right_value169=__builtin_string("sExpEqualNode")));
    right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result125__;
}

_Bool sExpEqualNode_compile(struct sExpEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_124;
_Bool _if_conditional179;
_Bool __result126__;
void* right_value170;
struct CVALUE* left_value_125;
struct sNode* right_126;
_Bool _if_conditional180;
_Bool __result127__;
void* right_value171;
struct CVALUE* right_value_127;
struct sType* type_128;
char* fun_name_129;
_Bool calling_fun_130;
_Bool _if_conditional181;
_Bool _if_conditional182;
void* right_value172;
struct CVALUE* come_value_131;
void* right_value173;
char* __dec_obj92;
void* right_value174;
struct sType* __dec_obj93;
_Bool __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_124, 0, sizeof(struct sNode*));
right_value170 = (void*)0;
memset(&left_value_125, 0, sizeof(struct CVALUE*));
memset(&right_126, 0, sizeof(struct sNode*));
right_value171 = (void*)0;
memset(&right_value_127, 0, sizeof(struct CVALUE*));
memset(&type_128, 0, sizeof(struct sType*));
memset(&fun_name_129, 0, sizeof(char*));
memset(&calling_fun_130, 0, sizeof(_Bool));
right_value172 = (void*)0;
memset(&come_value_131, 0, sizeof(struct CVALUE*));
right_value173 = (void*)0;
right_value174 = (void*)0;
    left_124=self->mLeft;
    if(_if_conditional179=!node_compile(left_124,info),    _if_conditional179) {
        __result126__ = (_Bool)0;
        return __result126__;
    }
    left_value_125=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value170=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_126=self->mRight;
    if(_if_conditional180=!node_compile(right_126,info),    _if_conditional180) {
        __result127__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result127__;
    }
    right_value_127=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value171=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_128=(struct sType*)come_increment_ref_count(left_value_125->type);
    fun_name_129="operator_exp_equal";
    if(self->mQuote) {
        calling_fun_130=(_Bool)0;
    }
    else {
        calling_fun_130=operator_overload_fun(type_128,fun_name_129,left_value_125,right_value_127,info);
    }
    if(_if_conditional182=!calling_fun_130,    _if_conditional182) {
        come_value_131=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value172=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 1104, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj92=come_value_131->c_value;
        come_value_131->c_value=(char*)come_increment_ref_count(((char*)(right_value173=xsprintf("%s=%s",left_value_125->c_value,right_value_127->c_value))));
        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj93=come_value_131->type;
        come_value_131->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value174=sType_clone(left_value_125->type))));
        come_call_finalizer2(sType_finalize,__dec_obj93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_131->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_131));
        add_come_last_code(info,"%s;\n",come_value_131->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_131, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result128__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result128__;
    come_call_finalizer2(CVALUE_finalize,left_value_125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sExpEqualNode_sline(struct sExpEqualNode* self, struct sInfo* info){
void* __result_obj__;
int __result129__;
memset(&__result_obj__, 0, sizeof(void*));
    __result129__ = self->sline;
    return __result129__;
}

char* sExpEqualNode_sname(struct sExpEqualNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value175;
char* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
right_value175 = (void*)0;
    __result130__ = __result_obj__ = ((char*)(right_value175=__builtin_string(self->sname)));
    right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result130__;
}

struct sNode* post_position_operator2_v19(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional183;
_Bool quote_132;
_Bool _if_conditional184;
void* right_value176;
void* right_value177;
struct sNode* _inf_value1;
struct sPlusPlusNode* _inf_obj_value1;
void* right_value181;
struct sNode* __result133__;
_Bool _if_conditional192;
_Bool quote_134;
_Bool _if_conditional193;
void* right_value182;
void* right_value183;
struct sNode* _inf_value2;
struct sMinusMinusNode* _inf_obj_value2;
void* right_value187;
struct sNode* __result136__;
_Bool _if_conditional201;
_Bool quote_136;
_Bool _if_conditional202;
void* right_value188;
struct sNode* right_node_137;
void* right_value189;
void* right_value190;
struct sNode* _inf_value3;
struct sPlusEqualNode* _inf_obj_value3;
void* right_value195;
struct sNode* __result139__;
_Bool _if_conditional212;
_Bool quote_139;
_Bool _if_conditional213;
void* right_value196;
struct sNode* right_node_140;
void* right_value197;
void* right_value198;
struct sNode* _inf_value4;
struct sMinusEqualNode* _inf_obj_value4;
void* right_value203;
struct sNode* __result142__;
_Bool _if_conditional223;
_Bool quote_142;
_Bool _if_conditional224;
void* right_value204;
struct sNode* right_node_143;
void* right_value205;
void* right_value206;
struct sNode* _inf_value5;
struct sMultEqualNode* _inf_obj_value5;
void* right_value211;
struct sNode* __result145__;
_Bool _if_conditional234;
_Bool quote_145;
_Bool _if_conditional235;
void* right_value212;
struct sNode* right_node_146;
void* right_value213;
void* right_value214;
struct sNode* _inf_value6;
struct sDivEqualNode* _inf_obj_value6;
void* right_value219;
struct sNode* __result148__;
_Bool _if_conditional245;
_Bool quote_148;
_Bool _if_conditional246;
void* right_value220;
struct sNode* right_node_149;
void* right_value221;
void* right_value222;
struct sNode* _inf_value7;
struct sModEqualNode* _inf_obj_value7;
void* right_value227;
struct sNode* __result151__;
_Bool _if_conditional256;
_Bool quote_151;
_Bool _if_conditional257;
void* right_value228;
struct sNode* right_node_152;
void* right_value229;
void* right_value230;
struct sNode* _inf_value8;
struct sLShifEqualNode* _inf_obj_value8;
void* right_value235;
struct sNode* __result154__;
_Bool _if_conditional267;
_Bool quote_154;
_Bool _if_conditional268;
void* right_value236;
struct sNode* right_node_155;
void* right_value237;
void* right_value238;
struct sNode* _inf_value9;
struct sRShiftEqualNode* _inf_obj_value9;
void* right_value243;
struct sNode* __result157__;
_Bool _if_conditional278;
_Bool quote_157;
_Bool _if_conditional279;
void* right_value244;
struct sNode* right_node_158;
void* right_value245;
void* right_value246;
struct sNode* _inf_value10;
struct sXorEqualNode* _inf_obj_value10;
void* right_value251;
struct sNode* __result160__;
_Bool _if_conditional289;
_Bool quote_160;
_Bool _if_conditional290;
void* right_value252;
struct sNode* right_node_161;
void* right_value253;
void* right_value254;
struct sNode* _inf_value11;
struct sAndEqualNode* _inf_obj_value11;
void* right_value259;
struct sNode* __result163__;
_Bool _if_conditional300;
_Bool quote_163;
_Bool _if_conditional301;
void* right_value260;
struct sNode* right_node_164;
void* right_value261;
void* right_value262;
struct sNode* _inf_value12;
struct sOrEqualNode* _inf_obj_value12;
void* right_value267;
struct sNode* __result166__;
_Bool _if_conditional311;
_Bool quote_166;
_Bool _if_conditional312;
void* right_value268;
struct sNode* right_node_167;
void* right_value269;
void* right_value270;
struct sNode* _inf_value13;
struct sExpEqualNode* _inf_obj_value13;
void* right_value275;
struct sNode* __result169__;
struct sNode* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&quote_132, 0, sizeof(_Bool));
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value181 = (void*)0;
memset(&quote_134, 0, sizeof(_Bool));
right_value182 = (void*)0;
right_value183 = (void*)0;
right_value187 = (void*)0;
memset(&quote_136, 0, sizeof(_Bool));
right_value188 = (void*)0;
memset(&right_node_137, 0, sizeof(struct sNode*));
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value195 = (void*)0;
memset(&quote_139, 0, sizeof(_Bool));
right_value196 = (void*)0;
memset(&right_node_140, 0, sizeof(struct sNode*));
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value203 = (void*)0;
memset(&quote_142, 0, sizeof(_Bool));
right_value204 = (void*)0;
memset(&right_node_143, 0, sizeof(struct sNode*));
right_value205 = (void*)0;
right_value206 = (void*)0;
right_value211 = (void*)0;
memset(&quote_145, 0, sizeof(_Bool));
right_value212 = (void*)0;
memset(&right_node_146, 0, sizeof(struct sNode*));
right_value213 = (void*)0;
right_value214 = (void*)0;
right_value219 = (void*)0;
memset(&quote_148, 0, sizeof(_Bool));
right_value220 = (void*)0;
memset(&right_node_149, 0, sizeof(struct sNode*));
right_value221 = (void*)0;
right_value222 = (void*)0;
right_value227 = (void*)0;
memset(&quote_151, 0, sizeof(_Bool));
right_value228 = (void*)0;
memset(&right_node_152, 0, sizeof(struct sNode*));
right_value229 = (void*)0;
right_value230 = (void*)0;
right_value235 = (void*)0;
memset(&quote_154, 0, sizeof(_Bool));
right_value236 = (void*)0;
memset(&right_node_155, 0, sizeof(struct sNode*));
right_value237 = (void*)0;
right_value238 = (void*)0;
right_value243 = (void*)0;
memset(&quote_157, 0, sizeof(_Bool));
right_value244 = (void*)0;
memset(&right_node_158, 0, sizeof(struct sNode*));
right_value245 = (void*)0;
right_value246 = (void*)0;
right_value251 = (void*)0;
memset(&quote_160, 0, sizeof(_Bool));
right_value252 = (void*)0;
memset(&right_node_161, 0, sizeof(struct sNode*));
right_value253 = (void*)0;
right_value254 = (void*)0;
right_value259 = (void*)0;
memset(&quote_163, 0, sizeof(_Bool));
right_value260 = (void*)0;
memset(&right_node_164, 0, sizeof(struct sNode*));
right_value261 = (void*)0;
right_value262 = (void*)0;
right_value267 = (void*)0;
memset(&quote_166, 0, sizeof(_Bool));
right_value268 = (void*)0;
memset(&right_node_167, 0, sizeof(struct sNode*));
right_value269 = (void*)0;
right_value270 = (void*)0;
right_value275 = (void*)0;
    if(_if_conditional183=(*info->p==92&&*(info->p+1)==43&&*(info->p+2)==43)||(*info->p==43&&*(info->p+1)==43),    _if_conditional183) {
        if(_if_conditional184=*info->p==92,        _if_conditional184) {
            info->p+=3;
            skip_spaces_and_lf(info);
            quote_132=(_Bool)1;
        }
        else {
            info->p+=2;
            skip_spaces_and_lf(info);
            quote_132=(_Bool)0;
        }
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1143, "struct sNode");
        _inf_obj_value1=come_increment_ref_count(((struct sPlusPlusNode*)(right_value177=sPlusPlusNode_initialize((struct sPlusPlusNode*)come_increment_ref_count(((struct sPlusPlusNode*)(right_value176=(struct sPlusPlusNode*)come_calloc(1, sizeof(struct sPlusPlusNode)*(1), "19eq.c", 1143, "struct sPlusPlusNode")))),(struct sNode*)come_increment_ref_count(node),quote_132,info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sPlusPlusNode_finalize;
        _inf_value1->clone=(void*)sPlusPlusNode_clone;
        _inf_value1->compile=(void*)sPlusPlusNode_compile;
        _inf_value1->sline=(void*)sPlusPlusNode_sline;
        _inf_value1->sname=(void*)sPlusPlusNode_sname;
        _inf_value1->terminated=(void*)sPlusPlusNode_terminated;
        _inf_value1->kind=(void*)sPlusPlusNode_kind;
        __result133__ = __result_obj__ = ((struct sNode*)(right_value181=_inf_value1));
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        come_call_finalizer2(sPlusPlusNode_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sPlusPlusNode_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value181) { right_value181 = come_decrement_ref_count2(right_value181, ((struct sNode*)right_value181)->finalize, ((struct sNode*)right_value181)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result133__;
    }
    else {
        if(_if_conditional192=(*info->p==92&&*(info->p+1)==45&&*(info->p+2)==45)||(*info->p==45&&*(info->p+1)==45),        _if_conditional192) {
            if(_if_conditional193=*info->p==92,            _if_conditional193) {
                info->p+=3;
                skip_spaces_and_lf(info);
                quote_134=(_Bool)1;
            }
            else {
                info->p+=2;
                skip_spaces_and_lf(info);
                quote_134=(_Bool)0;
            }
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1158, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sMinusMinusNode*)(right_value183=sMinusMinusNode_initialize((struct sMinusMinusNode*)come_increment_ref_count(((struct sMinusMinusNode*)(right_value182=(struct sMinusMinusNode*)come_calloc(1, sizeof(struct sMinusMinusNode)*(1), "19eq.c", 1158, "struct sMinusMinusNode")))),(struct sNode*)come_increment_ref_count(node),quote_134,info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sMinusMinusNode_finalize;
            _inf_value2->clone=(void*)sMinusMinusNode_clone;
            _inf_value2->compile=(void*)sMinusMinusNode_compile;
            _inf_value2->sline=(void*)sMinusMinusNode_sline;
            _inf_value2->sname=(void*)sMinusMinusNode_sname;
            _inf_value2->terminated=(void*)sMinusMinusNode_terminated;
            _inf_value2->kind=(void*)sMinusMinusNode_kind;
            __result136__ = __result_obj__ = ((struct sNode*)(right_value187=_inf_value2));
            if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
            come_call_finalizer2(sMinusMinusNode_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sMinusMinusNode_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value187) { right_value187 = come_decrement_ref_count2(right_value187, ((struct sNode*)right_value187)->finalize, ((struct sNode*)right_value187)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result136__;
        }
        else {
            if(_if_conditional201=(*info->p==92&&*(info->p+1)==43&&*(info->p+2)==61)||(*info->p==43&&*(info->p+1)==61),            _if_conditional201) {
                if(_if_conditional202=*info->p==92,                _if_conditional202) {
                    info->p+=3;
                    skip_spaces_and_lf(info);
                    quote_136=(_Bool)1;
                }
                else {
                    info->p+=2;
                    skip_spaces_and_lf(info);
                    quote_136=(_Bool)0;
                }
                right_node_137=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value188=expression_v13(info))));
                if(right_value188) { right_value188 = come_decrement_ref_count2(right_value188, ((struct sNode*)right_value188)->finalize, ((struct sNode*)right_value188)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1175, "struct sNode");
                _inf_obj_value3=come_increment_ref_count(((struct sPlusEqualNode*)(right_value190=sPlusEqualNode_initialize((struct sPlusEqualNode*)come_increment_ref_count(((struct sPlusEqualNode*)(right_value189=(struct sPlusEqualNode*)come_calloc(1, sizeof(struct sPlusEqualNode)*(1), "19eq.c", 1175, "struct sPlusEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_137),quote_136,info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sPlusEqualNode_finalize;
                _inf_value3->clone=(void*)sPlusEqualNode_clone;
                _inf_value3->compile=(void*)sPlusEqualNode_compile;
                _inf_value3->sline=(void*)sPlusEqualNode_sline;
                _inf_value3->sname=(void*)sPlusEqualNode_sname;
                _inf_value3->terminated=(void*)sPlusEqualNode_terminated;
                _inf_value3->kind=(void*)sPlusEqualNode_kind;
                __result139__ = __result_obj__ = ((struct sNode*)(right_value195=_inf_value3));
                if(right_node_137) { right_node_137 = come_decrement_ref_count2(right_node_137, ((struct sNode*)right_node_137)->finalize, ((struct sNode*)right_node_137)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                come_call_finalizer2(sPlusEqualNode_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sPlusEqualNode_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value195) { right_value195 = come_decrement_ref_count2(right_value195, ((struct sNode*)right_value195)->finalize, ((struct sNode*)right_value195)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result139__;
                if(right_node_137) { right_node_137 = come_decrement_ref_count2(right_node_137, ((struct sNode*)right_node_137)->finalize, ((struct sNode*)right_node_137)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(_if_conditional212=(*info->p==92&&*(info->p+1)==45&&*(info->p+2)==61)||(*info->p==45&&*(info->p+1)==61),                _if_conditional212) {
                    if(_if_conditional213=*info->p==92,                    _if_conditional213) {
                        info->p+=3;
                        skip_spaces_and_lf(info);
                        quote_139=(_Bool)1;
                    }
                    else {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        quote_139=(_Bool)0;
                    }
                    right_node_140=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value196=expression_v13(info))));
                    if(right_value196) { right_value196 = come_decrement_ref_count2(right_value196, ((struct sNode*)right_value196)->finalize, ((struct sNode*)right_value196)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1192, "struct sNode");
                    _inf_obj_value4=come_increment_ref_count(((struct sMinusEqualNode*)(right_value198=sMinusEqualNode_initialize((struct sMinusEqualNode*)come_increment_ref_count(((struct sMinusEqualNode*)(right_value197=(struct sMinusEqualNode*)come_calloc(1, sizeof(struct sMinusEqualNode)*(1), "19eq.c", 1192, "struct sMinusEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_140),quote_139,info))));
                    _inf_value4->_protocol_obj=_inf_obj_value4;
                    _inf_value4->finalize=(void*)sMinusEqualNode_finalize;
                    _inf_value4->clone=(void*)sMinusEqualNode_clone;
                    _inf_value4->compile=(void*)sMinusEqualNode_compile;
                    _inf_value4->sline=(void*)sMinusEqualNode_sline;
                    _inf_value4->sname=(void*)sMinusEqualNode_sname;
                    _inf_value4->terminated=(void*)sMinusEqualNode_terminated;
                    _inf_value4->kind=(void*)sMinusEqualNode_kind;
                    __result142__ = __result_obj__ = ((struct sNode*)(right_value203=_inf_value4));
                    if(right_node_140) { right_node_140 = come_decrement_ref_count2(right_node_140, ((struct sNode*)right_node_140)->finalize, ((struct sNode*)right_node_140)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                    come_call_finalizer2(sMinusEqualNode_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sMinusEqualNode_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value203) { right_value203 = come_decrement_ref_count2(right_value203, ((struct sNode*)right_value203)->finalize, ((struct sNode*)right_value203)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result142__;
                    if(right_node_140) { right_node_140 = come_decrement_ref_count2(right_node_140, ((struct sNode*)right_node_140)->finalize, ((struct sNode*)right_node_140)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional223=(*info->p==92&&*(info->p+1)==42&&*(info->p+2)==61)||(*info->p==42&&*(info->p+1)==61),                    _if_conditional223) {
                        if(_if_conditional224=*info->p==92,                        _if_conditional224) {
                            info->p+=3;
                            skip_spaces_and_lf(info);
                            quote_142=(_Bool)1;
                        }
                        else {
                            info->p+=2;
                            skip_spaces_and_lf(info);
                            quote_142=(_Bool)0;
                        }
                        right_node_143=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value204=expression_v13(info))));
                        if(right_value204) { right_value204 = come_decrement_ref_count2(right_value204, ((struct sNode*)right_value204)->finalize, ((struct sNode*)right_value204)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1209, "struct sNode");
                        _inf_obj_value5=come_increment_ref_count(((struct sMultEqualNode*)(right_value206=sMultEqualNode_initialize((struct sMultEqualNode*)come_increment_ref_count(((struct sMultEqualNode*)(right_value205=(struct sMultEqualNode*)come_calloc(1, sizeof(struct sMultEqualNode)*(1), "19eq.c", 1209, "struct sMultEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_143),quote_142,info))));
                        _inf_value5->_protocol_obj=_inf_obj_value5;
                        _inf_value5->finalize=(void*)sMultEqualNode_finalize;
                        _inf_value5->clone=(void*)sMultEqualNode_clone;
                        _inf_value5->compile=(void*)sMultEqualNode_compile;
                        _inf_value5->sline=(void*)sMultEqualNode_sline;
                        _inf_value5->sname=(void*)sMultEqualNode_sname;
                        _inf_value5->terminated=(void*)sMultEqualNode_terminated;
                        _inf_value5->kind=(void*)sMultEqualNode_kind;
                        __result145__ = __result_obj__ = ((struct sNode*)(right_value211=_inf_value5));
                        if(right_node_143) { right_node_143 = come_decrement_ref_count2(right_node_143, ((struct sNode*)right_node_143)->finalize, ((struct sNode*)right_node_143)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        come_call_finalizer2(sMultEqualNode_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sMultEqualNode_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value211) { right_value211 = come_decrement_ref_count2(right_value211, ((struct sNode*)right_value211)->finalize, ((struct sNode*)right_value211)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result145__;
                        if(right_node_143) { right_node_143 = come_decrement_ref_count2(right_node_143, ((struct sNode*)right_node_143)->finalize, ((struct sNode*)right_node_143)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(_if_conditional234=(*info->p==92&&*(info->p+1)==47&&*(info->p+2)==61)||(*info->p==47&&*(info->p+1)==61),                        _if_conditional234) {
                            if(_if_conditional235=*info->p==92,                            _if_conditional235) {
                                info->p+=3;
                                skip_spaces_and_lf(info);
                                quote_145=(_Bool)1;
                            }
                            else {
                                info->p+=2;
                                skip_spaces_and_lf(info);
                                quote_145=(_Bool)0;
                            }
                            right_node_146=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value212=expression_v13(info))));
                            if(right_value212) { right_value212 = come_decrement_ref_count2(right_value212, ((struct sNode*)right_value212)->finalize, ((struct sNode*)right_value212)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1226, "struct sNode");
                            _inf_obj_value6=come_increment_ref_count(((struct sDivEqualNode*)(right_value214=sDivEqualNode_initialize((struct sDivEqualNode*)come_increment_ref_count(((struct sDivEqualNode*)(right_value213=(struct sDivEqualNode*)come_calloc(1, sizeof(struct sDivEqualNode)*(1), "19eq.c", 1226, "struct sDivEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_146),quote_145,info))));
                            _inf_value6->_protocol_obj=_inf_obj_value6;
                            _inf_value6->finalize=(void*)sDivEqualNode_finalize;
                            _inf_value6->clone=(void*)sDivEqualNode_clone;
                            _inf_value6->compile=(void*)sDivEqualNode_compile;
                            _inf_value6->sline=(void*)sDivEqualNode_sline;
                            _inf_value6->sname=(void*)sDivEqualNode_sname;
                            _inf_value6->terminated=(void*)sDivEqualNode_terminated;
                            _inf_value6->kind=(void*)sDivEqualNode_kind;
                            __result148__ = __result_obj__ = ((struct sNode*)(right_value219=_inf_value6));
                            if(right_node_146) { right_node_146 = come_decrement_ref_count2(right_node_146, ((struct sNode*)right_node_146)->finalize, ((struct sNode*)right_node_146)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            come_call_finalizer2(sDivEqualNode_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sDivEqualNode_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value219) { right_value219 = come_decrement_ref_count2(right_value219, ((struct sNode*)right_value219)->finalize, ((struct sNode*)right_value219)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result148__;
                            if(right_node_146) { right_node_146 = come_decrement_ref_count2(right_node_146, ((struct sNode*)right_node_146)->finalize, ((struct sNode*)right_node_146)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            if(_if_conditional245=(*info->p==92&&*(info->p+1)==37&&*(info->p+2)==61)||(*info->p==37&&*(info->p+1)==61),                            _if_conditional245) {
                                if(_if_conditional246=*info->p==92,                                _if_conditional246) {
                                    info->p+=3;
                                    skip_spaces_and_lf(info);
                                    quote_148=(_Bool)1;
                                }
                                else {
                                    info->p+=2;
                                    skip_spaces_and_lf(info);
                                    quote_148=(_Bool)0;
                                }
                                right_node_149=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value220=expression_v13(info))));
                                if(right_value220) { right_value220 = come_decrement_ref_count2(right_value220, ((struct sNode*)right_value220)->finalize, ((struct sNode*)right_value220)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1244, "struct sNode");
                                _inf_obj_value7=come_increment_ref_count(((struct sModEqualNode*)(right_value222=sModEqualNode_initialize((struct sModEqualNode*)come_increment_ref_count(((struct sModEqualNode*)(right_value221=(struct sModEqualNode*)come_calloc(1, sizeof(struct sModEqualNode)*(1), "19eq.c", 1244, "struct sModEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_149),quote_148,info))));
                                _inf_value7->_protocol_obj=_inf_obj_value7;
                                _inf_value7->finalize=(void*)sModEqualNode_finalize;
                                _inf_value7->clone=(void*)sModEqualNode_clone;
                                _inf_value7->compile=(void*)sModEqualNode_compile;
                                _inf_value7->sline=(void*)sModEqualNode_sline;
                                _inf_value7->sname=(void*)sModEqualNode_sname;
                                _inf_value7->terminated=(void*)sModEqualNode_terminated;
                                _inf_value7->kind=(void*)sModEqualNode_kind;
                                __result151__ = __result_obj__ = ((struct sNode*)(right_value227=_inf_value7));
                                if(right_node_149) { right_node_149 = come_decrement_ref_count2(right_node_149, ((struct sNode*)right_node_149)->finalize, ((struct sNode*)right_node_149)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                come_call_finalizer2(sModEqualNode_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sModEqualNode_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(right_value227) { right_value227 = come_decrement_ref_count2(right_value227, ((struct sNode*)right_value227)->finalize, ((struct sNode*)right_value227)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result151__;
                                if(right_node_149) { right_node_149 = come_decrement_ref_count2(right_node_149, ((struct sNode*)right_node_149)->finalize, ((struct sNode*)right_node_149)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                if(_if_conditional256=(*info->p==92&&*(info->p+1)==60&&*(info->p+2)==60&&*(info->p+3)==61)||(*info->p==60&&*(info->p+1)==60&&*(info->p+2)==61),                                _if_conditional256) {
                                    if(_if_conditional257=*info->p==92,                                    _if_conditional257) {
                                        info->p+=4;
                                        skip_spaces_and_lf(info);
                                        quote_151=(_Bool)1;
                                    }
                                    else {
                                        info->p+=3;
                                        skip_spaces_and_lf(info);
                                        quote_151=(_Bool)0;
                                    }
                                    right_node_152=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value228=expression_v13(info))));
                                    if(right_value228) { right_value228 = come_decrement_ref_count2(right_value228, ((struct sNode*)right_value228)->finalize, ((struct sNode*)right_value228)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1261, "struct sNode");
                                    _inf_obj_value8=come_increment_ref_count(((struct sLShifEqualNode*)(right_value230=sLShifEqualNode_initialize((struct sLShifEqualNode*)come_increment_ref_count(((struct sLShifEqualNode*)(right_value229=(struct sLShifEqualNode*)come_calloc(1, sizeof(struct sLShifEqualNode)*(1), "19eq.c", 1261, "struct sLShifEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_152),quote_151,info))));
                                    _inf_value8->_protocol_obj=_inf_obj_value8;
                                    _inf_value8->finalize=(void*)sLShifEqualNode_finalize;
                                    _inf_value8->clone=(void*)sLShifEqualNode_clone;
                                    _inf_value8->compile=(void*)sLShifEqualNode_compile;
                                    _inf_value8->sline=(void*)sLShifEqualNode_sline;
                                    _inf_value8->sname=(void*)sLShifEqualNode_sname;
                                    _inf_value8->terminated=(void*)sLShifEqualNode_terminated;
                                    _inf_value8->kind=(void*)sLShifEqualNode_kind;
                                    __result154__ = __result_obj__ = ((struct sNode*)(right_value235=_inf_value8));
                                    if(right_node_152) { right_node_152 = come_decrement_ref_count2(right_node_152, ((struct sNode*)right_node_152)->finalize, ((struct sNode*)right_node_152)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                    come_call_finalizer2(sLShifEqualNode_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sLShifEqualNode_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(right_value235) { right_value235 = come_decrement_ref_count2(right_value235, ((struct sNode*)right_value235)->finalize, ((struct sNode*)right_value235)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result154__;
                                    if(right_node_152) { right_node_152 = come_decrement_ref_count2(right_node_152, ((struct sNode*)right_node_152)->finalize, ((struct sNode*)right_node_152)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    if(_if_conditional267=(*info->p==92&&*(info->p+1)==62&&*(info->p+2)==62&&*(info->p+3)==61)||(*info->p==62&&*(info->p+1)==62&&*(info->p+2)==61),                                    _if_conditional267) {
                                        if(_if_conditional268=*info->p==92,                                        _if_conditional268) {
                                            info->p+=4;
                                            skip_spaces_and_lf(info);
                                            quote_154=(_Bool)1;
                                        }
                                        else {
                                            info->p+=3;
                                            skip_spaces_and_lf(info);
                                            quote_154=(_Bool)0;
                                        }
                                        right_node_155=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value236=expression_v13(info))));
                                        if(right_value236) { right_value236 = come_decrement_ref_count2(right_value236, ((struct sNode*)right_value236)->finalize, ((struct sNode*)right_value236)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1278, "struct sNode");
                                        _inf_obj_value9=come_increment_ref_count(((struct sRShiftEqualNode*)(right_value238=sRShiftEqualNode_initialize((struct sRShiftEqualNode*)come_increment_ref_count(((struct sRShiftEqualNode*)(right_value237=(struct sRShiftEqualNode*)come_calloc(1, sizeof(struct sRShiftEqualNode)*(1), "19eq.c", 1278, "struct sRShiftEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_155),quote_154,info))));
                                        _inf_value9->_protocol_obj=_inf_obj_value9;
                                        _inf_value9->finalize=(void*)sRShiftEqualNode_finalize;
                                        _inf_value9->clone=(void*)sRShiftEqualNode_clone;
                                        _inf_value9->compile=(void*)sRShiftEqualNode_compile;
                                        _inf_value9->sline=(void*)sRShiftEqualNode_sline;
                                        _inf_value9->sname=(void*)sRShiftEqualNode_sname;
                                        _inf_value9->terminated=(void*)sRShiftEqualNode_terminated;
                                        _inf_value9->kind=(void*)sRShiftEqualNode_kind;
                                        __result157__ = __result_obj__ = ((struct sNode*)(right_value243=_inf_value9));
                                        if(right_node_155) { right_node_155 = come_decrement_ref_count2(right_node_155, ((struct sNode*)right_node_155)->finalize, ((struct sNode*)right_node_155)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                        come_call_finalizer2(sRShiftEqualNode_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(sRShiftEqualNode_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(right_value243) { right_value243 = come_decrement_ref_count2(right_value243, ((struct sNode*)right_value243)->finalize, ((struct sNode*)right_value243)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result157__;
                                        if(right_node_155) { right_node_155 = come_decrement_ref_count2(right_node_155, ((struct sNode*)right_node_155)->finalize, ((struct sNode*)right_node_155)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        if(_if_conditional278=(*info->p==92&&*(info->p+1)==94&&*(info->p+2)==61)||(*info->p==94&&*(info->p+1)==61),                                        _if_conditional278) {
                                            if(_if_conditional279=*info->p==92,                                            _if_conditional279) {
                                                info->p+=3;
                                                skip_spaces_and_lf(info);
                                                quote_157=(_Bool)1;
                                            }
                                            else {
                                                info->p+=2;
                                                skip_spaces_and_lf(info);
                                                quote_157=(_Bool)0;
                                            }
                                            right_node_158=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value244=expression_v13(info))));
                                            if(right_value244) { right_value244 = come_decrement_ref_count2(right_value244, ((struct sNode*)right_value244)->finalize, ((struct sNode*)right_value244)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1295, "struct sNode");
                                            _inf_obj_value10=come_increment_ref_count(((struct sXorEqualNode*)(right_value246=sXorEqualNode_initialize((struct sXorEqualNode*)come_increment_ref_count(((struct sXorEqualNode*)(right_value245=(struct sXorEqualNode*)come_calloc(1, sizeof(struct sXorEqualNode)*(1), "19eq.c", 1295, "struct sXorEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_158),quote_157,info))));
                                            _inf_value10->_protocol_obj=_inf_obj_value10;
                                            _inf_value10->finalize=(void*)sXorEqualNode_finalize;
                                            _inf_value10->clone=(void*)sXorEqualNode_clone;
                                            _inf_value10->compile=(void*)sXorEqualNode_compile;
                                            _inf_value10->sline=(void*)sXorEqualNode_sline;
                                            _inf_value10->sname=(void*)sXorEqualNode_sname;
                                            _inf_value10->terminated=(void*)sXorEqualNode_terminated;
                                            _inf_value10->kind=(void*)sXorEqualNode_kind;
                                            __result160__ = __result_obj__ = ((struct sNode*)(right_value251=_inf_value10));
                                            if(right_node_158) { right_node_158 = come_decrement_ref_count2(right_node_158, ((struct sNode*)right_node_158)->finalize, ((struct sNode*)right_node_158)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                            come_call_finalizer2(sXorEqualNode_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer2(sXorEqualNode_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            if(right_value251) { right_value251 = come_decrement_ref_count2(right_value251, ((struct sNode*)right_value251)->finalize, ((struct sNode*)right_value251)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            return __result160__;
                                            if(right_node_158) { right_node_158 = come_decrement_ref_count2(right_node_158, ((struct sNode*)right_node_158)->finalize, ((struct sNode*)right_node_158)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        else {
                                            if(_if_conditional289=(*info->p==92&&*(info->p+1)==38&&*(info->p+2)==61)||(*info->p==38&&*(info->p+1)==61),                                            _if_conditional289) {
                                                if(_if_conditional290=*info->p==92,                                                _if_conditional290) {
                                                    info->p+=3;
                                                    skip_spaces_and_lf(info);
                                                    quote_160=(_Bool)1;
                                                }
                                                else {
                                                    info->p+=2;
                                                    skip_spaces_and_lf(info);
                                                    quote_160=(_Bool)0;
                                                }
                                                right_node_161=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value252=expression_v13(info))));
                                                if(right_value252) { right_value252 = come_decrement_ref_count2(right_value252, ((struct sNode*)right_value252)->finalize, ((struct sNode*)right_value252)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1312, "struct sNode");
                                                _inf_obj_value11=come_increment_ref_count(((struct sAndEqualNode*)(right_value254=sAndEqualNode_initialize((struct sAndEqualNode*)come_increment_ref_count(((struct sAndEqualNode*)(right_value253=(struct sAndEqualNode*)come_calloc(1, sizeof(struct sAndEqualNode)*(1), "19eq.c", 1312, "struct sAndEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_161),quote_160,info))));
                                                _inf_value11->_protocol_obj=_inf_obj_value11;
                                                _inf_value11->finalize=(void*)sAndEqualNode_finalize;
                                                _inf_value11->clone=(void*)sAndEqualNode_clone;
                                                _inf_value11->compile=(void*)sAndEqualNode_compile;
                                                _inf_value11->sline=(void*)sAndEqualNode_sline;
                                                _inf_value11->sname=(void*)sAndEqualNode_sname;
                                                _inf_value11->terminated=(void*)sAndEqualNode_terminated;
                                                _inf_value11->kind=(void*)sAndEqualNode_kind;
                                                __result163__ = __result_obj__ = ((struct sNode*)(right_value259=_inf_value11));
                                                if(right_node_161) { right_node_161 = come_decrement_ref_count2(right_node_161, ((struct sNode*)right_node_161)->finalize, ((struct sNode*)right_node_161)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                come_call_finalizer2(sAndEqualNode_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                come_call_finalizer2(sAndEqualNode_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                if(right_value259) { right_value259 = come_decrement_ref_count2(right_value259, ((struct sNode*)right_value259)->finalize, ((struct sNode*)right_value259)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                return __result163__;
                                                if(right_node_161) { right_node_161 = come_decrement_ref_count2(right_node_161, ((struct sNode*)right_node_161)->finalize, ((struct sNode*)right_node_161)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            else {
                                                if(_if_conditional300=(*info->p==92&&*(info->p+1)==124&&*(info->p+2)==61)||(*info->p==124&&*(info->p+1)==61),                                                _if_conditional300) {
                                                    if(_if_conditional301=*info->p==92,                                                    _if_conditional301) {
                                                        info->p+=3;
                                                        skip_spaces_and_lf(info);
                                                        quote_163=(_Bool)1;
                                                    }
                                                    else {
                                                        info->p+=2;
                                                        skip_spaces_and_lf(info);
                                                        quote_163=(_Bool)0;
                                                    }
                                                    right_node_164=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value260=expression_v13(info))));
                                                    if(right_value260) { right_value260 = come_decrement_ref_count2(right_value260, ((struct sNode*)right_value260)->finalize, ((struct sNode*)right_value260)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1329, "struct sNode");
                                                    _inf_obj_value12=come_increment_ref_count(((struct sOrEqualNode*)(right_value262=sOrEqualNode_initialize((struct sOrEqualNode*)come_increment_ref_count(((struct sOrEqualNode*)(right_value261=(struct sOrEqualNode*)come_calloc(1, sizeof(struct sOrEqualNode)*(1), "19eq.c", 1329, "struct sOrEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_164),quote_163,info))));
                                                    _inf_value12->_protocol_obj=_inf_obj_value12;
                                                    _inf_value12->finalize=(void*)sOrEqualNode_finalize;
                                                    _inf_value12->clone=(void*)sOrEqualNode_clone;
                                                    _inf_value12->compile=(void*)sOrEqualNode_compile;
                                                    _inf_value12->sline=(void*)sOrEqualNode_sline;
                                                    _inf_value12->sname=(void*)sOrEqualNode_sname;
                                                    _inf_value12->terminated=(void*)sOrEqualNode_terminated;
                                                    _inf_value12->kind=(void*)sOrEqualNode_kind;
                                                    __result166__ = __result_obj__ = ((struct sNode*)(right_value267=_inf_value12));
                                                    if(right_node_164) { right_node_164 = come_decrement_ref_count2(right_node_164, ((struct sNode*)right_node_164)->finalize, ((struct sNode*)right_node_164)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                    come_call_finalizer2(sOrEqualNode_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer2(sOrEqualNode_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    if(right_value267) { right_value267 = come_decrement_ref_count2(right_value267, ((struct sNode*)right_value267)->finalize, ((struct sNode*)right_value267)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    return __result166__;
                                                    if(right_node_164) { right_node_164 = come_decrement_ref_count2(right_node_164, ((struct sNode*)right_node_164)->finalize, ((struct sNode*)right_node_164)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                else {
                                                    if(_if_conditional311=(*info->p==92&&*(info->p+1)==61&&*(info->p+2)!=61)||(*info->p==61&&*(info->p+1)!=61),                                                    _if_conditional311) {
                                                        if(_if_conditional312=*info->p==92,                                                        _if_conditional312) {
                                                            info->p+=2;
                                                            skip_spaces_and_lf(info);
                                                            quote_166=(_Bool)1;
                                                        }
                                                        else {
                                                            info->p++;
                                                            skip_spaces_and_lf(info);
                                                            quote_166=(_Bool)0;
                                                        }
                                                        right_node_167=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value268=expression_v13(info))));
                                                        if(right_value268) { right_value268 = come_decrement_ref_count2(right_value268, ((struct sNode*)right_value268)->finalize, ((struct sNode*)right_value268)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1346, "struct sNode");
                                                        _inf_obj_value13=come_increment_ref_count(((struct sExpEqualNode*)(right_value270=sExpEqualNode_initialize((struct sExpEqualNode*)come_increment_ref_count(((struct sExpEqualNode*)(right_value269=(struct sExpEqualNode*)come_calloc(1, sizeof(struct sExpEqualNode)*(1), "19eq.c", 1346, "struct sExpEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_167),quote_166,info))));
                                                        _inf_value13->_protocol_obj=_inf_obj_value13;
                                                        _inf_value13->finalize=(void*)sExpEqualNode_finalize;
                                                        _inf_value13->clone=(void*)sExpEqualNode_clone;
                                                        _inf_value13->compile=(void*)sExpEqualNode_compile;
                                                        _inf_value13->sline=(void*)sExpEqualNode_sline;
                                                        _inf_value13->sname=(void*)sExpEqualNode_sname;
                                                        _inf_value13->terminated=(void*)sExpEqualNode_terminated;
                                                        _inf_value13->kind=(void*)sExpEqualNode_kind;
                                                        __result169__ = __result_obj__ = ((struct sNode*)(right_value275=_inf_value13));
                                                        if(right_node_167) { right_node_167 = come_decrement_ref_count2(right_node_167, ((struct sNode*)right_node_167)->finalize, ((struct sNode*)right_node_167)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                        come_call_finalizer2(sExpEqualNode_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer2(sExpEqualNode_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        if(right_value275) { right_value275 = come_decrement_ref_count2(right_value275, ((struct sNode*)right_value275)->finalize, ((struct sNode*)right_value275)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        return __result169__;
                                                        if(right_node_167) { right_node_167 = come_decrement_ref_count2(right_node_167, ((struct sNode*)right_node_167)->finalize, ((struct sNode*)right_node_167)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
    __result170__ = __result_obj__ = (struct sNode*)((void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result170__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sPlusPlusNode_finalize(struct sPlusPlusNode* self){
void* __result_obj__;
_Bool _if_conditional185;
_Bool _if_conditional186;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional185=self!=((void*)0)&&self->mLeft!=((void*)0),            _if_conditional185) {
                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional186=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional186) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sPlusPlusNode* sPlusPlusNode_clone(struct sPlusPlusNode* self){
void* __result_obj__;
_Bool _if_conditional187;
struct sPlusPlusNode* __result131__;
void* right_value178;
struct sPlusPlusNode* result_133;
_Bool _if_conditional188;
void* right_value179;
struct sNode* __dec_obj94;
_Bool _if_conditional189;
_Bool _if_conditional190;
void* right_value180;
char* __dec_obj95;
_Bool _if_conditional191;
struct sPlusPlusNode* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
right_value178 = (void*)0;
memset(&result_133, 0, sizeof(struct sPlusPlusNode*));
right_value179 = (void*)0;
right_value180 = (void*)0;
            if(_if_conditional187=self==(void*)0,            _if_conditional187) {
                __result131__ = __result_obj__ = (void*)0;
                return __result131__;
            }
            result_133=(struct sPlusPlusNode*)come_increment_ref_count(((struct sPlusPlusNode*)(right_value178=(struct sPlusPlusNode*)come_calloc(1, sizeof(struct sPlusPlusNode)*(1), "sPlusPlusNode_clone", 3, "struct sPlusPlusNode"))));
            come_call_finalizer2(sPlusPlusNode_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional188=self!=((void*)0)&&self->mLeft!=((void*)0),            _if_conditional188) {
                __dec_obj94=result_133->mLeft;
                result_133->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value179=sNode_clone(self->mLeft))));
                if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count2(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value179) { right_value179 = come_decrement_ref_count2(right_value179, ((struct sNode*)right_value179)->finalize, ((struct sNode*)right_value179)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional189=self!=((void*)0),            _if_conditional189) {
                result_133->sline=self->sline;
            }
            if(_if_conditional190=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional190) {
                __dec_obj95=result_133->sname;
                result_133->sname=(char*)come_increment_ref_count(((char*)(right_value180=string_clone(self->sname))));
                __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional191=self!=((void*)0),            _if_conditional191) {
                result_133->mQuote=self->mQuote;
            }
            __result132__ = __result_obj__ = result_133;
            come_call_finalizer2(sPlusPlusNode_finalize,result_133, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result132__;
            come_call_finalizer2(sPlusPlusNode_finalize,result_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sMinusMinusNode_finalize(struct sMinusMinusNode* self){
void* __result_obj__;
_Bool _if_conditional194;
_Bool _if_conditional195;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional194=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional194) {
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional195=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional195) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sMinusMinusNode* sMinusMinusNode_clone(struct sMinusMinusNode* self){
void* __result_obj__;
_Bool _if_conditional196;
struct sMinusMinusNode* __result134__;
void* right_value184;
struct sMinusMinusNode* result_135;
_Bool _if_conditional197;
void* right_value185;
struct sNode* __dec_obj96;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
void* right_value186;
char* __dec_obj97;
struct sMinusMinusNode* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
right_value184 = (void*)0;
memset(&result_135, 0, sizeof(struct sMinusMinusNode*));
right_value185 = (void*)0;
right_value186 = (void*)0;
                if(_if_conditional196=self==(void*)0,                _if_conditional196) {
                    __result134__ = __result_obj__ = (void*)0;
                    return __result134__;
                }
                result_135=(struct sMinusMinusNode*)come_increment_ref_count(((struct sMinusMinusNode*)(right_value184=(struct sMinusMinusNode*)come_calloc(1, sizeof(struct sMinusMinusNode)*(1), "sMinusMinusNode_clone", 3, "struct sMinusMinusNode"))));
                come_call_finalizer2(sMinusMinusNode_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional197=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional197) {
                    __dec_obj96=result_135->mLeft;
                    result_135->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value185=sNode_clone(self->mLeft))));
                    if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count2(__dec_obj96, ((struct sNode*)__dec_obj96)->finalize, ((struct sNode*)__dec_obj96)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value185) { right_value185 = come_decrement_ref_count2(right_value185, ((struct sNode*)right_value185)->finalize, ((struct sNode*)right_value185)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional198=self!=((void*)0),                _if_conditional198) {
                    result_135->mQuote=self->mQuote;
                }
                if(_if_conditional199=self!=((void*)0),                _if_conditional199) {
                    result_135->sline=self->sline;
                }
                if(_if_conditional200=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional200) {
                    __dec_obj97=result_135->sname;
                    result_135->sname=(char*)come_increment_ref_count(((char*)(right_value186=string_clone(self->sname))));
                    __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result135__ = __result_obj__ = result_135;
                come_call_finalizer2(sMinusMinusNode_finalize,result_135, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result135__;
                come_call_finalizer2(sMinusMinusNode_finalize,result_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sPlusEqualNode_finalize(struct sPlusEqualNode* self){
void* __result_obj__;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool _if_conditional205;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional203=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional203) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional204=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional204) {
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional205=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional205) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sPlusEqualNode* sPlusEqualNode_clone(struct sPlusEqualNode* self){
void* __result_obj__;
_Bool _if_conditional206;
struct sPlusEqualNode* __result137__;
void* right_value191;
struct sPlusEqualNode* result_138;
_Bool _if_conditional207;
void* right_value192;
struct sNode* __dec_obj98;
_Bool _if_conditional208;
void* right_value193;
struct sNode* __dec_obj99;
_Bool _if_conditional209;
_Bool _if_conditional210;
_Bool _if_conditional211;
void* right_value194;
char* __dec_obj100;
struct sPlusEqualNode* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
right_value191 = (void*)0;
memset(&result_138, 0, sizeof(struct sPlusEqualNode*));
right_value192 = (void*)0;
right_value193 = (void*)0;
right_value194 = (void*)0;
                    if(_if_conditional206=self==(void*)0,                    _if_conditional206) {
                        __result137__ = __result_obj__ = (void*)0;
                        return __result137__;
                    }
                    result_138=(struct sPlusEqualNode*)come_increment_ref_count(((struct sPlusEqualNode*)(right_value191=(struct sPlusEqualNode*)come_calloc(1, sizeof(struct sPlusEqualNode)*(1), "sPlusEqualNode_clone", 3, "struct sPlusEqualNode"))));
                    come_call_finalizer2(sPlusEqualNode_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional207=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional207) {
                        __dec_obj98=result_138->mLeft;
                        result_138->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value192=sNode_clone(self->mLeft))));
                        if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count2(__dec_obj98, ((struct sNode*)__dec_obj98)->finalize, ((struct sNode*)__dec_obj98)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value192) { right_value192 = come_decrement_ref_count2(right_value192, ((struct sNode*)right_value192)->finalize, ((struct sNode*)right_value192)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional208=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional208) {
                        __dec_obj99=result_138->mRight;
                        result_138->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value193=sNode_clone(self->mRight))));
                        if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count2(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value193) { right_value193 = come_decrement_ref_count2(right_value193, ((struct sNode*)right_value193)->finalize, ((struct sNode*)right_value193)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional209=self!=((void*)0),                    _if_conditional209) {
                        result_138->mQuote=self->mQuote;
                    }
                    if(_if_conditional210=self!=((void*)0),                    _if_conditional210) {
                        result_138->sline=self->sline;
                    }
                    if(_if_conditional211=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional211) {
                        __dec_obj100=result_138->sname;
                        result_138->sname=(char*)come_increment_ref_count(((char*)(right_value194=string_clone(self->sname))));
                        __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    __result138__ = __result_obj__ = result_138;
                    come_call_finalizer2(sPlusEqualNode_finalize,result_138, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result138__;
                    come_call_finalizer2(sPlusEqualNode_finalize,result_138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sMinusEqualNode_finalize(struct sMinusEqualNode* self){
void* __result_obj__;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional214=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional214) {
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional215=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional215) {
                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional216=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional216) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sMinusEqualNode* sMinusEqualNode_clone(struct sMinusEqualNode* self){
void* __result_obj__;
_Bool _if_conditional217;
struct sMinusEqualNode* __result140__;
void* right_value199;
struct sMinusEqualNode* result_141;
_Bool _if_conditional218;
void* right_value200;
struct sNode* __dec_obj101;
_Bool _if_conditional219;
void* right_value201;
struct sNode* __dec_obj102;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
void* right_value202;
char* __dec_obj103;
struct sMinusEqualNode* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value199 = (void*)0;
memset(&result_141, 0, sizeof(struct sMinusEqualNode*));
right_value200 = (void*)0;
right_value201 = (void*)0;
right_value202 = (void*)0;
                        if(_if_conditional217=self==(void*)0,                        _if_conditional217) {
                            __result140__ = __result_obj__ = (void*)0;
                            return __result140__;
                        }
                        result_141=(struct sMinusEqualNode*)come_increment_ref_count(((struct sMinusEqualNode*)(right_value199=(struct sMinusEqualNode*)come_calloc(1, sizeof(struct sMinusEqualNode)*(1), "sMinusEqualNode_clone", 3, "struct sMinusEqualNode"))));
                        come_call_finalizer2(sMinusEqualNode_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional218=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional218) {
                            __dec_obj101=result_141->mLeft;
                            result_141->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value200=sNode_clone(self->mLeft))));
                            if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count2(__dec_obj101, ((struct sNode*)__dec_obj101)->finalize, ((struct sNode*)__dec_obj101)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value200) { right_value200 = come_decrement_ref_count2(right_value200, ((struct sNode*)right_value200)->finalize, ((struct sNode*)right_value200)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional219=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional219) {
                            __dec_obj102=result_141->mRight;
                            result_141->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value201=sNode_clone(self->mRight))));
                            if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count2(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value201) { right_value201 = come_decrement_ref_count2(right_value201, ((struct sNode*)right_value201)->finalize, ((struct sNode*)right_value201)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional220=self!=((void*)0),                        _if_conditional220) {
                            result_141->mQuote=self->mQuote;
                        }
                        if(_if_conditional221=self!=((void*)0),                        _if_conditional221) {
                            result_141->sline=self->sline;
                        }
                        if(_if_conditional222=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional222) {
                            __dec_obj103=result_141->sname;
                            result_141->sname=(char*)come_increment_ref_count(((char*)(right_value202=string_clone(self->sname))));
                            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        __result141__ = __result_obj__ = result_141;
                        come_call_finalizer2(sMinusEqualNode_finalize,result_141, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result141__;
                        come_call_finalizer2(sMinusEqualNode_finalize,result_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sMultEqualNode_finalize(struct sMultEqualNode* self){
void* __result_obj__;
_Bool _if_conditional225;
_Bool _if_conditional226;
_Bool _if_conditional227;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional225=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional225) {
                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(_if_conditional226=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional226) {
                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(_if_conditional227=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional227) {
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sMultEqualNode* sMultEqualNode_clone(struct sMultEqualNode* self){
void* __result_obj__;
_Bool _if_conditional228;
struct sMultEqualNode* __result143__;
void* right_value207;
struct sMultEqualNode* result_144;
_Bool _if_conditional229;
void* right_value208;
struct sNode* __dec_obj104;
_Bool _if_conditional230;
void* right_value209;
struct sNode* __dec_obj105;
_Bool _if_conditional231;
_Bool _if_conditional232;
_Bool _if_conditional233;
void* right_value210;
char* __dec_obj106;
struct sMultEqualNode* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
right_value207 = (void*)0;
memset(&result_144, 0, sizeof(struct sMultEqualNode*));
right_value208 = (void*)0;
right_value209 = (void*)0;
right_value210 = (void*)0;
                            if(_if_conditional228=self==(void*)0,                            _if_conditional228) {
                                __result143__ = __result_obj__ = (void*)0;
                                return __result143__;
                            }
                            result_144=(struct sMultEqualNode*)come_increment_ref_count(((struct sMultEqualNode*)(right_value207=(struct sMultEqualNode*)come_calloc(1, sizeof(struct sMultEqualNode)*(1), "sMultEqualNode_clone", 3, "struct sMultEqualNode"))));
                            come_call_finalizer2(sMultEqualNode_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional229=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional229) {
                                __dec_obj104=result_144->mLeft;
                                result_144->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value208=sNode_clone(self->mLeft))));
                                if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count2(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value208) { right_value208 = come_decrement_ref_count2(right_value208, ((struct sNode*)right_value208)->finalize, ((struct sNode*)right_value208)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(_if_conditional230=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional230) {
                                __dec_obj105=result_144->mRight;
                                result_144->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value209=sNode_clone(self->mRight))));
                                if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count2(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value209) { right_value209 = come_decrement_ref_count2(right_value209, ((struct sNode*)right_value209)->finalize, ((struct sNode*)right_value209)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(_if_conditional231=self!=((void*)0),                            _if_conditional231) {
                                result_144->mQuote=self->mQuote;
                            }
                            if(_if_conditional232=self!=((void*)0),                            _if_conditional232) {
                                result_144->sline=self->sline;
                            }
                            if(_if_conditional233=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional233) {
                                __dec_obj106=result_144->sname;
                                result_144->sname=(char*)come_increment_ref_count(((char*)(right_value210=string_clone(self->sname))));
                                __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            __result144__ = __result_obj__ = result_144;
                            come_call_finalizer2(sMultEqualNode_finalize,result_144, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result144__;
                            come_call_finalizer2(sMultEqualNode_finalize,result_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sDivEqualNode_finalize(struct sDivEqualNode* self){
void* __result_obj__;
_Bool _if_conditional236;
_Bool _if_conditional237;
_Bool _if_conditional238;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional236=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional236) {
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional237=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional237) {
                                    if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional238=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional238) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sDivEqualNode* sDivEqualNode_clone(struct sDivEqualNode* self){
void* __result_obj__;
_Bool _if_conditional239;
struct sDivEqualNode* __result146__;
void* right_value215;
struct sDivEqualNode* result_147;
_Bool _if_conditional240;
void* right_value216;
struct sNode* __dec_obj107;
_Bool _if_conditional241;
void* right_value217;
struct sNode* __dec_obj108;
_Bool _if_conditional242;
_Bool _if_conditional243;
_Bool _if_conditional244;
void* right_value218;
char* __dec_obj109;
struct sDivEqualNode* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
right_value215 = (void*)0;
memset(&result_147, 0, sizeof(struct sDivEqualNode*));
right_value216 = (void*)0;
right_value217 = (void*)0;
right_value218 = (void*)0;
                                if(_if_conditional239=self==(void*)0,                                _if_conditional239) {
                                    __result146__ = __result_obj__ = (void*)0;
                                    return __result146__;
                                }
                                result_147=(struct sDivEqualNode*)come_increment_ref_count(((struct sDivEqualNode*)(right_value215=(struct sDivEqualNode*)come_calloc(1, sizeof(struct sDivEqualNode)*(1), "sDivEqualNode_clone", 3, "struct sDivEqualNode"))));
                                come_call_finalizer2(sDivEqualNode_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional240=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional240) {
                                    __dec_obj107=result_147->mLeft;
                                    result_147->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value216=sNode_clone(self->mLeft))));
                                    if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count2(__dec_obj107, ((struct sNode*)__dec_obj107)->finalize, ((struct sNode*)__dec_obj107)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value216) { right_value216 = come_decrement_ref_count2(right_value216, ((struct sNode*)right_value216)->finalize, ((struct sNode*)right_value216)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional241=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional241) {
                                    __dec_obj108=result_147->mRight;
                                    result_147->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value217=sNode_clone(self->mRight))));
                                    if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count2(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value217) { right_value217 = come_decrement_ref_count2(right_value217, ((struct sNode*)right_value217)->finalize, ((struct sNode*)right_value217)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional242=self!=((void*)0),                                _if_conditional242) {
                                    result_147->mQuote=self->mQuote;
                                }
                                if(_if_conditional243=self!=((void*)0),                                _if_conditional243) {
                                    result_147->sline=self->sline;
                                }
                                if(_if_conditional244=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional244) {
                                    __dec_obj109=result_147->sname;
                                    result_147->sname=(char*)come_increment_ref_count(((char*)(right_value218=string_clone(self->sname))));
                                    __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                __result147__ = __result_obj__ = result_147;
                                come_call_finalizer2(sDivEqualNode_finalize,result_147, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result147__;
                                come_call_finalizer2(sDivEqualNode_finalize,result_147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sModEqualNode_finalize(struct sModEqualNode* self){
void* __result_obj__;
_Bool _if_conditional247;
_Bool _if_conditional248;
_Bool _if_conditional249;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional247=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional247) {
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional248=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional248) {
                                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional249=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional249) {
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sModEqualNode* sModEqualNode_clone(struct sModEqualNode* self){
void* __result_obj__;
_Bool _if_conditional250;
struct sModEqualNode* __result149__;
void* right_value223;
struct sModEqualNode* result_150;
_Bool _if_conditional251;
void* right_value224;
struct sNode* __dec_obj110;
_Bool _if_conditional252;
void* right_value225;
struct sNode* __dec_obj111;
_Bool _if_conditional253;
_Bool _if_conditional254;
_Bool _if_conditional255;
void* right_value226;
char* __dec_obj112;
struct sModEqualNode* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
right_value223 = (void*)0;
memset(&result_150, 0, sizeof(struct sModEqualNode*));
right_value224 = (void*)0;
right_value225 = (void*)0;
right_value226 = (void*)0;
                                    if(_if_conditional250=self==(void*)0,                                    _if_conditional250) {
                                        __result149__ = __result_obj__ = (void*)0;
                                        return __result149__;
                                    }
                                    result_150=(struct sModEqualNode*)come_increment_ref_count(((struct sModEqualNode*)(right_value223=(struct sModEqualNode*)come_calloc(1, sizeof(struct sModEqualNode)*(1), "sModEqualNode_clone", 3, "struct sModEqualNode"))));
                                    come_call_finalizer2(sModEqualNode_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional251=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional251) {
                                        __dec_obj110=result_150->mLeft;
                                        result_150->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value224=sNode_clone(self->mLeft))));
                                        if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count2(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value224) { right_value224 = come_decrement_ref_count2(right_value224, ((struct sNode*)right_value224)->finalize, ((struct sNode*)right_value224)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional252=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional252) {
                                        __dec_obj111=result_150->mRight;
                                        result_150->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value225=sNode_clone(self->mRight))));
                                        if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count2(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value225) { right_value225 = come_decrement_ref_count2(right_value225, ((struct sNode*)right_value225)->finalize, ((struct sNode*)right_value225)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional253=self!=((void*)0),                                    _if_conditional253) {
                                        result_150->mQuote=self->mQuote;
                                    }
                                    if(_if_conditional254=self!=((void*)0),                                    _if_conditional254) {
                                        result_150->sline=self->sline;
                                    }
                                    if(_if_conditional255=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional255) {
                                        __dec_obj112=result_150->sname;
                                        result_150->sname=(char*)come_increment_ref_count(((char*)(right_value226=string_clone(self->sname))));
                                        __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    __result150__ = __result_obj__ = result_150;
                                    come_call_finalizer2(sModEqualNode_finalize,result_150, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result150__;
                                    come_call_finalizer2(sModEqualNode_finalize,result_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sLShifEqualNode_finalize(struct sLShifEqualNode* self){
void* __result_obj__;
_Bool _if_conditional258;
_Bool _if_conditional259;
_Bool _if_conditional260;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional258=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional258) {
                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional259=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional259) {
                                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional260=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional260) {
                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
}

static struct sLShifEqualNode* sLShifEqualNode_clone(struct sLShifEqualNode* self){
void* __result_obj__;
_Bool _if_conditional261;
struct sLShifEqualNode* __result152__;
void* right_value231;
struct sLShifEqualNode* result_153;
_Bool _if_conditional262;
void* right_value232;
struct sNode* __dec_obj113;
_Bool _if_conditional263;
void* right_value233;
struct sNode* __dec_obj114;
_Bool _if_conditional264;
_Bool _if_conditional265;
_Bool _if_conditional266;
void* right_value234;
char* __dec_obj115;
struct sLShifEqualNode* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
right_value231 = (void*)0;
memset(&result_153, 0, sizeof(struct sLShifEqualNode*));
right_value232 = (void*)0;
right_value233 = (void*)0;
right_value234 = (void*)0;
                                        if(_if_conditional261=self==(void*)0,                                        _if_conditional261) {
                                            __result152__ = __result_obj__ = (void*)0;
                                            return __result152__;
                                        }
                                        result_153=(struct sLShifEqualNode*)come_increment_ref_count(((struct sLShifEqualNode*)(right_value231=(struct sLShifEqualNode*)come_calloc(1, sizeof(struct sLShifEqualNode)*(1), "sLShifEqualNode_clone", 3, "struct sLShifEqualNode"))));
                                        come_call_finalizer2(sLShifEqualNode_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional262=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional262) {
                                            __dec_obj113=result_153->mLeft;
                                            result_153->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value232=sNode_clone(self->mLeft))));
                                            if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count2(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value232) { right_value232 = come_decrement_ref_count2(right_value232, ((struct sNode*)right_value232)->finalize, ((struct sNode*)right_value232)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(_if_conditional263=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional263) {
                                            __dec_obj114=result_153->mRight;
                                            result_153->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value233=sNode_clone(self->mRight))));
                                            if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count2(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value233) { right_value233 = come_decrement_ref_count2(right_value233, ((struct sNode*)right_value233)->finalize, ((struct sNode*)right_value233)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(_if_conditional264=self!=((void*)0),                                        _if_conditional264) {
                                            result_153->mQuote=self->mQuote;
                                        }
                                        if(_if_conditional265=self!=((void*)0),                                        _if_conditional265) {
                                            result_153->sline=self->sline;
                                        }
                                        if(_if_conditional266=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional266) {
                                            __dec_obj115=result_153->sname;
                                            result_153->sname=(char*)come_increment_ref_count(((char*)(right_value234=string_clone(self->sname))));
                                            __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        __result153__ = __result_obj__ = result_153;
                                        come_call_finalizer2(sLShifEqualNode_finalize,result_153, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result153__;
                                        come_call_finalizer2(sLShifEqualNode_finalize,result_153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sRShiftEqualNode_finalize(struct sRShiftEqualNode* self){
void* __result_obj__;
_Bool _if_conditional269;
_Bool _if_conditional270;
_Bool _if_conditional271;
memset(&__result_obj__, 0, sizeof(void*));
                                            if(_if_conditional269=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional269) {
                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            if(_if_conditional270=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional270) {
                                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            if(_if_conditional271=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional271) {
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
}

static struct sRShiftEqualNode* sRShiftEqualNode_clone(struct sRShiftEqualNode* self){
void* __result_obj__;
_Bool _if_conditional272;
struct sRShiftEqualNode* __result155__;
void* right_value239;
struct sRShiftEqualNode* result_156;
_Bool _if_conditional273;
void* right_value240;
struct sNode* __dec_obj116;
_Bool _if_conditional274;
void* right_value241;
struct sNode* __dec_obj117;
_Bool _if_conditional275;
_Bool _if_conditional276;
_Bool _if_conditional277;
void* right_value242;
char* __dec_obj118;
struct sRShiftEqualNode* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
right_value239 = (void*)0;
memset(&result_156, 0, sizeof(struct sRShiftEqualNode*));
right_value240 = (void*)0;
right_value241 = (void*)0;
right_value242 = (void*)0;
                                            if(_if_conditional272=self==(void*)0,                                            _if_conditional272) {
                                                __result155__ = __result_obj__ = (void*)0;
                                                return __result155__;
                                            }
                                            result_156=(struct sRShiftEqualNode*)come_increment_ref_count(((struct sRShiftEqualNode*)(right_value239=(struct sRShiftEqualNode*)come_calloc(1, sizeof(struct sRShiftEqualNode)*(1), "sRShiftEqualNode_clone", 3, "struct sRShiftEqualNode"))));
                                            come_call_finalizer2(sRShiftEqualNode_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            if(_if_conditional273=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional273) {
                                                __dec_obj116=result_156->mLeft;
                                                result_156->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value240=sNode_clone(self->mLeft))));
                                                if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count2(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value240) { right_value240 = come_decrement_ref_count2(right_value240, ((struct sNode*)right_value240)->finalize, ((struct sNode*)right_value240)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            if(_if_conditional274=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional274) {
                                                __dec_obj117=result_156->mRight;
                                                result_156->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value241=sNode_clone(self->mRight))));
                                                if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count2(__dec_obj117, ((struct sNode*)__dec_obj117)->finalize, ((struct sNode*)__dec_obj117)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value241) { right_value241 = come_decrement_ref_count2(right_value241, ((struct sNode*)right_value241)->finalize, ((struct sNode*)right_value241)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            if(_if_conditional275=self!=((void*)0),                                            _if_conditional275) {
                                                result_156->mQuote=self->mQuote;
                                            }
                                            if(_if_conditional276=self!=((void*)0),                                            _if_conditional276) {
                                                result_156->sline=self->sline;
                                            }
                                            if(_if_conditional277=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional277) {
                                                __dec_obj118=result_156->sname;
                                                result_156->sname=(char*)come_increment_ref_count(((char*)(right_value242=string_clone(self->sname))));
                                                __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            __result156__ = __result_obj__ = result_156;
                                            come_call_finalizer2(sRShiftEqualNode_finalize,result_156, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result156__;
                                            come_call_finalizer2(sRShiftEqualNode_finalize,result_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sXorEqualNode_finalize(struct sXorEqualNode* self){
void* __result_obj__;
_Bool _if_conditional280;
_Bool _if_conditional281;
_Bool _if_conditional282;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional280=self!=((void*)0)&&self->mLeft!=((void*)0),                                                _if_conditional280) {
                                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                if(_if_conditional281=self!=((void*)0)&&self->mRight!=((void*)0),                                                _if_conditional281) {
                                                    if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                if(_if_conditional282=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional282) {
                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
}

static struct sXorEqualNode* sXorEqualNode_clone(struct sXorEqualNode* self){
void* __result_obj__;
_Bool _if_conditional283;
struct sXorEqualNode* __result158__;
void* right_value247;
struct sXorEqualNode* result_159;
_Bool _if_conditional284;
void* right_value248;
struct sNode* __dec_obj119;
_Bool _if_conditional285;
void* right_value249;
struct sNode* __dec_obj120;
_Bool _if_conditional286;
_Bool _if_conditional287;
_Bool _if_conditional288;
void* right_value250;
char* __dec_obj121;
struct sXorEqualNode* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
right_value247 = (void*)0;
memset(&result_159, 0, sizeof(struct sXorEqualNode*));
right_value248 = (void*)0;
right_value249 = (void*)0;
right_value250 = (void*)0;
                                                if(_if_conditional283=self==(void*)0,                                                _if_conditional283) {
                                                    __result158__ = __result_obj__ = (void*)0;
                                                    return __result158__;
                                                }
                                                result_159=(struct sXorEqualNode*)come_increment_ref_count(((struct sXorEqualNode*)(right_value247=(struct sXorEqualNode*)come_calloc(1, sizeof(struct sXorEqualNode)*(1), "sXorEqualNode_clone", 3, "struct sXorEqualNode"))));
                                                come_call_finalizer2(sXorEqualNode_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                if(_if_conditional284=self!=((void*)0)&&self->mLeft!=((void*)0),                                                _if_conditional284) {
                                                    __dec_obj119=result_159->mLeft;
                                                    result_159->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value248=sNode_clone(self->mLeft))));
                                                    if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count2(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0,0, (void*)0); }
                                                    if(right_value248) { right_value248 = come_decrement_ref_count2(right_value248, ((struct sNode*)right_value248)->finalize, ((struct sNode*)right_value248)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                }
                                                if(_if_conditional285=self!=((void*)0)&&self->mRight!=((void*)0),                                                _if_conditional285) {
                                                    __dec_obj120=result_159->mRight;
                                                    result_159->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value249=sNode_clone(self->mRight))));
                                                    if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count2(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0,0, (void*)0); }
                                                    if(right_value249) { right_value249 = come_decrement_ref_count2(right_value249, ((struct sNode*)right_value249)->finalize, ((struct sNode*)right_value249)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                }
                                                if(_if_conditional286=self!=((void*)0),                                                _if_conditional286) {
                                                    result_159->mQuote=self->mQuote;
                                                }
                                                if(_if_conditional287=self!=((void*)0),                                                _if_conditional287) {
                                                    result_159->sline=self->sline;
                                                }
                                                if(_if_conditional288=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional288) {
                                                    __dec_obj121=result_159->sname;
                                                    result_159->sname=(char*)come_increment_ref_count(((char*)(right_value250=string_clone(self->sname))));
                                                    __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value250 = come_decrement_ref_count2(right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                __result159__ = __result_obj__ = result_159;
                                                come_call_finalizer2(sXorEqualNode_finalize,result_159, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result159__;
                                                come_call_finalizer2(sXorEqualNode_finalize,result_159, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sAndEqualNode_finalize(struct sAndEqualNode* self){
void* __result_obj__;
_Bool _if_conditional291;
_Bool _if_conditional292;
_Bool _if_conditional293;
memset(&__result_obj__, 0, sizeof(void*));
                                                    if(_if_conditional291=self!=((void*)0)&&self->mLeft!=((void*)0),                                                    _if_conditional291) {
                                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    if(_if_conditional292=self!=((void*)0)&&self->mRight!=((void*)0),                                                    _if_conditional292) {
                                                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    if(_if_conditional293=self!=((void*)0)&&self->sname!=((void*)0),                                                    _if_conditional293) {
                                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
}

static struct sAndEqualNode* sAndEqualNode_clone(struct sAndEqualNode* self){
void* __result_obj__;
_Bool _if_conditional294;
struct sAndEqualNode* __result161__;
void* right_value255;
struct sAndEqualNode* result_162;
_Bool _if_conditional295;
void* right_value256;
struct sNode* __dec_obj122;
_Bool _if_conditional296;
void* right_value257;
struct sNode* __dec_obj123;
_Bool _if_conditional297;
_Bool _if_conditional298;
_Bool _if_conditional299;
void* right_value258;
char* __dec_obj124;
struct sAndEqualNode* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
right_value255 = (void*)0;
memset(&result_162, 0, sizeof(struct sAndEqualNode*));
right_value256 = (void*)0;
right_value257 = (void*)0;
right_value258 = (void*)0;
                                                    if(_if_conditional294=self==(void*)0,                                                    _if_conditional294) {
                                                        __result161__ = __result_obj__ = (void*)0;
                                                        return __result161__;
                                                    }
                                                    result_162=(struct sAndEqualNode*)come_increment_ref_count(((struct sAndEqualNode*)(right_value255=(struct sAndEqualNode*)come_calloc(1, sizeof(struct sAndEqualNode)*(1), "sAndEqualNode_clone", 3, "struct sAndEqualNode"))));
                                                    come_call_finalizer2(sAndEqualNode_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    if(_if_conditional295=self!=((void*)0)&&self->mLeft!=((void*)0),                                                    _if_conditional295) {
                                                        __dec_obj122=result_162->mLeft;
                                                        result_162->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value256=sNode_clone(self->mLeft))));
                                                        if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count2(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0,0,0, (void*)0); }
                                                        if(right_value256) { right_value256 = come_decrement_ref_count2(right_value256, ((struct sNode*)right_value256)->finalize, ((struct sNode*)right_value256)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    }
                                                    if(_if_conditional296=self!=((void*)0)&&self->mRight!=((void*)0),                                                    _if_conditional296) {
                                                        __dec_obj123=result_162->mRight;
                                                        result_162->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value257=sNode_clone(self->mRight))));
                                                        if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count2(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0,0, (void*)0); }
                                                        if(right_value257) { right_value257 = come_decrement_ref_count2(right_value257, ((struct sNode*)right_value257)->finalize, ((struct sNode*)right_value257)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    }
                                                    if(_if_conditional297=self!=((void*)0),                                                    _if_conditional297) {
                                                        result_162->mQuote=self->mQuote;
                                                    }
                                                    if(_if_conditional298=self!=((void*)0),                                                    _if_conditional298) {
                                                        result_162->sline=self->sline;
                                                    }
                                                    if(_if_conditional299=self!=((void*)0)&&self->sname!=((void*)0),                                                    _if_conditional299) {
                                                        __dec_obj124=result_162->sname;
                                                        result_162->sname=(char*)come_increment_ref_count(((char*)(right_value258=string_clone(self->sname))));
                                                        __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    }
                                                    __result162__ = __result_obj__ = result_162;
                                                    come_call_finalizer2(sAndEqualNode_finalize,result_162, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                    return __result162__;
                                                    come_call_finalizer2(sAndEqualNode_finalize,result_162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sOrEqualNode_finalize(struct sOrEqualNode* self){
void* __result_obj__;
_Bool _if_conditional302;
_Bool _if_conditional303;
_Bool _if_conditional304;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional302=self!=((void*)0)&&self->mLeft!=((void*)0),                                                        _if_conditional302) {
                                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
                                                        if(_if_conditional303=self!=((void*)0)&&self->mRight!=((void*)0),                                                        _if_conditional303) {
                                                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
                                                        if(_if_conditional304=self!=((void*)0)&&self->sname!=((void*)0),                                                        _if_conditional304) {
                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
}

static struct sOrEqualNode* sOrEqualNode_clone(struct sOrEqualNode* self){
void* __result_obj__;
_Bool _if_conditional305;
struct sOrEqualNode* __result164__;
void* right_value263;
struct sOrEqualNode* result_165;
_Bool _if_conditional306;
void* right_value264;
struct sNode* __dec_obj125;
_Bool _if_conditional307;
void* right_value265;
struct sNode* __dec_obj126;
_Bool _if_conditional308;
_Bool _if_conditional309;
_Bool _if_conditional310;
void* right_value266;
char* __dec_obj127;
struct sOrEqualNode* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
right_value263 = (void*)0;
memset(&result_165, 0, sizeof(struct sOrEqualNode*));
right_value264 = (void*)0;
right_value265 = (void*)0;
right_value266 = (void*)0;
                                                        if(_if_conditional305=self==(void*)0,                                                        _if_conditional305) {
                                                            __result164__ = __result_obj__ = (void*)0;
                                                            return __result164__;
                                                        }
                                                        result_165=(struct sOrEqualNode*)come_increment_ref_count(((struct sOrEqualNode*)(right_value263=(struct sOrEqualNode*)come_calloc(1, sizeof(struct sOrEqualNode)*(1), "sOrEqualNode_clone", 3, "struct sOrEqualNode"))));
                                                        come_call_finalizer2(sOrEqualNode_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        if(_if_conditional306=self!=((void*)0)&&self->mLeft!=((void*)0),                                                        _if_conditional306) {
                                                            __dec_obj125=result_165->mLeft;
                                                            result_165->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value264=sNode_clone(self->mLeft))));
                                                            if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count2(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0,0,0, (void*)0); }
                                                            if(right_value264) { right_value264 = come_decrement_ref_count2(right_value264, ((struct sNode*)right_value264)->finalize, ((struct sNode*)right_value264)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        }
                                                        if(_if_conditional307=self!=((void*)0)&&self->mRight!=((void*)0),                                                        _if_conditional307) {
                                                            __dec_obj126=result_165->mRight;
                                                            result_165->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value265=sNode_clone(self->mRight))));
                                                            if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count2(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0,0,0, (void*)0); }
                                                            if(right_value265) { right_value265 = come_decrement_ref_count2(right_value265, ((struct sNode*)right_value265)->finalize, ((struct sNode*)right_value265)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        }
                                                        if(_if_conditional308=self!=((void*)0),                                                        _if_conditional308) {
                                                            result_165->mQuote=self->mQuote;
                                                        }
                                                        if(_if_conditional309=self!=((void*)0),                                                        _if_conditional309) {
                                                            result_165->sline=self->sline;
                                                        }
                                                        if(_if_conditional310=self!=((void*)0)&&self->sname!=((void*)0),                                                        _if_conditional310) {
                                                            __dec_obj127=result_165->sname;
                                                            result_165->sname=(char*)come_increment_ref_count(((char*)(right_value266=string_clone(self->sname))));
                                                            __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        }
                                                        __result165__ = __result_obj__ = result_165;
                                                        come_call_finalizer2(sOrEqualNode_finalize,result_165, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                        return __result165__;
                                                        come_call_finalizer2(sOrEqualNode_finalize,result_165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sExpEqualNode_finalize(struct sExpEqualNode* self){
void* __result_obj__;
_Bool _if_conditional313;
_Bool _if_conditional314;
_Bool _if_conditional315;
memset(&__result_obj__, 0, sizeof(void*));
                                                            if(_if_conditional313=self!=((void*)0)&&self->mLeft!=((void*)0),                                                            _if_conditional313) {
                                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
                                                            if(_if_conditional314=self!=((void*)0)&&self->mRight!=((void*)0),                                                            _if_conditional314) {
                                                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
                                                            if(_if_conditional315=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional315) {
                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            }
}

static struct sExpEqualNode* sExpEqualNode_clone(struct sExpEqualNode* self){
void* __result_obj__;
_Bool _if_conditional316;
struct sExpEqualNode* __result167__;
void* right_value271;
struct sExpEqualNode* result_168;
_Bool _if_conditional317;
void* right_value272;
struct sNode* __dec_obj128;
_Bool _if_conditional318;
void* right_value273;
struct sNode* __dec_obj129;
_Bool _if_conditional319;
_Bool _if_conditional320;
_Bool _if_conditional321;
void* right_value274;
char* __dec_obj130;
struct sExpEqualNode* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
right_value271 = (void*)0;
memset(&result_168, 0, sizeof(struct sExpEqualNode*));
right_value272 = (void*)0;
right_value273 = (void*)0;
right_value274 = (void*)0;
                                                            if(_if_conditional316=self==(void*)0,                                                            _if_conditional316) {
                                                                __result167__ = __result_obj__ = (void*)0;
                                                                return __result167__;
                                                            }
                                                            result_168=(struct sExpEqualNode*)come_increment_ref_count(((struct sExpEqualNode*)(right_value271=(struct sExpEqualNode*)come_calloc(1, sizeof(struct sExpEqualNode)*(1), "sExpEqualNode_clone", 3, "struct sExpEqualNode"))));
                                                            come_call_finalizer2(sExpEqualNode_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            if(_if_conditional317=self!=((void*)0)&&self->mLeft!=((void*)0),                                                            _if_conditional317) {
                                                                __dec_obj128=result_168->mLeft;
                                                                result_168->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value272=sNode_clone(self->mLeft))));
                                                                if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count2(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0,0, (void*)0); }
                                                                if(right_value272) { right_value272 = come_decrement_ref_count2(right_value272, ((struct sNode*)right_value272)->finalize, ((struct sNode*)right_value272)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            }
                                                            if(_if_conditional318=self!=((void*)0)&&self->mRight!=((void*)0),                                                            _if_conditional318) {
                                                                __dec_obj129=result_168->mRight;
                                                                result_168->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value273=sNode_clone(self->mRight))));
                                                                if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count2(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0,0, (void*)0); }
                                                                if(right_value273) { right_value273 = come_decrement_ref_count2(right_value273, ((struct sNode*)right_value273)->finalize, ((struct sNode*)right_value273)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            }
                                                            if(_if_conditional319=self!=((void*)0),                                                            _if_conditional319) {
                                                                result_168->mQuote=self->mQuote;
                                                            }
                                                            if(_if_conditional320=self!=((void*)0),                                                            _if_conditional320) {
                                                                result_168->sline=self->sline;
                                                            }
                                                            if(_if_conditional321=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional321) {
                                                                __dec_obj130=result_168->sname;
                                                                result_168->sname=(char*)come_increment_ref_count(((char*)(right_value274=string_clone(self->sname))));
                                                                __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value274 = come_decrement_ref_count2(right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            }
                                                            __result168__ = __result_obj__ = result_168;
                                                            come_call_finalizer2(sExpEqualNode_finalize,result_168, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                            return __result168__;
                                                            come_call_finalizer2(sExpEqualNode_finalize,result_168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

