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
struct sStrNode
{
    char* value;
    int sline;
    char* sname;
};
struct sSStringNode
{
    char* value;
    struct list$1sNodeph* exps;
    int sline;
    char* sname;
};
struct sCharNode
{
    int value;
    int sline;
    char* sname;
};
struct sWCharNode
{
    unsigned int value;
    int sline;
    char* sname;
};
struct sWStringNode
{
    unsigned int* value;
    int sline;
    char* sname;
};
struct sRegexNode
{
    char* str;
    _Bool global;
    _Bool ignore_case;
    int sline;
    char* sname;
};
struct sListNode
{
    struct list$1sNodeph* list_elements;
    int sline;
    char* sname;
};
struct sTupleNode
{
    struct list$1sNodeph* tuple_elements;
    int sline;
    char* sname;
};
struct sMapNode
{
    struct list$1sNodeph* map_key_elements;
    struct list$1sNodeph* map_elements;
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

_Bool strmemcmp(char* p, char* p2);

void caller_begin(struct sInfo* info);

void caller_end(struct sInfo* info);

_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);

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

struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info);

_Bool sStrNode_terminated();

static char* double_quoted_string(char* str);
char* sStrNode_kind();

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info);

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
int sStrNode_sline(struct sStrNode* self, struct sInfo* info);

char* sStrNode_sname(struct sStrNode* self, struct sInfo* info);

struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info);

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
_Bool sSStringNode_terminated();

char* sSStringNode_kind();

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info);

static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* sType_clone(struct sType* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
int sSStringNode_sline(struct sSStringNode* self, struct sInfo* info);

char* sSStringNode_sname(struct sSStringNode* self, struct sInfo* info);

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info);

_Bool sCharNode_terminated();

char* sCharNode_kind();

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info);

int sCharNode_sline(struct sCharNode* self, struct sInfo* info);

char* sCharNode_sname(struct sCharNode* self, struct sInfo* info);

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, struct sInfo* info);

_Bool sWCharNode_terminated();

char* sWCharNode_kind();

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info);

int sWCharNode_sline(struct sWCharNode* self, struct sInfo* info);

char* sWCharNode_sname(struct sWCharNode* self, struct sInfo* info);

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info);

_Bool sWStringNode_terminated();

char* sWStringNode_kind();

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info);

int sWStringNode_sline(struct sWStringNode* self, struct sInfo* info);

char* sWStringNode_sname(struct sWStringNode* self, struct sInfo* info);

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info);

_Bool sRegexNode_terminated();

char* sRegexNode_kind();

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info);

int sRegexNode_sline(struct sRegexNode* self, struct sInfo* info);

char* sRegexNode_sname(struct sRegexNode* self, struct sInfo* info);

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info);

_Bool sListNode_terminated();

char* sListNode_kind();

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info);

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
int sListNode_sline(struct sListNode* self, struct sInfo* info);

char* sListNode_sname(struct sListNode* self, struct sInfo* info);

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info);

_Bool sTupleNode_terminated();

char* sTupleNode_kind();

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info);

static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
int sTupleNode_sline(struct sTupleNode* self, struct sInfo* info);

char* sTupleNode_sname(struct sTupleNode* self, struct sInfo* info);

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info);

_Bool sMapNode_terminated();

char* sMapNode_kind();

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info);

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
int sMapNode_sline(struct sMapNode* self, struct sInfo* info);

char* sMapNode_sname(struct sMapNode* self, struct sInfo* info);

struct sNode* expression_node_v98(struct sInfo* info);

static void sStrNode_finalize(struct sStrNode* self);
static struct sStrNode* sStrNode_clone(struct sStrNode* self);
static void sRegexNode_finalize(struct sRegexNode* self);
static struct sRegexNode* sRegexNode_clone(struct sRegexNode* self);
static void sCharNode_finalize(struct sCharNode* self);
static struct sCharNode* sCharNode_clone(struct sCharNode* self);
static void sWCharNode_finalize(struct sWCharNode* self);
static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self);
static void sWStringNode_finalize(struct sWStringNode* self);
static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self);
static void sSStringNode_finalize(struct sSStringNode* self);
static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self);
static void sMapNode_finalize(struct sMapNode* self);
static struct sMapNode* sMapNode_clone(struct sMapNode* self);
static void sListNode_finalize(struct sListNode* self);
static struct sListNode* sListNode_clone(struct sListNode* self);
struct sNode* parse_tuple(struct sInfo* info);

static void sTupleNode_finalize(struct sTupleNode* self);
static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self);
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
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1948, "smart_pointer$1char"))));
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
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1958, "smart_pointer$1char"))));
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
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 1968, "smart_pointer$1short"))));
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
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 1978, "smart_pointer$1int"))));
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
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 1988, "smart_pointer$1long"))));
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
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long int len){
void* __result_obj__;
void* right_value10;
void* right_value13;
struct smart_pointer$1char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
right_value13 = (void*)0;
    __result8__ = __result_obj__ = ((struct smart_pointer$1char*)(right_value13=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value10=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2156, "smart_pointer$1char")))),self,sizeof(char)*len)));
    come_call_finalizer2(smart_pointer$1charp_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1charp_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result8__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, unsigned long int len){
void* __result_obj__;
void* right_value14;
void* right_value17;
struct smart_pointer$1short* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
right_value14 = (void*)0;
right_value17 = (void*)0;
    __result10__ = __result_obj__ = ((struct smart_pointer$1short*)(right_value17=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value14=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2161, "smart_pointer$1short")))),self,sizeof(short short)*len)));
    come_call_finalizer2(smart_pointer$1shortp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1shortp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result10__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long int len){
void* __result_obj__;
void* right_value18;
void* right_value21;
struct smart_pointer$1int* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
right_value18 = (void*)0;
right_value21 = (void*)0;
    __result12__ = __result_obj__ = ((struct smart_pointer$1int*)(right_value21=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2166, "smart_pointer$1int")))),self,sizeof(int)*len)));
    come_call_finalizer2(smart_pointer$1intp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1intp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result12__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long int len){
void* __result_obj__;
void* right_value22;
void* right_value25;
struct smart_pointer$1long* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
right_value22 = (void*)0;
right_value25 = (void*)0;
    __result14__ = __result_obj__ = ((struct smart_pointer$1long*)(right_value25=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value22=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2171, "smart_pointer$1long")))),self,sizeof(long)*len)));
    come_call_finalizer2(smart_pointer$1longp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1longp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result14__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long int len){
void* __result_obj__;
void* right_value26;
void* right_value29;
struct smart_pointer$1float* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
right_value26 = (void*)0;
right_value29 = (void*)0;
    __result16__ = __result_obj__ = ((struct smart_pointer$1float*)(right_value29=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)(right_value26=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang2.h", 2176, "smart_pointer$1float")))),self,sizeof(float)*len)));
    come_call_finalizer2(smart_pointer$1floatp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1floatp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result16__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long int len){
void* __result_obj__;
void* right_value30;
void* right_value33;
struct smart_pointer$1double* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
right_value30 = (void*)0;
right_value33 = (void*)0;
    __result18__ = __result_obj__ = ((struct smart_pointer$1double*)(right_value33=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(right_value30=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang2.h", 2181, "smart_pointer$1double")))),self,sizeof(double)*len)));
    come_call_finalizer2(smart_pointer$1doublep_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1doublep_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result18__;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value34;
char* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
right_value34 = (void*)0;
    __result19__ = __result_obj__ = ((char*)(right_value34=xsprintf(msg,self)));
    right_value34 = come_decrement_ref_count2(right_value34, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result19__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value35;
char* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
right_value35 = (void*)0;
    __result20__ = __result_obj__ = ((char*)(right_value35=xsprintf(msg,self)));
    right_value35 = come_decrement_ref_count2(right_value35, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result20__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__;
void* right_value36;
char* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
right_value36 = (void*)0;
    __result21__ = __result_obj__ = ((char*)(right_value36=xsprintf(msg,self)));
    right_value36 = come_decrement_ref_count2(right_value36, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result21__;
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
void* right_value11;
void* right_value12;
struct buffer* __dec_obj6;
struct smart_pointer$1char* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
right_value11 = (void*)0;
right_value12 = (void*)0;
        __dec_obj6=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value12=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2000, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(char)*size);
        self->p=(char*)self->memory->buf;
        __result7__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1charp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result7__;
        come_call_finalizer2(smart_pointer$1charp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size){
void* __result_obj__;
void* right_value15;
void* right_value16;
struct buffer* __dec_obj7;
struct smart_pointer$1short* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
right_value15 = (void*)0;
right_value16 = (void*)0;
        __dec_obj7=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value16=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value15=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2000, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(short short)*size);
        self->p=(short short*)self->memory->buf;
        __result9__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1shortp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result9__;
        come_call_finalizer2(smart_pointer$1shortp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size){
void* __result_obj__;
void* right_value19;
void* right_value20;
struct buffer* __dec_obj8;
struct smart_pointer$1int* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
right_value19 = (void*)0;
right_value20 = (void*)0;
        __dec_obj8=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value20=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value19=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2000, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(int)*size);
        self->p=(int*)self->memory->buf;
        __result11__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1intp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result11__;
        come_call_finalizer2(smart_pointer$1intp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size){
void* __result_obj__;
void* right_value23;
void* right_value24;
struct buffer* __dec_obj9;
struct smart_pointer$1long* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
right_value23 = (void*)0;
right_value24 = (void*)0;
        __dec_obj9=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2000, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(long)*size);
        self->p=(long*)self->memory->buf;
        __result13__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1longp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result13__;
        come_call_finalizer2(smart_pointer$1longp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size){
void* __result_obj__;
void* right_value27;
void* right_value28;
struct buffer* __dec_obj10;
struct smart_pointer$1float* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
right_value27 = (void*)0;
right_value28 = (void*)0;
        __dec_obj10=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2000, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(float)*size);
        self->p=(float*)self->memory->buf;
        __result15__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1floatp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result15__;
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
void* right_value31;
void* right_value32;
struct buffer* __dec_obj11;
struct smart_pointer$1double* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
right_value31 = (void*)0;
right_value32 = (void*)0;
        __dec_obj11=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2000, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(double)*size);
        self->p=(double*)self->memory->buf;
        __result17__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1doublep_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result17__;
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




struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info){
void* __result_obj__;
void* right_value37;
char* __dec_obj12;
void* right_value38;
char* __dec_obj13;
struct sStrNode* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
right_value37 = (void*)0;
right_value38 = (void*)0;
    __dec_obj12=self->value;
    self->value=(char*)come_increment_ref_count(((char*)(right_value37=__builtin_string(value))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value37 = come_decrement_ref_count2(right_value37, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->sline=sline;
    __dec_obj13=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value38=__builtin_string(info->sname))));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value38 = come_decrement_ref_count2(right_value38, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result22__ = __result_obj__ = self;
    come_call_finalizer2(sStrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result22__;
    come_call_finalizer2(sStrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sStrNode_terminated(){
void* __result_obj__;
_Bool __result23__;
memset(&__result_obj__, 0, sizeof(void*));
    __result23__ = (_Bool)0;
    return __result23__;
}

static char* double_quoted_string(char* str){
void* __result_obj__;
void* right_value39;
void* right_value40;
struct buffer* buf_5;
char* p_6;
_Bool _while_condtional1;
_Bool _if_conditional9;
void* right_value41;
char* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
right_value39 = (void*)0;
right_value40 = (void*)0;
memset(&buf_5, 0, sizeof(struct buffer*));
memset(&p_6, 0, sizeof(char*));
right_value41 = (void*)0;
    buf_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 28, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    p_6=str;
    while(_while_condtional1=*p_6,    _while_condtional1) {
        if(_if_conditional9=*p_6==34,        _if_conditional9) {
            p_6++;
            buffer_append_char(buf_5,92);
            buffer_append_char(buf_5,34);
        }
        else {
            buffer_append_char(buf_5,*p_6);
            p_6++;
        }
    }
    __result24__ = __result_obj__ = ((char*)(right_value41=buffer_to_string(buf_5)));
    come_call_finalizer2(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value41 = come_decrement_ref_count2(right_value41, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result24__;
    come_call_finalizer2(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* sStrNode_kind(){
void* __result_obj__;
void* right_value42;
char* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
right_value42 = (void*)0;
    __result25__ = __result_obj__ = ((char*)(right_value42=__builtin_string("sStrNode")));
    right_value42 = come_decrement_ref_count2(right_value42, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result25__;
}

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value43;
struct CVALUE* come_value_7;
void* right_value44;
char* __dec_obj14;
void* right_value45;
void* right_value46;
struct sType* __dec_obj15;
_Bool __result27__;
memset(&__result_obj__, 0, sizeof(void*));
right_value43 = (void*)0;
memset(&come_value_7, 0, sizeof(struct CVALUE*));
right_value44 = (void*)0;
right_value45 = (void*)0;
right_value46 = (void*)0;
    come_value_7=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value43=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 53, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj14=come_value_7->c_value;
    come_value_7->c_value=(char*)come_increment_ref_count(((char*)(right_value44=xsprintf("\"%s\"",self->value))));
    __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value44 = come_decrement_ref_count2(right_value44, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj15=come_value_7->type;
    come_value_7->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value46=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value45=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 56, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_7->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_7));
    add_come_last_code(info,"%s;\n",come_value_7->c_value);
    __result27__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result27__;
    come_call_finalizer2(CVALUE_finalize,come_value_7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional10;
_Bool _if_conditional11;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional10=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional10) {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional11=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional11) {
            come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional12;
_Bool _if_conditional14;
_Bool _if_conditional16;
_Bool _if_conditional17;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _if_conditional24;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional12=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                _if_conditional12) {
                    come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional14=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional14) {
                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional16=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional16) {
                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional17=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional17) {
                    self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional18=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional18) {
                    come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional19=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional19) {
                    come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional21=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional21) {
                    come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional22=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional22) {
                    come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional24=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional24) {
                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional25=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional25) {
                    if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional26=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional26) {
                    if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional27=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional27) {
                    self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional28=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional28) {
                    self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_8;
_Bool _while_condtional2;
struct list_item$1sTypeph* prev_it_9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_8, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_9, 0, sizeof(struct list_item$1sTypeph*));
                        it_8=self->head;
                        while(_while_condtional2=it_8!=((void*)0),                        _while_condtional2) {
                            prev_it_9=it_8;
                            it_8=it_8->next;
                            come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional15;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional15=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional15) {
                            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_10;
_Bool _while_condtional3;
struct list_item$1sNodeph* prev_it_11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_10, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_11, 0, sizeof(struct list_item$1sNodeph*));
                        it_10=self->head;
                        while(_while_condtional3=it_10!=((void*)0),                        _while_condtional3) {
                            prev_it_11=it_10;
                            it_10=it_10->next;
                            come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional20;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional20=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional20) {
                                    if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_12;
_Bool _while_condtional4;
struct list_item$1charph* prev_it_13;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_12, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_13, 0, sizeof(struct list_item$1charph*));
                        it_12=self->head;
                        while(_while_condtional4=it_12!=((void*)0),                        _while_condtional4) {
                            prev_it_13=it_12;
                            it_12=it_12->next;
                            come_call_finalizer2(list_item$1charphp_finalize,prev_it_13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional23;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional23=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional23) {
                                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional29;
void* right_value47;
struct list_item$1CVALUEph* litem_14;
struct CVALUE* __dec_obj16;
_Bool _if_conditional31;
void* right_value48;
struct list_item$1CVALUEph* litem_15;
struct CVALUE* __dec_obj17;
void* right_value49;
struct list_item$1CVALUEph* litem_16;
struct CVALUE* __dec_obj18;
struct list$1CVALUEph* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
right_value47 = (void*)0;
memset(&litem_14, 0, sizeof(struct list_item$1CVALUEph*));
right_value48 = (void*)0;
memset(&litem_15, 0, sizeof(struct list_item$1CVALUEph*));
right_value49 = (void*)0;
memset(&litem_16, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional29=self->len==0,        _if_conditional29) {
            litem_14=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value47=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 226, "list_item$1CVALUEph"))));
            come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            litem_14->prev=((void*)0);
            litem_14->next=((void*)0);
            __dec_obj16=litem_14->item;
            litem_14->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer2(CVALUE_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            self->tail=litem_14;
            self->head=litem_14;
        }
        else {
            if(_if_conditional31=self->len==1,            _if_conditional31) {
                litem_15=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value48=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 236, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_15->prev=self->head;
                litem_15->next=((void*)0);
                __dec_obj17=litem_15->item;
                litem_15->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_15;
                self->head->next=litem_15;
            }
            else {
                litem_16=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value49=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 246, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_16->prev=self->tail;
                litem_16->next=((void*)0);
                __dec_obj18=litem_16->item;
                litem_16->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail->next=litem_16;
                self->tail=litem_16;
            }
        }
        self->len++;
        __result26__ = __result_obj__ = self;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result26__;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional30;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional30=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional30) {
                    come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

int sStrNode_sline(struct sStrNode* self, struct sInfo* info){
void* __result_obj__;
int __result28__;
memset(&__result_obj__, 0, sizeof(void*));
    __result28__ = self->sline;
    return __result28__;
}

char* sStrNode_sname(struct sStrNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value50;
char* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
right_value50 = (void*)0;
    __result29__ = __result_obj__ = ((char*)(right_value50=__builtin_string(self->sname)));
    right_value50 = come_decrement_ref_count2(right_value50, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result29__;
}

struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info){
void* __result_obj__;
void* right_value51;
char* __dec_obj19;
void* right_value59;
struct list$1sNodeph* __dec_obj23;
void* right_value60;
char* __dec_obj24;
struct sSStringNode* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
right_value51 = (void*)0;
right_value59 = (void*)0;
right_value60 = (void*)0;
    __dec_obj19=self->value;
    self->value=(char*)come_increment_ref_count(((char*)(right_value51=__builtin_string(value))));
    __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value51 = come_decrement_ref_count2(right_value51, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj23=self->exps;
    self->exps=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value59=list$1sNodephp_clone(exps))));
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->sline=sline;
    __dec_obj24=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value60=__builtin_string(info->sname))));
    __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value60 = come_decrement_ref_count2(right_value60, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result36__ = __result_obj__ = self;
    come_call_finalizer2(sSStringNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,exps, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result36__;
    come_call_finalizer2(sSStringNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,exps, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional32;
struct list$1sNodeph* __result30__;
void* right_value52;
void* right_value53;
struct list$1sNodeph* result_17;
struct list_item$1sNodeph* it_18;
_Bool _while_condtional5;
void* right_value58;
struct list$1sNodeph* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
right_value52 = (void*)0;
right_value53 = (void*)0;
memset(&result_17, 0, sizeof(struct list$1sNodeph*));
memset(&it_18, 0, sizeof(struct list_item$1sNodeph*));
right_value58 = (void*)0;
        if(_if_conditional32=self==((void*)0),        _if_conditional32) {
            __result30__ = __result_obj__ = ((void*)0);
            return __result30__;
        }
        result_17=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value53=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value52=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 142, "list$1sNodeph"))))))));
        come_call_finalizer2(list$1sNodephp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sNodephp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        it_18=self->head;
        while(_while_condtional5=it_18!=((void*)0),        _while_condtional5) {
            list$1sNodeph_add(result_17,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value58=sNode_clone(it_18->item)))));
            if(right_value58) { right_value58 = come_decrement_ref_count2(right_value58, ((struct sNode*)right_value58)->finalize, ((struct sNode*)right_value58)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            it_18=it_18->next;
        }
        __result35__ = __result_obj__ = result_17;
        come_call_finalizer2(list$1sNodephp_finalize,result_17, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result35__;
        come_call_finalizer2(list$1sNodephp_finalize,result_17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result31__ = __result_obj__ = self;
            come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result31__;
            come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional33;
void* right_value54;
struct list_item$1sNodeph* litem_19;
struct sNode* __dec_obj20;
_Bool _if_conditional34;
void* right_value55;
struct list_item$1sNodeph* litem_20;
struct sNode* __dec_obj21;
void* right_value56;
struct list_item$1sNodeph* litem_21;
struct sNode* __dec_obj22;
struct list$1sNodeph* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
right_value54 = (void*)0;
memset(&litem_19, 0, sizeof(struct list_item$1sNodeph*));
right_value55 = (void*)0;
memset(&litem_20, 0, sizeof(struct list_item$1sNodeph*));
right_value56 = (void*)0;
memset(&litem_21, 0, sizeof(struct list_item$1sNodeph*));
                if(_if_conditional33=self->len==0,                _if_conditional33) {
                    litem_19=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value54=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 156, "list_item$1sNodeph"))));
                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_19->prev=((void*)0);
                    litem_19->next=((void*)0);
                    __dec_obj20=litem_19->item;
                    litem_19->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count2(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0,0, (void*)0); }
                    self->tail=litem_19;
                    self->head=litem_19;
                }
                else {
                    if(_if_conditional34=self->len==1,                    _if_conditional34) {
                        litem_20=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value55=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 166, "list_item$1sNodeph"))));
                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_20->prev=self->head;
                        litem_20->next=((void*)0);
                        __dec_obj21=litem_20->item;
                        litem_20->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0, (void*)0); }
                        self->tail=litem_20;
                        self->head->next=litem_20;
                    }
                    else {
                        litem_21=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value56=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 176, "list_item$1sNodeph"))));
                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_21->prev=self->tail;
                        litem_21->next=((void*)0);
                        __dec_obj22=litem_21->item;
                        litem_21->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                        self->tail->next=litem_21;
                        self->tail=litem_21;
                    }
                }
                self->len++;
                __result32__ = __result_obj__ = self;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result32__;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional35;
