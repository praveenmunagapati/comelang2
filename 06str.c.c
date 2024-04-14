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










struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info){
void* __result_obj__;
void* right_value49;
char* __dec_obj12;
void* right_value50;
char* __dec_obj13;
struct sStrNode* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
right_value49 = (void*)0;
right_value50 = (void*)0;
    __dec_obj12=self->value;
    self->value=(char*)come_increment_ref_count(((char*)(right_value49=__builtin_string(value))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value49 = come_decrement_ref_count2(right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->sline=sline;
    __dec_obj13=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value50=__builtin_string(info->sname))));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value50 = come_decrement_ref_count2(right_value50, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result34__ = __result_obj__ = self;
    come_call_finalizer2(sStrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result34__;
    come_call_finalizer2(sStrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sStrNode_terminated(){
void* __result_obj__;
_Bool __result35__;
memset(&__result_obj__, 0, sizeof(void*));
    __result35__ = (_Bool)0;
    return __result35__;
}

static char* double_quoted_string(char* str){
void* __result_obj__;
void* right_value51;
void* right_value52;
struct buffer* buf_11;
char* p_12;
_Bool _while_condtional1;
_Bool _if_conditional9;
void* right_value53;
char* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
right_value51 = (void*)0;
right_value52 = (void*)0;
memset(&buf_11, 0, sizeof(struct buffer*));
memset(&p_12, 0, sizeof(char*));
right_value53 = (void*)0;
    buf_11=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value52=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value51=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 28, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    p_12=str;
    while(_while_condtional1=*p_12,    _while_condtional1) {
        if(_if_conditional9=*p_12==34,        _if_conditional9) {
            p_12++;
            buffer_append_char(buf_11,92);
            buffer_append_char(buf_11,34);
        }
        else {
            buffer_append_char(buf_11,*p_12);
            p_12++;
        }
    }
    __result36__ = __result_obj__ = ((char*)(right_value53=buffer_to_string(buf_11)));
    come_call_finalizer2(buffer_finalize,buf_11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value53 = come_decrement_ref_count2(right_value53, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result36__;
    come_call_finalizer2(buffer_finalize,buf_11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* sStrNode_kind(){
void* __result_obj__;
void* right_value54;
char* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
right_value54 = (void*)0;
    __result37__ = __result_obj__ = ((char*)(right_value54=__builtin_string("sStrNode")));
    right_value54 = come_decrement_ref_count2(right_value54, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result37__;
}

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value55;
struct CVALUE* come_value_13;
void* right_value56;
char* __dec_obj14;
void* right_value57;
void* right_value58;
struct sType* __dec_obj15;
_Bool __result39__;
memset(&__result_obj__, 0, sizeof(void*));
right_value55 = (void*)0;
memset(&come_value_13, 0, sizeof(struct CVALUE*));
right_value56 = (void*)0;
right_value57 = (void*)0;
right_value58 = (void*)0;
    come_value_13=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value55=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 53, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj14=come_value_13->c_value;
    come_value_13->c_value=(char*)come_increment_ref_count(((char*)(right_value56=xsprintf("\"%s\"",self->value))));
    __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value56 = come_decrement_ref_count2(right_value56, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj15=come_value_13->type;
    come_value_13->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value58=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value57=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 56, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_13->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_13));
    add_come_last_code(info,"%s;\n",come_value_13->c_value);
    __result39__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result39__;
    come_call_finalizer2(CVALUE_finalize,come_value_13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sTypeph* it_14;
_Bool _while_condtional2;
struct list_item$1sTypeph* prev_it_15;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_14, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_15, 0, sizeof(struct list_item$1sTypeph*));
                        it_14=self->head;
                        while(_while_condtional2=it_14!=((void*)0),                        _while_condtional2) {
                            prev_it_15=it_14;
                            it_14=it_14->next;
                            come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_16;
_Bool _while_condtional3;
struct list_item$1sNodeph* prev_it_17;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_16, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_17, 0, sizeof(struct list_item$1sNodeph*));
                        it_16=self->head;
                        while(_while_condtional3=it_16!=((void*)0),                        _while_condtional3) {
                            prev_it_17=it_16;
                            it_16=it_16->next;
                            come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
struct list_item$1charph* it_18;
_Bool _while_condtional4;
struct list_item$1charph* prev_it_19;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_18, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_19, 0, sizeof(struct list_item$1charph*));
                        it_18=self->head;
                        while(_while_condtional4=it_18!=((void*)0),                        _while_condtional4) {
                            prev_it_19=it_18;
                            it_18=it_18->next;
                            come_call_finalizer2(list_item$1charphp_finalize,prev_it_19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
void* right_value59;
struct list_item$1CVALUEph* litem_20;
struct CVALUE* __dec_obj16;
_Bool _if_conditional31;
void* right_value60;
struct list_item$1CVALUEph* litem_21;
struct CVALUE* __dec_obj17;
void* right_value61;
struct list_item$1CVALUEph* litem_22;
struct CVALUE* __dec_obj18;
struct list$1CVALUEph* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
right_value59 = (void*)0;
memset(&litem_20, 0, sizeof(struct list_item$1CVALUEph*));
right_value60 = (void*)0;
memset(&litem_21, 0, sizeof(struct list_item$1CVALUEph*));
right_value61 = (void*)0;
memset(&litem_22, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional29=self->len==0,        _if_conditional29) {
            litem_20=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value59=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 226, "list_item$1CVALUEph"))));
            come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            litem_20->prev=((void*)0);
            litem_20->next=((void*)0);
            __dec_obj16=litem_20->item;
            litem_20->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer2(CVALUE_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            self->tail=litem_20;
            self->head=litem_20;
        }
        else {
            if(_if_conditional31=self->len==1,            _if_conditional31) {
                litem_21=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value60=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 236, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_21->prev=self->head;
                litem_21->next=((void*)0);
                __dec_obj17=litem_21->item;
                litem_21->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_21;
                self->head->next=litem_21;
            }
            else {
                litem_22=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value61=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 246, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_22->prev=self->tail;
                litem_22->next=((void*)0);
                __dec_obj18=litem_22->item;
                litem_22->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail->next=litem_22;
                self->tail=litem_22;
            }
        }
        self->len++;
        __result38__ = __result_obj__ = self;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result38__;
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
int __result40__;
memset(&__result_obj__, 0, sizeof(void*));
    __result40__ = self->sline;
    return __result40__;
}

char* sStrNode_sname(struct sStrNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value62;
char* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
right_value62 = (void*)0;
    __result41__ = __result_obj__ = ((char*)(right_value62=__builtin_string(self->sname)));
    right_value62 = come_decrement_ref_count2(right_value62, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result41__;
}

struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info){
void* __result_obj__;
void* right_value63;
char* __dec_obj19;
void* right_value71;
struct list$1sNodeph* __dec_obj23;
void* right_value72;
char* __dec_obj24;
struct sSStringNode* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
right_value63 = (void*)0;
right_value71 = (void*)0;
right_value72 = (void*)0;
    __dec_obj19=self->value;
    self->value=(char*)come_increment_ref_count(((char*)(right_value63=__builtin_string(value))));
    __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value63 = come_decrement_ref_count2(right_value63, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj23=self->exps;
    self->exps=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value71=list$1sNodephp_clone(exps))));
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->sline=sline;
    __dec_obj24=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value72=__builtin_string(info->sname))));
    __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value72 = come_decrement_ref_count2(right_value72, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result48__ = __result_obj__ = self;
    come_call_finalizer2(sSStringNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,exps, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result48__;
    come_call_finalizer2(sSStringNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,exps, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional32;
struct list$1sNodeph* __result42__;
void* right_value64;
void* right_value65;
struct list$1sNodeph* result_23;
struct list_item$1sNodeph* it_24;
_Bool _while_condtional5;
void* right_value70;
struct list$1sNodeph* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
right_value64 = (void*)0;
right_value65 = (void*)0;
memset(&result_23, 0, sizeof(struct list$1sNodeph*));
memset(&it_24, 0, sizeof(struct list_item$1sNodeph*));
right_value70 = (void*)0;
        if(_if_conditional32=self==((void*)0),        _if_conditional32) {
            __result42__ = __result_obj__ = ((void*)0);
            return __result42__;
        }
        result_23=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value65=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value64=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 142, "list$1sNodeph"))))))));
        come_call_finalizer2(list$1sNodephp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sNodephp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        it_24=self->head;
        while(_while_condtional5=it_24!=((void*)0),        _while_condtional5) {
            list$1sNodeph_add(result_23,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value70=sNode_clone(it_24->item)))));
            if(right_value70) { right_value70 = come_decrement_ref_count2(right_value70, ((struct sNode*)right_value70)->finalize, ((struct sNode*)right_value70)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            it_24=it_24->next;
        }
        __result47__ = __result_obj__ = result_23;
        come_call_finalizer2(list$1sNodephp_finalize,result_23, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result47__;
        come_call_finalizer2(list$1sNodephp_finalize,result_23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result43__ = __result_obj__ = self;
            come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result43__;
            come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional33;
void* right_value66;
struct list_item$1sNodeph* litem_25;
struct sNode* __dec_obj20;
_Bool _if_conditional34;
void* right_value67;
struct list_item$1sNodeph* litem_26;
struct sNode* __dec_obj21;
void* right_value68;
struct list_item$1sNodeph* litem_27;
struct sNode* __dec_obj22;
struct list$1sNodeph* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
right_value66 = (void*)0;
memset(&litem_25, 0, sizeof(struct list_item$1sNodeph*));
right_value67 = (void*)0;
memset(&litem_26, 0, sizeof(struct list_item$1sNodeph*));
right_value68 = (void*)0;
memset(&litem_27, 0, sizeof(struct list_item$1sNodeph*));
                if(_if_conditional33=self->len==0,                _if_conditional33) {
                    litem_25=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value66=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 156, "list_item$1sNodeph"))));
                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_25->prev=((void*)0);
                    litem_25->next=((void*)0);
                    __dec_obj20=litem_25->item;
                    litem_25->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count2(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0,0, (void*)0); }
                    self->tail=litem_25;
                    self->head=litem_25;
                }
                else {
                    if(_if_conditional34=self->len==1,                    _if_conditional34) {
                        litem_26=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value67=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 166, "list_item$1sNodeph"))));
                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_26->prev=self->head;
                        litem_26->next=((void*)0);
                        __dec_obj21=litem_26->item;
                        litem_26->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0, (void*)0); }
                        self->tail=litem_26;
                        self->head->next=litem_26;
                    }
                    else {
                        litem_27=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value68=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 176, "list_item$1sNodeph"))));
                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_27->prev=self->tail;
                        litem_27->next=((void*)0);
                        __dec_obj22=litem_27->item;
                        litem_27->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                        self->tail->next=litem_27;
                        self->tail=litem_27;
                    }
                }
                self->len++;
                __result44__ = __result_obj__ = self;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result44__;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional35;
struct sNode* __result45__;
void* right_value69;
struct sNode* result_28;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
struct sNode* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
right_value69 = (void*)0;
memset(&result_28, 0, sizeof(struct sNode*));
                if(_if_conditional35=self==(void*)0,                _if_conditional35) {
                    __result45__ = __result_obj__ = (void*)0;
                    return __result45__;
                }
                result_28=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value69=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                if(right_value69) { right_value69 = come_decrement_ref_count2(right_value69, ((struct sNode*)right_value69)->finalize, ((struct sNode*)right_value69)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                if(_if_conditional36=self!=((void*)0)&&self->clone!=((void*)0),                _if_conditional36) {
                    result_28->_protocol_obj=self->clone(self->_protocol_obj);
                }
                if(_if_conditional37=self!=((void*)0),                _if_conditional37) {
                    result_28->finalize=self->finalize;
                }
                if(_if_conditional38=self!=((void*)0),                _if_conditional38) {
                    result_28->clone=self->clone;
                }
                if(_if_conditional39=self!=((void*)0),                _if_conditional39) {
                    result_28->compile=self->compile;
                }
                if(_if_conditional40=self!=((void*)0),                _if_conditional40) {
                    result_28->sline=self->sline;
                }
                if(_if_conditional41=self!=((void*)0),                _if_conditional41) {
                    result_28->sname=self->sname;
                }
                if(_if_conditional42=self!=((void*)0),                _if_conditional42) {
                    result_28->terminated=self->terminated;
                }
                if(_if_conditional43=self!=((void*)0),                _if_conditional43) {
                    result_28->kind=self->kind;
                }
                __result46__ = __result_obj__ = result_28;
                if(result_28) { result_28 = come_decrement_ref_count2(result_28, ((struct sNode*)result_28)->finalize, ((struct sNode*)result_28)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result46__;
                if(result_28) { result_28 = come_decrement_ref_count2(result_28, ((struct sNode*)result_28)->finalize, ((struct sNode*)result_28)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

_Bool sSStringNode_terminated(){
void* __result_obj__;
_Bool __result49__;
memset(&__result_obj__, 0, sizeof(void*));
    __result49__ = (_Bool)0;
    return __result49__;
}

char* sSStringNode_kind(){
void* __result_obj__;
void* right_value73;
char* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
right_value73 = (void*)0;
    __result50__ = __result_obj__ = ((char*)(right_value73=__builtin_string("sSStringNode")));
    right_value73 = come_decrement_ref_count2(right_value73, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result50__;
}

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value74;
struct CVALUE* come_value_29;
void* right_value75;
void* right_value76;
struct buffer* buf_30;
_Bool _if_conditional48;
struct list$1sNodeph* o2_saved_31;
struct sNode* it_34;
_Bool _if_conditional53;
_Bool __result60__;
void* right_value77;
struct CVALUE* come_value_37;
void* right_value78;
char* method_name_38;
_Bool _if_conditional73;
struct sType* obj_type_41;
_Bool _if_conditional75;
struct sType* obj_type2_42;
void* right_value79;
void* right_value80;
char* __dec_obj25;
void* right_value81;
void* right_value82;
struct buffer* buf2_43;
void* right_value83;
void* right_value84;
struct sType* type_44;
void* right_value85;
void* right_value86;
char* c_value_45;
void* right_value87;
void* right_value88;
struct sType* type2_46;
void* right_value89;
char* __dec_obj26;
void* right_value90;
char* __dec_obj27;
void* right_value119;
struct sType* __dec_obj48;
_Bool __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value74 = (void*)0;
memset(&come_value_29, 0, sizeof(struct CVALUE*));
right_value75 = (void*)0;
right_value76 = (void*)0;
memset(&buf_30, 0, sizeof(struct buffer*));
memset(&o2_saved_31, 0, sizeof(struct list$1sNodeph*));
memset(&it_34, 0, sizeof(struct sNode*));
right_value77 = (void*)0;
memset(&come_value_37, 0, sizeof(struct CVALUE*));
right_value78 = (void*)0;
memset(&method_name_38, 0, sizeof(char*));
memset(&obj_type_41, 0, sizeof(struct sType*));
memset(&obj_type2_42, 0, sizeof(struct sType*));
right_value79 = (void*)0;
right_value80 = (void*)0;
right_value81 = (void*)0;
right_value82 = (void*)0;
memset(&buf2_43, 0, sizeof(struct buffer*));
right_value83 = (void*)0;
right_value84 = (void*)0;
memset(&type_44, 0, sizeof(struct sType*));
right_value85 = (void*)0;
right_value86 = (void*)0;
memset(&c_value_45, 0, sizeof(char*));
right_value87 = (void*)0;
right_value88 = (void*)0;
memset(&type2_46, 0, sizeof(struct sType*));
right_value89 = (void*)0;
right_value90 = (void*)0;
right_value119 = (void*)0;
    come_value_29=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value74=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 109, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buf_30=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value76=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value75=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 111, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append_str(buf_30,"xsprintf(\"");
    buffer_append_str(buf_30,self->value);
    buffer_append_str(buf_30,"\"");
    if(_if_conditional48=list$1sNodeph_length(self->exps)>0,    _if_conditional48) {
        for(        o2_saved_31=(struct list$1sNodeph*)come_increment_ref_count((self->exps)),it_34=list$1sNodeph_begin((o2_saved_31));        !list$1sNodeph_end((o2_saved_31));        it_34=list$1sNodeph_next((o2_saved_31))        ){
            if(_if_conditional53=!node_compile(it_34,info),            _if_conditional53) {
                __result60__ = (_Bool)0;
                come_call_finalizer2(list$1sNodephp_finalize,o2_saved_31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,come_value_29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,buf_30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result60__;
            }
            come_value_37=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value77=get_value_from_stack(-1,info))));
            come_call_finalizer2(CVALUE_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            dec_stack_ptr(1,info);
            method_name_38=(char*)come_increment_ref_count(((char*)(right_value78=create_method_name(come_value_37->type,(_Bool)0,"to_string",info,(_Bool)1))));
            right_value78 = come_decrement_ref_count2(right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional73=map$2charphsFunph_at(info->funcs,method_name_38,((void*)0))==((void*)0),            _if_conditional73) {
                obj_type_41=come_value_37->type->mNoSolvedGenericsType->v1;
                if(_if_conditional75=obj_type_41&&list$1sTypeph_length(obj_type_41->mGenericsTypes)>0,                _if_conditional75) {
                    obj_type2_42=come_value_37->type;
                    __dec_obj25=method_name_38;
                    method_name_38=(char*)come_increment_ref_count(((char*)(right_value80=make_generics_function(obj_type2_42,(char*)come_increment_ref_count(((char*)(right_value79=__builtin_string("to_string")))),info,(_Bool)1))));
                    __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    err_msg(info,"require to_string implementation(%s)",come_value_37->type->mClass->mName);
                    exit(1);
                }
            }
            buf2_43=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value82=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value81=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 140, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            buffer_append_str(buf2_43,method_name_38);
            buffer_append_str(buf2_43,"(");
            buffer_append_str(buf2_43,come_value_37->c_value);
            buffer_append_str(buf2_43,")");
            type_44=(struct sType*)come_increment_ref_count(((struct sType*)(right_value84=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value83=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 147, "sType")))),"char*",(_Bool)0,info))));
            come_call_finalizer2(sType_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            type_44->mHeap=(_Bool)1;
            c_value_45=(char*)come_increment_ref_count(((char*)(right_value86=append_object_to_right_values(((char*)(right_value85=buffer_to_string(buf2_43))),(struct sType*)come_increment_ref_count(type_44),info))));
            right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(buf_30,",");
            buffer_append_str(buf_30,c_value_45);
            come_call_finalizer2(CVALUE_finalize,come_value_37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            method_name_38 = come_decrement_ref_count2(method_name_38, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,buf2_43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type_44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            c_value_45 = come_decrement_ref_count2(c_value_45, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1sNodephp_finalize,o2_saved_31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    buffer_append_str(buf_30,")");
    type2_46=(struct sType*)come_increment_ref_count(((struct sType*)(right_value88=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value87=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 159, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type2_46->mHeap=(_Bool)1;
    __dec_obj26=come_value_29->c_value;
    come_value_29->c_value=(char*)come_increment_ref_count(((char*)(right_value89=buffer_to_string(buf_30))));
    __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj27=come_value_29->c_value;
    come_value_29->c_value=(char*)come_increment_ref_count(((char*)(right_value90=append_object_to_right_values(come_value_29->c_value,(struct sType*)come_increment_ref_count(type2_46),info))));
    __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj48=come_value_29->type;
    come_value_29->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value119=sType_clone(type2_46))));
    come_call_finalizer2(sType_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_29->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_29));
    add_come_last_code(info,"%s;\n",come_value_29->c_value);
    __result79__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result79__;
    come_call_finalizer2(CVALUE_finalize,come_value_29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional47;
int __result51__;
int __result52__;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional47=self==((void*)0),        _if_conditional47) {
            __result51__ = 0;
            return __result51__;
        }
        __result52__ = self->len;
        return __result52__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional49;
struct sNode* result_32;
struct sNode* __result53__;
_Bool _if_conditional50;
struct sNode* __result54__;
struct sNode* result_33;
struct sNode* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_32, 0, sizeof(struct sNode*));
memset(&result_33, 0, sizeof(struct sNode*));
            if(_if_conditional49=self==((void*)0),            _if_conditional49) {
                memset(&result_32,0,sizeof(struct sNode*));
                __result53__ = __result_obj__ = result_32;
                return __result53__;
            }
            self->it=self->head;
            if(self->it) {
                __result54__ = __result_obj__ = self->it->item;
                return __result54__;
            }
            memset(&result_33,0,sizeof(struct sNode*));
            __result55__ = __result_obj__ = result_33;
            return __result55__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result56__;
memset(&__result_obj__, 0, sizeof(void*));
            __result56__ = self==((void*)0)||self->it==((void*)0);
            return __result56__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional51;
struct sNode* result_35;
struct sNode* __result57__;
_Bool _if_conditional52;
struct sNode* __result58__;
struct sNode* result_36;
struct sNode* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_35, 0, sizeof(struct sNode*));
memset(&result_36, 0, sizeof(struct sNode*));
            if(_if_conditional51=self==((void*)0)||self->it==((void*)0),            _if_conditional51) {
                memset(&result_35,0,sizeof(struct sNode*));
                __result57__ = __result_obj__ = result_35;
                return __result57__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result58__ = __result_obj__ = self->it->item;
                return __result58__;
            }
            memset(&result_36,0,sizeof(struct sNode*));
            __result59__ = __result_obj__ = result_36;
            return __result59__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_39;
unsigned int it_40;
_Bool _while_condtional6;
_Bool _if_conditional54;
_Bool _if_conditional55;
struct sFun* __result61__;
_Bool _if_conditional71;
_Bool _if_conditional72;
struct sFun* __result62__;
struct sFun* __result63__;
struct sFun* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_39, 0, sizeof(unsigned int));
memset(&it_40, 0, sizeof(unsigned int));
                hash_39=string_get_hash_key(((char*)key))%self->size;
                it_40=hash_39;
                while(_while_condtional6=(_Bool)1,                _while_condtional6) {
                    if(_if_conditional54=self->item_existance[it_40],                    _if_conditional54) {
                        if(_if_conditional55=string_equals(self->keys[it_40],key),                        _if_conditional55) {
                            __result61__ = __result_obj__ = self->items[it_40];
                            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result61__;
                        }
                        it_40++;
                        if(_if_conditional71=it_40>=self->size,                        _if_conditional71) {
                            it_40=0;
                        }
                        else {
                            if(_if_conditional72=it_40==hash_39,                            _if_conditional72) {
                                __result62__ = __result_obj__ = default_value;
                                come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result62__;
                            }
                        }
                    }
                    else {
                        __result63__ = __result_obj__ = default_value;
                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result63__;
                    }
                }
                __result64__ = __result_obj__ = default_value;
                come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result64__;
                come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional65;
_Bool _if_conditional66;
_Bool _if_conditional67;
_Bool _if_conditional68;
_Bool _if_conditional69;
_Bool _if_conditional70;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional56=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional56) {
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional57=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional57) {
                                    come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional58=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional58) {
                                    come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional59=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional59) {
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional60=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                _if_conditional60) {
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional61=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                _if_conditional61) {
                                    come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional62=self!=((void*)0)&&self->mBlock!=((void*)0),                                _if_conditional62) {
                                    come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional65=self!=((void*)0)&&self->mSource!=((void*)0),                                _if_conditional65) {
                                    come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional66=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                _if_conditional66) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional67=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                _if_conditional67) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional68=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                _if_conditional68) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional69=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                _if_conditional69) {
                                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional70=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional70) {
                                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional63;
_Bool _if_conditional64;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional63=self!=((void*)0)&&self->mNodes!=((void*)0),                                        _if_conditional63) {
                                            come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional64=self!=((void*)0)&&self->mVarTable!=((void*)0),                                        _if_conditional64) {
                                            come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional74;
int __result65__;
int __result66__;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional74=self==((void*)0),                    _if_conditional74) {
                        __result65__ = 0;
                        return __result65__;
                    }
                    __result66__ = self->len;
                    return __result66__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional76;
