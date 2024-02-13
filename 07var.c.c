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
struct optional$2intbool
{
    int v1;
    _Bool v2;
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
struct tuple3$3sTypephcharphsNodeph
{
    struct sType* v1;
    char* v2;
    struct sNode* v3;
};
struct list_item$1tuple3$3sTypephcharphsNodephph
{
    struct tuple3$3sTypephcharphsNodeph* item;
    struct list_item$1tuple3$3sTypephcharphsNodephph* prev;
    struct list_item$1tuple3$3sTypephcharphsNodephph* next;
};
struct list$1tuple3$3sTypephcharphsNodephph
{
    struct list_item$1tuple3$3sTypephcharphsNodephph* head;
    struct list_item$1tuple3$3sTypephcharphsNodephph* tail;
    int len;
    struct list_item$1tuple3$3sTypephcharphsNodephph* it;
};
struct sStoreNode
{
    char* name;
    struct list$1charph* multiple_assign;
    struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare;
    struct sNode* right_value;
    struct sType* type;
    char* array_initializer;
    _Bool alloc;
    int sline;
    char* sname;
};
struct optional$2sVarphbool
{
    struct sVar* v1;
    _Bool v2;
};
struct sLoadNode
{
    char* name;
    int sline;
    char* sname;
};
struct optional$2sFunphbool
{
    struct sFun* v1;
    _Bool v2;
};
struct sFunLoadNode
{
    char* name;
    int sline;
    char* sname;
};
struct tuple3$3sTypephcharphvoidp
{
    struct sType* v1;
    char* v2;
    void* v3;
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

struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, char* array_initializer, struct sInfo* info);

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
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_clone(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_initialize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void list$1tuple3$3sTypephcharphsNodephphp_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void list_item$1tuple3$3sTypephcharphsNodephphp_finalize(struct list_item$1tuple3$3sTypephcharphsNodephph* self);
static void tuple3$3sTypephcharphsNodephp_finalize(struct tuple3$3sTypephcharphsNodeph* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_add(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item);
static void tuple3$3sTypephcharphsNodeph_finalize(struct tuple3$3sTypephcharphsNodeph* self);
static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodephp_clone(struct tuple3$3sTypephcharphsNodeph* self);
static void list$1tuple3$3sTypephcharphsNodephph_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self);
_Bool sStoreNode_terminated();

char* sStoreNode_kind();

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info);

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static void sVar_finalize(struct sVar* self);
static struct optional$2sVarphbool* optional$2sVarphbool_initialize(struct optional$2sVarphbool* self, struct sVar* v1, _Bool v2);
static void optional$2sVarphboolp_finalize(struct optional$2sVarphbool* self);
static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_begin(struct list$1tuple3$3sTypephcharphsNodephph* self);
static _Bool list$1tuple3$3sTypephcharphsNodephph_end(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_next(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void CVALUE_finalize(struct CVALUE* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
int sStoreNode_sline(struct sStoreNode* self, struct sInfo* info);

char* sStoreNode_sname(struct sStoreNode* self, struct sInfo* info);

struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct sType* type, _Bool alloc, struct sNode* right_node, struct sInfo* info);

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info);

_Bool sLoadNode_terminated();

char* sLoadNode_kind();

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info);

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct optional$2sFunphbool* optional$2sFunphbool_initialize(struct optional$2sFunphbool* self, struct sFun* v1, _Bool v2);
static void optional$2sFunphboolp_finalize(struct optional$2sFunphbool* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
int sLoadNode_sline(struct sLoadNode* self, struct sInfo* info);

char* sLoadNode_sname(struct sLoadNode* self, struct sInfo* info);

struct sNode* load_var(char* name, struct sInfo* info);

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info);

static void sFunLoadNode_finalize(struct sFunLoadNode* self);
_Bool sFunLoadNode_terminated();

char* sFunLoadNode_kind();

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info);

int sFunLoadNode_sline(struct sFunLoadNode* self, struct sInfo* info);

char* sFunLoadNode_sname(struct sFunLoadNode* self, struct sInfo* info);

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info);

static struct map$2charphsVarph* map$2charphsVarph_insert(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3);
static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item);
static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3);
static void sLoadNode_finalize(struct sLoadNode* self);
static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self);
static void sStoreNode_finalize(struct sStoreNode* self);
static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self);
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

struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, char* array_initializer, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value10;
char* __dec_obj6;
_Bool _if_conditional5;
void* right_value45;
struct sType* __dec_obj29;
struct sType* __dec_obj30;
struct sNode* __dec_obj31;
_Bool _if_conditional92;
void* right_value46;
struct list$1charph* __dec_obj32;
struct list$1charph* __dec_obj33;
_Bool _if_conditional93;
void* right_value57;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj40;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj41;
char* __dec_obj42;
void* right_value58;
char* __dec_obj43;
struct sStoreNode* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value10 = (void*)0;
right_value45 = (void*)0;
right_value46 = (void*)0;
right_value57 = (void*)0;
right_value58 = (void*)0;
    __dec_obj6=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value10=__builtin_string(name))));
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
    if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value10, right_value10 = (void*)0;
    __freed_obj__ = 0;
    self->alloc=alloc;
    if(_if_conditional5=type,    _if_conditional5) {
        __dec_obj29=self->type;
        self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value45=sType_clone(type))));
        if(__dec_obj29) { come_call_finalizer(sType_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
        if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value45, right_value45 = (void*)0;
        __freed_obj__ = 0;
    }
    else {
        __dec_obj30=self->type;
        self->type=((void*)0);
        if(__dec_obj30) { come_call_finalizer(sType_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __dec_obj31=self->right_value;
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0); }
    if(_if_conditional92=multiple_assign,    _if_conditional92) {
        __dec_obj32=self->multiple_assign;
        self->multiple_assign=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value46=list$1charphp_clone(multiple_assign))));
        if(__dec_obj32) { come_call_finalizer(list$1charph_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value46);
        if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value46, right_value46 = (void*)0;
        __freed_obj__ = 0;
    }
    else {
        __dec_obj33=self->multiple_assign;
        self->multiple_assign=((void*)0);
        if(__dec_obj33) { come_call_finalizer(list$1charph_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(_if_conditional93=multiple_declare,    _if_conditional93) {
        __dec_obj40=self->multiple_declare;
        self->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value57=list$1tuple3$3sTypephcharphsNodephphp_clone(multiple_declare))));
        if(__dec_obj40) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephph_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
        if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value57, right_value57 = (void*)0;
        __freed_obj__ = 0;
    }
    else {
        __dec_obj41=self->multiple_declare;
        self->multiple_declare=((void*)0);
        if(__dec_obj41) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephph_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __dec_obj42=self->array_initializer;
    self->array_initializer=(char*)come_increment_ref_count(array_initializer);
    if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
    self->sline=info->sline;
    __dec_obj43=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value58=__builtin_string(info->sname))));
    if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
    if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value58, right_value58 = (void*)0;
    __freed_obj__ = 0;
    __result31__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(multiple_assign && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,multiple_assign, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(multiple_declare && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right_value && !__freed_obj__) { right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 1, 0); } 
    if(array_initializer && !__freed_obj__) { array_initializer = come_decrement_ref_count(array_initializer, (void*)0, (void*)0, 0, 1, 0); }
    return __result31__;
    if(self && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(multiple_assign && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,multiple_assign, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(multiple_declare && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right_value && !__freed_obj__) { right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 1, 0); } 
    if(array_initializer && !__freed_obj__) { array_initializer = come_decrement_ref_count(array_initializer, (void*)0, (void*)0, 0, 1, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional6;
struct sType* __result7__;
void* right_value11;
struct sType* result_5;
_Bool _if_conditional23;
_Bool _if_conditional24;
void* right_value14;
struct tuple1$1sTypeph* __dec_obj8;
_Bool _if_conditional28;
void* right_value15;
struct tuple1$1sTypeph* __dec_obj9;
_Bool _if_conditional29;
void* right_value16;
char* __dec_obj10;
_Bool _if_conditional30;
void* right_value23;
struct list$1sTypeph* __dec_obj14;
_Bool _if_conditional34;
void* right_value31;
struct list$1sNodeph* __dec_obj18;
_Bool _if_conditional47;
_Bool _if_conditional48;
void* right_value32;
struct list$1sTypeph* __dec_obj19;
_Bool _if_conditional49;
void* right_value39;
struct list$1charph* __dec_obj23;
_Bool _if_conditional53;
void* right_value40;
struct tuple1$1sTypeph* __dec_obj24;
_Bool _if_conditional54;
_Bool _if_conditional55;
void* right_value41;
struct sNode* __dec_obj25;
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
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
void* right_value42;
struct sNode* __dec_obj26;
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional82;
void* right_value43;
char* __dec_obj27;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
void* right_value44;
char* __dec_obj28;
struct sType* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value11 = (void*)0;
memset(&result_5, 0, sizeof(struct sType*));
right_value14 = (void*)0;
right_value15 = (void*)0;
right_value16 = (void*)0;
right_value23 = (void*)0;
right_value31 = (void*)0;
right_value32 = (void*)0;
right_value39 = (void*)0;
right_value40 = (void*)0;
right_value41 = (void*)0;
right_value42 = (void*)0;
right_value43 = (void*)0;
right_value44 = (void*)0;
            if(_if_conditional6=self==(void*)0,            _if_conditional6) {
                __result7__ = __result_obj__ = (void*)0;
                return __result7__;
            }
            result_5=(struct sType*)come_increment_ref_count(((struct sType*)(right_value11=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value11);
            if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value11, right_value11 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional23=self!=((void*)0),            _if_conditional23) {
                result_5->mClass=self->mClass;
            }
            if(_if_conditional24=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional24) {
                __dec_obj8=result_5->mNoSolvedGenericsType;
                result_5->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value14=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                if(__dec_obj8) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value14);
                if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value14, right_value14 = (void*)0;
                __freed_obj__ = 0;
            }
            if(_if_conditional28=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional28) {
                __dec_obj9=result_5->mOriginalLoadVarType;
                result_5->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value15=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                if(__dec_obj9) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value15);
                if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value15, right_value15 = (void*)0;
                __freed_obj__ = 0;
            }
            if(_if_conditional29=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional29) {
                __dec_obj10=result_5->mGenericsName;
                result_5->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value16=string_clone(self->mGenericsName))));
                if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
                if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { right_value16 = come_decrement_ref_count(right_value16, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value16, right_value16 = (void*)0;
                __freed_obj__ = 0;
            }
            if(_if_conditional30=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional30) {
                __dec_obj14=result_5->mGenericsTypes;
                result_5->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value23=list$1sTypephp_clone(self->mGenericsTypes))));
                if(__dec_obj14) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
                if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value23, right_value23 = (void*)0;
                __freed_obj__ = 0;
            }
            if(_if_conditional34=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional34) {
                __dec_obj18=result_5->mArrayNum;
                result_5->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value31=list$1sNodephp_clone(self->mArrayNum))));
                if(__dec_obj18) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
                if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value31, right_value31 = (void*)0;
                __freed_obj__ = 0;
            }
            if(_if_conditional47=self!=((void*)0),            _if_conditional47) {
                result_5->mOmitArrayNum=self->mOmitArrayNum;
            }
            if(_if_conditional48=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional48) {
                __dec_obj19=result_5->mParamTypes;
                result_5->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value32=list$1sTypephp_clone(self->mParamTypes))));
                if(__dec_obj19) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
                if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value32, right_value32 = (void*)0;
                __freed_obj__ = 0;
            }
            if(_if_conditional49=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional49) {
                __dec_obj23=result_5->mParamNames;
                result_5->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value39=list$1charphp_clone(self->mParamNames))));
                if(__dec_obj23) { come_call_finalizer(list$1charph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
                if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value39, right_value39 = (void*)0;
                __freed_obj__ = 0;
            }
            if(_if_conditional53=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional53) {
                __dec_obj24=result_5->mResultType;
                result_5->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value40=tuple1$1sTypephp_clone(self->mResultType))));
                if(__dec_obj24) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
                if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value40, right_value40 = (void*)0;
                __freed_obj__ = 0;
            }
            if(_if_conditional54=self!=((void*)0),            _if_conditional54) {
                result_5->mVarArgs=self->mVarArgs;
            }
            if(_if_conditional55=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional55) {
                __dec_obj25=result_5->mAlignas;
                result_5->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value41=sNode_clone(self->mAlignas))));
                if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
                if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { right_value41 = come_decrement_ref_count(right_value41, ((struct sNode*)right_value41)->finalize, ((struct sNode*)right_value41)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value41, right_value41 = (void*)0;
                __freed_obj__ = 0;
            }
            if(_if_conditional56=self!=((void*)0),            _if_conditional56) {
                result_5->mUnsigned=self->mUnsigned;
            }
            if(_if_conditional57=self!=((void*)0),            _if_conditional57) {
                result_5->mShort=self->mShort;
            }
            if(_if_conditional58=self!=((void*)0),            _if_conditional58) {
                result_5->mLong=self->mLong;
            }
            if(_if_conditional59=self!=((void*)0),            _if_conditional59) {
                result_5->mLongLong=self->mLongLong;
            }
            if(_if_conditional60=self!=((void*)0),            _if_conditional60) {
                result_5->mConstant=self->mConstant;
            }
            if(_if_conditional61=self!=((void*)0),            _if_conditional61) {
                result_5->mRegister=self->mRegister;
            }
            if(_if_conditional62=self!=((void*)0),            _if_conditional62) {
                result_5->mVolatile=self->mVolatile;
            }
            if(_if_conditional63=self!=((void*)0),            _if_conditional63) {
                result_5->mStatic=self->mStatic;
            }
            if(_if_conditional64=self!=((void*)0),            _if_conditional64) {
                result_5->mExtern=self->mExtern;
            }
            if(_if_conditional65=self!=((void*)0),            _if_conditional65) {
                result_5->mRestrict=self->mRestrict;
            }
            if(_if_conditional66=self!=((void*)0),            _if_conditional66) {
                result_5->mImmutable=self->mImmutable;
            }
            if(_if_conditional67=self!=((void*)0),            _if_conditional67) {
                result_5->mHeap=self->mHeap;
            }
            if(_if_conditional68=self!=((void*)0),            _if_conditional68) {
                result_5->mDummyHeap=self->mDummyHeap;
            }
            if(_if_conditional69=self!=((void*)0),            _if_conditional69) {
                result_5->mDelegate=self->mDelegate;
            }
            if(_if_conditional70=self!=((void*)0),            _if_conditional70) {
                result_5->mShare=self->mShare;
            }
            if(_if_conditional71=self!=((void*)0),            _if_conditional71) {
                result_5->mClone=self->mClone;
            }
            if(_if_conditional72=self!=((void*)0),            _if_conditional72) {
                result_5->mNoHeap=self->mNoHeap;
            }
            if(_if_conditional73=self!=((void*)0),            _if_conditional73) {
                result_5->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            if(_if_conditional74=self!=((void*)0),            _if_conditional74) {
                result_5->mRefference=self->mRefference;
            }
            if(_if_conditional75=self!=((void*)0),            _if_conditional75) {
                result_5->mException=self->mException;
            }
            if(_if_conditional76=self!=((void*)0),            _if_conditional76) {
                result_5->mPointerNum=self->mPointerNum;
            }
            if(_if_conditional77=self!=((void*)0),            _if_conditional77) {
                result_5->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
            }
            if(_if_conditional78=self!=((void*)0),            _if_conditional78) {
                result_5->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            if(_if_conditional79=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional79) {
                __dec_obj26=result_5->mSizeNum;
                result_5->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value42=sNode_clone(self->mSizeNum))));
                if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
                if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { right_value42 = come_decrement_ref_count(right_value42, ((struct sNode*)right_value42)->finalize, ((struct sNode*)right_value42)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value42, right_value42 = (void*)0;
                __freed_obj__ = 0;
            }
            if(_if_conditional80=self!=((void*)0),            _if_conditional80) {
                result_5->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            if(_if_conditional81=self!=((void*)0),            _if_conditional81) {
                result_5->mTypeOfExpression=self->mTypeOfExpression;
            }
            if(_if_conditional82=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional82) {
                __dec_obj27=result_5->mOriginalTypeName;
                result_5->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value43=string_clone(self->mOriginalTypeName))));
                if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
                if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { right_value43 = come_decrement_ref_count(right_value43, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value43, right_value43 = (void*)0;
                __freed_obj__ = 0;
            }
            if(_if_conditional83=self!=((void*)0),            _if_conditional83) {
                result_5->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            if(_if_conditional84=self!=((void*)0),            _if_conditional84) {
                result_5->mFunctionParam=self->mFunctionParam;
            }
            if(_if_conditional85=self!=((void*)0),            _if_conditional85) {
                result_5->mAllocaValue=self->mAllocaValue;
            }
            if(_if_conditional86=self!=((void*)0),            _if_conditional86) {
                result_5->mGenericsStruct=self->mGenericsStruct;
            }
            if(_if_conditional87=self!=((void*)0),            _if_conditional87) {
                result_5->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            if(_if_conditional88=self!=((void*)0),            _if_conditional88) {
                result_5->mComeMemCore=self->mComeMemCore;
            }
            if(_if_conditional89=self!=((void*)0),            _if_conditional89) {
                result_5->mInline=self->mInline;
            }
            if(_if_conditional90=self!=((void*)0),            _if_conditional90) {
                result_5->mNullValue=self->mNullValue;
            }
            if(_if_conditional91=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional91) {
                __dec_obj28=result_5->mAsmName;
                result_5->mAsmName=(char*)come_increment_ref_count(((char*)(right_value44=string_clone(self->mAsmName))));
                if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
                if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { right_value44 = come_decrement_ref_count(right_value44, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value44, right_value44 = (void*)0;
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
_Bool _if_conditional7;
_Bool _if_conditional9;
_Bool _if_conditional10;
_Bool _if_conditional11;
_Bool _if_conditional13;
_Bool _if_conditional15;
_Bool _if_conditional16;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional7=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional7) {
                    if(self->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional9=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional9) {
                    if(self->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional10=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional10) {
                    if(self->mGenericsName && !__freed_obj__) { self->mGenericsName = come_decrement_ref_count(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(_if_conditional11=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional11) {
                    if(self->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional13=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional13) {
                    if(self->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional15=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional15) {
                    if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional16=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional16) {
                    if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional18=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional18) {
                    if(self->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional19=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional19) {
                    if(self->mAlignas && !__freed_obj__) { self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0); } 
                }
                if(_if_conditional20=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional20) {
                    if(self->mSizeNum && !__freed_obj__) { self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                }
                if(_if_conditional21=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional21) {
                    if(self->mOriginalTypeName && !__freed_obj__) { self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(_if_conditional22=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional22) {
                    if(self->mAsmName && !__freed_obj__) { self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional8=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional8) {
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
                        while(_while_condtional1=it_6!=((void*)0),                        _while_condtional1) {
                            prev_it_7=it_6;
                            it_6=it_6->next;
                            if(prev_it_7 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_7, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional12=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional12) {
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
                        while(_while_condtional2=it_8!=((void*)0),                        _while_condtional2) {
                            prev_it_9=it_8;
                            it_8=it_8->next;
                            if(prev_it_9 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_9, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional14=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional14) {
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
                        while(_while_condtional3=it_10!=((void*)0),                        _while_condtional3) {
                            prev_it_11=it_10;
                            it_10=it_10->next;
                            if(prev_it_11 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_11, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional17=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional17) {
                                    if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional25;
struct tuple1$1sTypeph* __result8__;
void* right_value12;
struct tuple1$1sTypeph* result_12;
_Bool _if_conditional27;
void* right_value13;
struct sType* __dec_obj7;
struct tuple1$1sTypeph* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value12 = (void*)0;
memset(&result_12, 0, sizeof(struct tuple1$1sTypeph*));
right_value13 = (void*)0;
                    if(_if_conditional25=self==(void*)0,                    _if_conditional25) {
                        __result8__ = __result_obj__ = (void*)0;
                        return __result8__;
                    }
                    result_12=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value12=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
                    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value12, right_value12 = (void*)0;
                    __freed_obj__ = 0;
                    if(_if_conditional27=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional27) {
                        __dec_obj7=result_12->v1;
                        result_12->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value13=sType_clone(self->v1))));
                        if(__dec_obj7) { come_call_finalizer(sType_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value13);
                        if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value13, right_value13 = (void*)0;
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
_Bool _if_conditional26;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional26=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional26) {
                            if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional31;
struct list$1sTypeph* __result10__;
void* right_value17;
void* right_value18;
struct list$1sTypeph* result_13;
struct list_item$1sTypeph* it_14;
_Bool _while_condtional4;
void* right_value22;
struct list$1sTypeph* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value17 = (void*)0;
right_value18 = (void*)0;
memset(&result_13, 0, sizeof(struct list$1sTypeph*));
memset(&it_14, 0, sizeof(struct list_item$1sTypeph*));
right_value22 = (void*)0;
                    if(_if_conditional31=self==((void*)0),                    _if_conditional31) {
                        __result10__ = __result_obj__ = ((void*)0);
                        return __result10__;
                    }
                    result_13=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value18=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value17=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 198, "struct list$1sTypeph"))))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value17);
                    if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value17, right_value17 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value18);
                    if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value18, right_value18 = (void*)0;
                    __freed_obj__ = 0;
                    it_14=self->head;
                    while(_while_condtional4=it_14!=((void*)0),                    _while_condtional4) {
                        list$1sTypeph_add(result_13,(struct sType*)come_increment_ref_count(((struct sType*)(right_value22=sType_clone(it_14->item)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
                        if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value22, right_value22 = (void*)0;
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
_Bool _if_conditional32;
void* right_value19;
struct list_item$1sTypeph* litem_15;
struct sType* __dec_obj11;
_Bool _if_conditional33;
void* right_value20;
struct list_item$1sTypeph* litem_16;
struct sType* __dec_obj12;
void* right_value21;
struct list_item$1sTypeph* litem_17;
struct sType* __dec_obj13;
struct list$1sTypeph* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value19 = (void*)0;
memset(&litem_15, 0, sizeof(struct list_item$1sTypeph*));
right_value20 = (void*)0;
memset(&litem_16, 0, sizeof(struct list_item$1sTypeph*));
right_value21 = (void*)0;
memset(&litem_17, 0, sizeof(struct list_item$1sTypeph*));
                            if(_if_conditional32=self->len==0,                            _if_conditional32) {
                                litem_15=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value19=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 212, "struct list_item$1sTypeph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19);
                                if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value19, right_value19 = (void*)0;
                                __freed_obj__ = 0;
                                litem_15->prev=((void*)0);
                                litem_15->next=((void*)0);
                                __dec_obj11=litem_15->item;
                                litem_15->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj11) { come_call_finalizer(sType_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                                self->tail=litem_15;
                                self->head=litem_15;
                            }
                            else {
                                if(_if_conditional33=self->len==1,                                _if_conditional33) {
                                    litem_16=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value20=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 222, "struct list_item$1sTypeph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
                                    if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value20, right_value20 = (void*)0;
                                    __freed_obj__ = 0;
                                    litem_16->prev=self->head;
                                    litem_16->next=((void*)0);
                                    __dec_obj12=litem_16->item;
                                    litem_16->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj12) { come_call_finalizer(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    self->tail=litem_16;
                                    self->head->next=litem_16;
                                }
                                else {
                                    litem_17=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value21=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 232, "struct list_item$1sTypeph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
                                    if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value21, right_value21 = (void*)0;
                                    __freed_obj__ = 0;
                                    litem_17->prev=self->tail;
                                    litem_17->next=((void*)0);
                                    __dec_obj13=litem_17->item;
                                    litem_17->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj13) { come_call_finalizer(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
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
_Bool _if_conditional35;
struct list$1sNodeph* __result14__;
void* right_value24;
void* right_value25;
struct list$1sNodeph* result_18;
struct list_item$1sNodeph* it_19;
_Bool _while_condtional5;
void* right_value30;
struct list$1sNodeph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value24 = (void*)0;
right_value25 = (void*)0;
memset(&result_18, 0, sizeof(struct list$1sNodeph*));
memset(&it_19, 0, sizeof(struct list_item$1sNodeph*));
right_value30 = (void*)0;
                    if(_if_conditional35=self==((void*)0),                    _if_conditional35) {
                        __result14__ = __result_obj__ = ((void*)0);
                        return __result14__;
                    }
                    result_18=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value25=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value24=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 198, "struct list$1sNodeph"))))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value24);
                    if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value24, right_value24 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value25);
                    if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value25, right_value25 = (void*)0;
                    __freed_obj__ = 0;
                    it_19=self->head;
                    while(_while_condtional5=it_19!=((void*)0),                    _while_condtional5) {
                        list$1sNodeph_add(result_18,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value30=sNode_clone(it_19->item)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
                        if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { right_value30 = come_decrement_ref_count(right_value30, ((struct sNode*)right_value30)->finalize, ((struct sNode*)right_value30)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value30, right_value30 = (void*)0;
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
_Bool _if_conditional36;
void* right_value26;
struct list_item$1sNodeph* litem_20;
struct sNode* __dec_obj15;
_Bool _if_conditional37;
void* right_value27;
struct list_item$1sNodeph* litem_21;
struct sNode* __dec_obj16;
void* right_value28;
struct list_item$1sNodeph* litem_22;
struct sNode* __dec_obj17;
struct list$1sNodeph* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value26 = (void*)0;
memset(&litem_20, 0, sizeof(struct list_item$1sNodeph*));
right_value27 = (void*)0;
memset(&litem_21, 0, sizeof(struct list_item$1sNodeph*));
right_value28 = (void*)0;
memset(&litem_22, 0, sizeof(struct list_item$1sNodeph*));
                            if(_if_conditional36=self->len==0,                            _if_conditional36) {
                                litem_20=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value26=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 212, "struct list_item$1sNodeph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value26);
                                if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value26, right_value26 = (void*)0;
                                __freed_obj__ = 0;
                                litem_20->prev=((void*)0);
                                litem_20->next=((void*)0);
                                __dec_obj15=litem_20->item;
                                litem_20->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0); }
                                self->tail=litem_20;
                                self->head=litem_20;
                            }
                            else {
                                if(_if_conditional37=self->len==1,                                _if_conditional37) {
                                    litem_21=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value27=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 222, "struct list_item$1sNodeph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
                                    if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value27, right_value27 = (void*)0;
                                    __freed_obj__ = 0;
                                    litem_21->prev=self->head;
                                    litem_21->next=((void*)0);
                                    __dec_obj16=litem_21->item;
                                    litem_21->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0); }
                                    self->tail=litem_21;
                                    self->head->next=litem_21;
                                }
                                else {
                                    litem_22=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value28=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 232, "struct list_item$1sNodeph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
                                    if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value28, right_value28 = (void*)0;
                                    __freed_obj__ = 0;
                                    litem_22->prev=self->tail;
                                    litem_22->next=((void*)0);
                                    __dec_obj17=litem_22->item;
                                    litem_22->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0,0); }
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
_Bool _if_conditional38;
struct sNode* __result17__;
void* right_value29;
struct sNode* result_23;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
struct sNode* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value29 = (void*)0;
memset(&result_23, 0, sizeof(struct sNode*));
                            if(_if_conditional38=self==(void*)0,                            _if_conditional38) {
                                __result17__ = __result_obj__ = (void*)0;
                                return __result17__;
                            }
                            result_23=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
                            if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { right_value29 = come_decrement_ref_count(right_value29, ((struct sNode*)right_value29)->finalize, ((struct sNode*)right_value29)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value29, right_value29 = (void*)0;
                            __freed_obj__ = 0;
                            if(_if_conditional39=self!=((void*)0)&&self->clone!=((void*)0),                            _if_conditional39) {
                                result_23->_protocol_obj=self->clone(self->_protocol_obj);
                            }
                            if(_if_conditional40=self!=((void*)0),                            _if_conditional40) {
                                result_23->finalize=self->finalize;
                            }
                            if(_if_conditional41=self!=((void*)0),                            _if_conditional41) {
                                result_23->clone=self->clone;
                            }
                            if(_if_conditional42=self!=((void*)0),                            _if_conditional42) {
                                result_23->compile=self->compile;
                            }
                            if(_if_conditional43=self!=((void*)0),                            _if_conditional43) {
                                result_23->sline=self->sline;
                            }
                            if(_if_conditional44=self!=((void*)0),                            _if_conditional44) {
                                result_23->sname=self->sname;
                            }
                            if(_if_conditional45=self!=((void*)0),                            _if_conditional45) {
                                result_23->terminated=self->terminated;
                            }
                            if(_if_conditional46=self!=((void*)0),                            _if_conditional46) {
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
_Bool _if_conditional50;
struct list$1charph* __result20__;
void* right_value33;
void* right_value34;
struct list$1charph* result_24;
struct list_item$1charph* it_25;
_Bool _while_condtional6;
void* right_value38;
struct list$1charph* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value33 = (void*)0;
right_value34 = (void*)0;
memset(&result_24, 0, sizeof(struct list$1charph*));
memset(&it_25, 0, sizeof(struct list_item$1charph*));
right_value38 = (void*)0;
                    if(_if_conditional50=self==((void*)0),                    _if_conditional50) {
                        __result20__ = __result_obj__ = ((void*)0);
                        return __result20__;
                    }
                    result_24=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value34=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value33=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 198, "struct list$1charph"))))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value33);
                    if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value33, right_value33 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value34);
                    if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value34, right_value34 = (void*)0;
                    __freed_obj__ = 0;
                    it_25=self->head;
                    while(_while_condtional6=it_25!=((void*)0),                    _while_condtional6) {
                        list$1charph_add(result_24,(char*)come_increment_ref_count(((char*)(right_value38=string_clone(it_25->item)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
                        if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { right_value38 = come_decrement_ref_count(right_value38, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value38, right_value38 = (void*)0;
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
_Bool _if_conditional51;
void* right_value35;
struct list_item$1charph* litem_26;
char* __dec_obj20;
_Bool _if_conditional52;
void* right_value36;
struct list_item$1charph* litem_27;
char* __dec_obj21;
void* right_value37;
struct list_item$1charph* litem_28;
char* __dec_obj22;
struct list$1charph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value35 = (void*)0;
memset(&litem_26, 0, sizeof(struct list_item$1charph*));
right_value36 = (void*)0;
memset(&litem_27, 0, sizeof(struct list_item$1charph*));
right_value37 = (void*)0;
memset(&litem_28, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional51=self->len==0,                            _if_conditional51) {
                                litem_26=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value35=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 212, "struct list_item$1charph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
                                if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value35, right_value35 = (void*)0;
                                __freed_obj__ = 0;
                                litem_26->prev=((void*)0);
                                litem_26->next=((void*)0);
                                __dec_obj20=litem_26->item;
                                litem_26->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0,0); }
                                self->tail=litem_26;
                                self->head=litem_26;
                            }
                            else {
                                if(_if_conditional52=self->len==1,                                _if_conditional52) {
                                    litem_27=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value36=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 222, "struct list_item$1charph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
                                    if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value36, right_value36 = (void*)0;
                                    __freed_obj__ = 0;
                                    litem_27->prev=self->head;
                                    litem_27->next=((void*)0);
                                    __dec_obj21=litem_27->item;
                                    litem_27->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0,0); }
                                    self->tail=litem_27;
                                    self->head->next=litem_27;
                                }
                                else {
                                    litem_28=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value37=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 232, "struct list_item$1charph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
                                    if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value37, right_value37 = (void*)0;
                                    __freed_obj__ = 0;
                                    litem_28->prev=self->tail;
                                    litem_28->next=((void*)0);
                                    __dec_obj22=litem_28->item;
                                    litem_28->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0,0); }
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

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_clone(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional94;
struct list$1tuple3$3sTypephcharphsNodephph* __result25__;
void* right_value47;
void* right_value48;
struct list$1tuple3$3sTypephcharphsNodephph* result_31;
struct list_item$1tuple3$3sTypephcharphsNodephph* it_32;
_Bool _while_condtional8;
void* right_value56;
struct list$1tuple3$3sTypephcharphsNodephph* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value47 = (void*)0;
right_value48 = (void*)0;
memset(&result_31, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
memset(&it_32, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value56 = (void*)0;
            if(_if_conditional94=self==((void*)0),            _if_conditional94) {
                __result25__ = __result_obj__ = ((void*)0);
                return __result25__;
            }
            result_31=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value48=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value47=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 198, "struct list$1tuple3$3sTypephcharphsNodephph"))))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value47);
            if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value47, right_value47 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value48);
            if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value48, right_value48 = (void*)0;
            __freed_obj__ = 0;
            it_32=self->head;
            while(_while_condtional8=it_32!=((void*)0),            _while_condtional8) {
                list$1tuple3$3sTypephcharphsNodephph_add(result_31,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value56=tuple3$3sTypephcharphsNodephp_clone(it_32->item)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
                if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value56, right_value56 = (void*)0;
                __freed_obj__ = 0;
                it_32=it_32->next;
            }
            __result30__ = __result_obj__ = result_31;
            if(result_31 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,result_31, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result30__;
            if(result_31 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,result_31, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_initialize(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1tuple3$3sTypephcharphsNodephph* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result26__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result26__;
                if(self && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1tuple3$3sTypephcharphsNodephphp_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple3$3sTypephcharphsNodephph* it_29;
_Bool _while_condtional7;
struct list_item$1tuple3$3sTypephcharphsNodephph* prev_it_30;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_29, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&prev_it_30, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                    it_29=self->head;
                    while(_while_condtional7=it_29!=((void*)0),                    _while_condtional7) {
                        prev_it_30=it_29;
                        it_29=it_29->next;
                        if(prev_it_30 && !__freed_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,prev_it_30, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static void list_item$1tuple3$3sTypephcharphsNodephphp_finalize(struct list_item$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional95;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional95=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional95) {
                                if(self->item && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static void tuple3$3sTypephcharphsNodephp_finalize(struct tuple3$3sTypephcharphsNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional96=self!=((void*)0)&&self->v1!=((void*)0),                                    _if_conditional96) {
                                        if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
                                    if(_if_conditional97=self!=((void*)0)&&self->v2!=((void*)0),                                    _if_conditional97) {
                                        if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                    if(_if_conditional98=self!=((void*)0)&&self->v3!=((void*)0),                                    _if_conditional98) {
                                        if(self->v3 && !__freed_obj__) { self->v3 = come_decrement_ref_count(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0, 0); } 
                                    }
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_add(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional99;
void* right_value49;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_33;
struct tuple3$3sTypephcharphsNodeph* __dec_obj34;
_Bool _if_conditional103;
void* right_value50;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_34;
struct tuple3$3sTypephcharphsNodeph* __dec_obj35;
void* right_value51;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_35;
struct tuple3$3sTypephcharphsNodeph* __dec_obj36;
struct list$1tuple3$3sTypephcharphsNodephph* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value49 = (void*)0;
memset(&litem_33, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value50 = (void*)0;
memset(&litem_34, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value51 = (void*)0;
memset(&litem_35, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                    if(_if_conditional99=self->len==0,                    _if_conditional99) {
                        litem_33=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value49=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 212, "struct list_item$1tuple3$3sTypephcharphsNodephph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49);
                        if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value49, right_value49 = (void*)0;
                        __freed_obj__ = 0;
                        litem_33->prev=((void*)0);
                        litem_33->next=((void*)0);
                        __dec_obj34=litem_33->item;
                        litem_33->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        if(__dec_obj34) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail=litem_33;
                        self->head=litem_33;
                    }
                    else {
                        if(_if_conditional103=self->len==1,                        _if_conditional103) {
                            litem_34=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value50=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 222, "struct list_item$1tuple3$3sTypephcharphsNodephph"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50);
                            if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value50, right_value50 = (void*)0;
                            __freed_obj__ = 0;
                            litem_34->prev=self->head;
                            litem_34->next=((void*)0);
                            __dec_obj35=litem_34->item;
                            litem_34->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                            if(__dec_obj35) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->tail=litem_34;
                            self->head->next=litem_34;
                        }
                        else {
                            litem_35=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value51=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 232, "struct list_item$1tuple3$3sTypephcharphsNodephph"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
                            if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value51, right_value51 = (void*)0;
                            __freed_obj__ = 0;
                            litem_35->prev=self->tail;
                            litem_35->next=((void*)0);
                            __dec_obj36=litem_35->item;
                            litem_35->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                            if(__dec_obj36) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->tail->next=litem_35;
                            self->tail=litem_35;
                        }
                    }
                    self->len++;
                    __result27__ = __result_obj__ = self;
                    if(item && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result27__;
                    if(item && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple3$3sTypephcharphsNodeph_finalize(struct tuple3$3sTypephcharphsNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional100;
_Bool _if_conditional101;
_Bool _if_conditional102;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional100=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional100) {
                                if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(_if_conditional101=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional101) {
                                if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            if(_if_conditional102=self!=((void*)0)&&self->v3!=((void*)0),                            _if_conditional102) {
                                if(self->v3 && !__freed_obj__) { self->v3 = come_decrement_ref_count(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0, 0); } 
                            }
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodephp_clone(struct tuple3$3sTypephcharphsNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional104;
struct tuple3$3sTypephcharphsNodeph* __result28__;
void* right_value52;
struct tuple3$3sTypephcharphsNodeph* result_36;
_Bool _if_conditional105;
void* right_value53;
struct sType* __dec_obj37;
_Bool _if_conditional106;
void* right_value54;
char* __dec_obj38;
_Bool _if_conditional107;
void* right_value55;
struct sNode* __dec_obj39;
struct tuple3$3sTypephcharphsNodeph* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value52 = (void*)0;
memset(&result_36, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
right_value53 = (void*)0;
right_value54 = (void*)0;
right_value55 = (void*)0;
                    if(_if_conditional104=self==(void*)0,                    _if_conditional104) {
                        __result28__ = __result_obj__ = (void*)0;
                        return __result28__;
                    }
                    result_36=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value52=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "tuple3$3sTypephcharphsNodephp_clone", 3, "struct tuple3$3sTypephcharphsNodeph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52);
                    if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value52, right_value52 = (void*)0;
                    __freed_obj__ = 0;
                    if(_if_conditional105=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional105) {
                        __dec_obj37=result_36->v1;
                        result_36->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value53=sType_clone(self->v1))));
                        if(__dec_obj37) { come_call_finalizer(sType_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
                        if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value53, right_value53 = (void*)0;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional106=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional106) {
                        __dec_obj38=result_36->v2;
                        result_36->v2=(char*)come_increment_ref_count(((char*)(right_value54=string_clone(self->v2))));
                        if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
                        if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { right_value54 = come_decrement_ref_count(right_value54, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value54, right_value54 = (void*)0;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional107=self!=((void*)0)&&self->v3!=((void*)0),                    _if_conditional107) {
                        __dec_obj39=result_36->v3;
                        result_36->v3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value55=sNode_clone(self->v3))));
                        if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
                        if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, ((struct sNode*)right_value55)->finalize, ((struct sNode*)right_value55)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value55, right_value55 = (void*)0;
                        __freed_obj__ = 0;
                    }
                    __result29__ = __result_obj__ = result_36;
                    if(result_36 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,result_36, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result29__;
                    if(result_36 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,result_36, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void list$1tuple3$3sTypephcharphsNodephph_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

_Bool sStoreNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result32__ = (_Bool)0;
    return __result32__;
}

char* sStoreNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value59;
char* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value59 = (void*)0;
    __result33__ = __result_obj__ = ((char*)(right_value59=__builtin_string("sStoreNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59);
    if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value59, right_value59 = (void*)0;
    __freed_obj__ = 0;
    return __result33__;
}

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value60;
char* array_initializer_37;
_Bool _if_conditional115;
void* right_value64;
struct sVar* var__42;
_Bool _if_conditional126;
_Bool __result41__;
_Bool _if_conditional127;
_Bool __result42__;
void* right_value65;
struct sType* type_43;
void* right_value66;
void* right_value67;
struct sType* var_type_44;
void* right_value68;
_Bool _if_conditional128;
void* right_value69;
struct sVar* var__45;
_Bool _if_conditional129;
_Bool __result43__;
_Bool _if_conditional130;
_Bool __result44__;
void* right_value70;
struct sType* type_46;
_Bool _if_conditional131;
struct list$1tuple3$3sTypephcharphsNodephph* o2_saved_47;
struct tuple3$3sTypephcharphsNodeph* it_50;
_Bool _for_condtionalA1;
struct tuple3$3sTypephcharphsNodeph* multiple_assign_var1;
struct sType* type_53;
char* var_name_54;
struct sNode* right_value_55;
void* right_value71;
_Bool _if_conditional136;
_Bool __result52__;
void* right_value72;
struct sType* left_type_56;
void* right_value73;
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool __result53__;
void* right_value74;
struct CVALUE* come_value_57;
void* right_value75;
struct sType* left_type2_58;
_Bool _if_conditional141;
_Bool _if_conditional142;
void* right_value76;
struct list$1sNodeph* o2_saved_59;
struct sNode* it_62;
_Bool _for_condtionalA2;
_Bool _if_conditional147;
void* right_value77;
struct CVALUE* come_value_65;
void* right_value78;
void* right_value79;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool __result62__;
void* right_value80;
struct sType* left_type_66;
_Bool _if_conditional150;
void* right_value81;
_Bool _if_conditional151;
_Bool _if_conditional152;
void* right_value82;
struct list$1sNodeph* o2_saved_67;
struct sNode* it_68;
_Bool _for_condtionalA3;
_Bool _if_conditional153;
void* right_value83;
struct CVALUE* come_value_69;
void* right_value84;
void* right_value85;
struct sType* left_type2_70;
_Bool _if_conditional154;
_Bool _if_conditional155;
void* right_value86;
struct list$1sNodeph* o2_saved_71;
struct sNode* it_72;
_Bool _for_condtionalA4;
_Bool _if_conditional156;
void* right_value87;
struct CVALUE* come_value_73;
void* right_value88;
void* right_value89;
struct CVALUE* come_value_74;
void* right_value90;
char* __dec_obj45;
void* right_value91;
struct sType* __dec_obj46;
_Bool _if_conditional160;
_Bool _if_conditional161;
_Bool __result64__;
void* right_value95;
struct CVALUE* right_value_78;
struct sType* right_type_79;
_Bool _if_conditional162;
_Bool _if_conditional163;
_Bool _if_conditional164;
void* right_value96;
struct sVar* var__80;
_Bool _if_conditional165;
_Bool __result65__;
_Bool _if_conditional166;
int i_81;
struct list$1charph* o2_saved_82;
char* it_85;
_Bool _for_condtionalA5;
_Bool _if_conditional171;
void* right_value97;
struct sType* right_type2_91;
void* right_value98;
void* right_value99;
struct sType* var_type_92;
_Bool _if_conditional174;
_Bool _if_conditional175;
void* right_value100;
struct list$1sNodeph* o2_saved_93;
struct sNode* it_94;
_Bool _for_condtionalA6;
_Bool _if_conditional176;
void* right_value101;
struct CVALUE* come_value_95;
void* right_value102;
_Bool _if_conditional177;
void* right_value103;
void* right_value104;
struct sType* type_96;
void* right_value105;
void* right_value106;
struct sType* var_type_97;
_Bool _if_conditional178;
_Bool _if_conditional179;
void* right_value107;
struct list$1sNodeph* o2_saved_98;
struct sNode* it_99;
_Bool _for_condtionalA7;
_Bool _if_conditional180;
void* right_value108;
struct CVALUE* come_value_100;
void* right_value109;
struct sClass* current_stack_frame_struct_101;
void* right_value110;
_Bool _if_conditional181;
struct sVar* parent_var_102;
_Bool _if_conditional182;
_Bool _if_conditional183;
void* right_value111;
struct CVALUE* come_value_103;
struct sType* left_type_104;
_Bool _if_conditional184;
void* right_value112;
char* c_value_105;
void* right_value113;
char* __dec_obj50;
int right_value_id_106;
_Bool _if_conditional185;
_Bool _if_conditional186;
void* right_value114;
char* c_value_107;
void* right_value115;
char* __dec_obj51;
void* right_value116;
char* __dec_obj52;
void* right_value117;
struct sType* __dec_obj53;
void* right_value118;
void* right_value119;
_Bool __result76__;
_Bool _if_conditional187;
static int num_multiple_var_108=0;
void* right_value120;
char* multiple_var_name_109;
void* right_value121;
void* right_value122;
char* __dec_obj54;
int i_110;
struct list$1charph* o2_saved_111;
char* it_112;
_Bool _for_condtionalA8;
_Bool _if_conditional188;
void* right_value123;
void* right_value124;
struct sType* right_type2_113;
struct sVar* var__114;
void* right_value125;
struct sType* var_type_115;
_Bool _if_conditional189;
_Bool _if_conditional190;
void* right_value126;
struct list$1sNodeph* o2_saved_116;
struct sNode* it_117;
_Bool _for_condtionalA9;
_Bool _if_conditional191;
void* right_value127;
struct CVALUE* come_value_118;
void* right_value128;
void* right_value129;
struct sType* left_type_119;
void* right_value130;
struct CVALUE* right_value2_120;
void* right_value131;
char* __dec_obj55;
void* right_value132;
struct sType* __dec_obj56;
void* right_value133;
struct CVALUE* come_value_121;
void* right_value134;
void* right_value135;
_Bool _if_conditional192;
_Bool _if_conditional193;
void* right_value136;
char* __dec_obj57;
int right_value_id_122;
_Bool _if_conditional194;
void* right_value137;
char* __dec_obj58;
void* right_value138;
struct sType* __dec_obj59;
_Bool _if_conditional195;
void* right_value139;
struct sVar* var__123;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool __result77__;
_Bool _if_conditional198;
void* right_value140;
struct sType* __dec_obj60;
void* right_value141;
struct sType* left_type_124;
void* right_value142;
struct CVALUE* come_value_125;
_Bool _if_conditional199;
void* right_value143;
void* right_value144;
void* right_value145;
void* right_value146;
char* __dec_obj61;
_Bool _if_conditional200;
void* right_value147;
void* right_value148;
_Bool _if_conditional201;
void* right_value149;
void* right_value150;
char* __dec_obj62;
_Bool _if_conditional202;
void* right_value151;
void* right_value152;
_Bool _if_conditional203;
void* right_value153;
char* __dec_obj63;
void* right_value154;
char* __dec_obj64;
int right_value_id_126;
_Bool _if_conditional204;
void* right_value155;
struct sType* __dec_obj65;
_Bool _if_conditional205;
void* right_value156;
void* right_value157;
_Bool _if_conditional206;
void* right_value158;
char* __dec_obj66;
void* right_value159;
char* __dec_obj67;
void* right_value160;
struct sType* __dec_obj68;
_Bool _if_conditional207;
_Bool _if_conditional208;
_Bool _if_conditional209;
_Bool __result78__;
void* right_value161;
void* right_value162;
void* right_value163;
char* __dec_obj69;
void* right_value164;
struct sType* __dec_obj70;
_Bool _if_conditional210;
_Bool _if_conditional211;
void* right_value165;
void* right_value166;
_Bool __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value60 = (void*)0;
memset(&array_initializer_37, 0, sizeof(char*));
right_value64 = (void*)0;
memset(&var__42, 0, sizeof(struct sVar*));
right_value65 = (void*)0;
memset(&type_43, 0, sizeof(struct sType*));
right_value66 = (void*)0;
right_value67 = (void*)0;
memset(&var_type_44, 0, sizeof(struct sType*));
right_value68 = (void*)0;
right_value69 = (void*)0;
memset(&var__45, 0, sizeof(struct sVar*));
right_value70 = (void*)0;
memset(&type_46, 0, sizeof(struct sType*));
memset(&o2_saved_47, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
memset(&it_50, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&type_53, 0, sizeof(struct sType*));
memset(&var_name_54, 0, sizeof(char*));
memset(&right_value_55, 0, sizeof(struct sNode*));
memset(&type_53, 0, sizeof(struct sType*));
memset(&var_name_54, 0, sizeof(char*));
memset(&right_value_55, 0, sizeof(struct sNode*));
right_value71 = (void*)0;
right_value72 = (void*)0;
memset(&left_type_56, 0, sizeof(struct sType*));
right_value73 = (void*)0;
right_value74 = (void*)0;
memset(&come_value_57, 0, sizeof(struct CVALUE*));
right_value75 = (void*)0;
memset(&left_type2_58, 0, sizeof(struct sType*));
right_value76 = (void*)0;
memset(&o2_saved_59, 0, sizeof(struct list$1sNodeph*));
memset(&it_62, 0, sizeof(struct sNode*));
right_value77 = (void*)0;
memset(&come_value_65, 0, sizeof(struct CVALUE*));
right_value78 = (void*)0;
right_value79 = (void*)0;
right_value80 = (void*)0;
memset(&left_type_66, 0, sizeof(struct sType*));
right_value81 = (void*)0;
right_value82 = (void*)0;
memset(&o2_saved_67, 0, sizeof(struct list$1sNodeph*));
memset(&it_68, 0, sizeof(struct sNode*));
right_value83 = (void*)0;
memset(&come_value_69, 0, sizeof(struct CVALUE*));
right_value84 = (void*)0;
right_value85 = (void*)0;
memset(&left_type2_70, 0, sizeof(struct sType*));
right_value86 = (void*)0;
memset(&o2_saved_71, 0, sizeof(struct list$1sNodeph*));
memset(&it_72, 0, sizeof(struct sNode*));
right_value87 = (void*)0;
memset(&come_value_73, 0, sizeof(struct CVALUE*));
right_value88 = (void*)0;
right_value89 = (void*)0;
memset(&come_value_74, 0, sizeof(struct CVALUE*));
right_value90 = (void*)0;
right_value91 = (void*)0;
right_value95 = (void*)0;
memset(&right_value_78, 0, sizeof(struct CVALUE*));
memset(&right_type_79, 0, sizeof(struct sType*));
right_value96 = (void*)0;
memset(&var__80, 0, sizeof(struct sVar*));
memset(&i_81, 0, sizeof(int));
memset(&o2_saved_82, 0, sizeof(struct list$1charph*));
memset(&it_85, 0, sizeof(char*));
right_value97 = (void*)0;
memset(&right_type2_91, 0, sizeof(struct sType*));
right_value98 = (void*)0;
right_value99 = (void*)0;
memset(&var_type_92, 0, sizeof(struct sType*));
right_value100 = (void*)0;
memset(&o2_saved_93, 0, sizeof(struct list$1sNodeph*));
memset(&it_94, 0, sizeof(struct sNode*));
right_value101 = (void*)0;
memset(&come_value_95, 0, sizeof(struct CVALUE*));
right_value102 = (void*)0;
right_value103 = (void*)0;
right_value104 = (void*)0;
memset(&type_96, 0, sizeof(struct sType*));
right_value105 = (void*)0;
right_value106 = (void*)0;
memset(&var_type_97, 0, sizeof(struct sType*));
right_value107 = (void*)0;
memset(&o2_saved_98, 0, sizeof(struct list$1sNodeph*));
memset(&it_99, 0, sizeof(struct sNode*));
right_value108 = (void*)0;
memset(&come_value_100, 0, sizeof(struct CVALUE*));
right_value109 = (void*)0;
memset(&current_stack_frame_struct_101, 0, sizeof(struct sClass*));
right_value110 = (void*)0;
memset(&parent_var_102, 0, sizeof(struct sVar*));
right_value111 = (void*)0;
memset(&come_value_103, 0, sizeof(struct CVALUE*));
memset(&left_type_104, 0, sizeof(struct sType*));
right_value112 = (void*)0;
memset(&c_value_105, 0, sizeof(char*));
right_value113 = (void*)0;
memset(&right_value_id_106, 0, sizeof(int));
right_value114 = (void*)0;
memset(&c_value_107, 0, sizeof(char*));
right_value115 = (void*)0;
right_value116 = (void*)0;
right_value117 = (void*)0;
right_value118 = (void*)0;
right_value119 = (void*)0;
right_value120 = (void*)0;
memset(&multiple_var_name_109, 0, sizeof(char*));
right_value121 = (void*)0;
right_value122 = (void*)0;
memset(&i_110, 0, sizeof(int));
memset(&o2_saved_111, 0, sizeof(struct list$1charph*));
memset(&it_112, 0, sizeof(char*));
right_value123 = (void*)0;
right_value124 = (void*)0;
memset(&right_type2_113, 0, sizeof(struct sType*));
memset(&var__114, 0, sizeof(struct sVar*));
right_value125 = (void*)0;
memset(&var_type_115, 0, sizeof(struct sType*));
right_value126 = (void*)0;
memset(&o2_saved_116, 0, sizeof(struct list$1sNodeph*));
memset(&it_117, 0, sizeof(struct sNode*));
right_value127 = (void*)0;
memset(&come_value_118, 0, sizeof(struct CVALUE*));
right_value128 = (void*)0;
right_value129 = (void*)0;
memset(&left_type_119, 0, sizeof(struct sType*));
right_value130 = (void*)0;
memset(&right_value2_120, 0, sizeof(struct CVALUE*));
right_value131 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
memset(&come_value_121, 0, sizeof(struct CVALUE*));
right_value134 = (void*)0;
right_value135 = (void*)0;
right_value136 = (void*)0;
memset(&right_value_id_122, 0, sizeof(int));
right_value137 = (void*)0;
right_value138 = (void*)0;
right_value139 = (void*)0;
memset(&var__123, 0, sizeof(struct sVar*));
right_value140 = (void*)0;
right_value141 = (void*)0;
memset(&left_type_124, 0, sizeof(struct sType*));
right_value142 = (void*)0;
memset(&come_value_125, 0, sizeof(struct CVALUE*));
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
right_value146 = (void*)0;
right_value147 = (void*)0;
right_value148 = (void*)0;
right_value149 = (void*)0;
right_value150 = (void*)0;
right_value151 = (void*)0;
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
memset(&right_value_id_126, 0, sizeof(int));
right_value155 = (void*)0;
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
right_value161 = (void*)0;
right_value162 = (void*)0;
right_value163 = (void*)0;
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
    array_initializer_37=(char*)come_increment_ref_count(((char*)(right_value60=string_clone(self->array_initializer))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value60);
    if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value60, right_value60 = (void*)0;
    __freed_obj__ = 0;
    if(_if_conditional115=array_initializer_37,    _if_conditional115) {
        var__42=((struct sVar*)(right_value64=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64);
        if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value64, right_value64 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional126=var__42,        _if_conditional126) {
            err_msg(info,"Already appended this var name(%s)(2)",self->name);
            __result41__ = (_Bool)0;
            if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
            return __result41__;
        }
        if(_if_conditional127=self->type==((void*)0),        _if_conditional127) {
            err_msg(info,"Require type name(%s)",self->name);
            __result42__ = (_Bool)0;
            if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
            return __result42__;
        }
        else {
            type_43=(struct sType*)come_increment_ref_count(((struct sType*)(right_value65=solve_generics(self->type,info->generics_type,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
            if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value65, right_value65 = (void*)0;
            __freed_obj__ = 0;
            type_43->mFunctionParam=(_Bool)0;
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value66=sType_clone(type_43)))),info);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
            if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value66, right_value66 = (void*)0;
            __freed_obj__ = 0;
            if(type_43 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_43, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        var__42=get_variable_from_table(info->lv_table,self->name);
        var_type_44=(struct sType*)come_increment_ref_count(((struct sType*)(right_value67=sType_clone(var__42->mType))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
        if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value67, right_value67 = (void*)0;
        __freed_obj__ = 0;
        var_type_44->mStatic=(_Bool)0;
        add_come_code(info,"%s=%s;\n",((char*)(right_value68=make_define_var(var_type_44,var__42->mCValueName,(_Bool)0,info))),array_initializer_37);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value68);
        if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value68, right_value68 = (void*)0;
        __freed_obj__ = 0;
        if(var_type_44 && !__freed_obj__) { come_call_finalizer(sType_finalize,var_type_44, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        if(_if_conditional128=self->right_value==((void*)0),        _if_conditional128) {
            var__45=((struct sVar*)(right_value69=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value69);
            if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value69, right_value69 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional129=var__45,            _if_conditional129) {
                err_msg(info,"Already appended this var name(%s)(1)",self->name);
                __result43__ = (_Bool)0;
                if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                return __result43__;
            }
            if(_if_conditional130=self->type==((void*)0),            _if_conditional130) {
                err_msg(info,"Require concrete variable type(%s)",self->name);
                __result44__ = (_Bool)0;
                if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                return __result44__;
            }
            type_46=(struct sType*)come_increment_ref_count(((struct sType*)(right_value70=solve_generics(self->type,info->generics_type,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70);
            if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value70, right_value70 = (void*)0;
            __freed_obj__ = 0;
            type_46->mFunctionParam=(_Bool)0;
            if(_if_conditional131=self->multiple_declare,            _if_conditional131) {
                for(
                o2_saved_47=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count((self->multiple_declare)),it_50=list$1tuple3$3sTypephcharphsNodephph_begin((o2_saved_47)) ,                0;                _for_condtionalA1=                !list$1tuple3$3sTypephcharphsNodephph_end((o2_saved_47)) ,                _for_condtionalA1;                it_50=list$1tuple3$3sTypephcharphsNodephph_next((o2_saved_47)) ,                0                ){
                    multiple_assign_var1=it_50;
                    type_53=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
                    var_name_54=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                    right_value_55=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v3);
                    add_variable_to_table(var_name_54,(struct sType*)come_increment_ref_count(((struct sType*)(right_value71=sType_clone(type_53)))),info);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value71);
                    if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value71, right_value71 = (void*)0;
                    __freed_obj__ = 0;
                    var__45=get_variable_from_table(info->lv_table,var_name_54);
                    if(_if_conditional136=var__45==((void*)0),                    _if_conditional136) {
                        err_msg(info,"var not found(%s)(ZY) at definition of variable\n",it_50);
                        __result52__ = (_Bool)1;
                        if(type_53 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_53, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_name_54 && !__freed_obj__) { var_name_54 = come_decrement_ref_count(var_name_54, (void*)0, (void*)0, 0, 0, 0); }
                        if(right_value_55 && !__freed_obj__) { right_value_55 = come_decrement_ref_count(right_value_55, ((struct sNode*)right_value_55)->finalize, ((struct sNode*)right_value_55)->_protocol_obj, 0, 0, 0); } 
                        if(o2_saved_47 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,o2_saved_47, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(type_46 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_46, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                        return __result52__;
                    }
                    left_type_56=(struct sType*)come_increment_ref_count(((struct sType*)(right_value72=sType_clone(var__45->mType))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value72);
                    if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value72, right_value72 = (void*)0;
                    __freed_obj__ = 0;
                    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value73=make_define_var(left_type_56,var__45->mCValueName,(_Bool)0,info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value73);
                    if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value73, right_value73 = (void*)0;
                    __freed_obj__ = 0;
                    if(_if_conditional137=right_value_55,                    _if_conditional137) {
                        if(_if_conditional138=!node_compile(right_value_55,info),                        _if_conditional138) {
                            __result53__ = (_Bool)0;
                            if(type_53 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_53, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(var_name_54 && !__freed_obj__) { var_name_54 = come_decrement_ref_count(var_name_54, (void*)0, (void*)0, 0, 0, 0); }
                            if(right_value_55 && !__freed_obj__) { right_value_55 = come_decrement_ref_count(right_value_55, ((struct sNode*)right_value_55)->finalize, ((struct sNode*)right_value_55)->_protocol_obj, 0, 0, 0); } 
                            if(left_type_56 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_56, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(o2_saved_47 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,o2_saved_47, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(type_46 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_46, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                            return __result53__;
                        }
                        come_value_57=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value74=get_value_from_stack(-1,info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value74);
                        if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value74, right_value74 = (void*)0;
                        __freed_obj__ = 0;
                        dec_stack_ptr(1,info);
                        add_come_code(info,"%s=%s;\n",var__45->mCValueName,come_value_57->c_value);
                        if(come_value_57 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_57, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    left_type2_58=(struct sType*)come_increment_ref_count(((struct sType*)(right_value75=sType_clone(left_type_56))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value75);
                    if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value75, right_value75 = (void*)0;
                    __freed_obj__ = 0;
                    left_type2_58->mStatic=(_Bool)0;
                    if(_if_conditional141=!var__45->mType->mConstant&&!var__45->mType->mStatic,                    _if_conditional141) {
                        if(_if_conditional142=list$1sNodeph_length(left_type2_58->mArrayNum)>0,                        _if_conditional142) {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__45->mCValueName,((char*)(right_value76=make_type_name_string(left_type2_58,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value76);
                            if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { right_value76 = come_decrement_ref_count(right_value76, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value76, right_value76 = (void*)0;
                            __freed_obj__ = 0;
                            for(
                            o2_saved_59=(struct list$1sNodeph*)come_increment_ref_count((left_type2_58->mArrayNum)),it_62=list$1sNodeph_begin((o2_saved_59)) ,                            0;                            _for_condtionalA2=                            !list$1sNodeph_end((o2_saved_59)) ,                            _for_condtionalA2;                            it_62=list$1sNodeph_next((o2_saved_59)) ,                            0                            ){
                                if(_if_conditional147=!node_compile(it_62,info),                                _if_conditional147) {
                                    err_msg(info,"invalid array num");
                                    exit(1);
                                }
                                come_value_65=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value77=get_value_from_stack(-1,info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
                                if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value77, right_value77 = (void*)0;
                                __freed_obj__ = 0;
                                dec_stack_ptr(1,info);
                                add_come_code(info,"*(%s)",come_value_65->c_value);
                                if(come_value_65 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_65, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(o2_saved_59 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_59, (void*)0, (void*)0, 0, 0, 0, 0); }
                            add_come_code(info,");\n");
                        }
                        else {
                            add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__45->mCValueName,((char*)(right_value78=make_type_name_string(left_type2_58,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value78);
                            if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value78, right_value78 = (void*)0;
                            __freed_obj__ = 0;
                        }
                    }
                    if(type_53 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_53, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(var_name_54 && !__freed_obj__) { var_name_54 = come_decrement_ref_count(var_name_54, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value_55 && !__freed_obj__) { right_value_55 = come_decrement_ref_count(right_value_55, ((struct sNode*)right_value_55)->finalize, ((struct sNode*)right_value_55)->_protocol_obj, 0, 0, 0); } 
                    if(left_type_56 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_56, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(left_type2_58 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_58, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(o2_saved_47 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,o2_saved_47, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value79=sType_clone(type_46)))),info);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
                if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value79, right_value79 = (void*)0;
                __freed_obj__ = 0;
                var__45=get_variable_from_table(info->lv_table,self->name);
                if(_if_conditional148=var__45==((void*)0),                _if_conditional148) {
                    var__45=get_variable_from_table(info->gv_table,self->name);
                    if(_if_conditional149=var__45==((void*)0),                    _if_conditional149) {
                        err_msg(info,"var not found(%s)(Y) at definition of variable\n",self->name);
                        __result62__ = (_Bool)1;
                        if(type_46 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_46, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                        return __result62__;
                    }
                }
                left_type_66=(struct sType*)come_increment_ref_count(((struct sType*)(right_value80=sType_clone(var__45->mType))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value80);
                if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value80, right_value80 = (void*)0;
                __freed_obj__ = 0;
                if(_if_conditional150=list$1sNodeph_length(left_type_66->mArrayNum)>0,                _if_conditional150) {
                    add_come_code(info,"%s;\n",((char*)(right_value81=make_define_var(left_type_66,var__45->mCValueName,(_Bool)0,info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
                    if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { right_value81 = come_decrement_ref_count(right_value81, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value81, right_value81 = (void*)0;
                    __freed_obj__ = 0;
                    if(_if_conditional151=!left_type_66->mStatic,                    _if_conditional151) {
                        if(_if_conditional152=list$1sNodeph_length(left_type_66->mArrayNum)>0,                        _if_conditional152) {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__45->mCValueName,((char*)(right_value82=make_type_name_string(left_type_66,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value82);
                            if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value82, right_value82 = (void*)0;
                            __freed_obj__ = 0;
                            for(
                            o2_saved_67=(struct list$1sNodeph*)come_increment_ref_count((left_type_66->mArrayNum)),it_68=list$1sNodeph_begin((o2_saved_67)) ,                            0;                            _for_condtionalA3=                            !list$1sNodeph_end((o2_saved_67)) ,                            _for_condtionalA3;                            it_68=list$1sNodeph_next((o2_saved_67)) ,                            0                            ){
                                if(_if_conditional153=!node_compile(it_68,info),                                _if_conditional153) {
                                    err_msg(info,"invalid array num");
                                    exit(1);
                                }
                                come_value_69=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value83=get_value_from_stack(-1,info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
                                if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value83, right_value83 = (void*)0;
                                __freed_obj__ = 0;
                                dec_stack_ptr(1,info);
                                add_come_code(info,"*(%s)",come_value_69->c_value);
                                if(come_value_69 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_69, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(o2_saved_67 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_67, (void*)0, (void*)0, 0, 0, 0, 0); }
                            add_come_code(info,");\n");
                        }
                        else {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)); /* aaa */\n",var__45->mCValueName,var__45->mCValueName);
                        }
                    }
                }
                else {
                    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value84=make_define_var(left_type_66,var__45->mCValueName,(_Bool)0,info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value84);
                    if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { right_value84 = come_decrement_ref_count(right_value84, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value84, right_value84 = (void*)0;
                    __freed_obj__ = 0;
                    left_type2_70=(struct sType*)come_increment_ref_count(((struct sType*)(right_value85=sType_clone(left_type_66))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value85);
                    if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value85, right_value85 = (void*)0;
                    __freed_obj__ = 0;
                    left_type2_70->mStatic=(_Bool)0;
                    if(_if_conditional154=!var__45->mType->mConstant&&!var__45->mType->mStatic,                    _if_conditional154) {
                        if(_if_conditional155=list$1sNodeph_length(left_type2_70->mArrayNum)>0,                        _if_conditional155) {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__45->mCValueName,((char*)(right_value86=make_type_name_string(left_type2_70,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value86);
                            if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value86, right_value86 = (void*)0;
                            __freed_obj__ = 0;
                            for(
                            o2_saved_71=(struct list$1sNodeph*)come_increment_ref_count((left_type2_70->mArrayNum)),it_72=list$1sNodeph_begin((o2_saved_71)) ,                            0;                            _for_condtionalA4=                            !list$1sNodeph_end((o2_saved_71)) ,                            _for_condtionalA4;                            it_72=list$1sNodeph_next((o2_saved_71)) ,                            0                            ){
                                if(_if_conditional156=!node_compile(it_72,info),                                _if_conditional156) {
                                    err_msg(info,"invalid array num");
                                    exit(1);
                                }
                                come_value_73=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value87=get_value_from_stack(-1,info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value87);
                                if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value87, right_value87 = (void*)0;
                                __freed_obj__ = 0;
                                dec_stack_ptr(1,info);
                                add_come_code(info,"*(%s)",come_value_73->c_value);
                                if(come_value_73 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_73, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(o2_saved_71 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_71, (void*)0, (void*)0, 0, 0, 0, 0); }
                            add_come_code(info,");\n");
                        }
                        else {
                            add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__45->mCValueName,((char*)(right_value88=make_type_name_string(left_type2_70,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value88);
                            if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value88, right_value88 = (void*)0;
                            __freed_obj__ = 0;
                        }
                    }
                    if(left_type2_70 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_70, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                come_value_74=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value89=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 216, "struct CVALUE"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value89);
                if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value89, right_value89 = (void*)0;
                __freed_obj__ = 0;
                __dec_obj45=come_value_74->c_value;
                come_value_74->c_value=(char*)come_increment_ref_count(((char*)(right_value90=xsprintf("%s",var__45->mCValueName))));
                if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
                if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value90, right_value90 = (void*)0;
                __freed_obj__ = 0;
                __dec_obj46=come_value_74->type;
                come_value_74->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value91=sType_clone(left_type_66))));
                if(__dec_obj46) { come_call_finalizer(sType_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value91);
                if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value91, right_value91 = (void*)0;
                __freed_obj__ = 0;
                come_value_74->var=var__45;
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_74));
                if(_if_conditional160=self->alloc&&!left_type_66->mClass->mNumber&&left_type_66->mPointerNum==0,                _if_conditional160) {
                    var__45->mType->mAllocaValue=(_Bool)1;
                }
                if(left_type_66 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_66, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_value_74 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_74, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(type_46 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_46, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            if(_if_conditional161=!node_compile(self->right_value,info),            _if_conditional161) {
                __result64__ = (_Bool)0;
                if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                return __result64__;
            }
            right_value_78=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value95=get_value_from_stack(-1,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
            if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value95, right_value95 = (void*)0;
            __freed_obj__ = 0;
            dec_stack_ptr(1,info);
            right_type_79=right_value_78->type;
            if(_if_conditional162=self->multiple_assign,            _if_conditional162) {
                if(_if_conditional163=right_type_79->mNoSolvedGenericsType->v1,                _if_conditional163) {
                    right_type_79=right_type_79->mNoSolvedGenericsType->v1;
                }
            }
            if(_if_conditional164=self->alloc,            _if_conditional164) {
                var__80=((struct sVar*)(right_value96=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96);
                if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value96, right_value96 = (void*)0;
                __freed_obj__ = 0;
                if(_if_conditional165=var__80,                _if_conditional165) {
                    err_msg(info,"Already appended this var name(%s)(2)",self->name);
                    __result65__ = (_Bool)0;
                    if(right_value_78 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_78, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                    return __result65__;
                }
                if(_if_conditional166=self->multiple_assign,                _if_conditional166) {
                    i_81=0;
                    for(
                    o2_saved_82=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_85=list$1charph_begin((o2_saved_82)) ,                    0;                    _for_condtionalA5=                    !list$1charph_end((o2_saved_82)) ,                    _for_condtionalA5;                    it_85=list$1charph_next((o2_saved_82)) ,                    0                    ){
                        if(_if_conditional171=i_81<list$1sTypeph_length(right_type_79->mGenericsTypes),                        _if_conditional171) {
                            right_type2_91=((struct sType*)(right_value97=list$1sTypephp_operator_load_element(right_type_79->mGenericsTypes,i_81)));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97);
                            if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value97, right_value97 = (void*)0;
                            __freed_obj__ = 0;
                            right_type2_91->mFunctionParam=(_Bool)0;
                            add_variable_to_table(it_85,(struct sType*)come_increment_ref_count(((struct sType*)(right_value98=sType_clone(right_type2_91)))),info);
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value98);
                            if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value98, right_value98 = (void*)0;
                            __freed_obj__ = 0;
                            var__80=get_variable_from_table(info->lv_table,it_85);
                            var_type_92=(struct sType*)come_increment_ref_count(((struct sType*)(right_value99=sType_clone(var__80->mType))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value99);
                            if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value99, right_value99 = (void*)0;
                            __freed_obj__ = 0;
                            var_type_92->mStatic=(_Bool)0;
                            if(_if_conditional174=!var_type_92->mConstant&&!var_type_92->mStatic,                            _if_conditional174) {
                                if(_if_conditional175=list$1sNodeph_length(var_type_92->mArrayNum)>0,                                _if_conditional175) {
                                    add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__80->mCValueName,((char*)(right_value100=make_type_name_string(var_type_92,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
                                    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value100, right_value100 = (void*)0;
                                    __freed_obj__ = 0;
                                    for(
                                    o2_saved_93=(struct list$1sNodeph*)come_increment_ref_count((var_type_92->mArrayNum)),it_94=list$1sNodeph_begin((o2_saved_93)) ,                                    0;                                    _for_condtionalA6=                                    !list$1sNodeph_end((o2_saved_93)) ,                                    _for_condtionalA6;                                    it_94=list$1sNodeph_next((o2_saved_93)) ,                                    0                                    ){
                                        if(_if_conditional176=!node_compile(it_94,info),                                        _if_conditional176) {
                                            err_msg(info,"invalid array num");
                                            exit(1);
                                        }
                                        come_value_95=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value101=get_value_from_stack(-1,info))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value101);
                                        if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value101, right_value101 = (void*)0;
                                        __freed_obj__ = 0;
                                        dec_stack_ptr(1,info);
                                        add_come_code(info,"*(%s)",come_value_95->c_value);
                                        if(come_value_95 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_95, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
                                    if(o2_saved_93 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_93, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    add_come_code(info,");\n");
                                }
                                else {
                                    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__80->mCValueName,((char*)(right_value102=make_type_name_string(var_type_92,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value102);
                                    if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { right_value102 = come_decrement_ref_count(right_value102, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value102, right_value102 = (void*)0;
                                    __freed_obj__ = 0;
                                }
                            }
                            if(var_type_92 && !__freed_obj__) { come_call_finalizer(sType_finalize,var_type_92, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        i_81++;
                    }
                    if(o2_saved_82 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,o2_saved_82, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                else {
                    if(_if_conditional177=self->type==((void*)0),                    _if_conditional177) {
                        right_type_79->mFunctionParam=(_Bool)0;
                        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value103=sType_clone(right_type_79)))),info);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value103);
                        if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value103, right_value103 = (void*)0;
                        __freed_obj__ = 0;
                    }
                    else {
                        type_96=(struct sType*)come_increment_ref_count(((struct sType*)(right_value104=solve_generics(self->type,info->generics_type,info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value104);
                        if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value104, right_value104 = (void*)0;
                        __freed_obj__ = 0;
                        type_96->mFunctionParam=(_Bool)0;
                        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value105=sType_clone(type_96)))),info);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
                        if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value105, right_value105 = (void*)0;
                        __freed_obj__ = 0;
                        if(type_96 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_96, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    var__80=get_variable_from_table(info->lv_table,self->name);
                    var_type_97=(struct sType*)come_increment_ref_count(((struct sType*)(right_value106=sType_clone(var__80->mType))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
                    if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value106, right_value106 = (void*)0;
                    __freed_obj__ = 0;
                    var_type_97->mStatic=(_Bool)0;
                    if(_if_conditional178=!var__80->mType->mStatic&&!var_type_97->mConstant&&list$1sNodeph_length(var_type_97->mArrayNum)==0,                    _if_conditional178) {
                        if(_if_conditional179=list$1sNodeph_length(var_type_97->mArrayNum)>0,                        _if_conditional179) {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__80->mCValueName,((char*)(right_value107=make_type_name_string(var_type_97,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
                            if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { right_value107 = come_decrement_ref_count(right_value107, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value107, right_value107 = (void*)0;
                            __freed_obj__ = 0;
                            for(
                            o2_saved_98=(struct list$1sNodeph*)come_increment_ref_count((var_type_97->mArrayNum)),it_99=list$1sNodeph_begin((o2_saved_98)) ,                            0;                            _for_condtionalA7=                            !list$1sNodeph_end((o2_saved_98)) ,                            _for_condtionalA7;                            it_99=list$1sNodeph_next((o2_saved_98)) ,                            0                            ){
                                if(_if_conditional180=!node_compile(it_99,info),                                _if_conditional180) {
                                    err_msg(info,"invalid array num");
                                    exit(1);
                                }
                                come_value_100=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value108=get_value_from_stack(-1,info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value108);
                                if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value108, right_value108 = (void*)0;
                                __freed_obj__ = 0;
                                dec_stack_ptr(1,info);
                                add_come_code(info,"*(%s)",come_value_100->c_value);
                                if(come_value_100 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_100, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(o2_saved_98 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_98, (void*)0, (void*)0, 0, 0, 0, 0); }
                            add_come_code(info,");\n");
                        }
                        else {
                            add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__80->mCValueName,((char*)(right_value109=make_type_name_string(var_type_97,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
                            if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { right_value109 = come_decrement_ref_count(right_value109, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value109, right_value109 = (void*)0;
                            __freed_obj__ = 0;
                        }
                    }
                    if(var_type_97 && !__freed_obj__) { come_call_finalizer(sType_finalize,var_type_97, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
            }
            current_stack_frame_struct_101=info->current_stack_frame_struct;
            if(_if_conditional181=current_stack_frame_struct_101&&((struct sVar*)(right_value110=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)))==((void*)0),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value110),
            (right_value110 && right_value110 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sVar_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value110, right_value110 = (void*)0, 
            __freed_obj__ = 0, 
            _if_conditional181) {
                parent_var_102=get_variable_from_table(info->lv_table->mParent,self->name);
                if(_if_conditional182=parent_var_102!=((void*)0),                _if_conditional182) {
                    if(_if_conditional183=string_operator_not_equals(parent_var_102->mFunName,info->come_fun->mName),                    _if_conditional183) {
                        come_value_103=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value111=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 335, "struct CVALUE"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value111);
                        if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value111, right_value111 = (void*)0;
                        __freed_obj__ = 0;
                        left_type_104=parent_var_102->mType;
                        if(_if_conditional184=left_type_104->mPointerNum>0&&right_type_79->mPointerNum>0&&right_type_79->mHeap&&left_type_104->mHeap,                        _if_conditional184) {
                            c_value_105=(char*)come_increment_ref_count(((char*)(right_value112=xsprintf("*(parent->%s)",parent_var_102->mCValueName))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value112);
                            if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { right_value112 = come_decrement_ref_count(right_value112, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value112, right_value112 = (void*)0;
                            __freed_obj__ = 0;
                            decrement_ref_count_object(parent_var_102->mType,c_value_105,info,(_Bool)0);
                            std_move(left_type_104,right_type_79,right_value_78,info);
                            __dec_obj50=come_value_103->c_value;
                            come_value_103->c_value=(char*)come_increment_ref_count(((char*)(right_value113=xsprintf("(*(parent->%s))=%s",parent_var_102->mCValueName,right_value_78->c_value))));
                            if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
                            if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { right_value113 = come_decrement_ref_count(right_value113, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value113, right_value113 = (void*)0;
                            __freed_obj__ = 0;
                            right_value_id_106=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_78->c_value));
                            if(_if_conditional185=right_value_id_106!=-1,                            _if_conditional185) {
                                remove_object_from_right_values(right_value_id_106,info);
                            }
                            if(c_value_105 && !__freed_obj__) { c_value_105 = come_decrement_ref_count(c_value_105, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        else {
                            if(_if_conditional186=left_type_104->mPointerNum>0&&right_type_79->mPointerNum>0&&string_operator_equals(right_type_79->mClass->mName,"void")&&left_type_104->mHeap,                            _if_conditional186) {
                                c_value_107=(char*)come_increment_ref_count(((char*)(right_value114=xsprintf("*(parent->%s)",parent_var_102->mCValueName))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value114);
                                if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { right_value114 = come_decrement_ref_count(right_value114, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value114, right_value114 = (void*)0;
                                __freed_obj__ = 0;
                                decrement_ref_count_object(parent_var_102->mType,c_value_107,info,(_Bool)0);
                                __dec_obj51=come_value_103->c_value;
                                come_value_103->c_value=(char*)come_increment_ref_count(((char*)(right_value115=xsprintf("(*(parent->%s))=%s",parent_var_102->mCValueName,right_value_78->c_value))));
                                if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
                                if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value115, right_value115 = (void*)0;
                                __freed_obj__ = 0;
                                if(c_value_107 && !__freed_obj__) { c_value_107 = come_decrement_ref_count(c_value_107, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            else {
                                __dec_obj52=come_value_103->c_value;
                                come_value_103->c_value=(char*)come_increment_ref_count(((char*)(right_value116=xsprintf("(*(parent->%s))=%s",parent_var_102->mCValueName,right_value_78->c_value))));
                                if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value116);
                                if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { right_value116 = come_decrement_ref_count(right_value116, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value116, right_value116 = (void*)0;
                                __freed_obj__ = 0;
                            }
                        }
                        __dec_obj53=come_value_103->type;
                        come_value_103->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value117=sType_clone(left_type_104))));
                        if(__dec_obj53) { come_call_finalizer(sType_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
                        if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value117, right_value117 = (void*)0;
                        __freed_obj__ = 0;
                        come_value_103->var=((void*)0);
                        check_assign_type(((char*)(right_value119=xsprintf("\%s is assigning to",((char*)(right_value118=string_to_string(self->name)))))),left_type_104,right_type_79,come_value_103,(_Bool)0,info);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
                        if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { right_value118 = come_decrement_ref_count(right_value118, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value118, right_value118 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value119);
                        if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { right_value119 = come_decrement_ref_count(right_value119, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value119, right_value119 = (void*)0;
                        __freed_obj__ = 0;
                        add_come_last_code(info,"%s;\n",come_value_103->c_value);
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_103));
                        __result76__ = (_Bool)1;
                        if(come_value_103 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_103, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(right_value_78 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_78, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                        return __result76__;
                        if(come_value_103 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_103, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                }
            }
            if(_if_conditional187=self->multiple_assign,            _if_conditional187) {
                multiple_var_name_109=(char*)come_increment_ref_count(((char*)(right_value120=xsprintf("multiple_assign_var%d",++num_multiple_var_108))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120);
                if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { right_value120 = come_decrement_ref_count(right_value120, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value120, right_value120 = (void*)0;
                __freed_obj__ = 0;
                add_come_code_at_function_head(info,"%s;\n",((char*)(right_value121=make_define_var(right_value_78->type,multiple_var_name_109,(_Bool)0,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value121);
                if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { right_value121 = come_decrement_ref_count(right_value121, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value121, right_value121 = (void*)0;
                __freed_obj__ = 0;
                add_come_code(info,"%s=%s;\n",multiple_var_name_109,right_value_78->c_value);
                __dec_obj54=right_value_78->c_value;
                right_value_78->c_value=(char*)come_increment_ref_count(((char*)(right_value122=string_clone(multiple_var_name_109))));
                if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
                if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { right_value122 = come_decrement_ref_count(right_value122, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value122, right_value122 = (void*)0;
                __freed_obj__ = 0;
                i_110=0;
                for(
                o2_saved_111=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_112=list$1charph_begin((o2_saved_111)) ,                0;                _for_condtionalA8=                !list$1charph_end((o2_saved_111)) ,                _for_condtionalA8;                it_112=list$1charph_next((o2_saved_111)) ,                0                ){
                    if(_if_conditional188=i_110<list$1sTypeph_length(right_type_79->mGenericsTypes),                    _if_conditional188) {
                        right_type2_113=(struct sType*)come_increment_ref_count(((struct sType*)(right_value124=sType_clone(((struct sType*)(right_value123=list$1sTypephp_operator_load_element(right_type_79->mGenericsTypes,i_110)))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value123);
                        if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value123, right_value123 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value124);
                        if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value124, right_value124 = (void*)0;
                        __freed_obj__ = 0;
                        var__114=get_variable_from_table(info->lv_table,it_112);
                        var_type_115=(struct sType*)come_increment_ref_count(((struct sType*)(right_value125=sType_clone(var__114->mType))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
                        if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value125, right_value125 = (void*)0;
                        __freed_obj__ = 0;
                        var_type_115->mStatic=(_Bool)0;
                        if(_if_conditional189=!var_type_115->mConstant,                        _if_conditional189) {
                            if(_if_conditional190=list$1sNodeph_length(var_type_115->mArrayNum)>0,                            _if_conditional190) {
                                add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__114->mCValueName,((char*)(right_value126=make_type_name_string(var_type_115,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
                                if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { right_value126 = come_decrement_ref_count(right_value126, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value126, right_value126 = (void*)0;
                                __freed_obj__ = 0;
                                for(
                                o2_saved_116=(struct list$1sNodeph*)come_increment_ref_count((var_type_115->mArrayNum)),it_117=list$1sNodeph_begin((o2_saved_116)) ,                                0;                                _for_condtionalA9=                                !list$1sNodeph_end((o2_saved_116)) ,                                _for_condtionalA9;                                it_117=list$1sNodeph_next((o2_saved_116)) ,                                0                                ){
                                    if(_if_conditional191=!node_compile(it_117,info),                                    _if_conditional191) {
                                        err_msg(info,"invalid array num");
                                        exit(1);
                                    }
                                    come_value_118=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value127=get_value_from_stack(-1,info))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
                                    if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value127, right_value127 = (void*)0;
                                    __freed_obj__ = 0;
                                    dec_stack_ptr(1,info);
                                    add_come_code(info,"*(%s)",come_value_118->c_value);
                                    if(come_value_118 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_118, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(o2_saved_116 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_116, (void*)0, (void*)0, 0, 0, 0, 0); }
                                add_come_code(info,");\n");
                            }
                            else {
                                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__114->mCValueName,((char*)(right_value128=make_type_name_string(var_type_115,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value128);
                                if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { right_value128 = come_decrement_ref_count(right_value128, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value128, right_value128 = (void*)0;
                                __freed_obj__ = 0;
                            }
                        }
                        left_type_119=(struct sType*)come_increment_ref_count(((struct sType*)(right_value129=sType_clone(var__114->mType))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
                        if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value129, right_value129 = (void*)0;
                        __freed_obj__ = 0;
                        right_value2_120=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value130=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 418, "struct CVALUE"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value130);
                        if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value130, right_value130 = (void*)0;
                        __freed_obj__ = 0;
                        __dec_obj55=right_value2_120->c_value;
                        right_value2_120->c_value=(char*)come_increment_ref_count(((char*)(right_value131=xsprintf("%s->v%d",right_value_78->c_value,i_110+1))));
                        if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value131);
                        if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { right_value131 = come_decrement_ref_count(right_value131, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value131, right_value131 = (void*)0;
                        __freed_obj__ = 0;
                        __dec_obj56=right_value2_120->type;
                        right_value2_120->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value132=sType_clone(right_type2_113))));
                        if(__dec_obj56) { come_call_finalizer(sType_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value132);
                        if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value132, right_value132 = (void*)0;
                        __freed_obj__ = 0;
                        right_value2_120->var=((void*)0);
                        come_value_121=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value133=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 424, "struct CVALUE"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133);
                        if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value133, right_value133 = (void*)0;
                        __freed_obj__ = 0;
                        check_assign_type(((char*)(right_value135=xsprintf("\%s is assining to}",((char*)(right_value134=string_to_string(self->name)))))),left_type_119,right_type2_113,come_value_121,(_Bool)0,info);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value134);
                        if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { right_value134 = come_decrement_ref_count(right_value134, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value134, right_value134 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value135);
                        if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { right_value135 = come_decrement_ref_count(right_value135, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value135, right_value135 = (void*)0;
                        __freed_obj__ = 0;
                        if(_if_conditional192=right_type2_113->mHeap&&left_type_119->mHeap&&left_type_119->mPointerNum>0&&right_type2_113->mPointerNum>0,                        _if_conditional192) {
                            if(_if_conditional193=self->alloc,                            _if_conditional193) {
                                std_move(left_type_119,right_type2_113,right_value2_120,info);
                                __dec_obj57=come_value_121->c_value;
                                come_value_121->c_value=(char*)come_increment_ref_count(((char*)(right_value136=xsprintf("%s=%s",var__114->mCValueName,right_value2_120->c_value))));
                                if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value136);
                                if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value136, right_value136 = (void*)0;
                                __freed_obj__ = 0;
                            }
                            right_value_id_122=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value2_120->c_value));
                            if(_if_conditional194=right_value_id_122!=-1,                            _if_conditional194) {
                                remove_object_from_right_values(right_value_id_122,info);
                            }
                        }
                        else {
                            __dec_obj58=come_value_121->c_value;
                            come_value_121->c_value=(char*)come_increment_ref_count(((char*)(right_value137=xsprintf("%s=%s",var__114->mCValueName,right_value2_120->c_value))));
                            if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value137);
                            if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value137, right_value137 = (void*)0;
                            __freed_obj__ = 0;
                        }
                        __dec_obj59=come_value_121->type;
                        come_value_121->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value138=sType_clone(left_type_119))));
                        if(__dec_obj59) { come_call_finalizer(sType_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value138);
                        if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value138, right_value138 = (void*)0;
                        __freed_obj__ = 0;
                        come_value_121->var=var__114;
                        if(_if_conditional195=self->alloc,                        _if_conditional195) {
                            add_come_code_at_function_head(info,"%s;\n",((char*)(right_value139=make_define_var(left_type_119,var__114->mCValueName,(_Bool)0,info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value139);
                            if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value139, right_value139 = (void*)0;
                            __freed_obj__ = 0;
                            add_come_code(info,"%s;\n",come_value_121->c_value);
                        }
                        else {
                            add_come_code(info,"%s;\n",come_value_121->c_value);
                        }
                        if(right_type2_113 && !__freed_obj__) { come_call_finalizer(sType_finalize,right_type2_113, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_type_115 && !__freed_obj__) { come_call_finalizer(sType_finalize,var_type_115, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(left_type_119 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_119, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(right_value2_120 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value2_120, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(come_value_121 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_121, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    i_110++;
                }
                if(o2_saved_111 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,o2_saved_111, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(multiple_var_name_109 && !__freed_obj__) { multiple_var_name_109 = come_decrement_ref_count(multiple_var_name_109, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                var__123=get_variable_from_table(info->lv_table,self->name);
                if(_if_conditional196=var__123==((void*)0),                _if_conditional196) {
                    var__123=get_variable_from_table(info->gv_table,self->name);
                    if(_if_conditional197=var__123==((void*)0),                    _if_conditional197) {
                        err_msg(info,"var not found(%s)(X) at storing variable\n",self->name);
                        __result77__ = (_Bool)1;
                        if(right_value_78 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_78, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                        return __result77__;
                    }
                }
                if(_if_conditional198=var__123->mType==((void*)0),                _if_conditional198) {
                    __dec_obj60=var__123->mType;
                    var__123->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value140=sType_clone(right_type_79))));
                    if(__dec_obj60) { come_call_finalizer(sType_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value140);
                    if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value140, right_value140 = (void*)0;
                    __freed_obj__ = 0;
                }
                left_type_124=(struct sType*)come_increment_ref_count(((struct sType*)(right_value141=sType_clone(var__123->mType))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value141);
                if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value141, right_value141 = (void*)0;
                __freed_obj__ = 0;
                come_value_125=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value142=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 477, "struct CVALUE"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value142);
                if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value142, right_value142 = (void*)0;
                __freed_obj__ = 0;
                if(_if_conditional199=var__123->mType->mStatic&&!var__123->mGlobal,                _if_conditional199) {
                    check_assign_type(((char*)(right_value144=xsprintf("\%s is assining to",((char*)(right_value143=string_to_string(self->name)))))),left_type_124,right_type_79,right_value_78,(_Bool)0,info);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value143);
                    if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value143, right_value143 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value144);
                    if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { right_value144 = come_decrement_ref_count(right_value144, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value144, right_value144 = (void*)0;
                    __freed_obj__ = 0;
                    add_come_code_at_function_head(info,"%s=%s;\n",((char*)(right_value145=make_define_var(left_type_124,var__123->mCValueName,(_Bool)0,info))),right_value_78->c_value);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value145);
                    if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value145, right_value145 = (void*)0;
                    __freed_obj__ = 0;
                    __dec_obj61=come_value_125->c_value;
                    come_value_125->c_value=(char*)come_increment_ref_count(((char*)(right_value146=__builtin_string(""))));
                    if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value146);
                    if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value146, right_value146 = (void*)0;
                    __freed_obj__ = 0;
                    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_125));
                    transpiler_clear_last_code(info);
                }
                else {
                    if(_if_conditional200=var__123->mType->mConstant,                    _if_conditional200) {
                        check_assign_type(((char*)(right_value148=xsprintf("\%s is assining to",((char*)(right_value147=string_to_string(self->name)))))),left_type_124,right_type_79,right_value_78,(_Bool)0,info);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value147);
                        if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value147, right_value147 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value148);
                        if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value148, right_value148 = (void*)0;
                        __freed_obj__ = 0;
                        if(_if_conditional201=self->alloc,                        _if_conditional201) {
                            add_come_code_at_function_head(info,"%s=%s;\n",((char*)(right_value149=make_define_var(left_type_124,var__123->mCValueName,(_Bool)0,info))),right_value_78->c_value);
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value149);
                            if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value149, right_value149 = (void*)0;
                            __freed_obj__ = 0;
                        }
                        else {
                            add_come_code_at_function_head(info,"%s=%s;\n",var__123->mCValueName,right_value_78->c_value);
                        }
                        __dec_obj62=come_value_125->c_value;
                        come_value_125->c_value=(char*)come_increment_ref_count(((char*)(right_value150=__builtin_string(""))));
                        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value150);
                        if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { right_value150 = come_decrement_ref_count(right_value150, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value150, right_value150 = (void*)0;
                        __freed_obj__ = 0;
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_125));
                        transpiler_clear_last_code(info);
                    }
                    else {
                        if(_if_conditional202=right_type_79->mHeap&&left_type_124->mHeap&&left_type_124->mPointerNum>0&&right_type_79->mPointerNum>0,                        _if_conditional202) {
                            check_assign_type(((char*)(right_value152=xsprintf("\%s is assining to",((char*)(right_value151=string_to_string(self->name)))))),left_type_124,right_type_79,right_value_78,(_Bool)0,info);
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value151);
                            if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value151, right_value151 = (void*)0;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value152);
                            if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value152, right_value152 = (void*)0;
                            __freed_obj__ = 0;
                            if(_if_conditional203=self->alloc,                            _if_conditional203) {
                                std_move(left_type_124,right_type_79,right_value_78,info);
                                __dec_obj63=come_value_125->c_value;
                                come_value_125->c_value=(char*)come_increment_ref_count(((char*)(right_value153=xsprintf("%s=%s",var__123->mCValueName,right_value_78->c_value))));
                                if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value153);
                                if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value153, right_value153 = (void*)0;
                                __freed_obj__ = 0;
                            }
                            else {
                                decrement_ref_count_object(left_type_124,var__123->mCValueName,info,(_Bool)0);
                                std_move(left_type_124,right_type_79,right_value_78,info);
                                __dec_obj64=come_value_125->c_value;
                                come_value_125->c_value=(char*)come_increment_ref_count(((char*)(right_value154=xsprintf("%s=%s",var__123->mCValueName,right_value_78->c_value))));
                                if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value154);
                                if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { right_value154 = come_decrement_ref_count(right_value154, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value154, right_value154 = (void*)0;
                                __freed_obj__ = 0;
                            }
                            right_value_id_126=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_78->c_value));
                            if(_if_conditional204=right_value_id_126!=-1,                            _if_conditional204) {
                                remove_object_from_right_values(right_value_id_126,info);
                            }
                            __dec_obj65=come_value_125->type;
                            come_value_125->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value155=sType_clone(left_type_124))));
                            if(__dec_obj65) { come_call_finalizer(sType_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value155);
                            if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value155, right_value155 = (void*)0;
                            __freed_obj__ = 0;
                            come_value_125->var=var__123;
                            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_125));
                            add_come_last_code(info,"%s;\n",come_value_125->c_value);
                        }
                        else {
                            if(_if_conditional205=string_operator_equals(right_type_79->mClass->mName,"void")&&left_type_124->mHeap&&left_type_124->mPointerNum>0&&right_type_79->mPointerNum>0,                            _if_conditional205) {
                                check_assign_type(((char*)(right_value157=xsprintf("\%s is assining to",((char*)(right_value156=string_to_string(self->name)))))),left_type_124,right_type_79,right_value_78,(_Bool)0,info);
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value156);
                                if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value156, right_value156 = (void*)0;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value157);
                                if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value157, right_value157 = (void*)0;
                                __freed_obj__ = 0;
                                if(_if_conditional206=self->alloc,                                _if_conditional206) {
                                    __dec_obj66=come_value_125->c_value;
                                    come_value_125->c_value=(char*)come_increment_ref_count(((char*)(right_value158=xsprintf("%s=%s",var__123->mCValueName,right_value_78->c_value))));
                                    if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value158);
                                    if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { right_value158 = come_decrement_ref_count(right_value158, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value158, right_value158 = (void*)0;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    decrement_ref_count_object(left_type_124,var__123->mCValueName,info,(_Bool)0);
                                    __dec_obj67=come_value_125->c_value;
                                    come_value_125->c_value=(char*)come_increment_ref_count(((char*)(right_value159=xsprintf("%s=%s",var__123->mCValueName,right_value_78->c_value))));
                                    if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value159);
                                    if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { right_value159 = come_decrement_ref_count(right_value159, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value159, right_value159 = (void*)0;
                                    __freed_obj__ = 0;
                                }
                                __dec_obj68=come_value_125->type;
                                come_value_125->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value160=sType_clone(left_type_124))));
                                if(__dec_obj68) { come_call_finalizer(sType_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value160);
                                if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value160, right_value160 = (void*)0;
                                __freed_obj__ = 0;
                                come_value_125->var=var__123;
                                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_125));
                                add_come_last_code(info,"%s;\n",come_value_125->c_value);
                            }
                            else {
                                if(_if_conditional207=left_type_124->mHeap&&!right_type_79->mHeap,                                _if_conditional207) {
                                    if(_if_conditional208=string_operator_equals(right_type_79->mClass->mName,"void")&&right_type_79->mPointerNum==1,                                    _if_conditional208) {
                                    }
                                    else {
                                        if(_if_conditional209=!right_type_79->mDelegate&&!right_type_79->mShare&&!gComeGC,                                        _if_conditional209) {
                                            err_msg(info,"require right value as heap object(%s)",self->name);
                                            __result78__ = (_Bool)0;
                                            if(left_type_124 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_124, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(come_value_125 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_125, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(right_value_78 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_78, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                                            return __result78__;
                                        }
                                    }
                                }
                                check_assign_type(((char*)(right_value162=xsprintf("\%s is assining to",((char*)(right_value161=string_to_string(self->name)))))),left_type_124,right_type_79,right_value_78,(_Bool)0,info);
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value161);
                                if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { right_value161 = come_decrement_ref_count(right_value161, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value161, right_value161 = (void*)0;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value162);
                                if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { right_value162 = come_decrement_ref_count(right_value162, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value162, right_value162 = (void*)0;
                                __freed_obj__ = 0;
                                __dec_obj69=come_value_125->c_value;
                                come_value_125->c_value=(char*)come_increment_ref_count(((char*)(right_value163=xsprintf("%s=%s",var__123->mCValueName,right_value_78->c_value))));
                                if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value163);
                                if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { right_value163 = come_decrement_ref_count(right_value163, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value163, right_value163 = (void*)0;
                                __freed_obj__ = 0;
                                __dec_obj70=come_value_125->type;
                                come_value_125->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value164=sType_clone(left_type_124))));
                                if(__dec_obj70) { come_call_finalizer(sType_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value164);
                                if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value164, right_value164 = (void*)0;
                                __freed_obj__ = 0;
                                come_value_125->var=var__123;
                                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_125));
                                add_come_last_code(info,"%s;\n",come_value_125->c_value);
                            }
                        }
                    }
                }
                if(_if_conditional210=self->alloc&&!left_type_124->mConstant&&!left_type_124->mStatic,                _if_conditional210) {
                    if(_if_conditional211=list$1sNodeph_length(left_type_124->mArrayNum)>0,                    _if_conditional211) {
                        add_come_code(info,"%s;\n",((char*)(right_value165=make_define_var(left_type_124,var__123->mCValueName,(_Bool)0,info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value165);
                        if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { right_value165 = come_decrement_ref_count(right_value165, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value165, right_value165 = (void*)0;
                        __freed_obj__ = 0;
                    }
                    else {
                        add_come_code_at_function_head(info,"%s;\n",((char*)(right_value166=make_define_var(left_type_124,var__123->mCValueName,(_Bool)0,info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value166);
                        if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value166, right_value166 = (void*)0;
                        __freed_obj__ = 0;
                    }
                }
                if(left_type_124 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_124, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_value_125 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_125, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(right_value_78 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_78, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
    }
    __result79__ = (_Bool)1;
    if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
    return __result79__;
    if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sVar* default_value_38;
unsigned int hash_39;
unsigned int it_40;
_Bool _while_condtional9;
_Bool _if_conditional116;
void* right_value61;
_Bool _if_conditional118;
struct sVar* __result36__;
_Bool _if_conditional123;
_Bool _if_conditional124;
struct sVar* __result37__;
struct sVar* __result38__;
void* right_value62;
void* right_value63;
struct sVar* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_38, 0, sizeof(struct sVar*));
memset(&hash_39, 0, sizeof(unsigned int));
memset(&it_40, 0, sizeof(unsigned int));
right_value61 = (void*)0;
right_value62 = (void*)0;
right_value63 = (void*)0;
            memset(&default_value_38,0,sizeof(struct sVar*));
            hash_39=string_get_hash_key(((char*)key))%self->size;
            it_40=hash_39;
            while(_while_condtional9=(_Bool)1,            _while_condtional9) {
                if(_if_conditional116=self->item_existance[it_40],                _if_conditional116) {
                    if(_if_conditional118=optional$2boolbool_value(((struct optional$2boolbool*)(right_value61=string_equals(self->keys[it_40],key)))),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value61),
                    (right_value61 && right_value61 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value61, right_value61 = (void*)0, 
                    __freed_obj__ = 0, 
                    _if_conditional118) {
                        __result36__ = __result_obj__ = self->items[it_40];
                        if(default_value_38 && !__freed_obj__) { come_call_finalizer(sVar_finalize,default_value_38, (void*)0, (void*)0, 0, 0, 0, 0); }
                        return __result36__;
                    }
                    it_40++;
                    if(_if_conditional123=it_40>=self->size,                    _if_conditional123) {
                        it_40=0;
                    }
                    else {
                        if(_if_conditional124=it_40==hash_39,                        _if_conditional124) {
                            __result37__ = __result_obj__ = default_value_38;
                            if(default_value_38 && !__freed_obj__) { come_call_finalizer(sVar_finalize,default_value_38, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result37__;
                        }
                    }
                }
                else {
                    __result38__ = __result_obj__ = default_value_38;
                    if(default_value_38 && !__freed_obj__) { come_call_finalizer(sVar_finalize,default_value_38, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result38__;
                }
            }
            __result40__ = __result_obj__ = ((struct optional$2sVarphbool*)(right_value63=optional$2sVarphbool_initialize(((struct optional$2sVarphbool*)(right_value62=(struct optional$2sVarphbool*)come_calloc(1, sizeof(struct optional$2sVarphbool)*(1), "./comelang2.h", 1630, "struct optional$2sVarphbool"))),(struct sVar*)come_increment_ref_count(default_value_38),(_Bool)0)));
            if(default_value_38 && !__freed_obj__) { come_call_finalizer(sVar_finalize,default_value_38, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
            if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { right_value62 = come_decrement_ref_count(right_value62, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value62, right_value62 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value63);
            if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarphboolp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value63, right_value63 = (void*)0;
            __freed_obj__ = 0;
            return __result40__;
            if(default_value_38 && !__freed_obj__) { come_call_finalizer(sVar_finalize,default_value_38, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional117;
_Bool default_value_41;
_Bool __result34__;
_Bool __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_41, 0, sizeof(_Bool));
                        if(_if_conditional117=self==((void*)0),                        _if_conditional117) {
                            memset(&default_value_41,0,sizeof(_Bool));
                            __result34__ = default_value_41;
                            return __result34__;
                        }
                        else {
                            __result35__ = self->v1;
                            return __result35__;
                        }
}

static void optional$2boolboolp_finalize(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional119=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional119) {
                                if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            if(_if_conditional120=self!=((void*)0)&&self->mCValueName!=((void*)0),                            _if_conditional120) {
                                if(self->mCValueName && !__freed_obj__) { self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            if(_if_conditional121=self!=((void*)0)&&self->mType!=((void*)0),                            _if_conditional121) {
                                if(self->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(_if_conditional122=self!=((void*)0)&&self->mFunName!=((void*)0),                            _if_conditional122) {
                                if(self->mFunName && !__freed_obj__) { self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, 0); }
                            }
}

static struct optional$2sVarphbool* optional$2sVarphbool_initialize(struct optional$2sVarphbool* self, struct sVar* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sVar* __dec_obj44;
struct optional$2sVarphbool* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __dec_obj44=self->v1;
                self->v1=(struct sVar*)come_increment_ref_count(v1);
                if(__dec_obj44) { come_call_finalizer(sVar_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->v2=v2;
                __result39__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2sVarphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { come_call_finalizer(sVar_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result39__;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2sVarphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { come_call_finalizer(sVar_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sVarphboolp_finalize(struct optional$2sVarphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional125;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional125=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional125) {
                        if(self->v1 && !__freed_obj__) { come_call_finalizer(sVar_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_begin(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional132;
struct tuple3$3sTypephcharphsNodeph* result_48;
struct tuple3$3sTypephcharphsNodeph* __result45__;
_Bool _if_conditional133;
struct tuple3$3sTypephcharphsNodeph* __result46__;
struct tuple3$3sTypephcharphsNodeph* result_49;
struct tuple3$3sTypephcharphsNodeph* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_48, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&result_49, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    if(_if_conditional132=self==((void*)0),                    _if_conditional132) {
                        memset(&result_48,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                        __result45__ = __result_obj__ = result_48;
                        return __result45__;
                    }
                    self->it=self->head;
                    if(_if_conditional133=self->it,                    _if_conditional133) {
                        __result46__ = __result_obj__ = self->it->item;
                        return __result46__;
                    }
                    memset(&result_49,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    __result47__ = __result_obj__ = result_49;
                    return __result47__;
}

static _Bool list$1tuple3$3sTypephcharphsNodephph_end(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __result48__ = self==((void*)0)||self->it==((void*)0);
                    return __result48__;
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_next(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional134;
struct tuple3$3sTypephcharphsNodeph* result_51;
struct tuple3$3sTypephcharphsNodeph* __result49__;
_Bool _if_conditional135;
struct tuple3$3sTypephcharphsNodeph* __result50__;
struct tuple3$3sTypephcharphsNodeph* result_52;
struct tuple3$3sTypephcharphsNodeph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_51, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&result_52, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    if(_if_conditional134=self==((void*)0)||self->it==((void*)0),                    _if_conditional134) {
                        memset(&result_51,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                        __result49__ = __result_obj__ = result_51;
                        return __result49__;
                    }
                    self->it=self->it->next;
                    if(_if_conditional135=self->it,                    _if_conditional135) {
                        __result50__ = __result_obj__ = self->it->item;
                        return __result50__;
                    }
                    memset(&result_52,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    __result51__ = __result_obj__ = result_52;
                    return __result51__;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional139;
_Bool _if_conditional140;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional139=self!=((void*)0)&&self->c_value!=((void*)0),                            _if_conditional139) {
                                if(self->c_value && !__freed_obj__) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            if(_if_conditional140=self!=((void*)0)&&self->type!=((void*)0),                            _if_conditional140) {
                                if(self->type && !__freed_obj__) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __result54__ = self->len;
                            return __result54__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional143;
struct sNode* result_60;
struct sNode* __result55__;
_Bool _if_conditional144;
struct sNode* __result56__;
struct sNode* result_61;
struct sNode* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_60, 0, sizeof(struct sNode*));
memset(&result_61, 0, sizeof(struct sNode*));
                                if(_if_conditional143=self==((void*)0),                                _if_conditional143) {
                                    memset(&result_60,0,sizeof(struct sNode*));
                                    __result55__ = __result_obj__ = result_60;
                                    return __result55__;
                                }
                                self->it=self->head;
                                if(_if_conditional144=self->it,                                _if_conditional144) {
                                    __result56__ = __result_obj__ = self->it->item;
                                    return __result56__;
                                }
                                memset(&result_61,0,sizeof(struct sNode*));
                                __result57__ = __result_obj__ = result_61;
                                return __result57__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                __result58__ = self==((void*)0)||self->it==((void*)0);
                                return __result58__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional145;
struct sNode* result_63;
struct sNode* __result59__;
_Bool _if_conditional146;
struct sNode* __result60__;
struct sNode* result_64;
struct sNode* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_63, 0, sizeof(struct sNode*));
memset(&result_64, 0, sizeof(struct sNode*));
                                if(_if_conditional145=self==((void*)0)||self->it==((void*)0),                                _if_conditional145) {
                                    memset(&result_63,0,sizeof(struct sNode*));
                                    __result59__ = __result_obj__ = result_63;
                                    return __result59__;
                                }
                                self->it=self->it->next;
                                if(_if_conditional146=self->it,                                _if_conditional146) {
                                    __result60__ = __result_obj__ = self->it->item;
                                    return __result60__;
                                }
                                memset(&result_64,0,sizeof(struct sNode*));
                                __result61__ = __result_obj__ = result_64;
                                return __result61__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional157;
void* right_value92;
struct list_item$1CVALUEph* litem_75;
struct CVALUE* __dec_obj47;
_Bool _if_conditional159;
void* right_value93;
struct list_item$1CVALUEph* litem_76;
struct CVALUE* __dec_obj48;
void* right_value94;
struct list_item$1CVALUEph* litem_77;
struct CVALUE* __dec_obj49;
struct list$1CVALUEph* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value92 = (void*)0;
memset(&litem_75, 0, sizeof(struct list_item$1CVALUEph*));
right_value93 = (void*)0;
memset(&litem_76, 0, sizeof(struct list_item$1CVALUEph*));
right_value94 = (void*)0;
memset(&litem_77, 0, sizeof(struct list_item$1CVALUEph*));
                    if(_if_conditional157=self->len==0,                    _if_conditional157) {
                        litem_75=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value92=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 282, "struct list_item$1CVALUEph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value92);
                        if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value92, right_value92 = (void*)0;
                        __freed_obj__ = 0;
                        litem_75->prev=((void*)0);
                        litem_75->next=((void*)0);
                        __dec_obj47=litem_75->item;
                        litem_75->item=(struct CVALUE*)come_increment_ref_count(item);
                        if(__dec_obj47) { come_call_finalizer(CVALUE_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail=litem_75;
                        self->head=litem_75;
                    }
                    else {
                        if(_if_conditional159=self->len==1,                        _if_conditional159) {
                            litem_76=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value93=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 292, "struct list_item$1CVALUEph"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
                            if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value93, right_value93 = (void*)0;
                            __freed_obj__ = 0;
                            litem_76->prev=self->head;
                            litem_76->next=((void*)0);
                            __dec_obj48=litem_76->item;
                            litem_76->item=(struct CVALUE*)come_increment_ref_count(item);
                            if(__dec_obj48) { come_call_finalizer(CVALUE_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->tail=litem_76;
                            self->head->next=litem_76;
                        }
                        else {
                            litem_77=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value94=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 302, "struct list_item$1CVALUEph"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94);
                            if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value94, right_value94 = (void*)0;
                            __freed_obj__ = 0;
                            litem_77->prev=self->tail;
                            litem_77->next=((void*)0);
                            __dec_obj49=litem_77->item;
                            litem_77->item=(struct CVALUE*)come_increment_ref_count(item);
                            if(__dec_obj49) { come_call_finalizer(CVALUE_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->tail->next=litem_77;
                            self->tail=litem_77;
                        }
                    }
                    self->len++;
                    __result63__ = __result_obj__ = self;
                    if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result63__;
                    if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional158;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional158=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional158) {
                                if(self->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional167;
char* result_83;
char* __result66__;
_Bool _if_conditional168;
char* __result67__;
char* result_84;
char* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_83, 0, sizeof(char*));
memset(&result_84, 0, sizeof(char*));
                        if(_if_conditional167=self==((void*)0),                        _if_conditional167) {
                            memset(&result_83,0,sizeof(char*));
                            __result66__ = __result_obj__ = result_83;
                            return __result66__;
                        }
                        self->it=self->head;
                        if(_if_conditional168=self->it,                        _if_conditional168) {
                            __result67__ = __result_obj__ = self->it->item;
                            return __result67__;
                        }
                        memset(&result_84,0,sizeof(char*));
                        __result68__ = __result_obj__ = result_84;
                        return __result68__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result69__ = self==((void*)0)||self->it==((void*)0);
                        return __result69__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional169;
char* result_86;
char* __result70__;
_Bool _if_conditional170;
char* __result71__;
char* result_87;
char* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_86, 0, sizeof(char*));
memset(&result_87, 0, sizeof(char*));
                        if(_if_conditional169=self==((void*)0)||self->it==((void*)0),                        _if_conditional169) {
                            memset(&result_86,0,sizeof(char*));
                            __result70__ = __result_obj__ = result_86;
                            return __result70__;
                        }
                        self->it=self->it->next;
                        if(_if_conditional170=self->it,                        _if_conditional170) {
                            __result71__ = __result_obj__ = self->it->item;
                            return __result71__;
                        }
                        memset(&result_87,0,sizeof(char*));
                        __result72__ = __result_obj__ = result_87;
                        return __result72__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __result73__ = self->len;
                            return __result73__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional172;
struct list_item$1sTypeph* it_88;
int i_89;
_Bool _while_condtional10;
_Bool _if_conditional173;
struct sType* __result74__;
struct sType* default_value_90;
struct sType* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_88, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_89, 0, sizeof(int));
memset(&default_value_90, 0, sizeof(struct sType*));
                                if(_if_conditional172=position<0,                                _if_conditional172) {
                                    position+=self->len;
                                }
                                it_88=self->head;
                                i_89=0;
                                while(_while_condtional10=it_88!=((void*)0),                                _while_condtional10) {
                                    if(_if_conditional173=position==i_89,                                    _if_conditional173) {
                                        __result74__ = __result_obj__ = it_88->item;
                                        return __result74__;
                                    }
                                    it_88=it_88->next;
                                    i_89++;
                                }
                                memset(&default_value_90,0,sizeof(struct sType*));
                                __result75__ = __result_obj__ = default_value_90;
                                if(default_value_90 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_90, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result75__;
                                if(default_value_90 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_90, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sStoreNode_sline(struct sStoreNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result80__ = self->sline;
    return __result80__;
}

char* sStoreNode_sname(struct sStoreNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value167;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value167 = (void*)0;
    __result81__ = __result_obj__ = ((char*)(right_value167=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value167);
    if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value167, right_value167 = (void*)0;
    __freed_obj__ = 0;
    return __result81__;
}

struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct sType* type, _Bool alloc, struct sNode* right_node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value168;
void* right_value169;
struct sNode* _inf_value1;
struct sStoreNode* _inf_obj_value1;
void* right_value178;
struct sNode* result_128;
struct sNode* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value168 = (void*)0;
right_value169 = (void*)0;
right_value178 = (void*)0;
memset(&result_128, 0, sizeof(struct sNode*));
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 592, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sStoreNode*)(right_value169=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value168=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 592, "struct sStoreNode")))),(char*)come_increment_ref_count(name),(struct list$1charph*)come_increment_ref_count(multiple_assign),((void*)0),(struct sType*)come_increment_ref_count(type),alloc,(struct sNode*)come_increment_ref_count(right_node),((void*)0),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreNode_finalize;
    _inf_value1->clone=(void*)sStoreNode_clone;
    _inf_value1->compile=(void*)sStoreNode_compile;
    _inf_value1->sline=(void*)sStoreNode_sline;
    _inf_value1->sname=(void*)sStoreNode_sname;
    _inf_value1->terminated=(void*)sStoreNode_terminated;
    _inf_value1->kind=(void*)sStoreNode_kind;
    result_128=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value178=_inf_value1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value168);
    if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value168, right_value168 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value169);
    if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value169, right_value169 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value178);
    if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { right_value178 = come_decrement_ref_count(right_value178, ((struct sNode*)right_value178)->finalize, ((struct sNode*)right_value178)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value178, right_value178 = (void*)0;
    __freed_obj__ = 0;
    __result84__ = __result_obj__ = result_128;
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(multiple_assign && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,multiple_assign, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right_node && !__freed_obj__) { right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 1, 0); } 
    if(result_128 && !__freed_obj__) { result_128 = come_decrement_ref_count(result_128, ((struct sNode*)result_128)->finalize, ((struct sNode*)result_128)->_protocol_obj, 0, 1, 0); } 
    return __result84__;
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(multiple_assign && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,multiple_assign, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right_node && !__freed_obj__) { right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 1, 0); } 
    if(result_128 && !__freed_obj__) { result_128 = come_decrement_ref_count(result_128, ((struct sNode*)result_128)->finalize, ((struct sNode*)result_128)->_protocol_obj, 0, 0, 0); } 
}

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value179;
char* __dec_obj78;
void* right_value180;
char* __dec_obj79;
struct sLoadNode* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value179 = (void*)0;
right_value180 = (void*)0;
    __dec_obj78=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value179=__builtin_string(name))));
    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value179);
    if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { right_value179 = come_decrement_ref_count(right_value179, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value179, right_value179 = (void*)0;
    __freed_obj__ = 0;
    self->sline=info->sline;
    __dec_obj79=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value180=__builtin_string(info->sname))));
    if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180);
    if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { right_value180 = come_decrement_ref_count(right_value180, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value180, right_value180 = (void*)0;
    __freed_obj__ = 0;
    __result85__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    return __result85__;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
}

_Bool sLoadNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result86__ = (_Bool)0;
    return __result86__;
}

char* sLoadNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value181;
char* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value181 = (void*)0;
    __result87__ = __result_obj__ = ((char*)(right_value181=__builtin_string("sLoadNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value181);
    if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { right_value181 = come_decrement_ref_count(right_value181, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value181, right_value181 = (void*)0;
    __freed_obj__ = 0;
    return __result87__;
}

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* current_stack_frame_struct_129;
void* right_value182;
_Bool _if_conditional231;
struct sVar* parent_var_130;
_Bool _if_conditional232;
_Bool _if_conditional233;
void* right_value183;
struct CVALUE* come_value_131;
struct sType* type_132;
void* right_value184;
char* __dec_obj80;
void* right_value185;
struct sType* __dec_obj81;
_Bool __result88__;
struct sVar* var__133;
_Bool _if_conditional234;
_Bool _if_conditional235;
void* right_value189;
struct sFun* fun_137;
_Bool _if_conditional256;
void* right_value190;
struct CVALUE* come_value_138;
void* right_value191;
char* __dec_obj83;
struct sType* __dec_obj84;
_Bool __result94__;
_Bool __result95__;
void* right_value192;
struct CVALUE* come_value_139;
void* right_value193;
char* __dec_obj85;
void* right_value194;
struct sType* __dec_obj86;
_Bool _if_conditional257;
void* right_value195;
struct sType* __dec_obj87;
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&current_stack_frame_struct_129, 0, sizeof(struct sClass*));
right_value182 = (void*)0;
memset(&parent_var_130, 0, sizeof(struct sVar*));
right_value183 = (void*)0;
memset(&come_value_131, 0, sizeof(struct CVALUE*));
memset(&type_132, 0, sizeof(struct sType*));
right_value184 = (void*)0;
right_value185 = (void*)0;
memset(&var__133, 0, sizeof(struct sVar*));
right_value189 = (void*)0;
memset(&fun_137, 0, sizeof(struct sFun*));
right_value190 = (void*)0;
memset(&come_value_138, 0, sizeof(struct CVALUE*));
right_value191 = (void*)0;
right_value192 = (void*)0;
memset(&come_value_139, 0, sizeof(struct CVALUE*));
right_value193 = (void*)0;
right_value194 = (void*)0;
right_value195 = (void*)0;
    current_stack_frame_struct_129=info->current_stack_frame_struct;
    if(_if_conditional231=current_stack_frame_struct_129&&((struct sVar*)(right_value182=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)))==((void*)0),    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value182),
    (right_value182 && right_value182 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sVar_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0):0,
    __right_value_freed_obj[0] = right_value182, right_value182 = (void*)0, 
    __freed_obj__ = 0, 
    _if_conditional231) {
        parent_var_130=get_variable_from_table(info->lv_table->mParent,self->name);
        if(_if_conditional232=parent_var_130!=((void*)0),        _if_conditional232) {
            if(_if_conditional233=string_operator_not_equals(parent_var_130->mFunName,info->come_fun->mName),            _if_conditional233) {
                come_value_131=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value183=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 635, "struct CVALUE"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value183);
                if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value183, right_value183 = (void*)0;
                __freed_obj__ = 0;
                type_132=parent_var_130->mType;
                __dec_obj80=come_value_131->c_value;
                come_value_131->c_value=(char*)come_increment_ref_count(((char*)(right_value184=xsprintf("(*(parent->%s))",parent_var_130->mCValueName))));
                if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value184);
                if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { right_value184 = come_decrement_ref_count(right_value184, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value184, right_value184 = (void*)0;
                __freed_obj__ = 0;
                __dec_obj81=come_value_131->type;
                come_value_131->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value185=sType_clone(type_132))));
                if(__dec_obj81) { come_call_finalizer(sType_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value185);
                if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value185, right_value185 = (void*)0;
                __freed_obj__ = 0;
                come_value_131->var=((void*)0);
                add_come_last_code(info,"%s;\n",come_value_131->c_value);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_131));
                __result88__ = (_Bool)1;
                if(come_value_131 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_131, (void*)0, (void*)0, 0, 0, 0, 0); }
                return __result88__;
                if(come_value_131 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_131, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
        }
    }
    var__133=get_variable_from_table(info->lv_table,self->name);
    if(_if_conditional234=var__133==((void*)0),    _if_conditional234) {
        var__133=get_variable_from_table(info->gv_table,self->name);
        if(_if_conditional235=var__133==((void*)0),        _if_conditional235) {
            fun_137=((struct sFun*)(right_value189=map$2charphsFunphp_operator_load_element(info->funcs,self->name)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value189);
            if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value189, right_value189 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional256=fun_137,            _if_conditional256) {
                come_value_138=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value190=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 662, "struct CVALUE"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value190);
                if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value190, right_value190 = (void*)0;
                __freed_obj__ = 0;
                __dec_obj83=come_value_138->c_value;
                come_value_138->c_value=(char*)come_increment_ref_count(((char*)(right_value191=xsprintf("%s",fun_137->mName))));
                if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value191);
                if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { right_value191 = come_decrement_ref_count(right_value191, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value191, right_value191 = (void*)0;
                __freed_obj__ = 0;
                __dec_obj84=come_value_138->type;
                come_value_138->type=(struct sType*)come_increment_ref_count(fun_137->mLambdaType);
                if(__dec_obj84) { come_call_finalizer(sType_finalize,__dec_obj84, (void*)0, (void*)0, 0, 0, 0, 0); }
                come_value_138->var=((void*)0);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_138));
                __result94__ = (_Bool)1;
                if(come_value_138 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_138, (void*)0, (void*)0, 0, 0, 0, 0); }
                return __result94__;
                if(come_value_138 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_138, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                err_msg(info,"var not found(%s)(Z) at loading variable\n",self->name);
                __result95__ = (_Bool)1;
                return __result95__;
            }
        }
    }
    come_value_139=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value192=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 679, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value192);
    if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value192, right_value192 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj85=come_value_139->c_value;
    come_value_139->c_value=(char*)come_increment_ref_count(((char*)(right_value193=xsprintf("%s",var__133->mCValueName))));
    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value193);
    if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { right_value193 = come_decrement_ref_count(right_value193, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value193, right_value193 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj86=come_value_139->type;
    come_value_139->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value194=sType_clone(var__133->mType))));
    if(__dec_obj86) { come_call_finalizer(sType_finalize,__dec_obj86, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value194);
    if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value194, right_value194 = (void*)0;
    __freed_obj__ = 0;
    come_value_139->var=var__133;
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_139));
    if(_if_conditional257=list$1sNodeph_length(come_value_139->type->mArrayNum)==1,    _if_conditional257) {
        __dec_obj87=come_value_139->type->mOriginalLoadVarType->v1;
        come_value_139->type->mOriginalLoadVarType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value195=sType_clone(come_value_139->type))));
        if(__dec_obj87) { come_call_finalizer(sType_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value195);
        if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value195, right_value195 = (void*)0;
        __freed_obj__ = 0;
        list$1sNodeph_reset(come_value_139->type->mArrayNum);
        come_value_139->type->mPointerNum++;
        come_value_139->type->mOriginalTypeNamePointerNum=come_value_139->type->mPointerNum;
    }
    __result97__ = (_Bool)1;
    if(come_value_139 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_139, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result97__;
    if(come_value_139 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_139, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sFun* default_value_134;
unsigned int hash_135;
unsigned int it_136;
_Bool _while_condtional11;
_Bool _if_conditional236;
void* right_value186;
_Bool _if_conditional237;
struct sFun* __result89__;
_Bool _if_conditional253;
_Bool _if_conditional254;
struct sFun* __result90__;
struct sFun* __result91__;
void* right_value187;
void* right_value188;
struct sFun* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_134, 0, sizeof(struct sFun*));
memset(&hash_135, 0, sizeof(unsigned int));
memset(&it_136, 0, sizeof(unsigned int));
right_value186 = (void*)0;
right_value187 = (void*)0;
right_value188 = (void*)0;
                memset(&default_value_134,0,sizeof(struct sFun*));
                hash_135=string_get_hash_key(((char*)key))%self->size;
                it_136=hash_135;
                while(_while_condtional11=(_Bool)1,                _while_condtional11) {
                    if(_if_conditional236=self->item_existance[it_136],                    _if_conditional236) {
                        if(_if_conditional237=optional$2boolbool_value(((struct optional$2boolbool*)(right_value186=string_equals(self->keys[it_136],key)))),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value186),
                        (right_value186 && right_value186 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value186, right_value186 = (void*)0, 
                        __freed_obj__ = 0, 
                        _if_conditional237) {
                            __result89__ = __result_obj__ = self->items[it_136];
                            if(default_value_134 && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value_134, (void*)0, (void*)0, 0, 0, 0, 0); }
                            return __result89__;
                        }
                        it_136++;
                        if(_if_conditional253=it_136>=self->size,                        _if_conditional253) {
                            it_136=0;
                        }
                        else {
                            if(_if_conditional254=it_136==hash_135,                            _if_conditional254) {
                                __result90__ = __result_obj__ = default_value_134;
                                if(default_value_134 && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value_134, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result90__;
                            }
                        }
                    }
                    else {
                        __result91__ = __result_obj__ = default_value_134;
                        if(default_value_134 && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value_134, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result91__;
                    }
                }
                __result93__ = __result_obj__ = ((struct optional$2sFunphbool*)(right_value188=optional$2sFunphbool_initialize(((struct optional$2sFunphbool*)(right_value187=(struct optional$2sFunphbool*)come_calloc(1, sizeof(struct optional$2sFunphbool)*(1), "./comelang2.h", 1630, "struct optional$2sFunphbool"))),(struct sFun*)come_increment_ref_count(default_value_134),(_Bool)0)));
                if(default_value_134 && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value_134, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value187);
                if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { right_value187 = come_decrement_ref_count(right_value187, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value187, right_value187 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value188);
                if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunphboolp_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value188, right_value188 = (void*)0;
                __freed_obj__ = 0;
                return __result93__;
                if(default_value_134 && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value_134, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional238;
_Bool _if_conditional239;
_Bool _if_conditional240;
_Bool _if_conditional241;
_Bool _if_conditional242;
_Bool _if_conditional243;
_Bool _if_conditional244;
_Bool _if_conditional247;
_Bool _if_conditional248;
_Bool _if_conditional249;
_Bool _if_conditional250;
_Bool _if_conditional251;
_Bool _if_conditional252;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional238=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional238) {
                                    if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(_if_conditional239=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional239) {
                                    if(self->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional240=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional240) {
                                    if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional241=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional241) {
                                    if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional242=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                _if_conditional242) {
                                    if(self->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional243=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                _if_conditional243) {
                                    if(self->mLambdaType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional244=self!=((void*)0)&&self->mBlock!=((void*)0),                                _if_conditional244) {
                                    if(self->mBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional247=self!=((void*)0)&&self->mSource!=((void*)0),                                _if_conditional247) {
                                    if(self->mSource && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional248=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                _if_conditional248) {
                                    if(self->mSourceHead && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional249=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                _if_conditional249) {
                                    if(self->mSourceHead2 && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional250=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                _if_conditional250) {
                                    if(self->mSourceDefer && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional251=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                _if_conditional251) {
                                    if(self->mComeHeader && !__freed_obj__) { self->mComeHeader = come_decrement_ref_count(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(_if_conditional252=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional252) {
                                    if(self->mDeclareSName && !__freed_obj__) { self->mDeclareSName = come_decrement_ref_count(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional245;
_Bool _if_conditional246;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        if(_if_conditional245=self!=((void*)0)&&self->mNodes!=((void*)0),                                        _if_conditional245) {
                                            if(self->mNodes && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        if(_if_conditional246=self!=((void*)0)&&self->mVarTable!=((void*)0),                                        _if_conditional246) {
                                            if(self->mVarTable && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
}

static struct optional$2sFunphbool* optional$2sFunphbool_initialize(struct optional$2sFunphbool* self, struct sFun* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sFun* __dec_obj82;
struct optional$2sFunphbool* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __dec_obj82=self->v1;
                    self->v1=(struct sFun*)come_increment_ref_count(v1);
                    if(__dec_obj82) { come_call_finalizer(sFun_finalize,__dec_obj82, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->v2=v2;
                    __result92__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(sFun_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result92__;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(sFun_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sFunphboolp_finalize(struct optional$2sFunphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional255;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional255=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional255) {
                            if(self->v1 && !__freed_obj__) { come_call_finalizer(sFun_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_140;
_Bool _while_condtional12;
struct list_item$1sNodeph* prev_it_141;
struct list$1sNodeph* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_140, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_141, 0, sizeof(struct list_item$1sNodeph*));
            it_140=self->head;
            while(_while_condtional12=it_140!=((void*)0),            _while_condtional12) {
                prev_it_141=it_140;
                it_140=it_140->next;
                if(prev_it_141 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_141, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result96__ = __result_obj__ = self;
            return __result96__;
}

int sLoadNode_sline(struct sLoadNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result98__ = self->sline;
    return __result98__;
}

char* sLoadNode_sname(struct sLoadNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value196;
char* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value196 = (void*)0;
    __result99__ = __result_obj__ = ((char*)(right_value196=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value196);
    if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { right_value196 = come_decrement_ref_count(right_value196, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value196, right_value196 = (void*)0;
    __freed_obj__ = 0;
    return __result99__;
}

struct sNode* load_var(char* name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value197;
void* right_value198;
struct sNode* _inf_value2;
struct sLoadNode* _inf_obj_value2;
void* right_value202;
struct sNode* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value202 = (void*)0;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 709, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sLoadNode*)(right_value198=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value197=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 709, "struct sLoadNode")))),(char*)come_increment_ref_count(name),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLoadNode_finalize;
    _inf_value2->clone=(void*)sLoadNode_clone;
    _inf_value2->compile=(void*)sLoadNode_compile;
    _inf_value2->sline=(void*)sLoadNode_sline;
    _inf_value2->sname=(void*)sLoadNode_sname;
    _inf_value2->terminated=(void*)sLoadNode_terminated;
    _inf_value2->kind=(void*)sLoadNode_kind;
    __result102__ = __result_obj__ = ((struct sNode*)(right_value202=_inf_value2));
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value197);
    if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value197, right_value197 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value198);
    if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value198, right_value198 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value202);
    if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { right_value202 = come_decrement_ref_count(right_value202, ((struct sNode*)right_value202)->finalize, ((struct sNode*)right_value202)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value202, right_value202 = (void*)0;
    __freed_obj__ = 0;
    return __result102__;
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
}

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value203;
char* __dec_obj90;
void* right_value204;
char* __dec_obj91;
struct sFunLoadNode* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value203 = (void*)0;
right_value204 = (void*)0;
    __dec_obj90=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value203=__builtin_string(name))));
    if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value203);
    if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { right_value203 = come_decrement_ref_count(right_value203, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value203, right_value203 = (void*)0;
    __freed_obj__ = 0;
    self->sline=info->sline;
    __dec_obj91=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value204=__builtin_string(info->sname))));
    if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value204);
    if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { right_value204 = come_decrement_ref_count(right_value204, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value204, right_value204 = (void*)0;
    __freed_obj__ = 0;
    __result103__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sFunLoadNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    return __result103__;
    if(self && !__freed_obj__) { come_call_finalizer(sFunLoadNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
}

static void sFunLoadNode_finalize(struct sFunLoadNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional264;
_Bool _if_conditional265;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional264=self!=((void*)0)&&self->name!=((void*)0),        _if_conditional264) {
            if(self->name && !__freed_obj__) { self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional265=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional265) {
            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
        }
}

_Bool sFunLoadNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result104__ = (_Bool)0;
    return __result104__;
}

char* sFunLoadNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value205;
char* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value205 = (void*)0;
    __result105__ = __result_obj__ = ((char*)(right_value205=__builtin_string("sFunLoadNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value205);
    if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { right_value205 = come_decrement_ref_count(right_value205, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value205, right_value205 = (void*)0;
    __freed_obj__ = 0;
    return __result105__;
}

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value206;
struct sFun* fun_143;
_Bool _if_conditional266;
_Bool __result106__;
void* right_value207;
struct CVALUE* come_value_144;
void* right_value208;
char* __dec_obj92;
struct sType* __dec_obj93;
_Bool __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value206 = (void*)0;
memset(&fun_143, 0, sizeof(struct sFun*));
right_value207 = (void*)0;
memset(&come_value_144, 0, sizeof(struct CVALUE*));
right_value208 = (void*)0;
    fun_143=((struct sFun*)(right_value206=map$2charphsFunphp_operator_load_element(info->funcs,self->name)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value206);
    if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value206, right_value206 = (void*)0;
    __freed_obj__ = 0;
    if(_if_conditional266=fun_143==((void*)0),    _if_conditional266) {
        err_msg(info,"fun not found(%s) at loading variable\n",self->name);
        __result106__ = (_Bool)0;
        return __result106__;
    }
    else {
        come_value_144=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value207=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 748, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value207);
        if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value207, right_value207 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj92=come_value_144->c_value;
        come_value_144->c_value=(char*)come_increment_ref_count(((char*)(right_value208=xsprintf("%s",fun_143->mName))));
        if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value208);
        if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { right_value208 = come_decrement_ref_count(right_value208, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value208, right_value208 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj93=come_value_144->type;
        come_value_144->type=(struct sType*)come_increment_ref_count(fun_143->mLambdaType);
        if(__dec_obj93) { come_call_finalizer(sType_finalize,__dec_obj93, (void*)0, (void*)0, 0, 0, 0, 0); }
        come_value_144->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_144));
        if(come_value_144 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_144, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result107__ = (_Bool)1;
    return __result107__;
}

int sFunLoadNode_sline(struct sFunLoadNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result108__ = self->sline;
    return __result108__;
}

char* sFunLoadNode_sname(struct sFunLoadNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value209;
char* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value209 = (void*)0;
    __result109__ = __result_obj__ = ((char*)(right_value209=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value209);
    if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { right_value209 = come_decrement_ref_count(right_value209, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value209, right_value209 = (void*)0;
    __freed_obj__ = 0;
    return __result109__;
}

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value210;
struct sVar* self_145;
void* right_value211;
char* __dec_obj94;
void* right_value212;
struct sType* __dec_obj95;
_Bool _if_conditional267;
void* right_value213;
char* __dec_obj96;
static int n_146=0;
void* right_value214;
char* __dec_obj97;
_Bool _if_conditional268;
void* right_value215;
char* __dec_obj98;
char* __dec_obj99;
void* right_value228;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value210 = (void*)0;
memset(&self_145, 0, sizeof(struct sVar*));
right_value211 = (void*)0;
right_value212 = (void*)0;
right_value213 = (void*)0;
right_value214 = (void*)0;
right_value215 = (void*)0;
right_value228 = (void*)0;
    self_145=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value210=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 773, "struct sVar"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value210);
    if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value210, right_value210 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj94=self_145->mName;
    self_145->mName=(char*)come_increment_ref_count(((char*)(right_value211=__builtin_string(name))));
    if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value211);
    if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { right_value211 = come_decrement_ref_count(right_value211, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value211, right_value211 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj95=self_145->mType;
    self_145->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value212=sType_clone(type))));
    if(__dec_obj95) { come_call_finalizer(sType_finalize,__dec_obj95, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value212);
    if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value212, right_value212 = (void*)0;
    __freed_obj__ = 0;
    if(_if_conditional267=type->mFunctionParam,    _if_conditional267) {
        __dec_obj96=self_145->mCValueName;
        self_145->mCValueName=(char*)come_increment_ref_count(((char*)(right_value213=__builtin_string(name))));
        if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value213);
        if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { right_value213 = come_decrement_ref_count(right_value213, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value213, right_value213 = (void*)0;
        __freed_obj__ = 0;
    }
    else {
        __dec_obj97=self_145->mCValueName;
        self_145->mCValueName=(char*)come_increment_ref_count(((char*)(right_value214=xsprintf("%s_%d",name,n_146++))));
        if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value214);
        if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { right_value214 = come_decrement_ref_count(right_value214, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value214, right_value214 = (void*)0;
        __freed_obj__ = 0;
    }
    self_145->mBlockLevel=info->block_level;
    self_145->mAllocaValue=(_Bool)0;
    self_145->mFunctionParam=(_Bool)0;
    self_145->mNoFree=(_Bool)0;
    if(_if_conditional268=info->come_fun,    _if_conditional268) {
        __dec_obj98=self_145->mFunName;
        self_145->mFunName=(char*)come_increment_ref_count(((char*)(right_value215=string_clone(info->come_fun->mName))));
        if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value215);
        if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { right_value215 = come_decrement_ref_count(right_value215, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value215, right_value215 = (void*)0;
        __freed_obj__ = 0;
    }
    else {
        __dec_obj99=self_145->mFunName;
        self_145->mFunName=((void*)0);
        if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0,0); }
    }
    map$2charphsVarph_insert(info->lv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value228=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_145));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value228);
    if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { right_value228 = come_decrement_ref_count(right_value228, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value228, right_value228 = (void*)0;
    __freed_obj__ = 0;
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(self_145 && !__freed_obj__) { come_call_finalizer(sVar_finalize,self_145, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct map$2charphsVarph* map$2charphsVarph_insert(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional269;
unsigned int hash_164;
unsigned int it_165;
_Bool _while_condtional15;
_Bool _if_conditional281;
void* right_value222;
_Bool _if_conditional282;
_Bool _if_conditional283;
_Bool _if_conditional303;
_Bool _if_conditional304;
_Bool _if_conditional305;
_Bool _if_conditional306;
_Bool _if_conditional307;
_Bool same_key_exist_182;
char* it2_185;
_Bool _for_condtionalA11;
void* right_value224;
_Bool _if_conditional312;
_Bool _if_conditional313;
struct map$2charphsVarph* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_164, 0, sizeof(unsigned int));
memset(&it_165, 0, sizeof(unsigned int));
right_value222 = (void*)0;
memset(&same_key_exist_182, 0, sizeof(_Bool));
memset(&it2_185, 0, sizeof(char*));
right_value224 = (void*)0;
        if(_if_conditional269=self->len*10>=self->size,        _if_conditional269) {
            map$2charphsVarph_rehash(self);
        }
        hash_164=string_get_hash_key(key)%self->size;
        it_165=hash_164;
        while(_while_condtional15=(_Bool)1,        _while_condtional15) {
            if(_if_conditional281=self->item_existance[it_165],            _if_conditional281) {
                if(_if_conditional282=optional$2boolbool_value(((struct optional$2boolbool*)(right_value222=string_equals(self->keys[it_165],key)))),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value222),
                (right_value222 && right_value222 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value222, right_value222 = (void*)0, 
                __freed_obj__ = 0, 
                _if_conditional282) {
                    if(_if_conditional283=1,                    _if_conditional283) {
                        list$1charp_remove(self->key_list,self->keys[it_165]);
                        if(self->keys[it_165] && !__freed_obj__) { self->keys[it_165] = come_decrement_ref_count(self->keys[it_165], (void*)0, (void*)0, 0, 0, 0); }
                        self->keys[it_165]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charp_remove(self->key_list,self->keys[it_165]);
                        self->keys[it_165]=key;
                    }
                    if(_if_conditional303=1,                    _if_conditional303) {
                        if(self->items[it_165] && !__freed_obj__) { come_call_finalizer(sVar_finalize,self->items[it_165], (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->items[it_165]=(struct sVar*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_165]=item;
                    }
                    break;
                }
                it_165++;
                if(_if_conditional304=it_165>=self->size,                _if_conditional304) {
                    it_165=0;
                }
                else {
                    if(_if_conditional305=it_165==hash_164,                    _if_conditional305) {
                        printf("unexpected error in map.insert\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                self->item_existance[it_165]=(_Bool)1;
                if(_if_conditional306=1,                _if_conditional306) {
                    self->keys[it_165]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_165]=key;
                }
                if(_if_conditional307=1,                _if_conditional307) {
                    self->items[it_165]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_165]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_182=(_Bool)0;
        for(
        it2_185=list$1charp_begin(self->key_list) ,        0;        _for_condtionalA11=        !list$1charp_end(self->key_list) ,        _for_condtionalA11;        it2_185=list$1charp_next(self->key_list) ,        0        ){
            if(_if_conditional312=optional$2boolbool_value(((struct optional$2boolbool*)(right_value224=string_equals(it2_185,key)))),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value224),
            (right_value224 && right_value224 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value224, right_value224 = (void*)0, 
            __freed_obj__ = 0, 
            _if_conditional312) {
                same_key_exist_182=(_Bool)1;
            }
        }
        if(_if_conditional313=!same_key_exist_182,        _if_conditional313) {
            list$1charp_push_back(self->key_list,key);
        }
        __result133__ = __result_obj__ = self;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result133__;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_147;
void* right_value216;
char** keys_148;
void* right_value217;
struct sVar** items_149;
void* right_value218;
_Bool* item_existance_150;
int len_151;
char* it_154;
_Bool _for_condtionalA10;
struct sVar* default_value_157;
void* right_value220;
struct sVar* it2_160;
unsigned int hash_161;
int n_162;
_Bool _while_condtional14;
_Bool _if_conditional278;
_Bool _if_conditional279;
_Bool _if_conditional280;
struct sVar* default_value_163;
void* right_value221;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_147, 0, sizeof(int));
right_value216 = (void*)0;
memset(&keys_148, 0, sizeof(char**));
right_value217 = (void*)0;
memset(&items_149, 0, sizeof(struct sVar**));
right_value218 = (void*)0;
memset(&item_existance_150, 0, sizeof(_Bool*));
memset(&len_151, 0, sizeof(int));
memset(&it_154, 0, sizeof(char*));
memset(&default_value_157, 0, sizeof(struct sVar*));
right_value220 = (void*)0;
memset(&it2_160, 0, sizeof(struct sVar*));
memset(&hash_161, 0, sizeof(unsigned int));
memset(&n_162, 0, sizeof(int));
memset(&default_value_163, 0, sizeof(struct sVar*));
right_value221 = (void*)0;
                size_147=self->size*10;
                keys_148=(char**)come_increment_ref_count(((char**)(right_value216=(char**)come_calloc(1, sizeof(char*)*(1*(size_147)), "./comelang2.h", 1388, "char*"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value216);
                if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { right_value216 = come_decrement_ref_count(right_value216, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value216, right_value216 = (void*)0;
                __freed_obj__ = 0;
                items_149=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value217=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_147)), "./comelang2.h", 1389, "struct sVar*"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value217);
                if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value217, right_value217 = (void*)0;
                __freed_obj__ = 0;
                item_existance_150=(_Bool*)come_increment_ref_count(((_Bool*)(right_value218=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_147)), "./comelang2.h", 1390, "_Bool"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value218);
                if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { right_value218 = come_decrement_ref_count(right_value218, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value218, right_value218 = (void*)0;
                __freed_obj__ = 0;
                len_151=0;
                for(
                it_154=map$2charphsVarph_begin(self) ,                0;                _for_condtionalA10=                !map$2charphsVarph_end(self) ,                _for_condtionalA10;                it_154=map$2charphsVarph_next(self) ,                0                ){
                    memset(&default_value_157,0,sizeof(struct sVar*));
                    it2_160=((struct sVar*)(right_value220=map$2charphsVarph_at(self,it_154,default_value_157)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value220);
                    if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value220, right_value220 = (void*)0;
                    __freed_obj__ = 0;
                    hash_161=string_get_hash_key(it_154)%size_147;
                    n_162=hash_161;
                    while(_while_condtional14=(_Bool)1,                    _while_condtional14) {
                        if(_if_conditional278=item_existance_150[n_162],                        _if_conditional278) {
                            n_162++;
                            if(_if_conditional279=n_162>=size_147,                            _if_conditional279) {
                                n_162=0;
                            }
                            else {
                                if(_if_conditional280=n_162==hash_161,                                _if_conditional280) {
                                    printf("unexpected error in map.rehash(1)\n");
                                    stackframe();
                                    exit(2);
                                }
                            }
                        }
                        else {
                            item_existance_150[n_162]=(_Bool)1;
                            keys_148[n_162]=it_154;
                            items_149[n_162]=((struct sVar*)(right_value221=map$2charphsVarph_at(self,it_154,default_value_163)));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value221);
                            if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value221, right_value221 = (void*)0;
                            __freed_obj__ = 0;
                            len_151++;
                            break;
                        }
                    }
                }
                come_free((char*)self->items);
                if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                come_free((char*)self->keys);
                self->keys=keys_148;
                self->items=items_149;
                self->item_existance=item_existance_150;
                self->size=size_147;
                self->len=len_151;
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional270;
char* result_152;
char* __result110__;
_Bool _if_conditional271;
char* __result111__;
char* result_153;
char* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_152, 0, sizeof(char*));
memset(&result_153, 0, sizeof(char*));
                    if(_if_conditional270=self==((void*)0),                    _if_conditional270) {
                        memset(&result_152,0,sizeof(char*));
                        __result110__ = __result_obj__ = result_152;
                        return __result110__;
                    }
                    self->key_list->it=self->key_list->head;
                    if(_if_conditional271=self->key_list->it,                    _if_conditional271) {
                        __result111__ = __result_obj__ = self->key_list->it->item;
                        return __result111__;
                    }
                    memset(&result_153,0,sizeof(char*));
                    __result112__ = __result_obj__ = result_153;
                    return __result112__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __result113__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result113__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional272;
char* result_155;
char* __result114__;
_Bool _if_conditional273;
char* __result115__;
char* result_156;
char* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_155, 0, sizeof(char*));
memset(&result_156, 0, sizeof(char*));
                    if(_if_conditional272=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional272) {
                        memset(&result_155,0,sizeof(char*));
                        __result114__ = __result_obj__ = result_155;
                        return __result114__;
                    }
                    self->key_list->it=self->key_list->it->next;
                    if(_if_conditional273=self->key_list->it,                    _if_conditional273) {
                        __result115__ = __result_obj__ = self->key_list->it->item;
                        return __result115__;
                    }
                    memset(&result_156,0,sizeof(char*));
                    __result116__ = __result_obj__ = result_156;
                    return __result116__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_158;
unsigned int it_159;
_Bool _while_condtional13;
_Bool _if_conditional274;
void* right_value219;
_Bool _if_conditional275;
struct sVar* __result117__;
_Bool _if_conditional276;
_Bool _if_conditional277;
struct sVar* __result118__;
struct sVar* __result119__;
struct sVar* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_158, 0, sizeof(unsigned int));
memset(&it_159, 0, sizeof(unsigned int));
right_value219 = (void*)0;
                        hash_158=string_get_hash_key(((char*)key))%self->size;
                        it_159=hash_158;
                        while(_while_condtional13=(_Bool)1,                        _while_condtional13) {
                            if(_if_conditional274=self->item_existance[it_159],                            _if_conditional274) {
                                if(_if_conditional275=optional$2boolbool_value(((struct optional$2boolbool*)(right_value219=string_equals(self->keys[it_159],key)))),                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value219),
                                (right_value219 && right_value219 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value219, right_value219 = (void*)0, 
                                __freed_obj__ = 0, 
                                _if_conditional275) {
                                    __result117__ = __result_obj__ = self->items[it_159];
                                    if(default_value && !__freed_obj__) { come_call_finalizer(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    return __result117__;
                                }
                                it_159++;
                                if(_if_conditional276=it_159>=self->size,                                _if_conditional276) {
                                    it_159=0;
                                }
                                else {
                                    if(_if_conditional277=it_159==hash_158,                                    _if_conditional277) {
                                        __result118__ = __result_obj__ = default_value;
                                        if(default_value && !__freed_obj__) { come_call_finalizer(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        return __result118__;
                                    }
                                }
                            }
                            else {
                                __result119__ = __result_obj__ = default_value;
                                if(default_value && !__freed_obj__) { come_call_finalizer(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result119__;
                            }
                        }
                        __result120__ = __result_obj__ = default_value;
                        if(default_value && !__freed_obj__) { come_call_finalizer(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result120__;
                        if(default_value && !__freed_obj__) { come_call_finalizer(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int it2_166;
struct list_item$1charp* it_167;
_Bool _while_condtional16;
void* right_value223;
_Bool _if_conditional284;
struct list$1charp* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_166, 0, sizeof(int));
memset(&it_167, 0, sizeof(struct list_item$1charp*));
right_value223 = (void*)0;
                            it2_166=0;
                            it_167=self->head;
                            while(_while_condtional16=it_167!=((void*)0),                            _while_condtional16) {
                                if(_if_conditional284=optional$2boolbool_value(((struct optional$2boolbool*)(right_value223=string_equals(it_167->item,item)))),                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value223),
                                (right_value223 && right_value223 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value223, right_value223 = (void*)0, 
                                __freed_obj__ = 0, 
                                _if_conditional284) {
                                    list$1charp_delete(self,it2_166,it2_166+1);
                                    break;
                                }
                                it2_166++;
                                it_167=it_167->next;
                            }
                            __result124__ = __result_obj__ = self;
                            return __result124__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional285;
_Bool _if_conditional286;
_Bool _if_conditional287;
int tmp_168;
_Bool _if_conditional288;
_Bool _if_conditional289;
_Bool _if_conditional290;
struct list$1charp* __result121__;
_Bool _if_conditional291;
_Bool _if_conditional292;
struct list_item$1charp* it_171;
int i_172;
_Bool _while_condtional18;
_Bool _if_conditional293;
struct list_item$1charp* prev_it_173;
_Bool _if_conditional294;
_Bool _if_conditional295;
struct list_item$1charp* it_174;
int i_175;
_Bool _while_condtional19;
_Bool _if_conditional296;
_Bool _if_conditional297;
struct list_item$1charp* prev_it_176;
struct list_item$1charp* it_177;
struct list_item$1charp* head_prev_it_178;
struct list_item$1charp* tail_it_179;
int i_180;
_Bool _while_condtional20;
_Bool _if_conditional298;
_Bool _if_conditional299;
_Bool _if_conditional300;
struct list_item$1charp* prev_it_181;
_Bool _if_conditional301;
_Bool _if_conditional302;
struct list$1charp* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_168, 0, sizeof(int));
memset(&it_171, 0, sizeof(struct list_item$1charp*));
memset(&i_172, 0, sizeof(int));
memset(&prev_it_173, 0, sizeof(struct list_item$1charp*));
memset(&it_174, 0, sizeof(struct list_item$1charp*));
memset(&i_175, 0, sizeof(int));
memset(&prev_it_176, 0, sizeof(struct list_item$1charp*));
memset(&it_177, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_178, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_179, 0, sizeof(struct list_item$1charp*));
memset(&i_180, 0, sizeof(int));
memset(&prev_it_181, 0, sizeof(struct list_item$1charp*));
                                        if(_if_conditional285=head<0,                                        _if_conditional285) {
                                            head+=self->len;
                                        }
                                        if(_if_conditional286=tail<0,                                        _if_conditional286) {
                                            tail+=self->len+1;
                                        }
                                        if(_if_conditional287=head>tail,                                        _if_conditional287) {
                                            tmp_168=tail;
                                            tail=head;
                                            head=tmp_168;
                                        }
                                        if(_if_conditional288=head<0,                                        _if_conditional288) {
                                            head=0;
                                        }
                                        if(_if_conditional289=tail>self->len,                                        _if_conditional289) {
                                            tail=self->len;
                                        }
                                        if(_if_conditional290=head==tail,                                        _if_conditional290) {
                                            __result121__ = __result_obj__ = self;
                                            return __result121__;
                                        }
                                        if(_if_conditional291=head==0&&tail==self->len,                                        _if_conditional291) {
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            if(_if_conditional292=head==0,                                            _if_conditional292) {
                                                it_171=self->head;
                                                i_172=0;
                                                while(_while_condtional18=it_171!=((void*)0),                                                _while_condtional18) {
                                                    if(_if_conditional293=i_172<tail,                                                    _if_conditional293) {
                                                        prev_it_173=it_171;
                                                        it_171=it_171->next;
                                                        i_172++;
                                                        if(prev_it_173 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_173, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        self->len--;
                                                    }
                                                    else {
                                                        if(_if_conditional294=i_172==tail,                                                        _if_conditional294) {
                                                            self->head=it_171;
                                                            self->head->prev=((void*)0);
                                                            break;
                                                        }
                                                        else {
                                                            it_171=it_171->next;
                                                            i_172++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                if(_if_conditional295=tail==self->len,                                                _if_conditional295) {
                                                    it_174=self->head;
                                                    i_175=0;
                                                    while(_while_condtional19=it_174!=((void*)0),                                                    _while_condtional19) {
                                                        if(_if_conditional296=i_175==head,                                                        _if_conditional296) {
                                                            self->tail=it_174->prev;
                                                            self->tail->next=((void*)0);
                                                        }
                                                        if(_if_conditional297=i_175>=head,                                                        _if_conditional297) {
                                                            prev_it_176=it_174;
                                                            it_174=it_174->next;
                                                            i_175++;
                                                            if(prev_it_176 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_176, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_174=it_174->next;
                                                            i_175++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    it_177=self->head;
                                                    head_prev_it_178=((void*)0);
                                                    tail_it_179=((void*)0);
                                                    i_180=0;
                                                    while(_while_condtional20=it_177!=((void*)0),                                                    _while_condtional20) {
                                                        if(_if_conditional298=i_180==head,                                                        _if_conditional298) {
                                                            head_prev_it_178=it_177->prev;
                                                        }
                                                        if(_if_conditional299=i_180==tail,                                                        _if_conditional299) {
                                                            tail_it_179=it_177;
                                                        }
                                                        if(_if_conditional300=i_180>=head&&i_180<tail,                                                        _if_conditional300) {
                                                            prev_it_181=it_177;
                                                            it_177=it_177->next;
                                                            i_180++;
                                                            if(prev_it_181 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_181, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_177=it_177->next;
                                                            i_180++;
                                                        }
                                                    }
                                                    if(_if_conditional301=head_prev_it_178!=((void*)0),                                                    _if_conditional301) {
                                                        head_prev_it_178->next=tail_it_179;
                                                    }
                                                    if(_if_conditional302=tail_it_179!=((void*)0),                                                    _if_conditional302) {
                                                        tail_it_179->prev=head_prev_it_178;
                                                    }
                                                }
                                            }
                                        }
                                        __result123__ = __result_obj__ = self;
                                        return __result123__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_169;
_Bool _while_condtional17;
struct list_item$1charp* prev_it_170;
struct list$1charp* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_169, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_170, 0, sizeof(struct list_item$1charp*));
                                                it_169=self->head;
                                                while(_while_condtional17=it_169!=((void*)0),                                                _while_condtional17) {
                                                    prev_it_170=it_169;
                                                    it_169=it_169->next;
                                                    if(prev_it_170 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_170, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                }
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                __result122__ = __result_obj__ = self;
                                                return __result122__;
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
_Bool _if_conditional308;
char* result_183;
char* __result125__;
_Bool _if_conditional309;
char* __result126__;
char* result_184;
char* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_183, 0, sizeof(char*));
memset(&result_184, 0, sizeof(char*));
            if(_if_conditional308=self==((void*)0),            _if_conditional308) {
                memset(&result_183,0,sizeof(char*));
                __result125__ = __result_obj__ = result_183;
                return __result125__;
            }
            self->it=self->head;
            if(_if_conditional309=self->it,            _if_conditional309) {
                __result126__ = __result_obj__ = self->it->item;
                return __result126__;
            }
            memset(&result_184,0,sizeof(char*));
            __result127__ = __result_obj__ = result_184;
            return __result127__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result128__ = self==((void*)0)||self->it==((void*)0);
            return __result128__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional310;
char* result_186;
char* __result129__;
_Bool _if_conditional311;
char* __result130__;
char* result_187;
char* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_186, 0, sizeof(char*));
memset(&result_187, 0, sizeof(char*));
            if(_if_conditional310=self==((void*)0)||self->it==((void*)0),            _if_conditional310) {
                memset(&result_186,0,sizeof(char*));
                __result129__ = __result_obj__ = result_186;
                return __result129__;
            }
            self->it=self->it->next;
            if(_if_conditional311=self->it,            _if_conditional311) {
                __result130__ = __result_obj__ = self->it->item;
                return __result130__;
            }
            memset(&result_187,0,sizeof(char*));
            __result131__ = __result_obj__ = result_187;
            return __result131__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional314;
void* right_value225;
struct list_item$1charp* litem_188;
_Bool _if_conditional315;
void* right_value226;
struct list_item$1charp* litem_189;
void* right_value227;
struct list_item$1charp* litem_190;
struct list$1charp* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value225 = (void*)0;
memset(&litem_188, 0, sizeof(struct list_item$1charp*));
right_value226 = (void*)0;
memset(&litem_189, 0, sizeof(struct list_item$1charp*));
right_value227 = (void*)0;
memset(&litem_190, 0, sizeof(struct list_item$1charp*));
                if(_if_conditional314=self->len==0,                _if_conditional314) {
                    litem_188=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value225=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 282, "struct list_item$1charp"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value225);
                    if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value225, right_value225 = (void*)0;
                    __freed_obj__ = 0;
                    litem_188->prev=((void*)0);
                    litem_188->next=((void*)0);
                    litem_188->item=item;
                    self->tail=litem_188;
                    self->head=litem_188;
                }
                else {
                    if(_if_conditional315=self->len==1,                    _if_conditional315) {
                        litem_189=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value226=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 292, "struct list_item$1charp"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value226);
                        if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value226, right_value226 = (void*)0;
                        __freed_obj__ = 0;
                        litem_189->prev=self->head;
                        litem_189->next=((void*)0);
                        litem_189->item=item;
                        self->tail=litem_189;
                        self->head->next=litem_189;
                    }
                    else {
                        litem_190=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value227=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 302, "struct list_item$1charp"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value227);
                        if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value227, right_value227 = (void*)0;
                        __freed_obj__ = 0;
                        litem_190->prev=self->tail;
                        litem_190->next=((void*)0);
                        litem_190->item=item;
                        self->tail->next=litem_190;
                        self->tail=litem_190;
                    }
                }
                self->len++;
                __result132__ = __result_obj__ = self;
                return __result132__;
}

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value229;
struct sVar* self_191;
void* right_value230;
char* __dec_obj100;
void* right_value231;
struct sType* __dec_obj101;
void* right_value232;
char* __dec_obj102;
void* right_value233;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value229 = (void*)0;
memset(&self_191, 0, sizeof(struct sVar*));
right_value230 = (void*)0;
right_value231 = (void*)0;
right_value232 = (void*)0;
right_value233 = (void*)0;
    self_191=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value229=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 802, "struct sVar"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value229);
    if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value229, right_value229 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj100=self_191->mName;
    self_191->mName=(char*)come_increment_ref_count(((char*)(right_value230=__builtin_string(name))));
    if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value230);
    if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { right_value230 = come_decrement_ref_count(right_value230, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value230, right_value230 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj101=self_191->mType;
    self_191->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value231=sType_clone(type))));
    if(__dec_obj101) { come_call_finalizer(sType_finalize,__dec_obj101, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value231);
    if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value231, right_value231 = (void*)0;
    __freed_obj__ = 0;
    self_191->mGlobal=(_Bool)1;
    __dec_obj102=self_191->mCValueName;
    self_191->mCValueName=(char*)come_increment_ref_count(((char*)(right_value232=__builtin_string(name))));
    if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value232);
    if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { right_value232 = come_decrement_ref_count(right_value232, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value232, right_value232 = (void*)0;
    __freed_obj__ = 0;
    self_191->mBlockLevel=info->block_level;
    self_191->mAllocaValue=(_Bool)0;
    self_191->mFunctionParam=(_Bool)0;
    self_191->mNoFree=(_Bool)0;
    map$2charphsVarph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value233=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_191));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value233);
    if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { right_value233 = come_decrement_ref_count(right_value233, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value233, right_value233 = (void*)0;
    __freed_obj__ = 0;
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(self_191 && !__freed_obj__) { come_call_finalizer(sVar_finalize,self_191, (void*)0, (void*)0, 0, 0, 0, 0); }
}

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value234;
struct sVar* self_192;
void* right_value235;
char* __dec_obj103;
void* right_value236;
struct sType* __dec_obj104;
void* right_value237;
char* __dec_obj105;
void* right_value238;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value234 = (void*)0;
memset(&self_192, 0, sizeof(struct sVar*));
right_value235 = (void*)0;
right_value236 = (void*)0;
right_value237 = (void*)0;
right_value238 = (void*)0;
    self_192=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value234=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 821, "struct sVar"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value234);
    if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value234, right_value234 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj103=self_192->mName;
    self_192->mName=(char*)come_increment_ref_count(((char*)(right_value235=__builtin_string(name))));
    if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value235);
    if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { right_value235 = come_decrement_ref_count(right_value235, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value235, right_value235 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj104=self_192->mType;
    self_192->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value236=sType_clone(type))));
    if(__dec_obj104) { come_call_finalizer(sType_finalize,__dec_obj104, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value236);
    if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value236, right_value236 = (void*)0;
    __freed_obj__ = 0;
    self_192->mGlobal=(_Bool)1;
    __dec_obj105=self_192->mCValueName;
    self_192->mCValueName=(char*)come_increment_ref_count(((char*)(right_value237=__builtin_string(c_value))));
    if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value237);
    if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { right_value237 = come_decrement_ref_count(right_value237, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value237, right_value237 = (void*)0;
    __freed_obj__ = 0;
    self_192->mBlockLevel=info->block_level;
    self_192->mAllocaValue=(_Bool)0;
    self_192->mFunctionParam=(_Bool)0;
    self_192->mNoFree=(_Bool)0;
    map$2charphsVarph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value238=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_192));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value238);
    if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { right_value238 = come_decrement_ref_count(right_value238, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value238, right_value238 = (void*)0;
    __freed_obj__ = 0;
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(self_192 && !__freed_obj__) { come_call_finalizer(sVar_finalize,self_192, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool is_type_name_flag_193;
_Bool multiple_declare_194;
_Bool _if_conditional316;
char* p_195;
int sline_196;
void* right_value239;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* type_197;
char* name_198;
_Bool err_199;
_Bool _if_conditional319;
_Bool multiple_declare2_200;
_Bool _if_conditional320;
char* p_201;
int sline_202;
void* right_value240;
struct tuple3$3sTypephcharphbool* multiple_assign_var3;
struct sType* type_203;
char* name_204;
_Bool err_205;
_Bool _if_conditional321;
_Bool _if_conditional322;
_Bool no_output_err_206;
_Bool no_comma_207;
_Bool no_output_come_code_208;
void* right_value241;
struct sNode* exp_209;
_Bool _if_conditional323;
void* right_value242;
struct sFun* fun_210;
_Bool _if_conditional324;
void* right_value243;
char* buf2_211;
struct list$1charph* multiple_assign_212;
_Bool _if_conditional325;
void* right_value244;
void* right_value245;
struct list$1charph* __dec_obj106;
void* right_value249;
_Bool _while_condtional21;
void* right_value250;
char* buf3_216;
void* right_value251;
_Bool _if_conditional328;
_Bool no_comma_217;
void* right_value252;
struct sNode* right_value_218;
void* right_value253;
struct sNode* __dec_obj110;
void* right_value254;
void* right_value255;
void* right_value256;
struct sNode* _inf_value3;
struct sStoreNode* _inf_obj_value3;
void* right_value265;
struct sNode* result_220;
struct sNode* __result137__;
_Bool _if_conditional346;
void* right_value266;
void* right_value267;
struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare_221;
void* right_value268;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* base_type_222;
char* name_223;
_Bool err_224;
void* right_value269;
struct tuple2$2sTypephcharph* variable_name_225;
void* right_value270;
void* right_value271;
struct tuple3$3sTypephcharphsNodeph* variable_name2_226;
_Bool _while_condtional22;
void* right_value275;
struct tuple2$2sTypephcharph* variable_name_230;
void* right_value276;
void* right_value277;
struct tuple3$3sTypephcharphsNodeph* variable_name2_231;
void* right_value278;
void* right_value279;
void* right_value280;
struct sNode* _inf_value4;
struct sStoreNode* _inf_obj_value4;
void* right_value289;
struct sNode* result_233;
struct sNode* __result142__;
_Bool _if_conditional370;
void* right_value290;
void* right_value291;
struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare_234;
void* right_value292;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* base_type_235;
char* name_236;
_Bool err_237;
void* right_value293;
struct tuple2$2sTypephcharph* variable_name_238;
_Bool _if_conditional371;
_Bool no_comma_239;
void* right_value294;
struct sNode* exp_240;
void* right_value295;
void* right_value296;
struct tuple3$3sTypephcharphsNodeph* variable_name2_241;
_Bool _while_condtional23;
void* right_value297;
struct tuple2$2sTypephcharph* variable_name_242;
_Bool _if_conditional372;
_Bool no_comma_243;
void* right_value298;
struct sNode* exp_244;
void* right_value299;
void* right_value300;
struct tuple3$3sTypephcharphsNodeph* variable_name2_245;
void* right_value301;
void* right_value302;
void* right_value303;
struct sNode* _inf_value5;
struct sStoreNode* _inf_obj_value5;
void* right_value312;
struct sNode* result_247;
struct sNode* __result146__;
_Bool _if_conditional390;
void* right_value313;
struct sNode* right_value_248;
void* right_value314;
struct sNode* __dec_obj140;
void* right_value315;
void* right_value316;
void* right_value317;
struct sNode* _inf_value6;
struct sStoreNode* _inf_obj_value6;
void* right_value326;
struct sNode* result_250;
struct sNode* __result149__;
void* right_value327;
_Bool _if_conditional408;
void* right_value328;
void* right_value329;
void* right_value330;
struct sNode* _inf_value7;
struct sLoadNode* _inf_obj_value7;
void* right_value334;
struct sNode* node_252;
void* right_value335;
struct sNode* __dec_obj150;
void* right_value336;
struct sNode* __dec_obj151;
struct sNode* __result152__;
void* right_value337;
char* word_253;
_Bool _if_conditional415;
void* right_value338;
char* __dec_obj152;
_Bool is_type_name_flag_254;
_Bool _if_conditional416;
void* right_value339;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* type_255;
char* name_256;
_Bool err_257;
_Bool _if_conditional417;
_Bool _if_conditional418;
_Bool _if_conditional419;
void* right_value340;
void* right_value341;
struct buffer* buf2_258;
_Bool squort_259;
_Bool dquort_260;
int nest_261;
_Bool _while_condtional24;
_Bool _if_conditional420;
_Bool _if_conditional421;
_Bool _if_conditional422;
_Bool _if_conditional423;
_Bool _if_conditional424;
_Bool _if_conditional425;
_Bool _if_conditional426;
_Bool _if_conditional427;
void* right_value342;
char* array_initializer_262;
void* right_value343;
void* right_value344;
struct sNode* _inf_value8;
struct sStoreNode* _inf_obj_value8;
void* right_value353;
struct sNode* result_264;
struct sNode* __result155__;
void* right_value354;
struct sNode* right_value_265;
void* right_value355;
void* right_value356;
struct list$1sNodeph* right_values_266;
_Bool _while_condtional25;
char* anonymous_var_nameX2030_267;
void* right_value357;
struct sNode* __dec_obj160;
void* right_value358;
void* right_value359;
struct sNode* _inf_value9;
struct sStoreNode* _inf_obj_value9;
void* right_value368;
struct sNode* result_269;
struct sNode* __result158__;
void* right_value369;
void* right_value370;
struct sNode* _inf_value10;
struct sStoreNode* _inf_obj_value10;
void* right_value379;
struct sNode* result_271;
struct sNode* __result161__;
void* right_value380;
struct sNode* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&is_type_name_flag_193, 0, sizeof(_Bool));
memset(&multiple_declare_194, 0, sizeof(_Bool));
memset(&p_195, 0, sizeof(char*));
memset(&sline_196, 0, sizeof(int));
right_value239 = (void*)0;
memset(&type_197, 0, sizeof(struct sType*));
memset(&name_198, 0, sizeof(char*));
memset(&err_199, 0, sizeof(_Bool));
memset(&type_197, 0, sizeof(struct sType*));
memset(&name_198, 0, sizeof(char*));
memset(&err_199, 0, sizeof(_Bool));
memset(&multiple_declare2_200, 0, sizeof(_Bool));
memset(&p_201, 0, sizeof(char*));
memset(&sline_202, 0, sizeof(int));
right_value240 = (void*)0;
memset(&type_203, 0, sizeof(struct sType*));
memset(&name_204, 0, sizeof(char*));
memset(&err_205, 0, sizeof(_Bool));
memset(&type_203, 0, sizeof(struct sType*));
memset(&name_204, 0, sizeof(char*));
memset(&err_205, 0, sizeof(_Bool));
memset(&no_output_err_206, 0, sizeof(_Bool));
memset(&no_comma_207, 0, sizeof(_Bool));
memset(&no_output_come_code_208, 0, sizeof(_Bool));
right_value241 = (void*)0;
memset(&exp_209, 0, sizeof(struct sNode*));
right_value242 = (void*)0;
memset(&fun_210, 0, sizeof(struct sFun*));
right_value243 = (void*)0;
memset(&buf2_211, 0, sizeof(char*));
memset(&multiple_assign_212, 0, sizeof(struct list$1charph*));
right_value244 = (void*)0;
right_value245 = (void*)0;
right_value249 = (void*)0;
right_value250 = (void*)0;
memset(&buf3_216, 0, sizeof(char*));
right_value251 = (void*)0;
memset(&no_comma_217, 0, sizeof(_Bool));
right_value252 = (void*)0;
memset(&right_value_218, 0, sizeof(struct sNode*));
right_value253 = (void*)0;
right_value254 = (void*)0;
right_value255 = (void*)0;
right_value256 = (void*)0;
right_value265 = (void*)0;
memset(&result_220, 0, sizeof(struct sNode*));
right_value266 = (void*)0;
right_value267 = (void*)0;
memset(&multiple_declare_221, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
right_value268 = (void*)0;
memset(&base_type_222, 0, sizeof(struct sType*));
memset(&name_223, 0, sizeof(char*));
memset(&err_224, 0, sizeof(_Bool));
memset(&base_type_222, 0, sizeof(struct sType*));
memset(&name_223, 0, sizeof(char*));
memset(&err_224, 0, sizeof(_Bool));
right_value269 = (void*)0;
memset(&variable_name_225, 0, sizeof(struct tuple2$2sTypephcharph*));
right_value270 = (void*)0;
right_value271 = (void*)0;
memset(&variable_name2_226, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
right_value275 = (void*)0;
memset(&variable_name_230, 0, sizeof(struct tuple2$2sTypephcharph*));
right_value276 = (void*)0;
right_value277 = (void*)0;
memset(&variable_name2_231, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
right_value278 = (void*)0;
right_value279 = (void*)0;
right_value280 = (void*)0;
right_value289 = (void*)0;
memset(&result_233, 0, sizeof(struct sNode*));
right_value290 = (void*)0;
right_value291 = (void*)0;
memset(&multiple_declare_234, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
right_value292 = (void*)0;
memset(&base_type_235, 0, sizeof(struct sType*));
memset(&name_236, 0, sizeof(char*));
memset(&err_237, 0, sizeof(_Bool));
memset(&base_type_235, 0, sizeof(struct sType*));
memset(&name_236, 0, sizeof(char*));
memset(&err_237, 0, sizeof(_Bool));
right_value293 = (void*)0;
memset(&variable_name_238, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&no_comma_239, 0, sizeof(_Bool));
right_value294 = (void*)0;
memset(&exp_240, 0, sizeof(struct sNode*));
right_value295 = (void*)0;
right_value296 = (void*)0;
memset(&variable_name2_241, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
right_value297 = (void*)0;
memset(&variable_name_242, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&no_comma_243, 0, sizeof(_Bool));
right_value298 = (void*)0;
memset(&exp_244, 0, sizeof(struct sNode*));
right_value299 = (void*)0;
right_value300 = (void*)0;
memset(&variable_name2_245, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
right_value301 = (void*)0;
right_value302 = (void*)0;
right_value303 = (void*)0;
right_value312 = (void*)0;
memset(&result_247, 0, sizeof(struct sNode*));
right_value313 = (void*)0;
memset(&right_value_248, 0, sizeof(struct sNode*));
right_value314 = (void*)0;
right_value315 = (void*)0;
right_value316 = (void*)0;
right_value317 = (void*)0;
right_value326 = (void*)0;
memset(&result_250, 0, sizeof(struct sNode*));
right_value327 = (void*)0;
right_value328 = (void*)0;
right_value329 = (void*)0;
right_value330 = (void*)0;
right_value334 = (void*)0;
memset(&node_252, 0, sizeof(struct sNode*));
right_value335 = (void*)0;
right_value336 = (void*)0;
right_value337 = (void*)0;
memset(&word_253, 0, sizeof(char*));
right_value338 = (void*)0;
memset(&is_type_name_flag_254, 0, sizeof(_Bool));
right_value339 = (void*)0;
memset(&type_255, 0, sizeof(struct sType*));
memset(&name_256, 0, sizeof(char*));
memset(&err_257, 0, sizeof(_Bool));
memset(&type_255, 0, sizeof(struct sType*));
memset(&name_256, 0, sizeof(char*));
memset(&err_257, 0, sizeof(_Bool));
right_value340 = (void*)0;
right_value341 = (void*)0;
memset(&buf2_258, 0, sizeof(struct buffer*));
memset(&squort_259, 0, sizeof(_Bool));
memset(&dquort_260, 0, sizeof(_Bool));
memset(&nest_261, 0, sizeof(int));
right_value342 = (void*)0;
memset(&array_initializer_262, 0, sizeof(char*));
right_value343 = (void*)0;
right_value344 = (void*)0;
right_value353 = (void*)0;
memset(&result_264, 0, sizeof(struct sNode*));
right_value354 = (void*)0;
memset(&right_value_265, 0, sizeof(struct sNode*));
right_value355 = (void*)0;
right_value356 = (void*)0;
memset(&right_values_266, 0, sizeof(struct list$1sNodeph*));
memset(&anonymous_var_nameX2030_267, 0, sizeof(char*));
right_value357 = (void*)0;
right_value358 = (void*)0;
right_value359 = (void*)0;
right_value368 = (void*)0;
memset(&result_269, 0, sizeof(struct sNode*));
right_value369 = (void*)0;
right_value370 = (void*)0;
right_value379 = (void*)0;
memset(&result_271, 0, sizeof(struct sNode*));
right_value380 = (void*)0;
    is_type_name_flag_193=is_type_name(buf,info);
    multiple_declare_194=(_Bool)0;
    if(_if_conditional316=is_type_name_flag_193,    _if_conditional316) {
        p_195=info->p;
        sline_196=info->sline;
        info->p=head;
        info->sline=head_sline;
        multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(right_value239=parse_type(info,(_Bool)1,(_Bool)1)));
        type_197=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
        name_198=(char*)come_increment_ref_count(multiple_assign_var2->v2);
        err_199=multiple_assign_var2->v3;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value239);
        if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value239, right_value239 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional319=err_199&&*info->p==44,        _if_conditional319) {
            multiple_declare_194=(_Bool)1;
        }
        info->p=p_195;
        info->sline=sline_196;
        if(type_197 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_197, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(name_198 && !__freed_obj__) { name_198 = come_decrement_ref_count(name_198, (void*)0, (void*)0, 0, 0, 0); }
    }
    multiple_declare2_200=(_Bool)0;
    if(_if_conditional320=is_type_name_flag_193,    _if_conditional320) {
        p_201=info->p;
        sline_202=info->sline;
        info->p=head;
        info->sline=head_sline;
        multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(right_value240=parse_type(info,(_Bool)1,(_Bool)1)));
        type_203=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
        name_204=(char*)come_increment_ref_count(multiple_assign_var3->v2);
        err_205=multiple_assign_var3->v3;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value240);
        if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value240, right_value240 = (void*)0;
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        if(_if_conditional321=err_205&&*info->p==61,        _if_conditional321) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            if(_if_conditional322=*info->p==123,            _if_conditional322) {
            }
            else {
                no_output_err_206=info->no_output_err;
                no_comma_207=info->no_comma;
                no_output_come_code_208=info->no_output_come_code;
                info->no_output_err=(_Bool)1;
                info->no_comma=(_Bool)1;
                info->no_output_come_code=(_Bool)1;
                exp_209=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value241=expression_v13(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value241);
                if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { right_value241 = come_decrement_ref_count(right_value241, ((struct sNode*)right_value241)->finalize, ((struct sNode*)right_value241)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value241, right_value241 = (void*)0;
                __freed_obj__ = 0;
                info->no_comma=no_comma_207;
                info->no_output_err=no_output_err_206;
                info->no_output_come_code=no_output_come_code_208;
                if(_if_conditional323=*info->p==44,                _if_conditional323) {
                    multiple_declare2_200=(_Bool)1;
                }
                if(exp_209 && !__freed_obj__) { exp_209 = come_decrement_ref_count(exp_209, ((struct sNode*)exp_209)->finalize, ((struct sNode*)exp_209)->_protocol_obj, 0, 0, 0); } 
            }
        }
        info->p=p_201;
        info->sline=sline_202;
        if(type_203 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_203, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(name_204 && !__freed_obj__) { name_204 = come_decrement_ref_count(name_204, (void*)0, (void*)0, 0, 0, 0); }
    }
    parse_sharp_v5(info);
    fun_210=((struct sFun*)(right_value242=map$2charphsFunphp_operator_load_element(info->funcs,buf)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value242);
    if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value242, right_value242 = (void*)0;
    __freed_obj__ = 0;
    if(_if_conditional324=charp_operator_equals(buf,"var")||charp_operator_equals(buf,"auto"),    _if_conditional324) {
        parse_sharp_v5(info);
        buf2_211=(char*)come_increment_ref_count(((char*)(right_value243=parse_word(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value243);
        if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { right_value243 = come_decrement_ref_count(right_value243, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value243, right_value243 = (void*)0;
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        multiple_assign_212=((void*)0);
        if(_if_conditional325=*info->p==44,        _if_conditional325) {
            __dec_obj106=multiple_assign_212;
            multiple_assign_212=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value245=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value244=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "07var.c", 919, "struct list$1charph"))))))));
            if(__dec_obj106) { come_call_finalizer(list$1charph_finalize,__dec_obj106, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value244);
            if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value244, right_value244 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value245);
            if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value245, right_value245 = (void*)0;
            __freed_obj__ = 0;
            list$1charph_push_back(multiple_assign_212,(char*)come_increment_ref_count(((char*)(right_value249=string_clone(buf2_211)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value249);
            if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { right_value249 = come_decrement_ref_count(right_value249, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value249, right_value249 = (void*)0;
            __freed_obj__ = 0;
            while(_while_condtional21=*info->p==44,            _while_condtional21) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                buf3_216=(char*)come_increment_ref_count(((char*)(right_value250=parse_word(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value250);
                if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { right_value250 = come_decrement_ref_count(right_value250, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value250, right_value250 = (void*)0;
                __freed_obj__ = 0;
                parse_sharp_v5(info);
                list$1charph_push_back(multiple_assign_212,(char*)come_increment_ref_count(((char*)(right_value251=string_clone(buf3_216)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value251);
                if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { right_value251 = come_decrement_ref_count(right_value251, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value251, right_value251 = (void*)0;
                __freed_obj__ = 0;
                if(buf3_216 && !__freed_obj__) { buf3_216 = come_decrement_ref_count(buf3_216, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        parse_sharp_v5(info);
        if(_if_conditional328=*info->p==61&&*(info->p+1)!=61,        _if_conditional328) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            no_comma_217=info->no_comma;
            info->no_comma=(_Bool)1;
            right_value_218=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value252=expression_v13(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value252);
            if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { right_value252 = come_decrement_ref_count(right_value252, ((struct sNode*)right_value252)->finalize, ((struct sNode*)right_value252)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value252, right_value252 = (void*)0;
            __freed_obj__ = 0;
            info->no_comma=no_comma_217;
            parse_sharp_v5(info);
            __dec_obj110=right_value_218;
            right_value_218=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value253=post_position_operator3_v21((struct sNode*)come_increment_ref_count(right_value_218),info))));
            if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value253);
            if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { right_value253 = come_decrement_ref_count(right_value253, ((struct sNode*)right_value253)->finalize, ((struct sNode*)right_value253)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value253, right_value253 = (void*)0;
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 949, "struct sNode");
            _inf_obj_value3=come_increment_ref_count(((struct sStoreNode*)(right_value256=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value254=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 949, "struct sStoreNode")))),(char*)come_increment_ref_count(((char*)(right_value255=__builtin_string(buf2_211)))),(struct list$1charph*)come_increment_ref_count(multiple_assign_212),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_218),((void*)0),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sStoreNode_finalize;
            _inf_value3->clone=(void*)sStoreNode_clone;
            _inf_value3->compile=(void*)sStoreNode_compile;
            _inf_value3->sline=(void*)sStoreNode_sline;
            _inf_value3->sname=(void*)sStoreNode_sname;
            _inf_value3->terminated=(void*)sStoreNode_terminated;
            _inf_value3->kind=(void*)sStoreNode_kind;
            result_220=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value265=_inf_value3)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value254);
            if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value254, right_value254 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value255);
            if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { right_value255 = come_decrement_ref_count(right_value255, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value255, right_value255 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value256);
            if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value256, right_value256 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value265);
            if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { right_value265 = come_decrement_ref_count(right_value265, ((struct sNode*)right_value265)->finalize, ((struct sNode*)right_value265)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[3] = right_value265, right_value265 = (void*)0;
            __freed_obj__ = 0;
            __result137__ = __result_obj__ = result_220;
            if(right_value_218 && !__freed_obj__) { right_value_218 = come_decrement_ref_count(right_value_218, ((struct sNode*)right_value_218)->finalize, ((struct sNode*)right_value_218)->_protocol_obj, 0, 0, 0); } 
            if(result_220 && !__freed_obj__) { result_220 = come_decrement_ref_count(result_220, ((struct sNode*)result_220)->finalize, ((struct sNode*)result_220)->_protocol_obj, 0, 1, 0); } 
            if(buf2_211 && !__freed_obj__) { buf2_211 = come_decrement_ref_count(buf2_211, (void*)0, (void*)0, 0, 0, 0); }
            if(multiple_assign_212 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,multiple_assign_212, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result137__;
            if(right_value_218 && !__freed_obj__) { right_value_218 = come_decrement_ref_count(right_value_218, ((struct sNode*)right_value_218)->finalize, ((struct sNode*)right_value_218)->_protocol_obj, 0, 0, 0); } 
            if(result_220 && !__freed_obj__) { result_220 = come_decrement_ref_count(result_220, ((struct sNode*)result_220)->finalize, ((struct sNode*)result_220)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            err_msg(info,"var requires a right value(%c)",*info->p);
            exit(1);
        }
        if(buf2_211 && !__freed_obj__) { buf2_211 = come_decrement_ref_count(buf2_211, (void*)0, (void*)0, 0, 0, 0); }
        if(multiple_assign_212 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,multiple_assign_212, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        if(_if_conditional346=multiple_declare_194,        _if_conditional346) {
            info->p=head;
            info->sline=head_sline;
            multiple_declare_221=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value267=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value266=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "07var.c", 964, "struct list$1tuple3$3sTypephcharphsNodephph"))))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value266);
            if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value266, right_value266 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value267);
            if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value267, right_value267 = (void*)0;
            __freed_obj__ = 0;
            multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value268=parse_type(info,(_Bool)0,(_Bool)1)));
            base_type_222=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
            name_223=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            err_224=multiple_assign_var4->v3;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value268);
            if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value268, right_value268 = (void*)0;
            __freed_obj__ = 0;
            variable_name_225=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value269=parse_variable_name((struct sType*)come_increment_ref_count(base_type_222),(_Bool)1,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value269);
            if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value269, right_value269 = (void*)0;
            __freed_obj__ = 0;
            variable_name2_226=(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value271=tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value270=(struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 970, "struct tuple3$3sTypephcharphvoidp")))),(struct sType*)come_increment_ref_count(variable_name_225->v1),(char*)come_increment_ref_count(variable_name_225->v2),((void*)0)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value270);
            if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { right_value270 = come_decrement_ref_count(right_value270, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value270, right_value270 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value271);
            if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphvoidpp_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value271, right_value271 = (void*)0;
            __freed_obj__ = 0;
            list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_221,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_226));
            while(_while_condtional22=*info->p==44,            _while_condtional22) {
                info->p++;
                skip_spaces_and_lf(info);
                variable_name_230=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value275=parse_variable_name((struct sType*)come_increment_ref_count(base_type_222),(_Bool)0,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value275);
                if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value275, right_value275 = (void*)0;
                __freed_obj__ = 0;
                variable_name2_231=(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value277=tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value276=(struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 980, "struct tuple3$3sTypephcharphvoidp")))),(struct sType*)come_increment_ref_count(variable_name_230->v1),(char*)come_increment_ref_count(variable_name_230->v2),((void*)0)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value276);
                if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { right_value276 = come_decrement_ref_count(right_value276, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value276, right_value276 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value277);
                if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphvoidpp_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value277, right_value277 = (void*)0;
                __freed_obj__ = 0;
                list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_221,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_231));
                if(variable_name_230 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_230, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(variable_name2_231 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_231, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 985, "struct sNode");
            _inf_obj_value4=come_increment_ref_count(((struct sStoreNode*)(right_value280=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value278=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 985, "struct sStoreNode")))),(char*)come_increment_ref_count(((char*)(right_value279=__builtin_string(buf)))),((void*)0),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare_221),(struct sType*)come_increment_ref_count(base_type_222),(_Bool)1,((void*)0),((void*)0),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sStoreNode_finalize;
            _inf_value4->clone=(void*)sStoreNode_clone;
            _inf_value4->compile=(void*)sStoreNode_compile;
            _inf_value4->sline=(void*)sStoreNode_sline;
            _inf_value4->sname=(void*)sStoreNode_sname;
            _inf_value4->terminated=(void*)sStoreNode_terminated;
            _inf_value4->kind=(void*)sStoreNode_kind;
            result_233=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value289=_inf_value4)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value278);
            if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value278, right_value278 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value279);
            if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { right_value279 = come_decrement_ref_count(right_value279, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value279, right_value279 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value280);
            if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value280, right_value280 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value289);
            if(right_value289 && right_value289 != __result_obj__ && !__freed_obj__) { right_value289 = come_decrement_ref_count(right_value289, ((struct sNode*)right_value289)->finalize, ((struct sNode*)right_value289)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[3] = right_value289, right_value289 = (void*)0;
            __freed_obj__ = 0;
            __result142__ = __result_obj__ = result_233;
            if(multiple_declare_221 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare_221, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(base_type_222 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_222, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(name_223 && !__freed_obj__) { name_223 = come_decrement_ref_count(name_223, (void*)0, (void*)0, 0, 0, 0); }
            if(variable_name_225 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_225, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(variable_name2_226 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_226, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(result_233 && !__freed_obj__) { result_233 = come_decrement_ref_count(result_233, ((struct sNode*)result_233)->finalize, ((struct sNode*)result_233)->_protocol_obj, 0, 1, 0); } 
            return __result142__;
            if(multiple_declare_221 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare_221, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(base_type_222 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_222, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(name_223 && !__freed_obj__) { name_223 = come_decrement_ref_count(name_223, (void*)0, (void*)0, 0, 0, 0); }
            if(variable_name_225 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_225, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(variable_name2_226 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_226, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(result_233 && !__freed_obj__) { result_233 = come_decrement_ref_count(result_233, ((struct sNode*)result_233)->finalize, ((struct sNode*)result_233)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional370=multiple_declare2_200,            _if_conditional370) {
                info->p=head;
                info->sline=head_sline;
                multiple_declare_234=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value291=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value290=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "07var.c", 995, "struct list$1tuple3$3sTypephcharphsNodephph"))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value290);
                if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value290, right_value290 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value291);
                if(right_value291 && right_value291 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value291, right_value291 = (void*)0;
                __freed_obj__ = 0;
                multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value292=parse_type(info,(_Bool)0,(_Bool)1)));
                base_type_235=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                name_236=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                err_237=multiple_assign_var5->v3;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value292);
                if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value292, right_value292 = (void*)0;
                __freed_obj__ = 0;
                variable_name_238=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value293=parse_variable_name((struct sType*)come_increment_ref_count(base_type_235),(_Bool)1,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value293);
                if(right_value293 && right_value293 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value293, right_value293 = (void*)0;
                __freed_obj__ = 0;
                parse_sharp_v5(info);
                if(_if_conditional371=*info->p==61,                _if_conditional371) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    no_comma_239=info->no_comma;
                    info->no_comma=(_Bool)1;
                    exp_240=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value294=expression_v13(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value294);
                    if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { right_value294 = come_decrement_ref_count(right_value294, ((struct sNode*)right_value294)->finalize, ((struct sNode*)right_value294)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value294, right_value294 = (void*)0;
                    __freed_obj__ = 0;
                    info->no_comma=no_comma_239;
                    variable_name2_241=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value296=tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value295=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1014, "struct tuple3$3sTypephcharphsNodeph")))),(struct sType*)come_increment_ref_count(variable_name_238->v1),(char*)come_increment_ref_count(variable_name_238->v2),(struct sNode*)come_increment_ref_count(exp_240)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value295);
                    if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value295, right_value295 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value296);
                    if(right_value296 && right_value296 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value296, right_value296 = (void*)0;
                    __freed_obj__ = 0;
                    list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_234,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_241));
                    if(exp_240 && !__freed_obj__) { exp_240 = come_decrement_ref_count(exp_240, ((struct sNode*)exp_240)->finalize, ((struct sNode*)exp_240)->_protocol_obj, 0, 0, 0); } 
                    if(variable_name2_241 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_241, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                while(_while_condtional23=*info->p==44,                _while_condtional23) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    variable_name_242=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value297=parse_variable_name((struct sType*)come_increment_ref_count(base_type_235),(_Bool)0,info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value297);
                    if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value297, right_value297 = (void*)0;
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    if(_if_conditional372=*info->p==61,                    _if_conditional372) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        parse_sharp_v5(info);
                        no_comma_243=info->no_comma;
                        info->no_comma=(_Bool)1;
                        exp_244=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value298=expression_v13(info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value298);
                        if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { right_value298 = come_decrement_ref_count(right_value298, ((struct sNode*)right_value298)->finalize, ((struct sNode*)right_value298)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value298, right_value298 = (void*)0;
                        __freed_obj__ = 0;
                        info->no_comma=no_comma_243;
                        variable_name2_245=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value300=tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value299=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1038, "struct tuple3$3sTypephcharphsNodeph")))),(struct sType*)come_increment_ref_count(variable_name_242->v1),(char*)come_increment_ref_count(variable_name_242->v2),(struct sNode*)come_increment_ref_count(exp_244)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value299);
                        if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value299, right_value299 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value300);
                        if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value300, right_value300 = (void*)0;
                        __freed_obj__ = 0;
                        list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_234,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_245));
                        if(exp_244 && !__freed_obj__) { exp_244 = come_decrement_ref_count(exp_244, ((struct sNode*)exp_244)->finalize, ((struct sNode*)exp_244)->_protocol_obj, 0, 0, 0); } 
                        if(variable_name2_245 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_245, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    else {
                        if(variable_name_242 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_242, (void*)0, (void*)0, 0, 0, 0, 0); }
                        break;
                    }
                    if(variable_name_242 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_242, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1047, "struct sNode");
                _inf_obj_value5=come_increment_ref_count(((struct sStoreNode*)(right_value303=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value301=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1047, "struct sStoreNode")))),(char*)come_increment_ref_count(((char*)(right_value302=__builtin_string(buf)))),((void*)0),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare_234),(struct sType*)come_increment_ref_count(base_type_235),(_Bool)1,((void*)0),((void*)0),info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sStoreNode_finalize;
                _inf_value5->clone=(void*)sStoreNode_clone;
                _inf_value5->compile=(void*)sStoreNode_compile;
                _inf_value5->sline=(void*)sStoreNode_sline;
                _inf_value5->sname=(void*)sStoreNode_sname;
                _inf_value5->terminated=(void*)sStoreNode_terminated;
                _inf_value5->kind=(void*)sStoreNode_kind;
                result_247=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value312=_inf_value5)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value301);
                if(right_value301 && right_value301 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value301, right_value301 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value302);
                if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { right_value302 = come_decrement_ref_count(right_value302, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value302, right_value302 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value303);
                if(right_value303 && right_value303 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value303, right_value303 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value312);
                if(right_value312 && right_value312 != __result_obj__ && !__freed_obj__) { right_value312 = come_decrement_ref_count(right_value312, ((struct sNode*)right_value312)->finalize, ((struct sNode*)right_value312)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[3] = right_value312, right_value312 = (void*)0;
                __freed_obj__ = 0;
                __result146__ = __result_obj__ = result_247;
                if(multiple_declare_234 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare_234, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(base_type_235 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_235, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(name_236 && !__freed_obj__) { name_236 = come_decrement_ref_count(name_236, (void*)0, (void*)0, 0, 0, 0); }
                if(variable_name_238 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_238, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_247 && !__freed_obj__) { result_247 = come_decrement_ref_count(result_247, ((struct sNode*)result_247)->finalize, ((struct sNode*)result_247)->_protocol_obj, 0, 1, 0); } 
                return __result146__;
                if(multiple_declare_234 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare_234, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(base_type_235 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_235, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(name_236 && !__freed_obj__) { name_236 = come_decrement_ref_count(name_236, (void*)0, (void*)0, 0, 0, 0); }
                if(variable_name_238 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_238, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_247 && !__freed_obj__) { result_247 = come_decrement_ref_count(result_247, ((struct sNode*)result_247)->finalize, ((struct sNode*)result_247)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional390=!is_type_name_flag_193&&*info->p==61&&*(info->p+1)!=61&&!info->no_assign,                _if_conditional390) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    right_value_248=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value313=expression_v13(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value313);
                    if(right_value313 && right_value313 != __result_obj__ && !__freed_obj__) { right_value313 = come_decrement_ref_count(right_value313, ((struct sNode*)right_value313)->finalize, ((struct sNode*)right_value313)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value313, right_value313 = (void*)0;
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __dec_obj140=right_value_248;
                    right_value_248=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value314=post_position_operator3_v21((struct sNode*)come_increment_ref_count(right_value_248),info))));
                    if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value314);
                    if(right_value314 && right_value314 != __result_obj__ && !__freed_obj__) { right_value314 = come_decrement_ref_count(right_value314, ((struct sNode*)right_value314)->finalize, ((struct sNode*)right_value314)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value314, right_value314 = (void*)0;
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1065, "struct sNode");
                    _inf_obj_value6=come_increment_ref_count(((struct sStoreNode*)(right_value317=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value315=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1065, "struct sStoreNode")))),(char*)come_increment_ref_count(((char*)(right_value316=__builtin_string(buf)))),((void*)0),((void*)0),((void*)0),(_Bool)0,(struct sNode*)come_increment_ref_count(right_value_248),((void*)0),info))));
                    _inf_value6->_protocol_obj=_inf_obj_value6;
                    _inf_value6->finalize=(void*)sStoreNode_finalize;
                    _inf_value6->clone=(void*)sStoreNode_clone;
                    _inf_value6->compile=(void*)sStoreNode_compile;
                    _inf_value6->sline=(void*)sStoreNode_sline;
                    _inf_value6->sname=(void*)sStoreNode_sname;
                    _inf_value6->terminated=(void*)sStoreNode_terminated;
                    _inf_value6->kind=(void*)sStoreNode_kind;
                    result_250=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value326=_inf_value6)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value315);
                    if(right_value315 && right_value315 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value315, right_value315 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value316);
                    if(right_value316 && right_value316 != __result_obj__ && !__freed_obj__) { right_value316 = come_decrement_ref_count(right_value316, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value316, right_value316 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value317);
                    if(right_value317 && right_value317 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value317, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value317, right_value317 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value326);
                    if(right_value326 && right_value326 != __result_obj__ && !__freed_obj__) { right_value326 = come_decrement_ref_count(right_value326, ((struct sNode*)right_value326)->finalize, ((struct sNode*)right_value326)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[3] = right_value326, right_value326 = (void*)0;
                    __freed_obj__ = 0;
                    __result149__ = __result_obj__ = result_250;
                    if(right_value_248 && !__freed_obj__) { right_value_248 = come_decrement_ref_count(right_value_248, ((struct sNode*)right_value_248)->finalize, ((struct sNode*)right_value_248)->_protocol_obj, 0, 0, 0); } 
                    if(result_250 && !__freed_obj__) { result_250 = come_decrement_ref_count(result_250, ((struct sNode*)result_250)->finalize, ((struct sNode*)result_250)->_protocol_obj, 0, 1, 0); } 
                    return __result149__;
                    if(right_value_248 && !__freed_obj__) { right_value_248 = come_decrement_ref_count(right_value_248, ((struct sNode*)right_value_248)->finalize, ((struct sNode*)right_value_248)->_protocol_obj, 0, 0, 0); } 
                    if(result_250 && !__freed_obj__) { result_250 = come_decrement_ref_count(result_250, ((struct sNode*)result_250)->finalize, ((struct sNode*)result_250)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional408=!is_type_name_flag_193||((struct sFun*)(right_value327=map$2charphsFunphp_operator_load_element(info->funcs,buf))),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value327),
                    (right_value327 && right_value327 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sFun_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value327, right_value327 = (void*)0, 
                    __freed_obj__ = 0, 
                    _if_conditional408) {
                        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1072, "struct sNode");
                        _inf_obj_value7=come_increment_ref_count(((struct sLoadNode*)(right_value330=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value328=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1072, "struct sLoadNode")))),(char*)come_increment_ref_count(((char*)(right_value329=__builtin_string(buf)))),info))));
                        _inf_value7->_protocol_obj=_inf_obj_value7;
                        _inf_value7->finalize=(void*)sLoadNode_finalize;
                        _inf_value7->clone=(void*)sLoadNode_clone;
                        _inf_value7->compile=(void*)sLoadNode_compile;
                        _inf_value7->sline=(void*)sLoadNode_sline;
                        _inf_value7->sname=(void*)sLoadNode_sname;
                        _inf_value7->terminated=(void*)sLoadNode_terminated;
                        _inf_value7->kind=(void*)sLoadNode_kind;
                        node_252=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value334=_inf_value7)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value328);
                        if(right_value328 && right_value328 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value328, right_value328 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value329);
                        if(right_value329 && right_value329 != __result_obj__ && !__freed_obj__) { right_value329 = come_decrement_ref_count(right_value329, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value329, right_value329 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value330);
                        if(right_value330 && right_value330 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value330, right_value330 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value334);
                        if(right_value334 && right_value334 != __result_obj__ && !__freed_obj__) { right_value334 = come_decrement_ref_count(right_value334, ((struct sNode*)right_value334)->finalize, ((struct sNode*)right_value334)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[3] = right_value334, right_value334 = (void*)0;
                        __freed_obj__ = 0;
                        __dec_obj150=node_252;
                        node_252=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value335=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_252),info))));
                        if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value335);
                        if(right_value335 && right_value335 != __result_obj__ && !__freed_obj__) { right_value335 = come_decrement_ref_count(right_value335, ((struct sNode*)right_value335)->finalize, ((struct sNode*)right_value335)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value335, right_value335 = (void*)0;
                        __freed_obj__ = 0;
                        __dec_obj151=node_252;
                        node_252=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value336=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_252),info))));
                        if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value336);
                        if(right_value336 && right_value336 != __result_obj__ && !__freed_obj__) { right_value336 = come_decrement_ref_count(right_value336, ((struct sNode*)right_value336)->finalize, ((struct sNode*)right_value336)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value336, right_value336 = (void*)0;
                        __freed_obj__ = 0;
                        __result152__ = __result_obj__ = node_252;
                        if(node_252 && !__freed_obj__) { node_252 = come_decrement_ref_count(node_252, ((struct sNode*)node_252)->finalize, ((struct sNode*)node_252)->_protocol_obj, 0, 1, 0); } 
                        return __result152__;
                        if(node_252 && !__freed_obj__) { node_252 = come_decrement_ref_count(node_252, ((struct sNode*)node_252)->finalize, ((struct sNode*)node_252)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        info->p=head;
                        info->sline=head_sline;
                        word_253=(char*)come_increment_ref_count(((char*)(right_value337=__builtin_string(""))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value337);
                        if(right_value337 && right_value337 != __result_obj__ && !__freed_obj__) { right_value337 = come_decrement_ref_count(right_value337, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value337, right_value337 = (void*)0;
                        __freed_obj__ = 0;
                        if(_if_conditional415=xisalpha(*info->p)||*info->p==95,                        _if_conditional415) {
                            __dec_obj152=word_253;
                            word_253=(char*)come_increment_ref_count(((char*)(right_value338=parse_word(info))));
                            if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value338);
                            if(right_value338 && right_value338 != __result_obj__ && !__freed_obj__) { right_value338 = come_decrement_ref_count(right_value338, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value338, right_value338 = (void*)0;
                            __freed_obj__ = 0;
                        }
                        is_type_name_flag_254=is_type_name(word_253,info);
                        info->p=head;
                        info->sline=head_sline;
                        if(_if_conditional416=is_type_name_flag_254,                        _if_conditional416) {
                            parse_sharp_v5(info);
                            multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(right_value339=parse_type(info,(_Bool)1,(_Bool)1)));
                            type_255=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                            name_256=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                            err_257=multiple_assign_var6->v3;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value339);
                            if(right_value339 && right_value339 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value339, right_value339 = (void*)0;
                            __freed_obj__ = 0;
                            if(_if_conditional417=!err_257,                            _if_conditional417) {
                                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                                exit(2);
                            }
                            parse_sharp_v5(info);
                            if(_if_conditional418=*info->p==61,                            _if_conditional418) {
                                info->p++;
                                skip_spaces_and_lf(info);
                                parse_sharp_v5(info);
                                if(_if_conditional419=*info->p==123,                                _if_conditional419) {
                                    buf2_258=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value341=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value340=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 1111, "struct buffer"))))))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value340);
                                    if(right_value340 && right_value340 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value340, right_value340 = (void*)0;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value341);
                                    if(right_value341 && right_value341 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value341, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value341, right_value341 = (void*)0;
                                    __freed_obj__ = 0;
                                    buffer_append_char(buf2_258,*info->p);
                                    info->p++;
                                    squort_259=(_Bool)0;
                                    dquort_260=(_Bool)0;
                                    nest_261=1;
                                    while(_while_condtional24=1,                                    _while_condtional24) {
                                        if(_if_conditional420=*info->p==0,                                        _if_conditional420) {
                                            err_msg(info,"unexpected source end in array initiailizer");
                                            exit(2);
                                        }
                                        else {
                                            if(_if_conditional421=*info->p==92,                                            _if_conditional421) {
                                                buffer_append_char(buf2_258,*info->p);
                                                info->p++;
                                                buffer_append_char(buf2_258,*info->p);
                                                info->p++;
                                            }
                                            else {
                                                if(_if_conditional422=!squort_259&&*info->p==34,                                                _if_conditional422) {
                                                    buffer_append_char(buf2_258,*info->p);
                                                    info->p++;
                                                    dquort_260=!dquort_260;
                                                }
                                                else {
                                                    if(_if_conditional423=!dquort_260&&*info->p==39,                                                    _if_conditional423) {
                                                        buffer_append_char(buf2_258,*info->p);
                                                        info->p++;
                                                        squort_259=!squort_259;
                                                    }
                                                    else {
                                                        if(_if_conditional424=squort_259||dquort_260,                                                        _if_conditional424) {
                                                            buffer_append_char(buf2_258,*info->p);
                                                            info->p++;
                                                        }
                                                        else {
                                                            if(_if_conditional425=*info->p==123,                                                            _if_conditional425) {
                                                                nest_261++;
                                                                buffer_append_char(buf2_258,*info->p);
                                                                info->p++;
                                                            }
                                                            else {
                                                                if(_if_conditional426=*info->p==125,                                                                _if_conditional426) {
                                                                    nest_261--;
                                                                    buffer_append_char(buf2_258,*info->p);
                                                                    info->p++;
                                                                    if(_if_conditional427=nest_261==0,                                                                    _if_conditional427) {
                                                                        skip_spaces_and_lf(info);
                                                                        break;
                                                                    }
                                                                }
                                                                else {
                                                                    buffer_append_char(buf2_258,*info->p);
                                                                    info->p++;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    array_initializer_262=(char*)come_increment_ref_count(((char*)(right_value342=buffer_to_string(buf2_258))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value342);
                                    if(right_value342 && right_value342 != __result_obj__ && !__freed_obj__) { right_value342 = come_decrement_ref_count(right_value342, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value342, right_value342 = (void*)0;
                                    __freed_obj__ = 0;
                                    _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1166, "struct sNode");
                                    _inf_obj_value8=come_increment_ref_count(((struct sStoreNode*)(right_value344=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value343=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1166, "struct sStoreNode")))),(char*)come_increment_ref_count(name_256),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_255),(_Bool)1,((void*)0),(char*)come_increment_ref_count(array_initializer_262),info))));
                                    _inf_value8->_protocol_obj=_inf_obj_value8;
                                    _inf_value8->finalize=(void*)sStoreNode_finalize;
                                    _inf_value8->clone=(void*)sStoreNode_clone;
                                    _inf_value8->compile=(void*)sStoreNode_compile;
                                    _inf_value8->sline=(void*)sStoreNode_sline;
                                    _inf_value8->sname=(void*)sStoreNode_sname;
                                    _inf_value8->terminated=(void*)sStoreNode_terminated;
                                    _inf_value8->kind=(void*)sStoreNode_kind;
                                    result_264=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value353=_inf_value8)));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value343);
                                    if(right_value343 && right_value343 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value343, right_value343 = (void*)0;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value344);
                                    if(right_value344 && right_value344 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value344, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value344, right_value344 = (void*)0;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value353);
                                    if(right_value353 && right_value353 != __result_obj__ && !__freed_obj__) { right_value353 = come_decrement_ref_count(right_value353, ((struct sNode*)right_value353)->finalize, ((struct sNode*)right_value353)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[2] = right_value353, right_value353 = (void*)0;
                                    __freed_obj__ = 0;
                                    __result155__ = __result_obj__ = result_264;
                                    if(buf2_258 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf2_258, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(array_initializer_262 && !__freed_obj__) { array_initializer_262 = come_decrement_ref_count(array_initializer_262, (void*)0, (void*)0, 0, 0, 0); }
                                    if(result_264 && !__freed_obj__) { result_264 = come_decrement_ref_count(result_264, ((struct sNode*)result_264)->finalize, ((struct sNode*)result_264)->_protocol_obj, 0, 1, 0); } 
                                    if(type_255 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_255, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(name_256 && !__freed_obj__) { name_256 = come_decrement_ref_count(name_256, (void*)0, (void*)0, 0, 0, 0); }
                                    if(word_253 && !__freed_obj__) { word_253 = come_decrement_ref_count(word_253, (void*)0, (void*)0, 0, 0, 0); }
                                    return __result155__;
                                    if(buf2_258 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf2_258, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(array_initializer_262 && !__freed_obj__) { array_initializer_262 = come_decrement_ref_count(array_initializer_262, (void*)0, (void*)0, 0, 0, 0); }
                                    if(result_264 && !__freed_obj__) { result_264 = come_decrement_ref_count(result_264, ((struct sNode*)result_264)->finalize, ((struct sNode*)result_264)->_protocol_obj, 0, 0, 0); } 
                                }
                                else {
                                    parse_sharp_v5(info);
                                    right_value_265=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value354=expression_v13(info))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value354);
                                    if(right_value354 && right_value354 != __result_obj__ && !__freed_obj__) { right_value354 = come_decrement_ref_count(right_value354, ((struct sNode*)right_value354)->finalize, ((struct sNode*)right_value354)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value354, right_value354 = (void*)0;
                                    __freed_obj__ = 0;
                                    parse_sharp_v5(info);
                                    right_values_266=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value356=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value355=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "07var.c", 1177, "struct list$1sNodeph"))))))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value355);
                                    if(right_value355 && right_value355 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value355, right_value355 = (void*)0;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value356);
                                    if(right_value356 && right_value356 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value356, right_value356 = (void*)0;
                                    __freed_obj__ = 0;
                                    while(_while_condtional25=*info->p==44,                                    _while_condtional25) {
                                        if(anonymous_var_nameX2030_267 && !__freed_obj__) { anonymous_var_nameX2030_267 = come_decrement_ref_count(anonymous_var_nameX2030_267, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                    __dec_obj160=right_value_265;
                                    right_value_265=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value357=post_position_operator3_v21((struct sNode*)come_increment_ref_count(right_value_265),info))));
                                    if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value357);
                                    if(right_value357 && right_value357 != __result_obj__ && !__freed_obj__) { right_value357 = come_decrement_ref_count(right_value357, ((struct sNode*)right_value357)->finalize, ((struct sNode*)right_value357)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value357, right_value357 = (void*)0;
                                    __freed_obj__ = 0;
                                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1184, "struct sNode");
                                    _inf_obj_value9=come_increment_ref_count(((struct sStoreNode*)(right_value359=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value358=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1184, "struct sStoreNode")))),(char*)come_increment_ref_count(name_256),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_255),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_265),((void*)0),info))));
                                    _inf_value9->_protocol_obj=_inf_obj_value9;
                                    _inf_value9->finalize=(void*)sStoreNode_finalize;
                                    _inf_value9->clone=(void*)sStoreNode_clone;
                                    _inf_value9->compile=(void*)sStoreNode_compile;
                                    _inf_value9->sline=(void*)sStoreNode_sline;
                                    _inf_value9->sname=(void*)sStoreNode_sname;
                                    _inf_value9->terminated=(void*)sStoreNode_terminated;
                                    _inf_value9->kind=(void*)sStoreNode_kind;
                                    result_269=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value368=_inf_value9)));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value358);
                                    if(right_value358 && right_value358 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value358, right_value358 = (void*)0;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value359);
                                    if(right_value359 && right_value359 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value359, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value359, right_value359 = (void*)0;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value368);
                                    if(right_value368 && right_value368 != __result_obj__ && !__freed_obj__) { right_value368 = come_decrement_ref_count(right_value368, ((struct sNode*)right_value368)->finalize, ((struct sNode*)right_value368)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[2] = right_value368, right_value368 = (void*)0;
                                    __freed_obj__ = 0;
                                    __result158__ = __result_obj__ = result_269;
                                    if(right_value_265 && !__freed_obj__) { right_value_265 = come_decrement_ref_count(right_value_265, ((struct sNode*)right_value_265)->finalize, ((struct sNode*)right_value_265)->_protocol_obj, 0, 0, 0); } 
                                    if(right_values_266 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_values_266, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(result_269 && !__freed_obj__) { result_269 = come_decrement_ref_count(result_269, ((struct sNode*)result_269)->finalize, ((struct sNode*)result_269)->_protocol_obj, 0, 1, 0); } 
                                    if(type_255 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_255, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(name_256 && !__freed_obj__) { name_256 = come_decrement_ref_count(name_256, (void*)0, (void*)0, 0, 0, 0); }
                                    if(word_253 && !__freed_obj__) { word_253 = come_decrement_ref_count(word_253, (void*)0, (void*)0, 0, 0, 0); }
                                    return __result158__;
                                    if(right_value_265 && !__freed_obj__) { right_value_265 = come_decrement_ref_count(right_value_265, ((struct sNode*)right_value_265)->finalize, ((struct sNode*)right_value_265)->_protocol_obj, 0, 0, 0); } 
                                    if(right_values_266 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_values_266, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(result_269 && !__freed_obj__) { result_269 = come_decrement_ref_count(result_269, ((struct sNode*)result_269)->finalize, ((struct sNode*)result_269)->_protocol_obj, 0, 0, 0); } 
                                }
                            }
                            else {
                                _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1192, "struct sNode");
                                _inf_obj_value10=come_increment_ref_count(((struct sStoreNode*)(right_value370=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value369=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1192, "struct sStoreNode")))),(char*)come_increment_ref_count(name_256),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_255),(_Bool)1,((void*)0),((void*)0),info))));
                                _inf_value10->_protocol_obj=_inf_obj_value10;
                                _inf_value10->finalize=(void*)sStoreNode_finalize;
                                _inf_value10->clone=(void*)sStoreNode_clone;
                                _inf_value10->compile=(void*)sStoreNode_compile;
                                _inf_value10->sline=(void*)sStoreNode_sline;
                                _inf_value10->sname=(void*)sStoreNode_sname;
                                _inf_value10->terminated=(void*)sStoreNode_terminated;
                                _inf_value10->kind=(void*)sStoreNode_kind;
                                result_271=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value379=_inf_value10)));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value369);
                                if(right_value369 && right_value369 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value369, right_value369 = (void*)0;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value370);
                                if(right_value370 && right_value370 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value370, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value370, right_value370 = (void*)0;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value379);
                                if(right_value379 && right_value379 != __result_obj__ && !__freed_obj__) { right_value379 = come_decrement_ref_count(right_value379, ((struct sNode*)right_value379)->finalize, ((struct sNode*)right_value379)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[2] = right_value379, right_value379 = (void*)0;
                                __freed_obj__ = 0;
                                __result161__ = __result_obj__ = result_271;
                                if(result_271 && !__freed_obj__) { result_271 = come_decrement_ref_count(result_271, ((struct sNode*)result_271)->finalize, ((struct sNode*)result_271)->_protocol_obj, 0, 1, 0); } 
                                if(type_255 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_255, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(name_256 && !__freed_obj__) { name_256 = come_decrement_ref_count(name_256, (void*)0, (void*)0, 0, 0, 0); }
                                if(word_253 && !__freed_obj__) { word_253 = come_decrement_ref_count(word_253, (void*)0, (void*)0, 0, 0, 0); }
                                return __result161__;
                                if(result_271 && !__freed_obj__) { result_271 = come_decrement_ref_count(result_271, ((struct sNode*)result_271)->finalize, ((struct sNode*)result_271)->_protocol_obj, 0, 0, 0); } 
                            }
                            if(type_255 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_255, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(name_256 && !__freed_obj__) { name_256 = come_decrement_ref_count(name_256, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        if(word_253 && !__freed_obj__) { word_253 = come_decrement_ref_count(word_253, (void*)0, (void*)0, 0, 0, 0); }
                    }
                }
            }
        }
    }
    __result162__ = __result_obj__ = ((struct sNode*)(right_value380=string_node_v5(buf,head,head_sline,info)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value380);
    if(right_value380 && right_value380 != __result_obj__ && !__freed_obj__) { right_value380 = come_decrement_ref_count(right_value380, ((struct sNode*)right_value380)->finalize, ((struct sNode*)right_value380)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value380, right_value380 = (void*)0;
    __freed_obj__ = 0;
    return __result162__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional317;
_Bool _if_conditional318;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional317=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional317) {
                if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional318=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional318) {
                if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional326;
void* right_value246;
struct list_item$1charph* litem_213;
char* __dec_obj107;
_Bool _if_conditional327;
void* right_value247;
struct list_item$1charph* litem_214;
char* __dec_obj108;
void* right_value248;
struct list_item$1charph* litem_215;
char* __dec_obj109;
struct list$1charph* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value246 = (void*)0;
memset(&litem_213, 0, sizeof(struct list_item$1charph*));
right_value247 = (void*)0;
memset(&litem_214, 0, sizeof(struct list_item$1charph*));
right_value248 = (void*)0;
memset(&litem_215, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional326=self->len==0,                _if_conditional326) {
                    litem_213=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value246=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 282, "struct list_item$1charph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value246);
                    if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value246, right_value246 = (void*)0;
                    __freed_obj__ = 0;
                    litem_213->prev=((void*)0);
                    litem_213->next=((void*)0);
                    __dec_obj107=litem_213->item;
                    litem_213->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0,0); }
                    self->tail=litem_213;
                    self->head=litem_213;
                }
                else {
                    if(_if_conditional327=self->len==1,                    _if_conditional327) {
                        litem_214=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value247=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 292, "struct list_item$1charph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value247);
                        if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value247, right_value247 = (void*)0;
                        __freed_obj__ = 0;
                        litem_214->prev=self->head;
                        litem_214->next=((void*)0);
                        __dec_obj108=litem_214->item;
                        litem_214->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0,0); }
                        self->tail=litem_214;
                        self->head->next=litem_214;
                    }
                    else {
                        litem_215=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value248=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 302, "struct list_item$1charph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value248);
                        if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value248, right_value248 = (void*)0;
                        __freed_obj__ = 0;
                        litem_215->prev=self->tail;
                        litem_215->next=((void*)0);
                        __dec_obj109=litem_215->item;
                        litem_215->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0,0); }
                        self->tail->next=litem_215;
                        self->tail=litem_215;
                    }
                }
                self->len++;
                __result134__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                return __result134__;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional347;
_Bool _if_conditional348;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional347=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional347) {
                    if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional348=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional348) {
                    if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* __dec_obj118;
char* __dec_obj119;
struct tuple3$3sTypephcharphvoidp* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __dec_obj118=self->v1;
                self->v1=(struct sType*)come_increment_ref_count(v1);
                if(__dec_obj118) { come_call_finalizer(sType_finalize,__dec_obj118, (void*)0, (void*)0, 0, 0, 0, 0); }
                __dec_obj119=self->v2;
                self->v2=(char*)come_increment_ref_count(v2);
                if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0,0,0); }
                self->v3=v3;
                __result138__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphvoidpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
                return __result138__;
                if(self && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphvoidpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
}

static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional349;
_Bool _if_conditional350;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional349=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional349) {
                        if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional350=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional350) {
                        if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional351;
void* right_value272;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_227;
struct tuple3$3sTypephcharphsNodeph* __dec_obj120;
_Bool _if_conditional352;
void* right_value273;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_228;
struct tuple3$3sTypephcharphsNodeph* __dec_obj121;
void* right_value274;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_229;
struct tuple3$3sTypephcharphsNodeph* __dec_obj122;
struct list$1tuple3$3sTypephcharphsNodephph* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value272 = (void*)0;
memset(&litem_227, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value273 = (void*)0;
memset(&litem_228, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value274 = (void*)0;
memset(&litem_229, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                if(_if_conditional351=self->len==0,                _if_conditional351) {
                    litem_227=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value272=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 282, "struct list_item$1tuple3$3sTypephcharphsNodephph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value272);
                    if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value272, right_value272 = (void*)0;
                    __freed_obj__ = 0;
                    litem_227->prev=((void*)0);
                    litem_227->next=((void*)0);
                    __dec_obj120=litem_227->item;
                    litem_227->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                    if(__dec_obj120) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj120, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->tail=litem_227;
                    self->head=litem_227;
                }
                else {
                    if(_if_conditional352=self->len==1,                    _if_conditional352) {
                        litem_228=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value273=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 292, "struct list_item$1tuple3$3sTypephcharphsNodephph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value273);
                        if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value273, right_value273 = (void*)0;
                        __freed_obj__ = 0;
                        litem_228->prev=self->head;
                        litem_228->next=((void*)0);
                        __dec_obj121=litem_228->item;
                        litem_228->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        if(__dec_obj121) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj121, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail=litem_228;
                        self->head->next=litem_228;
                    }
                    else {
                        litem_229=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value274=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 302, "struct list_item$1tuple3$3sTypephcharphsNodephph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value274);
                        if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value274, right_value274 = (void*)0;
                        __freed_obj__ = 0;
                        litem_229->prev=self->tail;
                        litem_229->next=((void*)0);
                        __dec_obj122=litem_229->item;
                        litem_229->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        if(__dec_obj122) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj122, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail->next=litem_229;
                        self->tail=litem_229;
                    }
                }
                self->len++;
                __result139__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result139__;
                if(item && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* __dec_obj130;
char* __dec_obj131;
struct sNode* __dec_obj132;
struct tuple3$3sTypephcharphsNodeph* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __dec_obj130=self->v1;
                        self->v1=(struct sType*)come_increment_ref_count(v1);
                        if(__dec_obj130) { come_call_finalizer(sType_finalize,__dec_obj130, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __dec_obj131=self->v2;
                        self->v2=(char*)come_increment_ref_count(v2);
                        if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0,0,0); }
                        __dec_obj132=self->v3;
                        self->v3=(struct sNode*)come_increment_ref_count(v3);
                        if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0,0); }
                        __result143__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
                        if(v3 && !__freed_obj__) { v3 = come_decrement_ref_count(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 1, 0); } 
                        return __result143__;
                        if(self && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
                        if(v3 && !__freed_obj__) { v3 = come_decrement_ref_count(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 1, 0); } 
}

static void sLoadNode_finalize(struct sLoadNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional409;
_Bool _if_conditional410;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional409=self!=((void*)0)&&self->name!=((void*)0),                            _if_conditional409) {
                                if(self->name && !__freed_obj__) { self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            if(_if_conditional410=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional410) {
                                if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                            }
}

static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional411;
struct sLoadNode* __result150__;
void* right_value331;
struct sLoadNode* result_251;
_Bool _if_conditional412;
void* right_value332;
char* __dec_obj148;
_Bool _if_conditional413;
_Bool _if_conditional414;
void* right_value333;
char* __dec_obj149;
struct sLoadNode* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value331 = (void*)0;
memset(&result_251, 0, sizeof(struct sLoadNode*));
right_value332 = (void*)0;
right_value333 = (void*)0;
                            if(_if_conditional411=self==(void*)0,                            _if_conditional411) {
                                __result150__ = __result_obj__ = (void*)0;
                                return __result150__;
                            }
                            result_251=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value331=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "sLoadNode_clone", 3, "struct sLoadNode"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value331);
                            if(right_value331 && right_value331 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value331, right_value331 = (void*)0;
                            __freed_obj__ = 0;
                            if(_if_conditional412=self!=((void*)0)&&self->name!=((void*)0),                            _if_conditional412) {
                                __dec_obj148=result_251->name;
                                result_251->name=(char*)come_increment_ref_count(((char*)(right_value332=string_clone(self->name))));
                                if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value332);
                                if(right_value332 && right_value332 != __result_obj__ && !__freed_obj__) { right_value332 = come_decrement_ref_count(right_value332, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value332, right_value332 = (void*)0;
                                __freed_obj__ = 0;
                            }
                            if(_if_conditional413=self!=((void*)0),                            _if_conditional413) {
                                result_251->sline=self->sline;
                            }
                            if(_if_conditional414=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional414) {
                                __dec_obj149=result_251->sname;
                                result_251->sname=(char*)come_increment_ref_count(((char*)(right_value333=string_clone(self->sname))));
                                if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count(__dec_obj149, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value333);
                                if(right_value333 && right_value333 != __result_obj__ && !__freed_obj__) { right_value333 = come_decrement_ref_count(right_value333, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value333, right_value333 = (void*)0;
                                __freed_obj__ = 0;
                            }
                            __result151__ = __result_obj__ = result_251;
                            if(result_251 && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,result_251, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result151__;
                            if(result_251 && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,result_251, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sStoreNode_finalize(struct sStoreNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional462;
_Bool _if_conditional463;
_Bool _if_conditional464;
_Bool _if_conditional465;
_Bool _if_conditional466;
_Bool _if_conditional467;
_Bool _if_conditional468;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional462=self!=((void*)0)&&self->name!=((void*)0),                                    _if_conditional462) {
                                        if(self->name && !__freed_obj__) { self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                    if(_if_conditional463=self!=((void*)0)&&self->multiple_assign!=((void*)0),                                    _if_conditional463) {
                                        if(self->multiple_assign && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->multiple_assign, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
                                    if(_if_conditional464=self!=((void*)0)&&self->multiple_declare!=((void*)0),                                    _if_conditional464) {
                                        if(self->multiple_declare && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,self->multiple_declare, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
                                    if(_if_conditional465=self!=((void*)0)&&self->right_value!=((void*)0),                                    _if_conditional465) {
                                        if(self->right_value && !__freed_obj__) { self->right_value = come_decrement_ref_count(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    if(_if_conditional466=self!=((void*)0)&&self->type!=((void*)0),                                    _if_conditional466) {
                                        if(self->type && !__freed_obj__) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
                                    if(_if_conditional467=self!=((void*)0)&&self->array_initializer!=((void*)0),                                    _if_conditional467) {
                                        if(self->array_initializer && !__freed_obj__) { self->array_initializer = come_decrement_ref_count(self->array_initializer, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                    if(_if_conditional468=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional468) {
                                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    }
}

static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional469;
struct sStoreNode* __result159__;
void* right_value371;
struct sStoreNode* result_270;
_Bool _if_conditional470;
void* right_value372;
char* __dec_obj168;
_Bool _if_conditional471;
void* right_value373;
struct list$1charph* __dec_obj169;
_Bool _if_conditional472;
void* right_value374;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj170;
_Bool _if_conditional473;
void* right_value375;
struct sNode* __dec_obj171;
_Bool _if_conditional474;
void* right_value376;
struct sType* __dec_obj172;
_Bool _if_conditional475;
void* right_value377;
char* __dec_obj173;
_Bool _if_conditional476;
_Bool _if_conditional477;
_Bool _if_conditional478;
void* right_value378;
char* __dec_obj174;
struct sStoreNode* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value371 = (void*)0;
memset(&result_270, 0, sizeof(struct sStoreNode*));
right_value372 = (void*)0;
right_value373 = (void*)0;
right_value374 = (void*)0;
right_value375 = (void*)0;
right_value376 = (void*)0;
right_value377 = (void*)0;
right_value378 = (void*)0;
                                    if(_if_conditional469=self==(void*)0,                                    _if_conditional469) {
                                        __result159__ = __result_obj__ = (void*)0;
                                        return __result159__;
                                    }
                                    result_270=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value371=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "sStoreNode_clone", 3, "struct sStoreNode"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value371);
                                    if(right_value371 && right_value371 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value371, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value371, right_value371 = (void*)0;
                                    __freed_obj__ = 0;
                                    if(_if_conditional470=self!=((void*)0)&&self->name!=((void*)0),                                    _if_conditional470) {
                                        __dec_obj168=result_270->name;
                                        result_270->name=(char*)come_increment_ref_count(((char*)(right_value372=string_clone(self->name))));
                                        if(__dec_obj168) { __dec_obj168 = come_decrement_ref_count(__dec_obj168, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value372);
                                        if(right_value372 && right_value372 != __result_obj__ && !__freed_obj__) { right_value372 = come_decrement_ref_count(right_value372, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value372, right_value372 = (void*)0;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional471=self!=((void*)0)&&self->multiple_assign!=((void*)0),                                    _if_conditional471) {
                                        __dec_obj169=result_270->multiple_assign;
                                        result_270->multiple_assign=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value373=list$1charphp_clone(self->multiple_assign))));
                                        if(__dec_obj169) { come_call_finalizer(list$1charph_finalize,__dec_obj169, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value373);
                                        if(right_value373 && right_value373 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value373, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value373, right_value373 = (void*)0;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional472=self!=((void*)0)&&self->multiple_declare!=((void*)0),                                    _if_conditional472) {
                                        __dec_obj170=result_270->multiple_declare;
                                        result_270->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value374=list$1tuple3$3sTypephcharphsNodephphp_clone(self->multiple_declare))));
                                        if(__dec_obj170) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephph_finalize,__dec_obj170, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value374);
                                        if(right_value374 && right_value374 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value374, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value374, right_value374 = (void*)0;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional473=self!=((void*)0)&&self->right_value!=((void*)0),                                    _if_conditional473) {
                                        __dec_obj171=result_270->right_value;
                                        result_270->right_value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value375=sNode_clone(self->right_value))));
                                        if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value375);
                                        if(right_value375 && right_value375 != __result_obj__ && !__freed_obj__) { right_value375 = come_decrement_ref_count(right_value375, ((struct sNode*)right_value375)->finalize, ((struct sNode*)right_value375)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value375, right_value375 = (void*)0;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional474=self!=((void*)0)&&self->type!=((void*)0),                                    _if_conditional474) {
                                        __dec_obj172=result_270->type;
                                        result_270->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value376=sType_clone(self->type))));
                                        if(__dec_obj172) { come_call_finalizer(sType_finalize,__dec_obj172, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value376);
                                        if(right_value376 && right_value376 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value376, right_value376 = (void*)0;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional475=self!=((void*)0)&&self->array_initializer!=((void*)0),                                    _if_conditional475) {
                                        __dec_obj173=result_270->array_initializer;
                                        result_270->array_initializer=(char*)come_increment_ref_count(((char*)(right_value377=string_clone(self->array_initializer))));
                                        if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count(__dec_obj173, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value377);
                                        if(right_value377 && right_value377 != __result_obj__ && !__freed_obj__) { right_value377 = come_decrement_ref_count(right_value377, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value377, right_value377 = (void*)0;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional476=self!=((void*)0),                                    _if_conditional476) {
                                        result_270->alloc=self->alloc;
                                    }
                                    if(_if_conditional477=self!=((void*)0),                                    _if_conditional477) {
                                        result_270->sline=self->sline;
                                    }
                                    if(_if_conditional478=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional478) {
                                        __dec_obj174=result_270->sname;
                                        result_270->sname=(char*)come_increment_ref_count(((char*)(right_value378=string_clone(self->sname))));
                                        if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count(__dec_obj174, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value378);
                                        if(right_value378 && right_value378 != __result_obj__ && !__freed_obj__) { right_value378 = come_decrement_ref_count(right_value378, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value378, right_value378 = (void*)0;
                                        __freed_obj__ = 0;
                                    }
                                    __result160__ = __result_obj__ = result_270;
                                    if(result_270 && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,result_270, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    return __result160__;
                                    if(result_270 && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,result_270, (void*)0, (void*)0, 0, 0, 0, 0); }
}