struct sNode* __result33__;
void* right_value57;
struct sNode* result_22;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
struct sNode* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
right_value57 = (void*)0;
memset(&result_22, 0, sizeof(struct sNode*));
                if(_if_conditional35=self==(void*)0,                _if_conditional35) {
                    __result33__ = __result_obj__ = (void*)0;
                    return __result33__;
                }
                result_22=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value57=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                if(right_value57) { right_value57 = come_decrement_ref_count2(right_value57, ((struct sNode*)right_value57)->finalize, ((struct sNode*)right_value57)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                if(_if_conditional36=self!=((void*)0)&&self->clone!=((void*)0),                _if_conditional36) {
                    result_22->_protocol_obj=self->clone(self->_protocol_obj);
                }
                if(_if_conditional37=self!=((void*)0),                _if_conditional37) {
                    result_22->finalize=self->finalize;
                }
                if(_if_conditional38=self!=((void*)0),                _if_conditional38) {
                    result_22->clone=self->clone;
                }
                if(_if_conditional39=self!=((void*)0),                _if_conditional39) {
                    result_22->compile=self->compile;
                }
                if(_if_conditional40=self!=((void*)0),                _if_conditional40) {
                    result_22->sline=self->sline;
                }
                if(_if_conditional41=self!=((void*)0),                _if_conditional41) {
                    result_22->sname=self->sname;
                }
                if(_if_conditional42=self!=((void*)0),                _if_conditional42) {
                    result_22->terminated=self->terminated;
                }
                if(_if_conditional43=self!=((void*)0),                _if_conditional43) {
                    result_22->kind=self->kind;
                }
                __result34__ = __result_obj__ = result_22;
                if(result_22) { result_22 = come_decrement_ref_count2(result_22, ((struct sNode*)result_22)->finalize, ((struct sNode*)result_22)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result34__;
                if(result_22) { result_22 = come_decrement_ref_count2(result_22, ((struct sNode*)result_22)->finalize, ((struct sNode*)result_22)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

_Bool sSStringNode_terminated(){
void* __result_obj__;
_Bool __result37__;
memset(&__result_obj__, 0, sizeof(void*));
    __result37__ = (_Bool)0;
    return __result37__;
}

char* sSStringNode_kind(){
void* __result_obj__;
void* right_value61;
char* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
right_value61 = (void*)0;
    __result38__ = __result_obj__ = ((char*)(right_value61=__builtin_string("sSStringNode")));
    right_value61 = come_decrement_ref_count2(right_value61, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result38__;
}

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value62;
struct CVALUE* come_value_23;
void* right_value63;
void* right_value64;
struct buffer* buf_24;
_Bool _if_conditional47;
struct list$1sNodeph* o2_saved_25;
struct sNode* it_28;
_Bool _if_conditional52;
_Bool __result47__;
void* right_value65;
struct CVALUE* come_value_31;
void* right_value66;
char* method_name_32;
_Bool _if_conditional72;
struct sType* obj_type_35;
_Bool _if_conditional73;
struct sType* obj_type2_36;
void* right_value67;
void* right_value68;
char* __dec_obj25;
void* right_value69;
void* right_value70;
struct buffer* buf2_37;
void* right_value71;
void* right_value72;
struct sType* type_38;
void* right_value73;
void* right_value74;
char* c_value_39;
void* right_value75;
void* right_value76;
struct sType* type2_40;
void* right_value77;
char* __dec_obj26;
void* right_value78;
char* __dec_obj27;
void* right_value107;
struct sType* __dec_obj48;
_Bool __result65__;
memset(&__result_obj__, 0, sizeof(void*));
right_value62 = (void*)0;
memset(&come_value_23, 0, sizeof(struct CVALUE*));
right_value63 = (void*)0;
right_value64 = (void*)0;
memset(&buf_24, 0, sizeof(struct buffer*));
memset(&o2_saved_25, 0, sizeof(struct list$1sNodeph*));
memset(&it_28, 0, sizeof(struct sNode*));
right_value65 = (void*)0;
memset(&come_value_31, 0, sizeof(struct CVALUE*));
right_value66 = (void*)0;
memset(&method_name_32, 0, sizeof(char*));
memset(&obj_type_35, 0, sizeof(struct sType*));
memset(&obj_type2_36, 0, sizeof(struct sType*));
right_value67 = (void*)0;
right_value68 = (void*)0;
right_value69 = (void*)0;
right_value70 = (void*)0;
memset(&buf2_37, 0, sizeof(struct buffer*));
right_value71 = (void*)0;
right_value72 = (void*)0;
memset(&type_38, 0, sizeof(struct sType*));
right_value73 = (void*)0;
right_value74 = (void*)0;
memset(&c_value_39, 0, sizeof(char*));
right_value75 = (void*)0;
right_value76 = (void*)0;
memset(&type2_40, 0, sizeof(struct sType*));
right_value77 = (void*)0;
right_value78 = (void*)0;
right_value107 = (void*)0;
    come_value_23=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value62=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 109, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buf_24=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value64=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value63=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 111, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append_str(buf_24,"xsprintf(\"");
    buffer_append_str(buf_24,self->value);
    buffer_append_str(buf_24,"\"");
    if(_if_conditional47=list$1sNodeph_length(self->exps)>0,    _if_conditional47) {
        for(        o2_saved_25=(struct list$1sNodeph*)come_increment_ref_count((self->exps)),it_28=list$1sNodeph_begin((o2_saved_25));        !list$1sNodeph_end((o2_saved_25));        it_28=list$1sNodeph_next((o2_saved_25))        ){
            if(_if_conditional52=!node_compile(it_28,info),            _if_conditional52) {
                __result47__ = (_Bool)0;
                come_call_finalizer2(list$1sNodephp_finalize,o2_saved_25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,come_value_23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,buf_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result47__;
            }
            come_value_31=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value65=get_value_from_stack(-1,info))));
            come_call_finalizer2(CVALUE_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            dec_stack_ptr(1,info);
            method_name_32=(char*)come_increment_ref_count(((char*)(right_value66=create_method_name(come_value_31->type,(_Bool)0,"to_string",info,(_Bool)1))));
            right_value66 = come_decrement_ref_count2(right_value66, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional72=map$2charphsFunph_at(info->funcs,method_name_32,((void*)0))==((void*)0),            _if_conditional72) {
                obj_type_35=come_value_31->type->mNoSolvedGenericsType->v1;
                if(_if_conditional73=obj_type_35&&list$1sTypeph_length(obj_type_35->mGenericsTypes)>0,                _if_conditional73) {
                    obj_type2_36=come_value_31->type;
                    __dec_obj25=method_name_32;
                    method_name_32=(char*)come_increment_ref_count(((char*)(right_value68=make_generics_function(obj_type2_36,(char*)come_increment_ref_count(((char*)(right_value67=__builtin_string("to_string")))),info,(_Bool)1))));
                    __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value67 = come_decrement_ref_count2(right_value67, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value68 = come_decrement_ref_count2(right_value68, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    err_msg(info,"require to_string implementation(%s)",come_value_31->type->mClass->mName);
                    exit(1);
                }
            }
            buf2_37=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value70=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value69=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 140, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            buffer_append_str(buf2_37,method_name_32);
            buffer_append_str(buf2_37,"(");
            buffer_append_str(buf2_37,come_value_31->c_value);
            buffer_append_str(buf2_37,")");
            type_38=(struct sType*)come_increment_ref_count(((struct sType*)(right_value72=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value71=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 147, "sType")))),"char*",(_Bool)0,info))));
            come_call_finalizer2(sType_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            type_38->mHeap=(_Bool)1;
            c_value_39=(char*)come_increment_ref_count(((char*)(right_value74=append_object_to_right_values(((char*)(right_value73=buffer_to_string(buf2_37))),(struct sType*)come_increment_ref_count(type_38),info))));
            right_value73 = come_decrement_ref_count2(right_value73, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value74 = come_decrement_ref_count2(right_value74, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(buf_24,",");
            buffer_append_str(buf_24,c_value_39);
            come_call_finalizer2(CVALUE_finalize,come_value_31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            method_name_32 = come_decrement_ref_count2(method_name_32, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,buf2_37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type_38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            c_value_39 = come_decrement_ref_count2(c_value_39, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1sNodephp_finalize,o2_saved_25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    buffer_append_str(buf_24,")");
    type2_40=(struct sType*)come_increment_ref_count(((struct sType*)(right_value76=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value75=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 159, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type2_40->mHeap=(_Bool)1;
    __dec_obj26=come_value_23->c_value;
    come_value_23->c_value=(char*)come_increment_ref_count(((char*)(right_value77=buffer_to_string(buf_24))));
    __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value77 = come_decrement_ref_count2(right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj27=come_value_23->c_value;
    come_value_23->c_value=(char*)come_increment_ref_count(((char*)(right_value78=append_object_to_right_values(come_value_23->c_value,(struct sType*)come_increment_ref_count(type2_40),info))));
    __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value78 = come_decrement_ref_count2(right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj48=come_value_23->type;
    come_value_23->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value107=sType_clone(type2_40))));
    come_call_finalizer2(sType_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_23->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_23));
    add_come_last_code(info,"%s;\n",come_value_23->c_value);
    __result65__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result65__;
    come_call_finalizer2(CVALUE_finalize,come_value_23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
int __result39__;
memset(&__result_obj__, 0, sizeof(void*));
        __result39__ = self->len;
        return __result39__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional48;
struct sNode* result_26;
struct sNode* __result40__;
_Bool _if_conditional49;
struct sNode* __result41__;
struct sNode* result_27;
struct sNode* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_26, 0, sizeof(struct sNode*));
memset(&result_27, 0, sizeof(struct sNode*));
            if(_if_conditional48=self==((void*)0),            _if_conditional48) {
                memset(&result_26,0,sizeof(struct sNode*));
                __result40__ = __result_obj__ = result_26;
                return __result40__;
            }
            self->it=self->head;
            if(self->it) {
                __result41__ = __result_obj__ = self->it->item;
                return __result41__;
            }
            memset(&result_27,0,sizeof(struct sNode*));
            __result42__ = __result_obj__ = result_27;
            return __result42__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result43__;
memset(&__result_obj__, 0, sizeof(void*));
            __result43__ = self==((void*)0)||self->it==((void*)0);
            return __result43__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional50;
struct sNode* result_29;
struct sNode* __result44__;
_Bool _if_conditional51;
struct sNode* __result45__;
struct sNode* result_30;
struct sNode* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_29, 0, sizeof(struct sNode*));
memset(&result_30, 0, sizeof(struct sNode*));
            if(_if_conditional50=self==((void*)0)||self->it==((void*)0),            _if_conditional50) {
                memset(&result_29,0,sizeof(struct sNode*));
                __result44__ = __result_obj__ = result_29;
                return __result44__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result45__ = __result_obj__ = self->it->item;
                return __result45__;
            }
            memset(&result_30,0,sizeof(struct sNode*));
            __result46__ = __result_obj__ = result_30;
            return __result46__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_33;
unsigned int it_34;
_Bool _while_condtional6;
_Bool _if_conditional53;
_Bool _if_conditional54;
struct sFun* __result48__;
_Bool _if_conditional70;
_Bool _if_conditional71;
struct sFun* __result49__;
struct sFun* __result50__;
struct sFun* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_33, 0, sizeof(unsigned int));
memset(&it_34, 0, sizeof(unsigned int));
                hash_33=string_get_hash_key(((char*)key))%self->size;
                it_34=hash_33;
                while(_while_condtional6=(_Bool)1,                _while_condtional6) {
                    if(_if_conditional53=self->item_existance[it_34],                    _if_conditional53) {
                        if(_if_conditional54=string_equals(self->keys[it_34],key),                        _if_conditional54) {
                            __result48__ = __result_obj__ = self->items[it_34];
                            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result48__;
                        }
                        it_34++;
                        if(_if_conditional70=it_34>=self->size,                        _if_conditional70) {
                            it_34=0;
                        }
                        else {
                            if(_if_conditional71=it_34==hash_33,                            _if_conditional71) {
                                __result49__ = __result_obj__ = default_value;
                                come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result49__;
                            }
                        }
                    }
                    else {
                        __result50__ = __result_obj__ = default_value;
                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result50__;
                    }
                }
                __result51__ = __result_obj__ = default_value;
                come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result51__;
                come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional55;
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional64;
_Bool _if_conditional65;
_Bool _if_conditional66;
_Bool _if_conditional67;
_Bool _if_conditional68;
_Bool _if_conditional69;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional55=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional55) {
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional56=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional56) {
                                    come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional57=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional57) {
                                    come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional58=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional58) {
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional59=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                _if_conditional59) {
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional60=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                _if_conditional60) {
                                    come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional61=self!=((void*)0)&&self->mBlock!=((void*)0),                                _if_conditional61) {
                                    come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional64=self!=((void*)0)&&self->mSource!=((void*)0),                                _if_conditional64) {
                                    come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional65=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                _if_conditional65) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional66=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                _if_conditional66) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional67=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                _if_conditional67) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional68=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                _if_conditional68) {
                                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional69=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional69) {
                                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional62;
_Bool _if_conditional63;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional62=self!=((void*)0)&&self->mNodes!=((void*)0),                                        _if_conditional62) {
                                            come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional63=self!=((void*)0)&&self->mVarTable!=((void*)0),                                        _if_conditional63) {
                                            come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
int __result52__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result52__ = self->len;
                    return __result52__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional74;
struct sType* __result53__;
void* right_value79;
struct sType* result_41;
_Bool _if_conditional75;
_Bool _if_conditional76;
void* right_value86;
struct list$1sTypeph* __dec_obj31;
_Bool _if_conditional80;
void* right_value89;
struct tuple1$1sTypeph* __dec_obj33;
_Bool _if_conditional84;
void* right_value90;
struct tuple1$1sTypeph* __dec_obj34;
_Bool _if_conditional85;
void* right_value91;
char* __dec_obj35;
_Bool _if_conditional86;
void* right_value92;
struct list$1sTypeph* __dec_obj36;
_Bool _if_conditional87;
void* right_value93;
struct list$1sNodeph* __dec_obj37;
_Bool _if_conditional88;
_Bool _if_conditional89;
void* right_value94;
struct list$1sTypeph* __dec_obj38;
_Bool _if_conditional90;
void* right_value101;
struct list$1charph* __dec_obj42;
_Bool _if_conditional94;
void* right_value102;
struct tuple1$1sTypeph* __dec_obj43;
_Bool _if_conditional95;
_Bool _if_conditional96;
void* right_value103;
struct sNode* __dec_obj44;
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
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
void* right_value104;
struct sNode* __dec_obj45;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
void* right_value105;
char* __dec_obj46;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
void* right_value106;
char* __dec_obj47;
_Bool _if_conditional133;
struct sType* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
memset(&result_41, 0, sizeof(struct sType*));
right_value86 = (void*)0;
right_value89 = (void*)0;
right_value90 = (void*)0;
right_value91 = (void*)0;
right_value92 = (void*)0;
right_value93 = (void*)0;
right_value94 = (void*)0;
right_value101 = (void*)0;
right_value102 = (void*)0;
right_value103 = (void*)0;
right_value104 = (void*)0;
right_value105 = (void*)0;
right_value106 = (void*)0;
        if(_if_conditional74=self==(void*)0,        _if_conditional74) {
            __result53__ = __result_obj__ = (void*)0;
            return __result53__;
        }
        result_41=(struct sType*)come_increment_ref_count(((struct sType*)(right_value79=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer2(sType_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            result_41->mClass=self->mClass;
        }
        if(_if_conditional76=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),        _if_conditional76) {
            __dec_obj31=result_41->mMultipleTypes;
            result_41->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value86=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional80=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional80) {
            __dec_obj33=result_41->mNoSolvedGenericsType;
            result_41->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value89=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional84=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional84) {
            __dec_obj34=result_41->mOriginalLoadVarType;
            result_41->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value90=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional85=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional85) {
            __dec_obj35=result_41->mGenericsName;
            result_41->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value91=string_clone(self->mGenericsName))));
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional86=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional86) {
            __dec_obj36=result_41->mGenericsTypes;
            result_41->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value92=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional87=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional87) {
            __dec_obj37=result_41->mArrayNum;
            result_41->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value93=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            result_41->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(_if_conditional89=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional89) {
            __dec_obj38=result_41->mParamTypes;
            result_41->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value94=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional90=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional90) {
            __dec_obj42=result_41->mParamNames;
            result_41->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value101=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer2(list$1charph_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional94=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional94) {
            __dec_obj43=result_41->mResultType;
            result_41->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value102=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional95=self!=((void*)0),        _if_conditional95) {
            result_41->mVarArgs=self->mVarArgs;
        }
        if(_if_conditional96=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional96) {
            __dec_obj44=result_41->mAlignas;
            result_41->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value103=sNode_clone(self->mAlignas))));
            if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count2(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value103) { right_value103 = come_decrement_ref_count2(right_value103, ((struct sNode*)right_value103)->finalize, ((struct sNode*)right_value103)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional97=self!=((void*)0),        _if_conditional97) {
            result_41->mUnsigned=self->mUnsigned;
        }
        if(_if_conditional98=self!=((void*)0),        _if_conditional98) {
            result_41->mShort=self->mShort;
        }
        if(_if_conditional99=self!=((void*)0),        _if_conditional99) {
            result_41->mLong=self->mLong;
        }
        if(_if_conditional100=self!=((void*)0),        _if_conditional100) {
            result_41->mLongLong=self->mLongLong;
        }
        if(_if_conditional101=self!=((void*)0),        _if_conditional101) {
            result_41->mConstant=self->mConstant;
        }
        if(_if_conditional102=self!=((void*)0),        _if_conditional102) {
            result_41->mRegister=self->mRegister;
        }
        if(_if_conditional103=self!=((void*)0),        _if_conditional103) {
            result_41->mVolatile=self->mVolatile;
        }
        if(_if_conditional104=self!=((void*)0),        _if_conditional104) {
            result_41->mStatic=self->mStatic;
        }
        if(_if_conditional105=self!=((void*)0),        _if_conditional105) {
            result_41->mExtern=self->mExtern;
        }
        if(_if_conditional106=self!=((void*)0),        _if_conditional106) {
            result_41->mRestrict=self->mRestrict;
        }
        if(_if_conditional107=self!=((void*)0),        _if_conditional107) {
            result_41->mImmutable=self->mImmutable;
        }
        if(_if_conditional108=self!=((void*)0),        _if_conditional108) {
            result_41->mHeap=self->mHeap;
        }
        if(_if_conditional109=self!=((void*)0),        _if_conditional109) {
            result_41->mDummyHeap=self->mDummyHeap;
        }
        if(_if_conditional110=self!=((void*)0),        _if_conditional110) {
            result_41->mDelegate=self->mDelegate;
        }
        if(_if_conditional111=self!=((void*)0),        _if_conditional111) {
            result_41->mShare=self->mShare;
        }
        if(_if_conditional112=self!=((void*)0),        _if_conditional112) {
            result_41->mClone=self->mClone;
        }
        if(_if_conditional113=self!=((void*)0),        _if_conditional113) {
            result_41->mNoHeap=self->mNoHeap;
        }
        if(_if_conditional114=self!=((void*)0),        _if_conditional114) {
            result_41->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(_if_conditional115=self!=((void*)0),        _if_conditional115) {
            result_41->mRefference=self->mRefference;
        }
        if(_if_conditional116=self!=((void*)0),        _if_conditional116) {
            result_41->mException=self->mException;
        }
        if(_if_conditional117=self!=((void*)0),        _if_conditional117) {
            result_41->mPointerNum=self->mPointerNum;
        }
        if(_if_conditional118=self!=((void*)0),        _if_conditional118) {
            result_41->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        if(_if_conditional119=self!=((void*)0),        _if_conditional119) {
            result_41->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(_if_conditional120=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional120) {
            __dec_obj45=result_41->mSizeNum;
            result_41->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value104=sNode_clone(self->mSizeNum))));
            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count2(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value104) { right_value104 = come_decrement_ref_count2(right_value104, ((struct sNode*)right_value104)->finalize, ((struct sNode*)right_value104)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional121=self!=((void*)0),        _if_conditional121) {
            result_41->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(_if_conditional122=self!=((void*)0),        _if_conditional122) {
            result_41->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(_if_conditional123=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional123) {
            __dec_obj46=result_41->mOriginalTypeName;
            result_41->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value105=string_clone(self->mOriginalTypeName))));
            __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional124=self!=((void*)0),        _if_conditional124) {
            result_41->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(_if_conditional125=self!=((void*)0),        _if_conditional125) {
            result_41->mFunctionParam=self->mFunctionParam;
        }
        if(_if_conditional126=self!=((void*)0),        _if_conditional126) {
            result_41->mAllocaValue=self->mAllocaValue;
        }
        if(_if_conditional127=self!=((void*)0),        _if_conditional127) {
            result_41->mGenericsStruct=self->mGenericsStruct;
        }
        if(_if_conditional128=self!=((void*)0),        _if_conditional128) {
            result_41->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(_if_conditional129=self!=((void*)0),        _if_conditional129) {
            result_41->mComeMemCore=self->mComeMemCore;
        }
        if(_if_conditional130=self!=((void*)0),        _if_conditional130) {
            result_41->mInline=self->mInline;
        }
        if(_if_conditional131=self!=((void*)0),        _if_conditional131) {
            result_41->mNullValue=self->mNullValue;
        }
        if(_if_conditional132=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional132) {
            __dec_obj47=result_41->mAsmName;
            result_41->mAsmName=(char*)come_increment_ref_count(((char*)(right_value106=string_clone(self->mAsmName))));
            __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional133=self!=((void*)0),        _if_conditional133) {
            result_41->mArrayPointerType=self->mArrayPointerType;
        }
        __result64__ = __result_obj__ = result_41;
        come_call_finalizer2(sType_finalize,result_41, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result64__;
        come_call_finalizer2(sType_finalize,result_41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional77;
struct list$1sTypeph* __result54__;
void* right_value80;
void* right_value81;
struct list$1sTypeph* result_42;
struct list_item$1sTypeph* it_43;
_Bool _while_condtional7;
void* right_value85;
struct list$1sTypeph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
right_value81 = (void*)0;
memset(&result_42, 0, sizeof(struct list$1sTypeph*));
memset(&it_43, 0, sizeof(struct list_item$1sTypeph*));
right_value85 = (void*)0;
                if(_if_conditional77=self==((void*)0),                _if_conditional77) {
                    __result54__ = __result_obj__ = ((void*)0);
                    return __result54__;
                }
                result_42=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value81=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value80=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 142, "list$1sTypeph"))))))));
                come_call_finalizer2(list$1sTypephp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sTypephp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_43=self->head;
                while(_while_condtional7=it_43!=((void*)0),                _while_condtional7) {
                    list$1sTypeph_add(result_42,(struct sType*)come_increment_ref_count(((struct sType*)(right_value85=sType_clone(it_43->item)))));
                    come_call_finalizer2(sType_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_43=it_43->next;
                }
                __result57__ = __result_obj__ = result_42;
                come_call_finalizer2(list$1sTypephp_finalize,result_42, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result57__;
                come_call_finalizer2(list$1sTypephp_finalize,result_42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result55__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result55__;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional78;
void* right_value82;
struct list_item$1sTypeph* litem_44;
struct sType* __dec_obj28;
_Bool _if_conditional79;
void* right_value83;
struct list_item$1sTypeph* litem_45;
struct sType* __dec_obj29;
void* right_value84;
struct list_item$1sTypeph* litem_46;
struct sType* __dec_obj30;
struct list$1sTypeph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
memset(&litem_44, 0, sizeof(struct list_item$1sTypeph*));
right_value83 = (void*)0;
memset(&litem_45, 0, sizeof(struct list_item$1sTypeph*));
right_value84 = (void*)0;
memset(&litem_46, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional78=self->len==0,                        _if_conditional78) {
                            litem_44=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value82=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 156, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_44->prev=((void*)0);
                            litem_44->next=((void*)0);
                            __dec_obj28=litem_44->item;
                            litem_44->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_44;
                            self->head=litem_44;
                        }
                        else {
                            if(_if_conditional79=self->len==1,                            _if_conditional79) {
                                litem_45=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value83=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 166, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_45->prev=self->head;
                                litem_45->next=((void*)0);
                                __dec_obj29=litem_45->item;
                                litem_45->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_45;
                                self->head->next=litem_45;
                            }
                            else {
                                litem_46=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value84=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 176, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_46->prev=self->tail;
                                litem_46->next=((void*)0);
                                __dec_obj30=litem_46->item;
                                litem_46->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail->next=litem_46;
                                self->tail=litem_46;
                            }
                        }
                        self->len++;
                        __result56__ = __result_obj__ = self;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result56__;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional81;
struct tuple1$1sTypeph* __result58__;
void* right_value87;
struct tuple1$1sTypeph* result_47;
_Bool _if_conditional83;
void* right_value88;
struct sType* __dec_obj32;
struct tuple1$1sTypeph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
right_value87 = (void*)0;
memset(&result_47, 0, sizeof(struct tuple1$1sTypeph*));
right_value88 = (void*)0;
                if(_if_conditional81=self==(void*)0,                _if_conditional81) {
                    __result58__ = __result_obj__ = (void*)0;
                    return __result58__;
                }
                result_47=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value87=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional83=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional83) {
                    __dec_obj32=result_47->v1;
                    result_47->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value88=sType_clone(self->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                __result59__ = __result_obj__ = result_47;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_47, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result59__;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional82;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional82=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional82) {
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional91;
struct list$1charph* __result60__;
void* right_value95;
void* right_value96;
struct list$1charph* result_48;
struct list_item$1charph* it_49;
_Bool _while_condtional8;
void* right_value100;
struct list$1charph* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value95 = (void*)0;
right_value96 = (void*)0;
memset(&result_48, 0, sizeof(struct list$1charph*));
memset(&it_49, 0, sizeof(struct list_item$1charph*));
right_value100 = (void*)0;
                if(_if_conditional91=self==((void*)0),                _if_conditional91) {
                    __result60__ = __result_obj__ = ((void*)0);
                    return __result60__;
                }
                result_48=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value96=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value95=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 142, "list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_49=self->head;
                while(_while_condtional8=it_49!=((void*)0),                _while_condtional8) {
                    list$1charph_add(result_48,(char*)come_increment_ref_count(((char*)(right_value100=string_clone(it_49->item)))));
                    right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    it_49=it_49->next;
                }
                __result63__ = __result_obj__ = result_48;
                come_call_finalizer2(list$1charphp_finalize,result_48, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result63__;
                come_call_finalizer2(list$1charphp_finalize,result_48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result61__ = __result_obj__ = self;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result61__;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional92;
void* right_value97;
struct list_item$1charph* litem_50;
char* __dec_obj39;
_Bool _if_conditional93;
void* right_value98;
struct list_item$1charph* litem_51;
char* __dec_obj40;
void* right_value99;
struct list_item$1charph* litem_52;
char* __dec_obj41;
struct list$1charph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
right_value97 = (void*)0;
memset(&litem_50, 0, sizeof(struct list_item$1charph*));
right_value98 = (void*)0;
memset(&litem_51, 0, sizeof(struct list_item$1charph*));
right_value99 = (void*)0;
memset(&litem_52, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional92=self->len==0,                        _if_conditional92) {
                            litem_50=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value97=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 156, "list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_50->prev=((void*)0);
                            litem_50->next=((void*)0);
                            __dec_obj39=litem_50->item;
                            litem_50->item=(char*)come_increment_ref_count(item);
                            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_50;
                            self->head=litem_50;
                        }
                        else {
                            if(_if_conditional93=self->len==1,                            _if_conditional93) {
                                litem_51=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value98=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 166, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_51->prev=self->head;
                                litem_51->next=((void*)0);
                                __dec_obj40=litem_51->item;
                                litem_51->item=(char*)come_increment_ref_count(item);
                                __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_51;
                                self->head->next=litem_51;
                            }
                            else {
                                litem_52=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value99=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 176, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_52->prev=self->tail;
                                litem_52->next=((void*)0);
                                __dec_obj41=litem_52->item;
                                litem_52->item=(char*)come_increment_ref_count(item);
                                __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail->next=litem_52;
                                self->tail=litem_52;
                            }
                        }
                        self->len++;
                        __result62__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result62__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

int sSStringNode_sline(struct sSStringNode* self, struct sInfo* info){
void* __result_obj__;
int __result66__;
memset(&__result_obj__, 0, sizeof(void*));
    __result66__ = self->sline;
    return __result66__;
}

char* sSStringNode_sname(struct sSStringNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value108;
char* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value108 = (void*)0;
    __result67__ = __result_obj__ = ((char*)(right_value108=__builtin_string(self->sname)));
    right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result67__;
}

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info){
void* __result_obj__;
void* right_value109;
char* __dec_obj49;
struct sCharNode* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value109 = (void*)0;
    self->value=value;
    self->sline=info->sline;
    __dec_obj49=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value109=__builtin_string(info->sname))));
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result68__ = __result_obj__ = self;
    come_call_finalizer2(sCharNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result68__;
    come_call_finalizer2(sCharNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sCharNode_terminated(){
void* __result_obj__;
_Bool __result69__;
memset(&__result_obj__, 0, sizeof(void*));
    __result69__ = (_Bool)0;
    return __result69__;
}

char* sCharNode_kind(){
void* __result_obj__;
void* right_value110;
char* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value110 = (void*)0;
    __result70__ = __result_obj__ = ((char*)(right_value110=__builtin_string("sCharNode")));
    right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result70__;
}

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value111;
struct CVALUE* come_value_53;
void* right_value112;
char* __dec_obj50;
void* right_value113;
void* right_value114;
struct sType* __dec_obj51;
_Bool __result71__;
memset(&__result_obj__, 0, sizeof(void*));
right_value111 = (void*)0;
memset(&come_value_53, 0, sizeof(struct CVALUE*));
right_value112 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
    come_value_53=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value111=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 213, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj50=come_value_53->c_value;
    come_value_53->c_value=(char*)come_increment_ref_count(((char*)(right_value112=xsprintf("%d",self->value))));
    __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj51=come_value_53->type;
    come_value_53->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value114=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value113=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 216, "sType")))),"char",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_53->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_53));
    add_come_last_code(info,"%s;\n",come_value_53->c_value);
    __result71__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result71__;
    come_call_finalizer2(CVALUE_finalize,come_value_53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sCharNode_sline(struct sCharNode* self, struct sInfo* info){
void* __result_obj__;
int __result72__;
memset(&__result_obj__, 0, sizeof(void*));
    __result72__ = self->sline;
    return __result72__;
}

char* sCharNode_sname(struct sCharNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value115;
char* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
right_value115 = (void*)0;
    __result73__ = __result_obj__ = ((char*)(right_value115=__builtin_string(self->sname)));
    right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result73__;
}

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, struct sInfo* info){
void* __result_obj__;
void* right_value116;
char* __dec_obj52;
struct sWCharNode* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value116 = (void*)0;
    self->value=value;
    self->sline=info->sline;
    __dec_obj52=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value116=__builtin_string(info->sname))));
    __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result74__ = __result_obj__ = self;
    come_call_finalizer2(sWCharNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result74__;
    come_call_finalizer2(sWCharNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sWCharNode_terminated(){
void* __result_obj__;
_Bool __result75__;
memset(&__result_obj__, 0, sizeof(void*));
    __result75__ = (_Bool)0;
    return __result75__;
}

char* sWCharNode_kind(){
void* __result_obj__;
void* right_value117;
char* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
right_value117 = (void*)0;
    __result76__ = __result_obj__ = ((char*)(right_value117=__builtin_string("sWCharNode")));
    right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result76__;
}

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value118;
struct CVALUE* come_value_54;
void* right_value119;
char* __dec_obj53;
void* right_value120;
void* right_value121;
struct sType* __dec_obj54;
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value118 = (void*)0;
memset(&come_value_54, 0, sizeof(struct CVALUE*));
right_value119 = (void*)0;
right_value120 = (void*)0;
right_value121 = (void*)0;
    come_value_54=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value118=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 265, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj53=come_value_54->c_value;
    come_value_54->c_value=(char*)come_increment_ref_count(((char*)(right_value119=xsprintf("L'%lc'",self->value))));
    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj54=come_value_54->type;
    come_value_54->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value121=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value120=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 268, "sType")))),"wchar_t",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_54->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_54));
    add_come_last_code(info,"%s;\n",come_value_54->c_value);
    __result77__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result77__;
    come_call_finalizer2(CVALUE_finalize,come_value_54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sWCharNode_sline(struct sWCharNode* self, struct sInfo* info){
void* __result_obj__;
int __result78__;
memset(&__result_obj__, 0, sizeof(void*));
    __result78__ = self->sline;
    return __result78__;
}

char* sWCharNode_sname(struct sWCharNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value122;
char* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value122 = (void*)0;
    __result79__ = __result_obj__ = ((char*)(right_value122=__builtin_string(self->sname)));
    right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result79__;
}

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info){
void* __result_obj__;
unsigned int* __dec_obj55;
void* right_value123;
char* __dec_obj56;
struct sWStringNode* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
right_value123 = (void*)0;
    __dec_obj55=self->value;
    self->value=(unsigned int*)come_increment_ref_count(value);
    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->sline=sline;
    __dec_obj56=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value123=__builtin_string(info->sname))));
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result80__ = __result_obj__ = self;
    come_call_finalizer2(sWStringNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result80__;
    come_call_finalizer2(sWStringNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sWStringNode_terminated(){
void* __result_obj__;
_Bool __result81__;
memset(&__result_obj__, 0, sizeof(void*));
    __result81__ = (_Bool)0;
    return __result81__;
}

char* sWStringNode_kind(){
void* __result_obj__;
void* right_value124;
char* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
right_value124 = (void*)0;
    __result82__ = __result_obj__ = ((char*)(right_value124=__builtin_string("sWStringNode")));
    right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result82__;
}

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value125;
struct CVALUE* come_value_55;
void* right_value126;
char* __dec_obj57;
void* right_value127;
void* right_value128;
struct sType* __dec_obj58;
_Bool __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value125 = (void*)0;
memset(&come_value_55, 0, sizeof(struct CVALUE*));
right_value126 = (void*)0;
right_value127 = (void*)0;
right_value128 = (void*)0;
    come_value_55=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value125=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 317, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj57=come_value_55->c_value;
    come_value_55->c_value=(char*)come_increment_ref_count(((char*)(right_value126=xsprintf("L'%ls'",self->value))));
    __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj58=come_value_55->type;
    come_value_55->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value128=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value127=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 320, "sType")))),"wchar_t*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_55->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_55));
    add_come_last_code(info,"%s;\n",come_value_55->c_value);
    __result83__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result83__;
    come_call_finalizer2(CVALUE_finalize,come_value_55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sWStringNode_sline(struct sWStringNode* self, struct sInfo* info){
void* __result_obj__;
int __result84__;
memset(&__result_obj__, 0, sizeof(void*));
    __result84__ = self->sline;
    return __result84__;
}

char* sWStringNode_sname(struct sWStringNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value129;
char* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value129 = (void*)0;
    __result85__ = __result_obj__ = ((char*)(right_value129=__builtin_string(self->sname)));
    right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result85__;
}

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info){
void* __result_obj__;
void* right_value130;
char* __dec_obj59;
void* right_value131;
char* __dec_obj60;
struct sRegexNode* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
right_value130 = (void*)0;
right_value131 = (void*)0;
    __dec_obj59=self->str;
    self->str=(char*)come_increment_ref_count(((char*)(right_value130=__builtin_string(str))));
    __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->global=global;
    self->ignore_case=ignore_case;
    self->sline=sline;
    __dec_obj60=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value131=__builtin_string(info->sname))));
    __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result86__ = __result_obj__ = self;
    come_call_finalizer2(sRegexNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    str = come_decrement_ref_count2(str, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result86__;
    come_call_finalizer2(sRegexNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    str = come_decrement_ref_count2(str, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sRegexNode_terminated(){
void* __result_obj__;
_Bool __result87__;
memset(&__result_obj__, 0, sizeof(void*));
    __result87__ = (_Bool)0;
    return __result87__;
}

char* sRegexNode_kind(){
void* __result_obj__;
void* right_value132;
char* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value132 = (void*)0;
    __result88__ = __result_obj__ = ((char*)(right_value132=__builtin_string("sRegexNode")));
    right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result88__;
}

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value133;
struct CVALUE* come_value_56;
void* right_value134;
void* right_value135;
void* right_value136;
void* right_value137;
void* right_value138;
char* __dec_obj61;
void* right_value139;
void* right_value140;
struct sType* __dec_obj62;
void* right_value141;
char* __dec_obj63;
_Bool __result89__;
memset(&__result_obj__, 0, sizeof(void*));
right_value133 = (void*)0;
memset(&come_value_56, 0, sizeof(struct CVALUE*));
right_value134 = (void*)0;
right_value135 = (void*)0;
right_value136 = (void*)0;
right_value137 = (void*)0;
right_value138 = (void*)0;
right_value139 = (void*)0;
right_value140 = (void*)0;
right_value141 = (void*)0;
    come_value_56=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value133=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 374, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj61=come_value_56->c_value;
    come_value_56->c_value=(char*)come_increment_ref_count(((char*)(right_value138=xsprintf("charp_to_regex(\"%s\", %s, 0, %s, 0, 0, 0, 0, 0)",self->str,self->ignore_case?((char*)(right_value134=__builtin_string("1"))):((char*)(right_value135=__builtin_string("0"))),self->global?((char*)(right_value136=__builtin_string("1"))):((char*)(right_value137=__builtin_string("0")))))));
    __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj62=come_value_56->type;
    come_value_56->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value140=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value139=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 377, "sType")))),"come_regex",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_56->type->mPointerNum=1;
    come_value_56->type->mHeap=(_Bool)1;
    come_value_56->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_56));
    add_come_last_code(info,"%s;\n",come_value_56->c_value);
    __dec_obj63=come_value_56->c_value;
    come_value_56->c_value=(char*)come_increment_ref_count(((char*)(right_value141=append_object_to_right_values(come_value_56->c_value,(struct sType*)come_increment_ref_count(come_value_56->type),info))));
    __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result89__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_56, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result89__;
    come_call_finalizer2(CVALUE_finalize,come_value_56, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sRegexNode_sline(struct sRegexNode* self, struct sInfo* info){
void* __result_obj__;
int __result90__;
memset(&__result_obj__, 0, sizeof(void*));
    __result90__ = self->sline;
    return __result90__;
}

char* sRegexNode_sname(struct sRegexNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value142;
char* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value142 = (void*)0;
    __result91__ = __result_obj__ = ((char*)(right_value142=__builtin_string(self->sname)));
    right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result91__;
}

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info){
void* __result_obj__;
struct list$1sNodeph* __dec_obj64;
void* right_value143;
char* __dec_obj65;
struct sListNode* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
right_value143 = (void*)0;
    __dec_obj64=self->list_elements;
    self->list_elements=(struct list$1sNodeph*)come_increment_ref_count(list_elements);
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    self->sline=info->sline;
    __dec_obj65=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value143=__builtin_string(info->sname))));
    __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result92__ = __result_obj__ = self;
    come_call_finalizer2(sListNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,list_elements, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result92__;
    come_call_finalizer2(sListNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,list_elements, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sListNode_terminated(){
void* __result_obj__;
_Bool __result93__;
memset(&__result_obj__, 0, sizeof(void*));
    __result93__ = (_Bool)0;
    return __result93__;
}

char* sListNode_kind(){
void* __result_obj__;
void* right_value144;
char* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
right_value144 = (void*)0;
    __result94__ = __result_obj__ = ((char*)(right_value144=__builtin_string("sListNode")));
    right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result94__;
}

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info){
void* __result_obj__;
struct list$1sNodeph* list_elements_57;
void* right_value145;
void* right_value146;
struct list$1CVALUEph* params_60;
struct sType* list_element_type_61;
struct list$1sNodeph* o2_saved_62;
struct sNode* it_63;
_Bool _if_conditional142;
_Bool __result96__;
void* right_value147;
struct CVALUE* come_value_64;
_Bool _if_conditional143;
void* right_value148;
void* right_value149;
struct sType* __dec_obj66;
void* right_value150;
struct sType* type_values_65;
void* right_value154;
static int list_value_num_69=0;
void* right_value155;
char* var_name_70;
void* right_value156;
struct sVar* var__71;
void* right_value157;
void* right_value158;
void* right_value159;
struct buffer* source_72;
int i_73;
struct list$1CVALUEph* o2_saved_74;
struct CVALUE* it_77;
_Bool _if_conditional150;
void* right_value160;
void* right_value161;
void* right_value162;
void* right_value163;
void* right_value164;
struct sType* list_type_83;
void* right_value168;
void* right_value169;
struct sType* obj_type_87;
char* fun_name_88;
void* right_value170;
void* right_value171;
void* right_value172;
char* generics_fun_name_89;
struct sFun* fun_90;
_Bool _if_conditional155;
void* right_value173;
void* right_value174;
char* __dec_obj73;
_Bool _if_conditional156;
_Bool __result109__;
void* right_value175;
struct sType* result_type_91;
struct sType* type_92;
void* right_value176;
struct CVALUE* obj_value_93;
void* right_value177;
void* right_value178;
struct buffer* num_string_94;
void* right_value179;
struct sType* type2_95;
void* right_value180;
char* type_name_96;
void* right_value181;
void* right_value182;
char* __dec_obj74;
void* right_value183;
struct sType* type3_97;
void* right_value184;
struct sType* __dec_obj75;
void* right_value185;
char* __dec_obj76;
void* right_value186;
void* right_value187;
struct list$1CVALUEph* come_params_98;
_Bool _if_conditional159;
void* right_value188;
struct CVALUE* come_value2_102;
void* right_value189;
char* __dec_obj77;
struct sType* __dec_obj78;
void* right_value190;
struct CVALUE* come_value3_103;
void* right_value191;
char* __dec_obj79;
struct sType* __dec_obj80;
void* right_value192;
void* right_value193;
struct buffer* buf_104;
int j_105;
struct list$1CVALUEph* o2_saved_106;
struct CVALUE* it_107;
_Bool _if_conditional160;
void* right_value194;
struct CVALUE* come_value4_108;
void* right_value195;
char* __dec_obj81;
_Bool _if_conditional161;
void* right_value196;
void* right_value197;
char* __dec_obj82;
void* right_value198;
struct sType* __dec_obj83;
void* right_value199;
_Bool __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&list_elements_57, 0, sizeof(struct list$1sNodeph*));
right_value145 = (void*)0;
right_value146 = (void*)0;
memset(&params_60, 0, sizeof(struct list$1CVALUEph*));
memset(&list_element_type_61, 0, sizeof(struct sType*));
memset(&o2_saved_62, 0, sizeof(struct list$1sNodeph*));
memset(&it_63, 0, sizeof(struct sNode*));
right_value147 = (void*)0;
memset(&come_value_64, 0, sizeof(struct CVALUE*));
right_value148 = (void*)0;
right_value149 = (void*)0;
right_value150 = (void*)0;
memset(&type_values_65, 0, sizeof(struct sType*));
right_value154 = (void*)0;
right_value155 = (void*)0;
memset(&var_name_70, 0, sizeof(char*));
right_value156 = (void*)0;
memset(&var__71, 0, sizeof(struct sVar*));
right_value157 = (void*)0;
right_value158 = (void*)0;
right_value159 = (void*)0;
memset(&source_72, 0, sizeof(struct buffer*));
memset(&i_73, 0, sizeof(int));
memset(&o2_saved_74, 0, sizeof(struct list$1CVALUEph*));
memset(&it_77, 0, sizeof(struct CVALUE*));
right_value160 = (void*)0;
right_value161 = (void*)0;
right_value162 = (void*)0;
right_value163 = (void*)0;
right_value164 = (void*)0;
memset(&list_type_83, 0, sizeof(struct sType*));
right_value168 = (void*)0;
right_value169 = (void*)0;
memset(&obj_type_87, 0, sizeof(struct sType*));
memset(&fun_name_88, 0, sizeof(char*));
right_value170 = (void*)0;
right_value171 = (void*)0;
right_value172 = (void*)0;
memset(&generics_fun_name_89, 0, sizeof(char*));
memset(&fun_90, 0, sizeof(struct sFun*));
right_value173 = (void*)0;
right_value174 = (void*)0;
right_value175 = (void*)0;
memset(&result_type_91, 0, sizeof(struct sType*));
memset(&type_92, 0, sizeof(struct sType*));
right_value176 = (void*)0;
memset(&obj_value_93, 0, sizeof(struct CVALUE*));
right_value177 = (void*)0;
right_value178 = (void*)0;
memset(&num_string_94, 0, sizeof(struct buffer*));
right_value179 = (void*)0;
memset(&type2_95, 0, sizeof(struct sType*));
right_value180 = (void*)0;
memset(&type_name_96, 0, sizeof(char*));
right_value181 = (void*)0;
right_value182 = (void*)0;
right_value183 = (void*)0;
memset(&type3_97, 0, sizeof(struct sType*));
right_value184 = (void*)0;
right_value185 = (void*)0;
right_value186 = (void*)0;
right_value187 = (void*)0;
memset(&come_params_98, 0, sizeof(struct list$1CVALUEph*));
right_value188 = (void*)0;
memset(&come_value2_102, 0, sizeof(struct CVALUE*));
right_value189 = (void*)0;
right_value190 = (void*)0;
memset(&come_value3_103, 0, sizeof(struct CVALUE*));
right_value191 = (void*)0;
right_value192 = (void*)0;
right_value193 = (void*)0;
memset(&buf_104, 0, sizeof(struct buffer*));
memset(&j_105, 0, sizeof(int));
memset(&o2_saved_106, 0, sizeof(struct list$1CVALUEph*));
memset(&it_107, 0, sizeof(struct CVALUE*));
right_value194 = (void*)0;
memset(&come_value4_108, 0, sizeof(struct CVALUE*));
right_value195 = (void*)0;
right_value196 = (void*)0;
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
    list_elements_57=self->list_elements;
    params_60=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value146=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value145=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 432, "list$1CVALUEph"))))))));
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    list_element_type_61=((void*)0);
    for(    o2_saved_62=(list_elements_57),it_63=list$1sNodeph_begin((o2_saved_62));    !list$1sNodeph_end((o2_saved_62));    it_63=list$1sNodeph_next((o2_saved_62))    ){
        if(_if_conditional142=!node_compile(it_63,info),        _if_conditional142) {
            __result96__ = (_Bool)0;
            come_call_finalizer2(list$1CVALUEphp_finalize,params_60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,list_element_type_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result96__;
        }
        come_value_64=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value147=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        if(list_element_type_61) {
            check_assign_type(((char*)(right_value148=xsprintf("invalid list element type"))),list_element_type_61,come_value_64->type,come_value_64,(_Bool)0,(_Bool)1,info);
            right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        list$1CVALUEph_push_back(params_60,(struct CVALUE*)come_increment_ref_count(come_value_64));
        __dec_obj66=list_element_type_61;
        list_element_type_61=(struct sType*)come_increment_ref_count(((struct sType*)(right_value149=sType_clone(come_value_64->type))));
        come_call_finalizer2(sType_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(CVALUE_finalize,come_value_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    type_values_65=(struct sType*)come_increment_ref_count(((struct sType*)(right_value150=sType_clone(list_element_type_61))));
    come_call_finalizer2(sType_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    list$1sNodeph_push_back(type_values_65->mArrayNum,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value154=create_int_node(list$1CVALUEph_length(params_60),info)))));
    if(right_value154) { right_value154 = come_decrement_ref_count2(right_value154, ((struct sNode*)right_value154)->finalize, ((struct sNode*)right_value154)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    type_values_65->mHeap=(_Bool)0;
    var_name_70=(char*)come_increment_ref_count(((char*)(right_value155=xsprintf("__list_values%d__",++list_value_num_69))));
    right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_variable_to_table(var_name_70,(struct sType*)come_increment_ref_count(((struct sType*)(right_value156=sType_clone(type_values_65)))),info);
    come_call_finalizer2(sType_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    var__71=get_variable_from_table(info->lv_table,var_name_70);
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value157=make_define_var(type_values_65,var__71->mCValueName,(_Bool)0,info))));
    right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    source_72=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value159=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value158=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 465, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append_str(source_72,"{");
    i_73=0;
    for(    o2_saved_74=(struct list$1CVALUEph*)come_increment_ref_count((params_60)),it_77=list$1CVALUEph_begin((o2_saved_74));    !list$1CVALUEph_end((o2_saved_74));    it_77=list$1CVALUEph_next((o2_saved_74))    ){
        if(list_element_type_61->mHeap) {
            buffer_append_str(source_72,((char*)(right_value160=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",var__71->mCValueName,i_73,list$1CVALUEphp_operator_load_element(params_60,i_73)->c_value))));
            right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            buffer_append_str(source_72,((char*)(right_value161=xsprintf("%s[%d]=%s;\n",var__71->mCValueName,i_73,list$1CVALUEphp_operator_load_element(params_60,i_73)->c_value))));
            right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        i_73++;
    }
    come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    buffer_append_str(source_72,"}");
    add_come_code(info,"%s",((char*)(right_value162=buffer_to_string(source_72))));
    right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    list_type_83=(struct sType*)come_increment_ref_count(((struct sType*)(right_value164=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value163=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 484, "sType")))),"list",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    list$1sTypeph_push_back(list_type_83->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value168=sType_clone(list_element_type_61)))));
    come_call_finalizer2(sType_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    obj_type_87=(struct sType*)come_increment_ref_count(((struct sType*)(right_value169=sType_clone(list_type_83))));
    come_call_finalizer2(sType_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    fun_name_88="initialize_with_values";
    generics_fun_name_89=(char*)come_increment_ref_count(((char*)(right_value172=string_to_string(((char*)(right_value171=make_generics_function(obj_type_87,(char*)come_increment_ref_count(((char*)(right_value170=__builtin_string(fun_name_88)))),info,(_Bool)1)))))));
    right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    fun_90=map$2charphsFunph_at(info->funcs,generics_fun_name_89,((void*)0));
    if(_if_conditional155=fun_90==((void*)0),    _if_conditional155) {
        __dec_obj73=generics_fun_name_89;
        generics_fun_name_89=(char*)come_increment_ref_count(((char*)(right_value174=create_method_name(obj_type_87,(_Bool)0,((char*)(right_value173=__builtin_string(fun_name_88))),info,(_Bool)1))));
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_90=map$2charphsFunph_at(info->funcs,generics_fun_name_89,((void*)0));
        if(_if_conditional156=fun_90==((void*)0),        _if_conditional156) {
            err_msg(info,"function not found(%s) at method(%s)(1)\n",generics_fun_name_89,info->come_fun->mName);
            __result109__ = (_Bool)1;
            come_call_finalizer2(list$1CVALUEphp_finalize,params_60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,list_element_type_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type_values_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            var_name_70 = come_decrement_ref_count2(var_name_70, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,source_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,list_type_83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,obj_type_87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            generics_fun_name_89 = come_decrement_ref_count2(generics_fun_name_89, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result109__;
        }
    }
    result_type_91=(struct sType*)come_increment_ref_count(((struct sType*)(right_value175=sType_clone(fun_90->mResultType))));
    come_call_finalizer2(sType_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_type_91->mStatic=(_Bool)0;
    type_92=list_type_83;
    obj_value_93=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value176=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 510, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    num_string_94=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value178=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value177=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 512, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append_str(num_string_94,"1");
    type2_95=(struct sType*)come_increment_ref_count(((struct sType*)(right_value179=solve_generics(type_92,type_92,info))));
    come_call_finalizer2(sType_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type_name_96=(char*)come_increment_ref_count(((char*)(right_value180=make_type_name_string(type2_95,(_Bool)0,(_Bool)1,(_Bool)0,info))));
    right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj74=obj_value_93->c_value;
    obj_value_93->c_value=(char*)come_increment_ref_count(((char*)(right_value182=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_96,type_name_96,((char*)(right_value181=buffer_to_string(num_string_94))),info->sname,info->sline,type_name_96))));
    __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type3_97=(struct sType*)come_increment_ref_count(((struct sType*)(right_value183=sType_clone(type2_95))));
    come_call_finalizer2(sType_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type3_97->mPointerNum++;
    type3_97->mHeap=(_Bool)1;
    type2_95->mHeap=(_Bool)1;
    __dec_obj75=obj_value_93->type;
    obj_value_93->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value184=sType_clone(type2_95))));
    come_call_finalizer2(sType_finalize,__dec_obj75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj76=obj_value_93->c_value;
    obj_value_93->c_value=(char*)come_increment_ref_count(((char*)(right_value185=append_object_to_right_values(obj_value_93->c_value,(struct sType*)come_increment_ref_count(type3_97),info))));
    __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    obj_value_93->type->mPointerNum++;
    obj_value_93->var=((void*)0);
    come_params_98=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value187=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value186=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 531, "list$1CVALUEph"))))))));
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional159=list$1sTypephp_operator_load_element(fun_90->mParamTypes,0)->mHeap&&obj_value_93->type->mHeap,    _if_conditional159) {
        std_move(list$1sTypephp_operator_load_element(fun_90->mParamTypes,0),obj_value_93->type,obj_value_93,info);
    }
    list$1CVALUEph_push_back(come_params_98,(struct CVALUE*)come_increment_ref_count(obj_value_93));
    come_value2_102=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value188=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 538, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj77=come_value2_102->c_value;
    come_value2_102->c_value=(char*)come_increment_ref_count(((char*)(right_value189=xsprintf("%d",list$1CVALUEph_length(params_60)))));
    __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj78=come_value2_102->type;
    come_value2_102->type=((void*)0);
    come_call_finalizer2(sType_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_value2_102->var=((void*)0);
    list$1CVALUEph_push_back(come_params_98,(struct CVALUE*)come_increment_ref_count(come_value2_102));
    come_value3_103=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value190=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 546, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj79=come_value3_103->c_value;
    come_value3_103->c_value=(char*)come_increment_ref_count(((char*)(right_value191=xsprintf("%s",var__71->mCValueName))));
    __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj80=come_value3_103->type;
    come_value3_103->type=((void*)0);
    come_call_finalizer2(sType_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_value3_103->var=((void*)0);
    list$1CVALUEph_push_back(come_params_98,(struct CVALUE*)come_increment_ref_count(come_value3_103));
    buf_104=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value193=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value192=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 554, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append_str(buf_104,generics_fun_name_89);
    buffer_append_str(buf_104,"(");
    j_105=0;
    for(    o2_saved_106=(struct list$1CVALUEph*)come_increment_ref_count((come_params_98)),it_107=list$1CVALUEph_begin((o2_saved_106));    !list$1CVALUEph_end((o2_saved_106));    it_107=list$1CVALUEph_next((o2_saved_106))    ){
        buffer_append_str(buf_104,it_107->c_value);
        if(_if_conditional160=j_105!=list$1CVALUEph_length(come_params_98)-1,        _if_conditional160) {
            buffer_append_str(buf_104,",");
        }
        j_105++;
    }
    come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_104,")");
    come_value4_108=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value194=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 571, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj81=come_value4_108->c_value;
    come_value4_108->c_value=(char*)come_increment_ref_count(((char*)(right_value195=buffer_to_string(buf_104))));
    __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(result_type_91->mHeap) {
        __dec_obj82=come_value4_108->c_value;
        come_value4_108->c_value=(char*)come_increment_ref_count(((char*)(right_value197=append_object_to_right_values(((char*)(right_value196=buffer_to_string(buf_104))),(struct sType*)come_increment_ref_count(result_type_91),info))));
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __dec_obj83=come_value4_108->type;
    come_value4_108->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value198=sType_clone(result_type_91))));
    come_call_finalizer2(sType_finalize,__dec_obj83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value4_108->type->mStatic=(_Bool)0;
    come_value4_108->var=((void*)0);
    add_come_last_code(info,"%s;\n",((char*)(right_value199=buffer_to_string(buf_104))));
    right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value4_108));
    __result112__ = (_Bool)1;
    come_call_finalizer2(list$1CVALUEphp_finalize,params_60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,list_element_type_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_values_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_70 = come_decrement_ref_count2(var_name_70, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,source_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,list_type_83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,obj_type_87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    generics_fun_name_89 = come_decrement_ref_count2(generics_fun_name_89, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,obj_value_93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,num_string_94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_96 = come_decrement_ref_count2(type_name_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type3_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,come_params_98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value3_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_104, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value4_108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result112__;
    come_call_finalizer2(list$1CVALUEphp_finalize,params_60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,list_element_type_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_values_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_70 = come_decrement_ref_count2(var_name_70, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,source_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,list_type_83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,obj_type_87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    generics_fun_name_89 = come_decrement_ref_count2(generics_fun_name_89, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,obj_value_93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,num_string_94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_96 = come_decrement_ref_count2(type_name_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type3_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,come_params_98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value3_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_104, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value4_108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result95__ = __result_obj__ = self;
        come_call_finalizer2(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result95__;
        come_call_finalizer2(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_58;
_Bool _while_condtional9;
struct list_item$1CVALUEph* prev_it_59;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_58, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_59, 0, sizeof(struct list_item$1CVALUEph*));
            it_58=self->head;
            while(_while_condtional9=it_58!=((void*)0),            _while_condtional9) {
                prev_it_59=it_58;
                it_58=it_58->next;
                come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional144;
void* right_value151;
struct list_item$1sNodeph* litem_66;
struct sNode* __dec_obj67;
_Bool _if_conditional145;
void* right_value152;
struct list_item$1sNodeph* litem_67;
struct sNode* __dec_obj68;
void* right_value153;
struct list_item$1sNodeph* litem_68;
struct sNode* __dec_obj69;
struct list$1sNodeph* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
right_value151 = (void*)0;
memset(&litem_66, 0, sizeof(struct list_item$1sNodeph*));
right_value152 = (void*)0;
memset(&litem_67, 0, sizeof(struct list_item$1sNodeph*));
right_value153 = (void*)0;
memset(&litem_68, 0, sizeof(struct list_item$1sNodeph*));
        if(_if_conditional144=self->len==0,        _if_conditional144) {
            litem_66=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value151=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 226, "list_item$1sNodeph"))));
            come_call_finalizer2(list_item$1sNodephp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            litem_66->prev=((void*)0);
            litem_66->next=((void*)0);
            __dec_obj67=litem_66->item;
            litem_66->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count2(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail=litem_66;
            self->head=litem_66;
        }
        else {
            if(_if_conditional145=self->len==1,            _if_conditional145) {
                litem_67=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value152=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 236, "list_item$1sNodeph"))));
                come_call_finalizer2(list_item$1sNodephp_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_67->prev=self->head;
                litem_67->next=((void*)0);
                __dec_obj68=litem_67->item;
                litem_67->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); }
                self->tail=litem_67;
                self->head->next=litem_67;
            }
            else {
                litem_68=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value153=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 246, "list_item$1sNodeph"))));
                come_call_finalizer2(list_item$1sNodephp_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_68->prev=self->tail;
                litem_68->next=((void*)0);
                __dec_obj69=litem_68->item;
                litem_68->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); }
                self->tail->next=litem_68;
                self->tail=litem_68;
            }
        }
        self->len++;
        __result97__ = __result_obj__ = self;
        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result97__;
        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