struct sType* __result67__;
void* right_value91;
struct sType* result_47;
_Bool _if_conditional77;
_Bool _if_conditional78;
void* right_value98;
struct list$1sTypeph* __dec_obj31;
_Bool _if_conditional82;
void* right_value101;
struct tuple1$1sTypeph* __dec_obj33;
_Bool _if_conditional86;
void* right_value102;
struct tuple1$1sTypeph* __dec_obj34;
_Bool _if_conditional87;
void* right_value103;
char* __dec_obj35;
_Bool _if_conditional88;
void* right_value104;
struct list$1sTypeph* __dec_obj36;
_Bool _if_conditional89;
void* right_value105;
struct list$1sNodeph* __dec_obj37;
_Bool _if_conditional90;
_Bool _if_conditional91;
void* right_value106;
struct list$1sTypeph* __dec_obj38;
_Bool _if_conditional92;
void* right_value113;
struct list$1charph* __dec_obj42;
_Bool _if_conditional96;
void* right_value114;
struct tuple1$1sTypeph* __dec_obj43;
_Bool _if_conditional97;
_Bool _if_conditional98;
void* right_value115;
struct sNode* __dec_obj44;
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
_Bool _if_conditional121;
_Bool _if_conditional122;
void* right_value116;
struct sNode* __dec_obj45;
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional125;
void* right_value117;
char* __dec_obj46;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
void* right_value118;
char* __dec_obj47;
_Bool _if_conditional135;
struct sType* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value91 = (void*)0;
memset(&result_47, 0, sizeof(struct sType*));
right_value98 = (void*)0;
right_value101 = (void*)0;
right_value102 = (void*)0;
right_value103 = (void*)0;
right_value104 = (void*)0;
right_value105 = (void*)0;
right_value106 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
right_value117 = (void*)0;
right_value118 = (void*)0;
        if(_if_conditional76=self==(void*)0,        _if_conditional76) {
            __result67__ = __result_obj__ = (void*)0;
            return __result67__;
        }
        result_47=(struct sType*)come_increment_ref_count(((struct sType*)(right_value91=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer2(sType_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            result_47->mClass=self->mClass;
        }
        if(_if_conditional78=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),        _if_conditional78) {
            __dec_obj31=result_47->mMultipleTypes;
            result_47->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value98=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional82=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional82) {
            __dec_obj33=result_47->mNoSolvedGenericsType;
            result_47->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value101=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional86=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional86) {
            __dec_obj34=result_47->mOriginalLoadVarType;
            result_47->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value102=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional87=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional87) {
            __dec_obj35=result_47->mGenericsName;
            result_47->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value103=string_clone(self->mGenericsName))));
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional88=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional88) {
            __dec_obj36=result_47->mGenericsTypes;
            result_47->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value104=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional89=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional89) {
            __dec_obj37=result_47->mArrayNum;
            result_47->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value105=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            result_47->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(_if_conditional91=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional91) {
            __dec_obj38=result_47->mParamTypes;
            result_47->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value106=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional92=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional92) {
            __dec_obj42=result_47->mParamNames;
            result_47->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value113=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer2(list$1charph_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional96=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional96) {
            __dec_obj43=result_47->mResultType;
            result_47->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value114=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional97=self!=((void*)0),        _if_conditional97) {
            result_47->mVarArgs=self->mVarArgs;
        }
        if(_if_conditional98=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional98) {
            __dec_obj44=result_47->mAlignas;
            result_47->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value115=sNode_clone(self->mAlignas))));
            if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count2(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value115) { right_value115 = come_decrement_ref_count2(right_value115, ((struct sNode*)right_value115)->finalize, ((struct sNode*)right_value115)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional99=self!=((void*)0),        _if_conditional99) {
            result_47->mUnsigned=self->mUnsigned;
        }
        if(_if_conditional100=self!=((void*)0),        _if_conditional100) {
            result_47->mShort=self->mShort;
        }
        if(_if_conditional101=self!=((void*)0),        _if_conditional101) {
            result_47->mLong=self->mLong;
        }
        if(_if_conditional102=self!=((void*)0),        _if_conditional102) {
            result_47->mLongLong=self->mLongLong;
        }
        if(_if_conditional103=self!=((void*)0),        _if_conditional103) {
            result_47->mConstant=self->mConstant;
        }
        if(_if_conditional104=self!=((void*)0),        _if_conditional104) {
            result_47->mRegister=self->mRegister;
        }
        if(_if_conditional105=self!=((void*)0),        _if_conditional105) {
            result_47->mVolatile=self->mVolatile;
        }
        if(_if_conditional106=self!=((void*)0),        _if_conditional106) {
            result_47->mStatic=self->mStatic;
        }
        if(_if_conditional107=self!=((void*)0),        _if_conditional107) {
            result_47->mExtern=self->mExtern;
        }
        if(_if_conditional108=self!=((void*)0),        _if_conditional108) {
            result_47->mRestrict=self->mRestrict;
        }
        if(_if_conditional109=self!=((void*)0),        _if_conditional109) {
            result_47->mImmutable=self->mImmutable;
        }
        if(_if_conditional110=self!=((void*)0),        _if_conditional110) {
            result_47->mHeap=self->mHeap;
        }
        if(_if_conditional111=self!=((void*)0),        _if_conditional111) {
            result_47->mDummyHeap=self->mDummyHeap;
        }
        if(_if_conditional112=self!=((void*)0),        _if_conditional112) {
            result_47->mDelegate=self->mDelegate;
        }
        if(_if_conditional113=self!=((void*)0),        _if_conditional113) {
            result_47->mShare=self->mShare;
        }
        if(_if_conditional114=self!=((void*)0),        _if_conditional114) {
            result_47->mClone=self->mClone;
        }
        if(_if_conditional115=self!=((void*)0),        _if_conditional115) {
            result_47->mNoHeap=self->mNoHeap;
        }
        if(_if_conditional116=self!=((void*)0),        _if_conditional116) {
            result_47->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(_if_conditional117=self!=((void*)0),        _if_conditional117) {
            result_47->mRefference=self->mRefference;
        }
        if(_if_conditional118=self!=((void*)0),        _if_conditional118) {
            result_47->mException=self->mException;
        }
        if(_if_conditional119=self!=((void*)0),        _if_conditional119) {
            result_47->mPointerNum=self->mPointerNum;
        }
        if(_if_conditional120=self!=((void*)0),        _if_conditional120) {
            result_47->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        if(_if_conditional121=self!=((void*)0),        _if_conditional121) {
            result_47->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(_if_conditional122=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional122) {
            __dec_obj45=result_47->mSizeNum;
            result_47->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value116=sNode_clone(self->mSizeNum))));
            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count2(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value116) { right_value116 = come_decrement_ref_count2(right_value116, ((struct sNode*)right_value116)->finalize, ((struct sNode*)right_value116)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional123=self!=((void*)0),        _if_conditional123) {
            result_47->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(_if_conditional124=self!=((void*)0),        _if_conditional124) {
            result_47->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(_if_conditional125=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional125) {
            __dec_obj46=result_47->mOriginalTypeName;
            result_47->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value117=string_clone(self->mOriginalTypeName))));
            __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional126=self!=((void*)0),        _if_conditional126) {
            result_47->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(_if_conditional127=self!=((void*)0),        _if_conditional127) {
            result_47->mFunctionParam=self->mFunctionParam;
        }
        if(_if_conditional128=self!=((void*)0),        _if_conditional128) {
            result_47->mAllocaValue=self->mAllocaValue;
        }
        if(_if_conditional129=self!=((void*)0),        _if_conditional129) {
            result_47->mGenericsStruct=self->mGenericsStruct;
        }
        if(_if_conditional130=self!=((void*)0),        _if_conditional130) {
            result_47->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(_if_conditional131=self!=((void*)0),        _if_conditional131) {
            result_47->mComeMemCore=self->mComeMemCore;
        }
        if(_if_conditional132=self!=((void*)0),        _if_conditional132) {
            result_47->mInline=self->mInline;
        }
        if(_if_conditional133=self!=((void*)0),        _if_conditional133) {
            result_47->mNullValue=self->mNullValue;
        }
        if(_if_conditional134=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional134) {
            __dec_obj47=result_47->mAsmName;
            result_47->mAsmName=(char*)come_increment_ref_count(((char*)(right_value118=string_clone(self->mAsmName))));
            __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional135=self!=((void*)0),        _if_conditional135) {
            result_47->mArrayPointerType=self->mArrayPointerType;
        }
        __result78__ = __result_obj__ = result_47;
        come_call_finalizer2(sType_finalize,result_47, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result78__;
        come_call_finalizer2(sType_finalize,result_47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional79;
struct list$1sTypeph* __result68__;
void* right_value92;
void* right_value93;
struct list$1sTypeph* result_48;
struct list_item$1sTypeph* it_49;
_Bool _while_condtional7;
void* right_value97;
struct list$1sTypeph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
right_value92 = (void*)0;
right_value93 = (void*)0;
memset(&result_48, 0, sizeof(struct list$1sTypeph*));
memset(&it_49, 0, sizeof(struct list_item$1sTypeph*));
right_value97 = (void*)0;
                if(_if_conditional79=self==((void*)0),                _if_conditional79) {
                    __result68__ = __result_obj__ = ((void*)0);
                    return __result68__;
                }
                result_48=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value93=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value92=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 142, "list$1sTypeph"))))))));
                come_call_finalizer2(list$1sTypephp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sTypephp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_49=self->head;
                while(_while_condtional7=it_49!=((void*)0),                _while_condtional7) {
                    list$1sTypeph_add(result_48,(struct sType*)come_increment_ref_count(((struct sType*)(right_value97=sType_clone(it_49->item)))));
                    come_call_finalizer2(sType_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_49=it_49->next;
                }
                __result71__ = __result_obj__ = result_48;
                come_call_finalizer2(list$1sTypephp_finalize,result_48, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result71__;
                come_call_finalizer2(list$1sTypephp_finalize,result_48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result69__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result69__;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional80;
void* right_value94;
struct list_item$1sTypeph* litem_50;
struct sType* __dec_obj28;
_Bool _if_conditional81;
void* right_value95;
struct list_item$1sTypeph* litem_51;
struct sType* __dec_obj29;
void* right_value96;
struct list_item$1sTypeph* litem_52;
struct sType* __dec_obj30;
struct list$1sTypeph* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value94 = (void*)0;
memset(&litem_50, 0, sizeof(struct list_item$1sTypeph*));
right_value95 = (void*)0;
memset(&litem_51, 0, sizeof(struct list_item$1sTypeph*));
right_value96 = (void*)0;
memset(&litem_52, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional80=self->len==0,                        _if_conditional80) {
                            litem_50=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value94=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 156, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_50->prev=((void*)0);
                            litem_50->next=((void*)0);
                            __dec_obj28=litem_50->item;
                            litem_50->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_50;
                            self->head=litem_50;
                        }
                        else {
                            if(_if_conditional81=self->len==1,                            _if_conditional81) {
                                litem_51=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value95=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 166, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_51->prev=self->head;
                                litem_51->next=((void*)0);
                                __dec_obj29=litem_51->item;
                                litem_51->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_51;
                                self->head->next=litem_51;
                            }
                            else {
                                litem_52=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value96=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 176, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_52->prev=self->tail;
                                litem_52->next=((void*)0);
                                __dec_obj30=litem_52->item;
                                litem_52->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail->next=litem_52;
                                self->tail=litem_52;
                            }
                        }
                        self->len++;
                        __result70__ = __result_obj__ = self;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result70__;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional83;
struct tuple1$1sTypeph* __result72__;
void* right_value99;
struct tuple1$1sTypeph* result_53;
_Bool _if_conditional85;
void* right_value100;
struct sType* __dec_obj32;
struct tuple1$1sTypeph* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
right_value99 = (void*)0;
memset(&result_53, 0, sizeof(struct tuple1$1sTypeph*));
right_value100 = (void*)0;
                if(_if_conditional83=self==(void*)0,                _if_conditional83) {
                    __result72__ = __result_obj__ = (void*)0;
                    return __result72__;
                }
                result_53=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value99=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional85=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional85) {
                    __dec_obj32=result_53->v1;
                    result_53->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value100=sType_clone(self->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                __result73__ = __result_obj__ = result_53;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_53, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result73__;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional84;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional84=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional84) {
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional93;
struct list$1charph* __result74__;
void* right_value107;
void* right_value108;
struct list$1charph* result_54;
struct list_item$1charph* it_55;
_Bool _while_condtional8;
void* right_value112;
struct list$1charph* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value107 = (void*)0;
right_value108 = (void*)0;
memset(&result_54, 0, sizeof(struct list$1charph*));
memset(&it_55, 0, sizeof(struct list_item$1charph*));
right_value112 = (void*)0;
                if(_if_conditional93=self==((void*)0),                _if_conditional93) {
                    __result74__ = __result_obj__ = ((void*)0);
                    return __result74__;
                }
                result_54=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value108=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value107=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 142, "list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_55=self->head;
                while(_while_condtional8=it_55!=((void*)0),                _while_condtional8) {
                    list$1charph_add(result_54,(char*)come_increment_ref_count(((char*)(right_value112=string_clone(it_55->item)))));
                    right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    it_55=it_55->next;
                }
                __result77__ = __result_obj__ = result_54;
                come_call_finalizer2(list$1charphp_finalize,result_54, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result77__;
                come_call_finalizer2(list$1charphp_finalize,result_54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result75__ = __result_obj__ = self;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result75__;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional94;
void* right_value109;
struct list_item$1charph* litem_56;
char* __dec_obj39;
_Bool _if_conditional95;
void* right_value110;
struct list_item$1charph* litem_57;
char* __dec_obj40;
void* right_value111;
struct list_item$1charph* litem_58;
char* __dec_obj41;
struct list$1charph* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
right_value109 = (void*)0;
memset(&litem_56, 0, sizeof(struct list_item$1charph*));
right_value110 = (void*)0;
memset(&litem_57, 0, sizeof(struct list_item$1charph*));
right_value111 = (void*)0;
memset(&litem_58, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional94=self->len==0,                        _if_conditional94) {
                            litem_56=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value109=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 156, "list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_56->prev=((void*)0);
                            litem_56->next=((void*)0);
                            __dec_obj39=litem_56->item;
                            litem_56->item=(char*)come_increment_ref_count(item);
                            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_56;
                            self->head=litem_56;
                        }
                        else {
                            if(_if_conditional95=self->len==1,                            _if_conditional95) {
                                litem_57=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value110=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 166, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_57->prev=self->head;
                                litem_57->next=((void*)0);
                                __dec_obj40=litem_57->item;
                                litem_57->item=(char*)come_increment_ref_count(item);
                                __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_57;
                                self->head->next=litem_57;
                            }
                            else {
                                litem_58=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value111=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 176, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_58->prev=self->tail;
                                litem_58->next=((void*)0);
                                __dec_obj41=litem_58->item;
                                litem_58->item=(char*)come_increment_ref_count(item);
                                __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail->next=litem_58;
                                self->tail=litem_58;
                            }
                        }
                        self->len++;
                        __result76__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result76__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

int sSStringNode_sline(struct sSStringNode* self, struct sInfo* info){
void* __result_obj__;
int __result80__;
memset(&__result_obj__, 0, sizeof(void*));
    __result80__ = self->sline;
    return __result80__;
}

char* sSStringNode_sname(struct sSStringNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value120;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
right_value120 = (void*)0;
    __result81__ = __result_obj__ = ((char*)(right_value120=__builtin_string(self->sname)));
    right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result81__;
}

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info){
void* __result_obj__;
void* right_value121;
char* __dec_obj49;
struct sCharNode* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
right_value121 = (void*)0;
    self->value=value;
    self->sline=info->sline;
    __dec_obj49=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value121=__builtin_string(info->sname))));
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result82__ = __result_obj__ = self;
    come_call_finalizer2(sCharNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result82__;
    come_call_finalizer2(sCharNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sCharNode_terminated(){
void* __result_obj__;
_Bool __result83__;
memset(&__result_obj__, 0, sizeof(void*));
    __result83__ = (_Bool)0;
    return __result83__;
}

char* sCharNode_kind(){
void* __result_obj__;
void* right_value122;
char* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value122 = (void*)0;
    __result84__ = __result_obj__ = ((char*)(right_value122=__builtin_string("sCharNode")));
    right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result84__;
}

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value123;
struct CVALUE* come_value_59;
void* right_value124;
char* __dec_obj50;
void* right_value125;
void* right_value126;
struct sType* __dec_obj51;
_Bool __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value123 = (void*)0;
memset(&come_value_59, 0, sizeof(struct CVALUE*));
right_value124 = (void*)0;
right_value125 = (void*)0;
right_value126 = (void*)0;
    come_value_59=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value123=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 213, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj50=come_value_59->c_value;
    come_value_59->c_value=(char*)come_increment_ref_count(((char*)(right_value124=xsprintf("%d",self->value))));
    __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj51=come_value_59->type;
    come_value_59->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value126=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value125=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 216, "sType")))),"char",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_59->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_59));
    add_come_last_code(info,"%s;\n",come_value_59->c_value);
    __result85__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result85__;
    come_call_finalizer2(CVALUE_finalize,come_value_59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sCharNode_sline(struct sCharNode* self, struct sInfo* info){
void* __result_obj__;
int __result86__;
memset(&__result_obj__, 0, sizeof(void*));
    __result86__ = self->sline;
    return __result86__;
}

char* sCharNode_sname(struct sCharNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value127;
char* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value127 = (void*)0;
    __result87__ = __result_obj__ = ((char*)(right_value127=__builtin_string(self->sname)));
    right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result87__;
}

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, struct sInfo* info){
void* __result_obj__;
void* right_value128;
char* __dec_obj52;
struct sWCharNode* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value128 = (void*)0;
    self->value=value;
    self->sline=info->sline;
    __dec_obj52=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value128=__builtin_string(info->sname))));
    __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result88__ = __result_obj__ = self;
    come_call_finalizer2(sWCharNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result88__;
    come_call_finalizer2(sWCharNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sWCharNode_terminated(){
void* __result_obj__;
_Bool __result89__;
memset(&__result_obj__, 0, sizeof(void*));
    __result89__ = (_Bool)0;
    return __result89__;
}

char* sWCharNode_kind(){
void* __result_obj__;
void* right_value129;
char* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value129 = (void*)0;
    __result90__ = __result_obj__ = ((char*)(right_value129=__builtin_string("sWCharNode")));
    right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result90__;
}

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value130;
struct CVALUE* come_value_60;
void* right_value131;
char* __dec_obj53;
void* right_value132;
void* right_value133;
struct sType* __dec_obj54;
_Bool __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value130 = (void*)0;
memset(&come_value_60, 0, sizeof(struct CVALUE*));
right_value131 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
    come_value_60=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value130=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 265, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj53=come_value_60->c_value;
    come_value_60->c_value=(char*)come_increment_ref_count(((char*)(right_value131=xsprintf("L'%lc'",self->value))));
    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj54=come_value_60->type;
    come_value_60->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value133=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value132=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 268, "sType")))),"wchar_t",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_60->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_60));
    add_come_last_code(info,"%s;\n",come_value_60->c_value);
    __result91__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result91__;
    come_call_finalizer2(CVALUE_finalize,come_value_60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sWCharNode_sline(struct sWCharNode* self, struct sInfo* info){
void* __result_obj__;
int __result92__;
memset(&__result_obj__, 0, sizeof(void*));
    __result92__ = self->sline;
    return __result92__;
}

char* sWCharNode_sname(struct sWCharNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value134;
char* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
right_value134 = (void*)0;
    __result93__ = __result_obj__ = ((char*)(right_value134=__builtin_string(self->sname)));
    right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result93__;
}

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info){
void* __result_obj__;
unsigned int* __dec_obj55;
void* right_value135;
char* __dec_obj56;
struct sWStringNode* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
right_value135 = (void*)0;
    __dec_obj55=self->value;
    self->value=(unsigned int*)come_increment_ref_count(value);
    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->sline=sline;
    __dec_obj56=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value135=__builtin_string(info->sname))));
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result94__ = __result_obj__ = self;
    come_call_finalizer2(sWStringNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result94__;
    come_call_finalizer2(sWStringNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sWStringNode_terminated(){
void* __result_obj__;
_Bool __result95__;
memset(&__result_obj__, 0, sizeof(void*));
    __result95__ = (_Bool)0;
    return __result95__;
}

char* sWStringNode_kind(){
void* __result_obj__;
void* right_value136;
char* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value136 = (void*)0;
    __result96__ = __result_obj__ = ((char*)(right_value136=__builtin_string("sWStringNode")));
    right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result96__;
}

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value137;
struct CVALUE* come_value_61;
void* right_value138;
char* __dec_obj57;
void* right_value139;
void* right_value140;
struct sType* __dec_obj58;
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
right_value137 = (void*)0;
memset(&come_value_61, 0, sizeof(struct CVALUE*));
right_value138 = (void*)0;
right_value139 = (void*)0;
right_value140 = (void*)0;
    come_value_61=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value137=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 317, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj57=come_value_61->c_value;
    come_value_61->c_value=(char*)come_increment_ref_count(((char*)(right_value138=xsprintf("L'%ls'",self->value))));
    __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj58=come_value_61->type;
    come_value_61->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value140=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value139=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 320, "sType")))),"wchar_t*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_61->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_61));
    add_come_last_code(info,"%s;\n",come_value_61->c_value);
    __result97__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result97__;
    come_call_finalizer2(CVALUE_finalize,come_value_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sWStringNode_sline(struct sWStringNode* self, struct sInfo* info){
void* __result_obj__;
int __result98__;
memset(&__result_obj__, 0, sizeof(void*));
    __result98__ = self->sline;
    return __result98__;
}

char* sWStringNode_sname(struct sWStringNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value141;
char* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
right_value141 = (void*)0;
    __result99__ = __result_obj__ = ((char*)(right_value141=__builtin_string(self->sname)));
    right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result99__;
}

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info){
void* __result_obj__;
void* right_value142;
char* __dec_obj59;
void* right_value143;
char* __dec_obj60;
struct sRegexNode* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
right_value142 = (void*)0;
right_value143 = (void*)0;
    __dec_obj59=self->str;
    self->str=(char*)come_increment_ref_count(((char*)(right_value142=__builtin_string(str))));
    __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->global=global;
    self->ignore_case=ignore_case;
    self->sline=sline;
    __dec_obj60=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value143=__builtin_string(info->sname))));
    __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result100__ = __result_obj__ = self;
    come_call_finalizer2(sRegexNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    str = come_decrement_ref_count2(str, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result100__;
    come_call_finalizer2(sRegexNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    str = come_decrement_ref_count2(str, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sRegexNode_terminated(){
void* __result_obj__;
_Bool __result101__;
memset(&__result_obj__, 0, sizeof(void*));
    __result101__ = (_Bool)0;
    return __result101__;
}

char* sRegexNode_kind(){
void* __result_obj__;
void* right_value144;
char* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
right_value144 = (void*)0;
    __result102__ = __result_obj__ = ((char*)(right_value144=__builtin_string("sRegexNode")));
    right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result102__;
}

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value145;
struct CVALUE* come_value_62;
void* right_value146;
void* right_value147;
void* right_value148;
void* right_value149;
void* right_value150;
char* __dec_obj61;
void* right_value151;
void* right_value152;
struct sType* __dec_obj62;
void* right_value153;
char* __dec_obj63;
_Bool __result103__;
memset(&__result_obj__, 0, sizeof(void*));
right_value145 = (void*)0;
memset(&come_value_62, 0, sizeof(struct CVALUE*));
right_value146 = (void*)0;
right_value147 = (void*)0;
right_value148 = (void*)0;
right_value149 = (void*)0;
right_value150 = (void*)0;
right_value151 = (void*)0;
right_value152 = (void*)0;
right_value153 = (void*)0;
    come_value_62=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value145=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 374, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj61=come_value_62->c_value;
    come_value_62->c_value=(char*)come_increment_ref_count(((char*)(right_value150=xsprintf("charp_to_regex(\"%s\", %s, 0, %s, 0, 0, 0, 0, 0)",self->str,self->ignore_case?((char*)(right_value146=__builtin_string("1"))):((char*)(right_value147=__builtin_string("0"))),self->global?((char*)(right_value148=__builtin_string("1"))):((char*)(right_value149=__builtin_string("0")))))));
    __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj62=come_value_62->type;
    come_value_62->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value152=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value151=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 377, "sType")))),"come_regex",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_62->type->mPointerNum=1;
    come_value_62->type->mHeap=(_Bool)1;
    come_value_62->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_62));
    add_come_last_code(info,"%s;\n",come_value_62->c_value);
    __dec_obj63=come_value_62->c_value;
    come_value_62->c_value=(char*)come_increment_ref_count(((char*)(right_value153=append_object_to_right_values(come_value_62->c_value,(struct sType*)come_increment_ref_count(come_value_62->type),info))));
    __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result103__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result103__;
    come_call_finalizer2(CVALUE_finalize,come_value_62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sRegexNode_sline(struct sRegexNode* self, struct sInfo* info){
void* __result_obj__;
int __result104__;
memset(&__result_obj__, 0, sizeof(void*));
    __result104__ = self->sline;
    return __result104__;
}

char* sRegexNode_sname(struct sRegexNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value154;
char* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value154 = (void*)0;
    __result105__ = __result_obj__ = ((char*)(right_value154=__builtin_string(self->sname)));
    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result105__;
}

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info){
void* __result_obj__;
struct list$1sNodeph* __dec_obj64;
void* right_value155;
char* __dec_obj65;
struct sListNode* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
right_value155 = (void*)0;
    __dec_obj64=self->list_elements;
    self->list_elements=(struct list$1sNodeph*)come_increment_ref_count(list_elements);
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    self->sline=info->sline;
    __dec_obj65=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value155=__builtin_string(info->sname))));
    __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result106__ = __result_obj__ = self;
    come_call_finalizer2(sListNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,list_elements, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result106__;
    come_call_finalizer2(sListNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,list_elements, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sListNode_terminated(){
void* __result_obj__;
_Bool __result107__;
memset(&__result_obj__, 0, sizeof(void*));
    __result107__ = (_Bool)0;
    return __result107__;
}

char* sListNode_kind(){
void* __result_obj__;
void* right_value156;
char* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
right_value156 = (void*)0;
    __result108__ = __result_obj__ = ((char*)(right_value156=__builtin_string("sListNode")));
    right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result108__;
}

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info){
void* __result_obj__;
struct list$1sNodeph* list_elements_63;
void* right_value157;
void* right_value158;
struct list$1CVALUEph* params_66;
struct sType* list_element_type_67;
struct list$1sNodeph* o2_saved_68;
struct sNode* it_69;
_Bool _if_conditional144;
_Bool __result110__;
void* right_value159;
struct CVALUE* come_value_70;
_Bool _if_conditional145;
void* right_value160;
void* right_value161;
struct sType* __dec_obj66;
void* right_value162;
struct sType* type_values_71;
void* right_value166;
static int list_value_num_75=0;
void* right_value167;
char* var_name_76;
void* right_value168;
struct sVar* var__77;
void* right_value169;
void* right_value170;
void* right_value171;
struct buffer* source_78;
int i_79;
struct list$1CVALUEph* o2_saved_80;
struct CVALUE* it_83;
_Bool _if_conditional153;
void* right_value172;
void* right_value173;
void* right_value174;
void* right_value175;
void* right_value176;
struct sType* list_type_89;
void* right_value180;
void* right_value181;
struct sType* obj_type_93;
char* fun_name_94;
void* right_value182;
void* right_value183;
void* right_value184;
char* generics_fun_name_95;
struct sFun* fun_96;
_Bool _if_conditional158;
void* right_value185;
void* right_value186;
char* __dec_obj73;
_Bool _if_conditional159;
_Bool __result124__;
void* right_value187;
struct sType* result_type_97;
struct sType* type_98;
void* right_value188;
struct CVALUE* obj_value_99;
void* right_value189;
void* right_value190;
struct buffer* num_string_100;
void* right_value191;
struct sType* type2_101;
void* right_value192;
char* type_name_102;
void* right_value193;
void* right_value194;
char* __dec_obj74;
void* right_value195;
struct sType* type3_103;
void* right_value196;
struct sType* __dec_obj75;
void* right_value197;
char* __dec_obj76;
void* right_value198;
void* right_value199;
struct list$1CVALUEph* come_params_104;
_Bool _if_conditional162;
void* right_value200;
struct CVALUE* come_value2_108;
void* right_value201;
char* __dec_obj77;
struct sType* __dec_obj78;
void* right_value202;
struct CVALUE* come_value3_109;
void* right_value203;
char* __dec_obj79;
struct sType* __dec_obj80;
void* right_value204;
void* right_value205;
struct buffer* buf_110;
int j_111;
struct list$1CVALUEph* o2_saved_112;
struct CVALUE* it_113;
_Bool _if_conditional163;
void* right_value206;
struct CVALUE* come_value4_114;
void* right_value207;
char* __dec_obj81;
_Bool _if_conditional164;
void* right_value208;
void* right_value209;
char* __dec_obj82;
void* right_value210;
struct sType* __dec_obj83;
void* right_value211;
_Bool __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&list_elements_63, 0, sizeof(struct list$1sNodeph*));
right_value157 = (void*)0;
right_value158 = (void*)0;
memset(&params_66, 0, sizeof(struct list$1CVALUEph*));
memset(&list_element_type_67, 0, sizeof(struct sType*));
memset(&o2_saved_68, 0, sizeof(struct list$1sNodeph*));
memset(&it_69, 0, sizeof(struct sNode*));
right_value159 = (void*)0;
memset(&come_value_70, 0, sizeof(struct CVALUE*));
right_value160 = (void*)0;
right_value161 = (void*)0;
right_value162 = (void*)0;
memset(&type_values_71, 0, sizeof(struct sType*));
right_value166 = (void*)0;
right_value167 = (void*)0;
memset(&var_name_76, 0, sizeof(char*));
right_value168 = (void*)0;
memset(&var__77, 0, sizeof(struct sVar*));
right_value169 = (void*)0;
right_value170 = (void*)0;
right_value171 = (void*)0;
memset(&source_78, 0, sizeof(struct buffer*));
memset(&i_79, 0, sizeof(int));
memset(&o2_saved_80, 0, sizeof(struct list$1CVALUEph*));
memset(&it_83, 0, sizeof(struct CVALUE*));
right_value172 = (void*)0;
right_value173 = (void*)0;
right_value174 = (void*)0;
right_value175 = (void*)0;
right_value176 = (void*)0;
memset(&list_type_89, 0, sizeof(struct sType*));
right_value180 = (void*)0;
right_value181 = (void*)0;
memset(&obj_type_93, 0, sizeof(struct sType*));
memset(&fun_name_94, 0, sizeof(char*));
right_value182 = (void*)0;
right_value183 = (void*)0;
right_value184 = (void*)0;
memset(&generics_fun_name_95, 0, sizeof(char*));
memset(&fun_96, 0, sizeof(struct sFun*));
right_value185 = (void*)0;
right_value186 = (void*)0;
right_value187 = (void*)0;
memset(&result_type_97, 0, sizeof(struct sType*));
memset(&type_98, 0, sizeof(struct sType*));
right_value188 = (void*)0;
memset(&obj_value_99, 0, sizeof(struct CVALUE*));
right_value189 = (void*)0;
right_value190 = (void*)0;
memset(&num_string_100, 0, sizeof(struct buffer*));
right_value191 = (void*)0;
memset(&type2_101, 0, sizeof(struct sType*));
right_value192 = (void*)0;
memset(&type_name_102, 0, sizeof(char*));
right_value193 = (void*)0;
right_value194 = (void*)0;
right_value195 = (void*)0;
memset(&type3_103, 0, sizeof(struct sType*));
right_value196 = (void*)0;
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
memset(&come_params_104, 0, sizeof(struct list$1CVALUEph*));
right_value200 = (void*)0;
memset(&come_value2_108, 0, sizeof(struct CVALUE*));
right_value201 = (void*)0;
right_value202 = (void*)0;
memset(&come_value3_109, 0, sizeof(struct CVALUE*));
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value205 = (void*)0;
memset(&buf_110, 0, sizeof(struct buffer*));
memset(&j_111, 0, sizeof(int));
memset(&o2_saved_112, 0, sizeof(struct list$1CVALUEph*));
memset(&it_113, 0, sizeof(struct CVALUE*));
right_value206 = (void*)0;
memset(&come_value4_114, 0, sizeof(struct CVALUE*));
right_value207 = (void*)0;
right_value208 = (void*)0;
right_value209 = (void*)0;
right_value210 = (void*)0;
right_value211 = (void*)0;
    list_elements_63=self->list_elements;
    params_66=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value158=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value157=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 432, "list$1CVALUEph"))))))));
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    list_element_type_67=((void*)0);
    for(    o2_saved_68=(list_elements_63),it_69=list$1sNodeph_begin((o2_saved_68));    !list$1sNodeph_end((o2_saved_68));    it_69=list$1sNodeph_next((o2_saved_68))    ){
        if(_if_conditional144=!node_compile(it_69,info),        _if_conditional144) {
            __result110__ = (_Bool)0;
            come_call_finalizer2(list$1CVALUEphp_finalize,params_66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,list_element_type_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result110__;
        }
        come_value_70=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value159=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        if(list_element_type_67) {
            check_assign_type(((char*)(right_value160=xsprintf("invalid list element type"))),list_element_type_67,come_value_70->type,come_value_70,(_Bool)0,(_Bool)1,info);
            right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        list$1CVALUEph_push_back(params_66,(struct CVALUE*)come_increment_ref_count(come_value_70));
        __dec_obj66=list_element_type_67;
        list_element_type_67=(struct sType*)come_increment_ref_count(((struct sType*)(right_value161=sType_clone(come_value_70->type))));
        come_call_finalizer2(sType_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(CVALUE_finalize,come_value_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    type_values_71=(struct sType*)come_increment_ref_count(((struct sType*)(right_value162=sType_clone(list_element_type_67))));
    come_call_finalizer2(sType_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    list$1sNodeph_push_back(type_values_71->mArrayNum,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value166=create_int_node(list$1CVALUEph_length(params_66),info)))));
    if(right_value166) { right_value166 = come_decrement_ref_count2(right_value166, ((struct sNode*)right_value166)->finalize, ((struct sNode*)right_value166)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    type_values_71->mHeap=(_Bool)0;
    var_name_76=(char*)come_increment_ref_count(((char*)(right_value167=xsprintf("__list_values%d__",++list_value_num_75))));
    right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_variable_to_table(var_name_76,(struct sType*)come_increment_ref_count(((struct sType*)(right_value168=sType_clone(type_values_71)))),info);
    come_call_finalizer2(sType_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    var__77=get_variable_from_table(info->lv_table,var_name_76);
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value169=make_define_var(type_values_71,var__77->mCValueName,(_Bool)0,info))));
    right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    source_78=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value171=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value170=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 465, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append_str(source_78,"{");
    i_79=0;
    for(    o2_saved_80=(struct list$1CVALUEph*)come_increment_ref_count((params_66)),it_83=list$1CVALUEph_begin((o2_saved_80));    !list$1CVALUEph_end((o2_saved_80));    it_83=list$1CVALUEph_next((o2_saved_80))    ){
        if(list_element_type_67->mHeap) {
            buffer_append_str(source_78,((char*)(right_value172=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",var__77->mCValueName,i_79,list$1CVALUEphp_operator_load_element(params_66,i_79)->c_value))));
            right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            buffer_append_str(source_78,((char*)(right_value173=xsprintf("%s[%d]=%s;\n",var__77->mCValueName,i_79,list$1CVALUEphp_operator_load_element(params_66,i_79)->c_value))));
            right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        i_79++;
    }
    come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    buffer_append_str(source_78,"}");
    add_come_code(info,"%s",((char*)(right_value174=buffer_to_string(source_78))));
    right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    list_type_89=(struct sType*)come_increment_ref_count(((struct sType*)(right_value176=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value175=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 484, "sType")))),"list",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    list$1sTypeph_push_back(list_type_89->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value180=sType_clone(list_element_type_67)))));
    come_call_finalizer2(sType_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    obj_type_93=(struct sType*)come_increment_ref_count(((struct sType*)(right_value181=sType_clone(list_type_89))));
    come_call_finalizer2(sType_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    fun_name_94="initialize_with_values";
    generics_fun_name_95=(char*)come_increment_ref_count(((char*)(right_value184=string_to_string(((char*)(right_value183=make_generics_function(obj_type_93,(char*)come_increment_ref_count(((char*)(right_value182=__builtin_string(fun_name_94)))),info,(_Bool)1)))))));
    right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    fun_96=map$2charphsFunph_at(info->funcs,generics_fun_name_95,((void*)0));
    if(_if_conditional158=fun_96==((void*)0),    _if_conditional158) {
        __dec_obj73=generics_fun_name_95;
        generics_fun_name_95=(char*)come_increment_ref_count(((char*)(right_value186=create_method_name(obj_type_93,(_Bool)0,((char*)(right_value185=__builtin_string(fun_name_94))),info,(_Bool)1))));
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_96=map$2charphsFunph_at(info->funcs,generics_fun_name_95,((void*)0));
        if(_if_conditional159=fun_96==((void*)0),        _if_conditional159) {
            err_msg(info,"function not found(%s) at method(%s)(1)\n",generics_fun_name_95,info->come_fun->mName);
            __result124__ = (_Bool)1;
            come_call_finalizer2(list$1CVALUEphp_finalize,params_66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,list_element_type_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type_values_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            var_name_76 = come_decrement_ref_count2(var_name_76, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,source_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,list_type_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,obj_type_93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            generics_fun_name_95 = come_decrement_ref_count2(generics_fun_name_95, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result124__;
        }
    }
    result_type_97=(struct sType*)come_increment_ref_count(((struct sType*)(right_value187=sType_clone(fun_96->mResultType))));
    come_call_finalizer2(sType_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_type_97->mStatic=(_Bool)0;
    type_98=list_type_89;
    obj_value_99=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value188=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 510, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    num_string_100=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value190=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value189=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 512, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append_str(num_string_100,"1");
    type2_101=(struct sType*)come_increment_ref_count(((struct sType*)(right_value191=solve_generics(type_98,type_98,info))));
    come_call_finalizer2(sType_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type_name_102=(char*)come_increment_ref_count(((char*)(right_value192=make_type_name_string(type2_101,(_Bool)0,(_Bool)1,(_Bool)0,info))));
    right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj74=obj_value_99->c_value;
    obj_value_99->c_value=(char*)come_increment_ref_count(((char*)(right_value194=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_102,type_name_102,((char*)(right_value193=buffer_to_string(num_string_100))),info->sname,info->sline,type_name_102))));
    __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type3_103=(struct sType*)come_increment_ref_count(((struct sType*)(right_value195=sType_clone(type2_101))));
    come_call_finalizer2(sType_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type3_103->mPointerNum++;
    type3_103->mHeap=(_Bool)1;
    type2_101->mHeap=(_Bool)1;
    __dec_obj75=obj_value_99->type;
    obj_value_99->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value196=sType_clone(type2_101))));
    come_call_finalizer2(sType_finalize,__dec_obj75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj76=obj_value_99->c_value;
    obj_value_99->c_value=(char*)come_increment_ref_count(((char*)(right_value197=append_object_to_right_values(obj_value_99->c_value,(struct sType*)come_increment_ref_count(type3_103),info))));
    __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    obj_value_99->type->mPointerNum++;
    obj_value_99->var=((void*)0);
    come_params_104=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value199=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value198=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 531, "list$1CVALUEph"))))))));
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional162=list$1sTypephp_operator_load_element(fun_96->mParamTypes,0)->mHeap&&obj_value_99->type->mHeap,    _if_conditional162) {
        std_move(list$1sTypephp_operator_load_element(fun_96->mParamTypes,0),obj_value_99->type,obj_value_99,info);
    }
    list$1CVALUEph_push_back(come_params_104,(struct CVALUE*)come_increment_ref_count(obj_value_99));
    come_value2_108=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value200=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 538, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj77=come_value2_108->c_value;
    come_value2_108->c_value=(char*)come_increment_ref_count(((char*)(right_value201=xsprintf("%d",list$1CVALUEph_length(params_66)))));
    __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj78=come_value2_108->type;
    come_value2_108->type=((void*)0);
    come_call_finalizer2(sType_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_value2_108->var=((void*)0);
    list$1CVALUEph_push_back(come_params_104,(struct CVALUE*)come_increment_ref_count(come_value2_108));
    come_value3_109=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value202=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 546, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj79=come_value3_109->c_value;
    come_value3_109->c_value=(char*)come_increment_ref_count(((char*)(right_value203=xsprintf("%s",var__77->mCValueName))));
    __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj80=come_value3_109->type;
    come_value3_109->type=((void*)0);
    come_call_finalizer2(sType_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_value3_109->var=((void*)0);
    list$1CVALUEph_push_back(come_params_104,(struct CVALUE*)come_increment_ref_count(come_value3_109));
    buf_110=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value205=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value204=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 554, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append_str(buf_110,generics_fun_name_95);
    buffer_append_str(buf_110,"(");
    j_111=0;
    for(    o2_saved_112=(struct list$1CVALUEph*)come_increment_ref_count((come_params_104)),it_113=list$1CVALUEph_begin((o2_saved_112));    !list$1CVALUEph_end((o2_saved_112));    it_113=list$1CVALUEph_next((o2_saved_112))    ){
        buffer_append_str(buf_110,it_113->c_value);
        if(_if_conditional163=j_111!=list$1CVALUEph_length(come_params_104)-1,        _if_conditional163) {
            buffer_append_str(buf_110,",");
        }
        j_111++;
    }
    come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_110,")");
    come_value4_114=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value206=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 571, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj81=come_value4_114->c_value;
    come_value4_114->c_value=(char*)come_increment_ref_count(((char*)(right_value207=buffer_to_string(buf_110))));
    __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(result_type_97->mHeap) {
        __dec_obj82=come_value4_114->c_value;
        come_value4_114->c_value=(char*)come_increment_ref_count(((char*)(right_value209=append_object_to_right_values(((char*)(right_value208=buffer_to_string(buf_110))),(struct sType*)come_increment_ref_count(result_type_97),info))));
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __dec_obj83=come_value4_114->type;
    come_value4_114->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value210=sType_clone(result_type_97))));
    come_call_finalizer2(sType_finalize,__dec_obj83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value4_114->type->mStatic=(_Bool)0;
    come_value4_114->var=((void*)0);
    add_come_last_code(info,"%s;\n",((char*)(right_value211=buffer_to_string(buf_110))));
    right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value4_114));
    __result127__ = (_Bool)1;
    come_call_finalizer2(list$1CVALUEphp_finalize,params_66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,list_element_type_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_values_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_76 = come_decrement_ref_count2(var_name_76, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,source_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,list_type_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,obj_type_93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    generics_fun_name_95 = come_decrement_ref_count2(generics_fun_name_95, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,obj_value_99, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,num_string_100, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_102 = come_decrement_ref_count2(type_name_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type3_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,come_params_104, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value3_109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value4_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result127__;
    come_call_finalizer2(list$1CVALUEphp_finalize,params_66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,list_element_type_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_values_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_76 = come_decrement_ref_count2(var_name_76, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,source_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,list_type_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,obj_type_93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    generics_fun_name_95 = come_decrement_ref_count2(generics_fun_name_95, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,obj_value_99, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,num_string_100, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_102 = come_decrement_ref_count2(type_name_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type3_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,come_params_104, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value3_109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value4_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result109__ = __result_obj__ = self;
        come_call_finalizer2(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result109__;
        come_call_finalizer2(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_64;
_Bool _while_condtional9;
struct list_item$1CVALUEph* prev_it_65;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_64, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_65, 0, sizeof(struct list_item$1CVALUEph*));
            it_64=self->head;
            while(_while_condtional9=it_64!=((void*)0),            _while_condtional9) {
                prev_it_65=it_64;
                it_64=it_64->next;
                come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional146;
void* right_value163;
struct list_item$1sNodeph* litem_72;
struct sNode* __dec_obj67;
_Bool _if_conditional147;
void* right_value164;
struct list_item$1sNodeph* litem_73;
struct sNode* __dec_obj68;
void* right_value165;
struct list_item$1sNodeph* litem_74;
struct sNode* __dec_obj69;
struct list$1sNodeph* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value163 = (void*)0;
memset(&litem_72, 0, sizeof(struct list_item$1sNodeph*));
right_value164 = (void*)0;
memset(&litem_73, 0, sizeof(struct list_item$1sNodeph*));
right_value165 = (void*)0;
memset(&litem_74, 0, sizeof(struct list_item$1sNodeph*));
        if(_if_conditional146=self->len==0,        _if_conditional146) {
            litem_72=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value163=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 226, "list_item$1sNodeph"))));
            come_call_finalizer2(list_item$1sNodephp_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            litem_72->prev=((void*)0);
            litem_72->next=((void*)0);
            __dec_obj67=litem_72->item;
            litem_72->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count2(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail=litem_72;
            self->head=litem_72;
        }
        else {
            if(_if_conditional147=self->len==1,            _if_conditional147) {
                litem_73=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value164=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 236, "list_item$1sNodeph"))));
                come_call_finalizer2(list_item$1sNodephp_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_73->prev=self->head;
                litem_73->next=((void*)0);
                __dec_obj68=litem_73->item;
                litem_73->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); }
                self->tail=litem_73;
                self->head->next=litem_73;
            }
            else {
                litem_74=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value165=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 246, "list_item$1sNodeph"))));
                come_call_finalizer2(list_item$1sNodephp_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_74->prev=self->tail;
                litem_74->next=((void*)0);
                __dec_obj69=litem_74->item;
                litem_74->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); }
                self->tail->next=litem_74;
                self->tail=litem_74;
            }
        }
        self->len++;
        __result111__ = __result_obj__ = self;
        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result111__;
        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional148;
