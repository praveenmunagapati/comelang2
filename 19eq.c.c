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

struct sPlusPlusNode* sPlusPlusNode_initialize(struct sPlusPlusNode* self, struct sNode* left, _Bool quote, struct sInfo* info);

static struct sNode* sNode_clone(struct sNode* self);
_Bool sPlusPlusNode_terminated();

char* sPlusPlusNode_kind();

_Bool sPlusPlusNode_compile(struct sPlusPlusNode* self, struct sInfo* info);

static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct sType* sType_clone(struct sType* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
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
    # 50 "./comelang2.h"
    perror(msg);
    # 51 "./comelang2.h"
    stackframe();
    # 52 "./comelang2.h"
    exit(4);
    # 54 "./comelang2.h"
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
    # 1943 "./comelang2.h"
    result_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1943, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1944 "./comelang2.h"
    buffer_append(result_0,self,sizeof(char)*len);
    # 1945 "./comelang2.h"
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
    # 1950 "./comelang2.h"
    result_1=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1950, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1951 "./comelang2.h"
    buffer_append(result_1,(char*)self,sizeof(short short)*len);
    # 1952 "./comelang2.h"
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
    # 1957 "./comelang2.h"
    result_2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1957, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1958 "./comelang2.h"
    buffer_append(result_2,(char*)self,sizeof(int)*len);
    # 1959 "./comelang2.h"
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
    # 1964 "./comelang2.h"
    result_3=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1964, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1965 "./comelang2.h"
    buffer_append(result_3,(char*)self,sizeof(long)*len);
    # 1966 "./comelang2.h"
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
    # 1971 "./comelang2.h"
    result_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1971, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1972 "./comelang2.h"
    buffer_append(result_4,(char*)self,sizeof(float)*len);
    # 1973 "./comelang2.h"
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
    # 1978 "./comelang2.h"
    result_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1978, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1979 "./comelang2.h"
    buffer_append(result_5,(char*)self,sizeof(double)*len);
    # 1980 "./comelang2.h"
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
    # 1993 "./comelang2.h"
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1993, "smart_pointer$1char"))));
    come_call_finalizer2(smart_pointer$1charp_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1995 "./comelang2.h"
    __dec_obj1=result_6->memory;
    result_6->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1996 "./comelang2.h"
    result_6->p=result_6->memory->buf;
    # 1998 "./comelang2.h"
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
    # 2003 "./comelang2.h"
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2003, "smart_pointer$1char"))));
    come_call_finalizer2(smart_pointer$1charp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2005 "./comelang2.h"
    __dec_obj2=result_7->memory;
    result_7->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value15=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2006 "./comelang2.h"
    result_7->p=(char*)result_7->memory->buf;
    # 2008 "./comelang2.h"
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
    # 2013 "./comelang2.h"
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2013, "smart_pointer$1short"))));
    come_call_finalizer2(smart_pointer$1shortp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2015 "./comelang2.h"
    __dec_obj3=result_8->memory;
    result_8->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value17=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2016 "./comelang2.h"
    result_8->p=(short short*)result_8->memory->buf;
    # 2018 "./comelang2.h"
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
    # 2023 "./comelang2.h"
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2023, "smart_pointer$1int"))));
    come_call_finalizer2(smart_pointer$1intp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2025 "./comelang2.h"
    __dec_obj4=result_9->memory;
    result_9->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value19=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2026 "./comelang2.h"
    result_9->p=(int*)result_9->memory->buf;
    # 2028 "./comelang2.h"
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
    # 2033 "./comelang2.h"
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2033, "smart_pointer$1long"))));
    come_call_finalizer2(smart_pointer$1longp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2035 "./comelang2.h"
    __dec_obj5=result_10->memory;
    result_10->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value21=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2036 "./comelang2.h"
    result_10->p=(long*)result_10->memory->buf;
    # 2038 "./comelang2.h"
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
    # 2201 "./comelang2.h"
    __result14__ = __result_obj__ = ((struct smart_pointer$1char*)(right_value25=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value22=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2201, "smart_pointer$1char")))),self,sizeof(char)*len)));
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
    # 2206 "./comelang2.h"
    __result16__ = __result_obj__ = ((struct smart_pointer$1short*)(right_value29=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value26=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2206, "smart_pointer$1short")))),self,sizeof(short short)*len)));
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
    # 2211 "./comelang2.h"
    __result18__ = __result_obj__ = ((struct smart_pointer$1int*)(right_value33=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value30=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2211, "smart_pointer$1int")))),self,sizeof(int)*len)));
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
    # 2216 "./comelang2.h"
    __result20__ = __result_obj__ = ((struct smart_pointer$1long*)(right_value37=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value34=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2216, "smart_pointer$1long")))),self,sizeof(long)*len)));
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
    # 2221 "./comelang2.h"
    __result22__ = __result_obj__ = ((struct smart_pointer$1float*)(right_value41=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)(right_value38=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang2.h", 2221, "smart_pointer$1float")))),self,sizeof(float)*len)));
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
    # 2226 "./comelang2.h"
    __result24__ = __result_obj__ = ((struct smart_pointer$1double*)(right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang2.h", 2226, "smart_pointer$1double")))),self,sizeof(double)*len)));
    come_call_finalizer2(smart_pointer$1doublep_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1doublep_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result24__;
}
static inline unsigned long int charpa_length(char* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result25__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2255 "./comelang2.h"
    __result25__ = len;
    return __result25__;
}
static inline unsigned long int shortpa_length(short short* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result26__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2260 "./comelang2.h"
    __result26__ = len;
    return __result26__;
}
static inline unsigned long int intpa_length(int* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result27__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2265 "./comelang2.h"
    __result27__ = len;
    return __result27__;
}
static inline unsigned long int longpa_length(long* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result28__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2270 "./comelang2.h"
    __result28__ = len;
    return __result28__;
}
static inline unsigned long int floatpa_length(float* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result29__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2275 "./comelang2.h"
    __result29__ = len;
    return __result29__;
}
static inline unsigned long int doublepa_length(double* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result30__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2280 "./comelang2.h"
    __result30__ = len;
    return __result30__;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value46;
char* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
right_value46 = (void*)0;
    # 2341 "./comelang2.h"
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
    # 2346 "./comelang2.h"
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
    # 2351 "./comelang2.h"
    __result33__ = __result_obj__ = ((char*)(right_value48=xsprintf(msg,self)));
    right_value48 = come_decrement_ref_count2(right_value48, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result33__;
}

// body function








static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
void* __result_obj__;
_Bool _if_conditional1;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "smart_pointer$1charp_finalize"
        # 0 "smart_pointer$1charp_finalize"
        if(_if_conditional1=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional1) {
            # 0 "smart_pointer$1charp_finalize"
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}



static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
void* __result_obj__;
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "smart_pointer$1shortp_finalize"
        # 0 "smart_pointer$1shortp_finalize"
        if(_if_conditional2=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional2) {
            # 0 "smart_pointer$1shortp_finalize"
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
void* __result_obj__;
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "smart_pointer$1intp_finalize"
        # 0 "smart_pointer$1intp_finalize"
        if(_if_conditional3=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional3) {
            # 0 "smart_pointer$1intp_finalize"
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
void* __result_obj__;
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "smart_pointer$1longp_finalize"
        # 0 "smart_pointer$1longp_finalize"
        if(_if_conditional4=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional4) {
            # 0 "smart_pointer$1longp_finalize"
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
        # 2045 "./comelang2.h"
        __dec_obj6=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2045, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2047 "./comelang2.h"
        buffer_append(self->memory,memory,sizeof(char)*size);
        # 2049 "./comelang2.h"
        self->p=(char*)self->memory->buf;
        # 2051 "./comelang2.h"
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
        # 2045 "./comelang2.h"
        __dec_obj7=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2045, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2047 "./comelang2.h"
        buffer_append(self->memory,memory,sizeof(short short)*size);
        # 2049 "./comelang2.h"
        self->p=(short short*)self->memory->buf;
        # 2051 "./comelang2.h"
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
        # 2045 "./comelang2.h"
        __dec_obj8=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2045, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2047 "./comelang2.h"
        buffer_append(self->memory,memory,sizeof(int)*size);
        # 2049 "./comelang2.h"
        self->p=(int*)self->memory->buf;
        # 2051 "./comelang2.h"
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
        # 2045 "./comelang2.h"
        __dec_obj9=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2045, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2047 "./comelang2.h"
        buffer_append(self->memory,memory,sizeof(long)*size);
        # 2049 "./comelang2.h"
        self->p=(long*)self->memory->buf;
        # 2051 "./comelang2.h"
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
        # 2045 "./comelang2.h"
        __dec_obj10=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2045, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2047 "./comelang2.h"
        buffer_append(self->memory,memory,sizeof(float)*size);
        # 2049 "./comelang2.h"
        self->p=(float*)self->memory->buf;
        # 2051 "./comelang2.h"
        __result21__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1floatp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result21__;
        come_call_finalizer2(smart_pointer$1floatp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
void* __result_obj__;
_Bool _if_conditional5;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "smart_pointer$1floatp_finalize"
            # 0 "smart_pointer$1floatp_finalize"
            if(_if_conditional5=self!=((void*)0)&&self->memory!=((void*)0),            _if_conditional5) {
                # 0 "smart_pointer$1floatp_finalize"
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
        # 2045 "./comelang2.h"
        __dec_obj11=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2045, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2047 "./comelang2.h"
        buffer_append(self->memory,memory,sizeof(double)*size);
        # 2049 "./comelang2.h"
        self->p=(double*)self->memory->buf;
        # 2051 "./comelang2.h"
        __result23__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1doublep_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result23__;
        come_call_finalizer2(smart_pointer$1doublep_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
void* __result_obj__;
_Bool _if_conditional6;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "smart_pointer$1doublep_finalize"
            # 0 "smart_pointer$1doublep_finalize"
            if(_if_conditional6=self!=((void*)0)&&self->memory!=((void*)0),            _if_conditional6) {
                # 0 "smart_pointer$1doublep_finalize"
                come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}










struct sPlusPlusNode* sPlusPlusNode_initialize(struct sPlusPlusNode* self, struct sNode* left, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value49;
char* __dec_obj12;
void* right_value51;
struct sNode* __dec_obj13;
struct sPlusPlusNode* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
right_value49 = (void*)0;
right_value51 = (void*)0;
    # 14 "19eq.c"
    self->sline=info->sline;
    # 15 "19eq.c"
    __dec_obj12=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value49=__builtin_string(info->sname))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value49 = come_decrement_ref_count2(right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 17 "19eq.c"
    __dec_obj13=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value51=sNode_clone(left))));
    if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count2(__dec_obj13, ((struct sNode*)__dec_obj13)->finalize, ((struct sNode*)__dec_obj13)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value51) { right_value51 = come_decrement_ref_count2(right_value51, ((struct sNode*)right_value51)->finalize, ((struct sNode*)right_value51)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 18 "19eq.c"
    self->mQuote=quote;
    # 20 "19eq.c"
    __result36__ = __result_obj__ = self;
    come_call_finalizer2(sPlusPlusNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result36__;
    come_call_finalizer2(sPlusPlusNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional7;
struct sNode* __result34__;
void* right_value50;
struct sNode* result_11;
_Bool _if_conditional8;
_Bool _if_conditional9;
_Bool _if_conditional10;
_Bool _if_conditional11;
_Bool _if_conditional12;
_Bool _if_conditional13;
_Bool _if_conditional14;
_Bool _if_conditional15;
struct sNode* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
right_value50 = (void*)0;
memset(&result_11, 0, sizeof(struct sNode*));
        # 3 "sNode_clone"
        # 2 "sNode_clone"
        if(_if_conditional7=self==(void*)0,        _if_conditional7) {
            # 2 "sNode_clone"
            __result34__ = __result_obj__ = (void*)0;
            return __result34__;
        }
        # 3 "sNode_clone"
        result_11=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value50=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
        if(right_value50) { right_value50 = come_decrement_ref_count2(right_value50, ((struct sNode*)right_value50)->finalize, ((struct sNode*)right_value50)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 5 "sNode_clone"
        # 4 "sNode_clone"
        if(_if_conditional8=self!=((void*)0)&&self->clone!=((void*)0),        _if_conditional8) {
            # 4 "sNode_clone"
            result_11->_protocol_obj=self->clone(self->_protocol_obj);
        }
        # 6 "sNode_clone"
        # 5 "sNode_clone"
        if(_if_conditional9=self!=((void*)0),        _if_conditional9) {
            # 5 "sNode_clone"
            result_11->finalize=self->finalize;
        }
        # 7 "sNode_clone"
        # 6 "sNode_clone"
        if(_if_conditional10=self!=((void*)0),        _if_conditional10) {
            # 6 "sNode_clone"
            result_11->clone=self->clone;
        }
        # 8 "sNode_clone"
        # 7 "sNode_clone"
        if(_if_conditional11=self!=((void*)0),        _if_conditional11) {
            # 7 "sNode_clone"
            result_11->compile=self->compile;
        }
        # 9 "sNode_clone"
        # 8 "sNode_clone"
        if(_if_conditional12=self!=((void*)0),        _if_conditional12) {
            # 8 "sNode_clone"
            result_11->sline=self->sline;
        }
        # 10 "sNode_clone"
        # 9 "sNode_clone"
        if(_if_conditional13=self!=((void*)0),        _if_conditional13) {
            # 9 "sNode_clone"
            result_11->sname=self->sname;
        }
        # 11 "sNode_clone"
        # 10 "sNode_clone"
        if(_if_conditional14=self!=((void*)0),        _if_conditional14) {
            # 10 "sNode_clone"
            result_11->terminated=self->terminated;
        }
        # 12 "sNode_clone"
        # 11 "sNode_clone"
        if(_if_conditional15=self!=((void*)0),        _if_conditional15) {
            # 11 "sNode_clone"
            result_11->kind=self->kind;
        }
        # 12 "sNode_clone"
        __result35__ = __result_obj__ = result_11;
        if(result_11) { result_11 = come_decrement_ref_count2(result_11, ((struct sNode*)result_11)->finalize, ((struct sNode*)result_11)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result35__;
        if(result_11) { result_11 = come_decrement_ref_count2(result_11, ((struct sNode*)result_11)->finalize, ((struct sNode*)result_11)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

_Bool sPlusPlusNode_terminated(){
void* __result_obj__;
_Bool __result37__;
memset(&__result_obj__, 0, sizeof(void*));
    # 25 "19eq.c"
    __result37__ = (_Bool)0;
    return __result37__;
}

char* sPlusPlusNode_kind(){
void* __result_obj__;
void* right_value52;
char* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
right_value52 = (void*)0;
    # 30 "19eq.c"
    __result38__ = __result_obj__ = ((char*)(right_value52=__builtin_string("sPlusPlusNode")));
    right_value52 = come_decrement_ref_count2(right_value52, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result38__;
}

_Bool sPlusPlusNode_compile(struct sPlusPlusNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_12;
_Bool _if_conditional18;
_Bool __result39__;
void* right_value53;
struct CVALUE* left_value_13;
struct sType* type_20;
char* fun_name_21;
_Bool calling_fun_22;
_Bool _if_conditional38;
_Bool _if_conditional39;
void* right_value54;
struct CVALUE* come_value_23;
void* right_value55;
char* __dec_obj14;
void* right_value90;
struct sType* __dec_obj38;
_Bool __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_12, 0, sizeof(struct sNode*));
right_value53 = (void*)0;
memset(&left_value_13, 0, sizeof(struct CVALUE*));
memset(&type_20, 0, sizeof(struct sType*));
memset(&fun_name_21, 0, sizeof(char*));
memset(&calling_fun_22, 0, sizeof(_Bool));
right_value54 = (void*)0;
memset(&come_value_23, 0, sizeof(struct CVALUE*));
right_value55 = (void*)0;
right_value90 = (void*)0;
    # 35 "19eq.c"
    left_12=self->mLeft;
    # 41 "19eq.c"
    # 37 "19eq.c"
    if(_if_conditional18=!node_compile(left_12,info),    _if_conditional18) {
        # 38 "19eq.c"
        __result39__ = (_Bool)0;
        return __result39__;
    }
    # 41 "19eq.c"
    left_value_13=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value53=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 42 "19eq.c"
    dec_stack_ptr(1,info);
    # 44 "19eq.c"
    type_20=(struct sType*)come_increment_ref_count(left_value_13->type);
    # 46 "19eq.c"
    fun_name_21="operator_plus_plus";
    # 48 "19eq.c"
    # 56 "19eq.c"
    # 49 "19eq.c"
    if(self->mQuote) {
        # 50 "19eq.c"
        calling_fun_22=(_Bool)0;
    }
    else {
        # 53 "19eq.c"
        calling_fun_22=operator_overload_fun_self(type_20,fun_name_21,left_value_13,info);
    }
    # 68 "19eq.c"
    # 56 "19eq.c"
    if(_if_conditional39=!calling_fun_22,    _if_conditional39) {
        # 57 "19eq.c"
        come_value_23=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value54=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 57, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 59 "19eq.c"
        __dec_obj14=come_value_23->c_value;
        come_value_23->c_value=(char*)come_increment_ref_count(((char*)(right_value55=xsprintf("%s++",left_value_13->c_value))));
        __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value55 = come_decrement_ref_count2(right_value55, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 60 "19eq.c"
        __dec_obj38=come_value_23->type;
        come_value_23->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value90=sType_clone(left_value_13->type))));
        come_call_finalizer2(sType_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 61 "19eq.c"
        come_value_23->var=((void*)0);
        # 63 "19eq.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_23));
        # 65 "19eq.c"
        add_come_last_code(info,"%s;\n",come_value_23->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 68 "19eq.c"
    __result57__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result57__;
    come_call_finalizer2(CVALUE_finalize,left_value_13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional19;
_Bool _if_conditional20;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "CVALUE_finalize"
        # 0 "CVALUE_finalize"
        if(_if_conditional19=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional19) {
            # 0 "CVALUE_finalize"
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 2 "CVALUE_finalize"
        # 1 "CVALUE_finalize"
        if(_if_conditional20=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional20) {
            # 1 "CVALUE_finalize"
            come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional21;
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
                # 1 "sType_finalize"
                # 0 "sType_finalize"
                if(_if_conditional21=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                _if_conditional21) {
                    # 0 "sType_finalize"
                    come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 2 "sType_finalize"
                # 1 "sType_finalize"
                if(_if_conditional23=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional23) {
                    # 1 "sType_finalize"
                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 3 "sType_finalize"
                # 2 "sType_finalize"
                if(_if_conditional25=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional25) {
                    # 2 "sType_finalize"
                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 4 "sType_finalize"
                # 3 "sType_finalize"
                if(_if_conditional26=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional26) {
                    # 3 "sType_finalize"
                    self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 5 "sType_finalize"
                # 4 "sType_finalize"
                if(_if_conditional27=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional27) {
                    # 4 "sType_finalize"
                    come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 6 "sType_finalize"
                # 5 "sType_finalize"
                if(_if_conditional28=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional28) {
                    # 5 "sType_finalize"
                    come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 7 "sType_finalize"
                # 6 "sType_finalize"
                if(_if_conditional30=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional30) {
                    # 6 "sType_finalize"
                    come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 8 "sType_finalize"
                # 7 "sType_finalize"
                if(_if_conditional31=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional31) {
                    # 7 "sType_finalize"
                    come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 9 "sType_finalize"
                # 8 "sType_finalize"
                if(_if_conditional33=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional33) {
                    # 8 "sType_finalize"
                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 10 "sType_finalize"
                # 9 "sType_finalize"
                if(_if_conditional34=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional34) {
                    # 9 "sType_finalize"
                    if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                # 11 "sType_finalize"
                # 10 "sType_finalize"
                if(_if_conditional35=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional35) {
                    # 10 "sType_finalize"
                    if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                # 12 "sType_finalize"
                # 11 "sType_finalize"
                if(_if_conditional36=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional36) {
                    # 11 "sType_finalize"
                    self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 13 "sType_finalize"
                # 12 "sType_finalize"
                if(_if_conditional37=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional37) {
                    # 12 "sType_finalize"
                    self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_14;
_Bool _while_condtional1;
struct list_item$1sTypeph* prev_it_15;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_14, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_15, 0, sizeof(struct list_item$1sTypeph*));
                        # 123 "./comelang2.h"
                        it_14=self->head;
                        # 129 "./comelang2.h"
                        while(_while_condtional1=it_14!=((void*)0),                        _while_condtional1) {
                            # 125 "./comelang2.h"
                            prev_it_15=it_14;
                            # 126 "./comelang2.h"
                            it_14=it_14->next;
                            # 127 "./comelang2.h"
                            come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "list_item$1sTypephp_finalize"
                                # 0 "list_item$1sTypephp_finalize"
                                if(_if_conditional22=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional22) {
                                    # 0 "list_item$1sTypephp_finalize"
                                    come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "tuple1$1sTypephp_finalize"
                        # 0 "tuple1$1sTypephp_finalize"
                        if(_if_conditional24=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional24) {
                            # 0 "tuple1$1sTypephp_finalize"
                            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_16;
_Bool _while_condtional2;
struct list_item$1sNodeph* prev_it_17;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_16, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_17, 0, sizeof(struct list_item$1sNodeph*));
                        # 123 "./comelang2.h"
                        it_16=self->head;
                        # 129 "./comelang2.h"
                        while(_while_condtional2=it_16!=((void*)0),                        _while_condtional2) {
                            # 125 "./comelang2.h"
                            prev_it_17=it_16;
                            # 126 "./comelang2.h"
                            it_16=it_16->next;
                            # 127 "./comelang2.h"
                            come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional29;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "list_item$1sNodephp_finalize"
                                # 0 "list_item$1sNodephp_finalize"
                                if(_if_conditional29=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional29) {
                                    # 0 "list_item$1sNodephp_finalize"
                                    if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_18;
_Bool _while_condtional3;
struct list_item$1charph* prev_it_19;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_18, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_19, 0, sizeof(struct list_item$1charph*));
                        # 123 "./comelang2.h"
                        it_18=self->head;
                        # 129 "./comelang2.h"
                        while(_while_condtional3=it_18!=((void*)0),                        _while_condtional3) {
                            # 125 "./comelang2.h"
                            prev_it_19=it_18;
                            # 126 "./comelang2.h"
                            it_18=it_18->next;
                            # 127 "./comelang2.h"
                            come_call_finalizer2(list_item$1charphp_finalize,prev_it_19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional32;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "list_item$1charphp_finalize"
                                # 0 "list_item$1charphp_finalize"
                                if(_if_conditional32=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional32) {
                                    # 0 "list_item$1charphp_finalize"
                                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional40;
struct sType* __result40__;
void* right_value56;
struct sType* result_24;
_Bool _if_conditional41;
_Bool _if_conditional42;
void* right_value63;
struct list$1sTypeph* __dec_obj18;
_Bool _if_conditional46;
void* right_value66;
struct tuple1$1sTypeph* __dec_obj20;
_Bool _if_conditional50;
void* right_value67;
struct tuple1$1sTypeph* __dec_obj21;
_Bool _if_conditional51;
void* right_value68;
char* __dec_obj22;
_Bool _if_conditional52;
void* right_value69;
struct list$1sTypeph* __dec_obj23;
_Bool _if_conditional53;
void* right_value76;
struct list$1sNodeph* __dec_obj27;
_Bool _if_conditional57;
_Bool _if_conditional58;
void* right_value77;
struct list$1sTypeph* __dec_obj28;
_Bool _if_conditional59;
void* right_value84;
struct list$1charph* __dec_obj32;
_Bool _if_conditional63;
void* right_value85;
struct tuple1$1sTypeph* __dec_obj33;
_Bool _if_conditional64;
_Bool _if_conditional65;
void* right_value86;
struct sNode* __dec_obj34;
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
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
void* right_value87;
struct sNode* __dec_obj35;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool _if_conditional92;
void* right_value88;
char* __dec_obj36;
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
void* right_value89;
char* __dec_obj37;
_Bool _if_conditional103;
struct sType* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value56 = (void*)0;
memset(&result_24, 0, sizeof(struct sType*));
right_value63 = (void*)0;
right_value66 = (void*)0;
right_value67 = (void*)0;
right_value68 = (void*)0;
right_value69 = (void*)0;
right_value76 = (void*)0;
right_value77 = (void*)0;
right_value84 = (void*)0;
right_value85 = (void*)0;
right_value86 = (void*)0;
right_value87 = (void*)0;
right_value88 = (void*)0;
right_value89 = (void*)0;
            # 3 "sType_clone"
            # 2 "sType_clone"
            if(_if_conditional40=self==(void*)0,            _if_conditional40) {
                # 2 "sType_clone"
                __result40__ = __result_obj__ = (void*)0;
                return __result40__;
            }
            # 3 "sType_clone"
            result_24=(struct sType*)come_increment_ref_count(((struct sType*)(right_value56=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
            come_call_finalizer2(sType_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 5 "sType_clone"
            # 4 "sType_clone"
            if(_if_conditional41=self!=((void*)0),            _if_conditional41) {
                # 4 "sType_clone"
                result_24->mClass=self->mClass;
            }
            # 6 "sType_clone"
            # 5 "sType_clone"
            if(_if_conditional42=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional42) {
                # 5 "sType_clone"
                __dec_obj18=result_24->mMultipleTypes;
                result_24->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value63=list$1sTypephp_clone(self->mMultipleTypes))));
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 7 "sType_clone"
            # 6 "sType_clone"
            if(_if_conditional46=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional46) {
                # 6 "sType_clone"
                __dec_obj20=result_24->mNoSolvedGenericsType;
                result_24->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value66=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 8 "sType_clone"
            # 7 "sType_clone"
            if(_if_conditional50=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional50) {
                # 7 "sType_clone"
                __dec_obj21=result_24->mOriginalLoadVarType;
                result_24->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value67=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 9 "sType_clone"
            # 8 "sType_clone"
            if(_if_conditional51=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional51) {
                # 8 "sType_clone"
                __dec_obj22=result_24->mGenericsName;
                result_24->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value68=string_clone(self->mGenericsName))));
                __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value68 = come_decrement_ref_count2(right_value68, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 10 "sType_clone"
            # 9 "sType_clone"
            if(_if_conditional52=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional52) {
                # 9 "sType_clone"
                __dec_obj23=result_24->mGenericsTypes;
                result_24->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value69=list$1sTypephp_clone(self->mGenericsTypes))));
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 11 "sType_clone"
            # 10 "sType_clone"
            if(_if_conditional53=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional53) {
                # 10 "sType_clone"
                __dec_obj27=result_24->mArrayNum;
                result_24->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value76=list$1sNodephp_clone(self->mArrayNum))));
                come_call_finalizer2(list$1sNodeph_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sNodephp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 12 "sType_clone"
            # 11 "sType_clone"
            if(_if_conditional57=self!=((void*)0),            _if_conditional57) {
                # 11 "sType_clone"
                result_24->mOmitArrayNum=self->mOmitArrayNum;
            }
            # 13 "sType_clone"
            # 12 "sType_clone"
            if(_if_conditional58=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional58) {
                # 12 "sType_clone"
                __dec_obj28=result_24->mParamTypes;
                result_24->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value77=list$1sTypephp_clone(self->mParamTypes))));
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 14 "sType_clone"
            # 13 "sType_clone"
            if(_if_conditional59=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional59) {
                # 13 "sType_clone"
                __dec_obj32=result_24->mParamNames;
                result_24->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value84=list$1charphp_clone(self->mParamNames))));
                come_call_finalizer2(list$1charph_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 15 "sType_clone"
            # 14 "sType_clone"
            if(_if_conditional63=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional63) {
                # 14 "sType_clone"
                __dec_obj33=result_24->mResultType;
                result_24->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value85=tuple1$1sTypephp_clone(self->mResultType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 16 "sType_clone"
            # 15 "sType_clone"
            if(_if_conditional64=self!=((void*)0),            _if_conditional64) {
                # 15 "sType_clone"
                result_24->mVarArgs=self->mVarArgs;
            }
            # 17 "sType_clone"
            # 16 "sType_clone"
            if(_if_conditional65=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional65) {
                # 16 "sType_clone"
                __dec_obj34=result_24->mAlignas;
                result_24->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value86=sNode_clone(self->mAlignas))));
                if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value86) { right_value86 = come_decrement_ref_count2(right_value86, ((struct sNode*)right_value86)->finalize, ((struct sNode*)right_value86)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            # 18 "sType_clone"
            # 17 "sType_clone"
            if(_if_conditional66=self!=((void*)0),            _if_conditional66) {
                # 17 "sType_clone"
                result_24->mUnsigned=self->mUnsigned;
            }
            # 19 "sType_clone"
            # 18 "sType_clone"
            if(_if_conditional67=self!=((void*)0),            _if_conditional67) {
                # 18 "sType_clone"
                result_24->mShort=self->mShort;
            }
            # 20 "sType_clone"
            # 19 "sType_clone"
            if(_if_conditional68=self!=((void*)0),            _if_conditional68) {
                # 19 "sType_clone"
                result_24->mLong=self->mLong;
            }
            # 21 "sType_clone"
            # 20 "sType_clone"
            if(_if_conditional69=self!=((void*)0),            _if_conditional69) {
                # 20 "sType_clone"
                result_24->mLongLong=self->mLongLong;
            }
            # 22 "sType_clone"
            # 21 "sType_clone"
            if(_if_conditional70=self!=((void*)0),            _if_conditional70) {
                # 21 "sType_clone"
                result_24->mConstant=self->mConstant;
            }
            # 23 "sType_clone"
            # 22 "sType_clone"
            if(_if_conditional71=self!=((void*)0),            _if_conditional71) {
                # 22 "sType_clone"
                result_24->mRegister=self->mRegister;
            }
            # 24 "sType_clone"
            # 23 "sType_clone"
            if(_if_conditional72=self!=((void*)0),            _if_conditional72) {
                # 23 "sType_clone"
                result_24->mVolatile=self->mVolatile;
            }
            # 25 "sType_clone"
            # 24 "sType_clone"
            if(_if_conditional73=self!=((void*)0),            _if_conditional73) {
                # 24 "sType_clone"
                result_24->mStatic=self->mStatic;
            }
            # 26 "sType_clone"
            # 25 "sType_clone"
            if(_if_conditional74=self!=((void*)0),            _if_conditional74) {
                # 25 "sType_clone"
                result_24->mExtern=self->mExtern;
            }
            # 27 "sType_clone"
            # 26 "sType_clone"
            if(_if_conditional75=self!=((void*)0),            _if_conditional75) {
                # 26 "sType_clone"
                result_24->mRestrict=self->mRestrict;
            }
            # 28 "sType_clone"
            # 27 "sType_clone"
            if(_if_conditional76=self!=((void*)0),            _if_conditional76) {
                # 27 "sType_clone"
                result_24->mImmutable=self->mImmutable;
            }
            # 29 "sType_clone"
            # 28 "sType_clone"
            if(_if_conditional77=self!=((void*)0),            _if_conditional77) {
                # 28 "sType_clone"
                result_24->mHeap=self->mHeap;
            }
            # 30 "sType_clone"
            # 29 "sType_clone"
            if(_if_conditional78=self!=((void*)0),            _if_conditional78) {
                # 29 "sType_clone"
                result_24->mDummyHeap=self->mDummyHeap;
            }
            # 31 "sType_clone"
            # 30 "sType_clone"
            if(_if_conditional79=self!=((void*)0),            _if_conditional79) {
                # 30 "sType_clone"
                result_24->mDelegate=self->mDelegate;
            }
            # 32 "sType_clone"
            # 31 "sType_clone"
            if(_if_conditional80=self!=((void*)0),            _if_conditional80) {
                # 31 "sType_clone"
                result_24->mShare=self->mShare;
            }
            # 33 "sType_clone"
            # 32 "sType_clone"
            if(_if_conditional81=self!=((void*)0),            _if_conditional81) {
                # 32 "sType_clone"
                result_24->mClone=self->mClone;
            }
            # 34 "sType_clone"
            # 33 "sType_clone"
            if(_if_conditional82=self!=((void*)0),            _if_conditional82) {
                # 33 "sType_clone"
                result_24->mNoHeap=self->mNoHeap;
            }
            # 35 "sType_clone"
            # 34 "sType_clone"
            if(_if_conditional83=self!=((void*)0),            _if_conditional83) {
                # 34 "sType_clone"
                result_24->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            # 36 "sType_clone"
            # 35 "sType_clone"
            if(_if_conditional84=self!=((void*)0),            _if_conditional84) {
                # 35 "sType_clone"
                result_24->mRefference=self->mRefference;
            }
            # 37 "sType_clone"
            # 36 "sType_clone"
            if(_if_conditional85=self!=((void*)0),            _if_conditional85) {
                # 36 "sType_clone"
                result_24->mException=self->mException;
            }
            # 38 "sType_clone"
            # 37 "sType_clone"
            if(_if_conditional86=self!=((void*)0),            _if_conditional86) {
                # 37 "sType_clone"
                result_24->mPointerNum=self->mPointerNum;
            }
            # 39 "sType_clone"
            # 38 "sType_clone"
            if(_if_conditional87=self!=((void*)0),            _if_conditional87) {
                # 38 "sType_clone"
                result_24->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
            }
            # 40 "sType_clone"
            # 39 "sType_clone"
            if(_if_conditional88=self!=((void*)0),            _if_conditional88) {
                # 39 "sType_clone"
                result_24->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            # 41 "sType_clone"
            # 40 "sType_clone"
            if(_if_conditional89=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional89) {
                # 40 "sType_clone"
                __dec_obj35=result_24->mSizeNum;
                result_24->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value87=sNode_clone(self->mSizeNum))));
                if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count2(__dec_obj35, ((struct sNode*)__dec_obj35)->finalize, ((struct sNode*)__dec_obj35)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value87) { right_value87 = come_decrement_ref_count2(right_value87, ((struct sNode*)right_value87)->finalize, ((struct sNode*)right_value87)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            # 42 "sType_clone"
            # 41 "sType_clone"
            if(_if_conditional90=self!=((void*)0),            _if_conditional90) {
                # 41 "sType_clone"
                result_24->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            # 43 "sType_clone"
            # 42 "sType_clone"
            if(_if_conditional91=self!=((void*)0),            _if_conditional91) {
                # 42 "sType_clone"
                result_24->mTypeOfExpression=self->mTypeOfExpression;
            }
            # 44 "sType_clone"
            # 43 "sType_clone"
            if(_if_conditional92=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional92) {
                # 43 "sType_clone"
                __dec_obj36=result_24->mOriginalTypeName;
                result_24->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value88=string_clone(self->mOriginalTypeName))));
                __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 45 "sType_clone"
            # 44 "sType_clone"
            if(_if_conditional93=self!=((void*)0),            _if_conditional93) {
                # 44 "sType_clone"
                result_24->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            # 46 "sType_clone"
            # 45 "sType_clone"
            if(_if_conditional94=self!=((void*)0),            _if_conditional94) {
                # 45 "sType_clone"
                result_24->mFunctionParam=self->mFunctionParam;
            }
            # 47 "sType_clone"
            # 46 "sType_clone"
            if(_if_conditional95=self!=((void*)0),            _if_conditional95) {
                # 46 "sType_clone"
                result_24->mAllocaValue=self->mAllocaValue;
            }
            # 48 "sType_clone"
            # 47 "sType_clone"
            if(_if_conditional96=self!=((void*)0),            _if_conditional96) {
                # 47 "sType_clone"
                result_24->mGenericsStruct=self->mGenericsStruct;
            }
            # 49 "sType_clone"
            # 48 "sType_clone"
            if(_if_conditional97=self!=((void*)0),            _if_conditional97) {
                # 48 "sType_clone"
                result_24->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            # 50 "sType_clone"
            # 49 "sType_clone"
            if(_if_conditional98=self!=((void*)0),            _if_conditional98) {
                # 49 "sType_clone"
                result_24->mComeMemCore=self->mComeMemCore;
            }
            # 51 "sType_clone"
            # 50 "sType_clone"
            if(_if_conditional99=self!=((void*)0),            _if_conditional99) {
                # 50 "sType_clone"
                result_24->mInline=self->mInline;
            }
            # 52 "sType_clone"
            # 51 "sType_clone"
            if(_if_conditional100=self!=((void*)0),            _if_conditional100) {
                # 51 "sType_clone"
                result_24->mNullValue=self->mNullValue;
            }
            # 53 "sType_clone"
            # 52 "sType_clone"
            if(_if_conditional101=self!=((void*)0),            _if_conditional101) {
                # 52 "sType_clone"
                result_24->mGuardValue=self->mGuardValue;
            }
            # 54 "sType_clone"
            # 53 "sType_clone"
            if(_if_conditional102=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional102) {
                # 53 "sType_clone"
                __dec_obj37=result_24->mAsmName;
                result_24->mAsmName=(char*)come_increment_ref_count(((char*)(right_value89=string_clone(self->mAsmName))));
                __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 55 "sType_clone"
            # 54 "sType_clone"
            if(_if_conditional103=self!=((void*)0),            _if_conditional103) {
                # 54 "sType_clone"
                result_24->mArrayPointerType=self->mArrayPointerType;
            }
            # 55 "sType_clone"
            __result55__ = __result_obj__ = result_24;
            come_call_finalizer2(sType_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result55__;
            come_call_finalizer2(sType_finalize,result_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional43;
struct list$1sTypeph* __result41__;
void* right_value57;
void* right_value58;
struct list$1sTypeph* result_25;
struct list_item$1sTypeph* it_26;
_Bool _while_condtional4;
void* right_value62;
struct list$1sTypeph* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
right_value57 = (void*)0;
right_value58 = (void*)0;
memset(&result_25, 0, sizeof(struct list$1sTypeph*));
memset(&it_26, 0, sizeof(struct list_item$1sTypeph*));
right_value62 = (void*)0;
                    # 142 "./comelang2.h"
                    # 139 "./comelang2.h"
                    if(_if_conditional43=self==((void*)0),                    _if_conditional43) {
                        # 140 "./comelang2.h"
                        __result41__ = __result_obj__ = ((void*)0);
                        return __result41__;
                    }
                    # 142 "./comelang2.h"
                    result_25=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value58=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value57=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 142, "list$1sTypeph"))))))));
                    come_call_finalizer2(list$1sTypephp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 144 "./comelang2.h"
                    it_26=self->head;
                    # 151 "./comelang2.h"
                    while(_while_condtional4=it_26!=((void*)0),                    _while_condtional4) {
                        # 146 "./comelang2.h"
                        list$1sTypeph_add(result_25,(struct sType*)come_increment_ref_count(((struct sType*)(right_value62=sType_clone(it_26->item)))));
                        come_call_finalizer2(sType_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 148 "./comelang2.h"
                        it_26=it_26->next;
                    }
                    # 151 "./comelang2.h"
                    __result44__ = __result_obj__ = result_25;
                    come_call_finalizer2(list$1sTypephp_finalize,result_25, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result44__;
                    come_call_finalizer2(list$1sTypephp_finalize,result_25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 104 "./comelang2.h"
                        self->head=((void*)0);
                        # 105 "./comelang2.h"
                        self->tail=((void*)0);
                        # 106 "./comelang2.h"
                        self->len=0;
                        # 108 "./comelang2.h"
                        __result42__ = __result_obj__ = self;
                        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result42__;
                        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional44;
void* right_value59;
struct list_item$1sTypeph* litem_27;
struct sType* __dec_obj15;
_Bool _if_conditional45;
void* right_value60;
struct list_item$1sTypeph* litem_28;
struct sType* __dec_obj16;
void* right_value61;
struct list_item$1sTypeph* litem_29;
struct sType* __dec_obj17;
struct list$1sTypeph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
right_value59 = (void*)0;
memset(&litem_27, 0, sizeof(struct list_item$1sTypeph*));
right_value60 = (void*)0;
memset(&litem_28, 0, sizeof(struct list_item$1sTypeph*));
right_value61 = (void*)0;
memset(&litem_29, 0, sizeof(struct list_item$1sTypeph*));
                            # 186 "./comelang2.h"
                            # 155 "./comelang2.h"
                            if(_if_conditional44=self->len==0,                            _if_conditional44) {
                                # 156 "./comelang2.h"
                                litem_27=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value59=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 156, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 158 "./comelang2.h"
                                litem_27->prev=((void*)0);
                                # 159 "./comelang2.h"
                                litem_27->next=((void*)0);
                                # 160 "./comelang2.h"
                                __dec_obj15=litem_27->item;
                                litem_27->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 162 "./comelang2.h"
                                self->tail=litem_27;
                                # 163 "./comelang2.h"
                                self->head=litem_27;
                            }
                            else {
                                # 186 "./comelang2.h"
                                # 165 "./comelang2.h"
                                if(_if_conditional45=self->len==1,                                _if_conditional45) {
                                    # 166 "./comelang2.h"
                                    litem_28=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value60=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 166, "list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 168 "./comelang2.h"
                                    litem_28->prev=self->head;
                                    # 169 "./comelang2.h"
                                    litem_28->next=((void*)0);
                                    # 170 "./comelang2.h"
                                    __dec_obj16=litem_28->item;
                                    litem_28->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    # 172 "./comelang2.h"
                                    self->tail=litem_28;
                                    # 173 "./comelang2.h"
                                    self->head->next=litem_28;
                                }
                                else {
                                    # 176 "./comelang2.h"
                                    litem_29=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value61=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 176, "list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 178 "./comelang2.h"
                                    litem_29->prev=self->tail;
                                    # 179 "./comelang2.h"
                                    litem_29->next=((void*)0);
                                    # 180 "./comelang2.h"
                                    __dec_obj17=litem_29->item;
                                    litem_29->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    # 182 "./comelang2.h"
                                    self->tail->next=litem_29;
                                    # 183 "./comelang2.h"
                                    self->tail=litem_29;
                                }
                            }
                            # 186 "./comelang2.h"
                            self->len++;
                            # 188 "./comelang2.h"
                            __result43__ = __result_obj__ = self;
                            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result43__;
                            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional47;
struct tuple1$1sTypeph* __result45__;
void* right_value64;
struct tuple1$1sTypeph* result_30;
_Bool _if_conditional49;
void* right_value65;
struct sType* __dec_obj19;
struct tuple1$1sTypeph* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
right_value64 = (void*)0;
memset(&result_30, 0, sizeof(struct tuple1$1sTypeph*));
right_value65 = (void*)0;
                    # 3 "tuple1$1sTypephp_clone"
                    # 2 "tuple1$1sTypephp_clone"
                    if(_if_conditional47=self==(void*)0,                    _if_conditional47) {
                        # 2 "tuple1$1sTypephp_clone"
                        __result45__ = __result_obj__ = (void*)0;
                        return __result45__;
                    }
                    # 3 "tuple1$1sTypephp_clone"
                    result_30=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value64=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 5 "tuple1$1sTypephp_clone"
                    # 4 "tuple1$1sTypephp_clone"
                    if(_if_conditional49=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional49) {
                        # 4 "tuple1$1sTypephp_clone"
                        __dec_obj19=result_30->v1;
                        result_30->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value65=sType_clone(self->v1))));
                        come_call_finalizer2(sType_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    # 5 "tuple1$1sTypephp_clone"
                    __result46__ = __result_obj__ = result_30;
                    come_call_finalizer2(tuple1$1sTypeph_finalize,result_30, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result46__;
                    come_call_finalizer2(tuple1$1sTypeph_finalize,result_30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional48;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "tuple1$1sTypeph_finalize"
                        # 0 "tuple1$1sTypeph_finalize"
                        if(_if_conditional48=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional48) {
                            # 0 "tuple1$1sTypeph_finalize"
                            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional54;
struct list$1sNodeph* __result47__;
void* right_value70;
void* right_value71;
struct list$1sNodeph* result_31;
struct list_item$1sNodeph* it_32;
_Bool _while_condtional5;
void* right_value75;
struct list$1sNodeph* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
right_value70 = (void*)0;
right_value71 = (void*)0;
memset(&result_31, 0, sizeof(struct list$1sNodeph*));
memset(&it_32, 0, sizeof(struct list_item$1sNodeph*));
right_value75 = (void*)0;
                    # 142 "./comelang2.h"
                    # 139 "./comelang2.h"
                    if(_if_conditional54=self==((void*)0),                    _if_conditional54) {
                        # 140 "./comelang2.h"
                        __result47__ = __result_obj__ = ((void*)0);
                        return __result47__;
                    }
                    # 142 "./comelang2.h"
                    result_31=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value71=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value70=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 142, "list$1sNodeph"))))))));
                    come_call_finalizer2(list$1sNodephp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1sNodephp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 144 "./comelang2.h"
                    it_32=self->head;
                    # 151 "./comelang2.h"
                    while(_while_condtional5=it_32!=((void*)0),                    _while_condtional5) {
                        # 146 "./comelang2.h"
                        list$1sNodeph_add(result_31,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value75=sNode_clone(it_32->item)))));
                        if(right_value75) { right_value75 = come_decrement_ref_count2(right_value75, ((struct sNode*)right_value75)->finalize, ((struct sNode*)right_value75)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 148 "./comelang2.h"
                        it_32=it_32->next;
                    }
                    # 151 "./comelang2.h"
                    __result50__ = __result_obj__ = result_31;
                    come_call_finalizer2(list$1sNodephp_finalize,result_31, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result50__;
                    come_call_finalizer2(list$1sNodephp_finalize,result_31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 104 "./comelang2.h"
                        self->head=((void*)0);
                        # 105 "./comelang2.h"
                        self->tail=((void*)0);
                        # 106 "./comelang2.h"
                        self->len=0;
                        # 108 "./comelang2.h"
                        __result48__ = __result_obj__ = self;
                        come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result48__;
                        come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional55;
void* right_value72;
struct list_item$1sNodeph* litem_33;
struct sNode* __dec_obj24;
_Bool _if_conditional56;
void* right_value73;
struct list_item$1sNodeph* litem_34;
struct sNode* __dec_obj25;
void* right_value74;
struct list_item$1sNodeph* litem_35;
struct sNode* __dec_obj26;
struct list$1sNodeph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
right_value72 = (void*)0;
memset(&litem_33, 0, sizeof(struct list_item$1sNodeph*));
right_value73 = (void*)0;
memset(&litem_34, 0, sizeof(struct list_item$1sNodeph*));
right_value74 = (void*)0;
memset(&litem_35, 0, sizeof(struct list_item$1sNodeph*));
                            # 186 "./comelang2.h"
                            # 155 "./comelang2.h"
                            if(_if_conditional55=self->len==0,                            _if_conditional55) {
                                # 156 "./comelang2.h"
                                litem_33=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value72=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 156, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 158 "./comelang2.h"
                                litem_33->prev=((void*)0);
                                # 159 "./comelang2.h"
                                litem_33->next=((void*)0);
                                # 160 "./comelang2.h"
                                __dec_obj24=litem_33->item;
                                litem_33->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
                                # 162 "./comelang2.h"
                                self->tail=litem_33;
                                # 163 "./comelang2.h"
                                self->head=litem_33;
                            }
                            else {
                                # 186 "./comelang2.h"
                                # 165 "./comelang2.h"
                                if(_if_conditional56=self->len==1,                                _if_conditional56) {
                                    # 166 "./comelang2.h"
                                    litem_34=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value73=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 166, "list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 168 "./comelang2.h"
                                    litem_34->prev=self->head;
                                    # 169 "./comelang2.h"
                                    litem_34->next=((void*)0);
                                    # 170 "./comelang2.h"
                                    __dec_obj25=litem_34->item;
                                    litem_34->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count2(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 172 "./comelang2.h"
                                    self->tail=litem_34;
                                    # 173 "./comelang2.h"
                                    self->head->next=litem_34;
                                }
                                else {
                                    # 176 "./comelang2.h"
                                    litem_35=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value74=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 176, "list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 178 "./comelang2.h"
                                    litem_35->prev=self->tail;
                                    # 179 "./comelang2.h"
                                    litem_35->next=((void*)0);
                                    # 180 "./comelang2.h"
                                    __dec_obj26=litem_35->item;
                                    litem_35->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count2(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 182 "./comelang2.h"
                                    self->tail->next=litem_35;
                                    # 183 "./comelang2.h"
                                    self->tail=litem_35;
                                }
                            }
                            # 186 "./comelang2.h"
                            self->len++;
                            # 188 "./comelang2.h"
                            __result49__ = __result_obj__ = self;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result49__;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional60;
struct list$1charph* __result51__;
void* right_value78;
void* right_value79;
struct list$1charph* result_36;
struct list_item$1charph* it_37;
_Bool _while_condtional6;
void* right_value83;
struct list$1charph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value78 = (void*)0;
right_value79 = (void*)0;
memset(&result_36, 0, sizeof(struct list$1charph*));
memset(&it_37, 0, sizeof(struct list_item$1charph*));
right_value83 = (void*)0;
                    # 142 "./comelang2.h"
                    # 139 "./comelang2.h"
                    if(_if_conditional60=self==((void*)0),                    _if_conditional60) {
                        # 140 "./comelang2.h"
                        __result51__ = __result_obj__ = ((void*)0);
                        return __result51__;
                    }
                    # 142 "./comelang2.h"
                    result_36=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value79=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value78=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 142, "list$1charph"))))))));
                    come_call_finalizer2(list$1charphp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1charphp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 144 "./comelang2.h"
                    it_37=self->head;
                    # 151 "./comelang2.h"
                    while(_while_condtional6=it_37!=((void*)0),                    _while_condtional6) {
                        # 146 "./comelang2.h"
                        list$1charph_add(result_36,(char*)come_increment_ref_count(((char*)(right_value83=string_clone(it_37->item)))));
                        right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 148 "./comelang2.h"
                        it_37=it_37->next;
                    }
                    # 151 "./comelang2.h"
                    __result54__ = __result_obj__ = result_36;
                    come_call_finalizer2(list$1charphp_finalize,result_36, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result54__;
                    come_call_finalizer2(list$1charphp_finalize,result_36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 104 "./comelang2.h"
                        self->head=((void*)0);
                        # 105 "./comelang2.h"
                        self->tail=((void*)0);
                        # 106 "./comelang2.h"
                        self->len=0;
                        # 108 "./comelang2.h"
                        __result52__ = __result_obj__ = self;
                        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result52__;
                        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional61;
void* right_value80;
struct list_item$1charph* litem_38;
char* __dec_obj29;
_Bool _if_conditional62;
void* right_value81;
struct list_item$1charph* litem_39;
char* __dec_obj30;
void* right_value82;
struct list_item$1charph* litem_40;
char* __dec_obj31;
struct list$1charph* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
memset(&litem_38, 0, sizeof(struct list_item$1charph*));
right_value81 = (void*)0;
memset(&litem_39, 0, sizeof(struct list_item$1charph*));
right_value82 = (void*)0;
memset(&litem_40, 0, sizeof(struct list_item$1charph*));
                            # 186 "./comelang2.h"
                            # 155 "./comelang2.h"
                            if(_if_conditional61=self->len==0,                            _if_conditional61) {
                                # 156 "./comelang2.h"
                                litem_38=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value80=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 156, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 158 "./comelang2.h"
                                litem_38->prev=((void*)0);
                                # 159 "./comelang2.h"
                                litem_38->next=((void*)0);
                                # 160 "./comelang2.h"
                                __dec_obj29=litem_38->item;
                                litem_38->item=(char*)come_increment_ref_count(item);
                                __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 162 "./comelang2.h"
                                self->tail=litem_38;
                                # 163 "./comelang2.h"
                                self->head=litem_38;
                            }
                            else {
                                # 186 "./comelang2.h"
                                # 165 "./comelang2.h"
                                if(_if_conditional62=self->len==1,                                _if_conditional62) {
                                    # 166 "./comelang2.h"
                                    litem_39=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value81=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 166, "list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 168 "./comelang2.h"
                                    litem_39->prev=self->head;
                                    # 169 "./comelang2.h"
                                    litem_39->next=((void*)0);
                                    # 170 "./comelang2.h"
                                    __dec_obj30=litem_39->item;
                                    litem_39->item=(char*)come_increment_ref_count(item);
                                    __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    # 172 "./comelang2.h"
                                    self->tail=litem_39;
                                    # 173 "./comelang2.h"
                                    self->head->next=litem_39;
                                }
                                else {
                                    # 176 "./comelang2.h"
                                    litem_40=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value82=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 176, "list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 178 "./comelang2.h"
                                    litem_40->prev=self->tail;
                                    # 179 "./comelang2.h"
                                    litem_40->next=((void*)0);
                                    # 180 "./comelang2.h"
                                    __dec_obj31=litem_40->item;
                                    litem_40->item=(char*)come_increment_ref_count(item);
                                    __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    # 182 "./comelang2.h"
                                    self->tail->next=litem_40;
                                    # 183 "./comelang2.h"
                                    self->tail=litem_40;
                                }
                            }
                            # 186 "./comelang2.h"
                            self->len++;
                            # 188 "./comelang2.h"
                            __result53__ = __result_obj__ = self;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result53__;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional104;
void* right_value91;
struct list_item$1CVALUEph* litem_41;
struct CVALUE* __dec_obj39;
_Bool _if_conditional106;
void* right_value92;
struct list_item$1CVALUEph* litem_42;
struct CVALUE* __dec_obj40;
void* right_value93;
struct list_item$1CVALUEph* litem_43;
struct CVALUE* __dec_obj41;
struct list$1CVALUEph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value91 = (void*)0;
memset(&litem_41, 0, sizeof(struct list_item$1CVALUEph*));
right_value92 = (void*)0;
memset(&litem_42, 0, sizeof(struct list_item$1CVALUEph*));
right_value93 = (void*)0;
memset(&litem_43, 0, sizeof(struct list_item$1CVALUEph*));
            # 256 "./comelang2.h"
            # 225 "./comelang2.h"
            if(_if_conditional104=self->len==0,            _if_conditional104) {
                # 226 "./comelang2.h"
                litem_41=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value91=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 226, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 228 "./comelang2.h"
                litem_41->prev=((void*)0);
                # 229 "./comelang2.h"
                litem_41->next=((void*)0);
                # 230 "./comelang2.h"
                __dec_obj39=litem_41->item;
                litem_41->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 232 "./comelang2.h"
                self->tail=litem_41;
                # 233 "./comelang2.h"
                self->head=litem_41;
            }
            else {
                # 256 "./comelang2.h"
                # 235 "./comelang2.h"
                if(_if_conditional106=self->len==1,                _if_conditional106) {
                    # 236 "./comelang2.h"
                    litem_42=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value92=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 236, "list_item$1CVALUEph"))));
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 238 "./comelang2.h"
                    litem_42->prev=self->head;
                    # 239 "./comelang2.h"
                    litem_42->next=((void*)0);
                    # 240 "./comelang2.h"
                    __dec_obj40=litem_42->item;
                    litem_42->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer2(CVALUE_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 242 "./comelang2.h"
                    self->tail=litem_42;
                    # 243 "./comelang2.h"
                    self->head->next=litem_42;
                }
                else {
                    # 246 "./comelang2.h"
                    litem_43=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value93=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 246, "list_item$1CVALUEph"))));
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 248 "./comelang2.h"
                    litem_43->prev=self->tail;
                    # 249 "./comelang2.h"
                    litem_43->next=((void*)0);
                    # 250 "./comelang2.h"
                    __dec_obj41=litem_43->item;
                    litem_43->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer2(CVALUE_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 252 "./comelang2.h"
                    self->tail->next=litem_43;
                    # 253 "./comelang2.h"
                    self->tail=litem_43;
                }
            }
            # 256 "./comelang2.h"
            self->len++;
            # 258 "./comelang2.h"
            __result56__ = __result_obj__ = self;
            come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result56__;
            come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional105;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "list_item$1CVALUEphp_finalize"
                    # 0 "list_item$1CVALUEphp_finalize"
                    if(_if_conditional105=self!=((void*)0)&&self->item!=((void*)0),                    _if_conditional105) {
                        # 0 "list_item$1CVALUEphp_finalize"
                        come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

int sPlusPlusNode_sline(struct sPlusPlusNode* self, struct sInfo* info){
void* __result_obj__;
int __result58__;
memset(&__result_obj__, 0, sizeof(void*));
    # 73 "19eq.c"
    __result58__ = self->sline;
    return __result58__;
}

char* sPlusPlusNode_sname(struct sPlusPlusNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value94;
char* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
right_value94 = (void*)0;
    # 78 "19eq.c"
    __result59__ = __result_obj__ = ((char*)(right_value94=__builtin_string(self->sname)));
    right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result59__;
}

struct sMinusMinusNode* sMinusMinusNode_initialize(struct sMinusMinusNode* self, struct sNode* left, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value95;
char* __dec_obj42;
void* right_value96;
struct sNode* __dec_obj43;
struct sMinusMinusNode* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value95 = (void*)0;
right_value96 = (void*)0;
    # 92 "19eq.c"
    self->sline=info->sline;
    # 93 "19eq.c"
    __dec_obj42=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value95=__builtin_string(info->sname))));
    __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 95 "19eq.c"
    __dec_obj43=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value96=sNode_clone(left))));
    if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count2(__dec_obj43, ((struct sNode*)__dec_obj43)->finalize, ((struct sNode*)__dec_obj43)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value96) { right_value96 = come_decrement_ref_count2(right_value96, ((struct sNode*)right_value96)->finalize, ((struct sNode*)right_value96)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 96 "19eq.c"
    self->mQuote=quote;
    # 98 "19eq.c"
    __result60__ = __result_obj__ = self;
    come_call_finalizer2(sMinusMinusNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result60__;
    come_call_finalizer2(sMinusMinusNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sMinusMinusNode_terminated(){
void* __result_obj__;
_Bool __result61__;
memset(&__result_obj__, 0, sizeof(void*));
    # 103 "19eq.c"
    __result61__ = (_Bool)0;
    return __result61__;
}

char* sMinusMinusNode_kind(){
void* __result_obj__;
void* right_value97;
char* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
right_value97 = (void*)0;
    # 108 "19eq.c"
    __result62__ = __result_obj__ = ((char*)(right_value97=__builtin_string("sMinusMinusNode")));
    right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result62__;
}

_Bool sMinusMinusNode_compile(struct sMinusMinusNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_44;
_Bool _if_conditional109;
_Bool __result63__;
void* right_value98;
struct CVALUE* left_value_45;
struct sType* type_46;
char* fun_name_47;
_Bool calling_fun_48;
_Bool _if_conditional110;
_Bool _if_conditional111;
void* right_value99;
struct CVALUE* come_value_49;
void* right_value100;
char* __dec_obj44;
void* right_value101;
struct sType* __dec_obj45;
_Bool __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_44, 0, sizeof(struct sNode*));
right_value98 = (void*)0;
memset(&left_value_45, 0, sizeof(struct CVALUE*));
memset(&type_46, 0, sizeof(struct sType*));
memset(&fun_name_47, 0, sizeof(char*));
memset(&calling_fun_48, 0, sizeof(_Bool));
right_value99 = (void*)0;
memset(&come_value_49, 0, sizeof(struct CVALUE*));
right_value100 = (void*)0;
right_value101 = (void*)0;
    # 113 "19eq.c"
    left_44=self->mLeft;
    # 119 "19eq.c"
    # 115 "19eq.c"
    if(_if_conditional109=!node_compile(left_44,info),    _if_conditional109) {
        # 116 "19eq.c"
        __result63__ = (_Bool)0;
        return __result63__;
    }
    # 119 "19eq.c"
    left_value_45=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value98=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 120 "19eq.c"
    dec_stack_ptr(1,info);
    # 122 "19eq.c"
    type_46=(struct sType*)come_increment_ref_count(left_value_45->type);
    # 124 "19eq.c"
    fun_name_47="operator_minus_minus";
    # 126 "19eq.c"
    # 134 "19eq.c"
    # 127 "19eq.c"
    if(self->mQuote) {
        # 128 "19eq.c"
        calling_fun_48=(_Bool)0;
    }
    else {
        # 131 "19eq.c"
        calling_fun_48=operator_overload_fun_self(type_46,fun_name_47,left_value_45,info);
    }
    # 146 "19eq.c"
    # 134 "19eq.c"
    if(_if_conditional111=!calling_fun_48,    _if_conditional111) {
        # 135 "19eq.c"
        come_value_49=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value99=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 135, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 137 "19eq.c"
        __dec_obj44=come_value_49->c_value;
        come_value_49->c_value=(char*)come_increment_ref_count(((char*)(right_value100=xsprintf("%s--",left_value_45->c_value))));
        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 138 "19eq.c"
        __dec_obj45=come_value_49->type;
        come_value_49->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value101=sType_clone(left_value_45->type))));
        come_call_finalizer2(sType_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 139 "19eq.c"
        come_value_49->var=((void*)0);
        # 141 "19eq.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_49));
        # 143 "19eq.c"
        add_come_last_code(info,"%s;\n",come_value_49->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 146 "19eq.c"
    __result64__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result64__;
    come_call_finalizer2(CVALUE_finalize,left_value_45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sMinusMinusNode_sline(struct sMinusMinusNode* self, struct sInfo* info){
void* __result_obj__;
int __result65__;
memset(&__result_obj__, 0, sizeof(void*));
    # 151 "19eq.c"
    __result65__ = self->sline;
    return __result65__;
}

char* sMinusMinusNode_sname(struct sMinusMinusNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value102;
char* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
right_value102 = (void*)0;
    # 156 "19eq.c"
    __result66__ = __result_obj__ = ((char*)(right_value102=__builtin_string(self->sname)));
    right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result66__;
}

struct sPlusEqualNode* sPlusEqualNode_initialize(struct sPlusEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value103;
char* __dec_obj46;
void* right_value104;
struct sNode* __dec_obj47;
void* right_value105;
struct sNode* __dec_obj48;
struct sPlusEqualNode* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value103 = (void*)0;
right_value104 = (void*)0;
right_value105 = (void*)0;
    # 171 "19eq.c"
    self->sline=info->sline;
    # 172 "19eq.c"
    __dec_obj46=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value103=__builtin_string(info->sname))));
    __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 174 "19eq.c"
    __dec_obj47=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value104=sNode_clone(left))));
    if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count2(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value104) { right_value104 = come_decrement_ref_count2(right_value104, ((struct sNode*)right_value104)->finalize, ((struct sNode*)right_value104)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 175 "19eq.c"
    __dec_obj48=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value105=sNode_clone(right))));
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value105) { right_value105 = come_decrement_ref_count2(right_value105, ((struct sNode*)right_value105)->finalize, ((struct sNode*)right_value105)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 176 "19eq.c"
    self->mQuote=quote;
    # 178 "19eq.c"
    __result67__ = __result_obj__ = self;
    come_call_finalizer2(sPlusEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result67__;
    come_call_finalizer2(sPlusEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sPlusEqualNode_terminated(){
void* __result_obj__;
_Bool __result68__;
memset(&__result_obj__, 0, sizeof(void*));
    # 183 "19eq.c"
    __result68__ = (_Bool)0;
    return __result68__;
}

char* sPlusEqualNode_kind(){
void* __result_obj__;
void* right_value106;
char* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
    # 188 "19eq.c"
    __result69__ = __result_obj__ = ((char*)(right_value106=__builtin_string("sPlusEqualNode")));
    right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result69__;
}

_Bool sPlusEqualNode_compile(struct sPlusEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_50;
_Bool _if_conditional115;
_Bool __result70__;
void* right_value107;
struct CVALUE* left_value_51;
struct sNode* right_52;
_Bool _if_conditional116;
_Bool __result71__;
void* right_value108;
struct CVALUE* right_value_53;
struct sType* type_54;
char* fun_name_55;
_Bool calling_fun_56;
_Bool _if_conditional117;
_Bool _if_conditional118;
void* right_value109;
struct CVALUE* come_value_57;
void* right_value110;
char* __dec_obj49;
void* right_value111;
struct sType* __dec_obj50;
_Bool __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_50, 0, sizeof(struct sNode*));
right_value107 = (void*)0;
memset(&left_value_51, 0, sizeof(struct CVALUE*));
memset(&right_52, 0, sizeof(struct sNode*));
right_value108 = (void*)0;
memset(&right_value_53, 0, sizeof(struct CVALUE*));
memset(&type_54, 0, sizeof(struct sType*));
memset(&fun_name_55, 0, sizeof(char*));
memset(&calling_fun_56, 0, sizeof(_Bool));
right_value109 = (void*)0;
memset(&come_value_57, 0, sizeof(struct CVALUE*));
right_value110 = (void*)0;
right_value111 = (void*)0;
    # 193 "19eq.c"
    left_50=self->mLeft;
    # 199 "19eq.c"
    # 195 "19eq.c"
    if(_if_conditional115=!node_compile(left_50,info),    _if_conditional115) {
        # 196 "19eq.c"
        __result70__ = (_Bool)0;
        return __result70__;
    }
    # 199 "19eq.c"
    left_value_51=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value107=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 200 "19eq.c"
    dec_stack_ptr(1,info);
    # 202 "19eq.c"
    right_52=self->mRight;
    # 208 "19eq.c"
    # 204 "19eq.c"
    if(_if_conditional116=!node_compile(right_52,info),    _if_conditional116) {
        # 205 "19eq.c"
        __result71__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result71__;
    }
    # 208 "19eq.c"
    right_value_53=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value108=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 209 "19eq.c"
    dec_stack_ptr(1,info);
    # 211 "19eq.c"
    type_54=(struct sType*)come_increment_ref_count(left_value_51->type);
    # 213 "19eq.c"
    fun_name_55="operator_plus_equal";
    # 214 "19eq.c"
    # 222 "19eq.c"
    # 215 "19eq.c"
    if(self->mQuote) {
        # 216 "19eq.c"
        calling_fun_56=(_Bool)0;
    }
    else {
        # 219 "19eq.c"
        calling_fun_56=operator_overload_fun(type_54,fun_name_55,left_value_51,right_value_53,(_Bool)0,info);
    }
    # 234 "19eq.c"
    # 222 "19eq.c"
    if(_if_conditional118=!calling_fun_56,    _if_conditional118) {
        # 223 "19eq.c"
        come_value_57=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value109=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 223, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 225 "19eq.c"
        __dec_obj49=come_value_57->c_value;
        come_value_57->c_value=(char*)come_increment_ref_count(((char*)(right_value110=xsprintf("%s+=%s",left_value_51->c_value,right_value_53->c_value))));
        __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 226 "19eq.c"
        __dec_obj50=come_value_57->type;
        come_value_57->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value111=sType_clone(left_value_51->type))));
        come_call_finalizer2(sType_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 227 "19eq.c"
        come_value_57->var=((void*)0);
        # 229 "19eq.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_57));
        # 231 "19eq.c"
        add_come_last_code(info,"%s;\n",come_value_57->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 234 "19eq.c"
    __result72__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result72__;
    come_call_finalizer2(CVALUE_finalize,left_value_51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sPlusEqualNode_sline(struct sPlusEqualNode* self, struct sInfo* info){
void* __result_obj__;
int __result73__;
memset(&__result_obj__, 0, sizeof(void*));
    # 239 "19eq.c"
    __result73__ = self->sline;
    return __result73__;
}

char* sPlusEqualNode_sname(struct sPlusEqualNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value112;
char* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value112 = (void*)0;
    # 244 "19eq.c"
    __result74__ = __result_obj__ = ((char*)(right_value112=__builtin_string(self->sname)));
    right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result74__;
}

struct sMinusEqualNode* sMinusEqualNode_initialize(struct sMinusEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value113;
char* __dec_obj51;
void* right_value114;
struct sNode* __dec_obj52;
void* right_value115;
struct sNode* __dec_obj53;
struct sMinusEqualNode* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
    # 259 "19eq.c"
    self->sline=info->sline;
    # 260 "19eq.c"
    __dec_obj51=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value113=__builtin_string(info->sname))));
    __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 261 "19eq.c"
    self->mQuote=quote;
    # 263 "19eq.c"
    __dec_obj52=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value114=sNode_clone(left))));
    if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count2(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value114) { right_value114 = come_decrement_ref_count2(right_value114, ((struct sNode*)right_value114)->finalize, ((struct sNode*)right_value114)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 264 "19eq.c"
    __dec_obj53=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value115=sNode_clone(right))));
    if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count2(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value115) { right_value115 = come_decrement_ref_count2(right_value115, ((struct sNode*)right_value115)->finalize, ((struct sNode*)right_value115)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 266 "19eq.c"
    __result75__ = __result_obj__ = self;
    come_call_finalizer2(sMinusEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result75__;
    come_call_finalizer2(sMinusEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sMinusEqualNode_terminated(){
void* __result_obj__;
_Bool __result76__;
memset(&__result_obj__, 0, sizeof(void*));
    # 271 "19eq.c"
    __result76__ = (_Bool)0;
    return __result76__;
}

char* sMinusEqualNode_kind(){
void* __result_obj__;
void* right_value116;
char* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value116 = (void*)0;
    # 276 "19eq.c"
    __result77__ = __result_obj__ = ((char*)(right_value116=__builtin_string("sPlusEqualNode")));
    right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result77__;
}

_Bool sMinusEqualNode_compile(struct sMinusEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_58;
_Bool _if_conditional122;
_Bool __result78__;
void* right_value117;
struct CVALUE* left_value_59;
struct sNode* right_60;
_Bool _if_conditional123;
_Bool __result79__;
void* right_value118;
struct CVALUE* right_value_61;
struct sType* type_62;
char* fun_name_63;
_Bool calling_fun_64;
_Bool _if_conditional124;
_Bool _if_conditional125;
void* right_value119;
struct CVALUE* come_value_65;
void* right_value120;
char* __dec_obj54;
void* right_value121;
struct sType* __dec_obj55;
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_58, 0, sizeof(struct sNode*));
right_value117 = (void*)0;
memset(&left_value_59, 0, sizeof(struct CVALUE*));
memset(&right_60, 0, sizeof(struct sNode*));
right_value118 = (void*)0;
memset(&right_value_61, 0, sizeof(struct CVALUE*));
memset(&type_62, 0, sizeof(struct sType*));
memset(&fun_name_63, 0, sizeof(char*));
memset(&calling_fun_64, 0, sizeof(_Bool));
right_value119 = (void*)0;
memset(&come_value_65, 0, sizeof(struct CVALUE*));
right_value120 = (void*)0;
right_value121 = (void*)0;
    # 281 "19eq.c"
    left_58=self->mLeft;
    # 287 "19eq.c"
    # 283 "19eq.c"
    if(_if_conditional122=!node_compile(left_58,info),    _if_conditional122) {
        # 284 "19eq.c"
        __result78__ = (_Bool)0;
        return __result78__;
    }
    # 287 "19eq.c"
    left_value_59=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value117=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 288 "19eq.c"
    dec_stack_ptr(1,info);
    # 290 "19eq.c"
    right_60=self->mRight;
    # 296 "19eq.c"
    # 292 "19eq.c"
    if(_if_conditional123=!node_compile(right_60,info),    _if_conditional123) {
        # 293 "19eq.c"
        __result79__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result79__;
    }
    # 296 "19eq.c"
    right_value_61=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value118=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 297 "19eq.c"
    dec_stack_ptr(1,info);
    # 299 "19eq.c"
    type_62=(struct sType*)come_increment_ref_count(left_value_59->type);
    # 301 "19eq.c"
    fun_name_63="operator_minus_equal";
    # 302 "19eq.c"
    # 310 "19eq.c"
    # 303 "19eq.c"
    if(self->mQuote) {
        # 304 "19eq.c"
        calling_fun_64=(_Bool)0;
    }
    else {
        # 307 "19eq.c"
        calling_fun_64=operator_overload_fun(type_62,fun_name_63,left_value_59,right_value_61,(_Bool)0,info);
    }
    # 322 "19eq.c"
    # 310 "19eq.c"
    if(_if_conditional125=!calling_fun_64,    _if_conditional125) {
        # 311 "19eq.c"
        come_value_65=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value119=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 311, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 313 "19eq.c"
        __dec_obj54=come_value_65->c_value;
        come_value_65->c_value=(char*)come_increment_ref_count(((char*)(right_value120=xsprintf("%s-=%s",left_value_59->c_value,right_value_61->c_value))));
        __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 314 "19eq.c"
        __dec_obj55=come_value_65->type;
        come_value_65->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value121=sType_clone(left_value_59->type))));
        come_call_finalizer2(sType_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 315 "19eq.c"
        come_value_65->var=((void*)0);
        # 317 "19eq.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_65));
        # 319 "19eq.c"
        add_come_last_code(info,"%s;\n",come_value_65->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 322 "19eq.c"
    __result80__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result80__;
    come_call_finalizer2(CVALUE_finalize,left_value_59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sMinusEqualNode_sline(struct sMinusEqualNode* self, struct sInfo* info){
void* __result_obj__;
int __result81__;
memset(&__result_obj__, 0, sizeof(void*));
    # 327 "19eq.c"
    __result81__ = self->sline;
    return __result81__;
}

char* sMinusEqualNode_sname(struct sMinusEqualNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value122;
char* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
right_value122 = (void*)0;
    # 332 "19eq.c"
    __result82__ = __result_obj__ = ((char*)(right_value122=__builtin_string(self->sname)));
    right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result82__;
}

struct sMultEqualNode* sMultEqualNode_initialize(struct sMultEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value123;
char* __dec_obj56;
void* right_value124;
struct sNode* __dec_obj57;
void* right_value125;
struct sNode* __dec_obj58;
struct sMultEqualNode* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value123 = (void*)0;
right_value124 = (void*)0;
right_value125 = (void*)0;
    # 347 "19eq.c"
    self->sline=info->sline;
    # 348 "19eq.c"
    __dec_obj56=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value123=__builtin_string(info->sname))));
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 349 "19eq.c"
    self->mQuote=quote;
    # 351 "19eq.c"
    __dec_obj57=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value124=sNode_clone(left))));
    if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count2(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value124) { right_value124 = come_decrement_ref_count2(right_value124, ((struct sNode*)right_value124)->finalize, ((struct sNode*)right_value124)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 352 "19eq.c"
    __dec_obj58=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value125=sNode_clone(right))));
    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count2(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value125) { right_value125 = come_decrement_ref_count2(right_value125, ((struct sNode*)right_value125)->finalize, ((struct sNode*)right_value125)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 354 "19eq.c"
    __result83__ = __result_obj__ = self;
    come_call_finalizer2(sMultEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result83__;
    come_call_finalizer2(sMultEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sMultEqualNode_terminated(){
void* __result_obj__;
_Bool __result84__;
memset(&__result_obj__, 0, sizeof(void*));
    # 359 "19eq.c"
    __result84__ = (_Bool)0;
    return __result84__;
}

char* sMultEqualNode_kind(){
void* __result_obj__;
void* right_value126;
char* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value126 = (void*)0;
    # 364 "19eq.c"
    __result85__ = __result_obj__ = ((char*)(right_value126=__builtin_string("sMultEqualNode")));
    right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result85__;
}

_Bool sMultEqualNode_compile(struct sMultEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_66;
_Bool _if_conditional129;
_Bool __result86__;
void* right_value127;
struct CVALUE* left_value_67;
struct sNode* right_68;
_Bool _if_conditional130;
_Bool __result87__;
void* right_value128;
struct CVALUE* right_value_69;
struct sType* type_70;
char* fun_name_71;
_Bool calling_fun_72;
_Bool _if_conditional131;
_Bool _if_conditional132;
void* right_value129;
struct CVALUE* come_value_73;
void* right_value130;
char* __dec_obj59;
void* right_value131;
struct sType* __dec_obj60;
_Bool __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_66, 0, sizeof(struct sNode*));
right_value127 = (void*)0;
memset(&left_value_67, 0, sizeof(struct CVALUE*));
memset(&right_68, 0, sizeof(struct sNode*));
right_value128 = (void*)0;
memset(&right_value_69, 0, sizeof(struct CVALUE*));
memset(&type_70, 0, sizeof(struct sType*));
memset(&fun_name_71, 0, sizeof(char*));
memset(&calling_fun_72, 0, sizeof(_Bool));
right_value129 = (void*)0;
memset(&come_value_73, 0, sizeof(struct CVALUE*));
right_value130 = (void*)0;
right_value131 = (void*)0;
    # 369 "19eq.c"
    left_66=self->mLeft;
    # 375 "19eq.c"
    # 371 "19eq.c"
    if(_if_conditional129=!node_compile(left_66,info),    _if_conditional129) {
        # 372 "19eq.c"
        __result86__ = (_Bool)0;
        return __result86__;
    }
    # 375 "19eq.c"
    left_value_67=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value127=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 376 "19eq.c"
    dec_stack_ptr(1,info);
    # 378 "19eq.c"
    right_68=self->mRight;
    # 384 "19eq.c"
    # 380 "19eq.c"
    if(_if_conditional130=!node_compile(right_68,info),    _if_conditional130) {
        # 381 "19eq.c"
        __result87__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result87__;
    }
    # 384 "19eq.c"
    right_value_69=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value128=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 385 "19eq.c"
    dec_stack_ptr(1,info);
    # 387 "19eq.c"
    type_70=(struct sType*)come_increment_ref_count(left_value_67->type);
    # 389 "19eq.c"
    fun_name_71="operator_mult_equal";
    # 390 "19eq.c"
    # 398 "19eq.c"
    # 391 "19eq.c"
    if(self->mQuote) {
        # 392 "19eq.c"
        calling_fun_72=(_Bool)0;
    }
    else {
        # 395 "19eq.c"
        calling_fun_72=operator_overload_fun(type_70,fun_name_71,left_value_67,right_value_69,(_Bool)0,info);
    }
    # 410 "19eq.c"
    # 398 "19eq.c"
    if(_if_conditional132=!calling_fun_72,    _if_conditional132) {
        # 399 "19eq.c"
        come_value_73=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value129=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 399, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 401 "19eq.c"
        __dec_obj59=come_value_73->c_value;
        come_value_73->c_value=(char*)come_increment_ref_count(((char*)(right_value130=xsprintf("%s*=%s",left_value_67->c_value,right_value_69->c_value))));
        __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 402 "19eq.c"
        __dec_obj60=come_value_73->type;
        come_value_73->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value131=sType_clone(left_value_67->type))));
        come_call_finalizer2(sType_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 403 "19eq.c"
        come_value_73->var=((void*)0);
        # 405 "19eq.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_73));
        # 407 "19eq.c"
        add_come_last_code(info,"%s;\n",come_value_73->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 410 "19eq.c"
    __result88__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_69, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result88__;
    come_call_finalizer2(CVALUE_finalize,left_value_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_69, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sMultEqualNode_sline(struct sMultEqualNode* self, struct sInfo* info){
void* __result_obj__;
int __result89__;
memset(&__result_obj__, 0, sizeof(void*));
    # 415 "19eq.c"
    __result89__ = self->sline;
    return __result89__;
}

char* sMultEqualNode_sname(struct sMultEqualNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value132;
char* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value132 = (void*)0;
    # 420 "19eq.c"
    __result90__ = __result_obj__ = ((char*)(right_value132=__builtin_string(self->sname)));
    right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result90__;
}

struct sDivEqualNode* sDivEqualNode_initialize(struct sDivEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value133;
char* __dec_obj61;
void* right_value134;
struct sNode* __dec_obj62;
void* right_value135;
struct sNode* __dec_obj63;
struct sDivEqualNode* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value133 = (void*)0;
right_value134 = (void*)0;
right_value135 = (void*)0;
    # 435 "19eq.c"
    self->sline=info->sline;
    # 436 "19eq.c"
    __dec_obj61=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value133=__builtin_string(info->sname))));
    __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 437 "19eq.c"
    self->mQuote=quote;
    # 439 "19eq.c"
    __dec_obj62=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value134=sNode_clone(left))));
    if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count2(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value134) { right_value134 = come_decrement_ref_count2(right_value134, ((struct sNode*)right_value134)->finalize, ((struct sNode*)right_value134)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 440 "19eq.c"
    __dec_obj63=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value135=sNode_clone(right))));
    if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count2(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value135) { right_value135 = come_decrement_ref_count2(right_value135, ((struct sNode*)right_value135)->finalize, ((struct sNode*)right_value135)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 442 "19eq.c"
    __result91__ = __result_obj__ = self;
    come_call_finalizer2(sDivEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result91__;
    come_call_finalizer2(sDivEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sDivEqualNode_terminated(){
void* __result_obj__;
_Bool __result92__;
memset(&__result_obj__, 0, sizeof(void*));
    # 447 "19eq.c"
    __result92__ = (_Bool)0;
    return __result92__;
}

char* sDivEqualNode_kind(){
void* __result_obj__;
void* right_value136;
char* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
right_value136 = (void*)0;
    # 452 "19eq.c"
    __result93__ = __result_obj__ = ((char*)(right_value136=__builtin_string("sDivEqualNode")));
    right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result93__;
}

_Bool sDivEqualNode_compile(struct sDivEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_74;
_Bool _if_conditional136;
_Bool __result94__;
void* right_value137;
struct CVALUE* left_value_75;
struct sNode* right_76;
_Bool _if_conditional137;
_Bool __result95__;
void* right_value138;
struct CVALUE* right_value_77;
struct sType* type_78;
char* fun_name_79;
_Bool calling_fun_80;
_Bool _if_conditional138;
_Bool _if_conditional139;
void* right_value139;
struct CVALUE* come_value_81;
void* right_value140;
char* __dec_obj64;
void* right_value141;
struct sType* __dec_obj65;
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_74, 0, sizeof(struct sNode*));
right_value137 = (void*)0;
memset(&left_value_75, 0, sizeof(struct CVALUE*));
memset(&right_76, 0, sizeof(struct sNode*));
right_value138 = (void*)0;
memset(&right_value_77, 0, sizeof(struct CVALUE*));
memset(&type_78, 0, sizeof(struct sType*));
memset(&fun_name_79, 0, sizeof(char*));
memset(&calling_fun_80, 0, sizeof(_Bool));
right_value139 = (void*)0;
memset(&come_value_81, 0, sizeof(struct CVALUE*));
right_value140 = (void*)0;
right_value141 = (void*)0;
    # 457 "19eq.c"
    left_74=self->mLeft;
    # 463 "19eq.c"
    # 459 "19eq.c"
    if(_if_conditional136=!node_compile(left_74,info),    _if_conditional136) {
        # 460 "19eq.c"
        __result94__ = (_Bool)0;
        return __result94__;
    }
    # 463 "19eq.c"
    left_value_75=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value137=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 464 "19eq.c"
    dec_stack_ptr(1,info);
    # 466 "19eq.c"
    right_76=self->mRight;
    # 472 "19eq.c"
    # 468 "19eq.c"
    if(_if_conditional137=!node_compile(right_76,info),    _if_conditional137) {
        # 469 "19eq.c"
        __result95__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result95__;
    }
    # 472 "19eq.c"
    right_value_77=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value138=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 473 "19eq.c"
    dec_stack_ptr(1,info);
    # 475 "19eq.c"
    type_78=(struct sType*)come_increment_ref_count(left_value_75->type);
    # 477 "19eq.c"
    fun_name_79="operator_div_equal";
    # 478 "19eq.c"
    # 486 "19eq.c"
    # 479 "19eq.c"
    if(self->mQuote) {
        # 480 "19eq.c"
        calling_fun_80=(_Bool)0;
    }
    else {
        # 483 "19eq.c"
        calling_fun_80=operator_overload_fun(type_78,fun_name_79,left_value_75,right_value_77,(_Bool)0,info);
    }
    # 498 "19eq.c"
    # 486 "19eq.c"
    if(_if_conditional139=!calling_fun_80,    _if_conditional139) {
        # 487 "19eq.c"
        come_value_81=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value139=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 487, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 489 "19eq.c"
        __dec_obj64=come_value_81->c_value;
        come_value_81->c_value=(char*)come_increment_ref_count(((char*)(right_value140=xsprintf("%s/=%s",left_value_75->c_value,right_value_77->c_value))));
        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 490 "19eq.c"
        __dec_obj65=come_value_81->type;
        come_value_81->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value141=sType_clone(left_value_75->type))));
        come_call_finalizer2(sType_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 491 "19eq.c"
        come_value_81->var=((void*)0);
        # 493 "19eq.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_81));
        # 495 "19eq.c"
        add_come_last_code(info,"%s;\n",come_value_81->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 498 "19eq.c"
    __result96__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result96__;
    come_call_finalizer2(CVALUE_finalize,left_value_75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sDivEqualNode_sline(struct sDivEqualNode* self, struct sInfo* info){
void* __result_obj__;
int __result97__;
memset(&__result_obj__, 0, sizeof(void*));
    # 503 "19eq.c"
    __result97__ = self->sline;
    return __result97__;
}

char* sDivEqualNode_sname(struct sDivEqualNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value142;
char* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
right_value142 = (void*)0;
    # 508 "19eq.c"
    __result98__ = __result_obj__ = ((char*)(right_value142=__builtin_string(self->sname)));
    right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result98__;
}

struct sModEqualNode* sModEqualNode_initialize(struct sModEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value143;
char* __dec_obj66;
void* right_value144;
struct sNode* __dec_obj67;
void* right_value145;
struct sNode* __dec_obj68;
struct sModEqualNode* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
    # 523 "19eq.c"
    self->sline=info->sline;
    # 524 "19eq.c"
    __dec_obj66=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value143=__builtin_string(info->sname))));
    __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 525 "19eq.c"
    self->mQuote=quote;
    # 527 "19eq.c"
    __dec_obj67=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value144=sNode_clone(left))));
    if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count2(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value144) { right_value144 = come_decrement_ref_count2(right_value144, ((struct sNode*)right_value144)->finalize, ((struct sNode*)right_value144)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 528 "19eq.c"
    __dec_obj68=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value145=sNode_clone(right))));
    if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value145) { right_value145 = come_decrement_ref_count2(right_value145, ((struct sNode*)right_value145)->finalize, ((struct sNode*)right_value145)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 530 "19eq.c"
    __result99__ = __result_obj__ = self;
    come_call_finalizer2(sModEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result99__;
    come_call_finalizer2(sModEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sModEqualNode_terminated(){
void* __result_obj__;
_Bool __result100__;
memset(&__result_obj__, 0, sizeof(void*));
    # 535 "19eq.c"
    __result100__ = (_Bool)0;
    return __result100__;
}

char* sModEqualNode_kind(){
void* __result_obj__;
void* right_value146;
char* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value146 = (void*)0;
    # 540 "19eq.c"
    __result101__ = __result_obj__ = ((char*)(right_value146=__builtin_string("sModEqualNode")));
    right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result101__;
}

_Bool sModEqualNode_compile(struct sModEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_82;
_Bool _if_conditional143;
_Bool __result102__;
void* right_value147;
struct CVALUE* left_value_83;
struct sNode* right_84;
_Bool _if_conditional144;
_Bool __result103__;
void* right_value148;
struct CVALUE* right_value_85;
struct sType* type_86;
char* fun_name_87;
_Bool calling_fun_88;
_Bool _if_conditional145;
_Bool _if_conditional146;
void* right_value149;
struct CVALUE* come_value_89;
void* right_value150;
char* __dec_obj69;
void* right_value151;
struct sType* __dec_obj70;
_Bool __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_82, 0, sizeof(struct sNode*));
right_value147 = (void*)0;
memset(&left_value_83, 0, sizeof(struct CVALUE*));
memset(&right_84, 0, sizeof(struct sNode*));
right_value148 = (void*)0;
memset(&right_value_85, 0, sizeof(struct CVALUE*));
memset(&type_86, 0, sizeof(struct sType*));
memset(&fun_name_87, 0, sizeof(char*));
memset(&calling_fun_88, 0, sizeof(_Bool));
right_value149 = (void*)0;
memset(&come_value_89, 0, sizeof(struct CVALUE*));
right_value150 = (void*)0;
right_value151 = (void*)0;
    # 545 "19eq.c"
    left_82=self->mLeft;
    # 551 "19eq.c"
    # 547 "19eq.c"
    if(_if_conditional143=!node_compile(left_82,info),    _if_conditional143) {
        # 548 "19eq.c"
        __result102__ = (_Bool)0;
        return __result102__;
    }
    # 551 "19eq.c"
    left_value_83=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value147=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 552 "19eq.c"
    dec_stack_ptr(1,info);
    # 554 "19eq.c"
    right_84=self->mRight;
    # 560 "19eq.c"
    # 556 "19eq.c"
    if(_if_conditional144=!node_compile(right_84,info),    _if_conditional144) {
        # 557 "19eq.c"
        __result103__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result103__;
    }
    # 560 "19eq.c"
    right_value_85=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value148=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 561 "19eq.c"
    dec_stack_ptr(1,info);
    # 563 "19eq.c"
    type_86=(struct sType*)come_increment_ref_count(left_value_83->type);
    # 565 "19eq.c"
    fun_name_87="operator_mod_equal";
    # 566 "19eq.c"
    # 574 "19eq.c"
    # 567 "19eq.c"
    if(self->mQuote) {
        # 568 "19eq.c"
        calling_fun_88=(_Bool)0;
    }
    else {
        # 571 "19eq.c"
        calling_fun_88=operator_overload_fun(type_86,fun_name_87,left_value_83,right_value_85,(_Bool)0,info);
    }
    # 586 "19eq.c"
    # 574 "19eq.c"
    if(_if_conditional146=!calling_fun_88,    _if_conditional146) {
        # 575 "19eq.c"
        come_value_89=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value149=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 575, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 577 "19eq.c"
        __dec_obj69=come_value_89->c_value;
        come_value_89->c_value=(char*)come_increment_ref_count(((char*)(right_value150=xsprintf("%s%%=%s",left_value_83->c_value,right_value_85->c_value))));
        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 578 "19eq.c"
        __dec_obj70=come_value_89->type;
        come_value_89->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value151=sType_clone(left_value_83->type))));
        come_call_finalizer2(sType_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 579 "19eq.c"
        come_value_89->var=((void*)0);
        # 581 "19eq.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_89));
        # 583 "19eq.c"
        add_come_last_code(info,"%s;\n",come_value_89->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 586 "19eq.c"
    __result104__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result104__;
    come_call_finalizer2(CVALUE_finalize,left_value_83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sModEqualNode_sline(struct sModEqualNode* self, struct sInfo* info){
void* __result_obj__;
int __result105__;
memset(&__result_obj__, 0, sizeof(void*));
    # 591 "19eq.c"
    __result105__ = self->sline;
    return __result105__;
}

char* sModEqualNode_sname(struct sModEqualNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value152;
char* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
right_value152 = (void*)0;
    # 596 "19eq.c"
    __result106__ = __result_obj__ = ((char*)(right_value152=__builtin_string(self->sname)));
    right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result106__;
}

struct sLShifEqualNode* sLShifEqualNode_initialize(struct sLShifEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value153;
char* __dec_obj71;
void* right_value154;
struct sNode* __dec_obj72;
void* right_value155;
struct sNode* __dec_obj73;
struct sLShifEqualNode* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
right_value153 = (void*)0;
right_value154 = (void*)0;
right_value155 = (void*)0;
    # 611 "19eq.c"
    self->sline=info->sline;
    # 612 "19eq.c"
    __dec_obj71=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value153=__builtin_string(info->sname))));
    __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 613 "19eq.c"
    self->mQuote=quote;
    # 615 "19eq.c"
    __dec_obj72=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value154=sNode_clone(left))));
    if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count2(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value154) { right_value154 = come_decrement_ref_count2(right_value154, ((struct sNode*)right_value154)->finalize, ((struct sNode*)right_value154)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 616 "19eq.c"
    __dec_obj73=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value155=sNode_clone(right))));
    if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value155) { right_value155 = come_decrement_ref_count2(right_value155, ((struct sNode*)right_value155)->finalize, ((struct sNode*)right_value155)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 618 "19eq.c"
    __result107__ = __result_obj__ = self;
    come_call_finalizer2(sLShifEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result107__;
    come_call_finalizer2(sLShifEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sLShifEqualNode_terminated(){
void* __result_obj__;
_Bool __result108__;
memset(&__result_obj__, 0, sizeof(void*));
    # 623 "19eq.c"
    __result108__ = (_Bool)0;
    return __result108__;
}

char* sLShifEqualNode_kind(){
void* __result_obj__;
void* right_value156;
char* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
right_value156 = (void*)0;
    # 629 "19eq.c"
    __result109__ = __result_obj__ = ((char*)(right_value156=__builtin_string("sLShifEqualNode")));
    right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result109__;
}

_Bool sLShifEqualNode_compile(struct sLShifEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_90;
_Bool _if_conditional150;
_Bool __result110__;
void* right_value157;
struct CVALUE* left_value_91;
struct sNode* right_92;
_Bool _if_conditional151;
_Bool __result111__;
void* right_value158;
struct CVALUE* right_value_93;
struct sType* type_94;
char* fun_name_95;
_Bool calling_fun_96;
_Bool _if_conditional152;
_Bool _if_conditional153;
void* right_value159;
struct CVALUE* come_value_97;
void* right_value160;
char* __dec_obj74;
void* right_value161;
struct sType* __dec_obj75;
_Bool __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_90, 0, sizeof(struct sNode*));
right_value157 = (void*)0;
memset(&left_value_91, 0, sizeof(struct CVALUE*));
memset(&right_92, 0, sizeof(struct sNode*));
right_value158 = (void*)0;
memset(&right_value_93, 0, sizeof(struct CVALUE*));
memset(&type_94, 0, sizeof(struct sType*));
memset(&fun_name_95, 0, sizeof(char*));
memset(&calling_fun_96, 0, sizeof(_Bool));
right_value159 = (void*)0;
memset(&come_value_97, 0, sizeof(struct CVALUE*));
right_value160 = (void*)0;
right_value161 = (void*)0;
    # 634 "19eq.c"
    left_90=self->mLeft;
    # 640 "19eq.c"
    # 636 "19eq.c"
    if(_if_conditional150=!node_compile(left_90,info),    _if_conditional150) {
        # 637 "19eq.c"
        __result110__ = (_Bool)0;
        return __result110__;
    }
    # 640 "19eq.c"
    left_value_91=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value157=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 641 "19eq.c"
    dec_stack_ptr(1,info);
    # 643 "19eq.c"
    right_92=self->mRight;
    # 649 "19eq.c"
    # 645 "19eq.c"
    if(_if_conditional151=!node_compile(right_92,info),    _if_conditional151) {
        # 646 "19eq.c"
        __result111__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result111__;
    }
    # 649 "19eq.c"
    right_value_93=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value158=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 650 "19eq.c"
    dec_stack_ptr(1,info);
    # 652 "19eq.c"
    type_94=(struct sType*)come_increment_ref_count(left_value_91->type);
    # 654 "19eq.c"
    fun_name_95="operator_lshift_equal";
    # 655 "19eq.c"
    # 663 "19eq.c"
    # 656 "19eq.c"
    if(self->mQuote) {
        # 657 "19eq.c"
        calling_fun_96=(_Bool)0;
    }
    else {
        # 660 "19eq.c"
        calling_fun_96=operator_overload_fun(type_94,fun_name_95,left_value_91,right_value_93,(_Bool)0,info);
    }
    # 675 "19eq.c"
    # 663 "19eq.c"
    if(_if_conditional153=!calling_fun_96,    _if_conditional153) {
        # 664 "19eq.c"
        come_value_97=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value159=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 664, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 666 "19eq.c"
        __dec_obj74=come_value_97->c_value;
        come_value_97->c_value=(char*)come_increment_ref_count(((char*)(right_value160=xsprintf("%s<<=%s",left_value_91->c_value,right_value_93->c_value))));
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 667 "19eq.c"
        __dec_obj75=come_value_97->type;
        come_value_97->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value161=sType_clone(left_value_91->type))));
        come_call_finalizer2(sType_finalize,__dec_obj75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 668 "19eq.c"
        come_value_97->var=((void*)0);
        # 670 "19eq.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_97));
        # 672 "19eq.c"
        add_come_last_code(info,"%s;\n",come_value_97->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 675 "19eq.c"
    __result112__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result112__;
    come_call_finalizer2(CVALUE_finalize,left_value_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sLShifEqualNode_sline(struct sLShifEqualNode* self, struct sInfo* info){
void* __result_obj__;
int __result113__;
memset(&__result_obj__, 0, sizeof(void*));
    # 680 "19eq.c"
    __result113__ = self->sline;
    return __result113__;
}

char* sLShifEqualNode_sname(struct sLShifEqualNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value162;
char* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
right_value162 = (void*)0;
    # 685 "19eq.c"
    __result114__ = __result_obj__ = ((char*)(right_value162=__builtin_string(self->sname)));
    right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result114__;
}

struct sRShiftEqualNode* sRShiftEqualNode_initialize(struct sRShiftEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value163;
char* __dec_obj76;
void* right_value164;
struct sNode* __dec_obj77;
void* right_value165;
struct sNode* __dec_obj78;
struct sRShiftEqualNode* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
right_value163 = (void*)0;
right_value164 = (void*)0;
right_value165 = (void*)0;
    # 700 "19eq.c"
    self->sline=info->sline;
    # 701 "19eq.c"
    __dec_obj76=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value163=__builtin_string(info->sname))));
    __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 702 "19eq.c"
    self->mQuote=quote;
    # 704 "19eq.c"
    __dec_obj77=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value164=sNode_clone(left))));
    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value164) { right_value164 = come_decrement_ref_count2(right_value164, ((struct sNode*)right_value164)->finalize, ((struct sNode*)right_value164)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 705 "19eq.c"
    __dec_obj78=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value165=sNode_clone(right))));
    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count2(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value165) { right_value165 = come_decrement_ref_count2(right_value165, ((struct sNode*)right_value165)->finalize, ((struct sNode*)right_value165)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 707 "19eq.c"
    __result115__ = __result_obj__ = self;
    come_call_finalizer2(sRShiftEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result115__;
    come_call_finalizer2(sRShiftEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sRShiftEqualNode_terminated(){
void* __result_obj__;
_Bool __result116__;
memset(&__result_obj__, 0, sizeof(void*));
    # 712 "19eq.c"
    __result116__ = (_Bool)0;
    return __result116__;
}

char* sRShiftEqualNode_kind(){
void* __result_obj__;
void* right_value166;
char* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
right_value166 = (void*)0;
    # 717 "19eq.c"
    __result117__ = __result_obj__ = ((char*)(right_value166=__builtin_string("sRShiftEqualNode")));
    right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result117__;
}

_Bool sRShiftEqualNode_compile(struct sRShiftEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_98;
_Bool _if_conditional157;
_Bool __result118__;
void* right_value167;
struct CVALUE* left_value_99;
struct sNode* right_100;
_Bool _if_conditional158;
_Bool __result119__;
void* right_value168;
struct CVALUE* right_value_101;
struct sType* type_102;
char* fun_name_103;
_Bool calling_fun_104;
_Bool _if_conditional159;
_Bool _if_conditional160;
void* right_value169;
struct CVALUE* come_value_105;
void* right_value170;
char* __dec_obj79;
void* right_value171;
struct sType* __dec_obj80;
_Bool __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_98, 0, sizeof(struct sNode*));
right_value167 = (void*)0;
memset(&left_value_99, 0, sizeof(struct CVALUE*));
memset(&right_100, 0, sizeof(struct sNode*));
right_value168 = (void*)0;
memset(&right_value_101, 0, sizeof(struct CVALUE*));
memset(&type_102, 0, sizeof(struct sType*));
memset(&fun_name_103, 0, sizeof(char*));
memset(&calling_fun_104, 0, sizeof(_Bool));
right_value169 = (void*)0;
memset(&come_value_105, 0, sizeof(struct CVALUE*));
right_value170 = (void*)0;
right_value171 = (void*)0;
    # 722 "19eq.c"
    left_98=self->mLeft;
    # 728 "19eq.c"
    # 724 "19eq.c"
    if(_if_conditional157=!node_compile(left_98,info),    _if_conditional157) {
        # 725 "19eq.c"
        __result118__ = (_Bool)0;
        return __result118__;
    }
    # 728 "19eq.c"
    left_value_99=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value167=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 729 "19eq.c"
    dec_stack_ptr(1,info);
    # 731 "19eq.c"
    right_100=self->mRight;
    # 737 "19eq.c"
    # 733 "19eq.c"
    if(_if_conditional158=!node_compile(right_100,info),    _if_conditional158) {
        # 734 "19eq.c"
        __result119__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_99, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result119__;
    }
    # 737 "19eq.c"
    right_value_101=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value168=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 738 "19eq.c"
    dec_stack_ptr(1,info);
    # 740 "19eq.c"
    type_102=(struct sType*)come_increment_ref_count(left_value_99->type);
    # 742 "19eq.c"
    fun_name_103="operator_rshift_equal";
    # 743 "19eq.c"
    # 751 "19eq.c"
    # 744 "19eq.c"
    if(self->mQuote) {
        # 745 "19eq.c"
        calling_fun_104=(_Bool)0;
    }
    else {
        # 748 "19eq.c"
        calling_fun_104=operator_overload_fun(type_102,fun_name_103,left_value_99,right_value_101,(_Bool)0,info);
    }
    # 763 "19eq.c"
    # 751 "19eq.c"
    if(_if_conditional160=!calling_fun_104,    _if_conditional160) {
        # 752 "19eq.c"
        come_value_105=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value169=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 752, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 754 "19eq.c"
        __dec_obj79=come_value_105->c_value;
        come_value_105->c_value=(char*)come_increment_ref_count(((char*)(right_value170=xsprintf("%s>>=%s",left_value_99->c_value,right_value_101->c_value))));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 755 "19eq.c"
        __dec_obj80=come_value_105->type;
        come_value_105->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value171=sType_clone(left_value_99->type))));
        come_call_finalizer2(sType_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 756 "19eq.c"
        come_value_105->var=((void*)0);
        # 758 "19eq.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_105));
        # 760 "19eq.c"
        add_come_last_code(info,"%s;\n",come_value_105->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 763 "19eq.c"
    __result120__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_99, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result120__;
    come_call_finalizer2(CVALUE_finalize,left_value_99, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sRShiftEqualNode_sline(struct sRShiftEqualNode* self, struct sInfo* info){
void* __result_obj__;
int __result121__;
memset(&__result_obj__, 0, sizeof(void*));
    # 768 "19eq.c"
    __result121__ = self->sline;
    return __result121__;
}

char* sRShiftEqualNode_sname(struct sRShiftEqualNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value172;
char* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
right_value172 = (void*)0;
    # 773 "19eq.c"
    __result122__ = __result_obj__ = ((char*)(right_value172=__builtin_string(self->sname)));
    right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result122__;
}

struct sXorEqualNode* sXorEqualNode_initialize(struct sXorEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value173;
char* __dec_obj81;
void* right_value174;
struct sNode* __dec_obj82;
void* right_value175;
struct sNode* __dec_obj83;
struct sXorEqualNode* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value173 = (void*)0;
right_value174 = (void*)0;
right_value175 = (void*)0;
    # 788 "19eq.c"
    self->sline=info->sline;
    # 789 "19eq.c"
    __dec_obj81=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value173=__builtin_string(info->sname))));
    __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 790 "19eq.c"
    self->mQuote=quote;
    # 792 "19eq.c"
    __dec_obj82=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value174=sNode_clone(left))));
    if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count2(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value174) { right_value174 = come_decrement_ref_count2(right_value174, ((struct sNode*)right_value174)->finalize, ((struct sNode*)right_value174)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 793 "19eq.c"
    __dec_obj83=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value175=sNode_clone(right))));
    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count2(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value175) { right_value175 = come_decrement_ref_count2(right_value175, ((struct sNode*)right_value175)->finalize, ((struct sNode*)right_value175)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 795 "19eq.c"
    __result123__ = __result_obj__ = self;
    come_call_finalizer2(sXorEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result123__;
    come_call_finalizer2(sXorEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sXorEqualNode_terminated(){
void* __result_obj__;
_Bool __result124__;
memset(&__result_obj__, 0, sizeof(void*));
    # 800 "19eq.c"
    __result124__ = (_Bool)0;
    return __result124__;
}

char* sXorEqualNode_kind(){
void* __result_obj__;
void* right_value176;
char* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
right_value176 = (void*)0;
    # 805 "19eq.c"
    __result125__ = __result_obj__ = ((char*)(right_value176=__builtin_string("sXorEqualNode")));
    right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result125__;
}

_Bool sXorEqualNode_compile(struct sXorEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_106;
_Bool _if_conditional164;
_Bool __result126__;
void* right_value177;
struct CVALUE* left_value_107;
struct sNode* right_108;
_Bool _if_conditional165;
_Bool __result127__;
void* right_value178;
struct CVALUE* right_value_109;
struct sType* type_110;
char* fun_name_111;
_Bool calling_fun_112;
_Bool _if_conditional166;
_Bool _if_conditional167;
void* right_value179;
struct CVALUE* come_value_113;
void* right_value180;
char* __dec_obj84;
void* right_value181;
struct sType* __dec_obj85;
_Bool __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_106, 0, sizeof(struct sNode*));
right_value177 = (void*)0;
memset(&left_value_107, 0, sizeof(struct CVALUE*));
memset(&right_108, 0, sizeof(struct sNode*));
right_value178 = (void*)0;
memset(&right_value_109, 0, sizeof(struct CVALUE*));
memset(&type_110, 0, sizeof(struct sType*));
memset(&fun_name_111, 0, sizeof(char*));
memset(&calling_fun_112, 0, sizeof(_Bool));
right_value179 = (void*)0;
memset(&come_value_113, 0, sizeof(struct CVALUE*));
right_value180 = (void*)0;
right_value181 = (void*)0;
    # 810 "19eq.c"
    left_106=self->mLeft;
    # 816 "19eq.c"
    # 812 "19eq.c"
    if(_if_conditional164=!node_compile(left_106,info),    _if_conditional164) {
        # 813 "19eq.c"
        __result126__ = (_Bool)0;
        return __result126__;
    }
    # 816 "19eq.c"
    left_value_107=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value177=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 817 "19eq.c"
    dec_stack_ptr(1,info);
    # 819 "19eq.c"
    right_108=self->mRight;
    # 825 "19eq.c"
    # 821 "19eq.c"
    if(_if_conditional165=!node_compile(right_108,info),    _if_conditional165) {
        # 822 "19eq.c"
        __result127__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result127__;
    }
    # 825 "19eq.c"
    right_value_109=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value178=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 826 "19eq.c"
    dec_stack_ptr(1,info);
    # 828 "19eq.c"
    type_110=(struct sType*)come_increment_ref_count(left_value_107->type);
    # 830 "19eq.c"
    fun_name_111="operator_xor_equal";
    # 831 "19eq.c"
    # 839 "19eq.c"
    # 832 "19eq.c"
    if(self->mQuote) {
        # 833 "19eq.c"
        calling_fun_112=(_Bool)0;
    }
    else {
        # 836 "19eq.c"
        calling_fun_112=operator_overload_fun(type_110,fun_name_111,left_value_107,right_value_109,(_Bool)0,info);
    }
    # 851 "19eq.c"
    # 839 "19eq.c"
    if(_if_conditional167=!calling_fun_112,    _if_conditional167) {
        # 840 "19eq.c"
        come_value_113=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value179=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 840, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 842 "19eq.c"
        __dec_obj84=come_value_113->c_value;
        come_value_113->c_value=(char*)come_increment_ref_count(((char*)(right_value180=xsprintf("%s^=%s",left_value_107->c_value,right_value_109->c_value))));
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 843 "19eq.c"
        __dec_obj85=come_value_113->type;
        come_value_113->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value181=sType_clone(left_value_107->type))));
        come_call_finalizer2(sType_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 844 "19eq.c"
        come_value_113->var=((void*)0);
        # 846 "19eq.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_113));
        # 848 "19eq.c"
        add_come_last_code(info,"%s;\n",come_value_113->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 851 "19eq.c"
    __result128__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result128__;
    come_call_finalizer2(CVALUE_finalize,left_value_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sXorEqualNode_sline(struct sXorEqualNode* self, struct sInfo* info){
void* __result_obj__;
int __result129__;
memset(&__result_obj__, 0, sizeof(void*));
    # 856 "19eq.c"
    __result129__ = self->sline;
    return __result129__;
}

char* sXorEqualNode_sname(struct sXorEqualNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value182;
char* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
right_value182 = (void*)0;
    # 861 "19eq.c"
    __result130__ = __result_obj__ = ((char*)(right_value182=__builtin_string(self->sname)));
    right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result130__;
}

struct sOrEqualNode* sOrEqualNode_initialize(struct sOrEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value183;
char* __dec_obj86;
void* right_value184;
struct sNode* __dec_obj87;
void* right_value185;
struct sNode* __dec_obj88;
struct sOrEqualNode* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value185 = (void*)0;
    # 876 "19eq.c"
    self->sline=info->sline;
    # 877 "19eq.c"
    __dec_obj86=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value183=__builtin_string(info->sname))));
    __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 878 "19eq.c"
    self->mQuote=quote;
    # 880 "19eq.c"
    __dec_obj87=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value184=sNode_clone(left))));
    if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count2(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value184) { right_value184 = come_decrement_ref_count2(right_value184, ((struct sNode*)right_value184)->finalize, ((struct sNode*)right_value184)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 881 "19eq.c"
    __dec_obj88=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value185=sNode_clone(right))));
    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count2(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value185) { right_value185 = come_decrement_ref_count2(right_value185, ((struct sNode*)right_value185)->finalize, ((struct sNode*)right_value185)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 883 "19eq.c"
    __result131__ = __result_obj__ = self;
    come_call_finalizer2(sOrEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result131__;
    come_call_finalizer2(sOrEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sOrEqualNode_terminated(){
void* __result_obj__;
_Bool __result132__;
memset(&__result_obj__, 0, sizeof(void*));
    # 888 "19eq.c"
    __result132__ = (_Bool)0;
    return __result132__;
}

char* sOrEqualNode_kind(){
void* __result_obj__;
void* right_value186;
char* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
right_value186 = (void*)0;
    # 893 "19eq.c"
    __result133__ = __result_obj__ = ((char*)(right_value186=__builtin_string("sOrEqualNode")));
    right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result133__;
}

_Bool sOrEqualNode_compile(struct sOrEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_114;
_Bool _if_conditional171;
_Bool __result134__;
void* right_value187;
struct CVALUE* left_value_115;
struct sNode* right_116;
_Bool _if_conditional172;
_Bool __result135__;
void* right_value188;
struct CVALUE* right_value_117;
struct sType* type_118;
char* fun_name_119;
_Bool calling_fun_120;
_Bool _if_conditional173;
_Bool _if_conditional174;
void* right_value189;
struct CVALUE* come_value_121;
void* right_value190;
char* __dec_obj89;
void* right_value191;
struct sType* __dec_obj90;
_Bool __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_114, 0, sizeof(struct sNode*));
right_value187 = (void*)0;
memset(&left_value_115, 0, sizeof(struct CVALUE*));
memset(&right_116, 0, sizeof(struct sNode*));
right_value188 = (void*)0;
memset(&right_value_117, 0, sizeof(struct CVALUE*));
memset(&type_118, 0, sizeof(struct sType*));
memset(&fun_name_119, 0, sizeof(char*));
memset(&calling_fun_120, 0, sizeof(_Bool));
right_value189 = (void*)0;
memset(&come_value_121, 0, sizeof(struct CVALUE*));
right_value190 = (void*)0;
right_value191 = (void*)0;
    # 898 "19eq.c"
    left_114=self->mLeft;
    # 904 "19eq.c"
    # 900 "19eq.c"
    if(_if_conditional171=!node_compile(left_114,info),    _if_conditional171) {
        # 901 "19eq.c"
        __result134__ = (_Bool)0;
        return __result134__;
    }
    # 904 "19eq.c"
    left_value_115=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value187=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 905 "19eq.c"
    dec_stack_ptr(1,info);
    # 907 "19eq.c"
    right_116=self->mRight;
    # 913 "19eq.c"
    # 909 "19eq.c"
    if(_if_conditional172=!node_compile(right_116,info),    _if_conditional172) {
        # 910 "19eq.c"
        __result135__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_115, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result135__;
    }
    # 913 "19eq.c"
    right_value_117=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value188=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 914 "19eq.c"
    dec_stack_ptr(1,info);
    # 916 "19eq.c"
    type_118=(struct sType*)come_increment_ref_count(left_value_115->type);
    # 918 "19eq.c"
    fun_name_119="operator_or_equal";
    # 919 "19eq.c"
    # 927 "19eq.c"
    # 920 "19eq.c"
    if(self->mQuote) {
        # 921 "19eq.c"
        calling_fun_120=(_Bool)0;
    }
    else {
        # 924 "19eq.c"
        calling_fun_120=operator_overload_fun(type_118,fun_name_119,left_value_115,right_value_117,(_Bool)0,info);
    }
    # 939 "19eq.c"
    # 927 "19eq.c"
    if(_if_conditional174=!calling_fun_120,    _if_conditional174) {
        # 928 "19eq.c"
        come_value_121=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value189=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 928, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 930 "19eq.c"
        __dec_obj89=come_value_121->c_value;
        come_value_121->c_value=(char*)come_increment_ref_count(((char*)(right_value190=xsprintf("%s|=%s",left_value_115->c_value,right_value_117->c_value))));
        __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 931 "19eq.c"
        __dec_obj90=come_value_121->type;
        come_value_121->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value191=sType_clone(left_value_115->type))));
        come_call_finalizer2(sType_finalize,__dec_obj90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 932 "19eq.c"
        come_value_121->var=((void*)0);
        # 934 "19eq.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_121));
        # 936 "19eq.c"
        add_come_last_code(info,"%s;\n",come_value_121->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 939 "19eq.c"
    __result136__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_115, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result136__;
    come_call_finalizer2(CVALUE_finalize,left_value_115, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sOrEqualNode_sline(struct sOrEqualNode* self, struct sInfo* info){
void* __result_obj__;
int __result137__;
memset(&__result_obj__, 0, sizeof(void*));
    # 944 "19eq.c"
    __result137__ = self->sline;
    return __result137__;
}

char* sOrEqualNode_sname(struct sOrEqualNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value192;
char* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
right_value192 = (void*)0;
    # 949 "19eq.c"
    __result138__ = __result_obj__ = ((char*)(right_value192=__builtin_string(self->sname)));
    right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result138__;
}

struct sAndEqualNode* sAndEqualNode_initialize(struct sAndEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value193;
char* __dec_obj91;
void* right_value194;
struct sNode* __dec_obj92;
void* right_value195;
struct sNode* __dec_obj93;
struct sAndEqualNode* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
right_value193 = (void*)0;
right_value194 = (void*)0;
right_value195 = (void*)0;
    # 964 "19eq.c"
    self->sline=info->sline;
    # 965 "19eq.c"
    __dec_obj91=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value193=__builtin_string(info->sname))));
    __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 966 "19eq.c"
    self->mQuote=quote;
    # 968 "19eq.c"
    __dec_obj92=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value194=sNode_clone(left))));
    if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count2(__dec_obj92, ((struct sNode*)__dec_obj92)->finalize, ((struct sNode*)__dec_obj92)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value194) { right_value194 = come_decrement_ref_count2(right_value194, ((struct sNode*)right_value194)->finalize, ((struct sNode*)right_value194)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 969 "19eq.c"
    __dec_obj93=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value195=sNode_clone(right))));
    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count2(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value195) { right_value195 = come_decrement_ref_count2(right_value195, ((struct sNode*)right_value195)->finalize, ((struct sNode*)right_value195)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 971 "19eq.c"
    __result139__ = __result_obj__ = self;
    come_call_finalizer2(sAndEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result139__;
    come_call_finalizer2(sAndEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sAndEqualNode_terminated(){
void* __result_obj__;
_Bool __result140__;
memset(&__result_obj__, 0, sizeof(void*));
    # 976 "19eq.c"
    __result140__ = (_Bool)0;
    return __result140__;
}

char* sAndEqualNode_kind(){
void* __result_obj__;
void* right_value196;
char* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value196 = (void*)0;
    # 981 "19eq.c"
    __result141__ = __result_obj__ = ((char*)(right_value196=__builtin_string("sAndEqualNode")));
    right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result141__;
}

_Bool sAndEqualNode_compile(struct sAndEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_122;
_Bool _if_conditional178;
_Bool __result142__;
void* right_value197;
struct CVALUE* left_value_123;
struct sNode* right_124;
_Bool _if_conditional179;
_Bool __result143__;
void* right_value198;
struct CVALUE* right_value_125;
struct sType* type_126;
char* fun_name_127;
_Bool calling_fun_128;
_Bool _if_conditional180;
_Bool _if_conditional181;
void* right_value199;
struct CVALUE* come_value_129;
void* right_value200;
char* __dec_obj94;
void* right_value201;
struct sType* __dec_obj95;
_Bool __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_122, 0, sizeof(struct sNode*));
right_value197 = (void*)0;
memset(&left_value_123, 0, sizeof(struct CVALUE*));
memset(&right_124, 0, sizeof(struct sNode*));
right_value198 = (void*)0;
memset(&right_value_125, 0, sizeof(struct CVALUE*));
memset(&type_126, 0, sizeof(struct sType*));
memset(&fun_name_127, 0, sizeof(char*));
memset(&calling_fun_128, 0, sizeof(_Bool));
right_value199 = (void*)0;
memset(&come_value_129, 0, sizeof(struct CVALUE*));
right_value200 = (void*)0;
right_value201 = (void*)0;
    # 986 "19eq.c"
    left_122=self->mLeft;
    # 992 "19eq.c"
    # 988 "19eq.c"
    if(_if_conditional178=!node_compile(left_122,info),    _if_conditional178) {
        # 989 "19eq.c"
        __result142__ = (_Bool)0;
        return __result142__;
    }
    # 992 "19eq.c"
    left_value_123=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value197=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 993 "19eq.c"
    dec_stack_ptr(1,info);
    # 995 "19eq.c"
    right_124=self->mRight;
    # 1001 "19eq.c"
    # 997 "19eq.c"
    if(_if_conditional179=!node_compile(right_124,info),    _if_conditional179) {
        # 998 "19eq.c"
        __result143__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result143__;
    }
    # 1001 "19eq.c"
    right_value_125=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value198=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1002 "19eq.c"
    dec_stack_ptr(1,info);
    # 1004 "19eq.c"
    type_126=(struct sType*)come_increment_ref_count(left_value_123->type);
    # 1006 "19eq.c"
    fun_name_127="operator_and_equal";
    # 1007 "19eq.c"
    # 1015 "19eq.c"
    # 1008 "19eq.c"
    if(self->mQuote) {
        # 1009 "19eq.c"
        calling_fun_128=(_Bool)0;
    }
    else {
        # 1012 "19eq.c"
        calling_fun_128=operator_overload_fun(type_126,fun_name_127,left_value_123,right_value_125,(_Bool)0,info);
    }
    # 1027 "19eq.c"
    # 1015 "19eq.c"
    if(_if_conditional181=!calling_fun_128,    _if_conditional181) {
        # 1016 "19eq.c"
        come_value_129=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value199=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 1016, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1018 "19eq.c"
        __dec_obj94=come_value_129->c_value;
        come_value_129->c_value=(char*)come_increment_ref_count(((char*)(right_value200=xsprintf("%s&=%s",left_value_123->c_value,right_value_125->c_value))));
        __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1019 "19eq.c"
        __dec_obj95=come_value_129->type;
        come_value_129->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value201=sType_clone(left_value_123->type))));
        come_call_finalizer2(sType_finalize,__dec_obj95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1020 "19eq.c"
        come_value_129->var=((void*)0);
        # 1022 "19eq.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_129));
        # 1024 "19eq.c"
        add_come_last_code(info,"%s;\n",come_value_129->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 1027 "19eq.c"
    __result144__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result144__;
    come_call_finalizer2(CVALUE_finalize,left_value_123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sAndEqualNode_sline(struct sAndEqualNode* self, struct sInfo* info){
void* __result_obj__;
int __result145__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1032 "19eq.c"
    __result145__ = self->sline;
    return __result145__;
}

char* sAndEqualNode_sname(struct sAndEqualNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value202;
char* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
right_value202 = (void*)0;
    # 1037 "19eq.c"
    __result146__ = __result_obj__ = ((char*)(right_value202=__builtin_string(self->sname)));
    right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result146__;
}

struct sExpEqualNode* sExpEqualNode_initialize(struct sExpEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value203;
char* __dec_obj96;
void* right_value204;
struct sNode* __dec_obj97;
void* right_value205;
struct sNode* __dec_obj98;
struct sExpEqualNode* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value205 = (void*)0;
    # 1052 "19eq.c"
    self->sline=info->sline;
    # 1053 "19eq.c"
    __dec_obj96=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value203=__builtin_string(info->sname))));
    __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1054 "19eq.c"
    self->mQuote=quote;
    # 1056 "19eq.c"
    __dec_obj97=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value204=sNode_clone(left))));
    if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count2(__dec_obj97, ((struct sNode*)__dec_obj97)->finalize, ((struct sNode*)__dec_obj97)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value204) { right_value204 = come_decrement_ref_count2(right_value204, ((struct sNode*)right_value204)->finalize, ((struct sNode*)right_value204)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1057 "19eq.c"
    __dec_obj98=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value205=sNode_clone(right))));
    if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count2(__dec_obj98, ((struct sNode*)__dec_obj98)->finalize, ((struct sNode*)__dec_obj98)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value205) { right_value205 = come_decrement_ref_count2(right_value205, ((struct sNode*)right_value205)->finalize, ((struct sNode*)right_value205)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1059 "19eq.c"
    __result147__ = __result_obj__ = self;
    come_call_finalizer2(sExpEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result147__;
    come_call_finalizer2(sExpEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sExpEqualNode_terminated(){
void* __result_obj__;
_Bool __result148__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1064 "19eq.c"
    __result148__ = (_Bool)0;
    return __result148__;
}

char* sExpEqualNode_kind(){
void* __result_obj__;
void* right_value206;
char* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
right_value206 = (void*)0;
    # 1069 "19eq.c"
    __result149__ = __result_obj__ = ((char*)(right_value206=__builtin_string("sExpEqualNode")));
    right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result149__;
}

_Bool sExpEqualNode_compile(struct sExpEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_130;
_Bool _if_conditional185;
_Bool __result150__;
void* right_value207;
struct CVALUE* left_value_131;
struct sNode* right_132;
_Bool _if_conditional186;
_Bool __result151__;
void* right_value208;
struct CVALUE* right_value_133;
struct sType* type_134;
char* fun_name_135;
_Bool calling_fun_136;
_Bool _if_conditional187;
_Bool _if_conditional188;
void* right_value209;
struct CVALUE* come_value_137;
void* right_value210;
char* __dec_obj99;
void* right_value211;
struct sType* __dec_obj100;
_Bool __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_130, 0, sizeof(struct sNode*));
right_value207 = (void*)0;
memset(&left_value_131, 0, sizeof(struct CVALUE*));
memset(&right_132, 0, sizeof(struct sNode*));
right_value208 = (void*)0;
memset(&right_value_133, 0, sizeof(struct CVALUE*));
memset(&type_134, 0, sizeof(struct sType*));
memset(&fun_name_135, 0, sizeof(char*));
memset(&calling_fun_136, 0, sizeof(_Bool));
right_value209 = (void*)0;
memset(&come_value_137, 0, sizeof(struct CVALUE*));
right_value210 = (void*)0;
right_value211 = (void*)0;
    # 1074 "19eq.c"
    left_130=self->mLeft;
    # 1080 "19eq.c"
    # 1076 "19eq.c"
    if(_if_conditional185=!node_compile(left_130,info),    _if_conditional185) {
        # 1077 "19eq.c"
        __result150__ = (_Bool)0;
        return __result150__;
    }
    # 1080 "19eq.c"
    left_value_131=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value207=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1081 "19eq.c"
    dec_stack_ptr(1,info);
    # 1083 "19eq.c"
    right_132=self->mRight;
    # 1089 "19eq.c"
    # 1085 "19eq.c"
    if(_if_conditional186=!node_compile(right_132,info),    _if_conditional186) {
        # 1086 "19eq.c"
        __result151__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_131, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result151__;
    }
    # 1089 "19eq.c"
    right_value_133=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value208=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1090 "19eq.c"
    dec_stack_ptr(1,info);
    # 1092 "19eq.c"
    type_134=(struct sType*)come_increment_ref_count(left_value_131->type);
    # 1094 "19eq.c"
    fun_name_135="operator_exp_equal";
    # 1095 "19eq.c"
    # 1103 "19eq.c"
    # 1096 "19eq.c"
    if(self->mQuote) {
        # 1097 "19eq.c"
        calling_fun_136=(_Bool)0;
    }
    else {
        # 1100 "19eq.c"
        calling_fun_136=operator_overload_fun(type_134,fun_name_135,left_value_131,right_value_133,(_Bool)0,info);
    }
    # 1115 "19eq.c"
    # 1103 "19eq.c"
    if(_if_conditional188=!calling_fun_136,    _if_conditional188) {
        # 1104 "19eq.c"
        come_value_137=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value209=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 1104, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1106 "19eq.c"
        __dec_obj99=come_value_137->c_value;
        come_value_137->c_value=(char*)come_increment_ref_count(((char*)(right_value210=xsprintf("%s=%s",left_value_131->c_value,right_value_133->c_value))));
        __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1107 "19eq.c"
        __dec_obj100=come_value_137->type;
        come_value_137->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value211=sType_clone(left_value_131->type))));
        come_call_finalizer2(sType_finalize,__dec_obj100, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1108 "19eq.c"
        come_value_137->var=((void*)0);
        # 1110 "19eq.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_137));
        # 1112 "19eq.c"
        add_come_last_code(info,"%s;\n",come_value_137->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 1115 "19eq.c"
    __result152__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_131, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result152__;
    come_call_finalizer2(CVALUE_finalize,left_value_131, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sExpEqualNode_sline(struct sExpEqualNode* self, struct sInfo* info){
void* __result_obj__;
int __result153__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1120 "19eq.c"
    __result153__ = self->sline;
    return __result153__;
}

char* sExpEqualNode_sname(struct sExpEqualNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value212;
char* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
right_value212 = (void*)0;
    # 1125 "19eq.c"
    __result154__ = __result_obj__ = ((char*)(right_value212=__builtin_string(self->sname)));
    right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result154__;
}

struct sNode* post_position_operator2_v19(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional189;
_Bool quote_138;
_Bool _if_conditional190;
void* right_value213;
void* right_value214;
struct sNode* _inf_value1;
struct sPlusPlusNode* _inf_obj_value1;
void* right_value218;
struct sNode* __result157__;
_Bool _if_conditional198;
_Bool quote_140;
_Bool _if_conditional199;
void* right_value219;
void* right_value220;
struct sNode* _inf_value2;
struct sMinusMinusNode* _inf_obj_value2;
void* right_value224;
struct sNode* __result160__;
_Bool _if_conditional207;
_Bool quote_142;
_Bool _if_conditional208;
void* right_value225;
struct sNode* right_node_143;
void* right_value226;
void* right_value227;
struct sNode* _inf_value3;
struct sPlusEqualNode* _inf_obj_value3;
void* right_value232;
struct sNode* __result163__;
_Bool _if_conditional218;
_Bool quote_145;
_Bool _if_conditional219;
void* right_value233;
struct sNode* right_node_146;
void* right_value234;
void* right_value235;
struct sNode* _inf_value4;
struct sMinusEqualNode* _inf_obj_value4;
void* right_value240;
struct sNode* __result166__;
_Bool _if_conditional229;
_Bool quote_148;
_Bool _if_conditional230;
void* right_value241;
struct sNode* right_node_149;
void* right_value242;
void* right_value243;
struct sNode* _inf_value5;
struct sMultEqualNode* _inf_obj_value5;
void* right_value248;
struct sNode* __result169__;
_Bool _if_conditional240;
_Bool quote_151;
_Bool _if_conditional241;
void* right_value249;
struct sNode* right_node_152;
void* right_value250;
void* right_value251;
struct sNode* _inf_value6;
struct sDivEqualNode* _inf_obj_value6;
void* right_value256;
struct sNode* __result172__;
_Bool _if_conditional251;
_Bool quote_154;
_Bool _if_conditional252;
void* right_value257;
struct sNode* right_node_155;
void* right_value258;
void* right_value259;
struct sNode* _inf_value7;
struct sModEqualNode* _inf_obj_value7;
void* right_value264;
struct sNode* __result175__;
_Bool _if_conditional262;
_Bool quote_157;
_Bool _if_conditional263;
void* right_value265;
struct sNode* right_node_158;
void* right_value266;
void* right_value267;
struct sNode* _inf_value8;
struct sLShifEqualNode* _inf_obj_value8;
void* right_value272;
struct sNode* __result178__;
_Bool _if_conditional273;
_Bool quote_160;
_Bool _if_conditional274;
void* right_value273;
struct sNode* right_node_161;
void* right_value274;
void* right_value275;
struct sNode* _inf_value9;
struct sRShiftEqualNode* _inf_obj_value9;
void* right_value280;
struct sNode* __result181__;
_Bool _if_conditional284;
_Bool quote_163;
_Bool _if_conditional285;
void* right_value281;
struct sNode* right_node_164;
void* right_value282;
void* right_value283;
struct sNode* _inf_value10;
struct sXorEqualNode* _inf_obj_value10;
void* right_value288;
struct sNode* __result184__;
_Bool _if_conditional295;
_Bool quote_166;
_Bool _if_conditional296;
void* right_value289;
struct sNode* right_node_167;
void* right_value290;
void* right_value291;
struct sNode* _inf_value11;
struct sAndEqualNode* _inf_obj_value11;
void* right_value296;
struct sNode* __result187__;
_Bool _if_conditional306;
_Bool quote_169;
_Bool _if_conditional307;
void* right_value297;
struct sNode* right_node_170;
void* right_value298;
void* right_value299;
struct sNode* _inf_value12;
struct sOrEqualNode* _inf_obj_value12;
void* right_value304;
struct sNode* __result190__;
_Bool _if_conditional317;
_Bool quote_172;
_Bool _if_conditional318;
void* right_value305;
struct sNode* right_node_173;
void* right_value306;
void* right_value307;
struct sNode* _inf_value13;
struct sExpEqualNode* _inf_obj_value13;
void* right_value312;
struct sNode* __result193__;
struct sNode* __result194__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&quote_138, 0, sizeof(_Bool));
right_value213 = (void*)0;
right_value214 = (void*)0;
right_value218 = (void*)0;
memset(&quote_140, 0, sizeof(_Bool));
right_value219 = (void*)0;
right_value220 = (void*)0;
right_value224 = (void*)0;
memset(&quote_142, 0, sizeof(_Bool));
right_value225 = (void*)0;
memset(&right_node_143, 0, sizeof(struct sNode*));
right_value226 = (void*)0;
right_value227 = (void*)0;
right_value232 = (void*)0;
memset(&quote_145, 0, sizeof(_Bool));
right_value233 = (void*)0;
memset(&right_node_146, 0, sizeof(struct sNode*));
right_value234 = (void*)0;
right_value235 = (void*)0;
right_value240 = (void*)0;
memset(&quote_148, 0, sizeof(_Bool));
right_value241 = (void*)0;
memset(&right_node_149, 0, sizeof(struct sNode*));
right_value242 = (void*)0;
right_value243 = (void*)0;
right_value248 = (void*)0;
memset(&quote_151, 0, sizeof(_Bool));
right_value249 = (void*)0;
memset(&right_node_152, 0, sizeof(struct sNode*));
right_value250 = (void*)0;
right_value251 = (void*)0;
right_value256 = (void*)0;
memset(&quote_154, 0, sizeof(_Bool));
right_value257 = (void*)0;
memset(&right_node_155, 0, sizeof(struct sNode*));
right_value258 = (void*)0;
right_value259 = (void*)0;
right_value264 = (void*)0;
memset(&quote_157, 0, sizeof(_Bool));
right_value265 = (void*)0;
memset(&right_node_158, 0, sizeof(struct sNode*));
right_value266 = (void*)0;
right_value267 = (void*)0;
right_value272 = (void*)0;
memset(&quote_160, 0, sizeof(_Bool));
right_value273 = (void*)0;
memset(&right_node_161, 0, sizeof(struct sNode*));
right_value274 = (void*)0;
right_value275 = (void*)0;
right_value280 = (void*)0;
memset(&quote_163, 0, sizeof(_Bool));
right_value281 = (void*)0;
memset(&right_node_164, 0, sizeof(struct sNode*));
right_value282 = (void*)0;
right_value283 = (void*)0;
right_value288 = (void*)0;
memset(&quote_166, 0, sizeof(_Bool));
right_value289 = (void*)0;
memset(&right_node_167, 0, sizeof(struct sNode*));
right_value290 = (void*)0;
right_value291 = (void*)0;
right_value296 = (void*)0;
memset(&quote_169, 0, sizeof(_Bool));
right_value297 = (void*)0;
memset(&right_node_170, 0, sizeof(struct sNode*));
right_value298 = (void*)0;
right_value299 = (void*)0;
right_value304 = (void*)0;
memset(&quote_172, 0, sizeof(_Bool));
right_value305 = (void*)0;
memset(&right_node_173, 0, sizeof(struct sNode*));
right_value306 = (void*)0;
right_value307 = (void*)0;
right_value312 = (void*)0;
    # 1349 "19eq.c"
    # 1130 "19eq.c"
    if(_if_conditional189=(*info->p==92&&*(info->p+1)==43&&*(info->p+2)==43)||(*info->p==43&&*(info->p+1)==43),    _if_conditional189) {
        # 1132 "19eq.c"
        # 1143 "19eq.c"
        # 1132 "19eq.c"
        if(_if_conditional190=*info->p==92,        _if_conditional190) {
            # 1133 "19eq.c"
            info->p+=3;
            # 1134 "19eq.c"
            skip_spaces_and_lf(info);
            # 1135 "19eq.c"
            quote_138=(_Bool)1;
        }
        else {
            # 1138 "19eq.c"
            info->p+=2;
            # 1139 "19eq.c"
            skip_spaces_and_lf(info);
            # 1140 "19eq.c"
            quote_138=(_Bool)0;
        }
        # 1143 "19eq.c"
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1143, "struct sNode");
        _inf_obj_value1=come_increment_ref_count(((struct sPlusPlusNode*)(right_value214=sPlusPlusNode_initialize((struct sPlusPlusNode*)come_increment_ref_count(((struct sPlusPlusNode*)(right_value213=(struct sPlusPlusNode*)come_calloc(1, sizeof(struct sPlusPlusNode)*(1), "19eq.c", 1143, "sPlusPlusNode")))),(struct sNode*)come_increment_ref_count(node),quote_138,info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sPlusPlusNode_finalize;
        _inf_value1->clone=(void*)sPlusPlusNode_clone;
        _inf_value1->compile=(void*)sPlusPlusNode_compile;
        _inf_value1->sline=(void*)sPlusPlusNode_sline;
        _inf_value1->sname=(void*)sPlusPlusNode_sname;
        _inf_value1->terminated=(void*)sPlusPlusNode_terminated;
        _inf_value1->kind=(void*)sPlusPlusNode_kind;
        __result157__ = __result_obj__ = ((struct sNode*)(right_value218=_inf_value1));
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        come_call_finalizer2(sPlusPlusNode_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sPlusPlusNode_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value218) { right_value218 = come_decrement_ref_count2(right_value218, ((struct sNode*)right_value218)->finalize, ((struct sNode*)right_value218)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result157__;
    }
    else {
        # 1349 "19eq.c"
        # 1145 "19eq.c"
        if(_if_conditional198=(*info->p==92&&*(info->p+1)==45&&*(info->p+2)==45)||(*info->p==45&&*(info->p+1)==45),        _if_conditional198) {
            # 1147 "19eq.c"
            # 1158 "19eq.c"
            # 1147 "19eq.c"
            if(_if_conditional199=*info->p==92,            _if_conditional199) {
                # 1148 "19eq.c"
                info->p+=3;
                # 1149 "19eq.c"
                skip_spaces_and_lf(info);
                # 1150 "19eq.c"
                quote_140=(_Bool)1;
            }
            else {
                # 1153 "19eq.c"
                info->p+=2;
                # 1154 "19eq.c"
                skip_spaces_and_lf(info);
                # 1155 "19eq.c"
                quote_140=(_Bool)0;
            }
            # 1158 "19eq.c"
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1158, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sMinusMinusNode*)(right_value220=sMinusMinusNode_initialize((struct sMinusMinusNode*)come_increment_ref_count(((struct sMinusMinusNode*)(right_value219=(struct sMinusMinusNode*)come_calloc(1, sizeof(struct sMinusMinusNode)*(1), "19eq.c", 1158, "sMinusMinusNode")))),(struct sNode*)come_increment_ref_count(node),quote_140,info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sMinusMinusNode_finalize;
            _inf_value2->clone=(void*)sMinusMinusNode_clone;
            _inf_value2->compile=(void*)sMinusMinusNode_compile;
            _inf_value2->sline=(void*)sMinusMinusNode_sline;
            _inf_value2->sname=(void*)sMinusMinusNode_sname;
            _inf_value2->terminated=(void*)sMinusMinusNode_terminated;
            _inf_value2->kind=(void*)sMinusMinusNode_kind;
            __result160__ = __result_obj__ = ((struct sNode*)(right_value224=_inf_value2));
            if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
            come_call_finalizer2(sMinusMinusNode_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sMinusMinusNode_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value224) { right_value224 = come_decrement_ref_count2(right_value224, ((struct sNode*)right_value224)->finalize, ((struct sNode*)right_value224)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result160__;
        }
        else {
            # 1349 "19eq.c"
            # 1160 "19eq.c"
            if(_if_conditional207=(*info->p==92&&*(info->p+1)==43&&*(info->p+2)==61)||(*info->p==43&&*(info->p+1)==61),            _if_conditional207) {
                # 1162 "19eq.c"
                # 1173 "19eq.c"
                # 1162 "19eq.c"
                if(_if_conditional208=*info->p==92,                _if_conditional208) {
                    # 1163 "19eq.c"
                    info->p+=3;
                    # 1164 "19eq.c"
                    skip_spaces_and_lf(info);
                    # 1165 "19eq.c"
                    quote_142=(_Bool)1;
                }
                else {
                    # 1168 "19eq.c"
                    info->p+=2;
                    # 1169 "19eq.c"
                    skip_spaces_and_lf(info);
                    # 1170 "19eq.c"
                    quote_142=(_Bool)0;
                }
                # 1173 "19eq.c"
                right_node_143=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value225=expression_v13(info))));
                if(right_value225) { right_value225 = come_decrement_ref_count2(right_value225, ((struct sNode*)right_value225)->finalize, ((struct sNode*)right_value225)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 1175 "19eq.c"
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1175, "struct sNode");
                _inf_obj_value3=come_increment_ref_count(((struct sPlusEqualNode*)(right_value227=sPlusEqualNode_initialize((struct sPlusEqualNode*)come_increment_ref_count(((struct sPlusEqualNode*)(right_value226=(struct sPlusEqualNode*)come_calloc(1, sizeof(struct sPlusEqualNode)*(1), "19eq.c", 1175, "sPlusEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_143),quote_142,info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sPlusEqualNode_finalize;
                _inf_value3->clone=(void*)sPlusEqualNode_clone;
                _inf_value3->compile=(void*)sPlusEqualNode_compile;
                _inf_value3->sline=(void*)sPlusEqualNode_sline;
                _inf_value3->sname=(void*)sPlusEqualNode_sname;
                _inf_value3->terminated=(void*)sPlusEqualNode_terminated;
                _inf_value3->kind=(void*)sPlusEqualNode_kind;
                __result163__ = __result_obj__ = ((struct sNode*)(right_value232=_inf_value3));
                if(right_node_143) { right_node_143 = come_decrement_ref_count2(right_node_143, ((struct sNode*)right_node_143)->finalize, ((struct sNode*)right_node_143)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                come_call_finalizer2(sPlusEqualNode_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sPlusEqualNode_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value232) { right_value232 = come_decrement_ref_count2(right_value232, ((struct sNode*)right_value232)->finalize, ((struct sNode*)right_value232)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result163__;
                if(right_node_143) { right_node_143 = come_decrement_ref_count2(right_node_143, ((struct sNode*)right_node_143)->finalize, ((struct sNode*)right_node_143)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 1349 "19eq.c"
                # 1177 "19eq.c"
                if(_if_conditional218=(*info->p==92&&*(info->p+1)==45&&*(info->p+2)==61)||(*info->p==45&&*(info->p+1)==61),                _if_conditional218) {
                    # 1179 "19eq.c"
                    # 1190 "19eq.c"
                    # 1179 "19eq.c"
                    if(_if_conditional219=*info->p==92,                    _if_conditional219) {
                        # 1180 "19eq.c"
                        info->p+=3;
                        # 1181 "19eq.c"
                        skip_spaces_and_lf(info);
                        # 1182 "19eq.c"
                        quote_145=(_Bool)1;
                    }
                    else {
                        # 1185 "19eq.c"
                        info->p+=2;
                        # 1186 "19eq.c"
                        skip_spaces_and_lf(info);
                        # 1187 "19eq.c"
                        quote_145=(_Bool)0;
                    }
                    # 1190 "19eq.c"
                    right_node_146=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value233=expression_v13(info))));
                    if(right_value233) { right_value233 = come_decrement_ref_count2(right_value233, ((struct sNode*)right_value233)->finalize, ((struct sNode*)right_value233)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1192 "19eq.c"
                    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1192, "struct sNode");
                    _inf_obj_value4=come_increment_ref_count(((struct sMinusEqualNode*)(right_value235=sMinusEqualNode_initialize((struct sMinusEqualNode*)come_increment_ref_count(((struct sMinusEqualNode*)(right_value234=(struct sMinusEqualNode*)come_calloc(1, sizeof(struct sMinusEqualNode)*(1), "19eq.c", 1192, "sMinusEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_146),quote_145,info))));
                    _inf_value4->_protocol_obj=_inf_obj_value4;
                    _inf_value4->finalize=(void*)sMinusEqualNode_finalize;
                    _inf_value4->clone=(void*)sMinusEqualNode_clone;
                    _inf_value4->compile=(void*)sMinusEqualNode_compile;
                    _inf_value4->sline=(void*)sMinusEqualNode_sline;
                    _inf_value4->sname=(void*)sMinusEqualNode_sname;
                    _inf_value4->terminated=(void*)sMinusEqualNode_terminated;
                    _inf_value4->kind=(void*)sMinusEqualNode_kind;
                    __result166__ = __result_obj__ = ((struct sNode*)(right_value240=_inf_value4));
                    if(right_node_146) { right_node_146 = come_decrement_ref_count2(right_node_146, ((struct sNode*)right_node_146)->finalize, ((struct sNode*)right_node_146)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                    come_call_finalizer2(sMinusEqualNode_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sMinusEqualNode_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value240) { right_value240 = come_decrement_ref_count2(right_value240, ((struct sNode*)right_value240)->finalize, ((struct sNode*)right_value240)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result166__;
                    if(right_node_146) { right_node_146 = come_decrement_ref_count2(right_node_146, ((struct sNode*)right_node_146)->finalize, ((struct sNode*)right_node_146)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    # 1349 "19eq.c"
                    # 1194 "19eq.c"
                    if(_if_conditional229=(*info->p==92&&*(info->p+1)==42&&*(info->p+2)==61)||(*info->p==42&&*(info->p+1)==61),                    _if_conditional229) {
                        # 1196 "19eq.c"
                        # 1207 "19eq.c"
                        # 1196 "19eq.c"
                        if(_if_conditional230=*info->p==92,                        _if_conditional230) {
                            # 1197 "19eq.c"
                            info->p+=3;
                            # 1198 "19eq.c"
                            skip_spaces_and_lf(info);
                            # 1199 "19eq.c"
                            quote_148=(_Bool)1;
                        }
                        else {
                            # 1202 "19eq.c"
                            info->p+=2;
                            # 1203 "19eq.c"
                            skip_spaces_and_lf(info);
                            # 1204 "19eq.c"
                            quote_148=(_Bool)0;
                        }
                        # 1207 "19eq.c"
                        right_node_149=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value241=expression_v13(info))));
                        if(right_value241) { right_value241 = come_decrement_ref_count2(right_value241, ((struct sNode*)right_value241)->finalize, ((struct sNode*)right_value241)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 1209 "19eq.c"
                        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1209, "struct sNode");
                        _inf_obj_value5=come_increment_ref_count(((struct sMultEqualNode*)(right_value243=sMultEqualNode_initialize((struct sMultEqualNode*)come_increment_ref_count(((struct sMultEqualNode*)(right_value242=(struct sMultEqualNode*)come_calloc(1, sizeof(struct sMultEqualNode)*(1), "19eq.c", 1209, "sMultEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_149),quote_148,info))));
                        _inf_value5->_protocol_obj=_inf_obj_value5;
                        _inf_value5->finalize=(void*)sMultEqualNode_finalize;
                        _inf_value5->clone=(void*)sMultEqualNode_clone;
                        _inf_value5->compile=(void*)sMultEqualNode_compile;
                        _inf_value5->sline=(void*)sMultEqualNode_sline;
                        _inf_value5->sname=(void*)sMultEqualNode_sname;
                        _inf_value5->terminated=(void*)sMultEqualNode_terminated;
                        _inf_value5->kind=(void*)sMultEqualNode_kind;
                        __result169__ = __result_obj__ = ((struct sNode*)(right_value248=_inf_value5));
                        if(right_node_149) { right_node_149 = come_decrement_ref_count2(right_node_149, ((struct sNode*)right_node_149)->finalize, ((struct sNode*)right_node_149)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        come_call_finalizer2(sMultEqualNode_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sMultEqualNode_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value248) { right_value248 = come_decrement_ref_count2(right_value248, ((struct sNode*)right_value248)->finalize, ((struct sNode*)right_value248)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result169__;
                        if(right_node_149) { right_node_149 = come_decrement_ref_count2(right_node_149, ((struct sNode*)right_node_149)->finalize, ((struct sNode*)right_node_149)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        # 1349 "19eq.c"
                        # 1211 "19eq.c"
                        if(_if_conditional240=(*info->p==92&&*(info->p+1)==47&&*(info->p+2)==61)||(*info->p==47&&*(info->p+1)==61),                        _if_conditional240) {
                            # 1213 "19eq.c"
                            # 1224 "19eq.c"
                            # 1213 "19eq.c"
                            if(_if_conditional241=*info->p==92,                            _if_conditional241) {
                                # 1214 "19eq.c"
                                info->p+=3;
                                # 1215 "19eq.c"
                                skip_spaces_and_lf(info);
                                # 1216 "19eq.c"
                                quote_151=(_Bool)1;
                            }
                            else {
                                # 1219 "19eq.c"
                                info->p+=2;
                                # 1220 "19eq.c"
                                skip_spaces_and_lf(info);
                                # 1221 "19eq.c"
                                quote_151=(_Bool)0;
                            }
                            # 1224 "19eq.c"
                            right_node_152=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value249=expression_v13(info))));
                            if(right_value249) { right_value249 = come_decrement_ref_count2(right_value249, ((struct sNode*)right_value249)->finalize, ((struct sNode*)right_value249)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 1226 "19eq.c"
                            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1226, "struct sNode");
                            _inf_obj_value6=come_increment_ref_count(((struct sDivEqualNode*)(right_value251=sDivEqualNode_initialize((struct sDivEqualNode*)come_increment_ref_count(((struct sDivEqualNode*)(right_value250=(struct sDivEqualNode*)come_calloc(1, sizeof(struct sDivEqualNode)*(1), "19eq.c", 1226, "sDivEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_152),quote_151,info))));
                            _inf_value6->_protocol_obj=_inf_obj_value6;
                            _inf_value6->finalize=(void*)sDivEqualNode_finalize;
                            _inf_value6->clone=(void*)sDivEqualNode_clone;
                            _inf_value6->compile=(void*)sDivEqualNode_compile;
                            _inf_value6->sline=(void*)sDivEqualNode_sline;
                            _inf_value6->sname=(void*)sDivEqualNode_sname;
                            _inf_value6->terminated=(void*)sDivEqualNode_terminated;
                            _inf_value6->kind=(void*)sDivEqualNode_kind;
                            __result172__ = __result_obj__ = ((struct sNode*)(right_value256=_inf_value6));
                            if(right_node_152) { right_node_152 = come_decrement_ref_count2(right_node_152, ((struct sNode*)right_node_152)->finalize, ((struct sNode*)right_node_152)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            come_call_finalizer2(sDivEqualNode_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sDivEqualNode_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value256) { right_value256 = come_decrement_ref_count2(right_value256, ((struct sNode*)right_value256)->finalize, ((struct sNode*)right_value256)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result172__;
                            if(right_node_152) { right_node_152 = come_decrement_ref_count2(right_node_152, ((struct sNode*)right_node_152)->finalize, ((struct sNode*)right_node_152)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            # 1349 "19eq.c"
                            # 1228 "19eq.c"
                            if(_if_conditional251=(*info->p==92&&*(info->p+1)==37&&*(info->p+2)==61)||(*info->p==37&&*(info->p+1)==61),                            _if_conditional251) {
                                # 1230 "19eq.c"
                                # 1242 "19eq.c"
                                # 1230 "19eq.c"
                                if(_if_conditional252=*info->p==92,                                _if_conditional252) {
                                    # 1231 "19eq.c"
                                    info->p+=3;
                                    # 1232 "19eq.c"
                                    skip_spaces_and_lf(info);
                                    # 1233 "19eq.c"
                                    quote_154=(_Bool)1;
                                }
                                else {
                                    # 1236 "19eq.c"
                                    info->p+=2;
                                    # 1237 "19eq.c"
                                    skip_spaces_and_lf(info);
                                    # 1238 "19eq.c"
                                    quote_154=(_Bool)0;
                                }
                                # 1242 "19eq.c"
                                right_node_155=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value257=expression_v13(info))));
                                if(right_value257) { right_value257 = come_decrement_ref_count2(right_value257, ((struct sNode*)right_value257)->finalize, ((struct sNode*)right_value257)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                # 1244 "19eq.c"
                                _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1244, "struct sNode");
                                _inf_obj_value7=come_increment_ref_count(((struct sModEqualNode*)(right_value259=sModEqualNode_initialize((struct sModEqualNode*)come_increment_ref_count(((struct sModEqualNode*)(right_value258=(struct sModEqualNode*)come_calloc(1, sizeof(struct sModEqualNode)*(1), "19eq.c", 1244, "sModEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_155),quote_154,info))));
                                _inf_value7->_protocol_obj=_inf_obj_value7;
                                _inf_value7->finalize=(void*)sModEqualNode_finalize;
                                _inf_value7->clone=(void*)sModEqualNode_clone;
                                _inf_value7->compile=(void*)sModEqualNode_compile;
                                _inf_value7->sline=(void*)sModEqualNode_sline;
                                _inf_value7->sname=(void*)sModEqualNode_sname;
                                _inf_value7->terminated=(void*)sModEqualNode_terminated;
                                _inf_value7->kind=(void*)sModEqualNode_kind;
                                __result175__ = __result_obj__ = ((struct sNode*)(right_value264=_inf_value7));
                                if(right_node_155) { right_node_155 = come_decrement_ref_count2(right_node_155, ((struct sNode*)right_node_155)->finalize, ((struct sNode*)right_node_155)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                come_call_finalizer2(sModEqualNode_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sModEqualNode_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(right_value264) { right_value264 = come_decrement_ref_count2(right_value264, ((struct sNode*)right_value264)->finalize, ((struct sNode*)right_value264)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result175__;
                                if(right_node_155) { right_node_155 = come_decrement_ref_count2(right_node_155, ((struct sNode*)right_node_155)->finalize, ((struct sNode*)right_node_155)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                # 1349 "19eq.c"
                                # 1246 "19eq.c"
                                if(_if_conditional262=(*info->p==92&&*(info->p+1)==60&&*(info->p+2)==60&&*(info->p+3)==61)||(*info->p==60&&*(info->p+1)==60&&*(info->p+2)==61),                                _if_conditional262) {
                                    # 1248 "19eq.c"
                                    # 1259 "19eq.c"
                                    # 1248 "19eq.c"
                                    if(_if_conditional263=*info->p==92,                                    _if_conditional263) {
                                        # 1249 "19eq.c"
                                        info->p+=4;
                                        # 1250 "19eq.c"
                                        skip_spaces_and_lf(info);
                                        # 1251 "19eq.c"
                                        quote_157=(_Bool)1;
                                    }
                                    else {
                                        # 1254 "19eq.c"
                                        info->p+=3;
                                        # 1255 "19eq.c"
                                        skip_spaces_and_lf(info);
                                        # 1256 "19eq.c"
                                        quote_157=(_Bool)0;
                                    }
                                    # 1259 "19eq.c"
                                    right_node_158=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value265=expression_v13(info))));
                                    if(right_value265) { right_value265 = come_decrement_ref_count2(right_value265, ((struct sNode*)right_value265)->finalize, ((struct sNode*)right_value265)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    # 1261 "19eq.c"
                                    _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1261, "struct sNode");
                                    _inf_obj_value8=come_increment_ref_count(((struct sLShifEqualNode*)(right_value267=sLShifEqualNode_initialize((struct sLShifEqualNode*)come_increment_ref_count(((struct sLShifEqualNode*)(right_value266=(struct sLShifEqualNode*)come_calloc(1, sizeof(struct sLShifEqualNode)*(1), "19eq.c", 1261, "sLShifEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_158),quote_157,info))));
                                    _inf_value8->_protocol_obj=_inf_obj_value8;
                                    _inf_value8->finalize=(void*)sLShifEqualNode_finalize;
                                    _inf_value8->clone=(void*)sLShifEqualNode_clone;
                                    _inf_value8->compile=(void*)sLShifEqualNode_compile;
                                    _inf_value8->sline=(void*)sLShifEqualNode_sline;
                                    _inf_value8->sname=(void*)sLShifEqualNode_sname;
                                    _inf_value8->terminated=(void*)sLShifEqualNode_terminated;
                                    _inf_value8->kind=(void*)sLShifEqualNode_kind;
                                    __result178__ = __result_obj__ = ((struct sNode*)(right_value272=_inf_value8));
                                    if(right_node_158) { right_node_158 = come_decrement_ref_count2(right_node_158, ((struct sNode*)right_node_158)->finalize, ((struct sNode*)right_node_158)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                    come_call_finalizer2(sLShifEqualNode_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sLShifEqualNode_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(right_value272) { right_value272 = come_decrement_ref_count2(right_value272, ((struct sNode*)right_value272)->finalize, ((struct sNode*)right_value272)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result178__;
                                    if(right_node_158) { right_node_158 = come_decrement_ref_count2(right_node_158, ((struct sNode*)right_node_158)->finalize, ((struct sNode*)right_node_158)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    # 1349 "19eq.c"
                                    # 1263 "19eq.c"
                                    if(_if_conditional273=(*info->p==92&&*(info->p+1)==62&&*(info->p+2)==62&&*(info->p+3)==61)||(*info->p==62&&*(info->p+1)==62&&*(info->p+2)==61),                                    _if_conditional273) {
                                        # 1265 "19eq.c"
                                        # 1276 "19eq.c"
                                        # 1265 "19eq.c"
                                        if(_if_conditional274=*info->p==92,                                        _if_conditional274) {
                                            # 1266 "19eq.c"
                                            info->p+=4;
                                            # 1267 "19eq.c"
                                            skip_spaces_and_lf(info);
                                            # 1268 "19eq.c"
                                            quote_160=(_Bool)1;
                                        }
                                        else {
                                            # 1271 "19eq.c"
                                            info->p+=3;
                                            # 1272 "19eq.c"
                                            skip_spaces_and_lf(info);
                                            # 1273 "19eq.c"
                                            quote_160=(_Bool)0;
                                        }
                                        # 1276 "19eq.c"
                                        right_node_161=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value273=expression_v13(info))));
                                        if(right_value273) { right_value273 = come_decrement_ref_count2(right_value273, ((struct sNode*)right_value273)->finalize, ((struct sNode*)right_value273)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        # 1278 "19eq.c"
                                        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1278, "struct sNode");
                                        _inf_obj_value9=come_increment_ref_count(((struct sRShiftEqualNode*)(right_value275=sRShiftEqualNode_initialize((struct sRShiftEqualNode*)come_increment_ref_count(((struct sRShiftEqualNode*)(right_value274=(struct sRShiftEqualNode*)come_calloc(1, sizeof(struct sRShiftEqualNode)*(1), "19eq.c", 1278, "sRShiftEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_161),quote_160,info))));
                                        _inf_value9->_protocol_obj=_inf_obj_value9;
                                        _inf_value9->finalize=(void*)sRShiftEqualNode_finalize;
                                        _inf_value9->clone=(void*)sRShiftEqualNode_clone;
                                        _inf_value9->compile=(void*)sRShiftEqualNode_compile;
                                        _inf_value9->sline=(void*)sRShiftEqualNode_sline;
                                        _inf_value9->sname=(void*)sRShiftEqualNode_sname;
                                        _inf_value9->terminated=(void*)sRShiftEqualNode_terminated;
                                        _inf_value9->kind=(void*)sRShiftEqualNode_kind;
                                        __result181__ = __result_obj__ = ((struct sNode*)(right_value280=_inf_value9));
                                        if(right_node_161) { right_node_161 = come_decrement_ref_count2(right_node_161, ((struct sNode*)right_node_161)->finalize, ((struct sNode*)right_node_161)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                        come_call_finalizer2(sRShiftEqualNode_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(sRShiftEqualNode_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(right_value280) { right_value280 = come_decrement_ref_count2(right_value280, ((struct sNode*)right_value280)->finalize, ((struct sNode*)right_value280)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result181__;
                                        if(right_node_161) { right_node_161 = come_decrement_ref_count2(right_node_161, ((struct sNode*)right_node_161)->finalize, ((struct sNode*)right_node_161)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        # 1349 "19eq.c"
                                        # 1280 "19eq.c"
                                        if(_if_conditional284=(*info->p==92&&*(info->p+1)==94&&*(info->p+2)==61)||(*info->p==94&&*(info->p+1)==61),                                        _if_conditional284) {
                                            # 1282 "19eq.c"
                                            # 1293 "19eq.c"
                                            # 1282 "19eq.c"
                                            if(_if_conditional285=*info->p==92,                                            _if_conditional285) {
                                                # 1283 "19eq.c"
                                                info->p+=3;
                                                # 1284 "19eq.c"
                                                skip_spaces_and_lf(info);
                                                # 1285 "19eq.c"
                                                quote_163=(_Bool)1;
                                            }
                                            else {
                                                # 1288 "19eq.c"
                                                info->p+=2;
                                                # 1289 "19eq.c"
                                                skip_spaces_and_lf(info);
                                                # 1290 "19eq.c"
                                                quote_163=(_Bool)0;
                                            }
                                            # 1293 "19eq.c"
                                            right_node_164=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value281=expression_v13(info))));
                                            if(right_value281) { right_value281 = come_decrement_ref_count2(right_value281, ((struct sNode*)right_value281)->finalize, ((struct sNode*)right_value281)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            # 1295 "19eq.c"
                                            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1295, "struct sNode");
                                            _inf_obj_value10=come_increment_ref_count(((struct sXorEqualNode*)(right_value283=sXorEqualNode_initialize((struct sXorEqualNode*)come_increment_ref_count(((struct sXorEqualNode*)(right_value282=(struct sXorEqualNode*)come_calloc(1, sizeof(struct sXorEqualNode)*(1), "19eq.c", 1295, "sXorEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_164),quote_163,info))));
                                            _inf_value10->_protocol_obj=_inf_obj_value10;
                                            _inf_value10->finalize=(void*)sXorEqualNode_finalize;
                                            _inf_value10->clone=(void*)sXorEqualNode_clone;
                                            _inf_value10->compile=(void*)sXorEqualNode_compile;
                                            _inf_value10->sline=(void*)sXorEqualNode_sline;
                                            _inf_value10->sname=(void*)sXorEqualNode_sname;
                                            _inf_value10->terminated=(void*)sXorEqualNode_terminated;
                                            _inf_value10->kind=(void*)sXorEqualNode_kind;
                                            __result184__ = __result_obj__ = ((struct sNode*)(right_value288=_inf_value10));
                                            if(right_node_164) { right_node_164 = come_decrement_ref_count2(right_node_164, ((struct sNode*)right_node_164)->finalize, ((struct sNode*)right_node_164)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                            come_call_finalizer2(sXorEqualNode_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer2(sXorEqualNode_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            if(right_value288) { right_value288 = come_decrement_ref_count2(right_value288, ((struct sNode*)right_value288)->finalize, ((struct sNode*)right_value288)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            return __result184__;
                                            if(right_node_164) { right_node_164 = come_decrement_ref_count2(right_node_164, ((struct sNode*)right_node_164)->finalize, ((struct sNode*)right_node_164)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        else {
                                            # 1349 "19eq.c"
                                            # 1297 "19eq.c"
                                            if(_if_conditional295=(*info->p==92&&*(info->p+1)==38&&*(info->p+2)==61)||(*info->p==38&&*(info->p+1)==61),                                            _if_conditional295) {
                                                # 1299 "19eq.c"
                                                # 1310 "19eq.c"
                                                # 1299 "19eq.c"
                                                if(_if_conditional296=*info->p==92,                                                _if_conditional296) {
                                                    # 1300 "19eq.c"
                                                    info->p+=3;
                                                    # 1301 "19eq.c"
                                                    skip_spaces_and_lf(info);
                                                    # 1302 "19eq.c"
                                                    quote_166=(_Bool)1;
                                                }
                                                else {
                                                    # 1305 "19eq.c"
                                                    info->p+=2;
                                                    # 1306 "19eq.c"
                                                    skip_spaces_and_lf(info);
                                                    # 1307 "19eq.c"
                                                    quote_166=(_Bool)0;
                                                }
                                                # 1310 "19eq.c"
                                                right_node_167=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value289=expression_v13(info))));
                                                if(right_value289) { right_value289 = come_decrement_ref_count2(right_value289, ((struct sNode*)right_value289)->finalize, ((struct sNode*)right_value289)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                # 1312 "19eq.c"
                                                _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1312, "struct sNode");
                                                _inf_obj_value11=come_increment_ref_count(((struct sAndEqualNode*)(right_value291=sAndEqualNode_initialize((struct sAndEqualNode*)come_increment_ref_count(((struct sAndEqualNode*)(right_value290=(struct sAndEqualNode*)come_calloc(1, sizeof(struct sAndEqualNode)*(1), "19eq.c", 1312, "sAndEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_167),quote_166,info))));
                                                _inf_value11->_protocol_obj=_inf_obj_value11;
                                                _inf_value11->finalize=(void*)sAndEqualNode_finalize;
                                                _inf_value11->clone=(void*)sAndEqualNode_clone;
                                                _inf_value11->compile=(void*)sAndEqualNode_compile;
                                                _inf_value11->sline=(void*)sAndEqualNode_sline;
                                                _inf_value11->sname=(void*)sAndEqualNode_sname;
                                                _inf_value11->terminated=(void*)sAndEqualNode_terminated;
                                                _inf_value11->kind=(void*)sAndEqualNode_kind;
                                                __result187__ = __result_obj__ = ((struct sNode*)(right_value296=_inf_value11));
                                                if(right_node_167) { right_node_167 = come_decrement_ref_count2(right_node_167, ((struct sNode*)right_node_167)->finalize, ((struct sNode*)right_node_167)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                come_call_finalizer2(sAndEqualNode_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                come_call_finalizer2(sAndEqualNode_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                if(right_value296) { right_value296 = come_decrement_ref_count2(right_value296, ((struct sNode*)right_value296)->finalize, ((struct sNode*)right_value296)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                return __result187__;
                                                if(right_node_167) { right_node_167 = come_decrement_ref_count2(right_node_167, ((struct sNode*)right_node_167)->finalize, ((struct sNode*)right_node_167)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            else {
                                                # 1349 "19eq.c"
                                                # 1314 "19eq.c"
                                                if(_if_conditional306=(*info->p==92&&*(info->p+1)==124&&*(info->p+2)==61)||(*info->p==124&&*(info->p+1)==61),                                                _if_conditional306) {
                                                    # 1316 "19eq.c"
                                                    # 1327 "19eq.c"
                                                    # 1316 "19eq.c"
                                                    if(_if_conditional307=*info->p==92,                                                    _if_conditional307) {
                                                        # 1317 "19eq.c"
                                                        info->p+=3;
                                                        # 1318 "19eq.c"
                                                        skip_spaces_and_lf(info);
                                                        # 1319 "19eq.c"
                                                        quote_169=(_Bool)1;
                                                    }
                                                    else {
                                                        # 1322 "19eq.c"
                                                        info->p+=2;
                                                        # 1323 "19eq.c"
                                                        skip_spaces_and_lf(info);
                                                        # 1324 "19eq.c"
                                                        quote_169=(_Bool)0;
                                                    }
                                                    # 1327 "19eq.c"
                                                    right_node_170=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value297=expression_v13(info))));
                                                    if(right_value297) { right_value297 = come_decrement_ref_count2(right_value297, ((struct sNode*)right_value297)->finalize, ((struct sNode*)right_value297)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    # 1329 "19eq.c"
                                                    _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1329, "struct sNode");
                                                    _inf_obj_value12=come_increment_ref_count(((struct sOrEqualNode*)(right_value299=sOrEqualNode_initialize((struct sOrEqualNode*)come_increment_ref_count(((struct sOrEqualNode*)(right_value298=(struct sOrEqualNode*)come_calloc(1, sizeof(struct sOrEqualNode)*(1), "19eq.c", 1329, "sOrEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_170),quote_169,info))));
                                                    _inf_value12->_protocol_obj=_inf_obj_value12;
                                                    _inf_value12->finalize=(void*)sOrEqualNode_finalize;
                                                    _inf_value12->clone=(void*)sOrEqualNode_clone;
                                                    _inf_value12->compile=(void*)sOrEqualNode_compile;
                                                    _inf_value12->sline=(void*)sOrEqualNode_sline;
                                                    _inf_value12->sname=(void*)sOrEqualNode_sname;
                                                    _inf_value12->terminated=(void*)sOrEqualNode_terminated;
                                                    _inf_value12->kind=(void*)sOrEqualNode_kind;
                                                    __result190__ = __result_obj__ = ((struct sNode*)(right_value304=_inf_value12));
                                                    if(right_node_170) { right_node_170 = come_decrement_ref_count2(right_node_170, ((struct sNode*)right_node_170)->finalize, ((struct sNode*)right_node_170)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                    come_call_finalizer2(sOrEqualNode_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer2(sOrEqualNode_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    if(right_value304) { right_value304 = come_decrement_ref_count2(right_value304, ((struct sNode*)right_value304)->finalize, ((struct sNode*)right_value304)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    return __result190__;
                                                    if(right_node_170) { right_node_170 = come_decrement_ref_count2(right_node_170, ((struct sNode*)right_node_170)->finalize, ((struct sNode*)right_node_170)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                else {
                                                    # 1349 "19eq.c"
                                                    # 1331 "19eq.c"
                                                    if(_if_conditional317=(*info->p==92&&*(info->p+1)==61&&*(info->p+2)!=61)||(*info->p==61&&*(info->p+1)!=61),                                                    _if_conditional317) {
                                                        # 1333 "19eq.c"
                                                        # 1344 "19eq.c"
                                                        # 1333 "19eq.c"
                                                        if(_if_conditional318=*info->p==92,                                                        _if_conditional318) {
                                                            # 1334 "19eq.c"
                                                            info->p+=2;
                                                            # 1335 "19eq.c"
                                                            skip_spaces_and_lf(info);
                                                            # 1336 "19eq.c"
                                                            quote_172=(_Bool)1;
                                                        }
                                                        else {
                                                            # 1339 "19eq.c"
                                                            info->p++;
                                                            # 1340 "19eq.c"
                                                            skip_spaces_and_lf(info);
                                                            # 1341 "19eq.c"
                                                            quote_172=(_Bool)0;
                                                        }
                                                        # 1344 "19eq.c"
                                                        right_node_173=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value305=expression_v13(info))));
                                                        if(right_value305) { right_value305 = come_decrement_ref_count2(right_value305, ((struct sNode*)right_value305)->finalize, ((struct sNode*)right_value305)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        # 1346 "19eq.c"
                                                        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1346, "struct sNode");
                                                        _inf_obj_value13=come_increment_ref_count(((struct sExpEqualNode*)(right_value307=sExpEqualNode_initialize((struct sExpEqualNode*)come_increment_ref_count(((struct sExpEqualNode*)(right_value306=(struct sExpEqualNode*)come_calloc(1, sizeof(struct sExpEqualNode)*(1), "19eq.c", 1346, "sExpEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_173),quote_172,info))));
                                                        _inf_value13->_protocol_obj=_inf_obj_value13;
                                                        _inf_value13->finalize=(void*)sExpEqualNode_finalize;
                                                        _inf_value13->clone=(void*)sExpEqualNode_clone;
                                                        _inf_value13->compile=(void*)sExpEqualNode_compile;
                                                        _inf_value13->sline=(void*)sExpEqualNode_sline;
                                                        _inf_value13->sname=(void*)sExpEqualNode_sname;
                                                        _inf_value13->terminated=(void*)sExpEqualNode_terminated;
                                                        _inf_value13->kind=(void*)sExpEqualNode_kind;
                                                        __result193__ = __result_obj__ = ((struct sNode*)(right_value312=_inf_value13));
                                                        if(right_node_173) { right_node_173 = come_decrement_ref_count2(right_node_173, ((struct sNode*)right_node_173)->finalize, ((struct sNode*)right_node_173)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                        come_call_finalizer2(sExpEqualNode_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer2(sExpEqualNode_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        if(right_value312) { right_value312 = come_decrement_ref_count2(right_value312, ((struct sNode*)right_value312)->finalize, ((struct sNode*)right_value312)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        return __result193__;
                                                        if(right_node_173) { right_node_173 = come_decrement_ref_count2(right_node_173, ((struct sNode*)right_node_173)->finalize, ((struct sNode*)right_node_173)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
    # 1349 "19eq.c"
    __result194__ = __result_obj__ = (struct sNode*)((void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result194__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sPlusPlusNode_finalize(struct sPlusPlusNode* self){
void* __result_obj__;
_Bool _if_conditional191;
_Bool _if_conditional192;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sPlusPlusNode_finalize"
            # 0 "sPlusPlusNode_finalize"
            if(_if_conditional191=self!=((void*)0)&&self->mLeft!=((void*)0),            _if_conditional191) {
                # 0 "sPlusPlusNode_finalize"
                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            # 2 "sPlusPlusNode_finalize"
            # 1 "sPlusPlusNode_finalize"
            if(_if_conditional192=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional192) {
                # 1 "sPlusPlusNode_finalize"
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sPlusPlusNode* sPlusPlusNode_clone(struct sPlusPlusNode* self){
void* __result_obj__;
_Bool _if_conditional193;
struct sPlusPlusNode* __result155__;
void* right_value215;
struct sPlusPlusNode* result_139;
_Bool _if_conditional194;
void* right_value216;
struct sNode* __dec_obj101;
_Bool _if_conditional195;
_Bool _if_conditional196;
void* right_value217;
char* __dec_obj102;
_Bool _if_conditional197;
struct sPlusPlusNode* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
right_value215 = (void*)0;
memset(&result_139, 0, sizeof(struct sPlusPlusNode*));
right_value216 = (void*)0;
right_value217 = (void*)0;
            # 3 "sPlusPlusNode_clone"
            # 2 "sPlusPlusNode_clone"
            if(_if_conditional193=self==(void*)0,            _if_conditional193) {
                # 2 "sPlusPlusNode_clone"
                __result155__ = __result_obj__ = (void*)0;
                return __result155__;
            }
            # 3 "sPlusPlusNode_clone"
            result_139=(struct sPlusPlusNode*)come_increment_ref_count(((struct sPlusPlusNode*)(right_value215=(struct sPlusPlusNode*)come_calloc(1, sizeof(struct sPlusPlusNode)*(1), "sPlusPlusNode_clone", 3, "sPlusPlusNode"))));
            come_call_finalizer2(sPlusPlusNode_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 5 "sPlusPlusNode_clone"
            # 4 "sPlusPlusNode_clone"
            if(_if_conditional194=self!=((void*)0)&&self->mLeft!=((void*)0),            _if_conditional194) {
                # 4 "sPlusPlusNode_clone"
                __dec_obj101=result_139->mLeft;
                result_139->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value216=sNode_clone(self->mLeft))));
                if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count2(__dec_obj101, ((struct sNode*)__dec_obj101)->finalize, ((struct sNode*)__dec_obj101)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value216) { right_value216 = come_decrement_ref_count2(right_value216, ((struct sNode*)right_value216)->finalize, ((struct sNode*)right_value216)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            # 6 "sPlusPlusNode_clone"
            # 5 "sPlusPlusNode_clone"
            if(_if_conditional195=self!=((void*)0),            _if_conditional195) {
                # 5 "sPlusPlusNode_clone"
                result_139->sline=self->sline;
            }
            # 7 "sPlusPlusNode_clone"
            # 6 "sPlusPlusNode_clone"
            if(_if_conditional196=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional196) {
                # 6 "sPlusPlusNode_clone"
                __dec_obj102=result_139->sname;
                result_139->sname=(char*)come_increment_ref_count(((char*)(right_value217=string_clone(self->sname))));
                __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 8 "sPlusPlusNode_clone"
            # 7 "sPlusPlusNode_clone"
            if(_if_conditional197=self!=((void*)0),            _if_conditional197) {
                # 7 "sPlusPlusNode_clone"
                result_139->mQuote=self->mQuote;
            }
            # 8 "sPlusPlusNode_clone"
            __result156__ = __result_obj__ = result_139;
            come_call_finalizer2(sPlusPlusNode_finalize,result_139, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result156__;
            come_call_finalizer2(sPlusPlusNode_finalize,result_139, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sMinusMinusNode_finalize(struct sMinusMinusNode* self){
void* __result_obj__;
_Bool _if_conditional200;
_Bool _if_conditional201;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sMinusMinusNode_finalize"
                # 0 "sMinusMinusNode_finalize"
                if(_if_conditional200=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional200) {
                    # 0 "sMinusMinusNode_finalize"
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                # 2 "sMinusMinusNode_finalize"
                # 1 "sMinusMinusNode_finalize"
                if(_if_conditional201=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional201) {
                    # 1 "sMinusMinusNode_finalize"
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sMinusMinusNode* sMinusMinusNode_clone(struct sMinusMinusNode* self){
void* __result_obj__;
_Bool _if_conditional202;
struct sMinusMinusNode* __result158__;
void* right_value221;
struct sMinusMinusNode* result_141;
_Bool _if_conditional203;
void* right_value222;
struct sNode* __dec_obj103;
_Bool _if_conditional204;
_Bool _if_conditional205;
_Bool _if_conditional206;
void* right_value223;
char* __dec_obj104;
struct sMinusMinusNode* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
right_value221 = (void*)0;
memset(&result_141, 0, sizeof(struct sMinusMinusNode*));
right_value222 = (void*)0;
right_value223 = (void*)0;
                # 3 "sMinusMinusNode_clone"
                # 2 "sMinusMinusNode_clone"
                if(_if_conditional202=self==(void*)0,                _if_conditional202) {
                    # 2 "sMinusMinusNode_clone"
                    __result158__ = __result_obj__ = (void*)0;
                    return __result158__;
                }
                # 3 "sMinusMinusNode_clone"
                result_141=(struct sMinusMinusNode*)come_increment_ref_count(((struct sMinusMinusNode*)(right_value221=(struct sMinusMinusNode*)come_calloc(1, sizeof(struct sMinusMinusNode)*(1), "sMinusMinusNode_clone", 3, "sMinusMinusNode"))));
                come_call_finalizer2(sMinusMinusNode_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "sMinusMinusNode_clone"
                # 4 "sMinusMinusNode_clone"
                if(_if_conditional203=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional203) {
                    # 4 "sMinusMinusNode_clone"
                    __dec_obj103=result_141->mLeft;
                    result_141->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value222=sNode_clone(self->mLeft))));
                    if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count2(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value222) { right_value222 = come_decrement_ref_count2(right_value222, ((struct sNode*)right_value222)->finalize, ((struct sNode*)right_value222)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 6 "sMinusMinusNode_clone"
                # 5 "sMinusMinusNode_clone"
                if(_if_conditional204=self!=((void*)0),                _if_conditional204) {
                    # 5 "sMinusMinusNode_clone"
                    result_141->mQuote=self->mQuote;
                }
                # 7 "sMinusMinusNode_clone"
                # 6 "sMinusMinusNode_clone"
                if(_if_conditional205=self!=((void*)0),                _if_conditional205) {
                    # 6 "sMinusMinusNode_clone"
                    result_141->sline=self->sline;
                }
                # 8 "sMinusMinusNode_clone"
                # 7 "sMinusMinusNode_clone"
                if(_if_conditional206=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional206) {
                    # 7 "sMinusMinusNode_clone"
                    __dec_obj104=result_141->sname;
                    result_141->sname=(char*)come_increment_ref_count(((char*)(right_value223=string_clone(self->sname))));
                    __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 8 "sMinusMinusNode_clone"
                __result159__ = __result_obj__ = result_141;
                come_call_finalizer2(sMinusMinusNode_finalize,result_141, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result159__;
                come_call_finalizer2(sMinusMinusNode_finalize,result_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sPlusEqualNode_finalize(struct sPlusEqualNode* self){
void* __result_obj__;
_Bool _if_conditional209;
_Bool _if_conditional210;
_Bool _if_conditional211;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "sPlusEqualNode_finalize"
                    # 0 "sPlusEqualNode_finalize"
                    if(_if_conditional209=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional209) {
                        # 0 "sPlusEqualNode_finalize"
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    # 2 "sPlusEqualNode_finalize"
                    # 1 "sPlusEqualNode_finalize"
                    if(_if_conditional210=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional210) {
                        # 1 "sPlusEqualNode_finalize"
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    # 3 "sPlusEqualNode_finalize"
                    # 2 "sPlusEqualNode_finalize"
                    if(_if_conditional211=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional211) {
                        # 2 "sPlusEqualNode_finalize"
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sPlusEqualNode* sPlusEqualNode_clone(struct sPlusEqualNode* self){
void* __result_obj__;
_Bool _if_conditional212;
struct sPlusEqualNode* __result161__;
void* right_value228;
struct sPlusEqualNode* result_144;
_Bool _if_conditional213;
void* right_value229;
struct sNode* __dec_obj105;
_Bool _if_conditional214;
void* right_value230;
struct sNode* __dec_obj106;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
void* right_value231;
char* __dec_obj107;
struct sPlusEqualNode* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
right_value228 = (void*)0;
memset(&result_144, 0, sizeof(struct sPlusEqualNode*));
right_value229 = (void*)0;
right_value230 = (void*)0;
right_value231 = (void*)0;
                    # 3 "sPlusEqualNode_clone"
                    # 2 "sPlusEqualNode_clone"
                    if(_if_conditional212=self==(void*)0,                    _if_conditional212) {
                        # 2 "sPlusEqualNode_clone"
                        __result161__ = __result_obj__ = (void*)0;
                        return __result161__;
                    }
                    # 3 "sPlusEqualNode_clone"
                    result_144=(struct sPlusEqualNode*)come_increment_ref_count(((struct sPlusEqualNode*)(right_value228=(struct sPlusEqualNode*)come_calloc(1, sizeof(struct sPlusEqualNode)*(1), "sPlusEqualNode_clone", 3, "sPlusEqualNode"))));
                    come_call_finalizer2(sPlusEqualNode_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 5 "sPlusEqualNode_clone"
                    # 4 "sPlusEqualNode_clone"
                    if(_if_conditional213=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional213) {
                        # 4 "sPlusEqualNode_clone"
                        __dec_obj105=result_144->mLeft;
                        result_144->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value229=sNode_clone(self->mLeft))));
                        if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count2(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value229) { right_value229 = come_decrement_ref_count2(right_value229, ((struct sNode*)right_value229)->finalize, ((struct sNode*)right_value229)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    # 6 "sPlusEqualNode_clone"
                    # 5 "sPlusEqualNode_clone"
                    if(_if_conditional214=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional214) {
                        # 5 "sPlusEqualNode_clone"
                        __dec_obj106=result_144->mRight;
                        result_144->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value230=sNode_clone(self->mRight))));
                        if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count2(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value230) { right_value230 = come_decrement_ref_count2(right_value230, ((struct sNode*)right_value230)->finalize, ((struct sNode*)right_value230)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    # 7 "sPlusEqualNode_clone"
                    # 6 "sPlusEqualNode_clone"
                    if(_if_conditional215=self!=((void*)0),                    _if_conditional215) {
                        # 6 "sPlusEqualNode_clone"
                        result_144->mQuote=self->mQuote;
                    }
                    # 8 "sPlusEqualNode_clone"
                    # 7 "sPlusEqualNode_clone"
                    if(_if_conditional216=self!=((void*)0),                    _if_conditional216) {
                        # 7 "sPlusEqualNode_clone"
                        result_144->sline=self->sline;
                    }
                    # 9 "sPlusEqualNode_clone"
                    # 8 "sPlusEqualNode_clone"
                    if(_if_conditional217=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional217) {
                        # 8 "sPlusEqualNode_clone"
                        __dec_obj107=result_144->sname;
                        result_144->sname=(char*)come_increment_ref_count(((char*)(right_value231=string_clone(self->sname))));
                        __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 9 "sPlusEqualNode_clone"
                    __result162__ = __result_obj__ = result_144;
                    come_call_finalizer2(sPlusEqualNode_finalize,result_144, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result162__;
                    come_call_finalizer2(sPlusEqualNode_finalize,result_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sMinusEqualNode_finalize(struct sMinusEqualNode* self){
void* __result_obj__;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sMinusEqualNode_finalize"
                        # 0 "sMinusEqualNode_finalize"
                        if(_if_conditional220=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional220) {
                            # 0 "sMinusEqualNode_finalize"
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        # 2 "sMinusEqualNode_finalize"
                        # 1 "sMinusEqualNode_finalize"
                        if(_if_conditional221=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional221) {
                            # 1 "sMinusEqualNode_finalize"
                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        # 3 "sMinusEqualNode_finalize"
                        # 2 "sMinusEqualNode_finalize"
                        if(_if_conditional222=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional222) {
                            # 2 "sMinusEqualNode_finalize"
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sMinusEqualNode* sMinusEqualNode_clone(struct sMinusEqualNode* self){
void* __result_obj__;
_Bool _if_conditional223;
struct sMinusEqualNode* __result164__;
void* right_value236;
struct sMinusEqualNode* result_147;
_Bool _if_conditional224;
void* right_value237;
struct sNode* __dec_obj108;
_Bool _if_conditional225;
void* right_value238;
struct sNode* __dec_obj109;
_Bool _if_conditional226;
_Bool _if_conditional227;
_Bool _if_conditional228;
void* right_value239;
char* __dec_obj110;
struct sMinusEqualNode* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
right_value236 = (void*)0;
memset(&result_147, 0, sizeof(struct sMinusEqualNode*));
right_value237 = (void*)0;
right_value238 = (void*)0;
right_value239 = (void*)0;
                        # 3 "sMinusEqualNode_clone"
                        # 2 "sMinusEqualNode_clone"
                        if(_if_conditional223=self==(void*)0,                        _if_conditional223) {
                            # 2 "sMinusEqualNode_clone"
                            __result164__ = __result_obj__ = (void*)0;
                            return __result164__;
                        }
                        # 3 "sMinusEqualNode_clone"
                        result_147=(struct sMinusEqualNode*)come_increment_ref_count(((struct sMinusEqualNode*)(right_value236=(struct sMinusEqualNode*)come_calloc(1, sizeof(struct sMinusEqualNode)*(1), "sMinusEqualNode_clone", 3, "sMinusEqualNode"))));
                        come_call_finalizer2(sMinusEqualNode_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 5 "sMinusEqualNode_clone"
                        # 4 "sMinusEqualNode_clone"
                        if(_if_conditional224=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional224) {
                            # 4 "sMinusEqualNode_clone"
                            __dec_obj108=result_147->mLeft;
                            result_147->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value237=sNode_clone(self->mLeft))));
                            if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count2(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value237) { right_value237 = come_decrement_ref_count2(right_value237, ((struct sNode*)right_value237)->finalize, ((struct sNode*)right_value237)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 6 "sMinusEqualNode_clone"
                        # 5 "sMinusEqualNode_clone"
                        if(_if_conditional225=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional225) {
                            # 5 "sMinusEqualNode_clone"
                            __dec_obj109=result_147->mRight;
                            result_147->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value238=sNode_clone(self->mRight))));
                            if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count2(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value238) { right_value238 = come_decrement_ref_count2(right_value238, ((struct sNode*)right_value238)->finalize, ((struct sNode*)right_value238)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 7 "sMinusEqualNode_clone"
                        # 6 "sMinusEqualNode_clone"
                        if(_if_conditional226=self!=((void*)0),                        _if_conditional226) {
                            # 6 "sMinusEqualNode_clone"
                            result_147->mQuote=self->mQuote;
                        }
                        # 8 "sMinusEqualNode_clone"
                        # 7 "sMinusEqualNode_clone"
                        if(_if_conditional227=self!=((void*)0),                        _if_conditional227) {
                            # 7 "sMinusEqualNode_clone"
                            result_147->sline=self->sline;
                        }
                        # 9 "sMinusEqualNode_clone"
                        # 8 "sMinusEqualNode_clone"
                        if(_if_conditional228=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional228) {
                            # 8 "sMinusEqualNode_clone"
                            __dec_obj110=result_147->sname;
                            result_147->sname=(char*)come_increment_ref_count(((char*)(right_value239=string_clone(self->sname))));
                            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        # 9 "sMinusEqualNode_clone"
                        __result165__ = __result_obj__ = result_147;
                        come_call_finalizer2(sMinusEqualNode_finalize,result_147, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result165__;
                        come_call_finalizer2(sMinusEqualNode_finalize,result_147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sMultEqualNode_finalize(struct sMultEqualNode* self){
void* __result_obj__;
_Bool _if_conditional231;
_Bool _if_conditional232;
_Bool _if_conditional233;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "sMultEqualNode_finalize"
                            # 0 "sMultEqualNode_finalize"
                            if(_if_conditional231=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional231) {
                                # 0 "sMultEqualNode_finalize"
                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            # 2 "sMultEqualNode_finalize"
                            # 1 "sMultEqualNode_finalize"
                            if(_if_conditional232=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional232) {
                                # 1 "sMultEqualNode_finalize"
                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            # 3 "sMultEqualNode_finalize"
                            # 2 "sMultEqualNode_finalize"
                            if(_if_conditional233=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional233) {
                                # 2 "sMultEqualNode_finalize"
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sMultEqualNode* sMultEqualNode_clone(struct sMultEqualNode* self){
void* __result_obj__;
_Bool _if_conditional234;
struct sMultEqualNode* __result167__;
void* right_value244;
struct sMultEqualNode* result_150;
_Bool _if_conditional235;
void* right_value245;
struct sNode* __dec_obj111;
_Bool _if_conditional236;
void* right_value246;
struct sNode* __dec_obj112;
_Bool _if_conditional237;
_Bool _if_conditional238;
_Bool _if_conditional239;
void* right_value247;
char* __dec_obj113;
struct sMultEqualNode* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
right_value244 = (void*)0;
memset(&result_150, 0, sizeof(struct sMultEqualNode*));
right_value245 = (void*)0;
right_value246 = (void*)0;
right_value247 = (void*)0;
                            # 3 "sMultEqualNode_clone"
                            # 2 "sMultEqualNode_clone"
                            if(_if_conditional234=self==(void*)0,                            _if_conditional234) {
                                # 2 "sMultEqualNode_clone"
                                __result167__ = __result_obj__ = (void*)0;
                                return __result167__;
                            }
                            # 3 "sMultEqualNode_clone"
                            result_150=(struct sMultEqualNode*)come_increment_ref_count(((struct sMultEqualNode*)(right_value244=(struct sMultEqualNode*)come_calloc(1, sizeof(struct sMultEqualNode)*(1), "sMultEqualNode_clone", 3, "sMultEqualNode"))));
                            come_call_finalizer2(sMultEqualNode_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 5 "sMultEqualNode_clone"
                            # 4 "sMultEqualNode_clone"
                            if(_if_conditional235=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional235) {
                                # 4 "sMultEqualNode_clone"
                                __dec_obj111=result_150->mLeft;
                                result_150->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value245=sNode_clone(self->mLeft))));
                                if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count2(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value245) { right_value245 = come_decrement_ref_count2(right_value245, ((struct sNode*)right_value245)->finalize, ((struct sNode*)right_value245)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            # 6 "sMultEqualNode_clone"
                            # 5 "sMultEqualNode_clone"
                            if(_if_conditional236=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional236) {
                                # 5 "sMultEqualNode_clone"
                                __dec_obj112=result_150->mRight;
                                result_150->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value246=sNode_clone(self->mRight))));
                                if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count2(__dec_obj112, ((struct sNode*)__dec_obj112)->finalize, ((struct sNode*)__dec_obj112)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value246) { right_value246 = come_decrement_ref_count2(right_value246, ((struct sNode*)right_value246)->finalize, ((struct sNode*)right_value246)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            # 7 "sMultEqualNode_clone"
                            # 6 "sMultEqualNode_clone"
                            if(_if_conditional237=self!=((void*)0),                            _if_conditional237) {
                                # 6 "sMultEqualNode_clone"
                                result_150->mQuote=self->mQuote;
                            }
                            # 8 "sMultEqualNode_clone"
                            # 7 "sMultEqualNode_clone"
                            if(_if_conditional238=self!=((void*)0),                            _if_conditional238) {
                                # 7 "sMultEqualNode_clone"
                                result_150->sline=self->sline;
                            }
                            # 9 "sMultEqualNode_clone"
                            # 8 "sMultEqualNode_clone"
                            if(_if_conditional239=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional239) {
                                # 8 "sMultEqualNode_clone"
                                __dec_obj113=result_150->sname;
                                result_150->sname=(char*)come_increment_ref_count(((char*)(right_value247=string_clone(self->sname))));
                                __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 9 "sMultEqualNode_clone"
                            __result168__ = __result_obj__ = result_150;
                            come_call_finalizer2(sMultEqualNode_finalize,result_150, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result168__;
                            come_call_finalizer2(sMultEqualNode_finalize,result_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sDivEqualNode_finalize(struct sDivEqualNode* self){
void* __result_obj__;
_Bool _if_conditional242;
_Bool _if_conditional243;
_Bool _if_conditional244;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sDivEqualNode_finalize"
                                # 0 "sDivEqualNode_finalize"
                                if(_if_conditional242=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional242) {
                                    # 0 "sDivEqualNode_finalize"
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                # 2 "sDivEqualNode_finalize"
                                # 1 "sDivEqualNode_finalize"
                                if(_if_conditional243=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional243) {
                                    # 1 "sDivEqualNode_finalize"
                                    if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                # 3 "sDivEqualNode_finalize"
                                # 2 "sDivEqualNode_finalize"
                                if(_if_conditional244=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional244) {
                                    # 2 "sDivEqualNode_finalize"
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sDivEqualNode* sDivEqualNode_clone(struct sDivEqualNode* self){
void* __result_obj__;
_Bool _if_conditional245;
struct sDivEqualNode* __result170__;
void* right_value252;
struct sDivEqualNode* result_153;
_Bool _if_conditional246;
void* right_value253;
struct sNode* __dec_obj114;
_Bool _if_conditional247;
void* right_value254;
struct sNode* __dec_obj115;
_Bool _if_conditional248;
_Bool _if_conditional249;
_Bool _if_conditional250;
void* right_value255;
char* __dec_obj116;
struct sDivEqualNode* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
right_value252 = (void*)0;
memset(&result_153, 0, sizeof(struct sDivEqualNode*));
right_value253 = (void*)0;
right_value254 = (void*)0;
right_value255 = (void*)0;
                                # 3 "sDivEqualNode_clone"
                                # 2 "sDivEqualNode_clone"
                                if(_if_conditional245=self==(void*)0,                                _if_conditional245) {
                                    # 2 "sDivEqualNode_clone"
                                    __result170__ = __result_obj__ = (void*)0;
                                    return __result170__;
                                }
                                # 3 "sDivEqualNode_clone"
                                result_153=(struct sDivEqualNode*)come_increment_ref_count(((struct sDivEqualNode*)(right_value252=(struct sDivEqualNode*)come_calloc(1, sizeof(struct sDivEqualNode)*(1), "sDivEqualNode_clone", 3, "sDivEqualNode"))));
                                come_call_finalizer2(sDivEqualNode_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 5 "sDivEqualNode_clone"
                                # 4 "sDivEqualNode_clone"
                                if(_if_conditional246=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional246) {
                                    # 4 "sDivEqualNode_clone"
                                    __dec_obj114=result_153->mLeft;
                                    result_153->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value253=sNode_clone(self->mLeft))));
                                    if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count2(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value253) { right_value253 = come_decrement_ref_count2(right_value253, ((struct sNode*)right_value253)->finalize, ((struct sNode*)right_value253)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                # 6 "sDivEqualNode_clone"
                                # 5 "sDivEqualNode_clone"
                                if(_if_conditional247=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional247) {
                                    # 5 "sDivEqualNode_clone"
                                    __dec_obj115=result_153->mRight;
                                    result_153->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value254=sNode_clone(self->mRight))));
                                    if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count2(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value254) { right_value254 = come_decrement_ref_count2(right_value254, ((struct sNode*)right_value254)->finalize, ((struct sNode*)right_value254)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                # 7 "sDivEqualNode_clone"
                                # 6 "sDivEqualNode_clone"
                                if(_if_conditional248=self!=((void*)0),                                _if_conditional248) {
                                    # 6 "sDivEqualNode_clone"
                                    result_153->mQuote=self->mQuote;
                                }
                                # 8 "sDivEqualNode_clone"
                                # 7 "sDivEqualNode_clone"
                                if(_if_conditional249=self!=((void*)0),                                _if_conditional249) {
                                    # 7 "sDivEqualNode_clone"
                                    result_153->sline=self->sline;
                                }
                                # 9 "sDivEqualNode_clone"
                                # 8 "sDivEqualNode_clone"
                                if(_if_conditional250=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional250) {
                                    # 8 "sDivEqualNode_clone"
                                    __dec_obj116=result_153->sname;
                                    result_153->sname=(char*)come_increment_ref_count(((char*)(right_value255=string_clone(self->sname))));
                                    __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                # 9 "sDivEqualNode_clone"
                                __result171__ = __result_obj__ = result_153;
                                come_call_finalizer2(sDivEqualNode_finalize,result_153, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result171__;
                                come_call_finalizer2(sDivEqualNode_finalize,result_153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sModEqualNode_finalize(struct sModEqualNode* self){
void* __result_obj__;
_Bool _if_conditional253;
_Bool _if_conditional254;
_Bool _if_conditional255;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "sModEqualNode_finalize"
                                    # 0 "sModEqualNode_finalize"
                                    if(_if_conditional253=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional253) {
                                        # 0 "sModEqualNode_finalize"
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    # 2 "sModEqualNode_finalize"
                                    # 1 "sModEqualNode_finalize"
                                    if(_if_conditional254=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional254) {
                                        # 1 "sModEqualNode_finalize"
                                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    # 3 "sModEqualNode_finalize"
                                    # 2 "sModEqualNode_finalize"
                                    if(_if_conditional255=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional255) {
                                        # 2 "sModEqualNode_finalize"
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sModEqualNode* sModEqualNode_clone(struct sModEqualNode* self){
void* __result_obj__;
_Bool _if_conditional256;
struct sModEqualNode* __result173__;
void* right_value260;
struct sModEqualNode* result_156;
_Bool _if_conditional257;
void* right_value261;
struct sNode* __dec_obj117;
_Bool _if_conditional258;
void* right_value262;
struct sNode* __dec_obj118;
_Bool _if_conditional259;
_Bool _if_conditional260;
_Bool _if_conditional261;
void* right_value263;
char* __dec_obj119;
struct sModEqualNode* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
right_value260 = (void*)0;
memset(&result_156, 0, sizeof(struct sModEqualNode*));
right_value261 = (void*)0;
right_value262 = (void*)0;
right_value263 = (void*)0;
                                    # 3 "sModEqualNode_clone"
                                    # 2 "sModEqualNode_clone"
                                    if(_if_conditional256=self==(void*)0,                                    _if_conditional256) {
                                        # 2 "sModEqualNode_clone"
                                        __result173__ = __result_obj__ = (void*)0;
                                        return __result173__;
                                    }
                                    # 3 "sModEqualNode_clone"
                                    result_156=(struct sModEqualNode*)come_increment_ref_count(((struct sModEqualNode*)(right_value260=(struct sModEqualNode*)come_calloc(1, sizeof(struct sModEqualNode)*(1), "sModEqualNode_clone", 3, "sModEqualNode"))));
                                    come_call_finalizer2(sModEqualNode_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 5 "sModEqualNode_clone"
                                    # 4 "sModEqualNode_clone"
                                    if(_if_conditional257=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional257) {
                                        # 4 "sModEqualNode_clone"
                                        __dec_obj117=result_156->mLeft;
                                        result_156->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value261=sNode_clone(self->mLeft))));
                                        if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count2(__dec_obj117, ((struct sNode*)__dec_obj117)->finalize, ((struct sNode*)__dec_obj117)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value261) { right_value261 = come_decrement_ref_count2(right_value261, ((struct sNode*)right_value261)->finalize, ((struct sNode*)right_value261)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    # 6 "sModEqualNode_clone"
                                    # 5 "sModEqualNode_clone"
                                    if(_if_conditional258=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional258) {
                                        # 5 "sModEqualNode_clone"
                                        __dec_obj118=result_156->mRight;
                                        result_156->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value262=sNode_clone(self->mRight))));
                                        if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count2(__dec_obj118, ((struct sNode*)__dec_obj118)->finalize, ((struct sNode*)__dec_obj118)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value262) { right_value262 = come_decrement_ref_count2(right_value262, ((struct sNode*)right_value262)->finalize, ((struct sNode*)right_value262)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    # 7 "sModEqualNode_clone"
                                    # 6 "sModEqualNode_clone"
                                    if(_if_conditional259=self!=((void*)0),                                    _if_conditional259) {
                                        # 6 "sModEqualNode_clone"
                                        result_156->mQuote=self->mQuote;
                                    }
                                    # 8 "sModEqualNode_clone"
                                    # 7 "sModEqualNode_clone"
                                    if(_if_conditional260=self!=((void*)0),                                    _if_conditional260) {
                                        # 7 "sModEqualNode_clone"
                                        result_156->sline=self->sline;
                                    }
                                    # 9 "sModEqualNode_clone"
                                    # 8 "sModEqualNode_clone"
                                    if(_if_conditional261=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional261) {
                                        # 8 "sModEqualNode_clone"
                                        __dec_obj119=result_156->sname;
                                        result_156->sname=(char*)come_increment_ref_count(((char*)(right_value263=string_clone(self->sname))));
                                        __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 9 "sModEqualNode_clone"
                                    __result174__ = __result_obj__ = result_156;
                                    come_call_finalizer2(sModEqualNode_finalize,result_156, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result174__;
                                    come_call_finalizer2(sModEqualNode_finalize,result_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sLShifEqualNode_finalize(struct sLShifEqualNode* self){
void* __result_obj__;
_Bool _if_conditional264;
_Bool _if_conditional265;
_Bool _if_conditional266;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "sLShifEqualNode_finalize"
                                        # 0 "sLShifEqualNode_finalize"
                                        if(_if_conditional264=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional264) {
                                            # 0 "sLShifEqualNode_finalize"
                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        # 2 "sLShifEqualNode_finalize"
                                        # 1 "sLShifEqualNode_finalize"
                                        if(_if_conditional265=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional265) {
                                            # 1 "sLShifEqualNode_finalize"
                                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        # 3 "sLShifEqualNode_finalize"
                                        # 2 "sLShifEqualNode_finalize"
                                        if(_if_conditional266=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional266) {
                                            # 2 "sLShifEqualNode_finalize"
                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
}

static struct sLShifEqualNode* sLShifEqualNode_clone(struct sLShifEqualNode* self){
void* __result_obj__;
_Bool _if_conditional267;
struct sLShifEqualNode* __result176__;
void* right_value268;
struct sLShifEqualNode* result_159;
_Bool _if_conditional268;
void* right_value269;
struct sNode* __dec_obj120;
_Bool _if_conditional269;
void* right_value270;
struct sNode* __dec_obj121;
_Bool _if_conditional270;
_Bool _if_conditional271;
_Bool _if_conditional272;
void* right_value271;
char* __dec_obj122;
struct sLShifEqualNode* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
right_value268 = (void*)0;
memset(&result_159, 0, sizeof(struct sLShifEqualNode*));
right_value269 = (void*)0;
right_value270 = (void*)0;
right_value271 = (void*)0;
                                        # 3 "sLShifEqualNode_clone"
                                        # 2 "sLShifEqualNode_clone"
                                        if(_if_conditional267=self==(void*)0,                                        _if_conditional267) {
                                            # 2 "sLShifEqualNode_clone"
                                            __result176__ = __result_obj__ = (void*)0;
                                            return __result176__;
                                        }
                                        # 3 "sLShifEqualNode_clone"
                                        result_159=(struct sLShifEqualNode*)come_increment_ref_count(((struct sLShifEqualNode*)(right_value268=(struct sLShifEqualNode*)come_calloc(1, sizeof(struct sLShifEqualNode)*(1), "sLShifEqualNode_clone", 3, "sLShifEqualNode"))));
                                        come_call_finalizer2(sLShifEqualNode_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 5 "sLShifEqualNode_clone"
                                        # 4 "sLShifEqualNode_clone"
                                        if(_if_conditional268=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional268) {
                                            # 4 "sLShifEqualNode_clone"
                                            __dec_obj120=result_159->mLeft;
                                            result_159->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value269=sNode_clone(self->mLeft))));
                                            if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count2(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value269) { right_value269 = come_decrement_ref_count2(right_value269, ((struct sNode*)right_value269)->finalize, ((struct sNode*)right_value269)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        # 6 "sLShifEqualNode_clone"
                                        # 5 "sLShifEqualNode_clone"
                                        if(_if_conditional269=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional269) {
                                            # 5 "sLShifEqualNode_clone"
                                            __dec_obj121=result_159->mRight;
                                            result_159->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value270=sNode_clone(self->mRight))));
                                            if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count2(__dec_obj121, ((struct sNode*)__dec_obj121)->finalize, ((struct sNode*)__dec_obj121)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value270) { right_value270 = come_decrement_ref_count2(right_value270, ((struct sNode*)right_value270)->finalize, ((struct sNode*)right_value270)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        # 7 "sLShifEqualNode_clone"
                                        # 6 "sLShifEqualNode_clone"
                                        if(_if_conditional270=self!=((void*)0),                                        _if_conditional270) {
                                            # 6 "sLShifEqualNode_clone"
                                            result_159->mQuote=self->mQuote;
                                        }
                                        # 8 "sLShifEqualNode_clone"
                                        # 7 "sLShifEqualNode_clone"
                                        if(_if_conditional271=self!=((void*)0),                                        _if_conditional271) {
                                            # 7 "sLShifEqualNode_clone"
                                            result_159->sline=self->sline;
                                        }
                                        # 9 "sLShifEqualNode_clone"
                                        # 8 "sLShifEqualNode_clone"
                                        if(_if_conditional272=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional272) {
                                            # 8 "sLShifEqualNode_clone"
                                            __dec_obj122=result_159->sname;
                                            result_159->sname=(char*)come_increment_ref_count(((char*)(right_value271=string_clone(self->sname))));
                                            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        # 9 "sLShifEqualNode_clone"
                                        __result177__ = __result_obj__ = result_159;
                                        come_call_finalizer2(sLShifEqualNode_finalize,result_159, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result177__;
                                        come_call_finalizer2(sLShifEqualNode_finalize,result_159, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sRShiftEqualNode_finalize(struct sRShiftEqualNode* self){
void* __result_obj__;
_Bool _if_conditional275;
_Bool _if_conditional276;
_Bool _if_conditional277;
memset(&__result_obj__, 0, sizeof(void*));
                                            # 1 "sRShiftEqualNode_finalize"
                                            # 0 "sRShiftEqualNode_finalize"
                                            if(_if_conditional275=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional275) {
                                                # 0 "sRShiftEqualNode_finalize"
                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            # 2 "sRShiftEqualNode_finalize"
                                            # 1 "sRShiftEqualNode_finalize"
                                            if(_if_conditional276=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional276) {
                                                # 1 "sRShiftEqualNode_finalize"
                                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            # 3 "sRShiftEqualNode_finalize"
                                            # 2 "sRShiftEqualNode_finalize"
                                            if(_if_conditional277=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional277) {
                                                # 2 "sRShiftEqualNode_finalize"
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
}

static struct sRShiftEqualNode* sRShiftEqualNode_clone(struct sRShiftEqualNode* self){
void* __result_obj__;
_Bool _if_conditional278;
struct sRShiftEqualNode* __result179__;
void* right_value276;
struct sRShiftEqualNode* result_162;
_Bool _if_conditional279;
void* right_value277;
struct sNode* __dec_obj123;
_Bool _if_conditional280;
void* right_value278;
struct sNode* __dec_obj124;
_Bool _if_conditional281;
_Bool _if_conditional282;
_Bool _if_conditional283;
void* right_value279;
char* __dec_obj125;
struct sRShiftEqualNode* __result180__;
memset(&__result_obj__, 0, sizeof(void*));
right_value276 = (void*)0;
memset(&result_162, 0, sizeof(struct sRShiftEqualNode*));
right_value277 = (void*)0;
right_value278 = (void*)0;
right_value279 = (void*)0;
                                            # 3 "sRShiftEqualNode_clone"
                                            # 2 "sRShiftEqualNode_clone"
                                            if(_if_conditional278=self==(void*)0,                                            _if_conditional278) {
                                                # 2 "sRShiftEqualNode_clone"
                                                __result179__ = __result_obj__ = (void*)0;
                                                return __result179__;
                                            }
                                            # 3 "sRShiftEqualNode_clone"
                                            result_162=(struct sRShiftEqualNode*)come_increment_ref_count(((struct sRShiftEqualNode*)(right_value276=(struct sRShiftEqualNode*)come_calloc(1, sizeof(struct sRShiftEqualNode)*(1), "sRShiftEqualNode_clone", 3, "sRShiftEqualNode"))));
                                            come_call_finalizer2(sRShiftEqualNode_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            # 5 "sRShiftEqualNode_clone"
                                            # 4 "sRShiftEqualNode_clone"
                                            if(_if_conditional279=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional279) {
                                                # 4 "sRShiftEqualNode_clone"
                                                __dec_obj123=result_162->mLeft;
                                                result_162->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value277=sNode_clone(self->mLeft))));
                                                if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count2(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value277) { right_value277 = come_decrement_ref_count2(right_value277, ((struct sNode*)right_value277)->finalize, ((struct sNode*)right_value277)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            # 6 "sRShiftEqualNode_clone"
                                            # 5 "sRShiftEqualNode_clone"
                                            if(_if_conditional280=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional280) {
                                                # 5 "sRShiftEqualNode_clone"
                                                __dec_obj124=result_162->mRight;
                                                result_162->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value278=sNode_clone(self->mRight))));
                                                if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count2(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value278) { right_value278 = come_decrement_ref_count2(right_value278, ((struct sNode*)right_value278)->finalize, ((struct sNode*)right_value278)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            # 7 "sRShiftEqualNode_clone"
                                            # 6 "sRShiftEqualNode_clone"
                                            if(_if_conditional281=self!=((void*)0),                                            _if_conditional281) {
                                                # 6 "sRShiftEqualNode_clone"
                                                result_162->mQuote=self->mQuote;
                                            }
                                            # 8 "sRShiftEqualNode_clone"
                                            # 7 "sRShiftEqualNode_clone"
                                            if(_if_conditional282=self!=((void*)0),                                            _if_conditional282) {
                                                # 7 "sRShiftEqualNode_clone"
                                                result_162->sline=self->sline;
                                            }
                                            # 9 "sRShiftEqualNode_clone"
                                            # 8 "sRShiftEqualNode_clone"
                                            if(_if_conditional283=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional283) {
                                                # 8 "sRShiftEqualNode_clone"
                                                __dec_obj125=result_162->sname;
                                                result_162->sname=(char*)come_increment_ref_count(((char*)(right_value279=string_clone(self->sname))));
                                                __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            # 9 "sRShiftEqualNode_clone"
                                            __result180__ = __result_obj__ = result_162;
                                            come_call_finalizer2(sRShiftEqualNode_finalize,result_162, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result180__;
                                            come_call_finalizer2(sRShiftEqualNode_finalize,result_162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sXorEqualNode_finalize(struct sXorEqualNode* self){
void* __result_obj__;
_Bool _if_conditional286;
_Bool _if_conditional287;
_Bool _if_conditional288;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "sXorEqualNode_finalize"
                                                # 0 "sXorEqualNode_finalize"
                                                if(_if_conditional286=self!=((void*)0)&&self->mLeft!=((void*)0),                                                _if_conditional286) {
                                                    # 0 "sXorEqualNode_finalize"
                                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                # 2 "sXorEqualNode_finalize"
                                                # 1 "sXorEqualNode_finalize"
                                                if(_if_conditional287=self!=((void*)0)&&self->mRight!=((void*)0),                                                _if_conditional287) {
                                                    # 1 "sXorEqualNode_finalize"
                                                    if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                # 3 "sXorEqualNode_finalize"
                                                # 2 "sXorEqualNode_finalize"
                                                if(_if_conditional288=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional288) {
                                                    # 2 "sXorEqualNode_finalize"
                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
}

static struct sXorEqualNode* sXorEqualNode_clone(struct sXorEqualNode* self){
void* __result_obj__;
_Bool _if_conditional289;
struct sXorEqualNode* __result182__;
void* right_value284;
struct sXorEqualNode* result_165;
_Bool _if_conditional290;
void* right_value285;
struct sNode* __dec_obj126;
_Bool _if_conditional291;
void* right_value286;
struct sNode* __dec_obj127;
_Bool _if_conditional292;
_Bool _if_conditional293;
_Bool _if_conditional294;
void* right_value287;
char* __dec_obj128;
struct sXorEqualNode* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
right_value284 = (void*)0;
memset(&result_165, 0, sizeof(struct sXorEqualNode*));
right_value285 = (void*)0;
right_value286 = (void*)0;
right_value287 = (void*)0;
                                                # 3 "sXorEqualNode_clone"
                                                # 2 "sXorEqualNode_clone"
                                                if(_if_conditional289=self==(void*)0,                                                _if_conditional289) {
                                                    # 2 "sXorEqualNode_clone"
                                                    __result182__ = __result_obj__ = (void*)0;
                                                    return __result182__;
                                                }
                                                # 3 "sXorEqualNode_clone"
                                                result_165=(struct sXorEqualNode*)come_increment_ref_count(((struct sXorEqualNode*)(right_value284=(struct sXorEqualNode*)come_calloc(1, sizeof(struct sXorEqualNode)*(1), "sXorEqualNode_clone", 3, "sXorEqualNode"))));
                                                come_call_finalizer2(sXorEqualNode_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                # 5 "sXorEqualNode_clone"
                                                # 4 "sXorEqualNode_clone"
                                                if(_if_conditional290=self!=((void*)0)&&self->mLeft!=((void*)0),                                                _if_conditional290) {
                                                    # 4 "sXorEqualNode_clone"
                                                    __dec_obj126=result_165->mLeft;
                                                    result_165->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value285=sNode_clone(self->mLeft))));
                                                    if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count2(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0,0,0, (void*)0); }
                                                    if(right_value285) { right_value285 = come_decrement_ref_count2(right_value285, ((struct sNode*)right_value285)->finalize, ((struct sNode*)right_value285)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                }
                                                # 6 "sXorEqualNode_clone"
                                                # 5 "sXorEqualNode_clone"
                                                if(_if_conditional291=self!=((void*)0)&&self->mRight!=((void*)0),                                                _if_conditional291) {
                                                    # 5 "sXorEqualNode_clone"
                                                    __dec_obj127=result_165->mRight;
                                                    result_165->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value286=sNode_clone(self->mRight))));
                                                    if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count2(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0,0,0, (void*)0); }
                                                    if(right_value286) { right_value286 = come_decrement_ref_count2(right_value286, ((struct sNode*)right_value286)->finalize, ((struct sNode*)right_value286)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                }
                                                # 7 "sXorEqualNode_clone"
                                                # 6 "sXorEqualNode_clone"
                                                if(_if_conditional292=self!=((void*)0),                                                _if_conditional292) {
                                                    # 6 "sXorEqualNode_clone"
                                                    result_165->mQuote=self->mQuote;
                                                }
                                                # 8 "sXorEqualNode_clone"
                                                # 7 "sXorEqualNode_clone"
                                                if(_if_conditional293=self!=((void*)0),                                                _if_conditional293) {
                                                    # 7 "sXorEqualNode_clone"
                                                    result_165->sline=self->sline;
                                                }
                                                # 9 "sXorEqualNode_clone"
                                                # 8 "sXorEqualNode_clone"
                                                if(_if_conditional294=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional294) {
                                                    # 8 "sXorEqualNode_clone"
                                                    __dec_obj128=result_165->sname;
                                                    result_165->sname=(char*)come_increment_ref_count(((char*)(right_value287=string_clone(self->sname))));
                                                    __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                # 9 "sXorEqualNode_clone"
                                                __result183__ = __result_obj__ = result_165;
                                                come_call_finalizer2(sXorEqualNode_finalize,result_165, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result183__;
                                                come_call_finalizer2(sXorEqualNode_finalize,result_165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sAndEqualNode_finalize(struct sAndEqualNode* self){
void* __result_obj__;
_Bool _if_conditional297;
_Bool _if_conditional298;
_Bool _if_conditional299;
memset(&__result_obj__, 0, sizeof(void*));
                                                    # 1 "sAndEqualNode_finalize"
                                                    # 0 "sAndEqualNode_finalize"
                                                    if(_if_conditional297=self!=((void*)0)&&self->mLeft!=((void*)0),                                                    _if_conditional297) {
                                                        # 0 "sAndEqualNode_finalize"
                                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    # 2 "sAndEqualNode_finalize"
                                                    # 1 "sAndEqualNode_finalize"
                                                    if(_if_conditional298=self!=((void*)0)&&self->mRight!=((void*)0),                                                    _if_conditional298) {
                                                        # 1 "sAndEqualNode_finalize"
                                                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    # 3 "sAndEqualNode_finalize"
                                                    # 2 "sAndEqualNode_finalize"
                                                    if(_if_conditional299=self!=((void*)0)&&self->sname!=((void*)0),                                                    _if_conditional299) {
                                                        # 2 "sAndEqualNode_finalize"
                                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
}

static struct sAndEqualNode* sAndEqualNode_clone(struct sAndEqualNode* self){
void* __result_obj__;
_Bool _if_conditional300;
struct sAndEqualNode* __result185__;
void* right_value292;
struct sAndEqualNode* result_168;
_Bool _if_conditional301;
void* right_value293;
struct sNode* __dec_obj129;
_Bool _if_conditional302;
void* right_value294;
struct sNode* __dec_obj130;
_Bool _if_conditional303;
_Bool _if_conditional304;
_Bool _if_conditional305;
void* right_value295;
char* __dec_obj131;
struct sAndEqualNode* __result186__;
memset(&__result_obj__, 0, sizeof(void*));
right_value292 = (void*)0;
memset(&result_168, 0, sizeof(struct sAndEqualNode*));
right_value293 = (void*)0;
right_value294 = (void*)0;
right_value295 = (void*)0;
                                                    # 3 "sAndEqualNode_clone"
                                                    # 2 "sAndEqualNode_clone"
                                                    if(_if_conditional300=self==(void*)0,                                                    _if_conditional300) {
                                                        # 2 "sAndEqualNode_clone"
                                                        __result185__ = __result_obj__ = (void*)0;
                                                        return __result185__;
                                                    }
                                                    # 3 "sAndEqualNode_clone"
                                                    result_168=(struct sAndEqualNode*)come_increment_ref_count(((struct sAndEqualNode*)(right_value292=(struct sAndEqualNode*)come_calloc(1, sizeof(struct sAndEqualNode)*(1), "sAndEqualNode_clone", 3, "sAndEqualNode"))));
                                                    come_call_finalizer2(sAndEqualNode_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    # 5 "sAndEqualNode_clone"
                                                    # 4 "sAndEqualNode_clone"
                                                    if(_if_conditional301=self!=((void*)0)&&self->mLeft!=((void*)0),                                                    _if_conditional301) {
                                                        # 4 "sAndEqualNode_clone"
                                                        __dec_obj129=result_168->mLeft;
                                                        result_168->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value293=sNode_clone(self->mLeft))));
                                                        if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count2(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0,0, (void*)0); }
                                                        if(right_value293) { right_value293 = come_decrement_ref_count2(right_value293, ((struct sNode*)right_value293)->finalize, ((struct sNode*)right_value293)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    }
                                                    # 6 "sAndEqualNode_clone"
                                                    # 5 "sAndEqualNode_clone"
                                                    if(_if_conditional302=self!=((void*)0)&&self->mRight!=((void*)0),                                                    _if_conditional302) {
                                                        # 5 "sAndEqualNode_clone"
                                                        __dec_obj130=result_168->mRight;
                                                        result_168->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value294=sNode_clone(self->mRight))));
                                                        if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count2(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0,0,0, (void*)0); }
                                                        if(right_value294) { right_value294 = come_decrement_ref_count2(right_value294, ((struct sNode*)right_value294)->finalize, ((struct sNode*)right_value294)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    }
                                                    # 7 "sAndEqualNode_clone"
                                                    # 6 "sAndEqualNode_clone"
                                                    if(_if_conditional303=self!=((void*)0),                                                    _if_conditional303) {
                                                        # 6 "sAndEqualNode_clone"
                                                        result_168->mQuote=self->mQuote;
                                                    }
                                                    # 8 "sAndEqualNode_clone"
                                                    # 7 "sAndEqualNode_clone"
                                                    if(_if_conditional304=self!=((void*)0),                                                    _if_conditional304) {
                                                        # 7 "sAndEqualNode_clone"
                                                        result_168->sline=self->sline;
                                                    }
                                                    # 9 "sAndEqualNode_clone"
                                                    # 8 "sAndEqualNode_clone"
                                                    if(_if_conditional305=self!=((void*)0)&&self->sname!=((void*)0),                                                    _if_conditional305) {
                                                        # 8 "sAndEqualNode_clone"
                                                        __dec_obj131=result_168->sname;
                                                        result_168->sname=(char*)come_increment_ref_count(((char*)(right_value295=string_clone(self->sname))));
                                                        __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        right_value295 = come_decrement_ref_count2(right_value295, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    }
                                                    # 9 "sAndEqualNode_clone"
                                                    __result186__ = __result_obj__ = result_168;
                                                    come_call_finalizer2(sAndEqualNode_finalize,result_168, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                    return __result186__;
                                                    come_call_finalizer2(sAndEqualNode_finalize,result_168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sOrEqualNode_finalize(struct sOrEqualNode* self){
void* __result_obj__;
_Bool _if_conditional308;
_Bool _if_conditional309;
_Bool _if_conditional310;
memset(&__result_obj__, 0, sizeof(void*));
                                                        # 1 "sOrEqualNode_finalize"
                                                        # 0 "sOrEqualNode_finalize"
                                                        if(_if_conditional308=self!=((void*)0)&&self->mLeft!=((void*)0),                                                        _if_conditional308) {
                                                            # 0 "sOrEqualNode_finalize"
                                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
                                                        # 2 "sOrEqualNode_finalize"
                                                        # 1 "sOrEqualNode_finalize"
                                                        if(_if_conditional309=self!=((void*)0)&&self->mRight!=((void*)0),                                                        _if_conditional309) {
                                                            # 1 "sOrEqualNode_finalize"
                                                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
                                                        # 3 "sOrEqualNode_finalize"
                                                        # 2 "sOrEqualNode_finalize"
                                                        if(_if_conditional310=self!=((void*)0)&&self->sname!=((void*)0),                                                        _if_conditional310) {
                                                            # 2 "sOrEqualNode_finalize"
                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
}

static struct sOrEqualNode* sOrEqualNode_clone(struct sOrEqualNode* self){
void* __result_obj__;
_Bool _if_conditional311;
struct sOrEqualNode* __result188__;
void* right_value300;
struct sOrEqualNode* result_171;
_Bool _if_conditional312;
void* right_value301;
struct sNode* __dec_obj132;
_Bool _if_conditional313;
void* right_value302;
struct sNode* __dec_obj133;
_Bool _if_conditional314;
_Bool _if_conditional315;
_Bool _if_conditional316;
void* right_value303;
char* __dec_obj134;
struct sOrEqualNode* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
right_value300 = (void*)0;
memset(&result_171, 0, sizeof(struct sOrEqualNode*));
right_value301 = (void*)0;
right_value302 = (void*)0;
right_value303 = (void*)0;
                                                        # 3 "sOrEqualNode_clone"
                                                        # 2 "sOrEqualNode_clone"
                                                        if(_if_conditional311=self==(void*)0,                                                        _if_conditional311) {
                                                            # 2 "sOrEqualNode_clone"
                                                            __result188__ = __result_obj__ = (void*)0;
                                                            return __result188__;
                                                        }
                                                        # 3 "sOrEqualNode_clone"
                                                        result_171=(struct sOrEqualNode*)come_increment_ref_count(((struct sOrEqualNode*)(right_value300=(struct sOrEqualNode*)come_calloc(1, sizeof(struct sOrEqualNode)*(1), "sOrEqualNode_clone", 3, "sOrEqualNode"))));
                                                        come_call_finalizer2(sOrEqualNode_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        # 5 "sOrEqualNode_clone"
                                                        # 4 "sOrEqualNode_clone"
                                                        if(_if_conditional312=self!=((void*)0)&&self->mLeft!=((void*)0),                                                        _if_conditional312) {
                                                            # 4 "sOrEqualNode_clone"
                                                            __dec_obj132=result_171->mLeft;
                                                            result_171->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value301=sNode_clone(self->mLeft))));
                                                            if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count2(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0,0, (void*)0); }
                                                            if(right_value301) { right_value301 = come_decrement_ref_count2(right_value301, ((struct sNode*)right_value301)->finalize, ((struct sNode*)right_value301)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        }
                                                        # 6 "sOrEqualNode_clone"
                                                        # 5 "sOrEqualNode_clone"
                                                        if(_if_conditional313=self!=((void*)0)&&self->mRight!=((void*)0),                                                        _if_conditional313) {
                                                            # 5 "sOrEqualNode_clone"
                                                            __dec_obj133=result_171->mRight;
                                                            result_171->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value302=sNode_clone(self->mRight))));
                                                            if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count2(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0,0, (void*)0); }
                                                            if(right_value302) { right_value302 = come_decrement_ref_count2(right_value302, ((struct sNode*)right_value302)->finalize, ((struct sNode*)right_value302)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        }
                                                        # 7 "sOrEqualNode_clone"
                                                        # 6 "sOrEqualNode_clone"
                                                        if(_if_conditional314=self!=((void*)0),                                                        _if_conditional314) {
                                                            # 6 "sOrEqualNode_clone"
                                                            result_171->mQuote=self->mQuote;
                                                        }
                                                        # 8 "sOrEqualNode_clone"
                                                        # 7 "sOrEqualNode_clone"
                                                        if(_if_conditional315=self!=((void*)0),                                                        _if_conditional315) {
                                                            # 7 "sOrEqualNode_clone"
                                                            result_171->sline=self->sline;
                                                        }
                                                        # 9 "sOrEqualNode_clone"
                                                        # 8 "sOrEqualNode_clone"
                                                        if(_if_conditional316=self!=((void*)0)&&self->sname!=((void*)0),                                                        _if_conditional316) {
                                                            # 8 "sOrEqualNode_clone"
                                                            __dec_obj134=result_171->sname;
                                                            result_171->sname=(char*)come_increment_ref_count(((char*)(right_value303=string_clone(self->sname))));
                                                            __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            right_value303 = come_decrement_ref_count2(right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        }
                                                        # 9 "sOrEqualNode_clone"
                                                        __result189__ = __result_obj__ = result_171;
                                                        come_call_finalizer2(sOrEqualNode_finalize,result_171, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                        return __result189__;
                                                        come_call_finalizer2(sOrEqualNode_finalize,result_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sExpEqualNode_finalize(struct sExpEqualNode* self){
void* __result_obj__;
_Bool _if_conditional319;
_Bool _if_conditional320;
_Bool _if_conditional321;
memset(&__result_obj__, 0, sizeof(void*));
                                                            # 1 "sExpEqualNode_finalize"
                                                            # 0 "sExpEqualNode_finalize"
                                                            if(_if_conditional319=self!=((void*)0)&&self->mLeft!=((void*)0),                                                            _if_conditional319) {
                                                                # 0 "sExpEqualNode_finalize"
                                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
                                                            # 2 "sExpEqualNode_finalize"
                                                            # 1 "sExpEqualNode_finalize"
                                                            if(_if_conditional320=self!=((void*)0)&&self->mRight!=((void*)0),                                                            _if_conditional320) {
                                                                # 1 "sExpEqualNode_finalize"
                                                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
                                                            # 3 "sExpEqualNode_finalize"
                                                            # 2 "sExpEqualNode_finalize"
                                                            if(_if_conditional321=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional321) {
                                                                # 2 "sExpEqualNode_finalize"
                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            }
}

static struct sExpEqualNode* sExpEqualNode_clone(struct sExpEqualNode* self){
void* __result_obj__;
_Bool _if_conditional322;
struct sExpEqualNode* __result191__;
void* right_value308;
struct sExpEqualNode* result_174;
_Bool _if_conditional323;
void* right_value309;
struct sNode* __dec_obj135;
_Bool _if_conditional324;
void* right_value310;
struct sNode* __dec_obj136;
_Bool _if_conditional325;
_Bool _if_conditional326;
_Bool _if_conditional327;
void* right_value311;
char* __dec_obj137;
struct sExpEqualNode* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
right_value308 = (void*)0;
memset(&result_174, 0, sizeof(struct sExpEqualNode*));
right_value309 = (void*)0;
right_value310 = (void*)0;
right_value311 = (void*)0;
                                                            # 3 "sExpEqualNode_clone"
                                                            # 2 "sExpEqualNode_clone"
                                                            if(_if_conditional322=self==(void*)0,                                                            _if_conditional322) {
                                                                # 2 "sExpEqualNode_clone"
                                                                __result191__ = __result_obj__ = (void*)0;
                                                                return __result191__;
                                                            }
                                                            # 3 "sExpEqualNode_clone"
                                                            result_174=(struct sExpEqualNode*)come_increment_ref_count(((struct sExpEqualNode*)(right_value308=(struct sExpEqualNode*)come_calloc(1, sizeof(struct sExpEqualNode)*(1), "sExpEqualNode_clone", 3, "sExpEqualNode"))));
                                                            come_call_finalizer2(sExpEqualNode_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            # 5 "sExpEqualNode_clone"
                                                            # 4 "sExpEqualNode_clone"
                                                            if(_if_conditional323=self!=((void*)0)&&self->mLeft!=((void*)0),                                                            _if_conditional323) {
                                                                # 4 "sExpEqualNode_clone"
                                                                __dec_obj135=result_174->mLeft;
                                                                result_174->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value309=sNode_clone(self->mLeft))));
                                                                if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count2(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0, (void*)0); }
                                                                if(right_value309) { right_value309 = come_decrement_ref_count2(right_value309, ((struct sNode*)right_value309)->finalize, ((struct sNode*)right_value309)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            }
                                                            # 6 "sExpEqualNode_clone"
                                                            # 5 "sExpEqualNode_clone"
                                                            if(_if_conditional324=self!=((void*)0)&&self->mRight!=((void*)0),                                                            _if_conditional324) {
                                                                # 5 "sExpEqualNode_clone"
                                                                __dec_obj136=result_174->mRight;
                                                                result_174->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value310=sNode_clone(self->mRight))));
                                                                if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count2(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0,0, (void*)0); }
                                                                if(right_value310) { right_value310 = come_decrement_ref_count2(right_value310, ((struct sNode*)right_value310)->finalize, ((struct sNode*)right_value310)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            }
                                                            # 7 "sExpEqualNode_clone"
                                                            # 6 "sExpEqualNode_clone"
                                                            if(_if_conditional325=self!=((void*)0),                                                            _if_conditional325) {
                                                                # 6 "sExpEqualNode_clone"
                                                                result_174->mQuote=self->mQuote;
                                                            }
                                                            # 8 "sExpEqualNode_clone"
                                                            # 7 "sExpEqualNode_clone"
                                                            if(_if_conditional326=self!=((void*)0),                                                            _if_conditional326) {
                                                                # 7 "sExpEqualNode_clone"
                                                                result_174->sline=self->sline;
                                                            }
                                                            # 9 "sExpEqualNode_clone"
                                                            # 8 "sExpEqualNode_clone"
                                                            if(_if_conditional327=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional327) {
                                                                # 8 "sExpEqualNode_clone"
                                                                __dec_obj137=result_174->sname;
                                                                result_174->sname=(char*)come_increment_ref_count(((char*)(right_value311=string_clone(self->sname))));
                                                                __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value311 = come_decrement_ref_count2(right_value311, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            }
                                                            # 9 "sExpEqualNode_clone"
                                                            __result192__ = __result_obj__ = result_174;
                                                            come_call_finalizer2(sExpEqualNode_finalize,result_174, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                            return __result192__;
                                                            come_call_finalizer2(sExpEqualNode_finalize,result_174, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