int __result98__;
memset(&__result_obj__, 0, sizeof(void*));
        __result98__ = self->len;
        return __result98__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional146;
struct CVALUE* result_75;
struct CVALUE* __result99__;
_Bool _if_conditional147;
struct CVALUE* __result100__;
struct CVALUE* result_76;
struct CVALUE* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_75, 0, sizeof(struct CVALUE*));
memset(&result_76, 0, sizeof(struct CVALUE*));
        if(_if_conditional146=self==((void*)0),        _if_conditional146) {
            memset(&result_75,0,sizeof(struct CVALUE*));
            __result99__ = __result_obj__ = result_75;
            return __result99__;
        }
        self->it=self->head;
        if(self->it) {
            __result100__ = __result_obj__ = self->it->item;
            return __result100__;
        }
        memset(&result_76,0,sizeof(struct CVALUE*));
        __result101__ = __result_obj__ = result_76;
        return __result101__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __result102__;
memset(&__result_obj__, 0, sizeof(void*));
        __result102__ = self==((void*)0)||self->it==((void*)0);
        return __result102__;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional148;
struct CVALUE* result_78;
struct CVALUE* __result103__;
_Bool _if_conditional149;
struct CVALUE* __result104__;
struct CVALUE* result_79;
struct CVALUE* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_78, 0, sizeof(struct CVALUE*));
memset(&result_79, 0, sizeof(struct CVALUE*));
        if(_if_conditional148=self==((void*)0)||self->it==((void*)0),        _if_conditional148) {
            memset(&result_78,0,sizeof(struct CVALUE*));
            __result103__ = __result_obj__ = result_78;
            return __result103__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result104__ = __result_obj__ = self->it->item;
            return __result104__;
        }
        memset(&result_79,0,sizeof(struct CVALUE*));
        __result105__ = __result_obj__ = result_79;
        return __result105__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool _if_conditional151;