int __result112__;
int __result113__;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional148=self==((void*)0),        _if_conditional148) {
            __result112__ = 0;
            return __result112__;
        }
        __result113__ = self->len;
        return __result113__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional149;
struct CVALUE* result_81;
struct CVALUE* __result114__;
_Bool _if_conditional150;
struct CVALUE* __result115__;
struct CVALUE* result_82;
struct CVALUE* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_81, 0, sizeof(struct CVALUE*));
memset(&result_82, 0, sizeof(struct CVALUE*));
        if(_if_conditional149=self==((void*)0),        _if_conditional149) {
            memset(&result_81,0,sizeof(struct CVALUE*));
            __result114__ = __result_obj__ = result_81;
            return __result114__;
        }
        self->it=self->head;
        if(self->it) {
            __result115__ = __result_obj__ = self->it->item;
            return __result115__;
        }
        memset(&result_82,0,sizeof(struct CVALUE*));
        __result116__ = __result_obj__ = result_82;
        return __result116__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __result117__;
memset(&__result_obj__, 0, sizeof(void*));
        __result117__ = self==((void*)0)||self->it==((void*)0);
        return __result117__;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional151;
struct CVALUE* result_84;
struct CVALUE* __result118__;
_Bool _if_conditional152;
struct CVALUE* __result119__;
struct CVALUE* result_85;
struct CVALUE* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_84, 0, sizeof(struct CVALUE*));
memset(&result_85, 0, sizeof(struct CVALUE*));
        if(_if_conditional151=self==((void*)0)||self->it==((void*)0),        _if_conditional151) {
            memset(&result_84,0,sizeof(struct CVALUE*));
            __result118__ = __result_obj__ = result_84;
            return __result118__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result119__ = __result_obj__ = self->it->item;
            return __result119__;
        }
        memset(&result_85,0,sizeof(struct CVALUE*));
        __result120__ = __result_obj__ = result_85;
        return __result120__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool _if_conditional154;
struct list_item$1CVALUEph* it_86;
int i_87;
_Bool _while_condtional10;
_Bool _if_conditional155;
struct CVALUE* __result121__;
struct CVALUE* default_value_88;
struct CVALUE* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_86, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_87, 0, sizeof(int));
memset(&default_value_88, 0, sizeof(struct CVALUE*));
                if(_if_conditional154=position<0,                _if_conditional154) {
                    position+=self->len;
                }
                it_86=self->head;
                i_87=0;
                while(_while_condtional10=it_86!=((void*)0),                _while_condtional10) {
                    if(_if_conditional155=position==i_87,                    _if_conditional155) {
                        __result121__ = __result_obj__ = it_86->item;
                        return __result121__;
                    }
                    it_86=it_86->next;
                    i_87++;
                }
                memset(&default_value_88,0,sizeof(struct CVALUE*));
                __result122__ = __result_obj__ = default_value_88;
                come_call_finalizer2(CVALUE_finalize,default_value_88, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result122__;
                come_call_finalizer2(CVALUE_finalize,default_value_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional156;
void* right_value177;
struct list_item$1sTypeph* litem_90;
struct sType* __dec_obj70;
_Bool _if_conditional157;
void* right_value178;
struct list_item$1sTypeph* litem_91;
struct sType* __dec_obj71;
void* right_value179;
struct list_item$1sTypeph* litem_92;
struct sType* __dec_obj72;
struct list$1sTypeph* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value177 = (void*)0;
memset(&litem_90, 0, sizeof(struct list_item$1sTypeph*));
right_value178 = (void*)0;
memset(&litem_91, 0, sizeof(struct list_item$1sTypeph*));
right_value179 = (void*)0;
memset(&litem_92, 0, sizeof(struct list_item$1sTypeph*));
        if(_if_conditional156=self->len==0,        _if_conditional156) {
            litem_90=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value177=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 226, "list_item$1sTypeph"))));
            come_call_finalizer2(list_item$1sTypephp_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            litem_90->prev=((void*)0);
            litem_90->next=((void*)0);
            __dec_obj70=litem_90->item;
            litem_90->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer2(sType_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            self->tail=litem_90;
            self->head=litem_90;
        }
        else {
            if(_if_conditional157=self->len==1,            _if_conditional157) {
                litem_91=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value178=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 236, "list_item$1sTypeph"))));
                come_call_finalizer2(list_item$1sTypephp_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_91->prev=self->head;
                litem_91->next=((void*)0);
                __dec_obj71=litem_91->item;
                litem_91->item=(struct sType*)come_increment_ref_count(item);
                come_call_finalizer2(sType_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_91;
                self->head->next=litem_91;
            }
            else {
                litem_92=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value179=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 246, "list_item$1sTypeph"))));
                come_call_finalizer2(list_item$1sTypephp_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_92->prev=self->tail;
                litem_92->next=((void*)0);
                __dec_obj72=litem_92->item;
                litem_92->item=(struct sType*)come_increment_ref_count(item);
                come_call_finalizer2(sType_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail->next=litem_92;
                self->tail=litem_92;
            }
        }
        self->len++;
        __result123__ = __result_obj__ = self;
        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result123__;
        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional160;