struct list_item$1CVALUEph* it_80;
int i_81;
_Bool _while_condtional10;
_Bool _if_conditional152;
struct CVALUE* __result106__;
struct CVALUE* default_value_82;
struct CVALUE* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_80, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_81, 0, sizeof(int));
memset(&default_value_82, 0, sizeof(struct CVALUE*));
                if(_if_conditional151=position<0,                _if_conditional151) {
                    position+=self->len;
                }
                it_80=self->head;
                i_81=0;
                while(_while_condtional10=it_80!=((void*)0),                _while_condtional10) {
                    if(_if_conditional152=position==i_81,                    _if_conditional152) {
                        __result106__ = __result_obj__ = it_80->item;
                        return __result106__;
                    }
                    it_80=it_80->next;
                    i_81++;
                }
                memset(&default_value_82,0,sizeof(struct CVALUE*));
                __result107__ = __result_obj__ = default_value_82;
                come_call_finalizer2(CVALUE_finalize,default_value_82, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result107__;
                come_call_finalizer2(CVALUE_finalize,default_value_82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional153;
void* right_value165;
struct list_item$1sTypeph* litem_84;
struct sType* __dec_obj70;
_Bool _if_conditional154;
void* right_value166;
struct list_item$1sTypeph* litem_85;
struct sType* __dec_obj71;
void* right_value167;
struct list_item$1sTypeph* litem_86;
struct sType* __dec_obj72;
struct list$1sTypeph* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
right_value165 = (void*)0;
memset(&litem_84, 0, sizeof(struct list_item$1sTypeph*));
right_value166 = (void*)0;
memset(&litem_85, 0, sizeof(struct list_item$1sTypeph*));
right_value167 = (void*)0;
memset(&litem_86, 0, sizeof(struct list_item$1sTypeph*));
        if(_if_conditional153=self->len==0,        _if_conditional153) {
            litem_84=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value165=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 226, "list_item$1sTypeph"))));
            come_call_finalizer2(list_item$1sTypephp_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            litem_84->prev=((void*)0);
            litem_84->next=((void*)0);
            __dec_obj70=litem_84->item;
            litem_84->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer2(sType_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            self->tail=litem_84;
            self->head=litem_84;
        }
        else {
            if(_if_conditional154=self->len==1,            _if_conditional154) {
                litem_85=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value166=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 236, "list_item$1sTypeph"))));
                come_call_finalizer2(list_item$1sTypephp_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_85->prev=self->head;
                litem_85->next=((void*)0);
                __dec_obj71=litem_85->item;
                litem_85->item=(struct sType*)come_increment_ref_count(item);
                come_call_finalizer2(sType_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_85;
                self->head->next=litem_85;
            }
            else {
                litem_86=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value167=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 246, "list_item$1sTypeph"))));
                come_call_finalizer2(list_item$1sTypephp_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_86->prev=self->tail;
                litem_86->next=((void*)0);
                __dec_obj72=litem_86->item;
                litem_86->item=(struct sType*)come_increment_ref_count(item);
                come_call_finalizer2(sType_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail->next=litem_86;
                self->tail=litem_86;
            }
        }
        self->len++;
        __result108__ = __result_obj__ = self;
        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result108__;
        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional157;
struct list_item$1sTypeph* it_99;
int i_100;
_Bool _while_condtional11;
_Bool _if_conditional158;
struct sType* __result110__;
struct sType* default_value_101;
struct sType* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_99, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_100, 0, sizeof(int));
memset(&default_value_101, 0, sizeof(struct sType*));
        if(_if_conditional157=position<0,        _if_conditional157) {
            position+=self->len;
        }
        it_99=self->head;
        i_100=0;
        while(_while_condtional11=it_99!=((void*)0),        _while_condtional11) {
            if(_if_conditional158=position==i_100,            _if_conditional158) {
                __result110__ = __result_obj__ = it_99->item;
                return __result110__;
            }
            it_99=it_99->next;
            i_100++;
        }
        memset(&default_value_101,0,sizeof(struct sType*));
        __result111__ = __result_obj__ = default_value_101;
        come_call_finalizer2(sType_finalize,default_value_101, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result111__;
        come_call_finalizer2(sType_finalize,default_value_101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sListNode_sline(struct sListNode* self, struct sInfo* info){
void* __result_obj__;
int __result113__;
memset(&__result_obj__, 0, sizeof(void*));
    __result113__ = self->sline;
    return __result113__;
}

char* sListNode_sname(struct sListNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value200;
char* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
right_value200 = (void*)0;
    __result114__ = __result_obj__ = ((char*)(right_value200=__builtin_string(self->sname)));
    right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result114__;
}

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
void* __result_obj__;
struct list$1sNodeph* __dec_obj84;
void* right_value201;
char* __dec_obj85;
struct sTupleNode* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
right_value201 = (void*)0;
    __dec_obj84=self->tuple_elements;
    self->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    self->sline=info->sline;
    __dec_obj85=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value201=__builtin_string(info->sname))));
    __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result115__ = __result_obj__ = self;
    come_call_finalizer2(sTupleNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,tuple_elements, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result115__;
    come_call_finalizer2(sTupleNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,tuple_elements, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sTupleNode_terminated(){
void* __result_obj__;
_Bool __result116__;
memset(&__result_obj__, 0, sizeof(void*));
    __result116__ = (_Bool)0;
    return __result116__;
}

char* sTupleNode_kind(){
void* __result_obj__;
void* right_value202;
char* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
right_value202 = (void*)0;
    __result117__ = __result_obj__ = ((char*)(right_value202=__builtin_string("sTupleNode")));
    right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result117__;
}

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info){
void* __result_obj__;
struct list$1sNodeph* tuple_elements_109;
void* right_value203;
void* right_value204;
struct list$1sTypeph* tuple_types_110;
void* right_value205;
void* right_value206;
struct list$1CVALUEph* tuple_values_111;
struct list$1sNodeph* o2_saved_112;
struct sNode* it_113;
_Bool _if_conditional164;
_Bool __result118__;
void* right_value207;
struct CVALUE* come_value_114;
void* right_value211;
void* right_value212;
void* right_value213;
void* right_value214;
void* right_value215;
struct sType* type_116;
struct list$1sTypeph* o2_saved_117;
struct sType* it_120;
void* right_value216;
void* right_value217;
struct CVALUE* obj_value_123;
void* right_value218;
void* right_value219;
struct buffer* num_string_124;
void* right_value220;
struct sType* type2_125;
void* right_value221;
char* type_name_126;
void* right_value222;
void* right_value223;
char* __dec_obj88;
void* right_value224;
struct sType* type3_127;
void* right_value225;
struct sType* __dec_obj89;
void* right_value226;
char* __dec_obj90;
void* right_value227;
struct sType* obj_type_128;
char* fun_name_129;
void* right_value228;
void* right_value229;
void* right_value230;
char* generics_fun_name_130;
struct sFun* fun_131;
_Bool _if_conditional173;
void* right_value231;
void* right_value232;
char* __dec_obj91;
_Bool _if_conditional174;
_Bool __result128__;
void* right_value233;
struct sType* result_type_132;
void* right_value234;
void* right_value235;
struct list$1CVALUEph* come_params_133;
_Bool _if_conditional175;
int i_134;
struct list$1CVALUEph* o2_saved_135;
struct CVALUE* it_136;
void* right_value236;
struct CVALUE* come_value_137;
_Bool _if_conditional176;
void* right_value237;
void* right_value238;
struct buffer* buf_138;
int j_139;
struct list$1CVALUEph* o2_saved_140;
struct CVALUE* it_141;
_Bool _if_conditional177;
void* right_value239;
struct CVALUE* come_value2_142;
void* right_value240;
char* __dec_obj92;
_Bool _if_conditional178;
void* right_value241;
void* right_value242;
char* __dec_obj93;
void* right_value243;
struct sType* __dec_obj94;
void* right_value244;
_Bool __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tuple_elements_109, 0, sizeof(struct list$1sNodeph*));
right_value203 = (void*)0;
right_value204 = (void*)0;
memset(&tuple_types_110, 0, sizeof(struct list$1sTypeph*));
right_value205 = (void*)0;
right_value206 = (void*)0;
memset(&tuple_values_111, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_112, 0, sizeof(struct list$1sNodeph*));
memset(&it_113, 0, sizeof(struct sNode*));
right_value207 = (void*)0;
memset(&come_value_114, 0, sizeof(struct CVALUE*));
right_value211 = (void*)0;
right_value212 = (void*)0;
right_value213 = (void*)0;
right_value214 = (void*)0;
right_value215 = (void*)0;
memset(&type_116, 0, sizeof(struct sType*));
memset(&o2_saved_117, 0, sizeof(struct list$1sTypeph*));
memset(&it_120, 0, sizeof(struct sType*));
right_value216 = (void*)0;
right_value217 = (void*)0;
memset(&obj_value_123, 0, sizeof(struct CVALUE*));
right_value218 = (void*)0;
right_value219 = (void*)0;
memset(&num_string_124, 0, sizeof(struct buffer*));
right_value220 = (void*)0;
memset(&type2_125, 0, sizeof(struct sType*));
right_value221 = (void*)0;
memset(&type_name_126, 0, sizeof(char*));
right_value222 = (void*)0;
right_value223 = (void*)0;
right_value224 = (void*)0;
memset(&type3_127, 0, sizeof(struct sType*));
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
memset(&obj_type_128, 0, sizeof(struct sType*));
memset(&fun_name_129, 0, sizeof(char*));
right_value228 = (void*)0;
right_value229 = (void*)0;
right_value230 = (void*)0;
memset(&generics_fun_name_130, 0, sizeof(char*));
memset(&fun_131, 0, sizeof(struct sFun*));
right_value231 = (void*)0;
right_value232 = (void*)0;
right_value233 = (void*)0;
memset(&result_type_132, 0, sizeof(struct sType*));
right_value234 = (void*)0;
right_value235 = (void*)0;
memset(&come_params_133, 0, sizeof(struct list$1CVALUEph*));
memset(&i_134, 0, sizeof(int));
memset(&o2_saved_135, 0, sizeof(struct list$1CVALUEph*));
memset(&it_136, 0, sizeof(struct CVALUE*));
right_value236 = (void*)0;
memset(&come_value_137, 0, sizeof(struct CVALUE*));
right_value237 = (void*)0;
right_value238 = (void*)0;
memset(&buf_138, 0, sizeof(struct buffer*));
memset(&j_139, 0, sizeof(int));
memset(&o2_saved_140, 0, sizeof(struct list$1CVALUEph*));
memset(&it_141, 0, sizeof(struct CVALUE*));
right_value239 = (void*)0;
memset(&come_value2_142, 0, sizeof(struct CVALUE*));
right_value240 = (void*)0;
right_value241 = (void*)0;
right_value242 = (void*)0;
right_value243 = (void*)0;
right_value244 = (void*)0;
    tuple_elements_109=self->tuple_elements;
    tuple_types_110=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value204=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value203=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 630, "list$1sTypeph"))))))));
    come_call_finalizer2(list$1sTypephp_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    tuple_values_111=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value206=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value205=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 631, "list$1CVALUEph"))))))));
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(    o2_saved_112=(tuple_elements_109),it_113=list$1sNodeph_begin((o2_saved_112));    !list$1sNodeph_end((o2_saved_112));    it_113=list$1sNodeph_next((o2_saved_112))    ){
        if(_if_conditional164=!node_compile(it_113,info),        _if_conditional164) {
            __result118__ = (_Bool)0;
            come_call_finalizer2(list$1sTypephp_finalize,tuple_types_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,tuple_values_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result118__;
        }
        come_value_114=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value207=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(tuple_values_111,(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value211=CVALUE_clone(come_value_114)))));
        come_call_finalizer2(CVALUE_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1sTypeph_push_back(tuple_types_110,(struct sType*)come_increment_ref_count(((struct sType*)(right_value212=sType_clone(come_value_114->type)))));
        come_call_finalizer2(sType_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(CVALUE_finalize,come_value_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    type_116=(struct sType*)come_increment_ref_count(((struct sType*)(right_value215=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value213=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 645, "sType")))),((char*)(right_value214=xsprintf("tuple%d",list$1sTypeph_length(tuple_types_110)))),(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(    o2_saved_117=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_110)),it_120=list$1sTypeph_begin((o2_saved_117));    !list$1sTypeph_end((o2_saved_117));    it_120=list$1sTypeph_next((o2_saved_117))    ){
        list$1sTypeph_push_back(type_116->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value216=sType_clone(it_120)))));
        come_call_finalizer2(sType_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    come_call_finalizer2(list$1sTypephp_finalize,o2_saved_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    obj_value_123=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value217=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 651, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    num_string_124=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value219=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value218=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 653, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append_str(num_string_124,"1");
    type2_125=(struct sType*)come_increment_ref_count(((struct sType*)(right_value220=solve_generics(type_116,type_116,info))));
    come_call_finalizer2(sType_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type_name_126=(char*)come_increment_ref_count(((char*)(right_value221=make_type_name_string(type2_125,(_Bool)0,(_Bool)1,(_Bool)0,info))));
    right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj88=obj_value_123->c_value;
    obj_value_123->c_value=(char*)come_increment_ref_count(((char*)(right_value223=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_126,type_name_126,((char*)(right_value222=buffer_to_string(num_string_124))),info->sname,info->sline,type_name_126))));
    __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type3_127=(struct sType*)come_increment_ref_count(((struct sType*)(right_value224=sType_clone(type2_125))));
    come_call_finalizer2(sType_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type3_127->mPointerNum++;
    type3_127->mHeap=(_Bool)1;
    type2_125->mHeap=(_Bool)1;
    __dec_obj89=obj_value_123->type;
    obj_value_123->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value225=sType_clone(type2_125))));
    come_call_finalizer2(sType_finalize,__dec_obj89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj90=obj_value_123->c_value;
    obj_value_123->c_value=(char*)come_increment_ref_count(((char*)(right_value226=append_object_to_right_values(obj_value_123->c_value,(struct sType*)come_increment_ref_count(type3_127),info))));
    __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    obj_value_123->type->mPointerNum++;
    obj_value_123->var=((void*)0);
    obj_type_128=(struct sType*)come_increment_ref_count(((struct sType*)(right_value227=sType_clone(type2_125))));
    come_call_finalizer2(sType_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    fun_name_129="initialize";
    generics_fun_name_130=(char*)come_increment_ref_count(((char*)(right_value230=string_to_string(((char*)(right_value229=make_generics_function(obj_type_128,(char*)come_increment_ref_count(((char*)(right_value228=__builtin_string(fun_name_129)))),info,(_Bool)1)))))));
    right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    fun_131=map$2charphsFunph_at(info->funcs,generics_fun_name_130,((void*)0));
    if(_if_conditional173=fun_131==((void*)0),    _if_conditional173) {
        __dec_obj91=generics_fun_name_130;
        generics_fun_name_130=(char*)come_increment_ref_count(((char*)(right_value232=create_method_name(obj_type_128,(_Bool)0,((char*)(right_value231=__builtin_string(fun_name_129))),info,(_Bool)1))));
        __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_131=map$2charphsFunph_at(info->funcs,generics_fun_name_130,((void*)0));
        if(_if_conditional174=fun_131==((void*)0),        _if_conditional174) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_130,info->come_fun->mName);
            __result128__ = (_Bool)1;
            come_call_finalizer2(list$1sTypephp_finalize,tuple_types_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,tuple_values_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,obj_value_123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,num_string_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type2_125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            type_name_126 = come_decrement_ref_count2(type_name_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type3_127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,obj_type_128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            generics_fun_name_130 = come_decrement_ref_count2(generics_fun_name_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result128__;
        }
    }
    result_type_132=(struct sType*)come_increment_ref_count(((struct sType*)(right_value233=sType_clone(fun_131->mResultType))));
    come_call_finalizer2(sType_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_type_132->mStatic=(_Bool)0;
    come_params_133=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value235=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value234=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 693, "list$1CVALUEph"))))))));
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional175=list$1sTypephp_operator_load_element(fun_131->mParamTypes,0)->mHeap&&obj_value_123->type->mHeap,    _if_conditional175) {
        std_move(list$1sTypephp_operator_load_element(fun_131->mParamTypes,0),obj_value_123->type,obj_value_123,info);
    }
    list$1CVALUEph_push_back(come_params_133,(struct CVALUE*)come_increment_ref_count(obj_value_123));
    i_134=1;
    for(    o2_saved_135=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_111)),it_136=list$1CVALUEph_begin((o2_saved_135));    !list$1CVALUEph_end((o2_saved_135));    it_136=list$1CVALUEph_next((o2_saved_135))    ){
        come_value_137=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value236=CVALUE_clone(it_136))));
        come_call_finalizer2(CVALUE_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional176=list$1sTypephp_operator_load_element(fun_131->mParamTypes,i_134)&&list$1sTypephp_operator_load_element(fun_131->mParamTypes,i_134)->mHeap&&come_value_137->type->mHeap,        _if_conditional176) {
            std_move(list$1sTypephp_operator_load_element(fun_131->mParamTypes,i_134),come_value_137->type,come_value_137,info);
        }
        list$1CVALUEph_push_back(come_params_133,(struct CVALUE*)come_increment_ref_count(come_value_137));
        i_134++;
        come_call_finalizer2(CVALUE_finalize,come_value_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    buf_138=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value238=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value237=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 712, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append_str(buf_138,generics_fun_name_130);
    buffer_append_str(buf_138,"(");
    j_139=0;
    for(    o2_saved_140=(struct list$1CVALUEph*)come_increment_ref_count((come_params_133)),it_141=list$1CVALUEph_begin((o2_saved_140));    !list$1CVALUEph_end((o2_saved_140));    it_141=list$1CVALUEph_next((o2_saved_140))    ){
        buffer_append_str(buf_138,it_141->c_value);
        if(_if_conditional177=j_139!=list$1CVALUEph_length(come_params_133)-1,        _if_conditional177) {
            buffer_append_str(buf_138,",");
        }
        j_139++;
    }
    come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_138,")");
    come_value2_142=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value239=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 729, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj92=come_value2_142->c_value;
    come_value2_142->c_value=(char*)come_increment_ref_count(((char*)(right_value240=buffer_to_string(buf_138))));
    __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(result_type_132->mHeap) {
        __dec_obj93=come_value2_142->c_value;
        come_value2_142->c_value=(char*)come_increment_ref_count(((char*)(right_value242=append_object_to_right_values(((char*)(right_value241=buffer_to_string(buf_138))),(struct sType*)come_increment_ref_count(result_type_132),info))));
        __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __dec_obj94=come_value2_142->type;
    come_value2_142->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value243=sType_clone(result_type_132))));
    come_call_finalizer2(sType_finalize,__dec_obj94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value2_142->type->mStatic=(_Bool)0;
    come_value2_142->var=((void*)0);
    add_come_last_code(info,"%s;\n",((char*)(right_value244=buffer_to_string(buf_138))));
    right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_142));
    __result129__ = (_Bool)1;
    come_call_finalizer2(list$1sTypephp_finalize,tuple_types_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,tuple_values_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,obj_value_123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,num_string_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_126 = come_decrement_ref_count2(type_name_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type3_127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,obj_type_128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    generics_fun_name_130 = come_decrement_ref_count2(generics_fun_name_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,come_params_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result129__;
    come_call_finalizer2(list$1sTypephp_finalize,tuple_types_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,tuple_values_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,obj_value_123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,num_string_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_126 = come_decrement_ref_count2(type_name_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type3_127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,obj_type_128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    generics_fun_name_130 = come_decrement_ref_count2(generics_fun_name_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,come_params_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional165;
struct CVALUE* __result119__;
void* right_value208;
struct CVALUE* result_115;
_Bool _if_conditional166;
void* right_value209;
char* __dec_obj86;
_Bool _if_conditional167;
void* right_value210;
struct sType* __dec_obj87;
_Bool _if_conditional168;
struct CVALUE* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
right_value208 = (void*)0;
memset(&result_115, 0, sizeof(struct CVALUE*));
right_value209 = (void*)0;
right_value210 = (void*)0;
            if(_if_conditional165=self==(void*)0,            _if_conditional165) {
                __result119__ = __result_obj__ = (void*)0;
                return __result119__;
            }
            result_115=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value208=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"))));
            come_call_finalizer2(CVALUE_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional166=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional166) {
                __dec_obj86=result_115->c_value;
                result_115->c_value=(char*)come_increment_ref_count(((char*)(right_value209=string_clone(self->c_value))));
                __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional167=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional167) {
                __dec_obj87=result_115->type;
                result_115->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value210=sType_clone(self->type))));
                come_call_finalizer2(sType_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional168=self!=((void*)0),            _if_conditional168) {
                result_115->var=self->var;
            }
            __result120__ = __result_obj__ = result_115;
            come_call_finalizer2(CVALUE_finalize,result_115, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result120__;
            come_call_finalizer2(CVALUE_finalize,result_115, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional169;
struct sType* result_118;
struct sType* __result121__;
_Bool _if_conditional170;
struct sType* __result122__;
struct sType* result_119;
struct sType* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_118, 0, sizeof(struct sType*));
memset(&result_119, 0, sizeof(struct sType*));
        if(_if_conditional169=self==((void*)0),        _if_conditional169) {
            memset(&result_118,0,sizeof(struct sType*));
            __result121__ = __result_obj__ = result_118;
            return __result121__;
        }
        self->it=self->head;
        if(self->it) {
            __result122__ = __result_obj__ = self->it->item;
            return __result122__;
        }
        memset(&result_119,0,sizeof(struct sType*));
        __result123__ = __result_obj__ = result_119;
        return __result123__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result124__;
memset(&__result_obj__, 0, sizeof(void*));
        __result124__ = self==((void*)0)||self->it==((void*)0);
        return __result124__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional171;
struct sType* result_121;
struct sType* __result125__;
_Bool _if_conditional172;
struct sType* __result126__;
struct sType* result_122;
struct sType* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_121, 0, sizeof(struct sType*));
memset(&result_122, 0, sizeof(struct sType*));
        if(_if_conditional171=self==((void*)0)||self->it==((void*)0),        _if_conditional171) {
            memset(&result_121,0,sizeof(struct sType*));
            __result125__ = __result_obj__ = result_121;
            return __result125__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result126__ = __result_obj__ = self->it->item;
            return __result126__;
        }
        memset(&result_122,0,sizeof(struct sType*));
        __result127__ = __result_obj__ = result_122;
        return __result127__;
}

int sTupleNode_sline(struct sTupleNode* self, struct sInfo* info){
void* __result_obj__;
int __result130__;
memset(&__result_obj__, 0, sizeof(void*));
    __result130__ = self->sline;
    return __result130__;
}

char* sTupleNode_sname(struct sTupleNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value245;
char* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
right_value245 = (void*)0;
    __result131__ = __result_obj__ = ((char*)(right_value245=__builtin_string(self->sname)));
    right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result131__;
}

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info){
void* __result_obj__;
struct list$1sNodeph* __dec_obj95;
struct list$1sNodeph* __dec_obj96;
void* right_value246;
char* __dec_obj97;
struct sMapNode* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
right_value246 = (void*)0;
    __dec_obj95=self->map_key_elements;
    self->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(map_key_elements);
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj96=self->map_elements;
    self->map_elements=(struct list$1sNodeph*)come_increment_ref_count(map_elements);
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    self->sline=info->sline;
    __dec_obj97=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value246=__builtin_string(info->sname))));
    __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result132__ = __result_obj__ = self;
    come_call_finalizer2(sMapNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,map_key_elements, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,map_elements, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result132__;
    come_call_finalizer2(sMapNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,map_key_elements, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,map_elements, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sMapNode_terminated(){
void* __result_obj__;
_Bool __result133__;
memset(&__result_obj__, 0, sizeof(void*));
    __result133__ = (_Bool)0;
    return __result133__;
}

char* sMapNode_kind(){
void* __result_obj__;
void* right_value247;
char* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
right_value247 = (void*)0;
    __result134__ = __result_obj__ = ((char*)(right_value247=__builtin_string("sMapNode")));
    right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result134__;
}

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info){
void* __result_obj__;
struct list$1sNodeph* map_key_elements_143;
struct list$1sNodeph* map_elements_144;
void* right_value248;
void* right_value249;
struct list$1CVALUEph* key_params_145;
void* right_value250;
void* right_value251;
struct list$1CVALUEph* element_params_146;
struct sType* map_key_type_147;
struct sType* map_element_type_148;
int i_149;
struct sNode* key_elements_153;
struct sNode* elements_154;
_Bool _if_conditional184;
_Bool __result137__;
void* right_value252;
struct CVALUE* come_value_155;
_Bool _if_conditional185;
void* right_value253;
_Bool _if_conditional186;
_Bool __result138__;
void* right_value254;
struct CVALUE* come_value2_156;
_Bool _if_conditional187;
void* right_value255;
void* right_value256;
struct sType* __dec_obj98;
void* right_value257;
struct sType* __dec_obj99;
static int map_value_num_157=0;
void* right_value258;
struct sType* key_type_values_158;
void* right_value259;
void* right_value260;
char* var_name_159;
void* right_value261;
struct sVar* var__160;
void* right_value262;
void* right_value263;
struct sType* element_type_values_161;
void* right_value264;
void* right_value265;
char* var_name2_162;
void* right_value266;
struct sVar* var2__163;
void* right_value267;
void* right_value268;
void* right_value269;
struct buffer* source_164;
int i_165;
struct CVALUE* key_param_166;
struct CVALUE* element_param_167;
_Bool _if_conditional188;
void* right_value270;
void* right_value271;
_Bool _if_conditional189;
void* right_value272;
void* right_value273;
void* right_value274;
void* right_value275;
void* right_value276;
struct sType* map_type_168;
void* right_value277;
void* right_value278;
void* right_value279;
struct sType* obj_type_169;
char* fun_name_170;
void* right_value280;
void* right_value281;
void* right_value282;
char* generics_fun_name_171;
struct sFun* fun_172;
_Bool _if_conditional190;
void* right_value283;
void* right_value284;
char* __dec_obj100;
_Bool _if_conditional191;
_Bool __result139__;
void* right_value285;
struct sType* result_type_173;
struct sType* type_174;
void* right_value286;
struct CVALUE* obj_value_175;
void* right_value287;
void* right_value288;
struct buffer* num_string_176;
void* right_value289;
struct sType* type2_177;
void* right_value290;
char* type_name_178;
void* right_value291;
void* right_value292;
char* __dec_obj101;
void* right_value293;
struct sType* type3_179;
void* right_value294;
struct sType* __dec_obj102;
void* right_value295;
char* __dec_obj103;
void* right_value296;
void* right_value297;
struct list$1CVALUEph* come_params_180;
_Bool _if_conditional192;
void* right_value298;
struct CVALUE* come_value2_181;
void* right_value299;
char* __dec_obj104;
struct sType* __dec_obj105;
void* right_value300;
struct CVALUE* come_value3_182;
void* right_value301;
char* __dec_obj106;
struct sType* __dec_obj107;
void* right_value302;
struct CVALUE* come_value4_183;
void* right_value303;
char* __dec_obj108;
struct sType* __dec_obj109;
void* right_value304;
void* right_value305;
struct buffer* buf_184;
int j_185;
struct list$1CVALUEph* o2_saved_186;
struct CVALUE* it_187;
_Bool _if_conditional193;
void* right_value306;
struct CVALUE* come_value5_188;
void* right_value307;
char* __dec_obj110;
_Bool _if_conditional194;
void* right_value308;
void* right_value309;
char* __dec_obj111;
void* right_value310;
struct sType* __dec_obj112;
void* right_value311;
_Bool __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&map_key_elements_143, 0, sizeof(struct list$1sNodeph*));
memset(&map_elements_144, 0, sizeof(struct list$1sNodeph*));
right_value248 = (void*)0;
right_value249 = (void*)0;
memset(&key_params_145, 0, sizeof(struct list$1CVALUEph*));
right_value250 = (void*)0;
right_value251 = (void*)0;
memset(&element_params_146, 0, sizeof(struct list$1CVALUEph*));
memset(&map_key_type_147, 0, sizeof(struct sType*));
memset(&map_element_type_148, 0, sizeof(struct sType*));
memset(&i_149, 0, sizeof(int));
memset(&key_elements_153, 0, sizeof(struct sNode*));
memset(&elements_154, 0, sizeof(struct sNode*));
right_value252 = (void*)0;
memset(&come_value_155, 0, sizeof(struct CVALUE*));
right_value253 = (void*)0;
right_value254 = (void*)0;
memset(&come_value2_156, 0, sizeof(struct CVALUE*));
right_value255 = (void*)0;
right_value256 = (void*)0;
right_value257 = (void*)0;
right_value258 = (void*)0;
memset(&key_type_values_158, 0, sizeof(struct sType*));
right_value259 = (void*)0;
right_value260 = (void*)0;
memset(&var_name_159, 0, sizeof(char*));
right_value261 = (void*)0;
memset(&var__160, 0, sizeof(struct sVar*));
right_value262 = (void*)0;
right_value263 = (void*)0;
memset(&element_type_values_161, 0, sizeof(struct sType*));
right_value264 = (void*)0;
right_value265 = (void*)0;
memset(&var_name2_162, 0, sizeof(char*));
right_value266 = (void*)0;
memset(&var2__163, 0, sizeof(struct sVar*));
right_value267 = (void*)0;
right_value268 = (void*)0;
right_value269 = (void*)0;
memset(&source_164, 0, sizeof(struct buffer*));
memset(&i_165, 0, sizeof(int));
memset(&key_param_166, 0, sizeof(struct CVALUE*));
memset(&element_param_167, 0, sizeof(struct CVALUE*));
right_value270 = (void*)0;
right_value271 = (void*)0;
right_value272 = (void*)0;
right_value273 = (void*)0;
right_value274 = (void*)0;
right_value275 = (void*)0;
right_value276 = (void*)0;
memset(&map_type_168, 0, sizeof(struct sType*));
right_value277 = (void*)0;
right_value278 = (void*)0;
right_value279 = (void*)0;
memset(&obj_type_169, 0, sizeof(struct sType*));
memset(&fun_name_170, 0, sizeof(char*));
right_value280 = (void*)0;
right_value281 = (void*)0;
right_value282 = (void*)0;
memset(&generics_fun_name_171, 0, sizeof(char*));
memset(&fun_172, 0, sizeof(struct sFun*));
right_value283 = (void*)0;
right_value284 = (void*)0;
right_value285 = (void*)0;
memset(&result_type_173, 0, sizeof(struct sType*));
memset(&type_174, 0, sizeof(struct sType*));
right_value286 = (void*)0;
memset(&obj_value_175, 0, sizeof(struct CVALUE*));
right_value287 = (void*)0;
right_value288 = (void*)0;
memset(&num_string_176, 0, sizeof(struct buffer*));
right_value289 = (void*)0;
memset(&type2_177, 0, sizeof(struct sType*));
right_value290 = (void*)0;
memset(&type_name_178, 0, sizeof(char*));
right_value291 = (void*)0;
right_value292 = (void*)0;
right_value293 = (void*)0;
memset(&type3_179, 0, sizeof(struct sType*));
right_value294 = (void*)0;
right_value295 = (void*)0;
right_value296 = (void*)0;
right_value297 = (void*)0;
memset(&come_params_180, 0, sizeof(struct list$1CVALUEph*));
right_value298 = (void*)0;
memset(&come_value2_181, 0, sizeof(struct CVALUE*));
right_value299 = (void*)0;
right_value300 = (void*)0;
memset(&come_value3_182, 0, sizeof(struct CVALUE*));
right_value301 = (void*)0;
right_value302 = (void*)0;
memset(&come_value4_183, 0, sizeof(struct CVALUE*));
right_value303 = (void*)0;
right_value304 = (void*)0;
right_value305 = (void*)0;
memset(&buf_184, 0, sizeof(struct buffer*));
memset(&j_185, 0, sizeof(int));
memset(&o2_saved_186, 0, sizeof(struct list$1CVALUEph*));
memset(&it_187, 0, sizeof(struct CVALUE*));
right_value306 = (void*)0;
memset(&come_value5_188, 0, sizeof(struct CVALUE*));
right_value307 = (void*)0;
right_value308 = (void*)0;
right_value309 = (void*)0;
right_value310 = (void*)0;
right_value311 = (void*)0;
    map_key_elements_143=self->map_key_elements;
    map_elements_144=self->map_elements;
    key_params_145=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value249=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value248=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 792, "list$1CVALUEph"))))))));
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    element_params_146=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value251=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value250=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 793, "list$1CVALUEph"))))))));
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    map_key_type_147=((void*)0);
    map_element_type_148=((void*)0);
    for(    i_149=0;    i_149<list$1sNodeph_length(map_key_elements_143);    i_149++    ){
        key_elements_153=list$1sNodephp_operator_load_element(map_key_elements_143,i_149);
        elements_154=list$1sNodephp_operator_load_element(map_elements_144,i_149);
        if(_if_conditional184=!node_compile(key_elements_153,info),        _if_conditional184) {
            __result137__ = (_Bool)0;
            come_call_finalizer2(list$1CVALUEphp_finalize,key_params_145, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,element_params_146, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,map_key_type_147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,map_element_type_148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result137__;
        }
        come_value_155=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value252=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        if(map_key_type_147) {
            check_assign_type(((char*)(right_value253=xsprintf("invalid map key type"))),map_key_type_147,come_value_155->type,come_value_155,(_Bool)0,(_Bool)1,info);
            right_value253 = come_decrement_ref_count2(right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        list$1CVALUEph_push_back(key_params_145,(struct CVALUE*)come_increment_ref_count(come_value_155));
        if(_if_conditional186=!node_compile(elements_154,info),        _if_conditional186) {
            __result138__ = (_Bool)0;
            come_call_finalizer2(CVALUE_finalize,come_value_155, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,key_params_145, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,element_params_146, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,map_key_type_147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,map_element_type_148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result138__;
        }
        come_value2_156=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value254=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        if(map_element_type_148) {
            check_assign_type(((char*)(right_value255=xsprintf("invalid map element type"))),map_element_type_148,come_value2_156->type,come_value2_156,(_Bool)0,(_Bool)1,info);
            right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        list$1CVALUEph_push_back(element_params_146,(struct CVALUE*)come_increment_ref_count(come_value2_156));
        __dec_obj98=map_key_type_147;
        map_key_type_147=(struct sType*)come_increment_ref_count(((struct sType*)(right_value256=sType_clone(come_value_155->type))));
        come_call_finalizer2(sType_finalize,__dec_obj98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj99=map_element_type_148;
        map_element_type_148=(struct sType*)come_increment_ref_count(((struct sType*)(right_value257=sType_clone(come_value2_156->type))));
        come_call_finalizer2(sType_finalize,__dec_obj99, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(CVALUE_finalize,come_value_155, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,come_value2_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    key_type_values_158=(struct sType*)come_increment_ref_count(((struct sType*)(right_value258=sType_clone(map_key_type_147))));
    come_call_finalizer2(sType_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    list$1sNodeph_push_back(key_type_values_158->mArrayNum,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value259=create_int_node(list$1CVALUEph_length(key_params_145),info)))));
    if(right_value259) { right_value259 = come_decrement_ref_count2(right_value259, ((struct sNode*)right_value259)->finalize, ((struct sNode*)right_value259)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    key_type_values_158->mHeap=(_Bool)0;
    var_name_159=(char*)come_increment_ref_count(((char*)(right_value260=xsprintf("__map_keys%d__",++map_value_num_157))));
    right_value260 = come_decrement_ref_count2(right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_variable_to_table(var_name_159,(struct sType*)come_increment_ref_count(((struct sType*)(right_value261=sType_clone(key_type_values_158)))),info);
    come_call_finalizer2(sType_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    var__160=get_variable_from_table(info->lv_table,var_name_159);
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value262=make_define_var(key_type_values_158,var__160->mCValueName,(_Bool)0,info))));
    right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    element_type_values_161=(struct sType*)come_increment_ref_count(((struct sType*)(right_value263=sType_clone(map_element_type_148))));
    come_call_finalizer2(sType_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    list$1sNodeph_push_back(element_type_values_161->mArrayNum,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value264=create_int_node(list$1CVALUEph_length(element_params_146),info)))));
    if(right_value264) { right_value264 = come_decrement_ref_count2(right_value264, ((struct sNode*)right_value264)->finalize, ((struct sNode*)right_value264)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    element_type_values_161->mHeap=(_Bool)0;
    var_name2_162=(char*)come_increment_ref_count(((char*)(right_value265=xsprintf("__map_element%d__",map_value_num_157))));
    right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_variable_to_table(var_name2_162,(struct sType*)come_increment_ref_count(((struct sType*)(right_value266=sType_clone(element_type_values_161)))),info);
    come_call_finalizer2(sType_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    var2__163=get_variable_from_table(info->lv_table,var_name2_162);
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value267=make_define_var(element_type_values_161,var2__163->mCValueName,(_Bool)0,info))));
    right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    source_164=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value269=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value268=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 857, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append_str(source_164,"{");
    for(    i_165=0;    i_165<list$1CVALUEph_length(key_params_145);    i_165++    ){
        key_param_166=list$1CVALUEphp_operator_load_element(key_params_145,i_165);
        element_param_167=list$1CVALUEphp_operator_load_element(element_params_146,i_165);
        if(map_key_type_147->mHeap) {
            buffer_append_str(source_164,((char*)(right_value270=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",var__160->mCValueName,i_165,key_param_166->c_value))));
            right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            buffer_append_str(source_164,((char*)(right_value271=xsprintf("%s[%d]=%s;\n",var__160->mCValueName,i_165,key_param_166->c_value))));
            right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(map_element_type_148->mHeap) {
            buffer_append_str(source_164,((char*)(right_value272=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",var2__163->mCValueName,i_165,element_param_167->c_value))));
            right_value272 = come_decrement_ref_count2(right_value272, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            buffer_append_str(source_164,((char*)(right_value273=xsprintf("%s[%d]=%s;\n",var2__163->mCValueName,i_165,element_param_167->c_value))));
            right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    buffer_append_str(source_164,"}");
    add_come_code(info,"%s",((char*)(right_value274=buffer_to_string(source_164))));
    right_value274 = come_decrement_ref_count2(right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    map_type_168=(struct sType*)come_increment_ref_count(((struct sType*)(right_value276=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value275=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 884, "sType")))),"map",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    list$1sTypeph_push_back(map_type_168->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value277=sType_clone(map_key_type_147)))));
    come_call_finalizer2(sType_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    list$1sTypeph_push_back(map_type_168->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value278=sType_clone(map_element_type_148)))));
    come_call_finalizer2(sType_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    obj_type_169=(struct sType*)come_increment_ref_count(((struct sType*)(right_value279=sType_clone(map_type_168))));
    come_call_finalizer2(sType_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    fun_name_170="initialize_with_values";
    generics_fun_name_171=(char*)come_increment_ref_count(((char*)(right_value282=string_to_string(((char*)(right_value281=make_generics_function(obj_type_169,(char*)come_increment_ref_count(((char*)(right_value280=__builtin_string(fun_name_170)))),info,(_Bool)1)))))));
    right_value280 = come_decrement_ref_count2(right_value280, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value281 = come_decrement_ref_count2(right_value281, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value282 = come_decrement_ref_count2(right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    fun_172=map$2charphsFunph_at(info->funcs,generics_fun_name_171,((void*)0));
    if(_if_conditional190=fun_172==((void*)0),    _if_conditional190) {
        __dec_obj100=generics_fun_name_171;
        generics_fun_name_171=(char*)come_increment_ref_count(((char*)(right_value284=create_method_name(obj_type_169,(_Bool)0,((char*)(right_value283=__builtin_string(fun_name_170))),info,(_Bool)1))));
        __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value283 = come_decrement_ref_count2(right_value283, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_172=map$2charphsFunph_at(info->funcs,generics_fun_name_171,((void*)0));
        if(_if_conditional191=fun_172==((void*)0),        _if_conditional191) {
            err_msg(info,"function not found(%s) at method(%s)(3)\n",generics_fun_name_171,info->come_fun->mName);
            __result139__ = (_Bool)1;
            come_call_finalizer2(list$1CVALUEphp_finalize,key_params_145, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,element_params_146, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,map_key_type_147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,map_element_type_148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,key_type_values_158, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            var_name_159 = come_decrement_ref_count2(var_name_159, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,element_type_values_161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            var_name2_162 = come_decrement_ref_count2(var_name2_162, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,source_164, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,map_type_168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,obj_type_169, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            generics_fun_name_171 = come_decrement_ref_count2(generics_fun_name_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result139__;
        }
    }
    result_type_173=(struct sType*)come_increment_ref_count(((struct sType*)(right_value285=sType_clone(fun_172->mResultType))));
    come_call_finalizer2(sType_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_type_173->mStatic=(_Bool)0;
    type_174=map_type_168;
    obj_value_175=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value286=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 911, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    num_string_176=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value288=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value287=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 913, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append_str(num_string_176,"1");
    type2_177=(struct sType*)come_increment_ref_count(((struct sType*)(right_value289=solve_generics(type_174,type_174,info))));
    come_call_finalizer2(sType_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type_name_178=(char*)come_increment_ref_count(((char*)(right_value290=make_type_name_string(type2_177,(_Bool)0,(_Bool)1,(_Bool)0,info))));
    right_value290 = come_decrement_ref_count2(right_value290, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj101=obj_value_175->c_value;
    obj_value_175->c_value=(char*)come_increment_ref_count(((char*)(right_value292=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_178,type_name_178,((char*)(right_value291=buffer_to_string(num_string_176))),info->sname,info->sline,type_name_178))));
    __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value291 = come_decrement_ref_count2(right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value292 = come_decrement_ref_count2(right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type3_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value293=sType_clone(type2_177))));
    come_call_finalizer2(sType_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type3_179->mPointerNum++;
    type3_179->mHeap=(_Bool)1;
    type2_177->mHeap=(_Bool)1;
    __dec_obj102=obj_value_175->type;
    obj_value_175->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value294=sType_clone(type2_177))));
    come_call_finalizer2(sType_finalize,__dec_obj102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj103=obj_value_175->c_value;
    obj_value_175->c_value=(char*)come_increment_ref_count(((char*)(right_value295=append_object_to_right_values(obj_value_175->c_value,(struct sType*)come_increment_ref_count(type3_179),info))));
    __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value295 = come_decrement_ref_count2(right_value295, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    obj_value_175->type->mPointerNum++;
    obj_value_175->var=((void*)0);
    come_params_180=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value297=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value296=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 932, "list$1CVALUEph"))))))));
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional192=list$1sTypephp_operator_load_element(fun_172->mParamTypes,0)->mHeap&&obj_value_175->type->mHeap,    _if_conditional192) {
        std_move(list$1sTypephp_operator_load_element(fun_172->mParamTypes,0),obj_value_175->type,obj_value_175,info);
    }
    list$1CVALUEph_push_back(come_params_180,(struct CVALUE*)come_increment_ref_count(obj_value_175));
    come_value2_181=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value298=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 939, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj104=come_value2_181->c_value;
    come_value2_181->c_value=(char*)come_increment_ref_count(((char*)(right_value299=xsprintf("%d",list$1CVALUEph_length(key_params_145)))));
    __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value299 = come_decrement_ref_count2(right_value299, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj105=come_value2_181->type;
    come_value2_181->type=((void*)0);
    come_call_finalizer2(sType_finalize,__dec_obj105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_value2_181->var=((void*)0);
    list$1CVALUEph_push_back(come_params_180,(struct CVALUE*)come_increment_ref_count(come_value2_181));
    come_value3_182=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value300=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 947, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj106=come_value3_182->c_value;
    come_value3_182->c_value=(char*)come_increment_ref_count(((char*)(right_value301=xsprintf("%s",var__160->mCValueName))));
    __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value301 = come_decrement_ref_count2(right_value301, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj107=come_value3_182->type;
    come_value3_182->type=((void*)0);
    come_call_finalizer2(sType_finalize,__dec_obj107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_value3_182->var=((void*)0);
    list$1CVALUEph_push_back(come_params_180,(struct CVALUE*)come_increment_ref_count(come_value3_182));
    come_value4_183=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value302=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 955, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj108=come_value4_183->c_value;
    come_value4_183->c_value=(char*)come_increment_ref_count(((char*)(right_value303=xsprintf("%s",var2__163->mCValueName))));
    __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value303 = come_decrement_ref_count2(right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj109=come_value4_183->type;
    come_value4_183->type=((void*)0);
    come_call_finalizer2(sType_finalize,__dec_obj109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_value4_183->var=((void*)0);
    list$1CVALUEph_push_back(come_params_180,(struct CVALUE*)come_increment_ref_count(come_value4_183));
    buf_184=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value305=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value304=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 963, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append_str(buf_184,generics_fun_name_171);
    buffer_append_str(buf_184,"(");
    j_185=0;
    for(    o2_saved_186=(struct list$1CVALUEph*)come_increment_ref_count((come_params_180)),it_187=list$1CVALUEph_begin((o2_saved_186));    !list$1CVALUEph_end((o2_saved_186));    it_187=list$1CVALUEph_next((o2_saved_186))    ){
        buffer_append_str(buf_184,it_187->c_value);
        if(_if_conditional193=j_185!=list$1CVALUEph_length(come_params_180)-1,        _if_conditional193) {
            buffer_append_str(buf_184,",");
        }
        j_185++;
    }
    come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_186, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_184,")");
    come_value5_188=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value306=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 980, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj110=come_value5_188->c_value;
    come_value5_188->c_value=(char*)come_increment_ref_count(((char*)(right_value307=buffer_to_string(buf_184))));
    __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value307 = come_decrement_ref_count2(right_value307, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(result_type_173->mHeap) {
        __dec_obj111=come_value5_188->c_value;
        come_value5_188->c_value=(char*)come_increment_ref_count(((char*)(right_value309=append_object_to_right_values(((char*)(right_value308=buffer_to_string(buf_184))),(struct sType*)come_increment_ref_count(result_type_173),info))));
        __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value308 = come_decrement_ref_count2(right_value308, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value309 = come_decrement_ref_count2(right_value309, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __dec_obj112=come_value5_188->type;
    come_value5_188->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value310=sType_clone(result_type_173))));
    come_call_finalizer2(sType_finalize,__dec_obj112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value5_188->type->mStatic=(_Bool)0;
    come_value5_188->var=((void*)0);
    add_come_last_code(info,"%s;\n",((char*)(right_value311=buffer_to_string(buf_184))));
    right_value311 = come_decrement_ref_count2(right_value311, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value5_188));
    __result140__ = (_Bool)1;
    come_call_finalizer2(list$1CVALUEphp_finalize,key_params_145, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,element_params_146, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,map_key_type_147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,map_element_type_148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,key_type_values_158, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_159 = come_decrement_ref_count2(var_name_159, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,element_type_values_161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name2_162 = come_decrement_ref_count2(var_name2_162, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,source_164, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,map_type_168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,obj_type_169, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    generics_fun_name_171 = come_decrement_ref_count2(generics_fun_name_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_173, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,obj_value_175, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,num_string_176, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_178 = come_decrement_ref_count2(type_name_178, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type3_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,come_params_180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_181, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value3_182, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value4_183, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_184, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value5_188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result140__;
    come_call_finalizer2(list$1CVALUEphp_finalize,key_params_145, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,element_params_146, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,map_key_type_147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,map_element_type_148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,key_type_values_158, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_159 = come_decrement_ref_count2(var_name_159, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,element_type_values_161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name2_162 = come_decrement_ref_count2(var_name2_162, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,source_164, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,map_type_168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,obj_type_169, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    generics_fun_name_171 = come_decrement_ref_count2(generics_fun_name_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_173, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,obj_value_175, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,num_string_176, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_178 = come_decrement_ref_count2(type_name_178, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type3_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,come_params_180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_181, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value3_182, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value4_183, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_184, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value5_188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__;
_Bool _if_conditional182;
struct list_item$1sNodeph* it_150;
int i_151;
_Bool _while_condtional12;
_Bool _if_conditional183;
struct sNode* __result135__;
struct sNode* default_value_152;
struct sNode* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_150, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_151, 0, sizeof(int));
memset(&default_value_152, 0, sizeof(struct sNode*));
            if(_if_conditional182=position<0,            _if_conditional182) {
                position+=self->len;
            }
            it_150=self->head;
            i_151=0;
            while(_while_condtional12=it_150!=((void*)0),            _while_condtional12) {
                if(_if_conditional183=position==i_151,                _if_conditional183) {
                    __result135__ = __result_obj__ = it_150->item;
                    return __result135__;
                }
                it_150=it_150->next;
                i_151++;
            }
            memset(&default_value_152,0,sizeof(struct sNode*));
            __result136__ = __result_obj__ = default_value_152;
            if(default_value_152) { default_value_152 = come_decrement_ref_count2(default_value_152, ((struct sNode*)default_value_152)->finalize, ((struct sNode*)default_value_152)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result136__;
            if(default_value_152) { default_value_152 = come_decrement_ref_count2(default_value_152, ((struct sNode*)default_value_152)->finalize, ((struct sNode*)default_value_152)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

int sMapNode_sline(struct sMapNode* self, struct sInfo* info){
void* __result_obj__;
int __result141__;
memset(&__result_obj__, 0, sizeof(void*));
    __result141__ = self->sline;
    return __result141__;
}

char* sMapNode_sname(struct sMapNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value312;
char* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
right_value312 = (void*)0;
    __result142__ = __result_obj__ = ((char*)(right_value312=__builtin_string(self->sname)));
    right_value312 = come_decrement_ref_count2(right_value312, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result142__;
}

struct sNode* expression_node_v98(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional195;
int sline_189;
void* right_value313;
void* right_value314;
struct list$1sNodeph* exps_190;
void* right_value315;
void* right_value316;
struct buffer* value_191;
char* head_of_last_line_192;
_Bool _while_condtional13;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
_Bool _if_conditional201;
int len_193;
_Bool _while_condtional14;
_Bool _if_conditional202;
_Bool _while_condtional15;
_Bool _if_conditional203;
void* right_value317;
struct sNode* exp_194;
_Bool _if_conditional204;
_Bool _if_conditional205;
int sline2_195;
_Bool _if_conditional206;
void* right_value318;
void* right_value319;
void* right_value320;
struct sNode* _inf_value1;
struct sSStringNode* _inf_obj_value1;
void* right_value325;
struct sNode* __result145__;
_Bool _if_conditional215;
int sline_197;
void* right_value326;
void* right_value327;
struct buffer* value_198;
_Bool _while_condtional16;
_Bool _if_conditional216;
char* p_199;
int sline_200;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
int sline2_201;
_Bool _if_conditional221;
void* right_value328;
void* right_value329;
void* right_value330;
struct sNode* _inf_value2;
struct sStrNode* _inf_obj_value2;
void* right_value334;
struct sNode* __result148__;
_Bool _if_conditional228;
int sline_203;
void* right_value335;
void* right_value336;
struct buffer* buf_204;
_Bool _while_condtional17;
_Bool _if_conditional229;
_Bool _if_conditional230;
_Bool _if_conditional231;
_Bool global_205;
_Bool ignore_case_206;
_Bool _while_condtional18;
_Bool _if_conditional232;
_Bool _if_conditional233;
void* right_value337;
void* right_value338;
void* right_value339;
struct sNode* _inf_value3;
struct sRegexNode* _inf_obj_value3;
void* right_value343;
struct sNode* __result151__;
_Bool _if_conditional242;
int c_208;
_Bool _if_conditional243;
_Bool _if_conditional244;
int n_209;
_Bool _while_condtional19;
_Bool _if_conditional245;
int n_210;
_Bool _while_condtional20;
_Bool _while_condtional21;
unsigned long long int n_213;
_Bool _if_conditional246;
void* right_value344;
void* right_value345;
struct sNode* _inf_value4;
struct sCharNode* _inf_obj_value4;
void* right_value348;
struct sNode* __result154__;
_Bool _if_conditional252;
unsigned int c_215;
_Bool _if_conditional253;
_Bool _if_conditional254;
int n_216;
_Bool _while_condtional22;
_Bool _if_conditional255;
int n_217;
_Bool _while_condtional23;
_Bool _while_condtional24;
unsigned long long int n_220;
unsigned char p2_221;
_Bool _if_conditional256;
int size_222;
_Bool _if_conditional257;
_Bool _if_conditional258;
_Bool _if_conditional259;
void* right_value349;
void* right_value350;
struct sNode* _inf_value5;
struct sWCharNode* _inf_obj_value5;
void* right_value353;
struct sNode* __result157__;
_Bool _if_conditional265;
int sline_225;
void* right_value354;
void* right_value355;
struct buffer* value_226;
_Bool _while_condtional25;
_Bool _if_conditional266;
char* p_227;
int sline_228;
_Bool _if_conditional267;
_Bool _if_conditional268;
_Bool _if_conditional269;
int len_229;
int n_230;
_Bool _while_condtional26;
_Bool _if_conditional270;
_Bool _while_condtional27;
unsigned long int lont_233;
int n_234;
_Bool _if_conditional271;
int sline2_235;
_Bool _if_conditional272;
int len_236;
void* right_value356;
unsigned int* wstr_237;
char* str_238;
_Bool _if_conditional273;
void* right_value357;
void* right_value358;
struct sNode* _inf_value6;
struct sWStringNode* _inf_obj_value6;
void* right_value362;
struct sNode* __result160__;
_Bool _if_conditional280;
int sline_240;
void* right_value363;
void* right_value364;
struct list$1sNodeph* exps_241;
void* right_value365;
void* right_value366;
struct buffer* value_242;
_Bool _while_condtional28;
_Bool _if_conditional281;
char* p_243;
int sline_244;
_Bool _if_conditional282;
_Bool _if_conditional283;
_Bool _if_conditional284;
void* right_value367;
struct sNode* exp_245;
char* p_246;
_Bool _while_condtional29;
_Bool _if_conditional285;
_Bool _if_conditional286;
int len_247;
_Bool _while_condtional30;
_Bool _if_conditional287;
_Bool _while_condtional31;
_Bool _if_conditional288;
void* right_value368;
struct sNode* exp_248;
_Bool _if_conditional289;
_Bool _if_conditional290;
int sline2_249;
_Bool _if_conditional291;
void* right_value369;
void* right_value370;
void* right_value371;
struct sNode* _inf_value7;
struct sSStringNode* _inf_obj_value7;
void* right_value376;
struct sNode* __result163__;
_Bool _if_conditional300;
char* p_251;
_Bool no_comma_252;
void* right_value377;
struct sNode* node_253;
char* p2_254;
void* right_value378;
void* right_value379;
struct buffer* first_element_source_255;
void* right_value380;
void* right_value381;
struct list$1sNodeph* list_elements_256;
void* right_value382;
void* right_value383;
struct list$1sNodeph* map_keys_257;
void* right_value384;
void* right_value385;
struct list$1sNodeph* map_elements_258;
_Bool _if_conditional301;
_Bool no_comma_259;
void* right_value386;
struct sNode* node2_260;
_Bool _if_conditional302;
void* right_value387;
void* right_value388;
struct sNode* _inf_value8;
struct sMapNode* _inf_obj_value8;
void* right_value393;
struct sNode* __result166__;
_Bool _while_condtional32;
_Bool no_comma_262;
void* right_value394;
struct sNode* node2_263;
void* right_value395;
struct sNode* node3_264;
_Bool _if_conditional311;
_Bool _if_conditional312;
_Bool _if_conditional313;
void* right_value396;
void* right_value397;
struct sNode* _inf_value9;
struct sMapNode* _inf_obj_value9;
void* right_value402;
struct sNode* __result169__;
_Bool _if_conditional322;
_Bool _if_conditional323;
_Bool _while_condtional33;
_Bool no_comma_266;
void* right_value403;
struct sNode* node2_267;
_Bool _if_conditional324;
_Bool _if_conditional325;
_Bool _if_conditional326;
_Bool _if_conditional327;
void* right_value404;
void* right_value405;
struct sNode* _inf_value10;
struct sListNode* _inf_obj_value10;
void* right_value409;
struct sNode* __result172__;
void* right_value410;
struct sNode* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&sline_189, 0, sizeof(int));
right_value313 = (void*)0;
right_value314 = (void*)0;
memset(&exps_190, 0, sizeof(struct list$1sNodeph*));
right_value315 = (void*)0;
right_value316 = (void*)0;
memset(&value_191, 0, sizeof(struct buffer*));
memset(&head_of_last_line_192, 0, sizeof(char*));
memset(&len_193, 0, sizeof(int));
right_value317 = (void*)0;
memset(&exp_194, 0, sizeof(struct sNode*));
memset(&sline2_195, 0, sizeof(int));
right_value318 = (void*)0;
right_value319 = (void*)0;
right_value320 = (void*)0;
right_value325 = (void*)0;
memset(&sline_197, 0, sizeof(int));
right_value326 = (void*)0;
right_value327 = (void*)0;
memset(&value_198, 0, sizeof(struct buffer*));
memset(&p_199, 0, sizeof(char*));
memset(&sline_200, 0, sizeof(int));
memset(&sline2_201, 0, sizeof(int));
right_value328 = (void*)0;
right_value329 = (void*)0;
right_value330 = (void*)0;
right_value334 = (void*)0;
memset(&sline_203, 0, sizeof(int));
right_value335 = (void*)0;
right_value336 = (void*)0;
memset(&buf_204, 0, sizeof(struct buffer*));
memset(&global_205, 0, sizeof(_Bool));
memset(&ignore_case_206, 0, sizeof(_Bool));
right_value337 = (void*)0;
right_value338 = (void*)0;
right_value339 = (void*)0;
right_value343 = (void*)0;
memset(&c_208, 0, sizeof(int));
memset(&n_209, 0, sizeof(int));
memset(&n_210, 0, sizeof(int));
memset(&n_213, 0, sizeof(unsigned long long int));
right_value344 = (void*)0;
right_value345 = (void*)0;
right_value348 = (void*)0;
memset(&c_215, 0, sizeof(unsigned int));
memset(&n_216, 0, sizeof(int));
memset(&n_217, 0, sizeof(int));
memset(&n_220, 0, sizeof(unsigned long long int));
memset(&p2_221, 0, sizeof(unsigned char));
memset(&size_222, 0, sizeof(int));
right_value349 = (void*)0;
right_value350 = (void*)0;
right_value353 = (void*)0;
memset(&sline_225, 0, sizeof(int));
right_value354 = (void*)0;
right_value355 = (void*)0;
memset(&value_226, 0, sizeof(struct buffer*));
memset(&p_227, 0, sizeof(char*));
memset(&sline_228, 0, sizeof(int));
memset(&len_229, 0, sizeof(int));
memset(&n_230, 0, sizeof(int));
memset(&lont_233, 0, sizeof(unsigned long int));
memset(&n_234, 0, sizeof(int));
memset(&sline2_235, 0, sizeof(int));
memset(&len_236, 0, sizeof(int));
right_value356 = (void*)0;
memset(&wstr_237, 0, sizeof(unsigned int*));
memset(&str_238, 0, sizeof(char*));
right_value357 = (void*)0;
right_value358 = (void*)0;
right_value362 = (void*)0;
memset(&sline_240, 0, sizeof(int));
right_value363 = (void*)0;
right_value364 = (void*)0;
memset(&exps_241, 0, sizeof(struct list$1sNodeph*));
right_value365 = (void*)0;
right_value366 = (void*)0;
memset(&value_242, 0, sizeof(struct buffer*));
memset(&p_243, 0, sizeof(char*));
memset(&sline_244, 0, sizeof(int));
right_value367 = (void*)0;
memset(&exp_245, 0, sizeof(struct sNode*));
memset(&p_246, 0, sizeof(char*));
memset(&len_247, 0, sizeof(int));
right_value368 = (void*)0;
memset(&exp_248, 0, sizeof(struct sNode*));
memset(&sline2_249, 0, sizeof(int));
right_value369 = (void*)0;
right_value370 = (void*)0;
right_value371 = (void*)0;
right_value376 = (void*)0;
memset(&p_251, 0, sizeof(char*));
memset(&no_comma_252, 0, sizeof(_Bool));
right_value377 = (void*)0;
memset(&node_253, 0, sizeof(struct sNode*));
memset(&p2_254, 0, sizeof(char*));
right_value378 = (void*)0;
right_value379 = (void*)0;
memset(&first_element_source_255, 0, sizeof(struct buffer*));
right_value380 = (void*)0;
right_value381 = (void*)0;
memset(&list_elements_256, 0, sizeof(struct list$1sNodeph*));
right_value382 = (void*)0;
right_value383 = (void*)0;
memset(&map_keys_257, 0, sizeof(struct list$1sNodeph*));
right_value384 = (void*)0;
right_value385 = (void*)0;
memset(&map_elements_258, 0, sizeof(struct list$1sNodeph*));
memset(&no_comma_259, 0, sizeof(_Bool));
right_value386 = (void*)0;
memset(&node2_260, 0, sizeof(struct sNode*));
right_value387 = (void*)0;
right_value388 = (void*)0;
right_value393 = (void*)0;
memset(&no_comma_262, 0, sizeof(_Bool));
right_value394 = (void*)0;
memset(&node2_263, 0, sizeof(struct sNode*));
right_value395 = (void*)0;
memset(&node3_264, 0, sizeof(struct sNode*));
right_value396 = (void*)0;
right_value397 = (void*)0;
right_value402 = (void*)0;
memset(&no_comma_266, 0, sizeof(_Bool));
right_value403 = (void*)0;
memset(&node2_267, 0, sizeof(struct sNode*));
right_value404 = (void*)0;
right_value405 = (void*)0;
right_value409 = (void*)0;
right_value410 = (void*)0;
    if(_if_conditional195=*info->p==34&&*(info->p+1)==34&&*(info->p+2)==34&&*(info->p+3)==10,    _if_conditional195) {
        info->p+=4;
        info->sline++;
        sline_189=info->sline;
        exps_190=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value314=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value313=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1018, "list$1sNodeph"))))))));
        come_call_finalizer2(list$1sNodephp_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sNodephp_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        value_191=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value316=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value315=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1019, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        head_of_last_line_192=((void*)0);
        while(_while_condtional13=1,        _while_condtional13) {
            if(_if_conditional196=*info->p==34&&*(info->p+1)==34&&*(info->p+2)==34,            _if_conditional196) {
                if(head_of_last_line_192) {
                    buffer_trim(value_191,info->p-head_of_last_line_192);
                }
                info->p+=3;
                skip_spaces_and_lf(info);
                break;
            }
            else {
                if(_if_conditional198=*info->p==37,                _if_conditional198) {
                    buffer_append_char(value_191,37);
                    buffer_append_char(value_191,37);
                    info->p++;
                }
                else {
                    if(_if_conditional199=*info->p==34,                    _if_conditional199) {
                        buffer_append_char(value_191,92);
                        buffer_append_char(value_191,34);
                        info->p++;
                    }
                    else {
                        if(_if_conditional200=*info->p==92,                        _if_conditional200) {
                            buffer_append_char(value_191,92);
                            info->p++;
                            if(_if_conditional201=xisdigit(*info->p),                            _if_conditional201) {
                                len_193=0;
                                while(_while_condtional14=xisdigit(*info->p)&&len_193<3,                                _while_condtional14) {
                                    buffer_append_char(value_191,*info->p);
                                    info->p++;
                                    len_193++;
                                }
                            }
                            else {
                                if(_if_conditional202=*info->p==120||*info->p==88,                                _if_conditional202) {
                                    buffer_append_char(value_191,*info->p);
                                    info->p++;
                                    while(_while_condtional15=*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70,                                    _while_condtional15) {
                                        buffer_append_char(value_191,*info->p);
                                        info->p++;
                                    }
                                }
                                else {
                                    if(_if_conditional203=*info->p==123,                                    _if_conditional203) {
                                        info->p++;
                                        exp_194=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value317=expression_v13(info))));
                                        if(right_value317) { right_value317 = come_decrement_ref_count2(right_value317, ((struct sNode*)right_value317)->finalize, ((struct sNode*)right_value317)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        list$1sNodeph_add(exps_190,(struct sNode*)come_increment_ref_count(exp_194));
                                        if(_if_conditional204=*info->p==125,                                        _if_conditional204) {
                                            info->p++;
                                        }
                                        buffer_append_str(value_191,"%s");
                                        if(exp_194) { exp_194 = come_decrement_ref_count2(exp_194, ((struct sNode*)exp_194)->finalize, ((struct sNode*)exp_194)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        switch (*info->p) {
                                            case 48:
                                            buffer_append_char(value_191,*info->p);
                                            info->p++;
                                            break;
                                            case 110:
                                            buffer_append_char(value_191,*info->p);
                                            info->p++;
                                            break;
                                            case 116:
                                            buffer_append_char(value_191,*info->p);
                                            info->p++;
                                            break;
                                            case 114:
                                            buffer_append_char(value_191,*info->p);
                                            info->p++;
                                            break;
                                            case 118:
                                            buffer_append_char(value_191,*info->p);
                                            info->p++;
                                            break;
                                            case 102:
                                            buffer_append_char(value_191,*info->p);
                                            info->p++;
                                            break;
                                            case 97:
                                            buffer_append_char(value_191,*info->p);
                                            info->p++;
                                            break;
                                            case 98:
                                            buffer_append_char(value_191,*info->p);
                                            info->p++;
                                            break;
                                            case 92:
                                            buffer_append_char(value_191,*info->p);
                                            info->p++;
                                            break;
                                            default:
                                            buffer_append_char(value_191,*info->p);
                                            info->p++;
                                            break;
                                        }
                                    }
                                }
                            }
                        }
                        else {
                            if(_if_conditional205=*info->p==0,                            _if_conditional205) {
                                sline2_195=info->sline;
                                info->sline=sline_189;
                                err_msg(info,"close \" to make embbeded string value");
                                exit(2);
                            }
                            else {
                                if(_if_conditional206=*info->p==10,                                _if_conditional206) {
                                    buffer_append_char(value_191,92);
                                    buffer_append_char(value_191,110);
                                    info->p++;
                                    info->sline++;
                                    head_of_last_line_192=info->p;
                                }
                                else {
                                    buffer_append_char(value_191,*info->p);
                                    info->p++;
                                }
                            }
                        }
                    }
                }
            }
        }
        skip_spaces_and_lf(info);
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1167, "struct sNode");
        _inf_obj_value1=come_increment_ref_count(((struct sSStringNode*)(right_value320=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(right_value318=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 1167, "sSStringNode")))),(char*)come_increment_ref_count(((char*)(right_value319=buffer_to_string(value_191)))),(struct list$1sNodeph*)come_increment_ref_count(exps_190),sline_189,info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sSStringNode_finalize;
        _inf_value1->clone=(void*)sSStringNode_clone;
        _inf_value1->compile=(void*)sSStringNode_compile;
        _inf_value1->sline=(void*)sSStringNode_sline;
        _inf_value1->sname=(void*)sSStringNode_sname;
        _inf_value1->terminated=(void*)sSStringNode_terminated;
        _inf_value1->kind=(void*)sSStringNode_kind;
        __result145__ = __result_obj__ = ((struct sNode*)(right_value325=_inf_value1));
        come_call_finalizer2(list$1sNodephp_finalize,exps_190, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,value_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sSStringNode_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value319 = come_decrement_ref_count2(right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sSStringNode_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value325) { right_value325 = come_decrement_ref_count2(right_value325, ((struct sNode*)right_value325)->finalize, ((struct sNode*)right_value325)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result145__;
        come_call_finalizer2(list$1sNodephp_finalize,exps_190, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,value_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional215=*info->p==34,        _if_conditional215) {
            info->p++;
            sline_197=info->sline;
            value_198=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value327=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value326=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1175, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            while(_while_condtional16=1,            _while_condtional16) {
                if(_if_conditional216=*info->p==34,                _if_conditional216) {
                    info->p++;
                    p_199=info->p;
                    sline_200=info->sline;
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    if(_if_conditional217=*info->p==34,                    _if_conditional217) {
                        info->p++;
                    }
                    else {
                        info->p=p_199;
                        info->sline=sline_200;
                        break;
                    }
                }
                else {
                    if(_if_conditional218=*info->p==92,                    _if_conditional218) {
                        buffer_append_char(value_198,92);
                        info->p++;
                        if(_if_conditional219=*info->p==34,                        _if_conditional219) {
                            buffer_append_char(value_198,34);
                            info->p++;
                        }
                        else {
                            buffer_append_char(value_198,*info->p);
                            info->p++;
                        }
                    }
                    else {
                        if(_if_conditional220=*info->p==0,                        _if_conditional220) {
                            sline2_201=info->sline;
                            info->sline=sline_197;
                            err_msg(info,"close \" to make c string value");
                            info->sline=sline2_201;
                            exit(2);
                        }
                        else {
                            if(_if_conditional221=*info->p==10,                            _if_conditional221) {
                                info->sline++;
                            }
                            buffer_append_char(value_198,*info->p);
                            info->p++;
                        }
                    }
                }
            }
            skip_spaces_and_lf(info);
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1227, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sStrNode*)(right_value330=sStrNode_initialize((struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(right_value328=(struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1227, "sStrNode")))),(char*)come_increment_ref_count(((char*)(right_value329=buffer_to_string(value_198)))),sline_197,info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sStrNode_finalize;
            _inf_value2->clone=(void*)sStrNode_clone;
            _inf_value2->compile=(void*)sStrNode_compile;
            _inf_value2->sline=(void*)sStrNode_sline;
            _inf_value2->sname=(void*)sStrNode_sname;
            _inf_value2->terminated=(void*)sStrNode_terminated;
            _inf_value2->kind=(void*)sStrNode_kind;
            __result148__ = __result_obj__ = ((struct sNode*)(right_value334=_inf_value2));
            come_call_finalizer2(buffer_finalize,value_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sStrNode_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            right_value329 = come_decrement_ref_count2(right_value329, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sStrNode_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value334) { right_value334 = come_decrement_ref_count2(right_value334, ((struct sNode*)right_value334)->finalize, ((struct sNode*)right_value334)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result148__;
            come_call_finalizer2(buffer_finalize,value_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional228=*info->p==47,            _if_conditional228) {
                info->p++;
                sline_203=info->sline;
                buf_204=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value336=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value335=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1234, "buffer"))))))));
                come_call_finalizer2(buffer_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(buffer_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                while(_while_condtional17=(_Bool)1,                _while_condtional17) {
                    if(_if_conditional229=*info->p==92&&*(info->p+1)==47,                    _if_conditional229) {
                        info->p++;
                        buffer_append_char(buf_204,*info->p);
                        info->p++;
                    }
                    else {
                        if(_if_conditional230=*info->p==47,                        _if_conditional230) {
                            info->p++;
                            break;
                        }
                        else {
                            if(_if_conditional231=*info->p==0,                            _if_conditional231) {
                                err_msg(info,"require closing / for regex");
                                exit(5);
                            }
                            else {
                                buffer_append_char(buf_204,*info->p);
                                info->p++;
                            }
                        }
                    }
                }
                global_205=(_Bool)0;
                ignore_case_206=(_Bool)0;
                while(_while_condtional18=*info->p==103||*info->p==105,                _while_condtional18) {
                    if(_if_conditional232=*info->p==103,                    _if_conditional232) {
                        info->p++;
                        global_205=(_Bool)1;
                    }
                    else {
                        if(_if_conditional233=*info->p==105,                        _if_conditional233) {
                            info->p++;
                            ignore_case_206=(_Bool)1;
                        }
                        else {
                            break;
                        }
                    }
                }
                skip_spaces_and_lf(info);
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1273, "struct sNode");
                _inf_obj_value3=come_increment_ref_count(((struct sRegexNode*)(right_value339=sRegexNode_initialize((struct sRegexNode*)come_increment_ref_count(((struct sRegexNode*)(right_value337=(struct sRegexNode*)come_calloc(1, sizeof(struct sRegexNode)*(1), "06str.c", 1273, "sRegexNode")))),(char*)come_increment_ref_count(((char*)(right_value338=buffer_to_string(buf_204)))),global_205,ignore_case_206,sline_203,info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sRegexNode_finalize;
                _inf_value3->clone=(void*)sRegexNode_clone;
                _inf_value3->compile=(void*)sRegexNode_compile;
                _inf_value3->sline=(void*)sRegexNode_sline;
                _inf_value3->sname=(void*)sRegexNode_sname;
                _inf_value3->terminated=(void*)sRegexNode_terminated;
                _inf_value3->kind=(void*)sRegexNode_kind;
                __result151__ = __result_obj__ = ((struct sNode*)(right_value343=_inf_value3));
                come_call_finalizer2(buffer_finalize,buf_204, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sRegexNode_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                right_value338 = come_decrement_ref_count2(right_value338, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sRegexNode_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value343) { right_value343 = come_decrement_ref_count2(right_value343, ((struct sNode*)right_value343)->finalize, ((struct sNode*)right_value343)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result151__;
                come_call_finalizer2(buffer_finalize,buf_204, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(_if_conditional242=*info->p==39,                _if_conditional242) {
                    info->p++;
                    if(_if_conditional243=*info->p==92,                    _if_conditional243) {
                        info->p++;
                        if(_if_conditional244=xisdigit(*info->p),                        _if_conditional244) {
                            n_209=0;
                            while(_while_condtional19=xisdigit(*info->p),                            _while_condtional19) {
                                n_209=n_209*8+*info->p-48;
                                info->p++;
                            }
                            c_208=n_209;
                        }
                        else {
                            switch (*info->p) {
                                case 110:
                                c_208=10;
                                info->p++;
                                break;
                                case 116:
                                c_208=9;
                                info->p++;
                                break;
                                case 114:
                                c_208=13;
                                info->p++;
                                break;
                                case 97:
                                c_208=7;
                                info->p++;
                                break;
                                case 102:
                                c_208=12;
                                info->p++;
                                break;
                                case 118:
                                c_208=11;
                                info->p++;
                                break;
                                case 98:
                                c_208=8;
                                info->p++;
                                break;
                                case 92:
                                c_208=92;
                                info->p++;
                                break;
                                case 48:
                                c_208=0;
                                info->p++;
                                if(_if_conditional245=xisdigit(*info->p),                                _if_conditional245) {
                                    n_210=0;
                                    while(_while_condtional20=xisdigit(*info->p),                                    _while_condtional20) {
                                        n_210=n_210*8+*info->p-48;
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                    }
                                    c_208=n_210;
                                }
                                break;
                                case 120:
                                case 88:
                                {
                                    info->p++;
                                    char buf_211[128];
                                    memset(&buf_211, 0, sizeof(char)                                    *(128)                                    );
                                    strncpy(buf_211,"0x",128);
                                    while(_while_condtional21=*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70,                                    _while_condtional21) {
                                        char buf2_212[2];
                                        memset(&buf2_212, 0, sizeof(char)                                        *(2)                                        );
                                        (come_range_check(&buf2_212[0],buf2_212,buf2_212+(2), "06str.c", 1358), buf2_212[0]=*info->p);
                                        (come_range_check(&buf2_212[1],buf2_212,buf2_212+(2), "06str.c", 1359), buf2_212[1]=0);
                                        info->p++;
                                        strncat(buf_211,buf2_212,128);
                                    }
                                    n_213=strtoll(buf_211,((void*)0),0);
                                    c_208=n_213;
                                }
                                break;
                                default:
                                c_208=*info->p;
                                info->p++;
                                break;
                            }
                        }
                    }
                    else {
                        c_208=*info->p;
                        info->p++;
                    }
                    if(_if_conditional246=*info->p!=39,                    _if_conditional246) {
                        err_msg(info,"close \' to make character value");
                    }
                    else {
                        info->p++;
                        skip_spaces_and_lf(info);
                        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1390, "struct sNode");
                        _inf_obj_value4=come_increment_ref_count(((struct sCharNode*)(right_value345=sCharNode_initialize((struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(right_value344=(struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "06str.c", 1390, "sCharNode")))),c_208,info))));
                        _inf_value4->_protocol_obj=_inf_obj_value4;
                        _inf_value4->finalize=(void*)sCharNode_finalize;
                        _inf_value4->clone=(void*)sCharNode_clone;
                        _inf_value4->compile=(void*)sCharNode_compile;
                        _inf_value4->sline=(void*)sCharNode_sline;
                        _inf_value4->sname=(void*)sCharNode_sname;
                        _inf_value4->terminated=(void*)sCharNode_terminated;
                        _inf_value4->kind=(void*)sCharNode_kind;
                        __result154__ = __result_obj__ = ((struct sNode*)(right_value348=_inf_value4));
                        come_call_finalizer2(sCharNode_finalize,right_value344, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sCharNode_finalize,right_value345, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value348) { right_value348 = come_decrement_ref_count2(right_value348, ((struct sNode*)right_value348)->finalize, ((struct sNode*)right_value348)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result154__;
                    }
                }
                else {
                    if(_if_conditional252=*info->p==76&&*(info->p+1)==39,                    _if_conditional252) {
                        info->p+=2;
                        if(_if_conditional253=*info->p==92,                        _if_conditional253) {
                            info->p++;
                            if(_if_conditional254=xisdigit(*info->p),                            _if_conditional254) {
                                n_216=0;
                                while(_while_condtional22=xisdigit(*info->p),                                _while_condtional22) {
                                    n_216=n_216*8+*info->p-48;
                                    info->p++;
                                }
                                c_215=n_216;
                            }
                            else {
                                switch (*info->p) {
                                    case 110:
                                    c_215=10;
                                    info->p++;
                                    break;
                                    case 116:
                                    c_215=9;
                                    info->p++;
                                    break;
                                    case 114:
                                    c_215=13;
                                    info->p++;
                                    break;
                                    case 97:
                                    c_215=7;
                                    info->p++;
                                    break;
                                    case 92:
                                    c_215=92;
                                    info->p++;
                                    break;
                                    case 48:
                                    c_215=0;
                                    info->p++;
                                    if(_if_conditional255=xisdigit(*info->p),                                    _if_conditional255) {
                                        n_217=0;
                                        while(_while_condtional23=xisdigit(*info->p),                                        _while_condtional23) {
                                            n_217=n_217*8+*info->p-48;
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                        }
                                        c_215=n_217;
                                    }
                                    break;
                                    case 120:
                                    case 88:
                                    {
                                        info->p++;
                                        char buf_218[128];
                                        memset(&buf_218, 0, sizeof(char)                                        *(128)                                        );
                                        strncpy(buf_218,"0x",128);
                                        while(_while_condtional24=*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70,                                        _while_condtional24) {
                                            char buf2_219[2];
                                            memset(&buf2_219, 0, sizeof(char)                                            *(2)                                            );
                                            (come_range_check(&buf2_219[0],buf2_219,buf2_219+(2), "06str.c", 1463), buf2_219[0]=*info->p);
                                            (come_range_check(&buf2_219[1],buf2_219,buf2_219+(2), "06str.c", 1464), buf2_219[1]=0);
                                            info->p++;
                                            strncat(buf_218,buf2_219,128);
                                        }
                                        n_220=strtoll(buf_218,((void*)0),0);
                                        c_215=n_220;
                                    }
                                    break;
                                    default:
                                    c_215=*info->p;
                                    info->p++;
                                    break;
                                }
                            }
                        }
                        else {
                            p2_221=*(unsigned char*)info->p;
                            if(_if_conditional256=p2_221>127,                            _if_conditional256) {
                                char str_223[4+1];
                                memset(&str_223, 0, sizeof(char)                                *(4+1)                                );
                                size_222=((p2_221&128)>>7)+((p2_221&64)>>6)+((p2_221&32)>>5)+((p2_221&16)>>4);
                                if(_if_conditional257=size_222>4,                                _if_conditional257) {
                                    err_msg(info,"invalid utf-8 character. MB_LEN_MAX");
                                    info->err_num++;
                                }
                                else {
                                    memcpy(str_223,info->p,size_222);
                                    (come_range_check(&str_223[size_222],str_223,str_223+(4+1), "06str.c", 1498), str_223[size_222]=0);
                                    if(_if_conditional258=mbtowc(&c_215,str_223,size_222)<0,                                    _if_conditional258) {
                                        perror("mbtowc");
                                        err_msg(info,"invalid utf-8 character. mbtowc");
                                        info->err_num++;
                                        c_215=0;
                                    }
                                    info->p+=size_222;
                                }
                            }
                            else {
                                c_215=*info->p;
                                info->p++;
                            }
                        }
                        if(_if_conditional259=*info->p!=39,                        _if_conditional259) {
                            err_msg(info,"close \' to make character value");
                            info->err_num++;
                        }
                        else {
                            info->p++;
                            skip_spaces_and_lf(info);
                            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1526, "struct sNode");
                            _inf_obj_value5=come_increment_ref_count(((struct sWCharNode*)(right_value350=sWCharNode_initialize((struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(right_value349=(struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "06str.c", 1526, "sWCharNode")))),c_215,info))));
                            _inf_value5->_protocol_obj=_inf_obj_value5;
                            _inf_value5->finalize=(void*)sWCharNode_finalize;
                            _inf_value5->clone=(void*)sWCharNode_clone;
                            _inf_value5->compile=(void*)sWCharNode_compile;
                            _inf_value5->sline=(void*)sWCharNode_sline;
                            _inf_value5->sname=(void*)sWCharNode_sname;
                            _inf_value5->terminated=(void*)sWCharNode_terminated;
                            _inf_value5->kind=(void*)sWCharNode_kind;
                            __result157__ = __result_obj__ = ((struct sNode*)(right_value353=_inf_value5));
                            come_call_finalizer2(sWCharNode_finalize,right_value349, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sWCharNode_finalize,right_value350, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value353) { right_value353 = come_decrement_ref_count2(right_value353, ((struct sNode*)right_value353)->finalize, ((struct sNode*)right_value353)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result157__;
                        }
                    }
                    else {
                        if(_if_conditional265=*info->p==76&&*(info->p+1)==34,                        _if_conditional265) {
                            info->p+=2;
                            sline_225=info->sline;
                            value_226=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value355=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value354=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1535, "buffer"))))))));
                            come_call_finalizer2(buffer_finalize,right_value354, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(buffer_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            while(_while_condtional25=1,                            _while_condtional25) {
                                if(_if_conditional266=*info->p==34,                                _if_conditional266) {
                                    info->p++;
                                    p_227=info->p;
                                    sline_228=info->sline;
                                    skip_spaces_and_lf(info);
                                    if(_if_conditional267=*info->p==34,                                    _if_conditional267) {
                                        info->p++;
                                    }
                                    else {
                                        info->p=p_227;
                                        info->sline=sline_228;
                                        break;
                                    }
                                }
                                else {
                                    if(_if_conditional268=*info->p==92,                                    _if_conditional268) {
                                        info->p++;
                                        if(_if_conditional269=xisdigit(*info->p),                                        _if_conditional269) {
                                            len_229=0;
                                            n_230=0;
                                            while(_while_condtional26=xisdigit(*info->p)&&len_229<3,                                            _while_condtional26) {
                                                n_230=n_230*8+*info->p-48;
                                                info->p++;
                                                len_229++;
                                            }
                                            buffer_append_char(value_226,n_230);
                                        }
                                        else {
                                            if(_if_conditional270=*info->p==120||*info->p==88,                                            _if_conditional270) {
                                                info->p++;
                                                char buf_231[128];
                                                memset(&buf_231, 0, sizeof(char)                                                *(128)                                                );
                                                strncpy(buf_231,"0x",128);
                                                while(_while_condtional27=*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70,                                                _while_condtional27) {
                                                    char buf2_232[2];
                                                    memset(&buf2_232, 0, sizeof(char)                                                    *(2)                                                    );
                                                    (come_range_check(&buf2_232[0],buf2_232,buf2_232+(2), "06str.c", 1576), buf2_232[0]=*info->p);
                                                    (come_range_check(&buf2_232[1],buf2_232,buf2_232+(2), "06str.c", 1577), buf2_232[1]=0);
                                                    info->p++;
                                                    strncat(buf_231,buf2_232,128);
                                                }
                                                n_234=strtoll(buf_231,((void*)0),0);
                                                buffer_append_char(value_226,(char)n_234);
                                            }
                                            else {
                                                switch (*info->p) {
                                                    case 48:
                                                    buffer_append_char(value_226,0);
                                                    info->p++;
                                                    break;
                                                    case 110:
                                                    buffer_append_char(value_226,10);
                                                    info->p++;
                                                    break;
                                                    case 116:
                                                    buffer_append_char(value_226,9);
                                                    info->p++;
                                                    break;
                                                    case 114:
                                                    buffer_append_char(value_226,13);
                                                    info->p++;
                                                    break;
                                                    case 118:
                                                    buffer_append_char(value_226,11);
                                                    info->p++;
                                                    break;
                                                    case 102:
                                                    buffer_append_char(value_226,12);
                                                    info->p++;
                                                    break;
                                                    case 97:
                                                    buffer_append_char(value_226,7);
                                                    info->p++;
                                                    break;
                                                    case 98:
                                                    buffer_append_char(value_226,8);
                                                    info->p++;
                                                    break;
                                                    case 92:
                                                    buffer_append_char(value_226,92);
                                                    info->p++;
                                                    break;
                                                    default:
                                                    buffer_append_char(value_226,*info->p);
                                                    info->p++;
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                    else {
                                        if(_if_conditional271=*info->p==0,                                        _if_conditional271) {
                                            sline2_235=info->sline;
                                            info->sline=sline_225;
                                            err_msg(info,"close \" to make c string value");
                                            exit(2);
                                        }
                                        else {
                                            if(_if_conditional272=*info->p==10,                                            _if_conditional272) {
                                                info->sline++;
                                            }
                                            buffer_append_char(value_226,*info->p);
                                            info->p++;
                                        }
                                    }
                                }
                            }
                            skip_spaces_and_lf(info);
                            len_236=value_226->len;
                            wstr_237=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value356=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_236+1)), "06str.c", 1658, "int"))));
                            right_value356 = come_decrement_ref_count2(right_value356, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            str_238=value_226->buf;
                            if(_if_conditional273=mbstowcs(wstr_237,str_238,len_236+1)<0,                            _if_conditional273) {
                                perror("mbstowcs");
                                exit(1);
                            }
                            wstr_237[len_236]=0;
                            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1669, "struct sNode");
                            _inf_obj_value6=come_increment_ref_count(((struct sWStringNode*)(right_value358=sWStringNode_initialize((struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(right_value357=(struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "06str.c", 1669, "sWStringNode")))),(unsigned int*)come_increment_ref_count(wstr_237),sline_225,info))));
                            _inf_value6->_protocol_obj=_inf_obj_value6;
                            _inf_value6->finalize=(void*)sWStringNode_finalize;
                            _inf_value6->clone=(void*)sWStringNode_clone;
                            _inf_value6->compile=(void*)sWStringNode_compile;
                            _inf_value6->sline=(void*)sWStringNode_sline;
                            _inf_value6->sname=(void*)sWStringNode_sname;
                            _inf_value6->terminated=(void*)sWStringNode_terminated;
                            _inf_value6->kind=(void*)sWStringNode_kind;
                            __result160__ = __result_obj__ = ((struct sNode*)(right_value362=_inf_value6));
                            come_call_finalizer2(buffer_finalize,value_226, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            wstr_237 = come_decrement_ref_count2(wstr_237, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sWStringNode_finalize,right_value357, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sWStringNode_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value362) { right_value362 = come_decrement_ref_count2(right_value362, ((struct sNode*)right_value362)->finalize, ((struct sNode*)right_value362)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result160__;
                            come_call_finalizer2(buffer_finalize,value_226, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            wstr_237 = come_decrement_ref_count2(wstr_237, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        else {
                            if(_if_conditional280=(*info->p==115||*info->p==83)&&*(info->p+1)==34,                            _if_conditional280) {
                                info->p+=2;
                                sline_240=info->sline;
                                exps_241=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value364=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value363=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1677, "list$1sNodeph"))))))));
                                come_call_finalizer2(list$1sNodephp_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(list$1sNodephp_finalize,right_value364, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                value_242=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value366=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value365=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1678, "buffer"))))))));
                                come_call_finalizer2(buffer_finalize,right_value365, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(buffer_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                while(_while_condtional28=1,                                _while_condtional28) {
                                    if(_if_conditional281=*info->p==34,                                    _if_conditional281) {
                                        info->p++;
                                        p_243=info->p;
                                        sline_244=info->sline;
                                        skip_spaces_and_lf(info);
                                        if(_if_conditional282=*info->p==34,                                        _if_conditional282) {
                                            info->p++;
                                        }
                                        else {
                                            info->p=p_243;
                                            info->sline=sline_244;
                                            break;
                                        }
                                    }
                                    else {
                                        if(_if_conditional283=*info->p==37,                                        _if_conditional283) {
                                            buffer_append_char(value_242,37);
                                            buffer_append_char(value_242,37);
                                            info->p++;
                                        }
                                        else {
                                            if(_if_conditional284=*info->p==36,                                            _if_conditional284) {
                                                info->p++;
                                                exp_245=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value367=expression_v13(info))));
                                                if(right_value367) { right_value367 = come_decrement_ref_count2(right_value367, ((struct sNode*)right_value367)->finalize, ((struct sNode*)right_value367)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                list$1sNodeph_add(exps_241,(struct sNode*)come_increment_ref_count(exp_245));
                                                buffer_append_str(value_242,"%s");
                                                p_246=info->p-1;
                                                while(_while_condtional29=*p_246==32||*p_246==9,                                                _while_condtional29) {
                                                    p_246--;
                                                }
                                                info->p=p_246+1;
                                                if(exp_245) { exp_245 = come_decrement_ref_count2(exp_245, ((struct sNode*)exp_245)->finalize, ((struct sNode*)exp_245)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            else {
                                                if(_if_conditional285=*info->p==92,                                                _if_conditional285) {
                                                    buffer_append_char(value_242,92);
                                                    info->p++;
                                                    if(_if_conditional286=xisdigit(*info->p),                                                    _if_conditional286) {
                                                        len_247=0;
                                                        while(_while_condtional30=xisdigit(*info->p)&&len_247<3,                                                        _while_condtional30) {
                                                            buffer_append_char(value_242,*info->p);
                                                            info->p++;
                                                            len_247++;
                                                        }
                                                    }
                                                    else {
                                                        if(_if_conditional287=*info->p==120||*info->p==88,                                                        _if_conditional287) {
                                                            buffer_append_char(value_242,*info->p);
                                                            info->p++;
                                                            while(_while_condtional31=*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70,                                                            _while_condtional31) {
                                                                buffer_append_char(value_242,*info->p);
                                                                info->p++;
                                                            }
                                                        }
                                                        else {
                                                            if(_if_conditional288=*info->p==123,                                                            _if_conditional288) {
                                                                info->p++;
                                                                exp_248=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value368=expression_v13(info))));
                                                                if(right_value368) { right_value368 = come_decrement_ref_count2(right_value368, ((struct sNode*)right_value368)->finalize, ((struct sNode*)right_value368)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                list$1sNodeph_add(exps_241,(struct sNode*)come_increment_ref_count(exp_248));
                                                                if(_if_conditional289=*info->p==125,                                                                _if_conditional289) {
                                                                    info->p++;
                                                                }
                                                                buffer_append_str(value_242,"%s");
                                                                if(exp_248) { exp_248 = come_decrement_ref_count2(exp_248, ((struct sNode*)exp_248)->finalize, ((struct sNode*)exp_248)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
                                                            else {
                                                                switch (*info->p) {
                                                                    case 48:
                                                                    buffer_append_char(value_242,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 110:
                                                                    buffer_append_char(value_242,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 116:
                                                                    buffer_append_char(value_242,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 114:
                                                                    buffer_append_char(value_242,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 118:
                                                                    buffer_append_char(value_242,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 102:
                                                                    buffer_append_char(value_242,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 97:
                                                                    buffer_append_char(value_242,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 98:
                                                                    buffer_append_char(value_242,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 92:
                                                                    buffer_append_char(value_242,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    default:
                                                                    buffer_append_char(value_242,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    if(_if_conditional290=*info->p==0,                                                    _if_conditional290) {
                                                        sline2_249=info->sline;
                                                        info->sline=sline_240;
                                                        err_msg(info,"close \" to make embbeded string value");
                                                        exit(2);
                                                    }
                                                    else {
                                                        if(_if_conditional291=*info->p==10,                                                        _if_conditional291) {
                                                            info->sline++;
                                                        }
                                                        buffer_append_char(value_242,*info->p);
                                                        info->p++;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                skip_spaces_and_lf(info);
                                _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1823, "struct sNode");
                                _inf_obj_value7=come_increment_ref_count(((struct sSStringNode*)(right_value371=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(right_value369=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 1823, "sSStringNode")))),(char*)come_increment_ref_count(((char*)(right_value370=buffer_to_string(value_242)))),(struct list$1sNodeph*)come_increment_ref_count(exps_241),sline_240,info))));
                                _inf_value7->_protocol_obj=_inf_obj_value7;
                                _inf_value7->finalize=(void*)sSStringNode_finalize;
                                _inf_value7->clone=(void*)sSStringNode_clone;
                                _inf_value7->compile=(void*)sSStringNode_compile;
                                _inf_value7->sline=(void*)sSStringNode_sline;
                                _inf_value7->sname=(void*)sSStringNode_sname;
                                _inf_value7->terminated=(void*)sSStringNode_terminated;
                                _inf_value7->kind=(void*)sSStringNode_kind;
                                __result163__ = __result_obj__ = ((struct sNode*)(right_value376=_inf_value7));
                                come_call_finalizer2(list$1sNodephp_finalize,exps_241, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(buffer_finalize,value_242, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sSStringNode_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                right_value370 = come_decrement_ref_count2(right_value370, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sSStringNode_finalize,right_value371, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(right_value376) { right_value376 = come_decrement_ref_count2(right_value376, ((struct sNode*)right_value376)->finalize, ((struct sNode*)right_value376)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result163__;
                                come_call_finalizer2(list$1sNodephp_finalize,exps_241, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(buffer_finalize,value_242, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            else {
                                if(_if_conditional300=*info->p==91,                                _if_conditional300) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                    p_251=info->p;
                                    no_comma_252=info->no_comma;
                                    info->no_comma=(_Bool)1;
                                    node_253=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value377=expression_v13(info))));
                                    if(right_value377) { right_value377 = come_decrement_ref_count2(right_value377, ((struct sNode*)right_value377)->finalize, ((struct sNode*)right_value377)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    info->no_comma=no_comma_252;
                                    p2_254=info->p;
                                    first_element_source_255=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value379=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value378=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1840, "buffer"))))))));
                                    come_call_finalizer2(buffer_finalize,right_value378, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(buffer_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    buffer_append(first_element_source_255,p_251,p2_254-p_251);
                                    buffer_append_char(first_element_source_255,0);
                                    list_elements_256=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value381=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value380=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1845, "list$1sNodeph"))))))));
                                    come_call_finalizer2(list$1sNodephp_finalize,right_value380, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(list$1sNodephp_finalize,right_value381, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    map_keys_257=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value383=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value382=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1847, "list$1sNodeph"))))))));
                                    come_call_finalizer2(list$1sNodephp_finalize,right_value382, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(list$1sNodephp_finalize,right_value383, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    map_elements_258=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value385=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value384=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1848, "list$1sNodeph"))))))));
                                    come_call_finalizer2(list$1sNodephp_finalize,right_value384, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(list$1sNodephp_finalize,right_value385, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional301=*info->p==58,                                    _if_conditional301) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                        list$1sNodeph_push_back(map_keys_257,(struct sNode*)come_increment_ref_count(node_253));
                                        no_comma_259=info->no_comma;
                                        info->no_comma=(_Bool)1;
                                        node2_260=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value386=expression_v13(info))));
                                        if(right_value386) { right_value386 = come_decrement_ref_count2(right_value386, ((struct sNode*)right_value386)->finalize, ((struct sNode*)right_value386)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        info->no_comma=no_comma_259;
                                        list$1sNodeph_push_back(map_elements_258,(struct sNode*)come_increment_ref_count(node2_260));
                                        if(_if_conditional302=*info->p==93,                                        _if_conditional302) {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1870, "struct sNode");
                                            _inf_obj_value8=come_increment_ref_count(((struct sMapNode*)(right_value388=sMapNode_initialize((struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value387=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 1870, "sMapNode")))),(struct list$1sNodeph*)come_increment_ref_count(map_keys_257),(struct list$1sNodeph*)come_increment_ref_count(map_elements_258),info))));
                                            _inf_value8->_protocol_obj=_inf_obj_value8;
                                            _inf_value8->finalize=(void*)sMapNode_finalize;
                                            _inf_value8->clone=(void*)sMapNode_clone;
                                            _inf_value8->compile=(void*)sMapNode_compile;
                                            _inf_value8->sline=(void*)sMapNode_sline;
                                            _inf_value8->sname=(void*)sMapNode_sname;
                                            _inf_value8->terminated=(void*)sMapNode_terminated;
                                            _inf_value8->kind=(void*)sMapNode_kind;
                                            __result166__ = __result_obj__ = ((struct sNode*)(right_value393=_inf_value8));
                                            if(node2_260) { node2_260 = come_decrement_ref_count2(node2_260, ((struct sNode*)node2_260)->finalize, ((struct sNode*)node2_260)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            if(node_253) { node_253 = come_decrement_ref_count2(node_253, ((struct sNode*)node_253)->finalize, ((struct sNode*)node_253)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            come_call_finalizer2(buffer_finalize,first_element_source_255, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(list$1sNodephp_finalize,list_elements_256, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(list$1sNodephp_finalize,map_keys_257, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(list$1sNodephp_finalize,map_elements_258, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(sMapNode_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer2(sMapNode_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            if(right_value393) { right_value393 = come_decrement_ref_count2(right_value393, ((struct sNode*)right_value393)->finalize, ((struct sNode*)right_value393)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            return __result166__;
                                        }
                                        else {
                                            expected_next_character(44,info);
                                            while(_while_condtional32=(_Bool)1,                                            _while_condtional32) {
                                                no_comma_262=info->no_comma;
                                                info->no_comma=(_Bool)1;
                                                node2_263=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value394=expression_v13(info))));
                                                if(right_value394) { right_value394 = come_decrement_ref_count2(right_value394, ((struct sNode*)right_value394)->finalize, ((struct sNode*)right_value394)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                info->no_comma=no_comma_262;
                                                list$1sNodeph_push_back(map_keys_257,(struct sNode*)come_increment_ref_count(node2_263));
                                                expected_next_character(58,info);
                                                no_comma_262=info->no_comma;
                                                info->no_comma=(_Bool)1;
                                                node3_264=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value395=expression_v13(info))));
                                                if(right_value395) { right_value395 = come_decrement_ref_count2(right_value395, ((struct sNode*)right_value395)->finalize, ((struct sNode*)right_value395)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                info->no_comma=no_comma_262;
                                                list$1sNodeph_push_back(map_elements_258,(struct sNode*)come_increment_ref_count(node3_264));
                                                if(_if_conditional311=*info->p==0,                                                _if_conditional311) {
                                                    err_msg(info,"invalid source end");
                                                    exit(2);
                                                }
                                                else {
                                                    if(_if_conditional312=*info->p==44,                                                    _if_conditional312) {
                                                        info->p++;
                                                        skip_spaces_and_lf(info);
                                                    }
                                                    else {
                                                        if(_if_conditional313=*info->p==93,                                                        _if_conditional313) {
                                                            info->p++;
                                                            skip_spaces_and_lf(info);
                                                            if(node2_263) { node2_263 = come_decrement_ref_count2(node2_263, ((struct sNode*)node2_263)->finalize, ((struct sNode*)node2_263)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            if(node3_264) { node3_264 = come_decrement_ref_count2(node3_264, ((struct sNode*)node3_264)->finalize, ((struct sNode*)node3_264)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            break;
                                                        }
                                                        else {
                                                            err_msg(info,"invalid character(%c)(3)",*info->p);
                                                            exit(2);
                                                        }
                                                    }
                                                }
                                                if(node2_263) { node2_263 = come_decrement_ref_count2(node2_263, ((struct sNode*)node2_263)->finalize, ((struct sNode*)node2_263)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                if(node3_264) { node3_264 = come_decrement_ref_count2(node3_264, ((struct sNode*)node3_264)->finalize, ((struct sNode*)node3_264)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1915, "struct sNode");
                                            _inf_obj_value9=come_increment_ref_count(((struct sMapNode*)(right_value397=sMapNode_initialize((struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value396=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 1915, "sMapNode")))),(struct list$1sNodeph*)come_increment_ref_count(map_keys_257),(struct list$1sNodeph*)come_increment_ref_count(map_elements_258),info))));
                                            _inf_value9->_protocol_obj=_inf_obj_value9;
                                            _inf_value9->finalize=(void*)sMapNode_finalize;
                                            _inf_value9->clone=(void*)sMapNode_clone;
                                            _inf_value9->compile=(void*)sMapNode_compile;
                                            _inf_value9->sline=(void*)sMapNode_sline;
                                            _inf_value9->sname=(void*)sMapNode_sname;
                                            _inf_value9->terminated=(void*)sMapNode_terminated;
                                            _inf_value9->kind=(void*)sMapNode_kind;
                                            __result169__ = __result_obj__ = ((struct sNode*)(right_value402=_inf_value9));
                                            if(node2_260) { node2_260 = come_decrement_ref_count2(node2_260, ((struct sNode*)node2_260)->finalize, ((struct sNode*)node2_260)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            if(node_253) { node_253 = come_decrement_ref_count2(node_253, ((struct sNode*)node_253)->finalize, ((struct sNode*)node_253)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            come_call_finalizer2(buffer_finalize,first_element_source_255, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(list$1sNodephp_finalize,list_elements_256, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(list$1sNodephp_finalize,map_keys_257, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(list$1sNodephp_finalize,map_elements_258, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(sMapNode_finalize,right_value396, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer2(sMapNode_finalize,right_value397, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            if(right_value402) { right_value402 = come_decrement_ref_count2(right_value402, ((struct sNode*)right_value402)->finalize, ((struct sNode*)right_value402)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            return __result169__;
                                        }
                                        if(node2_260) { node2_260 = come_decrement_ref_count2(node2_260, ((struct sNode*)node2_260)->finalize, ((struct sNode*)node2_260)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        if(_if_conditional322=*info->p==93,                                        _if_conditional322) {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                            list$1sNodeph_push_back(list_elements_256,(struct sNode*)come_increment_ref_count(node_253));
                                        }
                                        else {
                                            if(_if_conditional323=*info->p==44,                                            _if_conditional323) {
                                                info->p++;
                                                skip_spaces_and_lf(info);
                                                list$1sNodeph_push_back(list_elements_256,(struct sNode*)come_increment_ref_count(node_253));
                                                while(_while_condtional33=(_Bool)1,                                                _while_condtional33) {
                                                    no_comma_266=info->no_comma;
                                                    info->no_comma=(_Bool)1;
                                                    node2_267=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value403=expression_v13(info))));
                                                    if(right_value403) { right_value403 = come_decrement_ref_count2(right_value403, ((struct sNode*)right_value403)->finalize, ((struct sNode*)right_value403)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    info->no_comma=no_comma_266;
                                                    list$1sNodeph_push_back(list_elements_256,(struct sNode*)come_increment_ref_count(node2_267));
                                                    if(_if_conditional324=*info->p==0,                                                    _if_conditional324) {
                                                        err_msg(info,"invalid source end");
                                                        exit(2);
                                                    }
                                                    else {
                                                        if(_if_conditional325=*info->p==44,                                                        _if_conditional325) {
                                                            info->p++;
                                                            skip_spaces_and_lf(info);
                                                        }
                                                        else {
                                                            if(_if_conditional326=*info->p==93,                                                            _if_conditional326) {
                                                                info->p++;
                                                                skip_spaces_and_lf(info);
                                                                if(node2_267) { node2_267 = come_decrement_ref_count2(node2_267, ((struct sNode*)node2_267)->finalize, ((struct sNode*)node2_267)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                break;
                                                            }
                                                            else {
                                                                err_msg(info,"invalid character(%c)(4)",*info->p);
                                                                exit(2);
                                                            }
                                                        }
                                                    }
                                                    if(node2_267) { node2_267 = come_decrement_ref_count2(node2_267, ((struct sNode*)node2_267)->finalize, ((struct sNode*)node2_267)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                            }
                                            else {
                                                err_msg(info,"invalid character(%c)(5)",*info->p);
                                                exit(2);
                                            }
                                        }
                                    }
                                    if(_if_conditional327=list$1sNodeph_length(list_elements_256)>0,                                    _if_conditional327) {
                                        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1966, "struct sNode");
                                        _inf_obj_value10=come_increment_ref_count(((struct sListNode*)(right_value405=sListNode_initialize((struct sListNode*)come_increment_ref_count(((struct sListNode*)(right_value404=(struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "06str.c", 1966, "sListNode")))),(struct list$1sNodeph*)come_increment_ref_count(list_elements_256),info))));
                                        _inf_value10->_protocol_obj=_inf_obj_value10;
                                        _inf_value10->finalize=(void*)sListNode_finalize;
                                        _inf_value10->clone=(void*)sListNode_clone;
                                        _inf_value10->compile=(void*)sListNode_compile;
                                        _inf_value10->sline=(void*)sListNode_sline;
                                        _inf_value10->sname=(void*)sListNode_sname;
                                        _inf_value10->terminated=(void*)sListNode_terminated;
                                        _inf_value10->kind=(void*)sListNode_kind;
                                        __result172__ = __result_obj__ = ((struct sNode*)(right_value409=_inf_value10));
                                        if(node_253) { node_253 = come_decrement_ref_count2(node_253, ((struct sNode*)node_253)->finalize, ((struct sNode*)node_253)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer2(buffer_finalize,first_element_source_255, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(list$1sNodephp_finalize,list_elements_256, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(list$1sNodephp_finalize,map_keys_257, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(list$1sNodephp_finalize,map_elements_258, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(sListNode_finalize,right_value404, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(sListNode_finalize,right_value405, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(right_value409) { right_value409 = come_decrement_ref_count2(right_value409, ((struct sNode*)right_value409)->finalize, ((struct sNode*)right_value409)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result172__;
                                    }
                                    else {
                                    }
                                    if(node_253) { node_253 = come_decrement_ref_count2(node_253, ((struct sNode*)node_253)->finalize, ((struct sNode*)node_253)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer2(buffer_finalize,first_element_source_255, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(list$1sNodephp_finalize,list_elements_256, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(list$1sNodephp_finalize,map_keys_257, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(list$1sNodephp_finalize,map_elements_258, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                else {
                                    ((struct sNode*)(right_value410=expression_node_v1(info)));
                                    if(right_value410) { right_value410 = come_decrement_ref_count2(right_value410, ((struct sNode*)right_value410)->finalize, ((struct sNode*)right_value410)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    __result173__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result173__;
}

static void sStrNode_finalize(struct sStrNode* self){
void* __result_obj__;
_Bool _if_conditional222;
_Bool _if_conditional223;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional222=self!=((void*)0)&&self->value!=((void*)0),                _if_conditional222) {
                    self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional223=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional223) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sStrNode* sStrNode_clone(struct sStrNode* self){
void* __result_obj__;
_Bool _if_conditional224;
struct sStrNode* __result146__;
void* right_value331;
struct sStrNode* result_202;
_Bool _if_conditional225;
void* right_value332;
char* __dec_obj116;
_Bool _if_conditional226;
_Bool _if_conditional227;
void* right_value333;
char* __dec_obj117;
struct sStrNode* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
right_value331 = (void*)0;
memset(&result_202, 0, sizeof(struct sStrNode*));
right_value332 = (void*)0;
right_value333 = (void*)0;
                if(_if_conditional224=self==(void*)0,                _if_conditional224) {
                    __result146__ = __result_obj__ = (void*)0;
                    return __result146__;
                }
                result_202=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(right_value331=(struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "sStrNode_clone", 3, "sStrNode"))));
                come_call_finalizer2(sStrNode_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional225=self!=((void*)0)&&self->value!=((void*)0),                _if_conditional225) {
                    __dec_obj116=result_202->value;
                    result_202->value=(char*)come_increment_ref_count(((char*)(right_value332=string_clone(self->value))));
                    __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value332 = come_decrement_ref_count2(right_value332, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional226=self!=((void*)0),                _if_conditional226) {
                    result_202->sline=self->sline;
                }
                if(_if_conditional227=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional227) {
                    __dec_obj117=result_202->sname;
                    result_202->sname=(char*)come_increment_ref_count(((char*)(right_value333=string_clone(self->sname))));
                    __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value333 = come_decrement_ref_count2(right_value333, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result147__ = __result_obj__ = result_202;
                come_call_finalizer2(sStrNode_finalize,result_202, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result147__;
                come_call_finalizer2(sStrNode_finalize,result_202, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sRegexNode_finalize(struct sRegexNode* self){
void* __result_obj__;
_Bool _if_conditional234;
_Bool _if_conditional235;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional234=self!=((void*)0)&&self->str!=((void*)0),                    _if_conditional234) {
                        self->str = come_decrement_ref_count2(self->str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional235=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional235) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sRegexNode* sRegexNode_clone(struct sRegexNode* self){
void* __result_obj__;
_Bool _if_conditional236;
struct sRegexNode* __result149__;
void* right_value340;
struct sRegexNode* result_207;
_Bool _if_conditional237;
void* right_value341;
char* __dec_obj118;
_Bool _if_conditional238;
_Bool _if_conditional239;
_Bool _if_conditional240;
_Bool _if_conditional241;
void* right_value342;
char* __dec_obj119;
struct sRegexNode* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
right_value340 = (void*)0;
memset(&result_207, 0, sizeof(struct sRegexNode*));
right_value341 = (void*)0;
right_value342 = (void*)0;
                    if(_if_conditional236=self==(void*)0,                    _if_conditional236) {
                        __result149__ = __result_obj__ = (void*)0;
                        return __result149__;
                    }
                    result_207=(struct sRegexNode*)come_increment_ref_count(((struct sRegexNode*)(right_value340=(struct sRegexNode*)come_calloc(1, sizeof(struct sRegexNode)*(1), "sRegexNode_clone", 3, "sRegexNode"))));
                    come_call_finalizer2(sRegexNode_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional237=self!=((void*)0)&&self->str!=((void*)0),                    _if_conditional237) {
                        __dec_obj118=result_207->str;
                        result_207->str=(char*)come_increment_ref_count(((char*)(right_value341=string_clone(self->str))));
                        __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value341 = come_decrement_ref_count2(right_value341, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional238=self!=((void*)0),                    _if_conditional238) {
                        result_207->global=self->global;
                    }
                    if(_if_conditional239=self!=((void*)0),                    _if_conditional239) {
                        result_207->ignore_case=self->ignore_case;
                    }
                    if(_if_conditional240=self!=((void*)0),                    _if_conditional240) {
                        result_207->sline=self->sline;
                    }
                    if(_if_conditional241=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional241) {
                        __dec_obj119=result_207->sname;
                        result_207->sname=(char*)come_increment_ref_count(((char*)(right_value342=string_clone(self->sname))));
                        __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value342 = come_decrement_ref_count2(right_value342, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    __result150__ = __result_obj__ = result_207;
                    come_call_finalizer2(sRegexNode_finalize,result_207, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result150__;
                    come_call_finalizer2(sRegexNode_finalize,result_207, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sCharNode_finalize(struct sCharNode* self){
void* __result_obj__;
_Bool _if_conditional247;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional247=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional247) {
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sCharNode* sCharNode_clone(struct sCharNode* self){
void* __result_obj__;
_Bool _if_conditional248;
struct sCharNode* __result152__;
void* right_value346;
struct sCharNode* result_214;
_Bool _if_conditional249;
_Bool _if_conditional250;
_Bool _if_conditional251;
void* right_value347;
char* __dec_obj120;
struct sCharNode* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
right_value346 = (void*)0;
memset(&result_214, 0, sizeof(struct sCharNode*));
right_value347 = (void*)0;
                            if(_if_conditional248=self==(void*)0,                            _if_conditional248) {
                                __result152__ = __result_obj__ = (void*)0;
                                return __result152__;
                            }
                            result_214=(struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(right_value346=(struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "sCharNode_clone", 3, "sCharNode"))));
                            come_call_finalizer2(sCharNode_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional249=self!=((void*)0),                            _if_conditional249) {
                                result_214->value=self->value;
                            }
                            if(_if_conditional250=self!=((void*)0),                            _if_conditional250) {
                                result_214->sline=self->sline;
                            }
                            if(_if_conditional251=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional251) {
                                __dec_obj120=result_214->sname;
                                result_214->sname=(char*)come_increment_ref_count(((char*)(right_value347=string_clone(self->sname))));
                                __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value347 = come_decrement_ref_count2(right_value347, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            __result153__ = __result_obj__ = result_214;
                            come_call_finalizer2(sCharNode_finalize,result_214, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result153__;
                            come_call_finalizer2(sCharNode_finalize,result_214, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sWCharNode_finalize(struct sWCharNode* self){
void* __result_obj__;
_Bool _if_conditional260;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional260=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional260) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self){
void* __result_obj__;
_Bool _if_conditional261;
struct sWCharNode* __result155__;
void* right_value351;
struct sWCharNode* result_224;
_Bool _if_conditional262;
_Bool _if_conditional263;
_Bool _if_conditional264;
void* right_value352;
char* __dec_obj121;
struct sWCharNode* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
right_value351 = (void*)0;
memset(&result_224, 0, sizeof(struct sWCharNode*));
right_value352 = (void*)0;
                                if(_if_conditional261=self==(void*)0,                                _if_conditional261) {
                                    __result155__ = __result_obj__ = (void*)0;
                                    return __result155__;
                                }
                                result_224=(struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(right_value351=(struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "sWCharNode_clone", 3, "sWCharNode"))));
                                come_call_finalizer2(sWCharNode_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional262=self!=((void*)0),                                _if_conditional262) {
                                    result_224->value=self->value;
                                }
                                if(_if_conditional263=self!=((void*)0),                                _if_conditional263) {
                                    result_224->sline=self->sline;
                                }
                                if(_if_conditional264=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional264) {
                                    __dec_obj121=result_224->sname;
                                    result_224->sname=(char*)come_increment_ref_count(((char*)(right_value352=string_clone(self->sname))));
                                    __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value352 = come_decrement_ref_count2(right_value352, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                __result156__ = __result_obj__ = result_224;
                                come_call_finalizer2(sWCharNode_finalize,result_224, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result156__;
                                come_call_finalizer2(sWCharNode_finalize,result_224, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sWStringNode_finalize(struct sWStringNode* self){
void* __result_obj__;
_Bool _if_conditional274;
_Bool _if_conditional275;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional274=self!=((void*)0)&&self->value!=((void*)0),                                _if_conditional274) {
                                    self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional275=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional275) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self){
void* __result_obj__;
_Bool _if_conditional276;
struct sWStringNode* __result158__;
void* right_value359;
struct sWStringNode* result_239;
_Bool _if_conditional277;
void* right_value360;
unsigned int* __dec_obj122;
_Bool _if_conditional278;
_Bool _if_conditional279;
void* right_value361;
char* __dec_obj123;
struct sWStringNode* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
right_value359 = (void*)0;
memset(&result_239, 0, sizeof(struct sWStringNode*));
right_value360 = (void*)0;
right_value361 = (void*)0;
                                if(_if_conditional276=self==(void*)0,                                _if_conditional276) {
                                    __result158__ = __result_obj__ = (void*)0;
                                    return __result158__;
                                }
                                result_239=(struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(right_value359=(struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "sWStringNode_clone", 3, "sWStringNode"))));
                                come_call_finalizer2(sWStringNode_finalize,right_value359, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional277=self!=((void*)0)&&self->value!=((void*)0),                                _if_conditional277) {
                                    __dec_obj122=result_239->value;
                                    result_239->value=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value360=(unsigned int*)come_memdup(self->value, "sWStringNode_clone", 4, "unsigned int*"))));
                                    __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value360 = come_decrement_ref_count2(right_value360, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional278=self!=((void*)0),                                _if_conditional278) {
                                    result_239->sline=self->sline;
                                }
                                if(_if_conditional279=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional279) {
                                    __dec_obj123=result_239->sname;
                                    result_239->sname=(char*)come_increment_ref_count(((char*)(right_value361=string_clone(self->sname))));
                                    __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value361 = come_decrement_ref_count2(right_value361, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                __result159__ = __result_obj__ = result_239;
                                come_call_finalizer2(sWStringNode_finalize,result_239, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result159__;
                                come_call_finalizer2(sWStringNode_finalize,result_239, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sSStringNode_finalize(struct sSStringNode* self){
void* __result_obj__;
_Bool _if_conditional292;
_Bool _if_conditional293;
_Bool _if_conditional294;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional292=self!=((void*)0)&&self->value!=((void*)0),                                    _if_conditional292) {
                                        self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional293=self!=((void*)0)&&self->exps!=((void*)0),                                    _if_conditional293) {
                                        come_call_finalizer2(list$1sNodephp_finalize,self->exps, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional294=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional294) {
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self){
void* __result_obj__;
_Bool _if_conditional295;
struct sSStringNode* __result161__;
void* right_value372;
struct sSStringNode* result_250;
_Bool _if_conditional296;
void* right_value373;
char* __dec_obj124;
_Bool _if_conditional297;
void* right_value374;
struct list$1sNodeph* __dec_obj125;
_Bool _if_conditional298;
_Bool _if_conditional299;
void* right_value375;
char* __dec_obj126;
struct sSStringNode* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
right_value372 = (void*)0;
memset(&result_250, 0, sizeof(struct sSStringNode*));
right_value373 = (void*)0;
right_value374 = (void*)0;
right_value375 = (void*)0;
                                    if(_if_conditional295=self==(void*)0,                                    _if_conditional295) {
                                        __result161__ = __result_obj__ = (void*)0;
                                        return __result161__;
                                    }
                                    result_250=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(right_value372=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "sSStringNode_clone", 3, "sSStringNode"))));
                                    come_call_finalizer2(sSStringNode_finalize,right_value372, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional296=self!=((void*)0)&&self->value!=((void*)0),                                    _if_conditional296) {
                                        __dec_obj124=result_250->value;
                                        result_250->value=(char*)come_increment_ref_count(((char*)(right_value373=string_clone(self->value))));
                                        __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value373 = come_decrement_ref_count2(right_value373, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional297=self!=((void*)0)&&self->exps!=((void*)0),                                    _if_conditional297) {
                                        __dec_obj125=result_250->exps;
                                        result_250->exps=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value374=list$1sNodephp_clone(self->exps))));
                                        come_call_finalizer2(list$1sNodeph_finalize,__dec_obj125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(list$1sNodephp_finalize,right_value374, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional298=self!=((void*)0),                                    _if_conditional298) {
                                        result_250->sline=self->sline;
                                    }
                                    if(_if_conditional299=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional299) {
                                        __dec_obj126=result_250->sname;
                                        result_250->sname=(char*)come_increment_ref_count(((char*)(right_value375=string_clone(self->sname))));
                                        __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value375 = come_decrement_ref_count2(right_value375, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    __result162__ = __result_obj__ = result_250;
                                    come_call_finalizer2(sSStringNode_finalize,result_250, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result162__;
                                    come_call_finalizer2(sSStringNode_finalize,result_250, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sMapNode_finalize(struct sMapNode* self){
void* __result_obj__;
_Bool _if_conditional314;
_Bool _if_conditional315;
_Bool _if_conditional316;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional314=self!=((void*)0)&&self->map_key_elements!=((void*)0),                                                _if_conditional314) {
                                                    come_call_finalizer2(list$1sNodephp_finalize,self->map_key_elements, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional315=self!=((void*)0)&&self->map_elements!=((void*)0),                                                _if_conditional315) {
                                                    come_call_finalizer2(list$1sNodephp_finalize,self->map_elements, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional316=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional316) {
                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
}

static struct sMapNode* sMapNode_clone(struct sMapNode* self){
void* __result_obj__;
_Bool _if_conditional317;
struct sMapNode* __result167__;
void* right_value398;
struct sMapNode* result_265;
_Bool _if_conditional318;
void* right_value399;
struct list$1sNodeph* __dec_obj130;
_Bool _if_conditional319;
void* right_value400;
struct list$1sNodeph* __dec_obj131;
_Bool _if_conditional320;
_Bool _if_conditional321;
void* right_value401;
char* __dec_obj132;
struct sMapNode* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
right_value398 = (void*)0;
memset(&result_265, 0, sizeof(struct sMapNode*));
right_value399 = (void*)0;
right_value400 = (void*)0;
right_value401 = (void*)0;
                                                if(_if_conditional317=self==(void*)0,                                                _if_conditional317) {
                                                    __result167__ = __result_obj__ = (void*)0;
                                                    return __result167__;
                                                }
                                                result_265=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value398=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "sMapNode_clone", 3, "sMapNode"))));
                                                come_call_finalizer2(sMapNode_finalize,right_value398, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                if(_if_conditional318=self!=((void*)0)&&self->map_key_elements!=((void*)0),                                                _if_conditional318) {
                                                    __dec_obj130=result_265->map_key_elements;
                                                    result_265->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value399=list$1sNodephp_clone(self->map_key_elements))));
                                                    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer2(list$1sNodephp_finalize,right_value399, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                }
                                                if(_if_conditional319=self!=((void*)0)&&self->map_elements!=((void*)0),                                                _if_conditional319) {
                                                    __dec_obj131=result_265->map_elements;
                                                    result_265->map_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value400=list$1sNodephp_clone(self->map_elements))));
                                                    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj131, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer2(list$1sNodephp_finalize,right_value400, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                }
                                                if(_if_conditional320=self!=((void*)0),                                                _if_conditional320) {
                                                    result_265->sline=self->sline;
                                                }
                                                if(_if_conditional321=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional321) {
                                                    __dec_obj132=result_265->sname;
                                                    result_265->sname=(char*)come_increment_ref_count(((char*)(right_value401=string_clone(self->sname))));
                                                    __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value401 = come_decrement_ref_count2(right_value401, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                __result168__ = __result_obj__ = result_265;
                                                come_call_finalizer2(sMapNode_finalize,result_265, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result168__;
                                                come_call_finalizer2(sMapNode_finalize,result_265, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sListNode_finalize(struct sListNode* self){
void* __result_obj__;
_Bool _if_conditional328;
_Bool _if_conditional329;
memset(&__result_obj__, 0, sizeof(void*));
                                            if(_if_conditional328=self!=((void*)0)&&self->list_elements!=((void*)0),                                            _if_conditional328) {
                                                come_call_finalizer2(list$1sNodephp_finalize,self->list_elements, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            }
                                            if(_if_conditional329=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional329) {
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
}

static struct sListNode* sListNode_clone(struct sListNode* self){
void* __result_obj__;
_Bool _if_conditional330;
struct sListNode* __result170__;
void* right_value406;
struct sListNode* result_268;
_Bool _if_conditional331;
void* right_value407;
struct list$1sNodeph* __dec_obj133;
_Bool _if_conditional332;
_Bool _if_conditional333;
void* right_value408;
char* __dec_obj134;
struct sListNode* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
right_value406 = (void*)0;
memset(&result_268, 0, sizeof(struct sListNode*));
right_value407 = (void*)0;
right_value408 = (void*)0;
                                            if(_if_conditional330=self==(void*)0,                                            _if_conditional330) {
                                                __result170__ = __result_obj__ = (void*)0;
                                                return __result170__;
                                            }
                                            result_268=(struct sListNode*)come_increment_ref_count(((struct sListNode*)(right_value406=(struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "sListNode_clone", 3, "sListNode"))));
                                            come_call_finalizer2(sListNode_finalize,right_value406, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            if(_if_conditional331=self!=((void*)0)&&self->list_elements!=((void*)0),                                            _if_conditional331) {
                                                __dec_obj133=result_268->list_elements;
                                                result_268->list_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value407=list$1sNodephp_clone(self->list_elements))));
                                                come_call_finalizer2(list$1sNodeph_finalize,__dec_obj133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                come_call_finalizer2(list$1sNodephp_finalize,right_value407, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            }
                                            if(_if_conditional332=self!=((void*)0),                                            _if_conditional332) {
                                                result_268->sline=self->sline;
                                            }
                                            if(_if_conditional333=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional333) {
                                                __dec_obj134=result_268->sname;
                                                result_268->sname=(char*)come_increment_ref_count(((char*)(right_value408=string_clone(self->sname))));
                                                __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value408 = come_decrement_ref_count2(right_value408, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            __result171__ = __result_obj__ = result_268;
                                            come_call_finalizer2(sListNode_finalize,result_268, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result171__;
                                            come_call_finalizer2(sListNode_finalize,result_268, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* parse_tuple(struct sInfo* info){
void* __result_obj__;
void* right_value411;
void* right_value412;
struct list$1sNodeph* tuple_elements_269;
_Bool _while_condtional34;
char* p_270;
_Bool no_comma_271;
void* right_value413;
struct sNode* node_272;
void* right_value414;
struct sNode* __dec_obj135;
_Bool _if_conditional334;
_Bool _if_conditional335;
void* right_value415;
void* right_value416;
struct sNode* _inf_value11;
struct sTupleNode* _inf_obj_value11;
void* right_value420;
struct sNode* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
right_value411 = (void*)0;
right_value412 = (void*)0;
memset(&tuple_elements_269, 0, sizeof(struct list$1sNodeph*));
memset(&p_270, 0, sizeof(char*));
memset(&no_comma_271, 0, sizeof(_Bool));
right_value413 = (void*)0;
memset(&node_272, 0, sizeof(struct sNode*));
right_value414 = (void*)0;
right_value415 = (void*)0;
right_value416 = (void*)0;
right_value420 = (void*)0;
    tuple_elements_269=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value412=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value411=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1980, "list$1sNodeph"))))))));
    come_call_finalizer2(list$1sNodephp_finalize,right_value411, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sNodephp_finalize,right_value412, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional34=(_Bool)1,    _while_condtional34) {
        p_270=info->p;
        no_comma_271=info->no_comma;
        info->no_comma=(_Bool)1;
        node_272=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value413=expression_v13(info))));
        if(right_value413) { right_value413 = come_decrement_ref_count2(right_value413, ((struct sNode*)right_value413)->finalize, ((struct sNode*)right_value413)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        __dec_obj135=node_272;
        node_272=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value414=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_272),info))));
        if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count2(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0, (void*)0); }
        if(right_value414) { right_value414 = come_decrement_ref_count2(right_value414, ((struct sNode*)right_value414)->finalize, ((struct sNode*)right_value414)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        info->no_comma=no_comma_271;
        list$1sNodeph_push_back(tuple_elements_269,(struct sNode*)come_increment_ref_count(node_272));
        if(_if_conditional334=*info->p==44,        _if_conditional334) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            if(_if_conditional335=*info->p==41,            _if_conditional335) {
                info->p++;
                skip_spaces_and_lf(info);
                if(node_272) { node_272 = come_decrement_ref_count2(node_272, ((struct sNode*)node_272)->finalize, ((struct sNode*)node_272)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            else {
                err_msg(info,"invalid character(%c) in tuple expression",*info->p);
                exit(2);
            }
        }
        if(node_272) { node_272 = come_decrement_ref_count2(node_272, ((struct sNode*)node_272)->finalize, ((struct sNode*)node_272)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2009, "struct sNode");
    _inf_obj_value11=come_increment_ref_count(((struct sTupleNode*)(right_value416=sTupleNode_initialize((struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(right_value415=(struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "06str.c", 2009, "sTupleNode")))),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_269),info))));
    _inf_value11->_protocol_obj=_inf_obj_value11;
    _inf_value11->finalize=(void*)sTupleNode_finalize;
    _inf_value11->clone=(void*)sTupleNode_clone;
    _inf_value11->compile=(void*)sTupleNode_compile;
    _inf_value11->sline=(void*)sTupleNode_sline;
    _inf_value11->sname=(void*)sTupleNode_sname;
    _inf_value11->terminated=(void*)sTupleNode_terminated;
    _inf_value11->kind=(void*)sTupleNode_kind;
    __result176__ = __result_obj__ = ((struct sNode*)(right_value420=_inf_value11));
    come_call_finalizer2(list$1sNodephp_finalize,tuple_elements_269, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sTupleNode_finalize,right_value415, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sTupleNode_finalize,right_value416, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value420) { right_value420 = come_decrement_ref_count2(right_value420, ((struct sNode*)right_value420)->finalize, ((struct sNode*)right_value420)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result176__;
    come_call_finalizer2(list$1sNodephp_finalize,tuple_elements_269, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sTupleNode_finalize(struct sTupleNode* self){
void* __result_obj__;
_Bool _if_conditional336;
_Bool _if_conditional337;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional336=self!=((void*)0)&&self->tuple_elements!=((void*)0),        _if_conditional336) {
            come_call_finalizer2(list$1sNodephp_finalize,self->tuple_elements, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional337=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional337) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self){
void* __result_obj__;
_Bool _if_conditional338;
struct sTupleNode* __result174__;
void* right_value417;
struct sTupleNode* result_273;
_Bool _if_conditional339;
void* right_value418;
struct list$1sNodeph* __dec_obj136;
_Bool _if_conditional340;
_Bool _if_conditional341;
void* right_value419;
char* __dec_obj137;
struct sTupleNode* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
right_value417 = (void*)0;
memset(&result_273, 0, sizeof(struct sTupleNode*));
right_value418 = (void*)0;
right_value419 = (void*)0;
        if(_if_conditional338=self==(void*)0,        _if_conditional338) {
            __result174__ = __result_obj__ = (void*)0;
            return __result174__;
        }
        result_273=(struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(right_value417=(struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "sTupleNode_clone", 3, "sTupleNode"))));
        come_call_finalizer2(sTupleNode_finalize,right_value417, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional339=self!=((void*)0)&&self->tuple_elements!=((void*)0),        _if_conditional339) {
            __dec_obj136=result_273->tuple_elements;
            result_273->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value418=list$1sNodephp_clone(self->tuple_elements))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value418, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional340=self!=((void*)0),        _if_conditional340) {
            result_273->sline=self->sline;
        }
        if(_if_conditional341=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional341) {
            __dec_obj137=result_273->sname;
            result_273->sname=(char*)come_increment_ref_count(((char*)(right_value419=string_clone(self->sname))));
            __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value419 = come_decrement_ref_count2(right_value419, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __result175__ = __result_obj__ = result_273;
        come_call_finalizer2(sTupleNode_finalize,result_273, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result175__;
        come_call_finalizer2(sTupleNode_finalize,result_273, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