struct list_item$1sTypeph* it_105;
int i_106;
_Bool _while_condtional11;
_Bool _if_conditional161;
struct sType* __result125__;
struct sType* default_value_107;
struct sType* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_105, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_106, 0, sizeof(int));
memset(&default_value_107, 0, sizeof(struct sType*));
        if(_if_conditional160=position<0,        _if_conditional160) {
            position+=self->len;
        }
        it_105=self->head;
        i_106=0;
        while(_while_condtional11=it_105!=((void*)0),        _while_condtional11) {
            if(_if_conditional161=position==i_106,            _if_conditional161) {
                __result125__ = __result_obj__ = it_105->item;
                return __result125__;
            }
            it_105=it_105->next;
            i_106++;
        }
        memset(&default_value_107,0,sizeof(struct sType*));
        __result126__ = __result_obj__ = default_value_107;
        come_call_finalizer2(sType_finalize,default_value_107, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result126__;
        come_call_finalizer2(sType_finalize,default_value_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sListNode_sline(struct sListNode* self, struct sInfo* info){
void* __result_obj__;
int __result128__;
memset(&__result_obj__, 0, sizeof(void*));
    __result128__ = self->sline;
    return __result128__;
}

char* sListNode_sname(struct sListNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value212;
char* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
right_value212 = (void*)0;
    __result129__ = __result_obj__ = ((char*)(right_value212=__builtin_string(self->sname)));
    right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result129__;
}

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
void* __result_obj__;
struct list$1sNodeph* __dec_obj84;
void* right_value213;
char* __dec_obj85;
struct sTupleNode* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
right_value213 = (void*)0;
    __dec_obj84=self->tuple_elements;
    self->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    self->sline=info->sline;
    __dec_obj85=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value213=__builtin_string(info->sname))));
    __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result130__ = __result_obj__ = self;
    come_call_finalizer2(sTupleNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,tuple_elements, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result130__;
    come_call_finalizer2(sTupleNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,tuple_elements, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sTupleNode_terminated(){
void* __result_obj__;
_Bool __result131__;
memset(&__result_obj__, 0, sizeof(void*));
    __result131__ = (_Bool)0;
    return __result131__;
}

char* sTupleNode_kind(){
void* __result_obj__;
void* right_value214;
char* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
right_value214 = (void*)0;
    __result132__ = __result_obj__ = ((char*)(right_value214=__builtin_string("sTupleNode")));
    right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result132__;
}

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info){
void* __result_obj__;
struct list$1sNodeph* tuple_elements_115;
void* right_value215;
void* right_value216;
struct list$1sTypeph* tuple_types_116;
void* right_value217;
void* right_value218;
struct list$1CVALUEph* tuple_values_117;
struct list$1sNodeph* o2_saved_118;
struct sNode* it_119;
_Bool _if_conditional167;
_Bool __result133__;
void* right_value219;
struct CVALUE* come_value_120;
void* right_value223;
void* right_value224;
void* right_value225;
void* right_value226;
void* right_value227;
struct sType* type_122;
struct list$1sTypeph* o2_saved_123;
struct sType* it_126;
void* right_value228;
void* right_value229;
struct CVALUE* obj_value_129;
void* right_value230;
void* right_value231;
struct buffer* num_string_130;
void* right_value232;
struct sType* type2_131;
void* right_value233;
char* type_name_132;
void* right_value234;
void* right_value235;
char* __dec_obj88;
void* right_value236;
struct sType* type3_133;
void* right_value237;
struct sType* __dec_obj89;
void* right_value238;
char* __dec_obj90;
void* right_value239;
struct sType* obj_type_134;
char* fun_name_135;
void* right_value240;
void* right_value241;
void* right_value242;
char* generics_fun_name_136;
struct sFun* fun_137;
_Bool _if_conditional176;
void* right_value243;
void* right_value244;
char* __dec_obj91;
_Bool _if_conditional177;
_Bool __result143__;
void* right_value245;
struct sType* result_type_138;
void* right_value246;
void* right_value247;
struct list$1CVALUEph* come_params_139;
_Bool _if_conditional178;
int i_140;
struct list$1CVALUEph* o2_saved_141;
struct CVALUE* it_142;
void* right_value248;
struct CVALUE* come_value_143;
_Bool _if_conditional179;
void* right_value249;
void* right_value250;
struct buffer* buf_144;
int j_145;
struct list$1CVALUEph* o2_saved_146;
struct CVALUE* it_147;
_Bool _if_conditional180;
void* right_value251;
struct CVALUE* come_value2_148;
void* right_value252;
char* __dec_obj92;
_Bool _if_conditional181;
void* right_value253;
void* right_value254;
char* __dec_obj93;
void* right_value255;
struct sType* __dec_obj94;
void* right_value256;
_Bool __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tuple_elements_115, 0, sizeof(struct list$1sNodeph*));
right_value215 = (void*)0;
right_value216 = (void*)0;
memset(&tuple_types_116, 0, sizeof(struct list$1sTypeph*));
right_value217 = (void*)0;
right_value218 = (void*)0;
memset(&tuple_values_117, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_118, 0, sizeof(struct list$1sNodeph*));
memset(&it_119, 0, sizeof(struct sNode*));
right_value219 = (void*)0;
memset(&come_value_120, 0, sizeof(struct CVALUE*));
right_value223 = (void*)0;
right_value224 = (void*)0;
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
memset(&type_122, 0, sizeof(struct sType*));
memset(&o2_saved_123, 0, sizeof(struct list$1sTypeph*));
memset(&it_126, 0, sizeof(struct sType*));
right_value228 = (void*)0;
right_value229 = (void*)0;
memset(&obj_value_129, 0, sizeof(struct CVALUE*));
right_value230 = (void*)0;
right_value231 = (void*)0;
memset(&num_string_130, 0, sizeof(struct buffer*));
right_value232 = (void*)0;
memset(&type2_131, 0, sizeof(struct sType*));
right_value233 = (void*)0;
memset(&type_name_132, 0, sizeof(char*));
right_value234 = (void*)0;
right_value235 = (void*)0;
right_value236 = (void*)0;
memset(&type3_133, 0, sizeof(struct sType*));
right_value237 = (void*)0;
right_value238 = (void*)0;
right_value239 = (void*)0;
memset(&obj_type_134, 0, sizeof(struct sType*));
memset(&fun_name_135, 0, sizeof(char*));
right_value240 = (void*)0;
right_value241 = (void*)0;
right_value242 = (void*)0;
memset(&generics_fun_name_136, 0, sizeof(char*));
memset(&fun_137, 0, sizeof(struct sFun*));
right_value243 = (void*)0;
right_value244 = (void*)0;
right_value245 = (void*)0;
memset(&result_type_138, 0, sizeof(struct sType*));
right_value246 = (void*)0;
right_value247 = (void*)0;
memset(&come_params_139, 0, sizeof(struct list$1CVALUEph*));
memset(&i_140, 0, sizeof(int));
memset(&o2_saved_141, 0, sizeof(struct list$1CVALUEph*));
memset(&it_142, 0, sizeof(struct CVALUE*));
right_value248 = (void*)0;
memset(&come_value_143, 0, sizeof(struct CVALUE*));
right_value249 = (void*)0;
right_value250 = (void*)0;
memset(&buf_144, 0, sizeof(struct buffer*));
memset(&j_145, 0, sizeof(int));
memset(&o2_saved_146, 0, sizeof(struct list$1CVALUEph*));
memset(&it_147, 0, sizeof(struct CVALUE*));
right_value251 = (void*)0;
memset(&come_value2_148, 0, sizeof(struct CVALUE*));
right_value252 = (void*)0;
right_value253 = (void*)0;
right_value254 = (void*)0;
right_value255 = (void*)0;
right_value256 = (void*)0;
    tuple_elements_115=self->tuple_elements;
    tuple_types_116=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value216=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value215=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 630, "list$1sTypeph"))))))));
    come_call_finalizer2(list$1sTypephp_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    tuple_values_117=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value218=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value217=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 631, "list$1CVALUEph"))))))));
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(    o2_saved_118=(tuple_elements_115),it_119=list$1sNodeph_begin((o2_saved_118));    !list$1sNodeph_end((o2_saved_118));    it_119=list$1sNodeph_next((o2_saved_118))    ){
        if(_if_conditional167=!node_compile(it_119,info),        _if_conditional167) {
            __result133__ = (_Bool)0;
            come_call_finalizer2(list$1sTypephp_finalize,tuple_types_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,tuple_values_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result133__;
        }
        come_value_120=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value219=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(tuple_values_117,(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value223=CVALUE_clone(come_value_120)))));
        come_call_finalizer2(CVALUE_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1sTypeph_push_back(tuple_types_116,(struct sType*)come_increment_ref_count(((struct sType*)(right_value224=sType_clone(come_value_120->type)))));
        come_call_finalizer2(sType_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(CVALUE_finalize,come_value_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    type_122=(struct sType*)come_increment_ref_count(((struct sType*)(right_value227=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value225=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 645, "sType")))),((char*)(right_value226=xsprintf("tuple%d",list$1sTypeph_length(tuple_types_116)))),(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(    o2_saved_123=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_116)),it_126=list$1sTypeph_begin((o2_saved_123));    !list$1sTypeph_end((o2_saved_123));    it_126=list$1sTypeph_next((o2_saved_123))    ){
        list$1sTypeph_push_back(type_122->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value228=sType_clone(it_126)))));
        come_call_finalizer2(sType_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    come_call_finalizer2(list$1sTypephp_finalize,o2_saved_123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    obj_value_129=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value229=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 651, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    num_string_130=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value231=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value230=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 653, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append_str(num_string_130,"1");
    type2_131=(struct sType*)come_increment_ref_count(((struct sType*)(right_value232=solve_generics(type_122,type_122,info))));
    come_call_finalizer2(sType_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type_name_132=(char*)come_increment_ref_count(((char*)(right_value233=make_type_name_string(type2_131,(_Bool)0,(_Bool)1,(_Bool)0,info))));
    right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj88=obj_value_129->c_value;
    obj_value_129->c_value=(char*)come_increment_ref_count(((char*)(right_value235=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_132,type_name_132,((char*)(right_value234=buffer_to_string(num_string_130))),info->sname,info->sline,type_name_132))));
    __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type3_133=(struct sType*)come_increment_ref_count(((struct sType*)(right_value236=sType_clone(type2_131))));
    come_call_finalizer2(sType_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type3_133->mPointerNum++;
    type3_133->mHeap=(_Bool)1;
    type2_131->mHeap=(_Bool)1;
    __dec_obj89=obj_value_129->type;
    obj_value_129->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value237=sType_clone(type2_131))));
    come_call_finalizer2(sType_finalize,__dec_obj89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj90=obj_value_129->c_value;
    obj_value_129->c_value=(char*)come_increment_ref_count(((char*)(right_value238=append_object_to_right_values(obj_value_129->c_value,(struct sType*)come_increment_ref_count(type3_133),info))));
    __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    obj_value_129->type->mPointerNum++;
    obj_value_129->var=((void*)0);
    obj_type_134=(struct sType*)come_increment_ref_count(((struct sType*)(right_value239=sType_clone(type2_131))));
    come_call_finalizer2(sType_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    fun_name_135="initialize";
    generics_fun_name_136=(char*)come_increment_ref_count(((char*)(right_value242=string_to_string(((char*)(right_value241=make_generics_function(obj_type_134,(char*)come_increment_ref_count(((char*)(right_value240=__builtin_string(fun_name_135)))),info,(_Bool)1)))))));
    right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    fun_137=map$2charphsFunph_at(info->funcs,generics_fun_name_136,((void*)0));
    if(_if_conditional176=fun_137==((void*)0),    _if_conditional176) {
        __dec_obj91=generics_fun_name_136;
        generics_fun_name_136=(char*)come_increment_ref_count(((char*)(right_value244=create_method_name(obj_type_134,(_Bool)0,((char*)(right_value243=__builtin_string(fun_name_135))),info,(_Bool)1))));
        __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_137=map$2charphsFunph_at(info->funcs,generics_fun_name_136,((void*)0));
        if(_if_conditional177=fun_137==((void*)0),        _if_conditional177) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_136,info->come_fun->mName);
            __result143__ = (_Bool)1;
            come_call_finalizer2(list$1sTypephp_finalize,tuple_types_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,tuple_values_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type_122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,obj_value_129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,num_string_130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type2_131, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            type_name_132 = come_decrement_ref_count2(type_name_132, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type3_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,obj_type_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            generics_fun_name_136 = come_decrement_ref_count2(generics_fun_name_136, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result143__;
        }
    }
    result_type_138=(struct sType*)come_increment_ref_count(((struct sType*)(right_value245=sType_clone(fun_137->mResultType))));
    come_call_finalizer2(sType_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_type_138->mStatic=(_Bool)0;
    come_params_139=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value247=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value246=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 693, "list$1CVALUEph"))))))));
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional178=list$1sTypephp_operator_load_element(fun_137->mParamTypes,0)->mHeap&&obj_value_129->type->mHeap,    _if_conditional178) {
        std_move(list$1sTypephp_operator_load_element(fun_137->mParamTypes,0),obj_value_129->type,obj_value_129,info);
    }
    list$1CVALUEph_push_back(come_params_139,(struct CVALUE*)come_increment_ref_count(obj_value_129));
    i_140=1;
    for(    o2_saved_141=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_117)),it_142=list$1CVALUEph_begin((o2_saved_141));    !list$1CVALUEph_end((o2_saved_141));    it_142=list$1CVALUEph_next((o2_saved_141))    ){
        come_value_143=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value248=CVALUE_clone(it_142))));
        come_call_finalizer2(CVALUE_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional179=list$1sTypephp_operator_load_element(fun_137->mParamTypes,i_140)&&list$1sTypephp_operator_load_element(fun_137->mParamTypes,i_140)->mHeap&&come_value_143->type->mHeap,        _if_conditional179) {
            std_move(list$1sTypephp_operator_load_element(fun_137->mParamTypes,i_140),come_value_143->type,come_value_143,info);
        }
        list$1CVALUEph_push_back(come_params_139,(struct CVALUE*)come_increment_ref_count(come_value_143));
        i_140++;
        come_call_finalizer2(CVALUE_finalize,come_value_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    buf_144=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value250=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value249=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 712, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append_str(buf_144,generics_fun_name_136);
    buffer_append_str(buf_144,"(");
    j_145=0;
    for(    o2_saved_146=(struct list$1CVALUEph*)come_increment_ref_count((come_params_139)),it_147=list$1CVALUEph_begin((o2_saved_146));    !list$1CVALUEph_end((o2_saved_146));    it_147=list$1CVALUEph_next((o2_saved_146))    ){
        buffer_append_str(buf_144,it_147->c_value);
        if(_if_conditional180=j_145!=list$1CVALUEph_length(come_params_139)-1,        _if_conditional180) {
            buffer_append_str(buf_144,",");
        }
        j_145++;
    }
    come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_146, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_144,")");
    come_value2_148=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value251=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 729, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj92=come_value2_148->c_value;
    come_value2_148->c_value=(char*)come_increment_ref_count(((char*)(right_value252=buffer_to_string(buf_144))));
    __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value252 = come_decrement_ref_count2(right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(result_type_138->mHeap) {
        __dec_obj93=come_value2_148->c_value;
        come_value2_148->c_value=(char*)come_increment_ref_count(((char*)(right_value254=append_object_to_right_values(((char*)(right_value253=buffer_to_string(buf_144))),(struct sType*)come_increment_ref_count(result_type_138),info))));
        __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value253 = come_decrement_ref_count2(right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __dec_obj94=come_value2_148->type;
    come_value2_148->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value255=sType_clone(result_type_138))));
    come_call_finalizer2(sType_finalize,__dec_obj94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value2_148->type->mStatic=(_Bool)0;
    come_value2_148->var=((void*)0);
    add_come_last_code(info,"%s;\n",((char*)(right_value256=buffer_to_string(buf_144))));
    right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_148));
    __result144__ = (_Bool)1;
    come_call_finalizer2(list$1sTypephp_finalize,tuple_types_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,tuple_values_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,obj_value_129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,num_string_130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_131, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_132 = come_decrement_ref_count2(type_name_132, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type3_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,obj_type_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    generics_fun_name_136 = come_decrement_ref_count2(generics_fun_name_136, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,come_params_139, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result144__;
    come_call_finalizer2(list$1sTypephp_finalize,tuple_types_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,tuple_values_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,obj_value_129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,num_string_130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_131, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_132 = come_decrement_ref_count2(type_name_132, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type3_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,obj_type_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    generics_fun_name_136 = come_decrement_ref_count2(generics_fun_name_136, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,come_params_139, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional168;
struct CVALUE* __result134__;
void* right_value220;
struct CVALUE* result_121;
_Bool _if_conditional169;
void* right_value221;
char* __dec_obj86;
_Bool _if_conditional170;
void* right_value222;
struct sType* __dec_obj87;
_Bool _if_conditional171;
struct CVALUE* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
right_value220 = (void*)0;
memset(&result_121, 0, sizeof(struct CVALUE*));
right_value221 = (void*)0;
right_value222 = (void*)0;
            if(_if_conditional168=self==(void*)0,            _if_conditional168) {
                __result134__ = __result_obj__ = (void*)0;
                return __result134__;
            }
            result_121=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value220=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"))));
            come_call_finalizer2(CVALUE_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional169=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional169) {
                __dec_obj86=result_121->c_value;
                result_121->c_value=(char*)come_increment_ref_count(((char*)(right_value221=string_clone(self->c_value))));
                __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional170=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional170) {
                __dec_obj87=result_121->type;
                result_121->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value222=sType_clone(self->type))));
                come_call_finalizer2(sType_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional171=self!=((void*)0),            _if_conditional171) {
                result_121->var=self->var;
            }
            __result135__ = __result_obj__ = result_121;
            come_call_finalizer2(CVALUE_finalize,result_121, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result135__;
            come_call_finalizer2(CVALUE_finalize,result_121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional172;
struct sType* result_124;
struct sType* __result136__;
_Bool _if_conditional173;
struct sType* __result137__;
struct sType* result_125;
struct sType* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_124, 0, sizeof(struct sType*));
memset(&result_125, 0, sizeof(struct sType*));
        if(_if_conditional172=self==((void*)0),        _if_conditional172) {
            memset(&result_124,0,sizeof(struct sType*));
            __result136__ = __result_obj__ = result_124;
            return __result136__;
        }
        self->it=self->head;
        if(self->it) {
            __result137__ = __result_obj__ = self->it->item;
            return __result137__;
        }
        memset(&result_125,0,sizeof(struct sType*));
        __result138__ = __result_obj__ = result_125;
        return __result138__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result139__;
memset(&__result_obj__, 0, sizeof(void*));
        __result139__ = self==((void*)0)||self->it==((void*)0);
        return __result139__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional174;
struct sType* result_127;
struct sType* __result140__;
_Bool _if_conditional175;
struct sType* __result141__;
struct sType* result_128;
struct sType* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_127, 0, sizeof(struct sType*));
memset(&result_128, 0, sizeof(struct sType*));
        if(_if_conditional174=self==((void*)0)||self->it==((void*)0),        _if_conditional174) {
            memset(&result_127,0,sizeof(struct sType*));
            __result140__ = __result_obj__ = result_127;
            return __result140__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result141__ = __result_obj__ = self->it->item;
            return __result141__;
        }
        memset(&result_128,0,sizeof(struct sType*));
        __result142__ = __result_obj__ = result_128;
        return __result142__;
}

int sTupleNode_sline(struct sTupleNode* self, struct sInfo* info){
void* __result_obj__;
int __result145__;
memset(&__result_obj__, 0, sizeof(void*));
    __result145__ = self->sline;
    return __result145__;
}

char* sTupleNode_sname(struct sTupleNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value257;
char* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
right_value257 = (void*)0;
    __result146__ = __result_obj__ = ((char*)(right_value257=__builtin_string(self->sname)));
    right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result146__;
}

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info){
void* __result_obj__;
struct list$1sNodeph* __dec_obj95;
struct list$1sNodeph* __dec_obj96;
void* right_value258;
char* __dec_obj97;
struct sMapNode* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
right_value258 = (void*)0;
    __dec_obj95=self->map_key_elements;
    self->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(map_key_elements);
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj96=self->map_elements;
    self->map_elements=(struct list$1sNodeph*)come_increment_ref_count(map_elements);
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    self->sline=info->sline;
    __dec_obj97=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value258=__builtin_string(info->sname))));
    __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result147__ = __result_obj__ = self;
    come_call_finalizer2(sMapNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,map_key_elements, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,map_elements, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result147__;
    come_call_finalizer2(sMapNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,map_key_elements, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,map_elements, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sMapNode_terminated(){
void* __result_obj__;
_Bool __result148__;
memset(&__result_obj__, 0, sizeof(void*));
    __result148__ = (_Bool)0;
    return __result148__;
}

char* sMapNode_kind(){
void* __result_obj__;
void* right_value259;
char* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
right_value259 = (void*)0;
    __result149__ = __result_obj__ = ((char*)(right_value259=__builtin_string("sMapNode")));
    right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result149__;
}

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info){
void* __result_obj__;
struct list$1sNodeph* map_key_elements_149;
struct list$1sNodeph* map_elements_150;
void* right_value260;
void* right_value261;
struct list$1CVALUEph* key_params_151;
void* right_value262;
void* right_value263;
struct list$1CVALUEph* element_params_152;
struct sType* map_key_type_153;
struct sType* map_element_type_154;
int i_155;
struct sNode* key_elements_159;
struct sNode* elements_160;
_Bool _if_conditional187;
_Bool __result152__;
void* right_value264;
struct CVALUE* come_value_161;
_Bool _if_conditional188;
void* right_value265;
_Bool _if_conditional189;
_Bool __result153__;
void* right_value266;
struct CVALUE* come_value2_162;
_Bool _if_conditional190;
void* right_value267;
void* right_value268;
struct sType* __dec_obj98;
void* right_value269;
struct sType* __dec_obj99;
static int map_value_num_163=0;
void* right_value270;
struct sType* key_type_values_164;
void* right_value271;
void* right_value272;
char* var_name_165;
void* right_value273;
struct sVar* var__166;
void* right_value274;
void* right_value275;
struct sType* element_type_values_167;
void* right_value276;
void* right_value277;
char* var_name2_168;
void* right_value278;
struct sVar* var2__169;
void* right_value279;
void* right_value280;
void* right_value281;
struct buffer* source_170;
int i_171;
struct CVALUE* key_param_172;
struct CVALUE* element_param_173;
_Bool _if_conditional191;
void* right_value282;
void* right_value283;
_Bool _if_conditional192;
void* right_value284;
void* right_value285;
void* right_value286;
void* right_value287;
void* right_value288;
struct sType* map_type_174;
void* right_value289;
void* right_value290;
void* right_value291;
struct sType* obj_type_175;
char* fun_name_176;
void* right_value292;
void* right_value293;
void* right_value294;
char* generics_fun_name_177;
struct sFun* fun_178;
_Bool _if_conditional193;
void* right_value295;
void* right_value296;
char* __dec_obj100;
_Bool _if_conditional194;
_Bool __result154__;
void* right_value297;
struct sType* result_type_179;
struct sType* type_180;
void* right_value298;
struct CVALUE* obj_value_181;
void* right_value299;
void* right_value300;
struct buffer* num_string_182;
void* right_value301;
struct sType* type2_183;
void* right_value302;
char* type_name_184;
void* right_value303;
void* right_value304;
char* __dec_obj101;
void* right_value305;
struct sType* type3_185;
void* right_value306;
struct sType* __dec_obj102;
void* right_value307;
char* __dec_obj103;
void* right_value308;
void* right_value309;
struct list$1CVALUEph* come_params_186;
_Bool _if_conditional195;
void* right_value310;
struct CVALUE* come_value2_187;
void* right_value311;
char* __dec_obj104;
struct sType* __dec_obj105;
void* right_value312;
struct CVALUE* come_value3_188;
void* right_value313;
char* __dec_obj106;
struct sType* __dec_obj107;
void* right_value314;
struct CVALUE* come_value4_189;
void* right_value315;
char* __dec_obj108;
struct sType* __dec_obj109;
void* right_value316;
void* right_value317;
struct buffer* buf_190;
int j_191;
struct list$1CVALUEph* o2_saved_192;
struct CVALUE* it_193;
_Bool _if_conditional196;
void* right_value318;
struct CVALUE* come_value5_194;
void* right_value319;
char* __dec_obj110;
_Bool _if_conditional197;
void* right_value320;
void* right_value321;
char* __dec_obj111;
void* right_value322;
struct sType* __dec_obj112;
void* right_value323;
_Bool __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&map_key_elements_149, 0, sizeof(struct list$1sNodeph*));
memset(&map_elements_150, 0, sizeof(struct list$1sNodeph*));
right_value260 = (void*)0;
right_value261 = (void*)0;
memset(&key_params_151, 0, sizeof(struct list$1CVALUEph*));
right_value262 = (void*)0;
right_value263 = (void*)0;
memset(&element_params_152, 0, sizeof(struct list$1CVALUEph*));
memset(&map_key_type_153, 0, sizeof(struct sType*));
memset(&map_element_type_154, 0, sizeof(struct sType*));
memset(&i_155, 0, sizeof(int));
memset(&key_elements_159, 0, sizeof(struct sNode*));
memset(&elements_160, 0, sizeof(struct sNode*));
right_value264 = (void*)0;
memset(&come_value_161, 0, sizeof(struct CVALUE*));
right_value265 = (void*)0;
right_value266 = (void*)0;
memset(&come_value2_162, 0, sizeof(struct CVALUE*));
right_value267 = (void*)0;
right_value268 = (void*)0;
right_value269 = (void*)0;
right_value270 = (void*)0;
memset(&key_type_values_164, 0, sizeof(struct sType*));
right_value271 = (void*)0;
right_value272 = (void*)0;
memset(&var_name_165, 0, sizeof(char*));
right_value273 = (void*)0;
memset(&var__166, 0, sizeof(struct sVar*));
right_value274 = (void*)0;
right_value275 = (void*)0;
memset(&element_type_values_167, 0, sizeof(struct sType*));
right_value276 = (void*)0;
right_value277 = (void*)0;
memset(&var_name2_168, 0, sizeof(char*));
right_value278 = (void*)0;
memset(&var2__169, 0, sizeof(struct sVar*));
right_value279 = (void*)0;
right_value280 = (void*)0;
right_value281 = (void*)0;
memset(&source_170, 0, sizeof(struct buffer*));
memset(&i_171, 0, sizeof(int));
memset(&key_param_172, 0, sizeof(struct CVALUE*));
memset(&element_param_173, 0, sizeof(struct CVALUE*));
right_value282 = (void*)0;
right_value283 = (void*)0;
right_value284 = (void*)0;
right_value285 = (void*)0;
right_value286 = (void*)0;
right_value287 = (void*)0;
right_value288 = (void*)0;
memset(&map_type_174, 0, sizeof(struct sType*));
right_value289 = (void*)0;
right_value290 = (void*)0;
right_value291 = (void*)0;
memset(&obj_type_175, 0, sizeof(struct sType*));
memset(&fun_name_176, 0, sizeof(char*));
right_value292 = (void*)0;
right_value293 = (void*)0;
right_value294 = (void*)0;
memset(&generics_fun_name_177, 0, sizeof(char*));
memset(&fun_178, 0, sizeof(struct sFun*));
right_value295 = (void*)0;
right_value296 = (void*)0;
right_value297 = (void*)0;
memset(&result_type_179, 0, sizeof(struct sType*));
memset(&type_180, 0, sizeof(struct sType*));
right_value298 = (void*)0;
memset(&obj_value_181, 0, sizeof(struct CVALUE*));
right_value299 = (void*)0;
right_value300 = (void*)0;
memset(&num_string_182, 0, sizeof(struct buffer*));
right_value301 = (void*)0;
memset(&type2_183, 0, sizeof(struct sType*));
right_value302 = (void*)0;
memset(&type_name_184, 0, sizeof(char*));
right_value303 = (void*)0;
right_value304 = (void*)0;
right_value305 = (void*)0;
memset(&type3_185, 0, sizeof(struct sType*));
right_value306 = (void*)0;
right_value307 = (void*)0;
right_value308 = (void*)0;
right_value309 = (void*)0;
memset(&come_params_186, 0, sizeof(struct list$1CVALUEph*));
right_value310 = (void*)0;
memset(&come_value2_187, 0, sizeof(struct CVALUE*));
right_value311 = (void*)0;
right_value312 = (void*)0;
memset(&come_value3_188, 0, sizeof(struct CVALUE*));
right_value313 = (void*)0;
right_value314 = (void*)0;
memset(&come_value4_189, 0, sizeof(struct CVALUE*));
right_value315 = (void*)0;
right_value316 = (void*)0;
right_value317 = (void*)0;
memset(&buf_190, 0, sizeof(struct buffer*));
memset(&j_191, 0, sizeof(int));
memset(&o2_saved_192, 0, sizeof(struct list$1CVALUEph*));
memset(&it_193, 0, sizeof(struct CVALUE*));
right_value318 = (void*)0;
memset(&come_value5_194, 0, sizeof(struct CVALUE*));
right_value319 = (void*)0;
right_value320 = (void*)0;
right_value321 = (void*)0;
right_value322 = (void*)0;
right_value323 = (void*)0;
    map_key_elements_149=self->map_key_elements;
    map_elements_150=self->map_elements;
    key_params_151=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value261=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value260=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 792, "list$1CVALUEph"))))))));
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    element_params_152=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value263=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value262=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 793, "list$1CVALUEph"))))))));
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    map_key_type_153=((void*)0);
    map_element_type_154=((void*)0);
    for(    i_155=0;    i_155<list$1sNodeph_length(map_key_elements_149);    i_155++    ){
        key_elements_159=list$1sNodephp_operator_load_element(map_key_elements_149,i_155);
        elements_160=list$1sNodephp_operator_load_element(map_elements_150,i_155);
        if(_if_conditional187=!node_compile(key_elements_159,info),        _if_conditional187) {
            __result152__ = (_Bool)0;
            come_call_finalizer2(list$1CVALUEphp_finalize,key_params_151, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,element_params_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,map_key_type_153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,map_element_type_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result152__;
        }
        come_value_161=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value264=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        if(map_key_type_153) {
            check_assign_type(((char*)(right_value265=xsprintf("invalid map key type"))),map_key_type_153,come_value_161->type,come_value_161,(_Bool)0,(_Bool)1,info);
            right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        list$1CVALUEph_push_back(key_params_151,(struct CVALUE*)come_increment_ref_count(come_value_161));
        if(_if_conditional189=!node_compile(elements_160,info),        _if_conditional189) {
            __result153__ = (_Bool)0;
            come_call_finalizer2(CVALUE_finalize,come_value_161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,key_params_151, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,element_params_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,map_key_type_153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,map_element_type_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result153__;
        }
        come_value2_162=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value266=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        if(map_element_type_154) {
            check_assign_type(((char*)(right_value267=xsprintf("invalid map element type"))),map_element_type_154,come_value2_162->type,come_value2_162,(_Bool)0,(_Bool)1,info);
            right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        list$1CVALUEph_push_back(element_params_152,(struct CVALUE*)come_increment_ref_count(come_value2_162));
        __dec_obj98=map_key_type_153;
        map_key_type_153=(struct sType*)come_increment_ref_count(((struct sType*)(right_value268=sType_clone(come_value_161->type))));
        come_call_finalizer2(sType_finalize,__dec_obj98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj99=map_element_type_154;
        map_element_type_154=(struct sType*)come_increment_ref_count(((struct sType*)(right_value269=sType_clone(come_value2_162->type))));
        come_call_finalizer2(sType_finalize,__dec_obj99, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(CVALUE_finalize,come_value_161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,come_value2_162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    key_type_values_164=(struct sType*)come_increment_ref_count(((struct sType*)(right_value270=sType_clone(map_key_type_153))));
    come_call_finalizer2(sType_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    list$1sNodeph_push_back(key_type_values_164->mArrayNum,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value271=create_int_node(list$1CVALUEph_length(key_params_151),info)))));
    if(right_value271) { right_value271 = come_decrement_ref_count2(right_value271, ((struct sNode*)right_value271)->finalize, ((struct sNode*)right_value271)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    key_type_values_164->mHeap=(_Bool)0;
    var_name_165=(char*)come_increment_ref_count(((char*)(right_value272=xsprintf("__map_keys%d__",++map_value_num_163))));
    right_value272 = come_decrement_ref_count2(right_value272, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_variable_to_table(var_name_165,(struct sType*)come_increment_ref_count(((struct sType*)(right_value273=sType_clone(key_type_values_164)))),info);
    come_call_finalizer2(sType_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    var__166=get_variable_from_table(info->lv_table,var_name_165);
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value274=make_define_var(key_type_values_164,var__166->mCValueName,(_Bool)0,info))));
    right_value274 = come_decrement_ref_count2(right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    element_type_values_167=(struct sType*)come_increment_ref_count(((struct sType*)(right_value275=sType_clone(map_element_type_154))));
    come_call_finalizer2(sType_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    list$1sNodeph_push_back(element_type_values_167->mArrayNum,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value276=create_int_node(list$1CVALUEph_length(element_params_152),info)))));
    if(right_value276) { right_value276 = come_decrement_ref_count2(right_value276, ((struct sNode*)right_value276)->finalize, ((struct sNode*)right_value276)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    element_type_values_167->mHeap=(_Bool)0;
    var_name2_168=(char*)come_increment_ref_count(((char*)(right_value277=xsprintf("__map_element%d__",map_value_num_163))));
    right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_variable_to_table(var_name2_168,(struct sType*)come_increment_ref_count(((struct sType*)(right_value278=sType_clone(element_type_values_167)))),info);
    come_call_finalizer2(sType_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    var2__169=get_variable_from_table(info->lv_table,var_name2_168);
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value279=make_define_var(element_type_values_167,var2__169->mCValueName,(_Bool)0,info))));
    right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    source_170=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value281=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value280=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 857, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append_str(source_170,"{");
    for(    i_171=0;    i_171<list$1CVALUEph_length(key_params_151);    i_171++    ){
        key_param_172=list$1CVALUEphp_operator_load_element(key_params_151,i_171);
        element_param_173=list$1CVALUEphp_operator_load_element(element_params_152,i_171);
        if(map_key_type_153->mHeap) {
            buffer_append_str(source_170,((char*)(right_value282=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",var__166->mCValueName,i_171,key_param_172->c_value))));
            right_value282 = come_decrement_ref_count2(right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            buffer_append_str(source_170,((char*)(right_value283=xsprintf("%s[%d]=%s;\n",var__166->mCValueName,i_171,key_param_172->c_value))));
            right_value283 = come_decrement_ref_count2(right_value283, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(map_element_type_154->mHeap) {
            buffer_append_str(source_170,((char*)(right_value284=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",var2__169->mCValueName,i_171,element_param_173->c_value))));
            right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            buffer_append_str(source_170,((char*)(right_value285=xsprintf("%s[%d]=%s;\n",var2__169->mCValueName,i_171,element_param_173->c_value))));
            right_value285 = come_decrement_ref_count2(right_value285, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    buffer_append_str(source_170,"}");
    add_come_code(info,"%s",((char*)(right_value286=buffer_to_string(source_170))));
    right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    map_type_174=(struct sType*)come_increment_ref_count(((struct sType*)(right_value288=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value287=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 884, "sType")))),"map",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    list$1sTypeph_push_back(map_type_174->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value289=sType_clone(map_key_type_153)))));
    come_call_finalizer2(sType_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    list$1sTypeph_push_back(map_type_174->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value290=sType_clone(map_element_type_154)))));
    come_call_finalizer2(sType_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    obj_type_175=(struct sType*)come_increment_ref_count(((struct sType*)(right_value291=sType_clone(map_type_174))));
    come_call_finalizer2(sType_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    fun_name_176="initialize_with_values";
    generics_fun_name_177=(char*)come_increment_ref_count(((char*)(right_value294=string_to_string(((char*)(right_value293=make_generics_function(obj_type_175,(char*)come_increment_ref_count(((char*)(right_value292=__builtin_string(fun_name_176)))),info,(_Bool)1)))))));
    right_value292 = come_decrement_ref_count2(right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value293 = come_decrement_ref_count2(right_value293, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value294 = come_decrement_ref_count2(right_value294, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    fun_178=map$2charphsFunph_at(info->funcs,generics_fun_name_177,((void*)0));
    if(_if_conditional193=fun_178==((void*)0),    _if_conditional193) {
        __dec_obj100=generics_fun_name_177;
        generics_fun_name_177=(char*)come_increment_ref_count(((char*)(right_value296=create_method_name(obj_type_175,(_Bool)0,((char*)(right_value295=__builtin_string(fun_name_176))),info,(_Bool)1))));
        __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value295 = come_decrement_ref_count2(right_value295, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value296 = come_decrement_ref_count2(right_value296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_178=map$2charphsFunph_at(info->funcs,generics_fun_name_177,((void*)0));
        if(_if_conditional194=fun_178==((void*)0),        _if_conditional194) {
            err_msg(info,"function not found(%s) at method(%s)(3)\n",generics_fun_name_177,info->come_fun->mName);
            __result154__ = (_Bool)1;
            come_call_finalizer2(list$1CVALUEphp_finalize,key_params_151, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,element_params_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,map_key_type_153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,map_element_type_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,key_type_values_164, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            var_name_165 = come_decrement_ref_count2(var_name_165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,element_type_values_167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            var_name2_168 = come_decrement_ref_count2(var_name2_168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,source_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,map_type_174, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,obj_type_175, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            generics_fun_name_177 = come_decrement_ref_count2(generics_fun_name_177, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result154__;
        }
    }
    result_type_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value297=sType_clone(fun_178->mResultType))));
    come_call_finalizer2(sType_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_type_179->mStatic=(_Bool)0;
    type_180=map_type_174;
    obj_value_181=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value298=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 911, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    num_string_182=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value300=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value299=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 913, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append_str(num_string_182,"1");
    type2_183=(struct sType*)come_increment_ref_count(((struct sType*)(right_value301=solve_generics(type_180,type_180,info))));
    come_call_finalizer2(sType_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type_name_184=(char*)come_increment_ref_count(((char*)(right_value302=make_type_name_string(type2_183,(_Bool)0,(_Bool)1,(_Bool)0,info))));
    right_value302 = come_decrement_ref_count2(right_value302, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj101=obj_value_181->c_value;
    obj_value_181->c_value=(char*)come_increment_ref_count(((char*)(right_value304=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_184,type_name_184,((char*)(right_value303=buffer_to_string(num_string_182))),info->sname,info->sline,type_name_184))));
    __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value303 = come_decrement_ref_count2(right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value304 = come_decrement_ref_count2(right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type3_185=(struct sType*)come_increment_ref_count(((struct sType*)(right_value305=sType_clone(type2_183))));
    come_call_finalizer2(sType_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type3_185->mPointerNum++;
    type3_185->mHeap=(_Bool)1;
    type2_183->mHeap=(_Bool)1;
    __dec_obj102=obj_value_181->type;
    obj_value_181->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value306=sType_clone(type2_183))));
    come_call_finalizer2(sType_finalize,__dec_obj102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj103=obj_value_181->c_value;
    obj_value_181->c_value=(char*)come_increment_ref_count(((char*)(right_value307=append_object_to_right_values(obj_value_181->c_value,(struct sType*)come_increment_ref_count(type3_185),info))));
    __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value307 = come_decrement_ref_count2(right_value307, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    obj_value_181->type->mPointerNum++;
    obj_value_181->var=((void*)0);
    come_params_186=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value309=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value308=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 932, "list$1CVALUEph"))))))));
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional195=list$1sTypephp_operator_load_element(fun_178->mParamTypes,0)->mHeap&&obj_value_181->type->mHeap,    _if_conditional195) {
        std_move(list$1sTypephp_operator_load_element(fun_178->mParamTypes,0),obj_value_181->type,obj_value_181,info);
    }
    list$1CVALUEph_push_back(come_params_186,(struct CVALUE*)come_increment_ref_count(obj_value_181));
    come_value2_187=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value310=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 939, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj104=come_value2_187->c_value;
    come_value2_187->c_value=(char*)come_increment_ref_count(((char*)(right_value311=xsprintf("%d",list$1CVALUEph_length(key_params_151)))));
    __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value311 = come_decrement_ref_count2(right_value311, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj105=come_value2_187->type;
    come_value2_187->type=((void*)0);
    come_call_finalizer2(sType_finalize,__dec_obj105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_value2_187->var=((void*)0);
    list$1CVALUEph_push_back(come_params_186,(struct CVALUE*)come_increment_ref_count(come_value2_187));
    come_value3_188=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value312=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 947, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj106=come_value3_188->c_value;
    come_value3_188->c_value=(char*)come_increment_ref_count(((char*)(right_value313=xsprintf("%s",var__166->mCValueName))));
    __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value313 = come_decrement_ref_count2(right_value313, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj107=come_value3_188->type;
    come_value3_188->type=((void*)0);
    come_call_finalizer2(sType_finalize,__dec_obj107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_value3_188->var=((void*)0);
    list$1CVALUEph_push_back(come_params_186,(struct CVALUE*)come_increment_ref_count(come_value3_188));
    come_value4_189=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value314=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 955, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj108=come_value4_189->c_value;
    come_value4_189->c_value=(char*)come_increment_ref_count(((char*)(right_value315=xsprintf("%s",var2__169->mCValueName))));
    __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value315 = come_decrement_ref_count2(right_value315, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj109=come_value4_189->type;
    come_value4_189->type=((void*)0);
    come_call_finalizer2(sType_finalize,__dec_obj109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_value4_189->var=((void*)0);
    list$1CVALUEph_push_back(come_params_186,(struct CVALUE*)come_increment_ref_count(come_value4_189));
    buf_190=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value317=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value316=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 963, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value317, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append_str(buf_190,generics_fun_name_177);
    buffer_append_str(buf_190,"(");
    j_191=0;
    for(    o2_saved_192=(struct list$1CVALUEph*)come_increment_ref_count((come_params_186)),it_193=list$1CVALUEph_begin((o2_saved_192));    !list$1CVALUEph_end((o2_saved_192));    it_193=list$1CVALUEph_next((o2_saved_192))    ){
        buffer_append_str(buf_190,it_193->c_value);
        if(_if_conditional196=j_191!=list$1CVALUEph_length(come_params_186)-1,        _if_conditional196) {
            buffer_append_str(buf_190,",");
        }
        j_191++;
    }
    come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_192, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_190,")");
    come_value5_194=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value318=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 980, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj110=come_value5_194->c_value;
    come_value5_194->c_value=(char*)come_increment_ref_count(((char*)(right_value319=buffer_to_string(buf_190))));
    __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value319 = come_decrement_ref_count2(right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(result_type_179->mHeap) {
        __dec_obj111=come_value5_194->c_value;
        come_value5_194->c_value=(char*)come_increment_ref_count(((char*)(right_value321=append_object_to_right_values(((char*)(right_value320=buffer_to_string(buf_190))),(struct sType*)come_increment_ref_count(result_type_179),info))));
        __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value320 = come_decrement_ref_count2(right_value320, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value321 = come_decrement_ref_count2(right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __dec_obj112=come_value5_194->type;
    come_value5_194->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value322=sType_clone(result_type_179))));
    come_call_finalizer2(sType_finalize,__dec_obj112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value5_194->type->mStatic=(_Bool)0;
    come_value5_194->var=((void*)0);
    add_come_last_code(info,"%s;\n",((char*)(right_value323=buffer_to_string(buf_190))));
    right_value323 = come_decrement_ref_count2(right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value5_194));
    __result155__ = (_Bool)1;
    come_call_finalizer2(list$1CVALUEphp_finalize,key_params_151, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,element_params_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,map_key_type_153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,map_element_type_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,key_type_values_164, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_165 = come_decrement_ref_count2(var_name_165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,element_type_values_167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name2_168 = come_decrement_ref_count2(var_name2_168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,source_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,map_type_174, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,obj_type_175, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    generics_fun_name_177 = come_decrement_ref_count2(generics_fun_name_177, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,obj_value_181, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,num_string_182, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_183, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_184 = come_decrement_ref_count2(type_name_184, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type3_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,come_params_186, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_187, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value3_188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value4_189, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_190, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value5_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result155__;
    come_call_finalizer2(list$1CVALUEphp_finalize,key_params_151, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,element_params_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,map_key_type_153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,map_element_type_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,key_type_values_164, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_165 = come_decrement_ref_count2(var_name_165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,element_type_values_167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name2_168 = come_decrement_ref_count2(var_name2_168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,source_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,map_type_174, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,obj_type_175, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    generics_fun_name_177 = come_decrement_ref_count2(generics_fun_name_177, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,obj_value_181, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,num_string_182, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_183, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_184 = come_decrement_ref_count2(type_name_184, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type3_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,come_params_186, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_187, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value3_188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value4_189, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_190, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value5_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__;
_Bool _if_conditional185;
struct list_item$1sNodeph* it_156;
int i_157;
_Bool _while_condtional12;
_Bool _if_conditional186;
struct sNode* __result150__;
struct sNode* default_value_158;
struct sNode* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_156, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_157, 0, sizeof(int));
memset(&default_value_158, 0, sizeof(struct sNode*));
            if(_if_conditional185=position<0,            _if_conditional185) {
                position+=self->len;
            }
            it_156=self->head;
            i_157=0;
            while(_while_condtional12=it_156!=((void*)0),            _while_condtional12) {
                if(_if_conditional186=position==i_157,                _if_conditional186) {
                    __result150__ = __result_obj__ = it_156->item;
                    return __result150__;
                }
                it_156=it_156->next;
                i_157++;
            }
            memset(&default_value_158,0,sizeof(struct sNode*));
            __result151__ = __result_obj__ = default_value_158;
            if(default_value_158) { default_value_158 = come_decrement_ref_count2(default_value_158, ((struct sNode*)default_value_158)->finalize, ((struct sNode*)default_value_158)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result151__;
            if(default_value_158) { default_value_158 = come_decrement_ref_count2(default_value_158, ((struct sNode*)default_value_158)->finalize, ((struct sNode*)default_value_158)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

int sMapNode_sline(struct sMapNode* self, struct sInfo* info){
void* __result_obj__;
int __result156__;
memset(&__result_obj__, 0, sizeof(void*));
    __result156__ = self->sline;
    return __result156__;
}

char* sMapNode_sname(struct sMapNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value324;
char* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
right_value324 = (void*)0;
    __result157__ = __result_obj__ = ((char*)(right_value324=__builtin_string(self->sname)));
    right_value324 = come_decrement_ref_count2(right_value324, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result157__;
}

struct sNode* expression_node_v98(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional198;
int sline_195;
void* right_value325;
void* right_value326;
struct list$1sNodeph* exps_196;
void* right_value327;
void* right_value328;
struct buffer* value_197;
char* head_of_last_line_198;
_Bool _while_condtional13;
_Bool _if_conditional199;
_Bool _if_conditional200;
_Bool _if_conditional201;
_Bool _if_conditional202;
_Bool _if_conditional203;
_Bool _if_conditional204;
int len_199;
_Bool _while_condtional14;
_Bool _if_conditional205;
_Bool _while_condtional15;
_Bool _if_conditional206;
void* right_value329;
struct sNode* exp_200;
_Bool _if_conditional207;
_Bool _if_conditional208;
int sline2_201;
_Bool _if_conditional209;
void* right_value330;
void* right_value331;
void* right_value332;
struct sNode* _inf_value1;
struct sSStringNode* _inf_obj_value1;
void* right_value337;
struct sNode* __result160__;
_Bool _if_conditional218;
int sline_203;
void* right_value338;
void* right_value339;
struct buffer* value_204;
_Bool _while_condtional16;
_Bool _if_conditional219;
char* p_205;
int sline_206;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
_Bool _if_conditional223;
int sline2_207;
_Bool _if_conditional224;
void* right_value340;
void* right_value341;
void* right_value342;
struct sNode* _inf_value2;
struct sStrNode* _inf_obj_value2;
void* right_value346;
struct sNode* __result163__;
_Bool _if_conditional231;
int sline_209;
void* right_value347;
void* right_value348;
struct buffer* buf_210;
_Bool _while_condtional17;
_Bool _if_conditional232;
_Bool _if_conditional233;
_Bool _if_conditional234;
_Bool global_211;
_Bool ignore_case_212;
_Bool _while_condtional18;
_Bool _if_conditional235;
_Bool _if_conditional236;
void* right_value349;
void* right_value350;
void* right_value351;
struct sNode* _inf_value3;
struct sRegexNode* _inf_obj_value3;
void* right_value355;
struct sNode* __result166__;
_Bool _if_conditional245;
int c_214;
_Bool _if_conditional246;
_Bool _if_conditional247;
int n_215;
_Bool _while_condtional19;
_Bool _if_conditional248;
int n_216;
_Bool _while_condtional20;
_Bool _while_condtional21;
unsigned long long int n_219;
_Bool _if_conditional249;
void* right_value356;
void* right_value357;
struct sNode* _inf_value4;
struct sCharNode* _inf_obj_value4;
void* right_value360;
struct sNode* __result169__;
_Bool _if_conditional255;
unsigned int c_221;
_Bool _if_conditional256;
_Bool _if_conditional257;
int n_222;
_Bool _while_condtional22;
_Bool _if_conditional258;
int n_223;
_Bool _while_condtional23;
_Bool _while_condtional24;
unsigned long long int n_226;
unsigned char p2_227;
_Bool _if_conditional259;
int size_228;
_Bool _if_conditional260;
_Bool _if_conditional261;
_Bool _if_conditional262;
void* right_value361;
void* right_value362;
struct sNode* _inf_value5;
struct sWCharNode* _inf_obj_value5;
void* right_value365;
struct sNode* __result172__;
_Bool _if_conditional268;
int sline_231;
void* right_value366;
void* right_value367;
struct buffer* value_232;
_Bool _while_condtional25;
_Bool _if_conditional269;
char* p_233;
int sline_234;
_Bool _if_conditional270;
_Bool _if_conditional271;
_Bool _if_conditional272;
int len_235;
int n_236;
_Bool _while_condtional26;
_Bool _if_conditional273;
_Bool _while_condtional27;
unsigned long int lont_239;
int n_240;
_Bool _if_conditional274;
int sline2_241;
_Bool _if_conditional275;
int len_242;
void* right_value368;
unsigned int* wstr_243;
char* str_244;
_Bool _if_conditional276;
void* right_value369;
void* right_value370;
struct sNode* _inf_value6;
struct sWStringNode* _inf_obj_value6;
void* right_value374;
struct sNode* __result175__;
_Bool _if_conditional283;
int sline_246;
void* right_value375;
void* right_value376;
struct list$1sNodeph* exps_247;
void* right_value377;
void* right_value378;
struct buffer* value_248;
_Bool _while_condtional28;
_Bool _if_conditional284;
char* p_249;
int sline_250;
_Bool _if_conditional285;
_Bool _if_conditional286;
_Bool _if_conditional287;
void* right_value379;
struct sNode* exp_251;
char* p_252;
_Bool _while_condtional29;
_Bool _if_conditional288;
_Bool _if_conditional289;
int len_253;
_Bool _while_condtional30;
_Bool _if_conditional290;
_Bool _while_condtional31;
_Bool _if_conditional291;
void* right_value380;
struct sNode* exp_254;
_Bool _if_conditional292;
_Bool _if_conditional293;
int sline2_255;
_Bool _if_conditional294;
void* right_value381;
void* right_value382;
void* right_value383;
struct sNode* _inf_value7;
struct sSStringNode* _inf_obj_value7;
void* right_value388;
struct sNode* __result178__;
_Bool _if_conditional303;
char* p_257;
_Bool no_comma_258;
void* right_value389;
struct sNode* node_259;
char* p2_260;
void* right_value390;
void* right_value391;
struct buffer* first_element_source_261;
void* right_value392;
void* right_value393;
struct list$1sNodeph* list_elements_262;
void* right_value394;
void* right_value395;
struct list$1sNodeph* map_keys_263;
void* right_value396;
void* right_value397;
struct list$1sNodeph* map_elements_264;
_Bool _if_conditional304;
_Bool no_comma_265;
void* right_value398;
struct sNode* node2_266;
_Bool _if_conditional305;
void* right_value399;
void* right_value400;
struct sNode* _inf_value8;
struct sMapNode* _inf_obj_value8;
void* right_value405;
struct sNode* __result181__;
_Bool _while_condtional32;
_Bool no_comma_268;
void* right_value406;
struct sNode* node2_269;
void* right_value407;
struct sNode* node3_270;
_Bool _if_conditional314;
_Bool _if_conditional315;
_Bool _if_conditional316;
void* right_value408;
void* right_value409;
struct sNode* _inf_value9;
struct sMapNode* _inf_obj_value9;
void* right_value414;
struct sNode* __result184__;
_Bool _if_conditional325;
_Bool _if_conditional326;
_Bool _while_condtional33;
_Bool no_comma_272;
void* right_value415;
struct sNode* node2_273;
_Bool _if_conditional327;
_Bool _if_conditional328;
_Bool _if_conditional329;
_Bool _if_conditional330;
void* right_value416;
void* right_value417;
struct sNode* _inf_value10;
struct sListNode* _inf_obj_value10;
void* right_value421;
struct sNode* __result187__;
void* right_value422;
struct sNode* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&sline_195, 0, sizeof(int));
right_value325 = (void*)0;
right_value326 = (void*)0;
memset(&exps_196, 0, sizeof(struct list$1sNodeph*));
right_value327 = (void*)0;
right_value328 = (void*)0;
memset(&value_197, 0, sizeof(struct buffer*));
memset(&head_of_last_line_198, 0, sizeof(char*));
memset(&len_199, 0, sizeof(int));
right_value329 = (void*)0;
memset(&exp_200, 0, sizeof(struct sNode*));
memset(&sline2_201, 0, sizeof(int));
right_value330 = (void*)0;
right_value331 = (void*)0;
right_value332 = (void*)0;
right_value337 = (void*)0;
memset(&sline_203, 0, sizeof(int));
right_value338 = (void*)0;
right_value339 = (void*)0;
memset(&value_204, 0, sizeof(struct buffer*));
memset(&p_205, 0, sizeof(char*));
memset(&sline_206, 0, sizeof(int));
memset(&sline2_207, 0, sizeof(int));
right_value340 = (void*)0;
right_value341 = (void*)0;
right_value342 = (void*)0;
right_value346 = (void*)0;
memset(&sline_209, 0, sizeof(int));
right_value347 = (void*)0;
right_value348 = (void*)0;
memset(&buf_210, 0, sizeof(struct buffer*));
memset(&global_211, 0, sizeof(_Bool));
memset(&ignore_case_212, 0, sizeof(_Bool));
right_value349 = (void*)0;
right_value350 = (void*)0;
right_value351 = (void*)0;
right_value355 = (void*)0;
memset(&c_214, 0, sizeof(int));
memset(&n_215, 0, sizeof(int));
memset(&n_216, 0, sizeof(int));
memset(&n_219, 0, sizeof(unsigned long long int));
right_value356 = (void*)0;
right_value357 = (void*)0;
right_value360 = (void*)0;
memset(&c_221, 0, sizeof(unsigned int));
memset(&n_222, 0, sizeof(int));
memset(&n_223, 0, sizeof(int));
memset(&n_226, 0, sizeof(unsigned long long int));
memset(&p2_227, 0, sizeof(unsigned char));
memset(&size_228, 0, sizeof(int));
right_value361 = (void*)0;
right_value362 = (void*)0;
right_value365 = (void*)0;
memset(&sline_231, 0, sizeof(int));
right_value366 = (void*)0;
right_value367 = (void*)0;
memset(&value_232, 0, sizeof(struct buffer*));
memset(&p_233, 0, sizeof(char*));
memset(&sline_234, 0, sizeof(int));
memset(&len_235, 0, sizeof(int));
memset(&n_236, 0, sizeof(int));
memset(&lont_239, 0, sizeof(unsigned long int));
memset(&n_240, 0, sizeof(int));
memset(&sline2_241, 0, sizeof(int));
memset(&len_242, 0, sizeof(int));
right_value368 = (void*)0;
memset(&wstr_243, 0, sizeof(unsigned int*));
memset(&str_244, 0, sizeof(char*));
right_value369 = (void*)0;
right_value370 = (void*)0;
right_value374 = (void*)0;
memset(&sline_246, 0, sizeof(int));
right_value375 = (void*)0;
right_value376 = (void*)0;
memset(&exps_247, 0, sizeof(struct list$1sNodeph*));
right_value377 = (void*)0;
right_value378 = (void*)0;
memset(&value_248, 0, sizeof(struct buffer*));
memset(&p_249, 0, sizeof(char*));
memset(&sline_250, 0, sizeof(int));
right_value379 = (void*)0;
memset(&exp_251, 0, sizeof(struct sNode*));
memset(&p_252, 0, sizeof(char*));
memset(&len_253, 0, sizeof(int));
right_value380 = (void*)0;
memset(&exp_254, 0, sizeof(struct sNode*));
memset(&sline2_255, 0, sizeof(int));
right_value381 = (void*)0;
right_value382 = (void*)0;
right_value383 = (void*)0;
right_value388 = (void*)0;
memset(&p_257, 0, sizeof(char*));
memset(&no_comma_258, 0, sizeof(_Bool));
right_value389 = (void*)0;
memset(&node_259, 0, sizeof(struct sNode*));
memset(&p2_260, 0, sizeof(char*));
right_value390 = (void*)0;
right_value391 = (void*)0;
memset(&first_element_source_261, 0, sizeof(struct buffer*));
right_value392 = (void*)0;
right_value393 = (void*)0;
memset(&list_elements_262, 0, sizeof(struct list$1sNodeph*));
right_value394 = (void*)0;
right_value395 = (void*)0;
memset(&map_keys_263, 0, sizeof(struct list$1sNodeph*));
right_value396 = (void*)0;
right_value397 = (void*)0;
memset(&map_elements_264, 0, sizeof(struct list$1sNodeph*));
memset(&no_comma_265, 0, sizeof(_Bool));
right_value398 = (void*)0;
memset(&node2_266, 0, sizeof(struct sNode*));
right_value399 = (void*)0;
right_value400 = (void*)0;
right_value405 = (void*)0;
memset(&no_comma_268, 0, sizeof(_Bool));
right_value406 = (void*)0;
memset(&node2_269, 0, sizeof(struct sNode*));
right_value407 = (void*)0;
memset(&node3_270, 0, sizeof(struct sNode*));
right_value408 = (void*)0;
right_value409 = (void*)0;
right_value414 = (void*)0;
memset(&no_comma_272, 0, sizeof(_Bool));
right_value415 = (void*)0;
memset(&node2_273, 0, sizeof(struct sNode*));
right_value416 = (void*)0;
right_value417 = (void*)0;
right_value421 = (void*)0;
right_value422 = (void*)0;
    if(_if_conditional198=*info->p==34&&*(info->p+1)==34&&*(info->p+2)==34&&*(info->p+3)==10,    _if_conditional198) {
        info->p+=4;
        info->sline++;
        sline_195=info->sline;
        exps_196=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value326=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value325=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1018, "list$1sNodeph"))))))));
        come_call_finalizer2(list$1sNodephp_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sNodephp_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        value_197=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value328=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value327=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1019, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        head_of_last_line_198=((void*)0);
        while(_while_condtional13=1,        _while_condtional13) {
            if(_if_conditional199=*info->p==34&&*(info->p+1)==34&&*(info->p+2)==34,            _if_conditional199) {
                if(head_of_last_line_198) {
                    buffer_trim(value_197,info->p-head_of_last_line_198);
                }
                info->p+=3;
                skip_spaces_and_lf(info);
                break;
            }
            else {
                if(_if_conditional201=*info->p==37,                _if_conditional201) {
                    buffer_append_char(value_197,37);
                    buffer_append_char(value_197,37);
                    info->p++;
                }
                else {
                    if(_if_conditional202=*info->p==34,                    _if_conditional202) {
                        buffer_append_char(value_197,92);
                        buffer_append_char(value_197,34);
                        info->p++;
                    }
                    else {
                        if(_if_conditional203=*info->p==92,                        _if_conditional203) {
                            buffer_append_char(value_197,92);
                            info->p++;
                            if(_if_conditional204=xisdigit(*info->p),                            _if_conditional204) {
                                len_199=0;
                                while(_while_condtional14=xisdigit(*info->p)&&len_199<3,                                _while_condtional14) {
                                    buffer_append_char(value_197,*info->p);
                                    info->p++;
                                    len_199++;
                                }
                            }
                            else {
                                if(_if_conditional205=*info->p==120||*info->p==88,                                _if_conditional205) {
                                    buffer_append_char(value_197,*info->p);
                                    info->p++;
                                    while(_while_condtional15=*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70,                                    _while_condtional15) {
                                        buffer_append_char(value_197,*info->p);
                                        info->p++;
                                    }
                                }
                                else {
                                    if(_if_conditional206=*info->p==123,                                    _if_conditional206) {
                                        info->p++;
                                        exp_200=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value329=expression_v13(info))));
                                        if(right_value329) { right_value329 = come_decrement_ref_count2(right_value329, ((struct sNode*)right_value329)->finalize, ((struct sNode*)right_value329)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        list$1sNodeph_add(exps_196,(struct sNode*)come_increment_ref_count(exp_200));
                                        if(_if_conditional207=*info->p==125,                                        _if_conditional207) {
                                            info->p++;
                                        }
                                        buffer_append_str(value_197,"%s");
                                        if(exp_200) { exp_200 = come_decrement_ref_count2(exp_200, ((struct sNode*)exp_200)->finalize, ((struct sNode*)exp_200)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        switch (*info->p) {
                                            case 48:
                                            buffer_append_char(value_197,*info->p);
                                            info->p++;
                                            break;
                                            case 110:
                                            buffer_append_char(value_197,*info->p);
                                            info->p++;
                                            break;
                                            case 116:
                                            buffer_append_char(value_197,*info->p);
                                            info->p++;
                                            break;
                                            case 114:
                                            buffer_append_char(value_197,*info->p);
                                            info->p++;
                                            break;
                                            case 118:
                                            buffer_append_char(value_197,*info->p);
                                            info->p++;
                                            break;
                                            case 102:
                                            buffer_append_char(value_197,*info->p);
                                            info->p++;
                                            break;
                                            case 97:
                                            buffer_append_char(value_197,*info->p);
                                            info->p++;
                                            break;
                                            case 98:
                                            buffer_append_char(value_197,*info->p);
                                            info->p++;
                                            break;
                                            case 92:
                                            buffer_append_char(value_197,*info->p);
                                            info->p++;
                                            break;
                                            default:
                                            buffer_append_char(value_197,*info->p);
                                            info->p++;
                                            break;
                                        }
                                    }
                                }
                            }
                        }
                        else {
                            if(_if_conditional208=*info->p==0,                            _if_conditional208) {
                                sline2_201=info->sline;
                                info->sline=sline_195;
                                err_msg(info,"close \" to make embbeded string value");
                                exit(2);
                            }
                            else {
                                if(_if_conditional209=*info->p==10,                                _if_conditional209) {
                                    buffer_append_char(value_197,92);
                                    buffer_append_char(value_197,110);
                                    info->p++;
                                    info->sline++;
                                    head_of_last_line_198=info->p;
                                }
                                else {
                                    buffer_append_char(value_197,*info->p);
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
        _inf_obj_value1=come_increment_ref_count(((struct sSStringNode*)(right_value332=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(right_value330=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 1167, "sSStringNode")))),(char*)come_increment_ref_count(((char*)(right_value331=buffer_to_string(value_197)))),(struct list$1sNodeph*)come_increment_ref_count(exps_196),sline_195,info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sSStringNode_finalize;
        _inf_value1->clone=(void*)sSStringNode_clone;
        _inf_value1->compile=(void*)sSStringNode_compile;
        _inf_value1->sline=(void*)sSStringNode_sline;
        _inf_value1->sname=(void*)sSStringNode_sname;
        _inf_value1->terminated=(void*)sSStringNode_terminated;
        _inf_value1->kind=(void*)sSStringNode_kind;
        __result160__ = __result_obj__ = ((struct sNode*)(right_value337=_inf_value1));
        come_call_finalizer2(list$1sNodephp_finalize,exps_196, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,value_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sSStringNode_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value331 = come_decrement_ref_count2(right_value331, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sSStringNode_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value337) { right_value337 = come_decrement_ref_count2(right_value337, ((struct sNode*)right_value337)->finalize, ((struct sNode*)right_value337)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result160__;
        come_call_finalizer2(list$1sNodephp_finalize,exps_196, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,value_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional218=*info->p==34,        _if_conditional218) {
            info->p++;
            sline_203=info->sline;
            value_204=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value339=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value338=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1175, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value338, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            while(_while_condtional16=1,            _while_condtional16) {
                if(_if_conditional219=*info->p==34,                _if_conditional219) {
                    info->p++;
                    p_205=info->p;
                    sline_206=info->sline;
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    if(_if_conditional220=*info->p==34,                    _if_conditional220) {
                        info->p++;
                    }
                    else {
                        info->p=p_205;
                        info->sline=sline_206;
                        break;
                    }
                }
                else {
                    if(_if_conditional221=*info->p==92,                    _if_conditional221) {
                        buffer_append_char(value_204,92);
                        info->p++;
                        if(_if_conditional222=*info->p==34,                        _if_conditional222) {
                            buffer_append_char(value_204,34);
                            info->p++;
                        }
                        else {
                            buffer_append_char(value_204,*info->p);
                            info->p++;
                        }
                    }
                    else {
                        if(_if_conditional223=*info->p==0,                        _if_conditional223) {
                            sline2_207=info->sline;
                            info->sline=sline_203;
                            err_msg(info,"close \" to make c string value");
                            info->sline=sline2_207;
                            exit(2);
                        }
                        else {
                            if(_if_conditional224=*info->p==10,                            _if_conditional224) {
                                info->sline++;
                            }
                            buffer_append_char(value_204,*info->p);
                            info->p++;
                        }
                    }
                }
            }
            skip_spaces_and_lf(info);
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1227, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sStrNode*)(right_value342=sStrNode_initialize((struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(right_value340=(struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1227, "sStrNode")))),(char*)come_increment_ref_count(((char*)(right_value341=buffer_to_string(value_204)))),sline_203,info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sStrNode_finalize;
            _inf_value2->clone=(void*)sStrNode_clone;
            _inf_value2->compile=(void*)sStrNode_compile;
            _inf_value2->sline=(void*)sStrNode_sline;
            _inf_value2->sname=(void*)sStrNode_sname;
            _inf_value2->terminated=(void*)sStrNode_terminated;
            _inf_value2->kind=(void*)sStrNode_kind;
            __result163__ = __result_obj__ = ((struct sNode*)(right_value346=_inf_value2));
            come_call_finalizer2(buffer_finalize,value_204, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sStrNode_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            right_value341 = come_decrement_ref_count2(right_value341, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sStrNode_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value346) { right_value346 = come_decrement_ref_count2(right_value346, ((struct sNode*)right_value346)->finalize, ((struct sNode*)right_value346)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result163__;
            come_call_finalizer2(buffer_finalize,value_204, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional231=*info->p==47,            _if_conditional231) {
                info->p++;
                sline_209=info->sline;
                buf_210=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value348=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value347=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1234, "buffer"))))))));
                come_call_finalizer2(buffer_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(buffer_finalize,right_value348, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                while(_while_condtional17=(_Bool)1,                _while_condtional17) {
                    if(_if_conditional232=*info->p==92&&*(info->p+1)==47,                    _if_conditional232) {
                        info->p++;
                        buffer_append_char(buf_210,*info->p);
                        info->p++;
                    }
                    else {
                        if(_if_conditional233=*info->p==47,                        _if_conditional233) {
                            info->p++;
                            break;
                        }
                        else {
                            if(_if_conditional234=*info->p==0,                            _if_conditional234) {
                                err_msg(info,"require closing / for regex");
                                exit(5);
                            }
                            else {
                                buffer_append_char(buf_210,*info->p);
                                info->p++;
                            }
                        }
                    }
                }
                global_211=(_Bool)0;
                ignore_case_212=(_Bool)0;
                while(_while_condtional18=*info->p==103||*info->p==105,                _while_condtional18) {
                    if(_if_conditional235=*info->p==103,                    _if_conditional235) {
                        info->p++;
                        global_211=(_Bool)1;
                    }
                    else {
                        if(_if_conditional236=*info->p==105,                        _if_conditional236) {
                            info->p++;
                            ignore_case_212=(_Bool)1;
                        }
                        else {
                            break;
                        }
                    }
                }
                skip_spaces_and_lf(info);
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1273, "struct sNode");
                _inf_obj_value3=come_increment_ref_count(((struct sRegexNode*)(right_value351=sRegexNode_initialize((struct sRegexNode*)come_increment_ref_count(((struct sRegexNode*)(right_value349=(struct sRegexNode*)come_calloc(1, sizeof(struct sRegexNode)*(1), "06str.c", 1273, "sRegexNode")))),(char*)come_increment_ref_count(((char*)(right_value350=buffer_to_string(buf_210)))),global_211,ignore_case_212,sline_209,info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sRegexNode_finalize;
                _inf_value3->clone=(void*)sRegexNode_clone;
                _inf_value3->compile=(void*)sRegexNode_compile;
                _inf_value3->sline=(void*)sRegexNode_sline;
                _inf_value3->sname=(void*)sRegexNode_sname;
                _inf_value3->terminated=(void*)sRegexNode_terminated;
                _inf_value3->kind=(void*)sRegexNode_kind;
                __result166__ = __result_obj__ = ((struct sNode*)(right_value355=_inf_value3));
                come_call_finalizer2(buffer_finalize,buf_210, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sRegexNode_finalize,right_value349, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                right_value350 = come_decrement_ref_count2(right_value350, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sRegexNode_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value355) { right_value355 = come_decrement_ref_count2(right_value355, ((struct sNode*)right_value355)->finalize, ((struct sNode*)right_value355)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result166__;
                come_call_finalizer2(buffer_finalize,buf_210, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(_if_conditional245=*info->p==39,                _if_conditional245) {
                    info->p++;
                    if(_if_conditional246=*info->p==92,                    _if_conditional246) {
                        info->p++;
                        if(_if_conditional247=xisdigit(*info->p),                        _if_conditional247) {
                            n_215=0;
                            while(_while_condtional19=xisdigit(*info->p),                            _while_condtional19) {
                                n_215=n_215*8+*info->p-48;
                                info->p++;
                            }
                            c_214=n_215;
                        }
                        else {
                            switch (*info->p) {
                                case 110:
                                c_214=10;
                                info->p++;
                                break;
                                case 116:
                                c_214=9;
                                info->p++;
                                break;
                                case 114:
                                c_214=13;
                                info->p++;
                                break;
                                case 97:
                                c_214=7;
                                info->p++;
                                break;
                                case 102:
                                c_214=12;
                                info->p++;
                                break;
                                case 118:
                                c_214=11;
                                info->p++;
                                break;
                                case 98:
                                c_214=8;
                                info->p++;
                                break;
                                case 92:
                                c_214=92;
                                info->p++;
                                break;
                                case 48:
                                c_214=0;
                                info->p++;
                                if(_if_conditional248=xisdigit(*info->p),                                _if_conditional248) {
                                    n_216=0;
                                    while(_while_condtional20=xisdigit(*info->p),                                    _while_condtional20) {
                                        n_216=n_216*8+*info->p-48;
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                    }
                                    c_214=n_216;
                                }
                                break;
                                case 120:
                                case 88:
                                {
                                    info->p++;
                                    char buf_217[128];
                                    memset(&buf_217, 0, sizeof(char)                                    *(128)                                    );
                                    strncpy(buf_217,"0x",128);
                                    while(_while_condtional21=*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70,                                    _while_condtional21) {
                                        char buf2_218[2];
                                        memset(&buf2_218, 0, sizeof(char)                                        *(2)                                        );
                                        buf2_218[0]=*info->p;
                                        buf2_218[1]=0;
                                        info->p++;
                                        strncat(buf_217,buf2_218,128);
                                    }
                                    n_219=strtoll(buf_217,((void*)0),0);
                                    c_214=n_219;
                                }
                                break;
                                default:
                                c_214=*info->p;
                                info->p++;
                                break;
                            }
                        }
                    }
                    else {
                        c_214=*info->p;
                        info->p++;
                    }
                    if(_if_conditional249=*info->p!=39,                    _if_conditional249) {
                        err_msg(info,"close \' to make character value");
                    }
                    else {
                        info->p++;
                        skip_spaces_and_lf(info);
                        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1390, "struct sNode");
                        _inf_obj_value4=come_increment_ref_count(((struct sCharNode*)(right_value357=sCharNode_initialize((struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(right_value356=(struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "06str.c", 1390, "sCharNode")))),c_214,info))));
                        _inf_value4->_protocol_obj=_inf_obj_value4;
                        _inf_value4->finalize=(void*)sCharNode_finalize;
                        _inf_value4->clone=(void*)sCharNode_clone;
                        _inf_value4->compile=(void*)sCharNode_compile;
                        _inf_value4->sline=(void*)sCharNode_sline;
                        _inf_value4->sname=(void*)sCharNode_sname;
                        _inf_value4->terminated=(void*)sCharNode_terminated;
                        _inf_value4->kind=(void*)sCharNode_kind;
                        __result169__ = __result_obj__ = ((struct sNode*)(right_value360=_inf_value4));
                        come_call_finalizer2(sCharNode_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sCharNode_finalize,right_value357, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value360) { right_value360 = come_decrement_ref_count2(right_value360, ((struct sNode*)right_value360)->finalize, ((struct sNode*)right_value360)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result169__;
                    }
                }
                else {
                    if(_if_conditional255=*info->p==76&&*(info->p+1)==39,                    _if_conditional255) {
                        info->p+=2;
                        if(_if_conditional256=*info->p==92,                        _if_conditional256) {
                            info->p++;
                            if(_if_conditional257=xisdigit(*info->p),                            _if_conditional257) {
                                n_222=0;
                                while(_while_condtional22=xisdigit(*info->p),                                _while_condtional22) {
                                    n_222=n_222*8+*info->p-48;
                                    info->p++;
                                }
                                c_221=n_222;
                            }
                            else {
                                switch (*info->p) {
                                    case 110:
                                    c_221=10;
                                    info->p++;
                                    break;
                                    case 116:
                                    c_221=9;
                                    info->p++;
                                    break;
                                    case 114:
                                    c_221=13;
                                    info->p++;
                                    break;
                                    case 97:
                                    c_221=7;
                                    info->p++;
                                    break;
                                    case 92:
                                    c_221=92;
                                    info->p++;
                                    break;
                                    case 48:
                                    c_221=0;
                                    info->p++;
                                    if(_if_conditional258=xisdigit(*info->p),                                    _if_conditional258) {
                                        n_223=0;
                                        while(_while_condtional23=xisdigit(*info->p),                                        _while_condtional23) {
                                            n_223=n_223*8+*info->p-48;
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                        }
                                        c_221=n_223;
                                    }
                                    break;
                                    case 120:
                                    case 88:
                                    {
                                        info->p++;
                                        char buf_224[128];
                                        memset(&buf_224, 0, sizeof(char)                                        *(128)                                        );
                                        strncpy(buf_224,"0x",128);
                                        while(_while_condtional24=*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70,                                        _while_condtional24) {
                                            char buf2_225[2];
                                            memset(&buf2_225, 0, sizeof(char)                                            *(2)                                            );
                                            buf2_225[0]=*info->p;
                                            buf2_225[1]=0;
                                            info->p++;
                                            strncat(buf_224,buf2_225,128);
                                        }
                                        n_226=strtoll(buf_224,((void*)0),0);
                                        c_221=n_226;
                                    }
                                    break;
                                    default:
                                    c_221=*info->p;
                                    info->p++;
                                    break;
                                }
                            }
                        }
                        else {
                            p2_227=*(unsigned char*)info->p;
                            if(_if_conditional259=p2_227>127,                            _if_conditional259) {
                                char str_229[4+1];
                                memset(&str_229, 0, sizeof(char)                                *(4+1)                                );
                                size_228=((p2_227&128)>>7)+((p2_227&64)>>6)+((p2_227&32)>>5)+((p2_227&16)>>4);
                                if(_if_conditional260=size_228>4,                                _if_conditional260) {
                                    err_msg(info,"invalid utf-8 character. MB_LEN_MAX");
                                    info->err_num++;
                                }
                                else {
                                    memcpy(str_229,info->p,size_228);
                                    str_229[size_228]=0;
                                    if(_if_conditional261=mbtowc(&c_221,str_229,size_228)<0,                                    _if_conditional261) {
                                        perror("mbtowc");
                                        err_msg(info,"invalid utf-8 character. mbtowc");
                                        info->err_num++;
                                        c_221=0;
                                    }
                                    info->p+=size_228;
                                }
                            }
                            else {
                                c_221=*info->p;
                                info->p++;
                            }
                        }
                        if(_if_conditional262=*info->p!=39,                        _if_conditional262) {
                            err_msg(info,"close \' to make character value");
                            info->err_num++;
                        }
                        else {
                            info->p++;
                            skip_spaces_and_lf(info);
                            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1526, "struct sNode");
                            _inf_obj_value5=come_increment_ref_count(((struct sWCharNode*)(right_value362=sWCharNode_initialize((struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(right_value361=(struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "06str.c", 1526, "sWCharNode")))),c_221,info))));
                            _inf_value5->_protocol_obj=_inf_obj_value5;
                            _inf_value5->finalize=(void*)sWCharNode_finalize;
                            _inf_value5->clone=(void*)sWCharNode_clone;
                            _inf_value5->compile=(void*)sWCharNode_compile;
                            _inf_value5->sline=(void*)sWCharNode_sline;
                            _inf_value5->sname=(void*)sWCharNode_sname;
                            _inf_value5->terminated=(void*)sWCharNode_terminated;
                            _inf_value5->kind=(void*)sWCharNode_kind;
                            __result172__ = __result_obj__ = ((struct sNode*)(right_value365=_inf_value5));
                            come_call_finalizer2(sWCharNode_finalize,right_value361, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sWCharNode_finalize,right_value362, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value365) { right_value365 = come_decrement_ref_count2(right_value365, ((struct sNode*)right_value365)->finalize, ((struct sNode*)right_value365)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result172__;
                        }
                    }
                    else {
                        if(_if_conditional268=*info->p==76&&*(info->p+1)==34,                        _if_conditional268) {
                            info->p+=2;
                            sline_231=info->sline;
                            value_232=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value367=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value366=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1535, "buffer"))))))));
                            come_call_finalizer2(buffer_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(buffer_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            while(_while_condtional25=1,                            _while_condtional25) {
                                if(_if_conditional269=*info->p==34,                                _if_conditional269) {
                                    info->p++;
                                    p_233=info->p;
                                    sline_234=info->sline;
                                    skip_spaces_and_lf(info);
                                    if(_if_conditional270=*info->p==34,                                    _if_conditional270) {
                                        info->p++;
                                    }
                                    else {
                                        info->p=p_233;
                                        info->sline=sline_234;
                                        break;
                                    }
                                }
                                else {
                                    if(_if_conditional271=*info->p==92,                                    _if_conditional271) {
                                        info->p++;
                                        if(_if_conditional272=xisdigit(*info->p),                                        _if_conditional272) {
                                            len_235=0;
                                            n_236=0;
                                            while(_while_condtional26=xisdigit(*info->p)&&len_235<3,                                            _while_condtional26) {
                                                n_236=n_236*8+*info->p-48;
                                                info->p++;
                                                len_235++;
                                            }
                                            buffer_append_char(value_232,n_236);
                                        }
                                        else {
                                            if(_if_conditional273=*info->p==120||*info->p==88,                                            _if_conditional273) {
                                                info->p++;
                                                char buf_237[128];
                                                memset(&buf_237, 0, sizeof(char)                                                *(128)                                                );
                                                strncpy(buf_237,"0x",128);
                                                while(_while_condtional27=*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70,                                                _while_condtional27) {
                                                    char buf2_238[2];
                                                    memset(&buf2_238, 0, sizeof(char)                                                    *(2)                                                    );
                                                    buf2_238[0]=*info->p;
                                                    buf2_238[1]=0;
                                                    info->p++;
                                                    strncat(buf_237,buf2_238,128);
                                                }
                                                n_240=strtoll(buf_237,((void*)0),0);
                                                buffer_append_char(value_232,(char)n_240);
                                            }
                                            else {
                                                switch (*info->p) {
                                                    case 48:
                                                    buffer_append_char(value_232,0);
                                                    info->p++;
                                                    break;
                                                    case 110:
                                                    buffer_append_char(value_232,10);
                                                    info->p++;
                                                    break;
                                                    case 116:
                                                    buffer_append_char(value_232,9);
                                                    info->p++;
                                                    break;
                                                    case 114:
                                                    buffer_append_char(value_232,13);
                                                    info->p++;
                                                    break;
                                                    case 118:
                                                    buffer_append_char(value_232,11);
                                                    info->p++;
                                                    break;
                                                    case 102:
                                                    buffer_append_char(value_232,12);
                                                    info->p++;
                                                    break;
                                                    case 97:
                                                    buffer_append_char(value_232,7);
                                                    info->p++;
                                                    break;
                                                    case 98:
                                                    buffer_append_char(value_232,8);
                                                    info->p++;
                                                    break;
                                                    case 92:
                                                    buffer_append_char(value_232,92);
                                                    info->p++;
                                                    break;
                                                    default:
                                                    buffer_append_char(value_232,*info->p);
                                                    info->p++;
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                    else {
                                        if(_if_conditional274=*info->p==0,                                        _if_conditional274) {
                                            sline2_241=info->sline;
                                            info->sline=sline_231;
                                            err_msg(info,"close \" to make c string value");
                                            exit(2);
                                        }
                                        else {
                                            if(_if_conditional275=*info->p==10,                                            _if_conditional275) {
                                                info->sline++;
                                            }
                                            buffer_append_char(value_232,*info->p);
                                            info->p++;
                                        }
                                    }
                                }
                            }
                            skip_spaces_and_lf(info);
                            len_242=value_232->len;
                            wstr_243=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value368=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_242+1)), "06str.c", 1658, "int"))));
                            right_value368 = come_decrement_ref_count2(right_value368, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            str_244=value_232->buf;
                            if(_if_conditional276=mbstowcs(wstr_243,str_244,len_242+1)<0,                            _if_conditional276) {
                                perror("mbstowcs");
                                exit(1);
                            }
                            wstr_243[len_242]=0;
                            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1669, "struct sNode");
                            _inf_obj_value6=come_increment_ref_count(((struct sWStringNode*)(right_value370=sWStringNode_initialize((struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(right_value369=(struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "06str.c", 1669, "sWStringNode")))),(unsigned int*)come_increment_ref_count(wstr_243),sline_231,info))));
                            _inf_value6->_protocol_obj=_inf_obj_value6;
                            _inf_value6->finalize=(void*)sWStringNode_finalize;
                            _inf_value6->clone=(void*)sWStringNode_clone;
                            _inf_value6->compile=(void*)sWStringNode_compile;
                            _inf_value6->sline=(void*)sWStringNode_sline;
                            _inf_value6->sname=(void*)sWStringNode_sname;
                            _inf_value6->terminated=(void*)sWStringNode_terminated;
                            _inf_value6->kind=(void*)sWStringNode_kind;
                            __result175__ = __result_obj__ = ((struct sNode*)(right_value374=_inf_value6));
                            come_call_finalizer2(buffer_finalize,value_232, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            wstr_243 = come_decrement_ref_count2(wstr_243, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sWStringNode_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sWStringNode_finalize,right_value370, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value374) { right_value374 = come_decrement_ref_count2(right_value374, ((struct sNode*)right_value374)->finalize, ((struct sNode*)right_value374)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result175__;
                            come_call_finalizer2(buffer_finalize,value_232, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            wstr_243 = come_decrement_ref_count2(wstr_243, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        else {
                            if(_if_conditional283=(*info->p==115||*info->p==83)&&*(info->p+1)==34,                            _if_conditional283) {
                                info->p+=2;
                                sline_246=info->sline;
                                exps_247=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value376=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value375=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1677, "list$1sNodeph"))))))));
                                come_call_finalizer2(list$1sNodephp_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(list$1sNodephp_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                value_248=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value378=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value377=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1678, "buffer"))))))));
                                come_call_finalizer2(buffer_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(buffer_finalize,right_value378, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                while(_while_condtional28=1,                                _while_condtional28) {
                                    if(_if_conditional284=*info->p==34,                                    _if_conditional284) {
                                        info->p++;
                                        p_249=info->p;
                                        sline_250=info->sline;
                                        skip_spaces_and_lf(info);
                                        if(_if_conditional285=*info->p==34,                                        _if_conditional285) {
                                            info->p++;
                                        }
                                        else {
                                            info->p=p_249;
                                            info->sline=sline_250;
                                            break;
                                        }
                                    }
                                    else {
                                        if(_if_conditional286=*info->p==37,                                        _if_conditional286) {
                                            buffer_append_char(value_248,37);
                                            buffer_append_char(value_248,37);
                                            info->p++;
                                        }
                                        else {
                                            if(_if_conditional287=*info->p==36,                                            _if_conditional287) {
                                                info->p++;
                                                exp_251=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value379=expression_v13(info))));
                                                if(right_value379) { right_value379 = come_decrement_ref_count2(right_value379, ((struct sNode*)right_value379)->finalize, ((struct sNode*)right_value379)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                list$1sNodeph_add(exps_247,(struct sNode*)come_increment_ref_count(exp_251));
                                                buffer_append_str(value_248,"%s");
                                                p_252=info->p-1;
                                                while(_while_condtional29=*p_252==32||*p_252==9,                                                _while_condtional29) {
                                                    p_252--;
                                                }
                                                info->p=p_252+1;
                                                if(exp_251) { exp_251 = come_decrement_ref_count2(exp_251, ((struct sNode*)exp_251)->finalize, ((struct sNode*)exp_251)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            else {
                                                if(_if_conditional288=*info->p==92,                                                _if_conditional288) {
                                                    buffer_append_char(value_248,92);
                                                    info->p++;
                                                    if(_if_conditional289=xisdigit(*info->p),                                                    _if_conditional289) {
                                                        len_253=0;
                                                        while(_while_condtional30=xisdigit(*info->p)&&len_253<3,                                                        _while_condtional30) {
                                                            buffer_append_char(value_248,*info->p);
                                                            info->p++;
                                                            len_253++;
                                                        }
                                                    }
                                                    else {
                                                        if(_if_conditional290=*info->p==120||*info->p==88,                                                        _if_conditional290) {
                                                            buffer_append_char(value_248,*info->p);
                                                            info->p++;
                                                            while(_while_condtional31=*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70,                                                            _while_condtional31) {
                                                                buffer_append_char(value_248,*info->p);
                                                                info->p++;
                                                            }
                                                        }
                                                        else {
                                                            if(_if_conditional291=*info->p==123,                                                            _if_conditional291) {
                                                                info->p++;
                                                                exp_254=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value380=expression_v13(info))));
                                                                if(right_value380) { right_value380 = come_decrement_ref_count2(right_value380, ((struct sNode*)right_value380)->finalize, ((struct sNode*)right_value380)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                list$1sNodeph_add(exps_247,(struct sNode*)come_increment_ref_count(exp_254));
                                                                if(_if_conditional292=*info->p==125,                                                                _if_conditional292) {
                                                                    info->p++;
                                                                }
                                                                buffer_append_str(value_248,"%s");
                                                                if(exp_254) { exp_254 = come_decrement_ref_count2(exp_254, ((struct sNode*)exp_254)->finalize, ((struct sNode*)exp_254)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
                                                            else {
                                                                switch (*info->p) {
                                                                    case 48:
                                                                    buffer_append_char(value_248,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 110:
                                                                    buffer_append_char(value_248,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 116:
                                                                    buffer_append_char(value_248,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 114:
                                                                    buffer_append_char(value_248,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 118:
                                                                    buffer_append_char(value_248,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 102:
                                                                    buffer_append_char(value_248,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 97:
                                                                    buffer_append_char(value_248,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 98:
                                                                    buffer_append_char(value_248,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 92:
                                                                    buffer_append_char(value_248,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    default:
                                                                    buffer_append_char(value_248,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    if(_if_conditional293=*info->p==0,                                                    _if_conditional293) {
                                                        sline2_255=info->sline;
                                                        info->sline=sline_246;
                                                        err_msg(info,"close \" to make embbeded string value");
                                                        exit(2);
                                                    }
                                                    else {
                                                        if(_if_conditional294=*info->p==10,                                                        _if_conditional294) {
                                                            info->sline++;
                                                        }
                                                        buffer_append_char(value_248,*info->p);
                                                        info->p++;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                skip_spaces_and_lf(info);
                                _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1823, "struct sNode");
                                _inf_obj_value7=come_increment_ref_count(((struct sSStringNode*)(right_value383=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(right_value381=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 1823, "sSStringNode")))),(char*)come_increment_ref_count(((char*)(right_value382=buffer_to_string(value_248)))),(struct list$1sNodeph*)come_increment_ref_count(exps_247),sline_246,info))));
                                _inf_value7->_protocol_obj=_inf_obj_value7;
                                _inf_value7->finalize=(void*)sSStringNode_finalize;
                                _inf_value7->clone=(void*)sSStringNode_clone;
                                _inf_value7->compile=(void*)sSStringNode_compile;
                                _inf_value7->sline=(void*)sSStringNode_sline;
                                _inf_value7->sname=(void*)sSStringNode_sname;
                                _inf_value7->terminated=(void*)sSStringNode_terminated;
                                _inf_value7->kind=(void*)sSStringNode_kind;
                                __result178__ = __result_obj__ = ((struct sNode*)(right_value388=_inf_value7));
                                come_call_finalizer2(list$1sNodephp_finalize,exps_247, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(buffer_finalize,value_248, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sSStringNode_finalize,right_value381, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                right_value382 = come_decrement_ref_count2(right_value382, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sSStringNode_finalize,right_value383, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(right_value388) { right_value388 = come_decrement_ref_count2(right_value388, ((struct sNode*)right_value388)->finalize, ((struct sNode*)right_value388)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result178__;
                                come_call_finalizer2(list$1sNodephp_finalize,exps_247, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(buffer_finalize,value_248, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            else {
                                if(_if_conditional303=*info->p==91,                                _if_conditional303) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                    p_257=info->p;
                                    no_comma_258=info->no_comma;
                                    info->no_comma=(_Bool)1;
                                    node_259=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value389=expression_v13(info))));
                                    if(right_value389) { right_value389 = come_decrement_ref_count2(right_value389, ((struct sNode*)right_value389)->finalize, ((struct sNode*)right_value389)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    info->no_comma=no_comma_258;
                                    p2_260=info->p;
                                    first_element_source_261=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value391=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value390=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1840, "buffer"))))))));
                                    come_call_finalizer2(buffer_finalize,right_value390, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(buffer_finalize,right_value391, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    buffer_append(first_element_source_261,p_257,p2_260-p_257);
                                    buffer_append_char(first_element_source_261,0);
                                    list_elements_262=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value393=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value392=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1845, "list$1sNodeph"))))))));
                                    come_call_finalizer2(list$1sNodephp_finalize,right_value392, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(list$1sNodephp_finalize,right_value393, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    map_keys_263=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value395=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value394=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1847, "list$1sNodeph"))))))));
                                    come_call_finalizer2(list$1sNodephp_finalize,right_value394, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(list$1sNodephp_finalize,right_value395, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    map_elements_264=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value397=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value396=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1848, "list$1sNodeph"))))))));
                                    come_call_finalizer2(list$1sNodephp_finalize,right_value396, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(list$1sNodephp_finalize,right_value397, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional304=*info->p==58,                                    _if_conditional304) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                        list$1sNodeph_push_back(map_keys_263,(struct sNode*)come_increment_ref_count(node_259));
                                        no_comma_265=info->no_comma;
                                        info->no_comma=(_Bool)1;
                                        node2_266=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value398=expression_v13(info))));
                                        if(right_value398) { right_value398 = come_decrement_ref_count2(right_value398, ((struct sNode*)right_value398)->finalize, ((struct sNode*)right_value398)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        info->no_comma=no_comma_265;
                                        list$1sNodeph_push_back(map_elements_264,(struct sNode*)come_increment_ref_count(node2_266));
                                        if(_if_conditional305=*info->p==93,                                        _if_conditional305) {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1870, "struct sNode");
                                            _inf_obj_value8=come_increment_ref_count(((struct sMapNode*)(right_value400=sMapNode_initialize((struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value399=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 1870, "sMapNode")))),(struct list$1sNodeph*)come_increment_ref_count(map_keys_263),(struct list$1sNodeph*)come_increment_ref_count(map_elements_264),info))));
                                            _inf_value8->_protocol_obj=_inf_obj_value8;
                                            _inf_value8->finalize=(void*)sMapNode_finalize;
                                            _inf_value8->clone=(void*)sMapNode_clone;
                                            _inf_value8->compile=(void*)sMapNode_compile;
                                            _inf_value8->sline=(void*)sMapNode_sline;
                                            _inf_value8->sname=(void*)sMapNode_sname;
                                            _inf_value8->terminated=(void*)sMapNode_terminated;
                                            _inf_value8->kind=(void*)sMapNode_kind;
                                            __result181__ = __result_obj__ = ((struct sNode*)(right_value405=_inf_value8));
                                            if(node2_266) { node2_266 = come_decrement_ref_count2(node2_266, ((struct sNode*)node2_266)->finalize, ((struct sNode*)node2_266)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            if(node_259) { node_259 = come_decrement_ref_count2(node_259, ((struct sNode*)node_259)->finalize, ((struct sNode*)node_259)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            come_call_finalizer2(buffer_finalize,first_element_source_261, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(list$1sNodephp_finalize,list_elements_262, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(list$1sNodephp_finalize,map_keys_263, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(list$1sNodephp_finalize,map_elements_264, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(sMapNode_finalize,right_value399, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer2(sMapNode_finalize,right_value400, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            if(right_value405) { right_value405 = come_decrement_ref_count2(right_value405, ((struct sNode*)right_value405)->finalize, ((struct sNode*)right_value405)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            return __result181__;
                                        }
                                        else {
                                            expected_next_character(44,info);
                                            while(_while_condtional32=(_Bool)1,                                            _while_condtional32) {
                                                no_comma_268=info->no_comma;
                                                info->no_comma=(_Bool)1;
                                                node2_269=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value406=expression_v13(info))));
                                                if(right_value406) { right_value406 = come_decrement_ref_count2(right_value406, ((struct sNode*)right_value406)->finalize, ((struct sNode*)right_value406)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                info->no_comma=no_comma_268;
                                                list$1sNodeph_push_back(map_keys_263,(struct sNode*)come_increment_ref_count(node2_269));
                                                expected_next_character(58,info);
                                                no_comma_268=info->no_comma;
                                                info->no_comma=(_Bool)1;
                                                node3_270=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value407=expression_v13(info))));
                                                if(right_value407) { right_value407 = come_decrement_ref_count2(right_value407, ((struct sNode*)right_value407)->finalize, ((struct sNode*)right_value407)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                info->no_comma=no_comma_268;
                                                list$1sNodeph_push_back(map_elements_264,(struct sNode*)come_increment_ref_count(node3_270));
                                                if(_if_conditional314=*info->p==0,                                                _if_conditional314) {
                                                    err_msg(info,"invalid source end");
                                                    exit(2);
                                                }
                                                else {
                                                    if(_if_conditional315=*info->p==44,                                                    _if_conditional315) {
                                                        info->p++;
                                                        skip_spaces_and_lf(info);
                                                    }
                                                    else {
                                                        if(_if_conditional316=*info->p==93,                                                        _if_conditional316) {
                                                            info->p++;
                                                            skip_spaces_and_lf(info);
                                                            if(node2_269) { node2_269 = come_decrement_ref_count2(node2_269, ((struct sNode*)node2_269)->finalize, ((struct sNode*)node2_269)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            if(node3_270) { node3_270 = come_decrement_ref_count2(node3_270, ((struct sNode*)node3_270)->finalize, ((struct sNode*)node3_270)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            break;
                                                        }
                                                        else {
                                                            err_msg(info,"invalid character(%c)(3)",*info->p);
                                                            exit(2);
                                                        }
                                                    }
                                                }
                                                if(node2_269) { node2_269 = come_decrement_ref_count2(node2_269, ((struct sNode*)node2_269)->finalize, ((struct sNode*)node2_269)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                if(node3_270) { node3_270 = come_decrement_ref_count2(node3_270, ((struct sNode*)node3_270)->finalize, ((struct sNode*)node3_270)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1915, "struct sNode");
                                            _inf_obj_value9=come_increment_ref_count(((struct sMapNode*)(right_value409=sMapNode_initialize((struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value408=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 1915, "sMapNode")))),(struct list$1sNodeph*)come_increment_ref_count(map_keys_263),(struct list$1sNodeph*)come_increment_ref_count(map_elements_264),info))));
                                            _inf_value9->_protocol_obj=_inf_obj_value9;
                                            _inf_value9->finalize=(void*)sMapNode_finalize;
                                            _inf_value9->clone=(void*)sMapNode_clone;
                                            _inf_value9->compile=(void*)sMapNode_compile;
                                            _inf_value9->sline=(void*)sMapNode_sline;
                                            _inf_value9->sname=(void*)sMapNode_sname;
                                            _inf_value9->terminated=(void*)sMapNode_terminated;
                                            _inf_value9->kind=(void*)sMapNode_kind;
                                            __result184__ = __result_obj__ = ((struct sNode*)(right_value414=_inf_value9));
                                            if(node2_266) { node2_266 = come_decrement_ref_count2(node2_266, ((struct sNode*)node2_266)->finalize, ((struct sNode*)node2_266)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            if(node_259) { node_259 = come_decrement_ref_count2(node_259, ((struct sNode*)node_259)->finalize, ((struct sNode*)node_259)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            come_call_finalizer2(buffer_finalize,first_element_source_261, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(list$1sNodephp_finalize,list_elements_262, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(list$1sNodephp_finalize,map_keys_263, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(list$1sNodephp_finalize,map_elements_264, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(sMapNode_finalize,right_value408, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer2(sMapNode_finalize,right_value409, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            if(right_value414) { right_value414 = come_decrement_ref_count2(right_value414, ((struct sNode*)right_value414)->finalize, ((struct sNode*)right_value414)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            return __result184__;
                                        }
                                        if(node2_266) { node2_266 = come_decrement_ref_count2(node2_266, ((struct sNode*)node2_266)->finalize, ((struct sNode*)node2_266)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        if(_if_conditional325=*info->p==93,                                        _if_conditional325) {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                            list$1sNodeph_push_back(list_elements_262,(struct sNode*)come_increment_ref_count(node_259));
                                        }
                                        else {
                                            if(_if_conditional326=*info->p==44,                                            _if_conditional326) {
                                                info->p++;
                                                skip_spaces_and_lf(info);
                                                list$1sNodeph_push_back(list_elements_262,(struct sNode*)come_increment_ref_count(node_259));
                                                while(_while_condtional33=(_Bool)1,                                                _while_condtional33) {
                                                    no_comma_272=info->no_comma;
                                                    info->no_comma=(_Bool)1;
                                                    node2_273=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value415=expression_v13(info))));
                                                    if(right_value415) { right_value415 = come_decrement_ref_count2(right_value415, ((struct sNode*)right_value415)->finalize, ((struct sNode*)right_value415)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    info->no_comma=no_comma_272;
                                                    list$1sNodeph_push_back(list_elements_262,(struct sNode*)come_increment_ref_count(node2_273));
                                                    if(_if_conditional327=*info->p==0,                                                    _if_conditional327) {
                                                        err_msg(info,"invalid source end");
                                                        exit(2);
                                                    }
                                                    else {
                                                        if(_if_conditional328=*info->p==44,                                                        _if_conditional328) {
                                                            info->p++;
                                                            skip_spaces_and_lf(info);
                                                        }
                                                        else {
                                                            if(_if_conditional329=*info->p==93,                                                            _if_conditional329) {
                                                                info->p++;
                                                                skip_spaces_and_lf(info);
                                                                if(node2_273) { node2_273 = come_decrement_ref_count2(node2_273, ((struct sNode*)node2_273)->finalize, ((struct sNode*)node2_273)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                break;
                                                            }
                                                            else {
                                                                err_msg(info,"invalid character(%c)(4)",*info->p);
                                                                exit(2);
                                                            }
                                                        }
                                                    }
                                                    if(node2_273) { node2_273 = come_decrement_ref_count2(node2_273, ((struct sNode*)node2_273)->finalize, ((struct sNode*)node2_273)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                            }
                                            else {
                                                err_msg(info,"invalid character(%c)(5)",*info->p);
                                                exit(2);
                                            }
                                        }
                                    }
                                    if(_if_conditional330=list$1sNodeph_length(list_elements_262)>0,                                    _if_conditional330) {
                                        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1966, "struct sNode");
                                        _inf_obj_value10=come_increment_ref_count(((struct sListNode*)(right_value417=sListNode_initialize((struct sListNode*)come_increment_ref_count(((struct sListNode*)(right_value416=(struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "06str.c", 1966, "sListNode")))),(struct list$1sNodeph*)come_increment_ref_count(list_elements_262),info))));
                                        _inf_value10->_protocol_obj=_inf_obj_value10;
                                        _inf_value10->finalize=(void*)sListNode_finalize;
                                        _inf_value10->clone=(void*)sListNode_clone;
                                        _inf_value10->compile=(void*)sListNode_compile;
                                        _inf_value10->sline=(void*)sListNode_sline;
                                        _inf_value10->sname=(void*)sListNode_sname;
                                        _inf_value10->terminated=(void*)sListNode_terminated;
                                        _inf_value10->kind=(void*)sListNode_kind;
                                        __result187__ = __result_obj__ = ((struct sNode*)(right_value421=_inf_value10));
                                        if(node_259) { node_259 = come_decrement_ref_count2(node_259, ((struct sNode*)node_259)->finalize, ((struct sNode*)node_259)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer2(buffer_finalize,first_element_source_261, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(list$1sNodephp_finalize,list_elements_262, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(list$1sNodephp_finalize,map_keys_263, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(list$1sNodephp_finalize,map_elements_264, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(sListNode_finalize,right_value416, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(sListNode_finalize,right_value417, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(right_value421) { right_value421 = come_decrement_ref_count2(right_value421, ((struct sNode*)right_value421)->finalize, ((struct sNode*)right_value421)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result187__;
                                    }
                                    else {
                                    }
                                    if(node_259) { node_259 = come_decrement_ref_count2(node_259, ((struct sNode*)node_259)->finalize, ((struct sNode*)node_259)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer2(buffer_finalize,first_element_source_261, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(list$1sNodephp_finalize,list_elements_262, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(list$1sNodephp_finalize,map_keys_263, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(list$1sNodephp_finalize,map_elements_264, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                else {
                                    ((struct sNode*)(right_value422=expression_node_v1(info)));
                                    if(right_value422) { right_value422 = come_decrement_ref_count2(right_value422, ((struct sNode*)right_value422)->finalize, ((struct sNode*)right_value422)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    __result188__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result188__;
}

static void sStrNode_finalize(struct sStrNode* self){
void* __result_obj__;
_Bool _if_conditional225;
_Bool _if_conditional226;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional225=self!=((void*)0)&&self->value!=((void*)0),                _if_conditional225) {
                    self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional226=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional226) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sStrNode* sStrNode_clone(struct sStrNode* self){
void* __result_obj__;
_Bool _if_conditional227;
struct sStrNode* __result161__;
void* right_value343;
struct sStrNode* result_208;
_Bool _if_conditional228;
void* right_value344;
char* __dec_obj116;
_Bool _if_conditional229;
_Bool _if_conditional230;
void* right_value345;
char* __dec_obj117;
struct sStrNode* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
right_value343 = (void*)0;
memset(&result_208, 0, sizeof(struct sStrNode*));
right_value344 = (void*)0;
right_value345 = (void*)0;
                if(_if_conditional227=self==(void*)0,                _if_conditional227) {
                    __result161__ = __result_obj__ = (void*)0;
                    return __result161__;
                }
                result_208=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(right_value343=(struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "sStrNode_clone", 3, "sStrNode"))));
                come_call_finalizer2(sStrNode_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional228=self!=((void*)0)&&self->value!=((void*)0),                _if_conditional228) {
                    __dec_obj116=result_208->value;
                    result_208->value=(char*)come_increment_ref_count(((char*)(right_value344=string_clone(self->value))));
                    __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value344 = come_decrement_ref_count2(right_value344, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional229=self!=((void*)0),                _if_conditional229) {
                    result_208->sline=self->sline;
                }
                if(_if_conditional230=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional230) {
                    __dec_obj117=result_208->sname;
                    result_208->sname=(char*)come_increment_ref_count(((char*)(right_value345=string_clone(self->sname))));
                    __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value345 = come_decrement_ref_count2(right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result162__ = __result_obj__ = result_208;
                come_call_finalizer2(sStrNode_finalize,result_208, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result162__;
                come_call_finalizer2(sStrNode_finalize,result_208, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sRegexNode_finalize(struct sRegexNode* self){
void* __result_obj__;
_Bool _if_conditional237;
_Bool _if_conditional238;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional237=self!=((void*)0)&&self->str!=((void*)0),                    _if_conditional237) {
                        self->str = come_decrement_ref_count2(self->str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional238=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional238) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sRegexNode* sRegexNode_clone(struct sRegexNode* self){
void* __result_obj__;
_Bool _if_conditional239;
struct sRegexNode* __result164__;
void* right_value352;
struct sRegexNode* result_213;
_Bool _if_conditional240;
void* right_value353;
char* __dec_obj118;
_Bool _if_conditional241;
_Bool _if_conditional242;
_Bool _if_conditional243;
_Bool _if_conditional244;
void* right_value354;
char* __dec_obj119;
struct sRegexNode* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
right_value352 = (void*)0;
memset(&result_213, 0, sizeof(struct sRegexNode*));
right_value353 = (void*)0;
right_value354 = (void*)0;
                    if(_if_conditional239=self==(void*)0,                    _if_conditional239) {
                        __result164__ = __result_obj__ = (void*)0;
                        return __result164__;
                    }
                    result_213=(struct sRegexNode*)come_increment_ref_count(((struct sRegexNode*)(right_value352=(struct sRegexNode*)come_calloc(1, sizeof(struct sRegexNode)*(1), "sRegexNode_clone", 3, "sRegexNode"))));
                    come_call_finalizer2(sRegexNode_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional240=self!=((void*)0)&&self->str!=((void*)0),                    _if_conditional240) {
                        __dec_obj118=result_213->str;
                        result_213->str=(char*)come_increment_ref_count(((char*)(right_value353=string_clone(self->str))));
                        __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value353 = come_decrement_ref_count2(right_value353, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional241=self!=((void*)0),                    _if_conditional241) {
                        result_213->global=self->global;
                    }
                    if(_if_conditional242=self!=((void*)0),                    _if_conditional242) {
                        result_213->ignore_case=self->ignore_case;
                    }
                    if(_if_conditional243=self!=((void*)0),                    _if_conditional243) {
                        result_213->sline=self->sline;
                    }
                    if(_if_conditional244=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional244) {
                        __dec_obj119=result_213->sname;
                        result_213->sname=(char*)come_increment_ref_count(((char*)(right_value354=string_clone(self->sname))));
                        __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value354 = come_decrement_ref_count2(right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    __result165__ = __result_obj__ = result_213;
                    come_call_finalizer2(sRegexNode_finalize,result_213, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result165__;
                    come_call_finalizer2(sRegexNode_finalize,result_213, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sCharNode_finalize(struct sCharNode* self){
void* __result_obj__;
_Bool _if_conditional250;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional250=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional250) {
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sCharNode* sCharNode_clone(struct sCharNode* self){
void* __result_obj__;
_Bool _if_conditional251;
struct sCharNode* __result167__;
void* right_value358;
struct sCharNode* result_220;
_Bool _if_conditional252;
_Bool _if_conditional253;
_Bool _if_conditional254;
void* right_value359;
char* __dec_obj120;
struct sCharNode* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
right_value358 = (void*)0;
memset(&result_220, 0, sizeof(struct sCharNode*));
right_value359 = (void*)0;
                            if(_if_conditional251=self==(void*)0,                            _if_conditional251) {
                                __result167__ = __result_obj__ = (void*)0;
                                return __result167__;
                            }
                            result_220=(struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(right_value358=(struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "sCharNode_clone", 3, "sCharNode"))));
                            come_call_finalizer2(sCharNode_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional252=self!=((void*)0),                            _if_conditional252) {
                                result_220->value=self->value;
                            }
                            if(_if_conditional253=self!=((void*)0),                            _if_conditional253) {
                                result_220->sline=self->sline;
                            }
                            if(_if_conditional254=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional254) {
                                __dec_obj120=result_220->sname;
                                result_220->sname=(char*)come_increment_ref_count(((char*)(right_value359=string_clone(self->sname))));
                                __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value359 = come_decrement_ref_count2(right_value359, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            __result168__ = __result_obj__ = result_220;
                            come_call_finalizer2(sCharNode_finalize,result_220, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result168__;
                            come_call_finalizer2(sCharNode_finalize,result_220, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sWCharNode_finalize(struct sWCharNode* self){
void* __result_obj__;
_Bool _if_conditional263;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional263=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional263) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self){
void* __result_obj__;
_Bool _if_conditional264;
struct sWCharNode* __result170__;
void* right_value363;
struct sWCharNode* result_230;
_Bool _if_conditional265;
_Bool _if_conditional266;
_Bool _if_conditional267;
void* right_value364;
char* __dec_obj121;
struct sWCharNode* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
right_value363 = (void*)0;
memset(&result_230, 0, sizeof(struct sWCharNode*));
right_value364 = (void*)0;
                                if(_if_conditional264=self==(void*)0,                                _if_conditional264) {
                                    __result170__ = __result_obj__ = (void*)0;
                                    return __result170__;
                                }
                                result_230=(struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(right_value363=(struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "sWCharNode_clone", 3, "sWCharNode"))));
                                come_call_finalizer2(sWCharNode_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional265=self!=((void*)0),                                _if_conditional265) {
                                    result_230->value=self->value;
                                }
                                if(_if_conditional266=self!=((void*)0),                                _if_conditional266) {
                                    result_230->sline=self->sline;
                                }
                                if(_if_conditional267=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional267) {
                                    __dec_obj121=result_230->sname;
                                    result_230->sname=(char*)come_increment_ref_count(((char*)(right_value364=string_clone(self->sname))));
                                    __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value364 = come_decrement_ref_count2(right_value364, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                __result171__ = __result_obj__ = result_230;
                                come_call_finalizer2(sWCharNode_finalize,result_230, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result171__;
                                come_call_finalizer2(sWCharNode_finalize,result_230, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sWStringNode_finalize(struct sWStringNode* self){
void* __result_obj__;
_Bool _if_conditional277;
_Bool _if_conditional278;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional277=self!=((void*)0)&&self->value!=((void*)0),                                _if_conditional277) {
                                    self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional278=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional278) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self){
void* __result_obj__;
_Bool _if_conditional279;
struct sWStringNode* __result173__;
void* right_value371;
struct sWStringNode* result_245;
_Bool _if_conditional280;
void* right_value372;
unsigned int* __dec_obj122;
_Bool _if_conditional281;
_Bool _if_conditional282;
void* right_value373;
char* __dec_obj123;
struct sWStringNode* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
right_value371 = (void*)0;
memset(&result_245, 0, sizeof(struct sWStringNode*));
right_value372 = (void*)0;
right_value373 = (void*)0;
                                if(_if_conditional279=self==(void*)0,                                _if_conditional279) {
                                    __result173__ = __result_obj__ = (void*)0;
                                    return __result173__;
                                }
                                result_245=(struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(right_value371=(struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "sWStringNode_clone", 3, "sWStringNode"))));
                                come_call_finalizer2(sWStringNode_finalize,right_value371, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional280=self!=((void*)0)&&self->value!=((void*)0),                                _if_conditional280) {
                                    __dec_obj122=result_245->value;
                                    result_245->value=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value372=(unsigned int*)come_memdup(self->value, "sWStringNode_clone", 4, "unsigned int*"))));
                                    __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value372 = come_decrement_ref_count2(right_value372, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional281=self!=((void*)0),                                _if_conditional281) {
                                    result_245->sline=self->sline;
                                }
                                if(_if_conditional282=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional282) {
                                    __dec_obj123=result_245->sname;
                                    result_245->sname=(char*)come_increment_ref_count(((char*)(right_value373=string_clone(self->sname))));
                                    __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value373 = come_decrement_ref_count2(right_value373, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                __result174__ = __result_obj__ = result_245;
                                come_call_finalizer2(sWStringNode_finalize,result_245, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result174__;
                                come_call_finalizer2(sWStringNode_finalize,result_245, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sSStringNode_finalize(struct sSStringNode* self){
void* __result_obj__;
_Bool _if_conditional295;
_Bool _if_conditional296;
_Bool _if_conditional297;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional295=self!=((void*)0)&&self->value!=((void*)0),                                    _if_conditional295) {
                                        self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional296=self!=((void*)0)&&self->exps!=((void*)0),                                    _if_conditional296) {
                                        come_call_finalizer2(list$1sNodephp_finalize,self->exps, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional297=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional297) {
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self){
void* __result_obj__;
_Bool _if_conditional298;
struct sSStringNode* __result176__;
void* right_value384;
struct sSStringNode* result_256;
_Bool _if_conditional299;
void* right_value385;
char* __dec_obj124;
_Bool _if_conditional300;
void* right_value386;
struct list$1sNodeph* __dec_obj125;
_Bool _if_conditional301;
_Bool _if_conditional302;
void* right_value387;
char* __dec_obj126;
struct sSStringNode* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
right_value384 = (void*)0;
memset(&result_256, 0, sizeof(struct sSStringNode*));
right_value385 = (void*)0;
right_value386 = (void*)0;
right_value387 = (void*)0;
                                    if(_if_conditional298=self==(void*)0,                                    _if_conditional298) {
                                        __result176__ = __result_obj__ = (void*)0;
                                        return __result176__;
                                    }
                                    result_256=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(right_value384=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "sSStringNode_clone", 3, "sSStringNode"))));
                                    come_call_finalizer2(sSStringNode_finalize,right_value384, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional299=self!=((void*)0)&&self->value!=((void*)0),                                    _if_conditional299) {
                                        __dec_obj124=result_256->value;
                                        result_256->value=(char*)come_increment_ref_count(((char*)(right_value385=string_clone(self->value))));
                                        __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value385 = come_decrement_ref_count2(right_value385, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional300=self!=((void*)0)&&self->exps!=((void*)0),                                    _if_conditional300) {
                                        __dec_obj125=result_256->exps;
                                        result_256->exps=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value386=list$1sNodephp_clone(self->exps))));
                                        come_call_finalizer2(list$1sNodeph_finalize,__dec_obj125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(list$1sNodephp_finalize,right_value386, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional301=self!=((void*)0),                                    _if_conditional301) {
                                        result_256->sline=self->sline;
                                    }
                                    if(_if_conditional302=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional302) {
                                        __dec_obj126=result_256->sname;
                                        result_256->sname=(char*)come_increment_ref_count(((char*)(right_value387=string_clone(self->sname))));
                                        __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value387 = come_decrement_ref_count2(right_value387, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    __result177__ = __result_obj__ = result_256;
                                    come_call_finalizer2(sSStringNode_finalize,result_256, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result177__;
                                    come_call_finalizer2(sSStringNode_finalize,result_256, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sMapNode_finalize(struct sMapNode* self){
void* __result_obj__;
_Bool _if_conditional317;
_Bool _if_conditional318;
_Bool _if_conditional319;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional317=self!=((void*)0)&&self->map_key_elements!=((void*)0),                                                _if_conditional317) {
                                                    come_call_finalizer2(list$1sNodephp_finalize,self->map_key_elements, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional318=self!=((void*)0)&&self->map_elements!=((void*)0),                                                _if_conditional318) {
                                                    come_call_finalizer2(list$1sNodephp_finalize,self->map_elements, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional319=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional319) {
                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
}

static struct sMapNode* sMapNode_clone(struct sMapNode* self){
void* __result_obj__;
_Bool _if_conditional320;
struct sMapNode* __result182__;
void* right_value410;
struct sMapNode* result_271;
_Bool _if_conditional321;
void* right_value411;
struct list$1sNodeph* __dec_obj130;
_Bool _if_conditional322;
void* right_value412;
struct list$1sNodeph* __dec_obj131;
_Bool _if_conditional323;
_Bool _if_conditional324;
void* right_value413;
char* __dec_obj132;
struct sMapNode* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
right_value410 = (void*)0;
memset(&result_271, 0, sizeof(struct sMapNode*));
right_value411 = (void*)0;
right_value412 = (void*)0;
right_value413 = (void*)0;
                                                if(_if_conditional320=self==(void*)0,                                                _if_conditional320) {
                                                    __result182__ = __result_obj__ = (void*)0;
                                                    return __result182__;
                                                }
                                                result_271=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value410=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "sMapNode_clone", 3, "sMapNode"))));
                                                come_call_finalizer2(sMapNode_finalize,right_value410, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                if(_if_conditional321=self!=((void*)0)&&self->map_key_elements!=((void*)0),                                                _if_conditional321) {
                                                    __dec_obj130=result_271->map_key_elements;
                                                    result_271->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value411=list$1sNodephp_clone(self->map_key_elements))));
                                                    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer2(list$1sNodephp_finalize,right_value411, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                }
                                                if(_if_conditional322=self!=((void*)0)&&self->map_elements!=((void*)0),                                                _if_conditional322) {
                                                    __dec_obj131=result_271->map_elements;
                                                    result_271->map_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value412=list$1sNodephp_clone(self->map_elements))));
                                                    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj131, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer2(list$1sNodephp_finalize,right_value412, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                }
                                                if(_if_conditional323=self!=((void*)0),                                                _if_conditional323) {
                                                    result_271->sline=self->sline;
                                                }
                                                if(_if_conditional324=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional324) {
                                                    __dec_obj132=result_271->sname;
                                                    result_271->sname=(char*)come_increment_ref_count(((char*)(right_value413=string_clone(self->sname))));
                                                    __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value413 = come_decrement_ref_count2(right_value413, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                __result183__ = __result_obj__ = result_271;
                                                come_call_finalizer2(sMapNode_finalize,result_271, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result183__;
                                                come_call_finalizer2(sMapNode_finalize,result_271, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sListNode_finalize(struct sListNode* self){
void* __result_obj__;
_Bool _if_conditional331;
_Bool _if_conditional332;
memset(&__result_obj__, 0, sizeof(void*));
                                            if(_if_conditional331=self!=((void*)0)&&self->list_elements!=((void*)0),                                            _if_conditional331) {
                                                come_call_finalizer2(list$1sNodephp_finalize,self->list_elements, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            }
                                            if(_if_conditional332=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional332) {
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
}

static struct sListNode* sListNode_clone(struct sListNode* self){
void* __result_obj__;
_Bool _if_conditional333;
struct sListNode* __result185__;
void* right_value418;
struct sListNode* result_274;
_Bool _if_conditional334;
void* right_value419;
struct list$1sNodeph* __dec_obj133;
_Bool _if_conditional335;
_Bool _if_conditional336;
void* right_value420;
char* __dec_obj134;
struct sListNode* __result186__;
memset(&__result_obj__, 0, sizeof(void*));
right_value418 = (void*)0;
memset(&result_274, 0, sizeof(struct sListNode*));
right_value419 = (void*)0;
right_value420 = (void*)0;
                                            if(_if_conditional333=self==(void*)0,                                            _if_conditional333) {
                                                __result185__ = __result_obj__ = (void*)0;
                                                return __result185__;
                                            }
                                            result_274=(struct sListNode*)come_increment_ref_count(((struct sListNode*)(right_value418=(struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "sListNode_clone", 3, "sListNode"))));
                                            come_call_finalizer2(sListNode_finalize,right_value418, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            if(_if_conditional334=self!=((void*)0)&&self->list_elements!=((void*)0),                                            _if_conditional334) {
                                                __dec_obj133=result_274->list_elements;
                                                result_274->list_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value419=list$1sNodephp_clone(self->list_elements))));
                                                come_call_finalizer2(list$1sNodeph_finalize,__dec_obj133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                come_call_finalizer2(list$1sNodephp_finalize,right_value419, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            }
                                            if(_if_conditional335=self!=((void*)0),                                            _if_conditional335) {
                                                result_274->sline=self->sline;
                                            }
                                            if(_if_conditional336=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional336) {
                                                __dec_obj134=result_274->sname;
                                                result_274->sname=(char*)come_increment_ref_count(((char*)(right_value420=string_clone(self->sname))));
                                                __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value420 = come_decrement_ref_count2(right_value420, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            __result186__ = __result_obj__ = result_274;
                                            come_call_finalizer2(sListNode_finalize,result_274, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result186__;
                                            come_call_finalizer2(sListNode_finalize,result_274, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* parse_tuple(struct sInfo* info){
void* __result_obj__;
void* right_value423;
void* right_value424;
struct list$1sNodeph* tuple_elements_275;
_Bool _while_condtional34;
char* p_276;
_Bool no_comma_277;
void* right_value425;
struct sNode* node_278;
void* right_value426;
struct sNode* __dec_obj135;
_Bool _if_conditional337;
_Bool _if_conditional338;
void* right_value427;
void* right_value428;
struct sNode* _inf_value11;
struct sTupleNode* _inf_obj_value11;
void* right_value432;
struct sNode* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
right_value423 = (void*)0;
right_value424 = (void*)0;
memset(&tuple_elements_275, 0, sizeof(struct list$1sNodeph*));
memset(&p_276, 0, sizeof(char*));
memset(&no_comma_277, 0, sizeof(_Bool));
right_value425 = (void*)0;
memset(&node_278, 0, sizeof(struct sNode*));
right_value426 = (void*)0;
right_value427 = (void*)0;
right_value428 = (void*)0;
right_value432 = (void*)0;
    tuple_elements_275=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value424=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value423=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1980, "list$1sNodeph"))))))));
    come_call_finalizer2(list$1sNodephp_finalize,right_value423, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sNodephp_finalize,right_value424, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional34=(_Bool)1,    _while_condtional34) {
        p_276=info->p;
        no_comma_277=info->no_comma;
        info->no_comma=(_Bool)1;
        node_278=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value425=expression_v13(info))));
        if(right_value425) { right_value425 = come_decrement_ref_count2(right_value425, ((struct sNode*)right_value425)->finalize, ((struct sNode*)right_value425)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        __dec_obj135=node_278;
        node_278=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value426=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_278),info))));
        if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count2(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0, (void*)0); }
        if(right_value426) { right_value426 = come_decrement_ref_count2(right_value426, ((struct sNode*)right_value426)->finalize, ((struct sNode*)right_value426)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        info->no_comma=no_comma_277;
        list$1sNodeph_push_back(tuple_elements_275,(struct sNode*)come_increment_ref_count(node_278));
        if(_if_conditional337=*info->p==44,        _if_conditional337) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            if(_if_conditional338=*info->p==41,            _if_conditional338) {
                info->p++;
                skip_spaces_and_lf(info);
                if(node_278) { node_278 = come_decrement_ref_count2(node_278, ((struct sNode*)node_278)->finalize, ((struct sNode*)node_278)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            else {
                err_msg(info,"invalid character(%c) in tuple expression",*info->p);
                exit(2);
            }
        }
        if(node_278) { node_278 = come_decrement_ref_count2(node_278, ((struct sNode*)node_278)->finalize, ((struct sNode*)node_278)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2009, "struct sNode");
    _inf_obj_value11=come_increment_ref_count(((struct sTupleNode*)(right_value428=sTupleNode_initialize((struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(right_value427=(struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "06str.c", 2009, "sTupleNode")))),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_275),info))));
    _inf_value11->_protocol_obj=_inf_obj_value11;
    _inf_value11->finalize=(void*)sTupleNode_finalize;
    _inf_value11->clone=(void*)sTupleNode_clone;
    _inf_value11->compile=(void*)sTupleNode_compile;
    _inf_value11->sline=(void*)sTupleNode_sline;
    _inf_value11->sname=(void*)sTupleNode_sname;
    _inf_value11->terminated=(void*)sTupleNode_terminated;
    _inf_value11->kind=(void*)sTupleNode_kind;
    __result191__ = __result_obj__ = ((struct sNode*)(right_value432=_inf_value11));
    come_call_finalizer2(list$1sNodephp_finalize,tuple_elements_275, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sTupleNode_finalize,right_value427, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sTupleNode_finalize,right_value428, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value432) { right_value432 = come_decrement_ref_count2(right_value432, ((struct sNode*)right_value432)->finalize, ((struct sNode*)right_value432)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result191__;
    come_call_finalizer2(list$1sNodephp_finalize,tuple_elements_275, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sTupleNode_finalize(struct sTupleNode* self){
void* __result_obj__;
_Bool _if_conditional339;
_Bool _if_conditional340;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional339=self!=((void*)0)&&self->tuple_elements!=((void*)0),        _if_conditional339) {
            come_call_finalizer2(list$1sNodephp_finalize,self->tuple_elements, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional340=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional340) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self){
void* __result_obj__;
_Bool _if_conditional341;
struct sTupleNode* __result189__;
void* right_value429;
struct sTupleNode* result_279;
_Bool _if_conditional342;
void* right_value430;
struct list$1sNodeph* __dec_obj136;
_Bool _if_conditional343;
_Bool _if_conditional344;
void* right_value431;
char* __dec_obj137;
struct sTupleNode* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
right_value429 = (void*)0;
memset(&result_279, 0, sizeof(struct sTupleNode*));
right_value430 = (void*)0;
right_value431 = (void*)0;
        if(_if_conditional341=self==(void*)0,        _if_conditional341) {
            __result189__ = __result_obj__ = (void*)0;
            return __result189__;
        }
        result_279=(struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(right_value429=(struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "sTupleNode_clone", 3, "sTupleNode"))));
        come_call_finalizer2(sTupleNode_finalize,right_value429, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional342=self!=((void*)0)&&self->tuple_elements!=((void*)0),        _if_conditional342) {
            __dec_obj136=result_279->tuple_elements;
            result_279->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value430=list$1sNodephp_clone(self->tuple_elements))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value430, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional343=self!=((void*)0),        _if_conditional343) {
            result_279->sline=self->sline;
        }
        if(_if_conditional344=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional344) {
            __dec_obj137=result_279->sname;
            result_279->sname=(char*)come_increment_ref_count(((char*)(right_value431=string_clone(self->sname))));
            __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value431 = come_decrement_ref_count2(right_value431, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __result190__ = __result_obj__ = result_279;
        come_call_finalizer2(sTupleNode_finalize,result_279, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result190__;
        come_call_finalizer2(sTupleNode_finalize,result_279, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

