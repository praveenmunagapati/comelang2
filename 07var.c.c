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
struct optional$2sVarpbool
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
struct optional$2sFunpbool
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
struct optional$2voidpbool
{
    void* v1;
    _Bool v2;
};
struct tuple3$3sTypephcharphvoidp
{
    struct sType* v1;
    char* v2;
    void* v3;
};
struct __current_stack1__
{
    int __method_block_result_kind__;
    void* __method_block_return_value__;
    char** buf;
    char** head;
    int* head_sline;
    struct sInfo** info;
    _Bool* is_type_name_flag_194;
    _Bool* multiple_declare_195;
    _Bool* multiple_declare2_201;
    struct sFun** fun_211;
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
static struct optional$2sVarpbool* optional$2sVarpbool_initialize(struct optional$2sVarpbool* self, struct sVar* v1, _Bool v2);
static void optional$2sVarpboolp_finalize(struct optional$2sVarpbool* self);
static char* optional$2charphbool_value(struct optional$2charphbool* self);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_begin(struct list$1tuple3$3sTypephcharphsNodephph* self);
static _Bool list$1tuple3$3sTypephcharphsNodephph_end(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_next(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void CVALUE_finalize(struct CVALUE* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static char* optional$2charphbool_expect(struct optional$2charphbool* self);
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
static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2);
static void optional$2sFunpboolp_finalize(struct optional$2sFunpbool* self);
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

static void sVar_finalize(struct sVar* self);
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

struct optional$2sNodephbool* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2);
static void optional$2sNodephboolp_finalize(struct optional$2sNodephbool* self);
static struct optional$2voidpbool* optional$2voidpbool_initialize(struct optional$2voidpbool* self, void* v1, _Bool v2);
static void optional$2voidpboolp_finalize(struct optional$2voidpbool* self);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3);
static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item);
static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3);
static void sLoadNode_finalize(struct sLoadNode* self);
static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self);
static void sStoreNode_finalize(struct sStoreNode* self);
static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self);
static struct sNode* optional$2sNodephbool_catch(struct optional$2sNodephbool* self, void* parent, void (*block)(void*));
void method_block1_07varc(struct __current_stack1__* parent);

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
memset(&right_value10, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
    __dec_obj6=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value10=__builtin_string(name))));
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
    if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value10;
    __freed_obj__ = 0;
    self->alloc=alloc;
    if(_if_conditional5=type,    _if_conditional5) {
        __dec_obj29=self->type;
        self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value45=sType_clone(type))));
        if(__dec_obj29) { come_call_finalizer(sType_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
        if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value45;
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
        __right_value_freed_obj[0] = right_value46;
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
        __right_value_freed_obj[0] = right_value57;
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
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value58);
    if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value58;
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
memset(&right_value11, 0, sizeof(void*));
memset(&result_5, 0, sizeof(struct sType*));
memset(&right_value14, 0, sizeof(void*));
memset(&right_value15, 0, sizeof(void*));
memset(&right_value16, 0, sizeof(void*));
memset(&right_value23, 0, sizeof(void*));
memset(&right_value31, 0, sizeof(void*));
memset(&right_value32, 0, sizeof(void*));
memset(&right_value39, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
memset(&right_value41, 0, sizeof(void*));
memset(&right_value42, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
            if(_if_conditional6=self==(void*)0,            _if_conditional6) {
                __result7__ = __result_obj__ = (void*)0;
                return __result7__;
            }
            result_5=(struct sType*)come_increment_ref_count(((struct sType*)(right_value11=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value11);
            if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value11;
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
                __right_value_freed_obj[0] = right_value14;
                __freed_obj__ = 0;
            }
            if(_if_conditional28=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional28) {
                __dec_obj9=result_5->mOriginalLoadVarType;
                result_5->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value15=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                if(__dec_obj9) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value15);
                if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value15;
                __freed_obj__ = 0;
            }
            if(_if_conditional29=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional29) {
                __dec_obj10=result_5->mGenericsName;
                result_5->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value16=string_clone(self->mGenericsName))));
                if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
                if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { right_value16 = come_decrement_ref_count(right_value16, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value16;
                __freed_obj__ = 0;
            }
            if(_if_conditional30=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional30) {
                __dec_obj14=result_5->mGenericsTypes;
                result_5->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value23=list$1sTypephp_clone(self->mGenericsTypes))));
                if(__dec_obj14) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
                if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value23;
                __freed_obj__ = 0;
            }
            if(_if_conditional34=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional34) {
                __dec_obj18=result_5->mArrayNum;
                result_5->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value31=list$1sNodephp_clone(self->mArrayNum))));
                if(__dec_obj18) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
                if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value31;
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
                __right_value_freed_obj[0] = right_value32;
                __freed_obj__ = 0;
            }
            if(_if_conditional49=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional49) {
                __dec_obj23=result_5->mParamNames;
                result_5->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value39=list$1charphp_clone(self->mParamNames))));
                if(__dec_obj23) { come_call_finalizer(list$1charph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
                if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value39;
                __freed_obj__ = 0;
            }
            if(_if_conditional53=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional53) {
                __dec_obj24=result_5->mResultType;
                result_5->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value40=tuple1$1sTypephp_clone(self->mResultType))));
                if(__dec_obj24) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
                if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value40;
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
                __right_value_freed_obj[0] = right_value41;
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
                __right_value_freed_obj[0] = right_value42;
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
                __right_value_freed_obj[0] = right_value43;
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
                __right_value_freed_obj[0] = right_value44;
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
memset(&right_value12, 0, sizeof(void*));
memset(&result_12, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value13, 0, sizeof(void*));
                    if(_if_conditional25=self==(void*)0,                    _if_conditional25) {
                        __result8__ = __result_obj__ = (void*)0;
                        return __result8__;
                    }
                    result_12=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value12=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
                    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value12;
                    __freed_obj__ = 0;
                    if(_if_conditional27=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional27) {
                        __dec_obj7=result_12->v1;
                        result_12->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value13=sType_clone(self->v1))));
                        if(__dec_obj7) { come_call_finalizer(sType_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value13);
                        if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value13;
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
memset(&right_value17, 0, sizeof(void*));
memset(&right_value18, 0, sizeof(void*));
memset(&result_13, 0, sizeof(struct list$1sTypeph*));
memset(&it_14, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value22, 0, sizeof(void*));
                    if(_if_conditional31=self==((void*)0),                    _if_conditional31) {
                        __result10__ = __result_obj__ = ((void*)0);
                        return __result10__;
                    }
                    result_13=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value18=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value17=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 195))))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value17);
                    if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value17;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value18);
                    if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value18;
                    __freed_obj__ = 0;
                    it_14=self->head;
                    while(_while_condtional4=it_14!=((void*)0),                    _while_condtional4) {
                        list$1sTypeph_add(result_13,(struct sType*)come_increment_ref_count(((struct sType*)(right_value22=sType_clone(it_14->item)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
                        if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value22;
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
memset(&right_value19, 0, sizeof(void*));
memset(&litem_15, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value20, 0, sizeof(void*));
memset(&litem_16, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value21, 0, sizeof(void*));
memset(&litem_17, 0, sizeof(struct list_item$1sTypeph*));
                            if(_if_conditional32=self->len==0,                            _if_conditional32) {
                                litem_15=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value19=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 209))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19);
                                if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value19;
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
                                    litem_16=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value20=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 219))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
                                    if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value20;
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
                                    litem_17=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value21=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 229))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
                                    if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value21;
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
memset(&right_value24, 0, sizeof(void*));
memset(&right_value25, 0, sizeof(void*));
memset(&result_18, 0, sizeof(struct list$1sNodeph*));
memset(&it_19, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value30, 0, sizeof(void*));
                    if(_if_conditional35=self==((void*)0),                    _if_conditional35) {
                        __result14__ = __result_obj__ = ((void*)0);
                        return __result14__;
                    }
                    result_18=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value25=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value24=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 195))))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value24);
                    if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value24;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value25);
                    if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value25;
                    __freed_obj__ = 0;
                    it_19=self->head;
                    while(_while_condtional5=it_19!=((void*)0),                    _while_condtional5) {
                        list$1sNodeph_add(result_18,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value30=sNode_clone(it_19->item)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
                        if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { right_value30 = come_decrement_ref_count(right_value30, ((struct sNode*)right_value30)->finalize, ((struct sNode*)right_value30)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value30;
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
memset(&right_value26, 0, sizeof(void*));
memset(&litem_20, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value27, 0, sizeof(void*));
memset(&litem_21, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value28, 0, sizeof(void*));
memset(&litem_22, 0, sizeof(struct list_item$1sNodeph*));
                            if(_if_conditional36=self->len==0,                            _if_conditional36) {
                                litem_20=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value26=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 209))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value26);
                                if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value26;
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
                                    litem_21=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value27=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 219))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
                                    if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value27;
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
                                    litem_22=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value28=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 229))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
                                    if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value28;
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
memset(&right_value29, 0, sizeof(void*));
memset(&result_23, 0, sizeof(struct sNode*));
                            if(_if_conditional38=self==(void*)0,                            _if_conditional38) {
                                __result17__ = __result_obj__ = (void*)0;
                                return __result17__;
                            }
                            result_23=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
                            if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { right_value29 = come_decrement_ref_count(right_value29, ((struct sNode*)right_value29)->finalize, ((struct sNode*)right_value29)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value29;
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
memset(&right_value33, 0, sizeof(void*));
memset(&right_value34, 0, sizeof(void*));
memset(&result_24, 0, sizeof(struct list$1charph*));
memset(&it_25, 0, sizeof(struct list_item$1charph*));
memset(&right_value38, 0, sizeof(void*));
                    if(_if_conditional50=self==((void*)0),                    _if_conditional50) {
                        __result20__ = __result_obj__ = ((void*)0);
                        return __result20__;
                    }
                    result_24=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value34=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value33=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 195))))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value33);
                    if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value33;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value34);
                    if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value34;
                    __freed_obj__ = 0;
                    it_25=self->head;
                    while(_while_condtional6=it_25!=((void*)0),                    _while_condtional6) {
                        list$1charph_add(result_24,(char*)come_increment_ref_count(((char*)(right_value38=string_clone(it_25->item)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
                        if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { right_value38 = come_decrement_ref_count(right_value38, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value38;
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
memset(&right_value35, 0, sizeof(void*));
memset(&litem_26, 0, sizeof(struct list_item$1charph*));
memset(&right_value36, 0, sizeof(void*));
memset(&litem_27, 0, sizeof(struct list_item$1charph*));
memset(&right_value37, 0, sizeof(void*));
memset(&litem_28, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional51=self->len==0,                            _if_conditional51) {
                                litem_26=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value35=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 209))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
                                if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value35;
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
                                    litem_27=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value36=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 219))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
                                    if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value36;
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
                                    litem_28=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value37=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 229))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
                                    if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value37;
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
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
memset(&result_31, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
memset(&it_32, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&right_value56, 0, sizeof(void*));
            if(_if_conditional94=self==((void*)0),            _if_conditional94) {
                __result25__ = __result_obj__ = ((void*)0);
                return __result25__;
            }
            result_31=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value48=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value47=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 195))))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value47);
            if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value47;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value48);
            if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value48;
            __freed_obj__ = 0;
            it_32=self->head;
            while(_while_condtional8=it_32!=((void*)0),            _while_condtional8) {
                list$1tuple3$3sTypephcharphsNodephph_add(result_31,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value56=tuple3$3sTypephcharphsNodephp_clone(it_32->item)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
                if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value56;
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
memset(&right_value49, 0, sizeof(void*));
memset(&litem_33, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&right_value50, 0, sizeof(void*));
memset(&litem_34, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&right_value51, 0, sizeof(void*));
memset(&litem_35, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                    if(_if_conditional99=self->len==0,                    _if_conditional99) {
                        litem_33=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value49=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 209))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49);
                        if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value49;
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
                            litem_34=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value50=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 219))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50);
                            if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value50;
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
                            litem_35=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value51=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 229))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
                            if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value51;
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
memset(&right_value52, 0, sizeof(void*));
memset(&result_36, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&right_value53, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
                    if(_if_conditional104=self==(void*)0,                    _if_conditional104) {
                        __result28__ = __result_obj__ = (void*)0;
                        return __result28__;
                    }
                    result_36=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value52=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "tuple3$3sTypephcharphsNodephp_clone", 3))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52);
                    if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value52;
                    __freed_obj__ = 0;
                    if(_if_conditional105=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional105) {
                        __dec_obj37=result_36->v1;
                        result_36->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value53=sType_clone(self->v1))));
                        if(__dec_obj37) { come_call_finalizer(sType_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
                        if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value53;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional106=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional106) {
                        __dec_obj38=result_36->v2;
                        result_36->v2=(char*)come_increment_ref_count(((char*)(right_value54=string_clone(self->v2))));
                        if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
                        if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { right_value54 = come_decrement_ref_count(right_value54, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value54;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional107=self!=((void*)0)&&self->v3!=((void*)0),                    _if_conditional107) {
                        __dec_obj39=result_36->v3;
                        result_36->v3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value55=sNode_clone(self->v3))));
                        if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
                        if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, ((struct sNode*)right_value55)->finalize, ((struct sNode*)right_value55)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value55;
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
memset(&right_value59, 0, sizeof(void*));
    __result33__ = __result_obj__ = ((char*)(right_value59=__builtin_string("sStoreNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59);
    if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value59;
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
struct sVar* var__42;
_Bool _if_conditional121;
_Bool __result41__;
_Bool _if_conditional122;
_Bool __result42__;
void* right_value64;
struct sType* type_43;
void* right_value65;
void* right_value66;
struct sType* var_type_44;
void* right_value67;
_Bool _if_conditional125;
struct sVar* var__46;
_Bool _if_conditional126;
_Bool __result45__;
_Bool _if_conditional127;
_Bool __result46__;
void* right_value68;
struct sType* type_47;
_Bool _if_conditional128;
struct list$1tuple3$3sTypephcharphsNodephph* o2_saved_48;
struct tuple3$3sTypephcharphsNodeph* it_51;
_Bool _for_condtionalA1;
struct tuple3$3sTypephcharphsNodeph* multiple_assgin_var1;
struct sType* type_54;
char* var_name_55;
struct sNode* right_value_56;
void* right_value69;
_Bool _if_conditional133;
_Bool __result54__;
void* right_value70;
struct sType* left_type_57;
void* right_value71;
_Bool _if_conditional134;
_Bool _if_conditional135;
_Bool __result55__;
void* right_value72;
struct CVALUE* come_value_58;
void* right_value73;
struct sType* left_type2_59;
_Bool _if_conditional138;
_Bool _if_conditional139;
void* right_value74;
struct list$1sNodeph* o2_saved_60;
struct sNode* it_63;
_Bool _for_condtionalA2;
_Bool _if_conditional145;
void* right_value75;
struct CVALUE* come_value_66;
void* right_value76;
void* right_value77;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool __result65__;
void* right_value78;
struct sType* left_type_67;
_Bool _if_conditional148;
void* right_value79;
_Bool _if_conditional149;
_Bool _if_conditional150;
void* right_value80;
struct list$1sNodeph* o2_saved_68;
struct sNode* it_69;
_Bool _for_condtionalA3;
_Bool _if_conditional151;
void* right_value81;
struct CVALUE* come_value_70;
void* right_value82;
void* right_value83;
struct sType* left_type2_71;
_Bool _if_conditional152;
_Bool _if_conditional153;
void* right_value84;
struct list$1sNodeph* o2_saved_72;
struct sNode* it_73;
_Bool _for_condtionalA4;
_Bool _if_conditional154;
void* right_value85;
struct CVALUE* come_value_74;
void* right_value86;
void* right_value87;
struct CVALUE* come_value_75;
void* right_value88;
char* __dec_obj44;
void* right_value89;
struct sType* __dec_obj45;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool __result67__;
void* right_value93;
struct CVALUE* right_value_79;
struct sType* right_type_80;
_Bool _if_conditional160;
_Bool _if_conditional161;
_Bool _if_conditional162;
struct sVar* var__81;
_Bool _if_conditional163;
_Bool __result68__;
_Bool _if_conditional164;
int i_82;
struct list$1charph* o2_saved_83;
char* it_86;
_Bool _for_condtionalA5;
_Bool _if_conditional169;
struct sType* right_type2_92;
void* right_value94;
void* right_value95;
struct sType* var_type_93;
_Bool _if_conditional172;
_Bool _if_conditional173;
void* right_value96;
struct list$1sNodeph* o2_saved_94;
struct sNode* it_95;
_Bool _for_condtionalA6;
_Bool _if_conditional174;
void* right_value97;
struct CVALUE* come_value_96;
void* right_value98;
_Bool _if_conditional175;
void* right_value99;
void* right_value100;
struct sType* type_97;
void* right_value101;
void* right_value102;
struct sType* var_type_98;
_Bool _if_conditional176;
_Bool _if_conditional177;
void* right_value103;
struct list$1sNodeph* o2_saved_99;
struct sNode* it_100;
_Bool _for_condtionalA7;
_Bool _if_conditional178;
void* right_value104;
struct CVALUE* come_value_101;
void* right_value105;
struct sClass* current_stack_frame_struct_102;
_Bool _if_conditional179;
struct sVar* parent_var_103;
_Bool _if_conditional180;
_Bool _if_conditional181;
void* right_value106;
struct CVALUE* come_value_104;
struct sType* left_type_105;
_Bool _if_conditional182;
void* right_value107;
char* c_value_106;
void* right_value108;
char* __dec_obj49;
int right_value_id_107;
_Bool _if_conditional183;
_Bool _if_conditional184;
void* right_value109;
char* c_value_108;
void* right_value110;
char* __dec_obj50;
void* right_value111;
char* __dec_obj51;
void* right_value112;
struct sType* __dec_obj52;
void* right_value113;
void* right_value114;
_Bool __result79__;
_Bool _if_conditional185;
static int num_multiple_var_109=0;
void* right_value115;
char* multiple_var_name_110;
void* right_value116;
void* right_value117;
char* __dec_obj53;
int i_111;
struct list$1charph* o2_saved_112;
char* it_113;
_Bool _for_condtionalA8;
_Bool _if_conditional186;
void* right_value118;
struct sType* right_type2_114;
struct sVar* var__115;
void* right_value119;
struct sType* var_type_116;
_Bool _if_conditional187;
_Bool _if_conditional188;
void* right_value120;
struct list$1sNodeph* o2_saved_117;
struct sNode* it_118;
_Bool _for_condtionalA9;
_Bool _if_conditional189;
void* right_value121;
struct CVALUE* come_value_119;
void* right_value122;
void* right_value123;
struct sType* left_type_120;
void* right_value124;
struct CVALUE* right_value2_121;
void* right_value125;
char* __dec_obj54;
void* right_value126;
struct sType* __dec_obj55;
void* right_value127;
struct CVALUE* come_value_122;
void* right_value128;
void* right_value129;
_Bool _if_conditional190;
_Bool _if_conditional191;
void* right_value130;
char* __dec_obj56;
int right_value_id_123;
_Bool _if_conditional192;
void* right_value131;
char* __dec_obj57;
void* right_value132;
struct sType* __dec_obj58;
_Bool _if_conditional193;
void* right_value133;
struct sVar* var__124;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool __result80__;
_Bool _if_conditional196;
void* right_value134;
struct sType* __dec_obj59;
void* right_value135;
struct sType* left_type_125;
void* right_value136;
struct CVALUE* come_value_126;
_Bool _if_conditional197;
void* right_value137;
void* right_value138;
void* right_value139;
void* right_value140;
char* __dec_obj60;
_Bool _if_conditional198;
void* right_value141;
void* right_value142;
_Bool _if_conditional199;
void* right_value143;
void* right_value144;
char* __dec_obj61;
_Bool _if_conditional200;
void* right_value145;
void* right_value146;
_Bool _if_conditional201;
void* right_value147;
char* __dec_obj62;
void* right_value148;
char* __dec_obj63;
int right_value_id_127;
_Bool _if_conditional202;
void* right_value149;
struct sType* __dec_obj64;
_Bool _if_conditional203;
void* right_value150;
void* right_value151;
_Bool _if_conditional204;
void* right_value152;
char* __dec_obj65;
void* right_value153;
char* __dec_obj66;
void* right_value154;
struct sType* __dec_obj67;
_Bool _if_conditional205;
_Bool _if_conditional206;
_Bool _if_conditional207;
_Bool __result81__;
void* right_value155;
void* right_value156;
void* right_value157;
char* __dec_obj68;
void* right_value158;
struct sType* __dec_obj69;
_Bool _if_conditional208;
_Bool _if_conditional209;
void* right_value159;
void* right_value160;
_Bool __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value60, 0, sizeof(void*));
memset(&array_initializer_37, 0, sizeof(char*));
memset(&var__42, 0, sizeof(struct sVar*));
memset(&right_value64, 0, sizeof(void*));
memset(&type_43, 0, sizeof(struct sType*));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&var_type_44, 0, sizeof(struct sType*));
memset(&right_value67, 0, sizeof(void*));
memset(&var__46, 0, sizeof(struct sVar*));
memset(&right_value68, 0, sizeof(void*));
memset(&type_47, 0, sizeof(struct sType*));
memset(&o2_saved_48, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
memset(&it_51, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&type_54, 0, sizeof(struct sType*));
memset(&var_name_55, 0, sizeof(char*));
memset(&right_value_56, 0, sizeof(struct sNode*));
memset(&type_54, 0, sizeof(struct sType*));
memset(&var_name_55, 0, sizeof(char*));
memset(&right_value_56, 0, sizeof(struct sNode*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&left_type_57, 0, sizeof(struct sType*));
memset(&right_value71, 0, sizeof(void*));
memset(&right_value72, 0, sizeof(void*));
memset(&come_value_58, 0, sizeof(struct CVALUE*));
memset(&right_value73, 0, sizeof(void*));
memset(&left_type2_59, 0, sizeof(struct sType*));
memset(&right_value74, 0, sizeof(void*));
memset(&o2_saved_60, 0, sizeof(struct list$1sNodeph*));
memset(&it_63, 0, sizeof(struct sNode*));
memset(&right_value75, 0, sizeof(void*));
memset(&come_value_66, 0, sizeof(struct CVALUE*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&left_type_67, 0, sizeof(struct sType*));
memset(&right_value79, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
memset(&o2_saved_68, 0, sizeof(struct list$1sNodeph*));
memset(&it_69, 0, sizeof(struct sNode*));
memset(&right_value81, 0, sizeof(void*));
memset(&come_value_70, 0, sizeof(struct CVALUE*));
memset(&right_value82, 0, sizeof(void*));
memset(&right_value83, 0, sizeof(void*));
memset(&left_type2_71, 0, sizeof(struct sType*));
memset(&right_value84, 0, sizeof(void*));
memset(&o2_saved_72, 0, sizeof(struct list$1sNodeph*));
memset(&it_73, 0, sizeof(struct sNode*));
memset(&right_value85, 0, sizeof(void*));
memset(&come_value_74, 0, sizeof(struct CVALUE*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
memset(&come_value_75, 0, sizeof(struct CVALUE*));
memset(&right_value88, 0, sizeof(void*));
memset(&right_value89, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value_79, 0, sizeof(struct CVALUE*));
memset(&right_type_80, 0, sizeof(struct sType*));
memset(&var__81, 0, sizeof(struct sVar*));
memset(&i_82, 0, sizeof(int));
memset(&o2_saved_83, 0, sizeof(struct list$1charph*));
memset(&it_86, 0, sizeof(char*));
memset(&right_type2_92, 0, sizeof(struct sType*));
memset(&right_value94, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
memset(&var_type_93, 0, sizeof(struct sType*));
memset(&right_value96, 0, sizeof(void*));
memset(&o2_saved_94, 0, sizeof(struct list$1sNodeph*));
memset(&it_95, 0, sizeof(struct sNode*));
memset(&right_value97, 0, sizeof(void*));
memset(&come_value_96, 0, sizeof(struct CVALUE*));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&type_97, 0, sizeof(struct sType*));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
memset(&var_type_98, 0, sizeof(struct sType*));
memset(&right_value103, 0, sizeof(void*));
memset(&o2_saved_99, 0, sizeof(struct list$1sNodeph*));
memset(&it_100, 0, sizeof(struct sNode*));
memset(&right_value104, 0, sizeof(void*));
memset(&come_value_101, 0, sizeof(struct CVALUE*));
memset(&right_value105, 0, sizeof(void*));
memset(&current_stack_frame_struct_102, 0, sizeof(struct sClass*));
memset(&parent_var_103, 0, sizeof(struct sVar*));
memset(&right_value106, 0, sizeof(void*));
memset(&come_value_104, 0, sizeof(struct CVALUE*));
memset(&left_type_105, 0, sizeof(struct sType*));
memset(&right_value107, 0, sizeof(void*));
memset(&c_value_106, 0, sizeof(char*));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value_id_107, 0, sizeof(int));
memset(&right_value109, 0, sizeof(void*));
memset(&c_value_108, 0, sizeof(char*));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&right_value115, 0, sizeof(void*));
memset(&multiple_var_name_110, 0, sizeof(char*));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
memset(&i_111, 0, sizeof(int));
memset(&o2_saved_112, 0, sizeof(struct list$1charph*));
memset(&it_113, 0, sizeof(char*));
memset(&right_value118, 0, sizeof(void*));
memset(&right_type2_114, 0, sizeof(struct sType*));
memset(&var__115, 0, sizeof(struct sVar*));
memset(&right_value119, 0, sizeof(void*));
memset(&var_type_116, 0, sizeof(struct sType*));
memset(&right_value120, 0, sizeof(void*));
memset(&o2_saved_117, 0, sizeof(struct list$1sNodeph*));
memset(&it_118, 0, sizeof(struct sNode*));
memset(&right_value121, 0, sizeof(void*));
memset(&come_value_119, 0, sizeof(struct CVALUE*));
memset(&right_value122, 0, sizeof(void*));
memset(&right_value123, 0, sizeof(void*));
memset(&left_type_120, 0, sizeof(struct sType*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value2_121, 0, sizeof(struct CVALUE*));
memset(&right_value125, 0, sizeof(void*));
memset(&right_value126, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
memset(&come_value_122, 0, sizeof(struct CVALUE*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
memset(&right_value_id_123, 0, sizeof(int));
memset(&right_value131, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&var__124, 0, sizeof(struct sVar*));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value135, 0, sizeof(void*));
memset(&left_type_125, 0, sizeof(struct sType*));
memset(&right_value136, 0, sizeof(void*));
memset(&come_value_126, 0, sizeof(struct CVALUE*));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value_id_127, 0, sizeof(int));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&right_value151, 0, sizeof(void*));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
    array_initializer_37=(char*)come_increment_ref_count(((char*)(right_value60=string_clone(self->array_initializer))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value60);
    if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value60;
    __freed_obj__ = 0;
    if(_if_conditional115=array_initializer_37,    _if_conditional115) {
        var__42=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name);
        if(_if_conditional121=var__42,        _if_conditional121) {
            err_msg(info,"Already appended this var name(%s)(2)",self->name);
            __result41__ = (_Bool)0;
            if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
            return __result41__;
        }
        if(_if_conditional122=self->type==((void*)0),        _if_conditional122) {
            err_msg(info,"Require type name(%s)",self->name);
            __result42__ = (_Bool)0;
            if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
            return __result42__;
        }
        else {
            type_43=(struct sType*)come_increment_ref_count(((struct sType*)(right_value64=solve_generics(self->type,info->generics_type,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64);
            if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value64;
            __freed_obj__ = 0;
            type_43->mFunctionParam=(_Bool)0;
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value65=sType_clone(type_43)))),info);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value65);
            if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value65;
            __freed_obj__ = 0;
            if(type_43 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_43, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        var__42=get_variable_from_table(info->lv_table,self->name);
        var_type_44=(struct sType*)come_increment_ref_count(((struct sType*)(right_value66=sType_clone(var__42->mType))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
        if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value66;
        __freed_obj__ = 0;
        var_type_44->mStatic=(_Bool)0;
        add_come_code(info,"%s=%s;\n",optional$2charphbool_value(((struct optional$2charphbool*)(right_value67=make_define_var(var_type_44,var__42->mCValueName,(_Bool)0,info)))),array_initializer_37);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value67);
        if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value67;
        __freed_obj__ = 0;
        if(var_type_44 && !__freed_obj__) { come_call_finalizer(sType_finalize,var_type_44, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        if(_if_conditional125=self->right_value==((void*)0),        _if_conditional125) {
            var__46=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name);
            if(_if_conditional126=var__46,            _if_conditional126) {
                err_msg(info,"Already appended this var name(%s)(1)",self->name);
                __result45__ = (_Bool)0;
                if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                return __result45__;
            }
            if(_if_conditional127=self->type==((void*)0),            _if_conditional127) {
                err_msg(info,"Require concrete variable type(%s)",self->name);
                __result46__ = (_Bool)0;
                if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                return __result46__;
            }
            type_47=(struct sType*)come_increment_ref_count(((struct sType*)(right_value68=solve_generics(self->type,info->generics_type,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value68);
            if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value68;
            __freed_obj__ = 0;
            type_47->mFunctionParam=(_Bool)0;
            if(_if_conditional128=self->multiple_declare,            _if_conditional128) {
                for(
                o2_saved_48=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count((self->multiple_declare)),it_51=list$1tuple3$3sTypephcharphsNodephph_begin((o2_saved_48)) ,                0;                _for_condtionalA1=                !list$1tuple3$3sTypephcharphsNodephph_end((o2_saved_48)) ,                _for_condtionalA1;                it_51=list$1tuple3$3sTypephcharphsNodephph_next((o2_saved_48)) ,                0                ){
                    multiple_assgin_var1=it_51;
                    type_54=(struct sType*)come_increment_ref_count(multiple_assgin_var1->v1);
                    var_name_55=(char*)come_increment_ref_count(multiple_assgin_var1->v2);
                    right_value_56=(struct sNode*)come_increment_ref_count(multiple_assgin_var1->v3);
                    add_variable_to_table(var_name_55,(struct sType*)come_increment_ref_count(((struct sType*)(right_value69=sType_clone(type_54)))),info);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value69);
                    if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value69;
                    __freed_obj__ = 0;
                    var__46=get_variable_from_table(info->lv_table,var_name_55);
                    if(_if_conditional133=var__46==((void*)0),                    _if_conditional133) {
                        err_msg(info,"var not found(%s)(ZY) at definition of variable\n",it_51);
                        __result54__ = (_Bool)1;
                        if(type_54 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_54, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_name_55 && !__freed_obj__) { var_name_55 = come_decrement_ref_count(var_name_55, (void*)0, (void*)0, 0, 0, 0); }
                        if(right_value_56 && !__freed_obj__) { right_value_56 = come_decrement_ref_count(right_value_56, ((struct sNode*)right_value_56)->finalize, ((struct sNode*)right_value_56)->_protocol_obj, 0, 0, 0); } 
                        if(o2_saved_48 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,o2_saved_48, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(type_47 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_47, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                        return __result54__;
                    }
                    left_type_57=(struct sType*)come_increment_ref_count(((struct sType*)(right_value70=sType_clone(var__46->mType))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value70);
                    if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value70;
                    __freed_obj__ = 0;
                    add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_value(((struct optional$2charphbool*)(right_value71=make_define_var(left_type_57,var__46->mCValueName,(_Bool)0,info)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value71);
                    if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value71;
                    __freed_obj__ = 0;
                    if(_if_conditional134=right_value_56,                    _if_conditional134) {
                        if(_if_conditional135=!node_compile(right_value_56,info),                        _if_conditional135) {
                            __result55__ = (_Bool)0;
                            if(type_54 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_54, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(var_name_55 && !__freed_obj__) { var_name_55 = come_decrement_ref_count(var_name_55, (void*)0, (void*)0, 0, 0, 0); }
                            if(right_value_56 && !__freed_obj__) { right_value_56 = come_decrement_ref_count(right_value_56, ((struct sNode*)right_value_56)->finalize, ((struct sNode*)right_value_56)->_protocol_obj, 0, 0, 0); } 
                            if(left_type_57 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_57, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(o2_saved_48 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,o2_saved_48, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(type_47 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_47, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                            return __result55__;
                        }
                        come_value_58=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value72=get_value_from_stack(-1,info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value72);
                        if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value72;
                        __freed_obj__ = 0;
                        dec_stack_ptr(1,info);
                        add_come_code(info,"%s=%s;\n",var__46->mCValueName,come_value_58->c_value);
                        if(come_value_58 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_58, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    left_type2_59=(struct sType*)come_increment_ref_count(((struct sType*)(right_value73=sType_clone(left_type_57))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value73);
                    if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[3] = right_value73;
                    __freed_obj__ = 0;
                    left_type2_59->mStatic=(_Bool)0;
                    if(_if_conditional138=!var__46->mType->mConstant&&!var__46->mType->mStatic,                    _if_conditional138) {
                        if(_if_conditional139=list$1sNodeph_length(left_type2_59->mArrayNum)>0,                        _if_conditional139) {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__46->mCValueName,optional$2charphbool_expect(((struct optional$2charphbool*)(right_value74=make_type_name_string(left_type2_59,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value74);
                            if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value74;
                            __freed_obj__ = 0;
                            for(
                            o2_saved_60=(struct list$1sNodeph*)come_increment_ref_count((left_type2_59->mArrayNum)),it_63=list$1sNodeph_begin((o2_saved_60)) ,                            0;                            _for_condtionalA2=                            !list$1sNodeph_end((o2_saved_60)) ,                            _for_condtionalA2;                            it_63=list$1sNodeph_next((o2_saved_60)) ,                            0                            ){
                                if(_if_conditional145=!node_compile(it_63,info),                                _if_conditional145) {
                                    err_msg(info,"invalid array num");
                                    exit(1);
                                }
                                come_value_66=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value75=get_value_from_stack(-1,info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value75);
                                if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value75;
                                __freed_obj__ = 0;
                                dec_stack_ptr(1,info);
                                add_come_code(info,"*(%s)",come_value_66->c_value);
                                if(come_value_66 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_66, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(o2_saved_60 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_60, (void*)0, (void*)0, 0, 0, 0, 0); }
                            add_come_code(info,");\n");
                        }
                        else {
                            add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__46->mCValueName,optional$2charphbool_expect(((struct optional$2charphbool*)(right_value76=make_type_name_string(left_type2_59,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value76);
                            if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value76;
                            __freed_obj__ = 0;
                        }
                    }
                    if(type_54 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_54, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(var_name_55 && !__freed_obj__) { var_name_55 = come_decrement_ref_count(var_name_55, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value_56 && !__freed_obj__) { right_value_56 = come_decrement_ref_count(right_value_56, ((struct sNode*)right_value_56)->finalize, ((struct sNode*)right_value_56)->_protocol_obj, 0, 0, 0); } 
                    if(left_type_57 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_57, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(left_type2_59 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_59, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(o2_saved_48 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,o2_saved_48, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value77=sType_clone(type_47)))),info);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
                if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value77;
                __freed_obj__ = 0;
                var__46=get_variable_from_table(info->lv_table,self->name);
                if(_if_conditional146=var__46==((void*)0),                _if_conditional146) {
                    var__46=get_variable_from_table(info->gv_table,self->name);
                    if(_if_conditional147=var__46==((void*)0),                    _if_conditional147) {
                        err_msg(info,"var not found(%s)(Y) at definition of variable\n",self->name);
                        __result65__ = (_Bool)1;
                        if(type_47 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_47, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                        return __result65__;
                    }
                }
                left_type_67=(struct sType*)come_increment_ref_count(((struct sType*)(right_value78=sType_clone(var__46->mType))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value78);
                if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value78;
                __freed_obj__ = 0;
                if(_if_conditional148=list$1sNodeph_length(left_type_67->mArrayNum)>0,                _if_conditional148) {
                    add_come_code(info,"%s;\n",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value79=make_define_var(left_type_67,var__46->mCValueName,(_Bool)0,info)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
                    if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value79;
                    __freed_obj__ = 0;
                    if(_if_conditional149=!left_type_67->mStatic,                    _if_conditional149) {
                        if(_if_conditional150=list$1sNodeph_length(left_type_67->mArrayNum)>0,                        _if_conditional150) {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__46->mCValueName,optional$2charphbool_expect(((struct optional$2charphbool*)(right_value80=make_type_name_string(left_type_67,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value80);
                            if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value80;
                            __freed_obj__ = 0;
                            for(
                            o2_saved_68=(struct list$1sNodeph*)come_increment_ref_count((left_type_67->mArrayNum)),it_69=list$1sNodeph_begin((o2_saved_68)) ,                            0;                            _for_condtionalA3=                            !list$1sNodeph_end((o2_saved_68)) ,                            _for_condtionalA3;                            it_69=list$1sNodeph_next((o2_saved_68)) ,                            0                            ){
                                if(_if_conditional151=!node_compile(it_69,info),                                _if_conditional151) {
                                    err_msg(info,"invalid array num");
                                    exit(1);
                                }
                                come_value_70=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value81=get_value_from_stack(-1,info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
                                if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value81;
                                __freed_obj__ = 0;
                                dec_stack_ptr(1,info);
                                add_come_code(info,"*(%s)",come_value_70->c_value);
                                if(come_value_70 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_70, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(o2_saved_68 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_68, (void*)0, (void*)0, 0, 0, 0, 0); }
                            add_come_code(info,");\n");
                        }
                        else {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)); /* aaa */\n",var__46->mCValueName,var__46->mCValueName);
                        }
                    }
                }
                else {
                    add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value82=make_define_var(left_type_67,var__46->mCValueName,(_Bool)0,info)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value82);
                    if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value82;
                    __freed_obj__ = 0;
                    left_type2_71=(struct sType*)come_increment_ref_count(((struct sType*)(right_value83=sType_clone(left_type_67))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value83);
                    if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value83;
                    __freed_obj__ = 0;
                    left_type2_71->mStatic=(_Bool)0;
                    if(_if_conditional152=!var__46->mType->mConstant&&!var__46->mType->mStatic,                    _if_conditional152) {
                        if(_if_conditional153=list$1sNodeph_length(left_type2_71->mArrayNum)>0,                        _if_conditional153) {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__46->mCValueName,optional$2charphbool_expect(((struct optional$2charphbool*)(right_value84=make_type_name_string(left_type2_71,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value84);
                            if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value84;
                            __freed_obj__ = 0;
                            for(
                            o2_saved_72=(struct list$1sNodeph*)come_increment_ref_count((left_type2_71->mArrayNum)),it_73=list$1sNodeph_begin((o2_saved_72)) ,                            0;                            _for_condtionalA4=                            !list$1sNodeph_end((o2_saved_72)) ,                            _for_condtionalA4;                            it_73=list$1sNodeph_next((o2_saved_72)) ,                            0                            ){
                                if(_if_conditional154=!node_compile(it_73,info),                                _if_conditional154) {
                                    err_msg(info,"invalid array num");
                                    exit(1);
                                }
                                come_value_74=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value85=get_value_from_stack(-1,info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value85);
                                if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value85;
                                __freed_obj__ = 0;
                                dec_stack_ptr(1,info);
                                add_come_code(info,"*(%s)",come_value_74->c_value);
                                if(come_value_74 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_74, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(o2_saved_72 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_72, (void*)0, (void*)0, 0, 0, 0, 0); }
                            add_come_code(info,");\n");
                        }
                        else {
                            add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__46->mCValueName,optional$2charphbool_expect(((struct optional$2charphbool*)(right_value86=make_type_name_string(left_type2_71,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value86);
                            if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value86;
                            __freed_obj__ = 0;
                        }
                    }
                    if(left_type2_71 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_71, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                come_value_75=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value87=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 216))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value87);
                if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value87;
                __freed_obj__ = 0;
                __dec_obj44=come_value_75->c_value;
                come_value_75->c_value=(char*)come_increment_ref_count(((char*)(right_value88=xsprintf("%s",var__46->mCValueName))));
                if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value88);
                if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value88;
                __freed_obj__ = 0;
                __dec_obj45=come_value_75->type;
                come_value_75->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value89=sType_clone(left_type_67))));
                if(__dec_obj45) { come_call_finalizer(sType_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value89);
                if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[4] = right_value89;
                __freed_obj__ = 0;
                come_value_75->var=var__46;
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_75));
                if(_if_conditional158=self->alloc&&!left_type_67->mClass->mNumber&&left_type_67->mPointerNum==0,                _if_conditional158) {
                    var__46->mType->mAllocaValue=(_Bool)1;
                }
                if(left_type_67 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_67, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_value_75 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_75, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(type_47 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_47, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            if(_if_conditional159=!node_compile(self->right_value,info),            _if_conditional159) {
                __result67__ = (_Bool)0;
                if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                return __result67__;
            }
            right_value_79=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value93=get_value_from_stack(-1,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
            if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value93;
            __freed_obj__ = 0;
            dec_stack_ptr(1,info);
            right_type_80=right_value_79->type;
            if(_if_conditional160=self->multiple_assign,            _if_conditional160) {
                if(_if_conditional161=right_type_80->mNoSolvedGenericsType->v1,                _if_conditional161) {
                    right_type_80=right_type_80->mNoSolvedGenericsType->v1;
                }
            }
            if(_if_conditional162=self->alloc,            _if_conditional162) {
                var__81=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name);
                if(_if_conditional163=var__81,                _if_conditional163) {
                    err_msg(info,"Already appended this var name(%s)(2)",self->name);
                    __result68__ = (_Bool)0;
                    if(right_value_79 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_79, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                    return __result68__;
                }
                if(_if_conditional164=self->multiple_assign,                _if_conditional164) {
                    i_82=0;
                    for(
                    o2_saved_83=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_86=list$1charph_begin((o2_saved_83)) ,                    0;                    _for_condtionalA5=                    !list$1charph_end((o2_saved_83)) ,                    _for_condtionalA5;                    it_86=list$1charph_next((o2_saved_83)) ,                    0                    ){
                        if(_if_conditional169=i_82<list$1sTypeph_length(right_type_80->mGenericsTypes),                        _if_conditional169) {
                            right_type2_92=list$1sTypephp_operator_load_element(right_type_80->mGenericsTypes,i_82);
                            right_type2_92->mFunctionParam=(_Bool)0;
                            add_variable_to_table(it_86,(struct sType*)come_increment_ref_count(((struct sType*)(right_value94=sType_clone(right_type2_92)))),info);
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94);
                            if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value94;
                            __freed_obj__ = 0;
                            var__81=get_variable_from_table(info->lv_table,it_86);
                            var_type_93=(struct sType*)come_increment_ref_count(((struct sType*)(right_value95=sType_clone(var__81->mType))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value95);
                            if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value95;
                            __freed_obj__ = 0;
                            var_type_93->mStatic=(_Bool)0;
                            if(_if_conditional172=!var_type_93->mConstant&&!var_type_93->mStatic,                            _if_conditional172) {
                                if(_if_conditional173=list$1sNodeph_length(var_type_93->mArrayNum)>0,                                _if_conditional173) {
                                    add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__81->mCValueName,optional$2charphbool_expect(((struct optional$2charphbool*)(right_value96=make_type_name_string(var_type_93,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96);
                                    if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value96;
                                    __freed_obj__ = 0;
                                    for(
                                    o2_saved_94=(struct list$1sNodeph*)come_increment_ref_count((var_type_93->mArrayNum)),it_95=list$1sNodeph_begin((o2_saved_94)) ,                                    0;                                    _for_condtionalA6=                                    !list$1sNodeph_end((o2_saved_94)) ,                                    _for_condtionalA6;                                    it_95=list$1sNodeph_next((o2_saved_94)) ,                                    0                                    ){
                                        if(_if_conditional174=!node_compile(it_95,info),                                        _if_conditional174) {
                                            err_msg(info,"invalid array num");
                                            exit(1);
                                        }
                                        come_value_96=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value97=get_value_from_stack(-1,info))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97);
                                        if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value97;
                                        __freed_obj__ = 0;
                                        dec_stack_ptr(1,info);
                                        add_come_code(info,"*(%s)",come_value_96->c_value);
                                        if(come_value_96 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_96, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
                                    if(o2_saved_94 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_94, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    add_come_code(info,");\n");
                                }
                                else {
                                    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__81->mCValueName,optional$2charphbool_expect(((struct optional$2charphbool*)(right_value98=make_type_name_string(var_type_93,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value98);
                                    if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value98;
                                    __freed_obj__ = 0;
                                }
                            }
                            if(var_type_93 && !__freed_obj__) { come_call_finalizer(sType_finalize,var_type_93, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        i_82++;
                    }
                    if(o2_saved_83 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,o2_saved_83, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                else {
                    if(_if_conditional175=self->type==((void*)0),                    _if_conditional175) {
                        right_type_80->mFunctionParam=(_Bool)0;
                        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value99=sType_clone(right_type_80)))),info);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value99);
                        if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value99;
                        __freed_obj__ = 0;
                    }
                    else {
                        type_97=(struct sType*)come_increment_ref_count(((struct sType*)(right_value100=solve_generics(self->type,info->generics_type,info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
                        if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value100;
                        __freed_obj__ = 0;
                        type_97->mFunctionParam=(_Bool)0;
                        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value101=sType_clone(type_97)))),info);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value101);
                        if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value101;
                        __freed_obj__ = 0;
                        if(type_97 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_97, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    var__81=get_variable_from_table(info->lv_table,self->name);
                    var_type_98=(struct sType*)come_increment_ref_count(((struct sType*)(right_value102=sType_clone(var__81->mType))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value102);
                    if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value102;
                    __freed_obj__ = 0;
                    var_type_98->mStatic=(_Bool)0;
                    if(_if_conditional176=!var__81->mType->mStatic&&!var_type_98->mConstant&&list$1sNodeph_length(var_type_98->mArrayNum)==0,                    _if_conditional176) {
                        if(_if_conditional177=list$1sNodeph_length(var_type_98->mArrayNum)>0,                        _if_conditional177) {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__81->mCValueName,optional$2charphbool_expect(((struct optional$2charphbool*)(right_value103=make_type_name_string(var_type_98,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value103);
                            if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value103;
                            __freed_obj__ = 0;
                            for(
                            o2_saved_99=(struct list$1sNodeph*)come_increment_ref_count((var_type_98->mArrayNum)),it_100=list$1sNodeph_begin((o2_saved_99)) ,                            0;                            _for_condtionalA7=                            !list$1sNodeph_end((o2_saved_99)) ,                            _for_condtionalA7;                            it_100=list$1sNodeph_next((o2_saved_99)) ,                            0                            ){
                                if(_if_conditional178=!node_compile(it_100,info),                                _if_conditional178) {
                                    err_msg(info,"invalid array num");
                                    exit(1);
                                }
                                come_value_101=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value104=get_value_from_stack(-1,info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value104);
                                if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value104;
                                __freed_obj__ = 0;
                                dec_stack_ptr(1,info);
                                add_come_code(info,"*(%s)",come_value_101->c_value);
                                if(come_value_101 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_101, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(o2_saved_99 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_99, (void*)0, (void*)0, 0, 0, 0, 0); }
                            add_come_code(info,");\n");
                        }
                        else {
                            add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__81->mCValueName,optional$2charphbool_expect(((struct optional$2charphbool*)(right_value105=make_type_name_string(var_type_98,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
                            if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value105;
                            __freed_obj__ = 0;
                        }
                    }
                    if(var_type_98 && !__freed_obj__) { come_call_finalizer(sType_finalize,var_type_98, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
            }
            current_stack_frame_struct_102=info->current_stack_frame_struct;
            if(_if_conditional179=current_stack_frame_struct_102&&map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)==((void*)0),            _if_conditional179) {
                parent_var_103=get_variable_from_table(info->lv_table->mParent,self->name);
                if(_if_conditional180=parent_var_103!=((void*)0),                _if_conditional180) {
                    if(_if_conditional181=string_operator_not_equals(parent_var_103->mFunName,info->come_fun->mName),                    _if_conditional181) {
                        come_value_104=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value106=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 335))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
                        if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value106;
                        __freed_obj__ = 0;
                        left_type_105=parent_var_103->mType;
                        if(_if_conditional182=left_type_105->mPointerNum>0&&right_type_80->mPointerNum>0&&right_type_80->mHeap&&left_type_105->mHeap,                        _if_conditional182) {
                            c_value_106=(char*)come_increment_ref_count(((char*)(right_value107=xsprintf("*(parent->%s)",parent_var_103->mCValueName))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
                            if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { right_value107 = come_decrement_ref_count(right_value107, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value107;
                            __freed_obj__ = 0;
                            decrement_ref_count_object(parent_var_103->mType,c_value_106,info,(_Bool)0);
                            std_move(left_type_105,right_type_80,right_value_79,info);
                            __dec_obj49=come_value_104->c_value;
                            come_value_104->c_value=(char*)come_increment_ref_count(((char*)(right_value108=xsprintf("(*(parent->%s))=%s",parent_var_103->mCValueName,right_value_79->c_value))));
                            if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value108);
                            if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value108;
                            __freed_obj__ = 0;
                            right_value_id_107=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_79->c_value));
                            if(_if_conditional183=right_value_id_107!=-1,                            _if_conditional183) {
                                remove_object_from_right_values(right_value_id_107,info);
                            }
                            if(c_value_106 && !__freed_obj__) { c_value_106 = come_decrement_ref_count(c_value_106, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        else {
                            if(_if_conditional184=left_type_105->mPointerNum>0&&right_type_80->mPointerNum>0&&string_operator_equals(right_type_80->mClass->mName,"void")&&left_type_105->mHeap,                            _if_conditional184) {
                                c_value_108=(char*)come_increment_ref_count(((char*)(right_value109=xsprintf("*(parent->%s)",parent_var_103->mCValueName))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
                                if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { right_value109 = come_decrement_ref_count(right_value109, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value109;
                                __freed_obj__ = 0;
                                decrement_ref_count_object(parent_var_103->mType,c_value_108,info,(_Bool)0);
                                __dec_obj50=come_value_104->c_value;
                                come_value_104->c_value=(char*)come_increment_ref_count(((char*)(right_value110=xsprintf("(*(parent->%s))=%s",parent_var_103->mCValueName,right_value_79->c_value))));
                                if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value110);
                                if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { right_value110 = come_decrement_ref_count(right_value110, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value110;
                                __freed_obj__ = 0;
                                if(c_value_108 && !__freed_obj__) { c_value_108 = come_decrement_ref_count(c_value_108, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            else {
                                __dec_obj51=come_value_104->c_value;
                                come_value_104->c_value=(char*)come_increment_ref_count(((char*)(right_value111=xsprintf("(*(parent->%s))=%s",parent_var_103->mCValueName,right_value_79->c_value))));
                                if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value111);
                                if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value111;
                                __freed_obj__ = 0;
                            }
                        }
                        __dec_obj52=come_value_104->type;
                        come_value_104->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value112=sType_clone(left_type_105))));
                        if(__dec_obj52) { come_call_finalizer(sType_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value112);
                        if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value112;
                        __freed_obj__ = 0;
                        come_value_104->var=((void*)0);
                        check_assign_type(((char*)(right_value114=xsprintf("\%s is assigning to",((char*)(right_value113=string_to_string(self->name)))))),left_type_105,right_type_80,come_value_104,(_Bool)0,info);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value113);
                        if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { right_value113 = come_decrement_ref_count(right_value113, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value113;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value114);
                        if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { right_value114 = come_decrement_ref_count(right_value114, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value114;
                        __freed_obj__ = 0;
                        add_come_last_code(info,"%s;\n",come_value_104->c_value);
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_104));
                        __result79__ = (_Bool)1;
                        if(come_value_104 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_104, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(right_value_79 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_79, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                        return __result79__;
                        if(come_value_104 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_104, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                }
            }
            if(_if_conditional185=self->multiple_assign,            _if_conditional185) {
                multiple_var_name_110=(char*)come_increment_ref_count(((char*)(right_value115=xsprintf("multiple_assgin_var%d",++num_multiple_var_109))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
                if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value115;
                __freed_obj__ = 0;
                add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value116=make_define_var(right_value_79->type,multiple_var_name_110,(_Bool)0,info)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value116);
                if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value116;
                __freed_obj__ = 0;
                add_come_code(info,"%s=%s;\n",multiple_var_name_110,right_value_79->c_value);
                __dec_obj53=right_value_79->c_value;
                right_value_79->c_value=(char*)come_increment_ref_count(((char*)(right_value117=string_clone(multiple_var_name_110))));
                if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value117);
                if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value117;
                __freed_obj__ = 0;
                i_111=0;
                for(
                o2_saved_112=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_113=list$1charph_begin((o2_saved_112)) ,                0;                _for_condtionalA8=                !list$1charph_end((o2_saved_112)) ,                _for_condtionalA8;                it_113=list$1charph_next((o2_saved_112)) ,                0                ){
                    if(_if_conditional186=i_111<list$1sTypeph_length(right_type_80->mGenericsTypes),                    _if_conditional186) {
                        right_type2_114=(struct sType*)come_increment_ref_count(((struct sType*)(right_value118=sType_clone(list$1sTypephp_operator_load_element(right_type_80->mGenericsTypes,i_111)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
                        if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value118;
                        __freed_obj__ = 0;
                        var__115=get_variable_from_table(info->lv_table,it_113);
                        var_type_116=(struct sType*)come_increment_ref_count(((struct sType*)(right_value119=sType_clone(var__115->mType))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value119);
                        if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value119;
                        __freed_obj__ = 0;
                        var_type_116->mStatic=(_Bool)0;
                        if(_if_conditional187=!var_type_116->mConstant,                        _if_conditional187) {
                            if(_if_conditional188=list$1sNodeph_length(var_type_116->mArrayNum)>0,                            _if_conditional188) {
                                add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__115->mCValueName,optional$2charphbool_expect(((struct optional$2charphbool*)(right_value120=make_type_name_string(var_type_116,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120);
                                if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value120;
                                __freed_obj__ = 0;
                                for(
                                o2_saved_117=(struct list$1sNodeph*)come_increment_ref_count((var_type_116->mArrayNum)),it_118=list$1sNodeph_begin((o2_saved_117)) ,                                0;                                _for_condtionalA9=                                !list$1sNodeph_end((o2_saved_117)) ,                                _for_condtionalA9;                                it_118=list$1sNodeph_next((o2_saved_117)) ,                                0                                ){
                                    if(_if_conditional189=!node_compile(it_118,info),                                    _if_conditional189) {
                                        err_msg(info,"invalid array num");
                                        exit(1);
                                    }
                                    come_value_119=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value121=get_value_from_stack(-1,info))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value121);
                                    if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value121;
                                    __freed_obj__ = 0;
                                    dec_stack_ptr(1,info);
                                    add_come_code(info,"*(%s)",come_value_119->c_value);
                                    if(come_value_119 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_119, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(o2_saved_117 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_117, (void*)0, (void*)0, 0, 0, 0, 0); }
                                add_come_code(info,");\n");
                            }
                            else {
                                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__115->mCValueName,optional$2charphbool_expect(((struct optional$2charphbool*)(right_value122=make_type_name_string(var_type_116,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
                                if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value122;
                                __freed_obj__ = 0;
                            }
                        }
                        left_type_120=(struct sType*)come_increment_ref_count(((struct sType*)(right_value123=sType_clone(var__115->mType))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value123);
                        if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value123;
                        __freed_obj__ = 0;
                        right_value2_121=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value124=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 418))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value124);
                        if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value124;
                        __freed_obj__ = 0;
                        __dec_obj54=right_value2_121->c_value;
                        right_value2_121->c_value=(char*)come_increment_ref_count(((char*)(right_value125=xsprintf("%s->v%d",right_value_79->c_value,i_111+1))));
                        if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value125);
                        if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { right_value125 = come_decrement_ref_count(right_value125, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[4] = right_value125;
                        __freed_obj__ = 0;
                        __dec_obj55=right_value2_121->type;
                        right_value2_121->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value126=sType_clone(right_type2_114))));
                        if(__dec_obj55) { come_call_finalizer(sType_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value126);
                        if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[5] = right_value126;
                        __freed_obj__ = 0;
                        right_value2_121->var=((void*)0);
                        come_value_122=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value127=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 424))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value127);
                        if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[6] = right_value127;
                        __freed_obj__ = 0;
                        check_assign_type(((char*)(right_value129=xsprintf("\%s is assining to}",((char*)(right_value128=string_to_string(self->name)))))),left_type_120,right_type2_114,come_value_122,(_Bool)0,info);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value128);
                        if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { right_value128 = come_decrement_ref_count(right_value128, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[7] = right_value128;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value129);
                        if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[8] = right_value129;
                        __freed_obj__ = 0;
                        if(_if_conditional190=right_type2_114->mHeap&&left_type_120->mHeap&&left_type_120->mPointerNum>0&&right_type2_114->mPointerNum>0,                        _if_conditional190) {
                            if(_if_conditional191=self->alloc,                            _if_conditional191) {
                                std_move(left_type_120,right_type2_114,right_value2_121,info);
                                __dec_obj56=come_value_122->c_value;
                                come_value_122->c_value=(char*)come_increment_ref_count(((char*)(right_value130=xsprintf("%s=%s",var__115->mCValueName,right_value2_121->c_value))));
                                if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value130);
                                if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value130;
                                __freed_obj__ = 0;
                            }
                            right_value_id_123=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value2_121->c_value));
                            if(_if_conditional192=right_value_id_123!=-1,                            _if_conditional192) {
                                remove_object_from_right_values(right_value_id_123,info);
                            }
                        }
                        else {
                            __dec_obj57=come_value_122->c_value;
                            come_value_122->c_value=(char*)come_increment_ref_count(((char*)(right_value131=xsprintf("%s=%s",var__115->mCValueName,right_value2_121->c_value))));
                            if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value131);
                            if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { right_value131 = come_decrement_ref_count(right_value131, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value131;
                            __freed_obj__ = 0;
                        }
                        __dec_obj58=come_value_122->type;
                        come_value_122->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value132=sType_clone(left_type_120))));
                        if(__dec_obj58) { come_call_finalizer(sType_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value132);
                        if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[9] = right_value132;
                        __freed_obj__ = 0;
                        come_value_122->var=var__115;
                        if(_if_conditional193=self->alloc,                        _if_conditional193) {
                            add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value133=make_define_var(left_type_120,var__115->mCValueName,(_Bool)0,info)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133);
                            if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value133;
                            __freed_obj__ = 0;
                            add_come_code(info,"%s;\n",come_value_122->c_value);
                        }
                        else {
                            add_come_code(info,"%s;\n",come_value_122->c_value);
                        }
                        if(right_type2_114 && !__freed_obj__) { come_call_finalizer(sType_finalize,right_type2_114, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_type_116 && !__freed_obj__) { come_call_finalizer(sType_finalize,var_type_116, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(left_type_120 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_120, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(right_value2_121 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value2_121, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(come_value_122 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_122, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    i_111++;
                }
                if(o2_saved_112 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,o2_saved_112, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(multiple_var_name_110 && !__freed_obj__) { multiple_var_name_110 = come_decrement_ref_count(multiple_var_name_110, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                var__124=get_variable_from_table(info->lv_table,self->name);
                if(_if_conditional194=var__124==((void*)0),                _if_conditional194) {
                    var__124=get_variable_from_table(info->gv_table,self->name);
                    if(_if_conditional195=var__124==((void*)0),                    _if_conditional195) {
                        err_msg(info,"var not found(%s)(X) at storing variable\n",self->name);
                        __result80__ = (_Bool)1;
                        if(right_value_79 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_79, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                        return __result80__;
                    }
                }
                if(_if_conditional196=var__124->mType==((void*)0),                _if_conditional196) {
                    __dec_obj59=var__124->mType;
                    var__124->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value134=sType_clone(right_type_80))));
                    if(__dec_obj59) { come_call_finalizer(sType_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value134);
                    if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value134;
                    __freed_obj__ = 0;
                }
                left_type_125=(struct sType*)come_increment_ref_count(((struct sType*)(right_value135=sType_clone(var__124->mType))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value135);
                if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value135;
                __freed_obj__ = 0;
                come_value_126=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value136=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 475))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value136);
                if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value136;
                __freed_obj__ = 0;
                if(_if_conditional197=var__124->mType->mStatic&&!var__124->mGlobal,                _if_conditional197) {
                    check_assign_type(((char*)(right_value138=xsprintf("\%s is assining to",((char*)(right_value137=string_to_string(self->name)))))),left_type_125,right_type_80,right_value_79,(_Bool)0,info);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value137);
                    if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value137;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value138);
                    if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value138;
                    __freed_obj__ = 0;
                    add_come_code_at_function_head(info,"%s=%s;\n",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value139=make_define_var(left_type_125,var__124->mCValueName,(_Bool)0,info)))),right_value_79->c_value);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value139);
                    if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value139;
                    __freed_obj__ = 0;
                    __dec_obj60=come_value_126->c_value;
                    come_value_126->c_value=(char*)come_increment_ref_count(((char*)(right_value140=__builtin_string(""))));
                    if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value140);
                    if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[3] = right_value140;
                    __freed_obj__ = 0;
                    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_126));
                    transpiler_clear_last_code(info);
                }
                else {
                    if(_if_conditional198=var__124->mType->mConstant,                    _if_conditional198) {
                        check_assign_type(((char*)(right_value142=xsprintf("\%s is assining to",((char*)(right_value141=string_to_string(self->name)))))),left_type_125,right_type_80,right_value_79,(_Bool)0,info);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value141);
                        if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value141;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value142);
                        if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value142;
                        __freed_obj__ = 0;
                        if(_if_conditional199=self->alloc,                        _if_conditional199) {
                            add_come_code_at_function_head(info,"%s=%s;\n",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value143=make_define_var(left_type_125,var__124->mCValueName,(_Bool)0,info)))),right_value_79->c_value);
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value143);
                            if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value143;
                            __freed_obj__ = 0;
                        }
                        else {
                            add_come_code_at_function_head(info,"%s=%s;\n",var__124->mCValueName,right_value_79->c_value);
                        }
                        __dec_obj61=come_value_126->c_value;
                        come_value_126->c_value=(char*)come_increment_ref_count(((char*)(right_value144=__builtin_string(""))));
                        if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value144);
                        if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { right_value144 = come_decrement_ref_count(right_value144, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value144;
                        __freed_obj__ = 0;
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_126));
                        transpiler_clear_last_code(info);
                    }
                    else {
                        if(_if_conditional200=right_type_80->mHeap&&left_type_125->mHeap&&left_type_125->mPointerNum>0&&right_type_80->mPointerNum>0,                        _if_conditional200) {
                            check_assign_type(((char*)(right_value146=xsprintf("\%s is assining to",((char*)(right_value145=string_to_string(self->name)))))),left_type_125,right_type_80,right_value_79,(_Bool)0,info);
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value145);
                            if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value145;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value146);
                            if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value146;
                            __freed_obj__ = 0;
                            if(_if_conditional201=self->alloc,                            _if_conditional201) {
                                std_move(left_type_125,right_type_80,right_value_79,info);
                                __dec_obj62=come_value_126->c_value;
                                come_value_126->c_value=(char*)come_increment_ref_count(((char*)(right_value147=xsprintf("%s=%s",var__124->mCValueName,right_value_79->c_value))));
                                if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value147);
                                if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value147;
                                __freed_obj__ = 0;
                            }
                            else {
                                decrement_ref_count_object(left_type_125,var__124->mCValueName,info,(_Bool)0);
                                std_move(left_type_125,right_type_80,right_value_79,info);
                                __dec_obj63=come_value_126->c_value;
                                come_value_126->c_value=(char*)come_increment_ref_count(((char*)(right_value148=xsprintf("%s=%s",var__124->mCValueName,right_value_79->c_value))));
                                if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value148);
                                if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value148;
                                __freed_obj__ = 0;
                            }
                            right_value_id_127=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_79->c_value));
                            if(_if_conditional202=right_value_id_127!=-1,                            _if_conditional202) {
                                remove_object_from_right_values(right_value_id_127,info);
                            }
                            __dec_obj64=come_value_126->type;
                            come_value_126->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value149=sType_clone(left_type_125))));
                            if(__dec_obj64) { come_call_finalizer(sType_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value149);
                            if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value149;
                            __freed_obj__ = 0;
                            come_value_126->var=var__124;
                            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_126));
                            add_come_last_code(info,"%s;\n",come_value_126->c_value);
                        }
                        else {
                            if(_if_conditional203=string_operator_equals(right_type_80->mClass->mName,"void")&&left_type_125->mHeap&&left_type_125->mPointerNum>0&&right_type_80->mPointerNum>0,                            _if_conditional203) {
                                check_assign_type(((char*)(right_value151=xsprintf("\%s is assining to",((char*)(right_value150=string_to_string(self->name)))))),left_type_125,right_type_80,right_value_79,(_Bool)0,info);
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value150);
                                if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { right_value150 = come_decrement_ref_count(right_value150, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value150;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value151);
                                if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value151;
                                __freed_obj__ = 0;
                                if(_if_conditional204=self->alloc,                                _if_conditional204) {
                                    __dec_obj65=come_value_126->c_value;
                                    come_value_126->c_value=(char*)come_increment_ref_count(((char*)(right_value152=xsprintf("%s=%s",var__124->mCValueName,right_value_79->c_value))));
                                    if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value152);
                                    if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value152;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    decrement_ref_count_object(left_type_125,var__124->mCValueName,info,(_Bool)0);
                                    __dec_obj66=come_value_126->c_value;
                                    come_value_126->c_value=(char*)come_increment_ref_count(((char*)(right_value153=xsprintf("%s=%s",var__124->mCValueName,right_value_79->c_value))));
                                    if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value153);
                                    if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value153;
                                    __freed_obj__ = 0;
                                }
                                __dec_obj67=come_value_126->type;
                                come_value_126->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value154=sType_clone(left_type_125))));
                                if(__dec_obj67) { come_call_finalizer(sType_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value154);
                                if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value154;
                                __freed_obj__ = 0;
                                come_value_126->var=var__124;
                                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_126));
                                add_come_last_code(info,"%s;\n",come_value_126->c_value);
                            }
                            else {
                                if(_if_conditional205=left_type_125->mHeap&&!right_type_80->mHeap,                                _if_conditional205) {
                                    if(_if_conditional206=string_operator_equals(right_type_80->mClass->mName,"void")&&right_type_80->mPointerNum==1,                                    _if_conditional206) {
                                    }
                                    else {
                                        if(_if_conditional207=!right_type_80->mDelegate&&!right_type_80->mShare&&!gComeGC,                                        _if_conditional207) {
                                            err_msg(info,"require right value as heap object(%s)",self->name);
                                            __result81__ = (_Bool)0;
                                            if(left_type_125 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_125, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(come_value_126 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_126, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(right_value_79 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_79, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                                            return __result81__;
                                        }
                                    }
                                }
                                check_assign_type(((char*)(right_value156=xsprintf("\%s is assining to",((char*)(right_value155=string_to_string(self->name)))))),left_type_125,right_type_80,right_value_79,(_Bool)0,info);
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value155);
                                if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value155;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value156);
                                if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value156;
                                __freed_obj__ = 0;
                                __dec_obj68=come_value_126->c_value;
                                come_value_126->c_value=(char*)come_increment_ref_count(((char*)(right_value157=xsprintf("%s=%s",var__124->mCValueName,right_value_79->c_value))));
                                if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value157);
                                if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value157;
                                __freed_obj__ = 0;
                                __dec_obj69=come_value_126->type;
                                come_value_126->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value158=sType_clone(left_type_125))));
                                if(__dec_obj69) { come_call_finalizer(sType_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value158);
                                if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[3] = right_value158;
                                __freed_obj__ = 0;
                                come_value_126->var=var__124;
                                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_126));
                                add_come_last_code(info,"%s;\n",come_value_126->c_value);
                            }
                        }
                    }
                }
                if(_if_conditional208=self->alloc&&!left_type_125->mConstant&&!left_type_125->mStatic,                _if_conditional208) {
                    if(_if_conditional209=list$1sNodeph_length(left_type_125->mArrayNum)>0,                    _if_conditional209) {
                        add_come_code(info,"%s;\n",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value159=make_define_var(left_type_125,var__124->mCValueName,(_Bool)0,info)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value159);
                        if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value159;
                        __freed_obj__ = 0;
                    }
                    else {
                        add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value160=make_define_var(left_type_125,var__124->mCValueName,(_Bool)0,info)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value160);
                        if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value160;
                        __freed_obj__ = 0;
                    }
                }
                if(left_type_125 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_125, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_value_126 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_126, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(right_value_79 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_79, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
    }
    __result82__ = (_Bool)1;
    if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
    return __result82__;
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
_Bool _if_conditional119;
_Bool _if_conditional120;
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
memset(&right_value61, 0, sizeof(void*));
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
            memset(&default_value_38,0,sizeof(struct sVar*));
            hash_39=string_get_hash_key(((char*)key))%self->size;
            it_40=hash_39;
            while(_while_condtional9=(_Bool)1,            _while_condtional9) {
                if(_if_conditional116=self->item_existance[it_40],                _if_conditional116) {
                    if(_if_conditional118=optional$2boolbool_value(((struct optional$2boolbool*)(right_value61=string_equals(self->keys[it_40],key)))),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value61),
                    (right_value61 && right_value61 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value61, 
                    __freed_obj__ = 0, 
                    _if_conditional118) {
                        __result36__ = __result_obj__ = self->items[it_40];
                        return __result36__;
                    }
                    it_40++;
                    if(_if_conditional119=it_40>=self->size,                    _if_conditional119) {
                        it_40=0;
                    }
                    else {
                        if(_if_conditional120=it_40==hash_39,                        _if_conditional120) {
                            __result37__ = __result_obj__ = default_value_38;
                            return __result37__;
                        }
                    }
                }
                else {
                    __result38__ = __result_obj__ = default_value_38;
                    return __result38__;
                }
            }
            __result40__ = __result_obj__ = ((struct optional$2sVarpbool*)(right_value63=optional$2sVarpbool_initialize(((struct optional$2sVarpbool*)(right_value62=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1619))),default_value_38,(_Bool)0)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
            if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { right_value62 = come_decrement_ref_count(right_value62, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value62;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value63);
            if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value63;
            __freed_obj__ = 0;
            return __result40__;
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

static struct optional$2sVarpbool* optional$2sVarpbool_initialize(struct optional$2sVarpbool* self, struct sVar* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sVarpbool* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                self->v1=v1;
                self->v2=v2;
                __result39__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result39__;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sVarpboolp_finalize(struct optional$2sVarpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static char* optional$2charphbool_value(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional123;
char* default_value_45;
char* __result43__;
char* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_45, 0, sizeof(char*));
            if(_if_conditional123=self==((void*)0),            _if_conditional123) {
                memset(&default_value_45,0,sizeof(char*));
                __result43__ = __result_obj__ = default_value_45;
                return __result43__;
            }
            else {
                __result44__ = __result_obj__ = self->v1;
                return __result44__;
            }
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional124;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional124=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional124) {
                if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_begin(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional129;
struct tuple3$3sTypephcharphsNodeph* result_49;
struct tuple3$3sTypephcharphsNodeph* __result47__;
_Bool _if_conditional130;
struct tuple3$3sTypephcharphsNodeph* __result48__;
struct tuple3$3sTypephcharphsNodeph* result_50;
struct tuple3$3sTypephcharphsNodeph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_49, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&result_50, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    if(_if_conditional129=self==((void*)0),                    _if_conditional129) {
                        memset(&result_49,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                        __result47__ = __result_obj__ = result_49;
                        return __result47__;
                    }
                    self->it=self->head;
                    if(_if_conditional130=self->it,                    _if_conditional130) {
                        __result48__ = __result_obj__ = self->it->item;
                        return __result48__;
                    }
                    memset(&result_50,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    __result49__ = __result_obj__ = result_50;
                    return __result49__;
}

static _Bool list$1tuple3$3sTypephcharphsNodephph_end(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __result50__ = self==((void*)0)||self->it==((void*)0);
                    return __result50__;
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_next(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional131;
struct tuple3$3sTypephcharphsNodeph* result_52;
struct tuple3$3sTypephcharphsNodeph* __result51__;
_Bool _if_conditional132;
struct tuple3$3sTypephcharphsNodeph* __result52__;
struct tuple3$3sTypephcharphsNodeph* result_53;
struct tuple3$3sTypephcharphsNodeph* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_52, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&result_53, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    if(_if_conditional131=self==((void*)0)||self->it==((void*)0),                    _if_conditional131) {
                        memset(&result_52,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                        __result51__ = __result_obj__ = result_52;
                        return __result51__;
                    }
                    self->it=self->it->next;
                    if(_if_conditional132=self->it,                    _if_conditional132) {
                        __result52__ = __result_obj__ = self->it->item;
                        return __result52__;
                    }
                    memset(&result_53,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    __result53__ = __result_obj__ = result_53;
                    return __result53__;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional136;
_Bool _if_conditional137;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional136=self!=((void*)0)&&self->c_value!=((void*)0),                            _if_conditional136) {
                                if(self->c_value && !__freed_obj__) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            if(_if_conditional137=self!=((void*)0)&&self->type!=((void*)0),                            _if_conditional137) {
                                if(self->type && !__freed_obj__) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __result56__ = self->len;
                            return __result56__;
}

static char* optional$2charphbool_expect(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional140;
char* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional140=!self->v2,                                _if_conditional140) {
                                    puts("Exception: at");
                                    exception_stackframe();
                                    puts("abort.");
                                    exit(2);
                                }
                                __result57__ = __result_obj__ = self->v1;
                                return __result57__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional141;
struct sNode* result_61;
struct sNode* __result58__;
_Bool _if_conditional142;
struct sNode* __result59__;
struct sNode* result_62;
struct sNode* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_61, 0, sizeof(struct sNode*));
memset(&result_62, 0, sizeof(struct sNode*));
                                if(_if_conditional141=self==((void*)0),                                _if_conditional141) {
                                    memset(&result_61,0,sizeof(struct sNode*));
                                    __result58__ = __result_obj__ = result_61;
                                    return __result58__;
                                }
                                self->it=self->head;
                                if(_if_conditional142=self->it,                                _if_conditional142) {
                                    __result59__ = __result_obj__ = self->it->item;
                                    return __result59__;
                                }
                                memset(&result_62,0,sizeof(struct sNode*));
                                __result60__ = __result_obj__ = result_62;
                                return __result60__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                __result61__ = self==((void*)0)||self->it==((void*)0);
                                return __result61__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional143;
struct sNode* result_64;
struct sNode* __result62__;
_Bool _if_conditional144;
struct sNode* __result63__;
struct sNode* result_65;
struct sNode* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_64, 0, sizeof(struct sNode*));
memset(&result_65, 0, sizeof(struct sNode*));
                                if(_if_conditional143=self==((void*)0)||self->it==((void*)0),                                _if_conditional143) {
                                    memset(&result_64,0,sizeof(struct sNode*));
                                    __result62__ = __result_obj__ = result_64;
                                    return __result62__;
                                }
                                self->it=self->it->next;
                                if(_if_conditional144=self->it,                                _if_conditional144) {
                                    __result63__ = __result_obj__ = self->it->item;
                                    return __result63__;
                                }
                                memset(&result_65,0,sizeof(struct sNode*));
                                __result64__ = __result_obj__ = result_65;
                                return __result64__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional155;
void* right_value90;
struct list_item$1CVALUEph* litem_76;
struct CVALUE* __dec_obj46;
_Bool _if_conditional157;
void* right_value91;
struct list_item$1CVALUEph* litem_77;
struct CVALUE* __dec_obj47;
void* right_value92;
struct list_item$1CVALUEph* litem_78;
struct CVALUE* __dec_obj48;
struct list$1CVALUEph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value90, 0, sizeof(void*));
memset(&litem_76, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value91, 0, sizeof(void*));
memset(&litem_77, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value92, 0, sizeof(void*));
memset(&litem_78, 0, sizeof(struct list_item$1CVALUEph*));
                    if(_if_conditional155=self->len==0,                    _if_conditional155) {
                        litem_76=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value90=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 279))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
                        if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value90;
                        __freed_obj__ = 0;
                        litem_76->prev=((void*)0);
                        litem_76->next=((void*)0);
                        __dec_obj46=litem_76->item;
                        litem_76->item=(struct CVALUE*)come_increment_ref_count(item);
                        if(__dec_obj46) { come_call_finalizer(CVALUE_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail=litem_76;
                        self->head=litem_76;
                    }
                    else {
                        if(_if_conditional157=self->len==1,                        _if_conditional157) {
                            litem_77=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value91=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 289))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value91);
                            if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value91;
                            __freed_obj__ = 0;
                            litem_77->prev=self->head;
                            litem_77->next=((void*)0);
                            __dec_obj47=litem_77->item;
                            litem_77->item=(struct CVALUE*)come_increment_ref_count(item);
                            if(__dec_obj47) { come_call_finalizer(CVALUE_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->tail=litem_77;
                            self->head->next=litem_77;
                        }
                        else {
                            litem_78=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value92=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 299))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value92);
                            if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value92;
                            __freed_obj__ = 0;
                            litem_78->prev=self->tail;
                            litem_78->next=((void*)0);
                            __dec_obj48=litem_78->item;
                            litem_78->item=(struct CVALUE*)come_increment_ref_count(item);
                            if(__dec_obj48) { come_call_finalizer(CVALUE_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->tail->next=litem_78;
                            self->tail=litem_78;
                        }
                    }
                    self->len++;
                    __result66__ = __result_obj__ = self;
                    if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result66__;
                    if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional156;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional156=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional156) {
                                if(self->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional165;
char* result_84;
char* __result69__;
_Bool _if_conditional166;
char* __result70__;
char* result_85;
char* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_84, 0, sizeof(char*));
memset(&result_85, 0, sizeof(char*));
                        if(_if_conditional165=self==((void*)0),                        _if_conditional165) {
                            memset(&result_84,0,sizeof(char*));
                            __result69__ = __result_obj__ = result_84;
                            return __result69__;
                        }
                        self->it=self->head;
                        if(_if_conditional166=self->it,                        _if_conditional166) {
                            __result70__ = __result_obj__ = self->it->item;
                            return __result70__;
                        }
                        memset(&result_85,0,sizeof(char*));
                        __result71__ = __result_obj__ = result_85;
                        return __result71__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result72__ = self==((void*)0)||self->it==((void*)0);
                        return __result72__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional167;
char* result_87;
char* __result73__;
_Bool _if_conditional168;
char* __result74__;
char* result_88;
char* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_87, 0, sizeof(char*));
memset(&result_88, 0, sizeof(char*));
                        if(_if_conditional167=self==((void*)0)||self->it==((void*)0),                        _if_conditional167) {
                            memset(&result_87,0,sizeof(char*));
                            __result73__ = __result_obj__ = result_87;
                            return __result73__;
                        }
                        self->it=self->it->next;
                        if(_if_conditional168=self->it,                        _if_conditional168) {
                            __result74__ = __result_obj__ = self->it->item;
                            return __result74__;
                        }
                        memset(&result_88,0,sizeof(char*));
                        __result75__ = __result_obj__ = result_88;
                        return __result75__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __result76__ = self->len;
                            return __result76__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional170;
struct list_item$1sTypeph* it_89;
int i_90;
_Bool _while_condtional10;
_Bool _if_conditional171;
struct sType* __result77__;
struct sType* default_value_91;
struct sType* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_89, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_90, 0, sizeof(int));
memset(&default_value_91, 0, sizeof(struct sType*));
                                if(_if_conditional170=position<0,                                _if_conditional170) {
                                    position+=self->len;
                                }
                                it_89=self->head;
                                i_90=0;
                                while(_while_condtional10=it_89!=((void*)0),                                _while_condtional10) {
                                    if(_if_conditional171=position==i_90,                                    _if_conditional171) {
                                        __result77__ = __result_obj__ = it_89->item;
                                        return __result77__;
                                    }
                                    it_89=it_89->next;
                                    i_90++;
                                }
                                memset(&default_value_91,0,sizeof(struct sType*));
                                __result78__ = __result_obj__ = default_value_91;
                                if(default_value_91 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_91, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result78__;
                                if(default_value_91 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_91, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sStoreNode_sline(struct sStoreNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result83__ = self->sline;
    return __result83__;
}

char* sStoreNode_sname(struct sStoreNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value161;
char* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value161, 0, sizeof(void*));
    __result84__ = __result_obj__ = ((char*)(right_value161=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value161);
    if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { right_value161 = come_decrement_ref_count(right_value161, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value161;
    __freed_obj__ = 0;
    return __result84__;
}

struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct sType* type, _Bool alloc, struct sNode* right_node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value162;
void* right_value163;
struct sNode* _inf_value1;
struct sStoreNode* _inf_obj_value1;
void* right_value172;
struct sNode* result_129;
struct sNode* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value162, 0, sizeof(void*));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
memset(&result_129, 0, sizeof(struct sNode*));
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 590);
    _inf_obj_value1=come_increment_ref_count(((struct sStoreNode*)(right_value163=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value162=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 590)))),(char*)come_increment_ref_count(name),(struct list$1charph*)come_increment_ref_count(multiple_assign),((void*)0),(struct sType*)come_increment_ref_count(type),alloc,(struct sNode*)come_increment_ref_count(right_node),((void*)0),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreNode_finalize;
    _inf_value1->clone=(void*)sStoreNode_clone;
    _inf_value1->compile=(void*)sStoreNode_compile;
    _inf_value1->sline=(void*)sStoreNode_sline;
    _inf_value1->sname=(void*)sStoreNode_sname;
    _inf_value1->terminated=(void*)sStoreNode_terminated;
    _inf_value1->kind=(void*)sStoreNode_kind;
    result_129=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value172=_inf_value1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value162);
    if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value162;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value163);
    if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value163;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value172);
    if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { right_value172 = come_decrement_ref_count(right_value172, ((struct sNode*)right_value172)->finalize, ((struct sNode*)right_value172)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value172;
    __freed_obj__ = 0;
    __result87__ = __result_obj__ = result_129;
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(multiple_assign && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,multiple_assign, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right_node && !__freed_obj__) { right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 1, 0); } 
    if(result_129 && !__freed_obj__) { result_129 = come_decrement_ref_count(result_129, ((struct sNode*)result_129)->finalize, ((struct sNode*)result_129)->_protocol_obj, 0, 1, 0); } 
    return __result87__;
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(multiple_assign && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,multiple_assign, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right_node && !__freed_obj__) { right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 1, 0); } 
    if(result_129 && !__freed_obj__) { result_129 = come_decrement_ref_count(result_129, ((struct sNode*)result_129)->finalize, ((struct sNode*)result_129)->_protocol_obj, 0, 0, 0); } 
}

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value173;
char* __dec_obj77;
void* right_value174;
char* __dec_obj78;
struct sLoadNode* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
    __dec_obj77=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value173=__builtin_string(name))));
    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value173);
    if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { right_value173 = come_decrement_ref_count(right_value173, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value173;
    __freed_obj__ = 0;
    self->sline=info->sline;
    __dec_obj78=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value174=__builtin_string(info->sname))));
    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value174);
    if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { right_value174 = come_decrement_ref_count(right_value174, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value174;
    __freed_obj__ = 0;
    __result88__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    return __result88__;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
}

_Bool sLoadNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result89__ = (_Bool)0;
    return __result89__;
}

char* sLoadNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value175;
char* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value175, 0, sizeof(void*));
    __result90__ = __result_obj__ = ((char*)(right_value175=__builtin_string("sLoadNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value175);
    if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { right_value175 = come_decrement_ref_count(right_value175, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value175;
    __freed_obj__ = 0;
    return __result90__;
}

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* current_stack_frame_struct_130;
_Bool _if_conditional229;
struct sVar* parent_var_131;
_Bool _if_conditional230;
_Bool _if_conditional231;
void* right_value176;
struct CVALUE* come_value_132;
struct sType* type_133;
void* right_value177;
char* __dec_obj79;
void* right_value178;
struct sType* __dec_obj80;
_Bool __result91__;
struct sVar* var__134;
_Bool _if_conditional232;
_Bool _if_conditional233;
struct sFun* fun_138;
_Bool _if_conditional238;
void* right_value182;
struct CVALUE* come_value_139;
void* right_value183;
char* __dec_obj81;
struct sType* __dec_obj82;
_Bool __result97__;
_Bool __result98__;
void* right_value184;
struct CVALUE* come_value_140;
void* right_value185;
char* __dec_obj83;
void* right_value186;
struct sType* __dec_obj84;
_Bool _if_conditional239;
void* right_value187;
struct sType* __dec_obj85;
_Bool __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&current_stack_frame_struct_130, 0, sizeof(struct sClass*));
memset(&parent_var_131, 0, sizeof(struct sVar*));
memset(&right_value176, 0, sizeof(void*));
memset(&come_value_132, 0, sizeof(struct CVALUE*));
memset(&type_133, 0, sizeof(struct sType*));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
memset(&var__134, 0, sizeof(struct sVar*));
memset(&fun_138, 0, sizeof(struct sFun*));
memset(&right_value182, 0, sizeof(void*));
memset(&come_value_139, 0, sizeof(struct CVALUE*));
memset(&right_value183, 0, sizeof(void*));
memset(&right_value184, 0, sizeof(void*));
memset(&come_value_140, 0, sizeof(struct CVALUE*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
memset(&right_value187, 0, sizeof(void*));
    current_stack_frame_struct_130=info->current_stack_frame_struct;
    if(_if_conditional229=current_stack_frame_struct_130&&map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)==((void*)0),    _if_conditional229) {
        parent_var_131=get_variable_from_table(info->lv_table->mParent,self->name);
        if(_if_conditional230=parent_var_131!=((void*)0),        _if_conditional230) {
            if(_if_conditional231=string_operator_not_equals(parent_var_131->mFunName,info->come_fun->mName),            _if_conditional231) {
                come_value_132=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value176=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 633))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value176);
                if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value176;
                __freed_obj__ = 0;
                type_133=parent_var_131->mType;
                __dec_obj79=come_value_132->c_value;
                come_value_132->c_value=(char*)come_increment_ref_count(((char*)(right_value177=xsprintf("(*(parent->%s))",parent_var_131->mCValueName))));
                if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value177);
                if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value177;
                __freed_obj__ = 0;
                __dec_obj80=come_value_132->type;
                come_value_132->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value178=sType_clone(type_133))));
                if(__dec_obj80) { come_call_finalizer(sType_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value178);
                if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value178;
                __freed_obj__ = 0;
                come_value_132->var=((void*)0);
                add_come_last_code(info,"%s;\n",come_value_132->c_value);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_132));
                __result91__ = (_Bool)1;
                if(come_value_132 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_132, (void*)0, (void*)0, 0, 0, 0, 0); }
                return __result91__;
                if(come_value_132 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_132, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
        }
    }
    var__134=get_variable_from_table(info->lv_table,self->name);
    if(_if_conditional232=var__134==((void*)0),    _if_conditional232) {
        var__134=get_variable_from_table(info->gv_table,self->name);
        if(_if_conditional233=var__134==((void*)0),        _if_conditional233) {
            fun_138=map$2charphsFunphp_operator_load_element(info->funcs,self->name);
            if(_if_conditional238=fun_138,            _if_conditional238) {
                come_value_139=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value182=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 660))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value182);
                if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value182;
                __freed_obj__ = 0;
                __dec_obj81=come_value_139->c_value;
                come_value_139->c_value=(char*)come_increment_ref_count(((char*)(right_value183=xsprintf("%s",fun_138->mName))));
                if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value183);
                if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { right_value183 = come_decrement_ref_count(right_value183, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value183;
                __freed_obj__ = 0;
                __dec_obj82=come_value_139->type;
                come_value_139->type=(struct sType*)come_increment_ref_count(fun_138->mLambdaType);
                if(__dec_obj82) { come_call_finalizer(sType_finalize,__dec_obj82, (void*)0, (void*)0, 0, 0, 0, 0); }
                come_value_139->var=((void*)0);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_139));
                __result97__ = (_Bool)1;
                if(come_value_139 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_139, (void*)0, (void*)0, 0, 0, 0, 0); }
                return __result97__;
                if(come_value_139 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_139, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                err_msg(info,"var not found(%s)(Z) at loading variable\n",self->name);
                __result98__ = (_Bool)1;
                return __result98__;
            }
        }
    }
    come_value_140=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value184=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 677))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value184);
    if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value184;
    __freed_obj__ = 0;
    __dec_obj83=come_value_140->c_value;
    come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value185=xsprintf("%s",var__134->mCValueName))));
    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value185);
    if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { right_value185 = come_decrement_ref_count(right_value185, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value185;
    __freed_obj__ = 0;
    __dec_obj84=come_value_140->type;
    come_value_140->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value186=sType_clone(var__134->mType))));
    if(__dec_obj84) { come_call_finalizer(sType_finalize,__dec_obj84, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value186);
    if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value186;
    __freed_obj__ = 0;
    come_value_140->var=var__134;
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_140));
    if(_if_conditional239=list$1sNodeph_length(come_value_140->type->mArrayNum)==1,    _if_conditional239) {
        __dec_obj85=come_value_140->type->mOriginalLoadVarType->v1;
        come_value_140->type->mOriginalLoadVarType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value187=sType_clone(come_value_140->type))));
        if(__dec_obj85) { come_call_finalizer(sType_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value187);
        if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value187;
        __freed_obj__ = 0;
        list$1sNodeph_reset(come_value_140->type->mArrayNum);
        come_value_140->type->mPointerNum++;
        come_value_140->type->mOriginalTypeNamePointerNum=come_value_140->type->mPointerNum;
    }
    __result100__ = (_Bool)1;
    if(come_value_140 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_140, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result100__;
    if(come_value_140 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_140, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sFun* default_value_135;
unsigned int hash_136;
unsigned int it_137;
_Bool _while_condtional11;
_Bool _if_conditional234;
void* right_value179;
_Bool _if_conditional235;
struct sFun* __result92__;
_Bool _if_conditional236;
_Bool _if_conditional237;
struct sFun* __result93__;
struct sFun* __result94__;
void* right_value180;
void* right_value181;
struct sFun* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_135, 0, sizeof(struct sFun*));
memset(&hash_136, 0, sizeof(unsigned int));
memset(&it_137, 0, sizeof(unsigned int));
memset(&right_value179, 0, sizeof(void*));
memset(&right_value180, 0, sizeof(void*));
memset(&right_value181, 0, sizeof(void*));
                memset(&default_value_135,0,sizeof(struct sFun*));
                hash_136=string_get_hash_key(((char*)key))%self->size;
                it_137=hash_136;
                while(_while_condtional11=(_Bool)1,                _while_condtional11) {
                    if(_if_conditional234=self->item_existance[it_137],                    _if_conditional234) {
                        if(_if_conditional235=optional$2boolbool_value(((struct optional$2boolbool*)(right_value179=string_equals(self->keys[it_137],key)))),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value179),
                        (right_value179 && right_value179 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value179, 
                        __freed_obj__ = 0, 
                        _if_conditional235) {
                            __result92__ = __result_obj__ = self->items[it_137];
                            return __result92__;
                        }
                        it_137++;
                        if(_if_conditional236=it_137>=self->size,                        _if_conditional236) {
                            it_137=0;
                        }
                        else {
                            if(_if_conditional237=it_137==hash_136,                            _if_conditional237) {
                                __result93__ = __result_obj__ = default_value_135;
                                return __result93__;
                            }
                        }
                    }
                    else {
                        __result94__ = __result_obj__ = default_value_135;
                        return __result94__;
                    }
                }
                __result96__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value181=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value180=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1619))),default_value_135,(_Bool)0)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180);
                if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { right_value180 = come_decrement_ref_count(right_value180, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value180;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value181);
                if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value181;
                __freed_obj__ = 0;
                return __result96__;
}

static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sFunpbool* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    self->v1=v1;
                    self->v2=v2;
                    __result95__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result95__;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sFunpboolp_finalize(struct optional$2sFunpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_141;
_Bool _while_condtional12;
struct list_item$1sNodeph* prev_it_142;
struct list$1sNodeph* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_141, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_142, 0, sizeof(struct list_item$1sNodeph*));
            it_141=self->head;
            while(_while_condtional12=it_141!=((void*)0),            _while_condtional12) {
                prev_it_142=it_141;
                it_141=it_141->next;
                if(prev_it_142 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_142, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result99__ = __result_obj__ = self;
            return __result99__;
}

int sLoadNode_sline(struct sLoadNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result101__ = self->sline;
    return __result101__;
}

char* sLoadNode_sname(struct sLoadNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value188;
char* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value188, 0, sizeof(void*));
    __result102__ = __result_obj__ = ((char*)(right_value188=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value188);
    if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { right_value188 = come_decrement_ref_count(right_value188, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value188;
    __freed_obj__ = 0;
    return __result102__;
}

struct sNode* load_var(char* name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value189;
void* right_value190;
struct sNode* _inf_value2;
struct sLoadNode* _inf_obj_value2;
void* right_value194;
struct sNode* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value189, 0, sizeof(void*));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value194, 0, sizeof(void*));
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 707);
    _inf_obj_value2=come_increment_ref_count(((struct sLoadNode*)(right_value190=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value189=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 707)))),(char*)come_increment_ref_count(name),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLoadNode_finalize;
    _inf_value2->clone=(void*)sLoadNode_clone;
    _inf_value2->compile=(void*)sLoadNode_compile;
    _inf_value2->sline=(void*)sLoadNode_sline;
    _inf_value2->sname=(void*)sLoadNode_sname;
    _inf_value2->terminated=(void*)sLoadNode_terminated;
    _inf_value2->kind=(void*)sLoadNode_kind;
    __result105__ = __result_obj__ = ((struct sNode*)(right_value194=_inf_value2));
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value189);
    if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value189;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value190);
    if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value190;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value194);
    if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { right_value194 = come_decrement_ref_count(right_value194, ((struct sNode*)right_value194)->finalize, ((struct sNode*)right_value194)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value194;
    __freed_obj__ = 0;
    return __result105__;
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
}

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value195;
char* __dec_obj88;
void* right_value196;
char* __dec_obj89;
struct sFunLoadNode* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
    __dec_obj88=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value195=__builtin_string(name))));
    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value195);
    if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { right_value195 = come_decrement_ref_count(right_value195, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value195;
    __freed_obj__ = 0;
    self->sline=info->sline;
    __dec_obj89=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value196=__builtin_string(info->sname))));
    if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value196);
    if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { right_value196 = come_decrement_ref_count(right_value196, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value196;
    __freed_obj__ = 0;
    __result106__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sFunLoadNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    return __result106__;
    if(self && !__freed_obj__) { come_call_finalizer(sFunLoadNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
}

static void sFunLoadNode_finalize(struct sFunLoadNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional246;
_Bool _if_conditional247;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional246=self!=((void*)0)&&self->name!=((void*)0),        _if_conditional246) {
            if(self->name && !__freed_obj__) { self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional247=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional247) {
            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
        }
}

_Bool sFunLoadNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result107__ = (_Bool)0;
    return __result107__;
}

char* sFunLoadNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value197;
char* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value197, 0, sizeof(void*));
    __result108__ = __result_obj__ = ((char*)(right_value197=__builtin_string("sFunLoadNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value197);
    if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { right_value197 = come_decrement_ref_count(right_value197, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value197;
    __freed_obj__ = 0;
    return __result108__;
}

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sFun* fun_144;
_Bool _if_conditional248;
_Bool __result109__;
void* right_value198;
struct CVALUE* come_value_145;
void* right_value199;
char* __dec_obj90;
struct sType* __dec_obj91;
_Bool __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&fun_144, 0, sizeof(struct sFun*));
memset(&right_value198, 0, sizeof(void*));
memset(&come_value_145, 0, sizeof(struct CVALUE*));
memset(&right_value199, 0, sizeof(void*));
    fun_144=map$2charphsFunphp_operator_load_element(info->funcs,self->name);
    if(_if_conditional248=fun_144==((void*)0),    _if_conditional248) {
        err_msg(info,"fun not found(%s) at loading variable\n",self->name);
        __result109__ = (_Bool)0;
        return __result109__;
    }
    else {
        come_value_145=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value198=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 746))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value198);
        if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value198;
        __freed_obj__ = 0;
        __dec_obj90=come_value_145->c_value;
        come_value_145->c_value=(char*)come_increment_ref_count(((char*)(right_value199=xsprintf("%s",fun_144->mName))));
        if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value199);
        if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { right_value199 = come_decrement_ref_count(right_value199, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value199;
        __freed_obj__ = 0;
        __dec_obj91=come_value_145->type;
        come_value_145->type=(struct sType*)come_increment_ref_count(fun_144->mLambdaType);
        if(__dec_obj91) { come_call_finalizer(sType_finalize,__dec_obj91, (void*)0, (void*)0, 0, 0, 0, 0); }
        come_value_145->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_145));
        if(come_value_145 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_145, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result110__ = (_Bool)1;
    return __result110__;
}

int sFunLoadNode_sline(struct sFunLoadNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result111__ = self->sline;
    return __result111__;
}

char* sFunLoadNode_sname(struct sFunLoadNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value200;
char* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value200, 0, sizeof(void*));
    __result112__ = __result_obj__ = ((char*)(right_value200=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value200);
    if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { right_value200 = come_decrement_ref_count(right_value200, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value200;
    __freed_obj__ = 0;
    return __result112__;
}

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value201;
struct sVar* self_146;
void* right_value202;
char* __dec_obj92;
void* right_value203;
struct sType* __dec_obj93;
_Bool _if_conditional253;
void* right_value204;
char* __dec_obj94;
static int n_147=0;
void* right_value205;
char* __dec_obj95;
_Bool _if_conditional254;
void* right_value206;
char* __dec_obj96;
char* __dec_obj97;
void* right_value217;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value201, 0, sizeof(void*));
memset(&self_146, 0, sizeof(struct sVar*));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
memset(&right_value217, 0, sizeof(void*));
    self_146=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value201=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 771))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value201);
    if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value201;
    __freed_obj__ = 0;
    __dec_obj92=self_146->mName;
    self_146->mName=(char*)come_increment_ref_count(((char*)(right_value202=__builtin_string(name))));
    if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value202);
    if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { right_value202 = come_decrement_ref_count(right_value202, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value202;
    __freed_obj__ = 0;
    __dec_obj93=self_146->mType;
    self_146->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value203=sType_clone(type))));
    if(__dec_obj93) { come_call_finalizer(sType_finalize,__dec_obj93, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value203);
    if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value203;
    __freed_obj__ = 0;
    if(_if_conditional253=type->mFunctionParam,    _if_conditional253) {
        __dec_obj94=self_146->mCValueName;
        self_146->mCValueName=(char*)come_increment_ref_count(((char*)(right_value204=__builtin_string(name))));
        if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value204);
        if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { right_value204 = come_decrement_ref_count(right_value204, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value204;
        __freed_obj__ = 0;
    }
    else {
        __dec_obj95=self_146->mCValueName;
        self_146->mCValueName=(char*)come_increment_ref_count(((char*)(right_value205=xsprintf("%s_%d",name,n_147++))));
        if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value205);
        if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { right_value205 = come_decrement_ref_count(right_value205, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value205;
        __freed_obj__ = 0;
    }
    self_146->mBlockLevel=info->block_level;
    self_146->mAllocaValue=(_Bool)0;
    self_146->mFunctionParam=(_Bool)0;
    self_146->mNoFree=(_Bool)0;
    if(_if_conditional254=info->come_fun,    _if_conditional254) {
        __dec_obj96=self_146->mFunName;
        self_146->mFunName=(char*)come_increment_ref_count(((char*)(right_value206=string_clone(info->come_fun->mName))));
        if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value206);
        if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value206;
        __freed_obj__ = 0;
    }
    else {
        __dec_obj97=self_146->mFunName;
        self_146->mFunName=((void*)0);
        if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0,0); }
    }
    map$2charphsVarph_insert(info->lv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value217=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_146));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value217);
    if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { right_value217 = come_decrement_ref_count(right_value217, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value217;
    __freed_obj__ = 0;
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(self_146 && !__freed_obj__) { come_call_finalizer(sVar_finalize,self_146, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional249;
_Bool _if_conditional250;
_Bool _if_conditional251;
_Bool _if_conditional252;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional249=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional249) {
            if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional250=self!=((void*)0)&&self->mCValueName!=((void*)0),        _if_conditional250) {
            if(self->mCValueName && !__freed_obj__) { self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional251=self!=((void*)0)&&self->mType!=((void*)0),        _if_conditional251) {
            if(self->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional252=self!=((void*)0)&&self->mFunName!=((void*)0),        _if_conditional252) {
            if(self->mFunName && !__freed_obj__) { self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, 0); }
        }
}

static struct map$2charphsVarph* map$2charphsVarph_insert(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional255;
unsigned int hash_165;
unsigned int it_166;
_Bool _while_condtional15;
_Bool _if_conditional267;
void* right_value211;
_Bool _if_conditional268;
_Bool _if_conditional269;
_Bool _if_conditional289;
_Bool _if_conditional290;
_Bool _if_conditional291;
_Bool _if_conditional292;
_Bool _if_conditional293;
_Bool same_key_exist_183;
char* it2_186;
_Bool _for_condtionalA11;
void* right_value213;
_Bool _if_conditional298;
_Bool _if_conditional299;
struct map$2charphsVarph* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_165, 0, sizeof(unsigned int));
memset(&it_166, 0, sizeof(unsigned int));
memset(&right_value211, 0, sizeof(void*));
memset(&same_key_exist_183, 0, sizeof(_Bool));
memset(&it2_186, 0, sizeof(char*));
memset(&right_value213, 0, sizeof(void*));
        if(_if_conditional255=self->len*10>=self->size,        _if_conditional255) {
            map$2charphsVarph_rehash(self);
        }
        hash_165=string_get_hash_key(key)%self->size;
        it_166=hash_165;
        while(_while_condtional15=(_Bool)1,        _while_condtional15) {
            if(_if_conditional267=self->item_existance[it_166],            _if_conditional267) {
                if(_if_conditional268=optional$2boolbool_value(((struct optional$2boolbool*)(right_value211=string_equals(self->keys[it_166],key)))),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value211),
                (right_value211 && right_value211 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value211, 
                __freed_obj__ = 0, 
                _if_conditional268) {
                    if(_if_conditional269=1,                    _if_conditional269) {
                        list$1charp_remove(self->key_list,self->keys[it_166]);
                        if(self->keys[it_166] && !__freed_obj__) { self->keys[it_166] = come_decrement_ref_count(self->keys[it_166], (void*)0, (void*)0, 0, 0, 0); }
                        self->keys[it_166]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charp_remove(self->key_list,self->keys[it_166]);
                        self->keys[it_166]=key;
                    }
                    if(_if_conditional289=1,                    _if_conditional289) {
                        if(self->items[it_166] && !__freed_obj__) { come_call_finalizer(sVar_finalize,self->items[it_166], (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->items[it_166]=(struct sVar*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_166]=item;
                    }
                    break;
                }
                it_166++;
                if(_if_conditional290=it_166>=self->size,                _if_conditional290) {
                    it_166=0;
                }
                else {
                    if(_if_conditional291=it_166==hash_165,                    _if_conditional291) {
                        printf("unexpected error in map.insert\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                self->item_existance[it_166]=(_Bool)1;
                if(_if_conditional292=1,                _if_conditional292) {
                    self->keys[it_166]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_166]=key;
                }
                if(_if_conditional293=1,                _if_conditional293) {
                    self->items[it_166]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_166]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_183=(_Bool)0;
        for(
        it2_186=list$1charp_begin(self->key_list) ,        0;        _for_condtionalA11=        !list$1charp_end(self->key_list) ,        _for_condtionalA11;        it2_186=list$1charp_next(self->key_list) ,        0        ){
            if(_if_conditional298=optional$2boolbool_value(((struct optional$2boolbool*)(right_value213=string_equals(it2_186,key)))),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value213),
            (right_value213 && right_value213 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value213, 
            __freed_obj__ = 0, 
            _if_conditional298) {
                same_key_exist_183=(_Bool)1;
            }
        }
        if(_if_conditional299=!same_key_exist_183,        _if_conditional299) {
            list$1charp_push_back(self->key_list,key);
        }
        __result136__ = __result_obj__ = self;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result136__;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_148;
void* right_value207;
char** keys_149;
void* right_value208;
struct sVar** items_150;
void* right_value209;
_Bool* item_existance_151;
int len_152;
char* it_155;
_Bool _for_condtionalA10;
struct sVar* default_value_158;
struct sVar* it2_161;
unsigned int hash_162;
int n_163;
_Bool _while_condtional14;
_Bool _if_conditional264;
_Bool _if_conditional265;
_Bool _if_conditional266;
struct sVar* default_value_164;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_148, 0, sizeof(int));
memset(&right_value207, 0, sizeof(void*));
memset(&keys_149, 0, sizeof(char**));
memset(&right_value208, 0, sizeof(void*));
memset(&items_150, 0, sizeof(struct sVar**));
memset(&right_value209, 0, sizeof(void*));
memset(&item_existance_151, 0, sizeof(_Bool*));
memset(&len_152, 0, sizeof(int));
memset(&it_155, 0, sizeof(char*));
memset(&default_value_158, 0, sizeof(struct sVar*));
memset(&it2_161, 0, sizeof(struct sVar*));
memset(&hash_162, 0, sizeof(unsigned int));
memset(&n_163, 0, sizeof(int));
memset(&default_value_164, 0, sizeof(struct sVar*));
                size_148=self->size*10;
                keys_149=(char**)come_increment_ref_count(((char**)(right_value207=(char**)come_calloc(1, sizeof(char*)*(1*(size_148)), "./comelang2.h", 1377))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value207);
                if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { right_value207 = come_decrement_ref_count(right_value207, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value207;
                __freed_obj__ = 0;
                items_150=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value208=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_148)), "./comelang2.h", 1378))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value208);
                if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value208;
                __freed_obj__ = 0;
                item_existance_151=(_Bool*)come_increment_ref_count(((_Bool*)(right_value209=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_148)), "./comelang2.h", 1379))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value209);
                if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { right_value209 = come_decrement_ref_count(right_value209, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value209;
                __freed_obj__ = 0;
                len_152=0;
                for(
                it_155=map$2charphsVarph_begin(self) ,                0;                _for_condtionalA10=                !map$2charphsVarph_end(self) ,                _for_condtionalA10;                it_155=map$2charphsVarph_next(self) ,                0                ){
                    memset(&default_value_158,0,sizeof(struct sVar*));
                    it2_161=map$2charphsVarph_at(self,it_155,default_value_158);
                    hash_162=string_get_hash_key(it_155)%size_148;
                    n_163=hash_162;
                    while(_while_condtional14=(_Bool)1,                    _while_condtional14) {
                        if(_if_conditional264=item_existance_151[n_163],                        _if_conditional264) {
                            n_163++;
                            if(_if_conditional265=n_163>=size_148,                            _if_conditional265) {
                                n_163=0;
                            }
                            else {
                                if(_if_conditional266=n_163==hash_162,                                _if_conditional266) {
                                    printf("unexpected error in map.rehash(1)\n");
                                    stackframe();
                                    exit(2);
                                }
                            }
                        }
                        else {
                            item_existance_151[n_163]=(_Bool)1;
                            keys_149[n_163]=it_155;
                            items_150[n_163]=map$2charphsVarph_at(self,it_155,default_value_164);
                            len_152++;
                            break;
                        }
                    }
                }
                come_free_object((char*)self->items);
                if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                come_free_object((char*)self->keys);
                self->keys=keys_149;
                self->items=items_150;
                self->item_existance=item_existance_151;
                self->size=size_148;
                self->len=len_152;
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional256;
char* result_153;
char* __result113__;
_Bool _if_conditional257;
char* __result114__;
char* result_154;
char* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_153, 0, sizeof(char*));
memset(&result_154, 0, sizeof(char*));
                    if(_if_conditional256=self==((void*)0),                    _if_conditional256) {
                        memset(&result_153,0,sizeof(char*));
                        __result113__ = __result_obj__ = result_153;
                        return __result113__;
                    }
                    self->key_list->it=self->key_list->head;
                    if(_if_conditional257=self->key_list->it,                    _if_conditional257) {
                        __result114__ = __result_obj__ = self->key_list->it->item;
                        return __result114__;
                    }
                    memset(&result_154,0,sizeof(char*));
                    __result115__ = __result_obj__ = result_154;
                    return __result115__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __result116__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result116__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional258;
char* result_156;
char* __result117__;
_Bool _if_conditional259;
char* __result118__;
char* result_157;
char* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_156, 0, sizeof(char*));
memset(&result_157, 0, sizeof(char*));
                    if(_if_conditional258=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional258) {
                        memset(&result_156,0,sizeof(char*));
                        __result117__ = __result_obj__ = result_156;
                        return __result117__;
                    }
                    self->key_list->it=self->key_list->it->next;
                    if(_if_conditional259=self->key_list->it,                    _if_conditional259) {
                        __result118__ = __result_obj__ = self->key_list->it->item;
                        return __result118__;
                    }
                    memset(&result_157,0,sizeof(char*));
                    __result119__ = __result_obj__ = result_157;
                    return __result119__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_159;
unsigned int it_160;
_Bool _while_condtional13;
_Bool _if_conditional260;
void* right_value210;
_Bool _if_conditional261;
struct sVar* __result120__;
_Bool _if_conditional262;
_Bool _if_conditional263;
struct sVar* __result121__;
struct sVar* __result122__;
struct sVar* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_159, 0, sizeof(unsigned int));
memset(&it_160, 0, sizeof(unsigned int));
memset(&right_value210, 0, sizeof(void*));
                        hash_159=string_get_hash_key(((char*)key))%self->size;
                        it_160=hash_159;
                        while(_while_condtional13=(_Bool)1,                        _while_condtional13) {
                            if(_if_conditional260=self->item_existance[it_160],                            _if_conditional260) {
                                if(_if_conditional261=optional$2boolbool_value(((struct optional$2boolbool*)(right_value210=string_equals(self->keys[it_160],key)))),                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value210),
                                (right_value210 && right_value210 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value210, 
                                __freed_obj__ = 0, 
                                _if_conditional261) {
                                    __result120__ = __result_obj__ = self->items[it_160];
                                    return __result120__;
                                }
                                it_160++;
                                if(_if_conditional262=it_160>=self->size,                                _if_conditional262) {
                                    it_160=0;
                                }
                                else {
                                    if(_if_conditional263=it_160==hash_159,                                    _if_conditional263) {
                                        __result121__ = __result_obj__ = default_value;
                                        return __result121__;
                                    }
                                }
                            }
                            else {
                                __result122__ = __result_obj__ = default_value;
                                return __result122__;
                            }
                        }
                        __result123__ = __result_obj__ = default_value;
                        return __result123__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int it2_167;
struct list_item$1charp* it_168;
_Bool _while_condtional16;
void* right_value212;
_Bool _if_conditional270;
struct list$1charp* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_167, 0, sizeof(int));
memset(&it_168, 0, sizeof(struct list_item$1charp*));
memset(&right_value212, 0, sizeof(void*));
                            it2_167=0;
                            it_168=self->head;
                            while(_while_condtional16=it_168!=((void*)0),                            _while_condtional16) {
                                if(_if_conditional270=optional$2boolbool_value(((struct optional$2boolbool*)(right_value212=string_equals(it_168->item,item)))),                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value212),
                                (right_value212 && right_value212 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value212, 
                                __freed_obj__ = 0, 
                                _if_conditional270) {
                                    list$1charp_delete(self,it2_167,it2_167+1);
                                    break;
                                }
                                it2_167++;
                                it_168=it_168->next;
                            }
                            __result127__ = __result_obj__ = self;
                            return __result127__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional271;
_Bool _if_conditional272;
_Bool _if_conditional273;
int tmp_169;
_Bool _if_conditional274;
_Bool _if_conditional275;
_Bool _if_conditional276;
struct list$1charp* __result124__;
_Bool _if_conditional277;
_Bool _if_conditional278;
struct list_item$1charp* it_172;
int i_173;
_Bool _while_condtional18;
_Bool _if_conditional279;
struct list_item$1charp* prev_it_174;
_Bool _if_conditional280;
_Bool _if_conditional281;
struct list_item$1charp* it_175;
int i_176;
_Bool _while_condtional19;
_Bool _if_conditional282;
_Bool _if_conditional283;
struct list_item$1charp* prev_it_177;
struct list_item$1charp* it_178;
struct list_item$1charp* head_prev_it_179;
struct list_item$1charp* tail_it_180;
int i_181;
_Bool _while_condtional20;
_Bool _if_conditional284;
_Bool _if_conditional285;
_Bool _if_conditional286;
struct list_item$1charp* prev_it_182;
_Bool _if_conditional287;
_Bool _if_conditional288;
struct list$1charp* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_169, 0, sizeof(int));
memset(&it_172, 0, sizeof(struct list_item$1charp*));
memset(&i_173, 0, sizeof(int));
memset(&prev_it_174, 0, sizeof(struct list_item$1charp*));
memset(&it_175, 0, sizeof(struct list_item$1charp*));
memset(&i_176, 0, sizeof(int));
memset(&prev_it_177, 0, sizeof(struct list_item$1charp*));
memset(&it_178, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_179, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_180, 0, sizeof(struct list_item$1charp*));
memset(&i_181, 0, sizeof(int));
memset(&prev_it_182, 0, sizeof(struct list_item$1charp*));
                                        if(_if_conditional271=head<0,                                        _if_conditional271) {
                                            head+=self->len;
                                        }
                                        if(_if_conditional272=tail<0,                                        _if_conditional272) {
                                            tail+=self->len+1;
                                        }
                                        if(_if_conditional273=head>tail,                                        _if_conditional273) {
                                            tmp_169=tail;
                                            tail=head;
                                            head=tmp_169;
                                        }
                                        if(_if_conditional274=head<0,                                        _if_conditional274) {
                                            head=0;
                                        }
                                        if(_if_conditional275=tail>self->len,                                        _if_conditional275) {
                                            tail=self->len;
                                        }
                                        if(_if_conditional276=head==tail,                                        _if_conditional276) {
                                            __result124__ = __result_obj__ = self;
                                            return __result124__;
                                        }
                                        if(_if_conditional277=head==0&&tail==self->len,                                        _if_conditional277) {
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            if(_if_conditional278=head==0,                                            _if_conditional278) {
                                                it_172=self->head;
                                                i_173=0;
                                                while(_while_condtional18=it_172!=((void*)0),                                                _while_condtional18) {
                                                    if(_if_conditional279=i_173<tail,                                                    _if_conditional279) {
                                                        prev_it_174=it_172;
                                                        it_172=it_172->next;
                                                        i_173++;
                                                        if(prev_it_174 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_174, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        self->len--;
                                                    }
                                                    else {
                                                        if(_if_conditional280=i_173==tail,                                                        _if_conditional280) {
                                                            self->head=it_172;
                                                            self->head->prev=((void*)0);
                                                            break;
                                                        }
                                                        else {
                                                            it_172=it_172->next;
                                                            i_173++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                if(_if_conditional281=tail==self->len,                                                _if_conditional281) {
                                                    it_175=self->head;
                                                    i_176=0;
                                                    while(_while_condtional19=it_175!=((void*)0),                                                    _while_condtional19) {
                                                        if(_if_conditional282=i_176==head,                                                        _if_conditional282) {
                                                            self->tail=it_175->prev;
                                                            self->tail->next=((void*)0);
                                                        }
                                                        if(_if_conditional283=i_176>=head,                                                        _if_conditional283) {
                                                            prev_it_177=it_175;
                                                            it_175=it_175->next;
                                                            i_176++;
                                                            if(prev_it_177 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_177, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_175=it_175->next;
                                                            i_176++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    it_178=self->head;
                                                    head_prev_it_179=((void*)0);
                                                    tail_it_180=((void*)0);
                                                    i_181=0;
                                                    while(_while_condtional20=it_178!=((void*)0),                                                    _while_condtional20) {
                                                        if(_if_conditional284=i_181==head,                                                        _if_conditional284) {
                                                            head_prev_it_179=it_178->prev;
                                                        }
                                                        if(_if_conditional285=i_181==tail,                                                        _if_conditional285) {
                                                            tail_it_180=it_178;
                                                        }
                                                        if(_if_conditional286=i_181>=head&&i_181<tail,                                                        _if_conditional286) {
                                                            prev_it_182=it_178;
                                                            it_178=it_178->next;
                                                            i_181++;
                                                            if(prev_it_182 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_182, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_178=it_178->next;
                                                            i_181++;
                                                        }
                                                    }
                                                    if(_if_conditional287=head_prev_it_179!=((void*)0),                                                    _if_conditional287) {
                                                        head_prev_it_179->next=tail_it_180;
                                                    }
                                                    if(_if_conditional288=tail_it_180!=((void*)0),                                                    _if_conditional288) {
                                                        tail_it_180->prev=head_prev_it_179;
                                                    }
                                                }
                                            }
                                        }
                                        __result126__ = __result_obj__ = self;
                                        return __result126__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_170;
_Bool _while_condtional17;
struct list_item$1charp* prev_it_171;
struct list$1charp* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_170, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_171, 0, sizeof(struct list_item$1charp*));
                                                it_170=self->head;
                                                while(_while_condtional17=it_170!=((void*)0),                                                _while_condtional17) {
                                                    prev_it_171=it_170;
                                                    it_170=it_170->next;
                                                    if(prev_it_171 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_171, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                }
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                __result125__ = __result_obj__ = self;
                                                return __result125__;
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
_Bool _if_conditional294;
char* result_184;
char* __result128__;
_Bool _if_conditional295;
char* __result129__;
char* result_185;
char* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_184, 0, sizeof(char*));
memset(&result_185, 0, sizeof(char*));
            if(_if_conditional294=self==((void*)0),            _if_conditional294) {
                memset(&result_184,0,sizeof(char*));
                __result128__ = __result_obj__ = result_184;
                return __result128__;
            }
            self->it=self->head;
            if(_if_conditional295=self->it,            _if_conditional295) {
                __result129__ = __result_obj__ = self->it->item;
                return __result129__;
            }
            memset(&result_185,0,sizeof(char*));
            __result130__ = __result_obj__ = result_185;
            return __result130__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result131__ = self==((void*)0)||self->it==((void*)0);
            return __result131__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional296;
char* result_187;
char* __result132__;
_Bool _if_conditional297;
char* __result133__;
char* result_188;
char* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_187, 0, sizeof(char*));
memset(&result_188, 0, sizeof(char*));
            if(_if_conditional296=self==((void*)0)||self->it==((void*)0),            _if_conditional296) {
                memset(&result_187,0,sizeof(char*));
                __result132__ = __result_obj__ = result_187;
                return __result132__;
            }
            self->it=self->it->next;
            if(_if_conditional297=self->it,            _if_conditional297) {
                __result133__ = __result_obj__ = self->it->item;
                return __result133__;
            }
            memset(&result_188,0,sizeof(char*));
            __result134__ = __result_obj__ = result_188;
            return __result134__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional300;
void* right_value214;
struct list_item$1charp* litem_189;
_Bool _if_conditional301;
void* right_value215;
struct list_item$1charp* litem_190;
void* right_value216;
struct list_item$1charp* litem_191;
struct list$1charp* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value214, 0, sizeof(void*));
memset(&litem_189, 0, sizeof(struct list_item$1charp*));
memset(&right_value215, 0, sizeof(void*));
memset(&litem_190, 0, sizeof(struct list_item$1charp*));
memset(&right_value216, 0, sizeof(void*));
memset(&litem_191, 0, sizeof(struct list_item$1charp*));
                if(_if_conditional300=self->len==0,                _if_conditional300) {
                    litem_189=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value214=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 279))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value214);
                    if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value214;
                    __freed_obj__ = 0;
                    litem_189->prev=((void*)0);
                    litem_189->next=((void*)0);
                    litem_189->item=item;
                    self->tail=litem_189;
                    self->head=litem_189;
                }
                else {
                    if(_if_conditional301=self->len==1,                    _if_conditional301) {
                        litem_190=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value215=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 289))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value215);
                        if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value215;
                        __freed_obj__ = 0;
                        litem_190->prev=self->head;
                        litem_190->next=((void*)0);
                        litem_190->item=item;
                        self->tail=litem_190;
                        self->head->next=litem_190;
                    }
                    else {
                        litem_191=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value216=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 299))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value216);
                        if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value216;
                        __freed_obj__ = 0;
                        litem_191->prev=self->tail;
                        litem_191->next=((void*)0);
                        litem_191->item=item;
                        self->tail->next=litem_191;
                        self->tail=litem_191;
                    }
                }
                self->len++;
                __result135__ = __result_obj__ = self;
                return __result135__;
}

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value218;
struct sVar* self_192;
void* right_value219;
char* __dec_obj98;
void* right_value220;
struct sType* __dec_obj99;
void* right_value221;
char* __dec_obj100;
void* right_value222;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value218, 0, sizeof(void*));
memset(&self_192, 0, sizeof(struct sVar*));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
memset(&right_value222, 0, sizeof(void*));
    self_192=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value218=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 800))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value218);
    if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value218;
    __freed_obj__ = 0;
    __dec_obj98=self_192->mName;
    self_192->mName=(char*)come_increment_ref_count(((char*)(right_value219=__builtin_string(name))));
    if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value219);
    if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { right_value219 = come_decrement_ref_count(right_value219, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value219;
    __freed_obj__ = 0;
    __dec_obj99=self_192->mType;
    self_192->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value220=sType_clone(type))));
    if(__dec_obj99) { come_call_finalizer(sType_finalize,__dec_obj99, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value220);
    if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value220;
    __freed_obj__ = 0;
    self_192->mGlobal=(_Bool)1;
    __dec_obj100=self_192->mCValueName;
    self_192->mCValueName=(char*)come_increment_ref_count(((char*)(right_value221=__builtin_string(name))));
    if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value221);
    if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { right_value221 = come_decrement_ref_count(right_value221, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value221;
    __freed_obj__ = 0;
    self_192->mBlockLevel=info->block_level;
    self_192->mAllocaValue=(_Bool)0;
    self_192->mFunctionParam=(_Bool)0;
    self_192->mNoFree=(_Bool)0;
    map$2charphsVarph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value222=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_192));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value222);
    if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { right_value222 = come_decrement_ref_count(right_value222, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value222;
    __freed_obj__ = 0;
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(self_192 && !__freed_obj__) { come_call_finalizer(sVar_finalize,self_192, (void*)0, (void*)0, 0, 0, 0, 0); }
}

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value223;
struct sVar* self_193;
void* right_value224;
char* __dec_obj101;
void* right_value225;
struct sType* __dec_obj102;
void* right_value226;
char* __dec_obj103;
void* right_value227;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value223, 0, sizeof(void*));
memset(&self_193, 0, sizeof(struct sVar*));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
    self_193=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value223=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 819))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value223);
    if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value223;
    __freed_obj__ = 0;
    __dec_obj101=self_193->mName;
    self_193->mName=(char*)come_increment_ref_count(((char*)(right_value224=__builtin_string(name))));
    if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value224);
    if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { right_value224 = come_decrement_ref_count(right_value224, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value224;
    __freed_obj__ = 0;
    __dec_obj102=self_193->mType;
    self_193->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value225=sType_clone(type))));
    if(__dec_obj102) { come_call_finalizer(sType_finalize,__dec_obj102, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value225);
    if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value225;
    __freed_obj__ = 0;
    self_193->mGlobal=(_Bool)1;
    __dec_obj103=self_193->mCValueName;
    self_193->mCValueName=(char*)come_increment_ref_count(((char*)(right_value226=__builtin_string(c_value))));
    if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value226);
    if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { right_value226 = come_decrement_ref_count(right_value226, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value226;
    __freed_obj__ = 0;
    self_193->mBlockLevel=info->block_level;
    self_193->mAllocaValue=(_Bool)0;
    self_193->mFunctionParam=(_Bool)0;
    self_193->mNoFree=(_Bool)0;
    map$2charphsVarph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value227=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_193));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value227);
    if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { right_value227 = come_decrement_ref_count(right_value227, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value227;
    __freed_obj__ = 0;
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(self_193 && !__freed_obj__) { come_call_finalizer(sVar_finalize,self_193, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct optional$2sNodephbool* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool is_type_name_flag_194;
_Bool multiple_declare_195;
_Bool _if_conditional302;
char* p_196;
int sline_197;
void* right_value228;
struct tuple3$3sTypephcharphbool* multiple_assgin_var2;
struct sType* type_198;
char* name_199;
_Bool err_200;
_Bool _if_conditional305;
_Bool multiple_declare2_201;
_Bool _if_conditional306;
char* p_202;
int sline_203;
void* right_value229;
struct tuple3$3sTypephcharphbool* multiple_assgin_var3;
struct sType* type_204;
char* name_205;
_Bool err_206;
_Bool _if_conditional307;
_Bool _if_conditional308;
_Bool no_output_err_207;
_Bool no_comma_208;
_Bool no_output_come_code_209;
void* right_value230;
struct sNode* exp_210;
_Bool _if_conditional309;
struct sFun* fun_211;
_Bool _if_conditional310;
void* right_value231;
char* buf2_212;
struct list$1charph* multiple_assign_213;
_Bool _if_conditional311;
void* right_value232;
void* right_value233;
struct list$1charph* __dec_obj104;
void* right_value237;
_Bool _while_condtional21;
void* right_value238;
char* buf3_217;
void* right_value239;
_Bool _if_conditional314;
_Bool no_comma_218;
void* right_value240;
struct sNode* right_value_219;
void* right_value241;
struct sNode* __dec_obj108;
void* right_value242;
void* right_value243;
void* right_value244;
struct sNode* _inf_value3;
struct sStoreNode* _inf_obj_value3;
void* right_value253;
struct sNode* result_221;
void* right_value254;
void* right_value255;
struct optional$2sNodephbool* __result141__;
void* right_value256;
void* right_value257;
struct optional$2sNodephbool* __result143__;
_Bool _if_conditional333;
void* right_value258;
void* right_value259;
struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare_222;
void* right_value260;
struct tuple3$3sTypephcharphbool* multiple_assgin_var4;
struct sType* base_type_223;
char* name_224;
_Bool err_225;
void* right_value261;
struct tuple2$2sTypephcharph* variable_name_226;
void* right_value262;
void* right_value265;
struct tuple3$3sTypephcharphsNodeph* variable_name2_227;
_Bool _while_condtional22;
void* right_value269;
struct tuple2$2sTypephcharph* variable_name_231;
void* right_value270;
void* right_value271;
struct tuple3$3sTypephcharphsNodeph* variable_name2_232;
void* right_value272;
void* right_value273;
void* right_value274;
struct sNode* _inf_value4;
struct sStoreNode* _inf_obj_value4;
void* right_value283;
struct sNode* result_234;
void* right_value284;
void* right_value285;
struct optional$2sNodephbool* __result148__;
_Bool _if_conditional357;
void* right_value286;
void* right_value287;
struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare_235;
void* right_value288;
struct tuple3$3sTypephcharphbool* multiple_assgin_var5;
struct sType* base_type_236;
char* name_237;
_Bool err_238;
void* right_value289;
struct tuple2$2sTypephcharph* variable_name_239;
_Bool _if_conditional358;
_Bool no_comma_240;
void* right_value290;
struct sNode* exp_241;
void* right_value291;
void* right_value295;
struct tuple3$3sTypephcharphsNodeph* variable_name2_242;
_Bool _while_condtional23;
void* right_value296;
struct tuple2$2sTypephcharph* variable_name_243;
_Bool _if_conditional359;
_Bool no_comma_244;
void* right_value297;
struct sNode* exp_245;
void* right_value298;
void* right_value299;
struct tuple3$3sTypephcharphsNodeph* variable_name2_246;
void* right_value300;
void* right_value301;
void* right_value302;
struct sNode* _inf_value5;
struct sStoreNode* _inf_obj_value5;
void* right_value311;
struct sNode* result_248;
void* right_value312;
void* right_value313;
struct optional$2sNodephbool* __result152__;
_Bool _if_conditional377;
void* right_value314;
struct sNode* right_value_249;
void* right_value315;
struct sNode* __dec_obj139;
void* right_value316;
void* right_value317;
void* right_value318;
struct sNode* _inf_value6;
struct sStoreNode* _inf_obj_value6;
void* right_value327;
struct sNode* result_251;
void* right_value328;
void* right_value329;
struct optional$2sNodephbool* __result155__;
_Bool _if_conditional395;
void* right_value330;
void* right_value331;
void* right_value332;
struct sNode* _inf_value7;
struct sLoadNode* _inf_obj_value7;
void* right_value336;
struct sNode* node_253;
void* right_value337;
struct sNode* __dec_obj149;
void* right_value338;
struct sNode* __dec_obj150;
void* right_value339;
void* right_value340;
struct optional$2sNodephbool* __result158__;
void* right_value341;
char* word_254;
_Bool _if_conditional402;
void* right_value342;
char* __dec_obj151;
_Bool is_type_name_flag_255;
_Bool _if_conditional403;
void* right_value343;
struct tuple3$3sTypephcharphbool* multiple_assgin_var6;
struct sType* type_256;
char* name_257;
_Bool err_258;
_Bool _if_conditional404;
void* right_value344;
void* right_value345;
struct optional$2sNodephbool* __result159__;
_Bool _if_conditional405;
_Bool _if_conditional406;
void* right_value346;
void* right_value347;
struct buffer* buf2_259;
_Bool squort_260;
_Bool dquort_261;
int nest_262;
_Bool _while_condtional24;
_Bool _if_conditional407;
void* right_value348;
void* right_value349;
struct optional$2sNodephbool* __result160__;
_Bool _if_conditional408;
_Bool _if_conditional409;
_Bool _if_conditional410;
_Bool _if_conditional411;
_Bool _if_conditional412;
_Bool _if_conditional413;
_Bool _if_conditional414;
void* right_value350;
char* array_initializer_263;
void* right_value351;
void* right_value352;
struct sNode* _inf_value8;
struct sStoreNode* _inf_obj_value8;
void* right_value361;
struct sNode* result_265;
void* right_value362;
void* right_value363;
struct optional$2sNodephbool* __result163__;
void* right_value364;
struct sNode* right_value_266;
void* right_value365;
void* right_value366;
struct list$1sNodeph* right_values_267;
_Bool _while_condtional25;
char* anonymous_var_nameX1836_268;
void* right_value367;
struct sNode* __dec_obj159;
void* right_value368;
void* right_value369;
struct sNode* _inf_value9;
struct sStoreNode* _inf_obj_value9;
void* right_value378;
struct sNode* result_270;
void* right_value379;
void* right_value380;
struct optional$2sNodephbool* __result166__;
void* right_value381;
void* right_value382;
struct sNode* _inf_value10;
struct sStoreNode* _inf_obj_value10;
void* right_value391;
struct sNode* result_272;
void* right_value392;
void* right_value393;
struct optional$2sNodephbool* __result169__;
void* right_value394;
struct __current_stack1__ __current_stack1__;
void* right_value397;
struct sNode* result_273;
void* right_value398;
void* right_value399;
struct optional$2sNodephbool* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&is_type_name_flag_194, 0, sizeof(_Bool));
memset(&multiple_declare_195, 0, sizeof(_Bool));
memset(&p_196, 0, sizeof(char*));
memset(&sline_197, 0, sizeof(int));
memset(&right_value228, 0, sizeof(void*));
memset(&type_198, 0, sizeof(struct sType*));
memset(&name_199, 0, sizeof(char*));
memset(&err_200, 0, sizeof(_Bool));
memset(&type_198, 0, sizeof(struct sType*));
memset(&name_199, 0, sizeof(char*));
memset(&err_200, 0, sizeof(_Bool));
memset(&multiple_declare2_201, 0, sizeof(_Bool));
memset(&p_202, 0, sizeof(char*));
memset(&sline_203, 0, sizeof(int));
memset(&right_value229, 0, sizeof(void*));
memset(&type_204, 0, sizeof(struct sType*));
memset(&name_205, 0, sizeof(char*));
memset(&err_206, 0, sizeof(_Bool));
memset(&type_204, 0, sizeof(struct sType*));
memset(&name_205, 0, sizeof(char*));
memset(&err_206, 0, sizeof(_Bool));
memset(&no_output_err_207, 0, sizeof(_Bool));
memset(&no_comma_208, 0, sizeof(_Bool));
memset(&no_output_come_code_209, 0, sizeof(_Bool));
memset(&right_value230, 0, sizeof(void*));
memset(&exp_210, 0, sizeof(struct sNode*));
memset(&fun_211, 0, sizeof(struct sFun*));
memset(&right_value231, 0, sizeof(void*));
memset(&buf2_212, 0, sizeof(char*));
memset(&multiple_assign_213, 0, sizeof(struct list$1charph*));
memset(&right_value232, 0, sizeof(void*));
memset(&right_value233, 0, sizeof(void*));
memset(&right_value237, 0, sizeof(void*));
memset(&right_value238, 0, sizeof(void*));
memset(&buf3_217, 0, sizeof(char*));
memset(&right_value239, 0, sizeof(void*));
memset(&no_comma_218, 0, sizeof(_Bool));
memset(&right_value240, 0, sizeof(void*));
memset(&right_value_219, 0, sizeof(struct sNode*));
memset(&right_value241, 0, sizeof(void*));
memset(&right_value242, 0, sizeof(void*));
memset(&right_value243, 0, sizeof(void*));
memset(&right_value244, 0, sizeof(void*));
memset(&right_value253, 0, sizeof(void*));
memset(&result_221, 0, sizeof(struct sNode*));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value255, 0, sizeof(void*));
memset(&right_value256, 0, sizeof(void*));
memset(&right_value257, 0, sizeof(void*));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
memset(&multiple_declare_222, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
memset(&right_value260, 0, sizeof(void*));
memset(&base_type_223, 0, sizeof(struct sType*));
memset(&name_224, 0, sizeof(char*));
memset(&err_225, 0, sizeof(_Bool));
memset(&base_type_223, 0, sizeof(struct sType*));
memset(&name_224, 0, sizeof(char*));
memset(&err_225, 0, sizeof(_Bool));
memset(&right_value261, 0, sizeof(void*));
memset(&variable_name_226, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&right_value262, 0, sizeof(void*));
memset(&right_value265, 0, sizeof(void*));
memset(&variable_name2_227, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&right_value269, 0, sizeof(void*));
memset(&variable_name_231, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&right_value270, 0, sizeof(void*));
memset(&right_value271, 0, sizeof(void*));
memset(&variable_name2_232, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&right_value272, 0, sizeof(void*));
memset(&right_value273, 0, sizeof(void*));
memset(&right_value274, 0, sizeof(void*));
memset(&right_value283, 0, sizeof(void*));
memset(&result_234, 0, sizeof(struct sNode*));
memset(&right_value284, 0, sizeof(void*));
memset(&right_value285, 0, sizeof(void*));
memset(&right_value286, 0, sizeof(void*));
memset(&right_value287, 0, sizeof(void*));
memset(&multiple_declare_235, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
memset(&right_value288, 0, sizeof(void*));
memset(&base_type_236, 0, sizeof(struct sType*));
memset(&name_237, 0, sizeof(char*));
memset(&err_238, 0, sizeof(_Bool));
memset(&base_type_236, 0, sizeof(struct sType*));
memset(&name_237, 0, sizeof(char*));
memset(&err_238, 0, sizeof(_Bool));
memset(&right_value289, 0, sizeof(void*));
memset(&variable_name_239, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&no_comma_240, 0, sizeof(_Bool));
memset(&right_value290, 0, sizeof(void*));
memset(&exp_241, 0, sizeof(struct sNode*));
memset(&right_value291, 0, sizeof(void*));
memset(&right_value295, 0, sizeof(void*));
memset(&variable_name2_242, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&right_value296, 0, sizeof(void*));
memset(&variable_name_243, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&no_comma_244, 0, sizeof(_Bool));
memset(&right_value297, 0, sizeof(void*));
memset(&exp_245, 0, sizeof(struct sNode*));
memset(&right_value298, 0, sizeof(void*));
memset(&right_value299, 0, sizeof(void*));
memset(&variable_name2_246, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&right_value300, 0, sizeof(void*));
memset(&right_value301, 0, sizeof(void*));
memset(&right_value302, 0, sizeof(void*));
memset(&right_value311, 0, sizeof(void*));
memset(&result_248, 0, sizeof(struct sNode*));
memset(&right_value312, 0, sizeof(void*));
memset(&right_value313, 0, sizeof(void*));
memset(&right_value314, 0, sizeof(void*));
memset(&right_value_249, 0, sizeof(struct sNode*));
memset(&right_value315, 0, sizeof(void*));
memset(&right_value316, 0, sizeof(void*));
memset(&right_value317, 0, sizeof(void*));
memset(&right_value318, 0, sizeof(void*));
memset(&right_value327, 0, sizeof(void*));
memset(&result_251, 0, sizeof(struct sNode*));
memset(&right_value328, 0, sizeof(void*));
memset(&right_value329, 0, sizeof(void*));
memset(&right_value330, 0, sizeof(void*));
memset(&right_value331, 0, sizeof(void*));
memset(&right_value332, 0, sizeof(void*));
memset(&right_value336, 0, sizeof(void*));
memset(&node_253, 0, sizeof(struct sNode*));
memset(&right_value337, 0, sizeof(void*));
memset(&right_value338, 0, sizeof(void*));
memset(&right_value339, 0, sizeof(void*));
memset(&right_value340, 0, sizeof(void*));
memset(&right_value341, 0, sizeof(void*));
memset(&word_254, 0, sizeof(char*));
memset(&right_value342, 0, sizeof(void*));
memset(&is_type_name_flag_255, 0, sizeof(_Bool));
memset(&right_value343, 0, sizeof(void*));
memset(&type_256, 0, sizeof(struct sType*));
memset(&name_257, 0, sizeof(char*));
memset(&err_258, 0, sizeof(_Bool));
memset(&type_256, 0, sizeof(struct sType*));
memset(&name_257, 0, sizeof(char*));
memset(&err_258, 0, sizeof(_Bool));
memset(&right_value344, 0, sizeof(void*));
memset(&right_value345, 0, sizeof(void*));
memset(&right_value346, 0, sizeof(void*));
memset(&right_value347, 0, sizeof(void*));
memset(&buf2_259, 0, sizeof(struct buffer*));
memset(&squort_260, 0, sizeof(_Bool));
memset(&dquort_261, 0, sizeof(_Bool));
memset(&nest_262, 0, sizeof(int));
memset(&right_value348, 0, sizeof(void*));
memset(&right_value349, 0, sizeof(void*));
memset(&right_value350, 0, sizeof(void*));
memset(&array_initializer_263, 0, sizeof(char*));
memset(&right_value351, 0, sizeof(void*));
memset(&right_value352, 0, sizeof(void*));
memset(&right_value361, 0, sizeof(void*));
memset(&result_265, 0, sizeof(struct sNode*));
memset(&right_value362, 0, sizeof(void*));
memset(&right_value363, 0, sizeof(void*));
memset(&right_value364, 0, sizeof(void*));
memset(&right_value_266, 0, sizeof(struct sNode*));
memset(&right_value365, 0, sizeof(void*));
memset(&right_value366, 0, sizeof(void*));
memset(&right_values_267, 0, sizeof(struct list$1sNodeph*));
memset(&anonymous_var_nameX1836_268, 0, sizeof(char*));
memset(&right_value367, 0, sizeof(void*));
memset(&right_value368, 0, sizeof(void*));
memset(&right_value369, 0, sizeof(void*));
memset(&right_value378, 0, sizeof(void*));
memset(&result_270, 0, sizeof(struct sNode*));
memset(&right_value379, 0, sizeof(void*));
memset(&right_value380, 0, sizeof(void*));
memset(&right_value381, 0, sizeof(void*));
memset(&right_value382, 0, sizeof(void*));
memset(&right_value391, 0, sizeof(void*));
memset(&result_272, 0, sizeof(struct sNode*));
memset(&right_value392, 0, sizeof(void*));
memset(&right_value393, 0, sizeof(void*));
memset(&right_value394, 0, sizeof(void*));
memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
memset(&right_value397, 0, sizeof(void*));
memset(&result_273, 0, sizeof(struct sNode*));
memset(&right_value398, 0, sizeof(void*));
memset(&right_value399, 0, sizeof(void*));
    is_type_name_flag_194=is_type_name(buf,info);
    multiple_declare_195=(_Bool)0;
    if(_if_conditional302=is_type_name_flag_194,    _if_conditional302) {
        p_196=info->p;
        sline_197=info->sline;
        info->p=head;
        info->sline=head_sline;
        multiple_assgin_var2=((struct tuple3$3sTypephcharphbool*)(right_value228=parse_type(info,(_Bool)1,(_Bool)1)));
        type_198=(struct sType*)come_increment_ref_count(multiple_assgin_var2->v1);
        name_199=(char*)come_increment_ref_count(multiple_assgin_var2->v2);
        err_200=multiple_assgin_var2->v3;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value228);
        if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value228;
        __freed_obj__ = 0;
        if(_if_conditional305=err_200&&*info->p==44,        _if_conditional305) {
            multiple_declare_195=(_Bool)1;
        }
        info->p=p_196;
        info->sline=sline_197;
        if(type_198 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_198, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(name_199 && !__freed_obj__) { name_199 = come_decrement_ref_count(name_199, (void*)0, (void*)0, 0, 0, 0); }
    }
    multiple_declare2_201=(_Bool)0;
    if(_if_conditional306=is_type_name_flag_194,    _if_conditional306) {
        p_202=info->p;
        sline_203=info->sline;
        info->p=head;
        info->sline=head_sline;
        multiple_assgin_var3=((struct tuple3$3sTypephcharphbool*)(right_value229=parse_type(info,(_Bool)1,(_Bool)1)));
        type_204=(struct sType*)come_increment_ref_count(multiple_assgin_var3->v1);
        name_205=(char*)come_increment_ref_count(multiple_assgin_var3->v2);
        err_206=multiple_assgin_var3->v3;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value229);
        if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value229;
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        if(_if_conditional307=err_206&&*info->p==61,        _if_conditional307) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            if(_if_conditional308=*info->p==123,            _if_conditional308) {
            }
            else {
                no_output_err_207=info->no_output_err;
                no_comma_208=info->no_comma;
                no_output_come_code_209=info->no_output_come_code;
                info->no_output_err=(_Bool)1;
                info->no_comma=(_Bool)1;
                info->no_output_come_code=(_Bool)1;
                exp_210=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value230=expression_v13(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value230);
                if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { right_value230 = come_decrement_ref_count(right_value230, ((struct sNode*)right_value230)->finalize, ((struct sNode*)right_value230)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value230;
                __freed_obj__ = 0;
                info->no_comma=no_comma_208;
                info->no_output_err=no_output_err_207;
                info->no_output_come_code=no_output_come_code_209;
                if(_if_conditional309=*info->p==44,                _if_conditional309) {
                    multiple_declare2_201=(_Bool)1;
                }
                if(exp_210 && !__freed_obj__) { exp_210 = come_decrement_ref_count(exp_210, ((struct sNode*)exp_210)->finalize, ((struct sNode*)exp_210)->_protocol_obj, 0, 0, 0); } 
            }
        }
        info->p=p_202;
        info->sline=sline_203;
        if(type_204 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_204, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(name_205 && !__freed_obj__) { name_205 = come_decrement_ref_count(name_205, (void*)0, (void*)0, 0, 0, 0); }
    }
    parse_sharp_v5(info);
    fun_211=map$2charphsFunphp_operator_load_element(info->funcs,buf);
    if(_if_conditional310=charp_operator_equals(buf,"var")||charp_operator_equals(buf,"auto"),    _if_conditional310) {
        parse_sharp_v5(info);
        buf2_212=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value231=parse_word(info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value231);
        if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value231;
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        multiple_assign_213=((void*)0);
        if(_if_conditional311=*info->p==44,        _if_conditional311) {
            __dec_obj104=multiple_assign_213;
            multiple_assign_213=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value233=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value232=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "07var.c", 917))))))));
            if(__dec_obj104) { come_call_finalizer(list$1charph_finalize,__dec_obj104, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value232);
            if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value232;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value233);
            if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value233;
            __freed_obj__ = 0;
            list$1charph_push_back(multiple_assign_213,(char*)come_increment_ref_count(((char*)(right_value237=string_clone(buf2_212)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value237);
            if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { right_value237 = come_decrement_ref_count(right_value237, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value237;
            __freed_obj__ = 0;
            while(_while_condtional21=*info->p==44,            _while_condtional21) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                buf3_217=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value238=parse_word(info)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value238);
                if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value238;
                __freed_obj__ = 0;
                parse_sharp_v5(info);
                list$1charph_push_back(multiple_assign_213,(char*)come_increment_ref_count(((char*)(right_value239=string_clone(buf3_217)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value239);
                if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { right_value239 = come_decrement_ref_count(right_value239, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value239;
                __freed_obj__ = 0;
                if(buf3_217 && !__freed_obj__) { buf3_217 = come_decrement_ref_count(buf3_217, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        parse_sharp_v5(info);
        if(_if_conditional314=*info->p==61&&*(info->p+1)!=61,        _if_conditional314) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            no_comma_218=info->no_comma;
            info->no_comma=(_Bool)1;
            right_value_219=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value240=expression_v13(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value240);
            if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { right_value240 = come_decrement_ref_count(right_value240, ((struct sNode*)right_value240)->finalize, ((struct sNode*)right_value240)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value240;
            __freed_obj__ = 0;
            info->no_comma=no_comma_218;
            parse_sharp_v5(info);
            __dec_obj108=right_value_219;
            right_value_219=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value241=post_position_operator3_v21((struct sNode*)come_increment_ref_count(right_value_219),info))));
            if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value241);
            if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { right_value241 = come_decrement_ref_count(right_value241, ((struct sNode*)right_value241)->finalize, ((struct sNode*)right_value241)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[1] = right_value241;
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 947);
            _inf_obj_value3=come_increment_ref_count(((struct sStoreNode*)(right_value244=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value242=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 947)))),(char*)come_increment_ref_count(((char*)(right_value243=__builtin_string(buf2_212)))),(struct list$1charph*)come_increment_ref_count(multiple_assign_213),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_219),((void*)0),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sStoreNode_finalize;
            _inf_value3->clone=(void*)sStoreNode_clone;
            _inf_value3->compile=(void*)sStoreNode_compile;
            _inf_value3->sline=(void*)sStoreNode_sline;
            _inf_value3->sname=(void*)sStoreNode_sname;
            _inf_value3->terminated=(void*)sStoreNode_terminated;
            _inf_value3->kind=(void*)sStoreNode_kind;
            result_221=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value253=_inf_value3)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value242);
            if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value242;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value243);
            if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { right_value243 = come_decrement_ref_count(right_value243, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value243;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value244);
            if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value244;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value253);
            if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { right_value253 = come_decrement_ref_count(right_value253, ((struct sNode*)right_value253)->finalize, ((struct sNode*)right_value253)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[5] = right_value253;
            __freed_obj__ = 0;
            __result141__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value255=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value254=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 951)))),(struct sNode*)come_increment_ref_count(result_221),(_Bool)1)));
            if(right_value_219 && !__freed_obj__) { right_value_219 = come_decrement_ref_count(right_value_219, ((struct sNode*)right_value_219)->finalize, ((struct sNode*)right_value_219)->_protocol_obj, 0, 0, 0); } 
            if(result_221 && !__freed_obj__) { result_221 = come_decrement_ref_count(result_221, ((struct sNode*)result_221)->finalize, ((struct sNode*)result_221)->_protocol_obj, 0, 0, 0); } 
            if(buf2_212 && !__freed_obj__) { buf2_212 = come_decrement_ref_count(buf2_212, (void*)0, (void*)0, 0, 0, 0); }
            if(multiple_assign_213 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,multiple_assign_213, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value254);
            if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { right_value254 = come_decrement_ref_count(right_value254, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[6] = right_value254;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value255);
            if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[7] = right_value255;
            __freed_obj__ = 0;
            return __result141__;
            if(right_value_219 && !__freed_obj__) { right_value_219 = come_decrement_ref_count(right_value_219, ((struct sNode*)right_value_219)->finalize, ((struct sNode*)right_value_219)->_protocol_obj, 0, 0, 0); } 
            if(result_221 && !__freed_obj__) { result_221 = come_decrement_ref_count(result_221, ((struct sNode*)result_221)->finalize, ((struct sNode*)result_221)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            err_msg(info,"var requires a right value(%c)",*info->p);
            __result143__ = __result_obj__ = ((struct optional$2voidpbool*)(right_value257=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value256=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "07var.c", 955))),((void*)0),(_Bool)0)));
            if(buf2_212 && !__freed_obj__) { buf2_212 = come_decrement_ref_count(buf2_212, (void*)0, (void*)0, 0, 0, 0); }
            if(multiple_assign_213 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,multiple_assign_213, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value256);
            if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { right_value256 = come_decrement_ref_count(right_value256, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value256;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value257);
            if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value257;
            __freed_obj__ = 0;
            return __result143__;
        }
        if(buf2_212 && !__freed_obj__) { buf2_212 = come_decrement_ref_count(buf2_212, (void*)0, (void*)0, 0, 0, 0); }
        if(multiple_assign_213 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,multiple_assign_213, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        if(_if_conditional333=multiple_declare_195,        _if_conditional333) {
            info->p=head;
            info->sline=head_sline;
            multiple_declare_222=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value259=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value258=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "07var.c", 962))))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value258);
            if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value258;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value259);
            if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value259;
            __freed_obj__ = 0;
            multiple_assgin_var4=((struct tuple3$3sTypephcharphbool*)(right_value260=parse_type(info,(_Bool)0,(_Bool)1)));
            base_type_223=(struct sType*)come_increment_ref_count(multiple_assgin_var4->v1);
            name_224=(char*)come_increment_ref_count(multiple_assgin_var4->v2);
            err_225=multiple_assgin_var4->v3;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value260);
            if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value260;
            __freed_obj__ = 0;
            variable_name_226=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value261=parse_variable_name((struct sType*)come_increment_ref_count(base_type_223),(_Bool)1,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value261);
            if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value261;
            __freed_obj__ = 0;
            variable_name2_227=(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value265=tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value262=(struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 968)))),(struct sType*)come_increment_ref_count(variable_name_226->v1),(char*)come_increment_ref_count(variable_name_226->v2),((void*)0)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value262);
            if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { right_value262 = come_decrement_ref_count(right_value262, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value262;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value265);
            if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphvoidpp_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[5] = right_value265;
            __freed_obj__ = 0;
            list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_222,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_227));
            while(_while_condtional22=*info->p==44,            _while_condtional22) {
                info->p++;
                skip_spaces_and_lf(info);
                variable_name_231=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value269=parse_variable_name((struct sType*)come_increment_ref_count(base_type_223),(_Bool)0,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value269);
                if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value269;
                __freed_obj__ = 0;
                variable_name2_232=(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value271=tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value270=(struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 978)))),(struct sType*)come_increment_ref_count(variable_name_231->v1),(char*)come_increment_ref_count(variable_name_231->v2),((void*)0)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value270);
                if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { right_value270 = come_decrement_ref_count(right_value270, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value270;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value271);
                if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphvoidpp_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value271;
                __freed_obj__ = 0;
                list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_222,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_232));
                if(variable_name_231 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_231, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(variable_name2_232 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_232, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 983);
            _inf_obj_value4=come_increment_ref_count(((struct sStoreNode*)(right_value274=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value272=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 983)))),(char*)come_increment_ref_count(((char*)(right_value273=__builtin_string(buf)))),((void*)0),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare_222),(struct sType*)come_increment_ref_count(base_type_223),(_Bool)1,((void*)0),((void*)0),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sStoreNode_finalize;
            _inf_value4->clone=(void*)sStoreNode_clone;
            _inf_value4->compile=(void*)sStoreNode_compile;
            _inf_value4->sline=(void*)sStoreNode_sline;
            _inf_value4->sname=(void*)sStoreNode_sname;
            _inf_value4->terminated=(void*)sStoreNode_terminated;
            _inf_value4->kind=(void*)sStoreNode_kind;
            result_234=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value283=_inf_value4)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value272);
            if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[6] = right_value272;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value273);
            if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { right_value273 = come_decrement_ref_count(right_value273, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[7] = right_value273;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value274);
            if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[8] = right_value274;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value283);
            if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { right_value283 = come_decrement_ref_count(right_value283, ((struct sNode*)right_value283)->finalize, ((struct sNode*)right_value283)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[9] = right_value283;
            __freed_obj__ = 0;
            __result148__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value285=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value284=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 987)))),(struct sNode*)come_increment_ref_count(result_234),(_Bool)1)));
            if(multiple_declare_222 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare_222, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(base_type_223 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_223, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(name_224 && !__freed_obj__) { name_224 = come_decrement_ref_count(name_224, (void*)0, (void*)0, 0, 0, 0); }
            if(variable_name_226 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_226, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(variable_name2_227 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_227, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(result_234 && !__freed_obj__) { result_234 = come_decrement_ref_count(result_234, ((struct sNode*)result_234)->finalize, ((struct sNode*)result_234)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value284);
            if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { right_value284 = come_decrement_ref_count(right_value284, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[10] = right_value284;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value285);
            if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[11] = right_value285;
            __freed_obj__ = 0;
            return __result148__;
            if(multiple_declare_222 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare_222, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(base_type_223 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_223, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(name_224 && !__freed_obj__) { name_224 = come_decrement_ref_count(name_224, (void*)0, (void*)0, 0, 0, 0); }
            if(variable_name_226 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_226, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(variable_name2_227 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_227, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(result_234 && !__freed_obj__) { result_234 = come_decrement_ref_count(result_234, ((struct sNode*)result_234)->finalize, ((struct sNode*)result_234)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional357=multiple_declare2_201,            _if_conditional357) {
                info->p=head;
                info->sline=head_sline;
                multiple_declare_235=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value287=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value286=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "07var.c", 993))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value286);
                if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value286;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value287);
                if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value287;
                __freed_obj__ = 0;
                multiple_assgin_var5=((struct tuple3$3sTypephcharphbool*)(right_value288=parse_type(info,(_Bool)0,(_Bool)1)));
                base_type_236=(struct sType*)come_increment_ref_count(multiple_assgin_var5->v1);
                name_237=(char*)come_increment_ref_count(multiple_assgin_var5->v2);
                err_238=multiple_assgin_var5->v3;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value288);
                if(right_value288 && right_value288 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value288;
                __freed_obj__ = 0;
                variable_name_239=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value289=parse_variable_name((struct sType*)come_increment_ref_count(base_type_236),(_Bool)1,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value289);
                if(right_value289 && right_value289 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value289;
                __freed_obj__ = 0;
                parse_sharp_v5(info);
                if(_if_conditional358=*info->p==61,                _if_conditional358) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    no_comma_240=info->no_comma;
                    info->no_comma=(_Bool)1;
                    exp_241=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value290=expression_v13(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value290);
                    if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { right_value290 = come_decrement_ref_count(right_value290, ((struct sNode*)right_value290)->finalize, ((struct sNode*)right_value290)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value290;
                    __freed_obj__ = 0;
                    info->no_comma=no_comma_240;
                    variable_name2_242=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value295=tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value291=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1012)))),(struct sType*)come_increment_ref_count(variable_name_239->v1),(char*)come_increment_ref_count(variable_name_239->v2),(struct sNode*)come_increment_ref_count(exp_241)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value291);
                    if(right_value291 && right_value291 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value291;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value295);
                    if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value295;
                    __freed_obj__ = 0;
                    list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_235,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_242));
                    if(exp_241 && !__freed_obj__) { exp_241 = come_decrement_ref_count(exp_241, ((struct sNode*)exp_241)->finalize, ((struct sNode*)exp_241)->_protocol_obj, 0, 0, 0); } 
                    if(variable_name2_242 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_242, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                while(_while_condtional23=*info->p==44,                _while_condtional23) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    variable_name_243=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value296=parse_variable_name((struct sType*)come_increment_ref_count(base_type_236),(_Bool)0,info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value296);
                    if(right_value296 && right_value296 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value296;
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    if(_if_conditional359=*info->p==61,                    _if_conditional359) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        parse_sharp_v5(info);
                        no_comma_244=info->no_comma;
                        info->no_comma=(_Bool)1;
                        exp_245=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value297=expression_v13(info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value297);
                        if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { right_value297 = come_decrement_ref_count(right_value297, ((struct sNode*)right_value297)->finalize, ((struct sNode*)right_value297)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value297;
                        __freed_obj__ = 0;
                        info->no_comma=no_comma_244;
                        variable_name2_246=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value299=tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value298=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1036)))),(struct sType*)come_increment_ref_count(variable_name_243->v1),(char*)come_increment_ref_count(variable_name_243->v2),(struct sNode*)come_increment_ref_count(exp_245)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value298);
                        if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value298;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value299);
                        if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value299;
                        __freed_obj__ = 0;
                        list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_235,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_246));
                        if(exp_245 && !__freed_obj__) { exp_245 = come_decrement_ref_count(exp_245, ((struct sNode*)exp_245)->finalize, ((struct sNode*)exp_245)->_protocol_obj, 0, 0, 0); } 
                        if(variable_name2_246 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_246, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    else {
                        if(variable_name_243 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_243, (void*)0, (void*)0, 0, 0, 0, 0); }
                        break;
                    }
                    if(variable_name_243 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_243, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1045);
                _inf_obj_value5=come_increment_ref_count(((struct sStoreNode*)(right_value302=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value300=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1045)))),(char*)come_increment_ref_count(((char*)(right_value301=__builtin_string(buf)))),((void*)0),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare_235),(struct sType*)come_increment_ref_count(base_type_236),(_Bool)1,((void*)0),((void*)0),info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sStoreNode_finalize;
                _inf_value5->clone=(void*)sStoreNode_clone;
                _inf_value5->compile=(void*)sStoreNode_compile;
                _inf_value5->sline=(void*)sStoreNode_sline;
                _inf_value5->sname=(void*)sStoreNode_sname;
                _inf_value5->terminated=(void*)sStoreNode_terminated;
                _inf_value5->kind=(void*)sStoreNode_kind;
                result_248=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value311=_inf_value5)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value300);
                if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[4] = right_value300;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value301);
                if(right_value301 && right_value301 != __result_obj__ && !__freed_obj__) { right_value301 = come_decrement_ref_count(right_value301, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[5] = right_value301;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value302);
                if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[6] = right_value302;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value311);
                if(right_value311 && right_value311 != __result_obj__ && !__freed_obj__) { right_value311 = come_decrement_ref_count(right_value311, ((struct sNode*)right_value311)->finalize, ((struct sNode*)right_value311)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[7] = right_value311;
                __freed_obj__ = 0;
                __result152__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value313=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value312=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 1049)))),(struct sNode*)come_increment_ref_count(result_248),(_Bool)1)));
                if(multiple_declare_235 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare_235, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(base_type_236 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_236, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(name_237 && !__freed_obj__) { name_237 = come_decrement_ref_count(name_237, (void*)0, (void*)0, 0, 0, 0); }
                if(variable_name_239 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_239, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_248 && !__freed_obj__) { result_248 = come_decrement_ref_count(result_248, ((struct sNode*)result_248)->finalize, ((struct sNode*)result_248)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value312);
                if(right_value312 && right_value312 != __result_obj__ && !__freed_obj__) { right_value312 = come_decrement_ref_count(right_value312, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[8] = right_value312;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value313);
                if(right_value313 && right_value313 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[9] = right_value313;
                __freed_obj__ = 0;
                return __result152__;
                if(multiple_declare_235 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare_235, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(base_type_236 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_236, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(name_237 && !__freed_obj__) { name_237 = come_decrement_ref_count(name_237, (void*)0, (void*)0, 0, 0, 0); }
                if(variable_name_239 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_239, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_248 && !__freed_obj__) { result_248 = come_decrement_ref_count(result_248, ((struct sNode*)result_248)->finalize, ((struct sNode*)result_248)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional377=!is_type_name_flag_194&&*info->p==61&&*(info->p+1)!=61&&!info->no_assign,                _if_conditional377) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    right_value_249=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value314=expression_v13(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value314);
                    if(right_value314 && right_value314 != __result_obj__ && !__freed_obj__) { right_value314 = come_decrement_ref_count(right_value314, ((struct sNode*)right_value314)->finalize, ((struct sNode*)right_value314)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value314;
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __dec_obj139=right_value_249;
                    right_value_249=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value315=post_position_operator3_v21((struct sNode*)come_increment_ref_count(right_value_249),info))));
                    if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value315);
                    if(right_value315 && right_value315 != __result_obj__ && !__freed_obj__) { right_value315 = come_decrement_ref_count(right_value315, ((struct sNode*)right_value315)->finalize, ((struct sNode*)right_value315)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[1] = right_value315;
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1063);
                    _inf_obj_value6=come_increment_ref_count(((struct sStoreNode*)(right_value318=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value316=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1063)))),(char*)come_increment_ref_count(((char*)(right_value317=__builtin_string(buf)))),((void*)0),((void*)0),((void*)0),(_Bool)0,(struct sNode*)come_increment_ref_count(right_value_249),((void*)0),info))));
                    _inf_value6->_protocol_obj=_inf_obj_value6;
                    _inf_value6->finalize=(void*)sStoreNode_finalize;
                    _inf_value6->clone=(void*)sStoreNode_clone;
                    _inf_value6->compile=(void*)sStoreNode_compile;
                    _inf_value6->sline=(void*)sStoreNode_sline;
                    _inf_value6->sname=(void*)sStoreNode_sname;
                    _inf_value6->terminated=(void*)sStoreNode_terminated;
                    _inf_value6->kind=(void*)sStoreNode_kind;
                    result_251=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value327=_inf_value6)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value316);
                    if(right_value316 && right_value316 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value316;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value317);
                    if(right_value317 && right_value317 != __result_obj__ && !__freed_obj__) { right_value317 = come_decrement_ref_count(right_value317, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[3] = right_value317;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value318);
                    if(right_value318 && right_value318 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[4] = right_value318;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value327);
                    if(right_value327 && right_value327 != __result_obj__ && !__freed_obj__) { right_value327 = come_decrement_ref_count(right_value327, ((struct sNode*)right_value327)->finalize, ((struct sNode*)right_value327)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[5] = right_value327;
                    __freed_obj__ = 0;
                    __result155__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value329=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value328=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 1067)))),(struct sNode*)come_increment_ref_count(result_251),(_Bool)1)));
                    if(right_value_249 && !__freed_obj__) { right_value_249 = come_decrement_ref_count(right_value_249, ((struct sNode*)right_value_249)->finalize, ((struct sNode*)right_value_249)->_protocol_obj, 0, 0, 0); } 
                    if(result_251 && !__freed_obj__) { result_251 = come_decrement_ref_count(result_251, ((struct sNode*)result_251)->finalize, ((struct sNode*)result_251)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value328);
                    if(right_value328 && right_value328 != __result_obj__ && !__freed_obj__) { right_value328 = come_decrement_ref_count(right_value328, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[6] = right_value328;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value329);
                    if(right_value329 && right_value329 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[7] = right_value329;
                    __freed_obj__ = 0;
                    return __result155__;
                    if(right_value_249 && !__freed_obj__) { right_value_249 = come_decrement_ref_count(right_value_249, ((struct sNode*)right_value_249)->finalize, ((struct sNode*)right_value_249)->_protocol_obj, 0, 0, 0); } 
                    if(result_251 && !__freed_obj__) { result_251 = come_decrement_ref_count(result_251, ((struct sNode*)result_251)->finalize, ((struct sNode*)result_251)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional395=!is_type_name_flag_194||map$2charphsFunphp_operator_load_element(info->funcs,buf),                    _if_conditional395) {
                        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1070);
                        _inf_obj_value7=come_increment_ref_count(((struct sLoadNode*)(right_value332=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value330=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1070)))),(char*)come_increment_ref_count(((char*)(right_value331=__builtin_string(buf)))),info))));
                        _inf_value7->_protocol_obj=_inf_obj_value7;
                        _inf_value7->finalize=(void*)sLoadNode_finalize;
                        _inf_value7->clone=(void*)sLoadNode_clone;
                        _inf_value7->compile=(void*)sLoadNode_compile;
                        _inf_value7->sline=(void*)sLoadNode_sline;
                        _inf_value7->sname=(void*)sLoadNode_sname;
                        _inf_value7->terminated=(void*)sLoadNode_terminated;
                        _inf_value7->kind=(void*)sLoadNode_kind;
                        node_253=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value336=_inf_value7)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value330);
                        if(right_value330 && right_value330 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value330;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value331);
                        if(right_value331 && right_value331 != __result_obj__ && !__freed_obj__) { right_value331 = come_decrement_ref_count(right_value331, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value331;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value332);
                        if(right_value332 && right_value332 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value332;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value336);
                        if(right_value336 && right_value336 != __result_obj__ && !__freed_obj__) { right_value336 = come_decrement_ref_count(right_value336, ((struct sNode*)right_value336)->finalize, ((struct sNode*)right_value336)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[3] = right_value336;
                        __freed_obj__ = 0;
                        __dec_obj149=node_253;
                        node_253=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value337=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_253),info))));
                        if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value337);
                        if(right_value337 && right_value337 != __result_obj__ && !__freed_obj__) { right_value337 = come_decrement_ref_count(right_value337, ((struct sNode*)right_value337)->finalize, ((struct sNode*)right_value337)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[4] = right_value337;
                        __freed_obj__ = 0;
                        __dec_obj150=node_253;
                        node_253=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value338=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_253),info))));
                        if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value338);
                        if(right_value338 && right_value338 != __result_obj__ && !__freed_obj__) { right_value338 = come_decrement_ref_count(right_value338, ((struct sNode*)right_value338)->finalize, ((struct sNode*)right_value338)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[5] = right_value338;
                        __freed_obj__ = 0;
                        __result158__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value340=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value339=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 1076)))),(struct sNode*)come_increment_ref_count(node_253),(_Bool)1)));
                        if(node_253 && !__freed_obj__) { node_253 = come_decrement_ref_count(node_253, ((struct sNode*)node_253)->finalize, ((struct sNode*)node_253)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value339);
                        if(right_value339 && right_value339 != __result_obj__ && !__freed_obj__) { right_value339 = come_decrement_ref_count(right_value339, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[6] = right_value339;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value340);
                        if(right_value340 && right_value340 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[7] = right_value340;
                        __freed_obj__ = 0;
                        return __result158__;
                        if(node_253 && !__freed_obj__) { node_253 = come_decrement_ref_count(node_253, ((struct sNode*)node_253)->finalize, ((struct sNode*)node_253)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        info->p=head;
                        info->sline=head_sline;
                        word_254=(char*)come_increment_ref_count(((char*)(right_value341=__builtin_string(""))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value341);
                        if(right_value341 && right_value341 != __result_obj__ && !__freed_obj__) { right_value341 = come_decrement_ref_count(right_value341, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value341;
                        __freed_obj__ = 0;
                        if(_if_conditional402=xisalpha(*info->p)||*info->p==95,                        _if_conditional402) {
                            __dec_obj151=word_254;
                            word_254=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value342=parse_word(info)))));
                            if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value342);
                            if(right_value342 && right_value342 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value342;
                            __freed_obj__ = 0;
                        }
                        is_type_name_flag_255=is_type_name(word_254,info);
                        info->p=head;
                        info->sline=head_sline;
                        if(_if_conditional403=is_type_name_flag_255,                        _if_conditional403) {
                            parse_sharp_v5(info);
                            multiple_assgin_var6=((struct tuple3$3sTypephcharphbool*)(right_value343=parse_type(info,(_Bool)1,(_Bool)1)));
                            type_256=(struct sType*)come_increment_ref_count(multiple_assgin_var6->v1);
                            name_257=(char*)come_increment_ref_count(multiple_assgin_var6->v2);
                            err_258=multiple_assgin_var6->v3;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value343);
                            if(right_value343 && right_value343 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value343;
                            __freed_obj__ = 0;
                            if(_if_conditional404=!err_258,                            _if_conditional404) {
                                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                                __result159__ = __result_obj__ = ((struct optional$2voidpbool*)(right_value345=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value344=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "07var.c", 1098))),((void*)0),(_Bool)0)));
                                if(type_256 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_256, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(name_257 && !__freed_obj__) { name_257 = come_decrement_ref_count(name_257, (void*)0, (void*)0, 0, 0, 0); }
                                if(word_254 && !__freed_obj__) { word_254 = come_decrement_ref_count(word_254, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value344);
                                if(right_value344 && right_value344 != __result_obj__ && !__freed_obj__) { right_value344 = come_decrement_ref_count(right_value344, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value344;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value345);
                                if(right_value345 && right_value345 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,right_value345, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value345;
                                __freed_obj__ = 0;
                                return __result159__;
                            }
                            parse_sharp_v5(info);
                            if(_if_conditional405=*info->p==61,                            _if_conditional405) {
                                info->p++;
                                skip_spaces_and_lf(info);
                                parse_sharp_v5(info);
                                if(_if_conditional406=*info->p==123,                                _if_conditional406) {
                                    buf2_259=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value347=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value346=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 1109))))))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value346);
                                    if(right_value346 && right_value346 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value346;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value347);
                                    if(right_value347 && right_value347 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value347;
                                    __freed_obj__ = 0;
                                    buffer_append_char(buf2_259,*info->p);
                                    info->p++;
                                    squort_260=(_Bool)0;
                                    dquort_261=(_Bool)0;
                                    nest_262=1;
                                    while(_while_condtional24=1,                                    _while_condtional24) {
                                        if(_if_conditional407=*info->p==0,                                        _if_conditional407) {
                                            err_msg(info,"unexpected source end in array initiailizer");
                                            __result160__ = __result_obj__ = ((struct optional$2voidpbool*)(right_value349=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value348=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "07var.c", 1120))),((void*)0),(_Bool)0)));
                                            if(buf2_259 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf2_259, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(type_256 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_256, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(name_257 && !__freed_obj__) { name_257 = come_decrement_ref_count(name_257, (void*)0, (void*)0, 0, 0, 0); }
                                            if(word_254 && !__freed_obj__) { word_254 = come_decrement_ref_count(word_254, (void*)0, (void*)0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value348);
                                            if(right_value348 && right_value348 != __result_obj__ && !__freed_obj__) { right_value348 = come_decrement_ref_count(right_value348, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value348;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value349);
                                            if(right_value349 && right_value349 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,right_value349, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[1] = right_value349;
                                            __freed_obj__ = 0;
                                            return __result160__;
                                        }
                                        else {
                                            if(_if_conditional408=*info->p==92,                                            _if_conditional408) {
                                                buffer_append_char(buf2_259,*info->p);
                                                info->p++;
                                                buffer_append_char(buf2_259,*info->p);
                                                info->p++;
                                            }
                                            else {
                                                if(_if_conditional409=!squort_260&&*info->p==34,                                                _if_conditional409) {
                                                    buffer_append_char(buf2_259,*info->p);
                                                    info->p++;
                                                    dquort_261=!dquort_261;
                                                }
                                                else {
                                                    if(_if_conditional410=!dquort_261&&*info->p==39,                                                    _if_conditional410) {
                                                        buffer_append_char(buf2_259,*info->p);
                                                        info->p++;
                                                        squort_260=!squort_260;
                                                    }
                                                    else {
                                                        if(_if_conditional411=squort_260||dquort_261,                                                        _if_conditional411) {
                                                            buffer_append_char(buf2_259,*info->p);
                                                            info->p++;
                                                        }
                                                        else {
                                                            if(_if_conditional412=*info->p==123,                                                            _if_conditional412) {
                                                                nest_262++;
                                                                buffer_append_char(buf2_259,*info->p);
                                                                info->p++;
                                                            }
                                                            else {
                                                                if(_if_conditional413=*info->p==125,                                                                _if_conditional413) {
                                                                    nest_262--;
                                                                    buffer_append_char(buf2_259,*info->p);
                                                                    info->p++;
                                                                    if(_if_conditional414=nest_262==0,                                                                    _if_conditional414) {
                                                                        skip_spaces_and_lf(info);
                                                                        break;
                                                                    }
                                                                }
                                                                else {
                                                                    buffer_append_char(buf2_259,*info->p);
                                                                    info->p++;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    array_initializer_263=(char*)come_increment_ref_count(((char*)(right_value350=buffer_to_string(buf2_259))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value350);
                                    if(right_value350 && right_value350 != __result_obj__ && !__freed_obj__) { right_value350 = come_decrement_ref_count(right_value350, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[2] = right_value350;
                                    __freed_obj__ = 0;
                                    _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1164);
                                    _inf_obj_value8=come_increment_ref_count(((struct sStoreNode*)(right_value352=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value351=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1164)))),(char*)come_increment_ref_count(name_257),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_256),(_Bool)1,((void*)0),(char*)come_increment_ref_count(array_initializer_263),info))));
                                    _inf_value8->_protocol_obj=_inf_obj_value8;
                                    _inf_value8->finalize=(void*)sStoreNode_finalize;
                                    _inf_value8->clone=(void*)sStoreNode_clone;
                                    _inf_value8->compile=(void*)sStoreNode_compile;
                                    _inf_value8->sline=(void*)sStoreNode_sline;
                                    _inf_value8->sname=(void*)sStoreNode_sname;
                                    _inf_value8->terminated=(void*)sStoreNode_terminated;
                                    _inf_value8->kind=(void*)sStoreNode_kind;
                                    result_265=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value361=_inf_value8)));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value351);
                                    if(right_value351 && right_value351 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[3] = right_value351;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value352);
                                    if(right_value352 && right_value352 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[4] = right_value352;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value361);
                                    if(right_value361 && right_value361 != __result_obj__ && !__freed_obj__) { right_value361 = come_decrement_ref_count(right_value361, ((struct sNode*)right_value361)->finalize, ((struct sNode*)right_value361)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[5] = right_value361;
                                    __freed_obj__ = 0;
                                    __result163__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value363=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value362=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 1168)))),(struct sNode*)come_increment_ref_count(result_265),(_Bool)1)));
                                    if(buf2_259 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf2_259, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(array_initializer_263 && !__freed_obj__) { array_initializer_263 = come_decrement_ref_count(array_initializer_263, (void*)0, (void*)0, 0, 0, 0); }
                                    if(result_265 && !__freed_obj__) { result_265 = come_decrement_ref_count(result_265, ((struct sNode*)result_265)->finalize, ((struct sNode*)result_265)->_protocol_obj, 0, 0, 0); } 
                                    if(type_256 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_256, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(name_257 && !__freed_obj__) { name_257 = come_decrement_ref_count(name_257, (void*)0, (void*)0, 0, 0, 0); }
                                    if(word_254 && !__freed_obj__) { word_254 = come_decrement_ref_count(word_254, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value362);
                                    if(right_value362 && right_value362 != __result_obj__ && !__freed_obj__) { right_value362 = come_decrement_ref_count(right_value362, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[6] = right_value362;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value363);
                                    if(right_value363 && right_value363 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[7] = right_value363;
                                    __freed_obj__ = 0;
                                    return __result163__;
                                    if(buf2_259 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf2_259, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(array_initializer_263 && !__freed_obj__) { array_initializer_263 = come_decrement_ref_count(array_initializer_263, (void*)0, (void*)0, 0, 0, 0); }
                                    if(result_265 && !__freed_obj__) { result_265 = come_decrement_ref_count(result_265, ((struct sNode*)result_265)->finalize, ((struct sNode*)result_265)->_protocol_obj, 0, 0, 0); } 
                                }
                                else {
                                    parse_sharp_v5(info);
                                    right_value_266=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value364=expression_v13(info))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value364);
                                    if(right_value364 && right_value364 != __result_obj__ && !__freed_obj__) { right_value364 = come_decrement_ref_count(right_value364, ((struct sNode*)right_value364)->finalize, ((struct sNode*)right_value364)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value364;
                                    __freed_obj__ = 0;
                                    parse_sharp_v5(info);
                                    right_values_267=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value366=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value365=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "07var.c", 1175))))))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value365);
                                    if(right_value365 && right_value365 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value365, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value365;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value366);
                                    if(right_value366 && right_value366 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[2] = right_value366;
                                    __freed_obj__ = 0;
                                    while(_while_condtional25=*info->p==44,                                    _while_condtional25) {
                                        if(anonymous_var_nameX1836_268 && !__freed_obj__) { anonymous_var_nameX1836_268 = come_decrement_ref_count(anonymous_var_nameX1836_268, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                    __dec_obj159=right_value_266;
                                    right_value_266=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value367=post_position_operator3_v21((struct sNode*)come_increment_ref_count(right_value_266),info))));
                                    if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value367);
                                    if(right_value367 && right_value367 != __result_obj__ && !__freed_obj__) { right_value367 = come_decrement_ref_count(right_value367, ((struct sNode*)right_value367)->finalize, ((struct sNode*)right_value367)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[3] = right_value367;
                                    __freed_obj__ = 0;
                                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1182);
                                    _inf_obj_value9=come_increment_ref_count(((struct sStoreNode*)(right_value369=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value368=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1182)))),(char*)come_increment_ref_count(name_257),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_256),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_266),((void*)0),info))));
                                    _inf_value9->_protocol_obj=_inf_obj_value9;
                                    _inf_value9->finalize=(void*)sStoreNode_finalize;
                                    _inf_value9->clone=(void*)sStoreNode_clone;
                                    _inf_value9->compile=(void*)sStoreNode_compile;
                                    _inf_value9->sline=(void*)sStoreNode_sline;
                                    _inf_value9->sname=(void*)sStoreNode_sname;
                                    _inf_value9->terminated=(void*)sStoreNode_terminated;
                                    _inf_value9->kind=(void*)sStoreNode_kind;
                                    result_270=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value378=_inf_value9)));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value368);
                                    if(right_value368 && right_value368 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value368, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[4] = right_value368;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value369);
                                    if(right_value369 && right_value369 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[5] = right_value369;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value378);
                                    if(right_value378 && right_value378 != __result_obj__ && !__freed_obj__) { right_value378 = come_decrement_ref_count(right_value378, ((struct sNode*)right_value378)->finalize, ((struct sNode*)right_value378)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[6] = right_value378;
                                    __freed_obj__ = 0;
                                    __result166__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value380=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value379=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 1186)))),(struct sNode*)come_increment_ref_count(result_270),(_Bool)1)));
                                    if(right_value_266 && !__freed_obj__) { right_value_266 = come_decrement_ref_count(right_value_266, ((struct sNode*)right_value_266)->finalize, ((struct sNode*)right_value_266)->_protocol_obj, 0, 0, 0); } 
                                    if(right_values_267 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_values_267, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(result_270 && !__freed_obj__) { result_270 = come_decrement_ref_count(result_270, ((struct sNode*)result_270)->finalize, ((struct sNode*)result_270)->_protocol_obj, 0, 0, 0); } 
                                    if(type_256 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_256, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(name_257 && !__freed_obj__) { name_257 = come_decrement_ref_count(name_257, (void*)0, (void*)0, 0, 0, 0); }
                                    if(word_254 && !__freed_obj__) { word_254 = come_decrement_ref_count(word_254, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value379);
                                    if(right_value379 && right_value379 != __result_obj__ && !__freed_obj__) { right_value379 = come_decrement_ref_count(right_value379, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[7] = right_value379;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value380);
                                    if(right_value380 && right_value380 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value380, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[8] = right_value380;
                                    __freed_obj__ = 0;
                                    return __result166__;
                                    if(right_value_266 && !__freed_obj__) { right_value_266 = come_decrement_ref_count(right_value_266, ((struct sNode*)right_value_266)->finalize, ((struct sNode*)right_value_266)->_protocol_obj, 0, 0, 0); } 
                                    if(right_values_267 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_values_267, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(result_270 && !__freed_obj__) { result_270 = come_decrement_ref_count(result_270, ((struct sNode*)result_270)->finalize, ((struct sNode*)result_270)->_protocol_obj, 0, 0, 0); } 
                                }
                            }
                            else {
                                _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1190);
                                _inf_obj_value10=come_increment_ref_count(((struct sStoreNode*)(right_value382=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value381=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1190)))),(char*)come_increment_ref_count(name_257),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_256),(_Bool)1,((void*)0),((void*)0),info))));
                                _inf_value10->_protocol_obj=_inf_obj_value10;
                                _inf_value10->finalize=(void*)sStoreNode_finalize;
                                _inf_value10->clone=(void*)sStoreNode_clone;
                                _inf_value10->compile=(void*)sStoreNode_compile;
                                _inf_value10->sline=(void*)sStoreNode_sline;
                                _inf_value10->sname=(void*)sStoreNode_sname;
                                _inf_value10->terminated=(void*)sStoreNode_terminated;
                                _inf_value10->kind=(void*)sStoreNode_kind;
                                result_272=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value391=_inf_value10)));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value381);
                                if(right_value381 && right_value381 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value381, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value381;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value382);
                                if(right_value382 && right_value382 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value382, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value382;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value391);
                                if(right_value391 && right_value391 != __result_obj__ && !__freed_obj__) { right_value391 = come_decrement_ref_count(right_value391, ((struct sNode*)right_value391)->finalize, ((struct sNode*)right_value391)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[2] = right_value391;
                                __freed_obj__ = 0;
                                __result169__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value393=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value392=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 1194)))),(struct sNode*)come_increment_ref_count(result_272),(_Bool)1)));
                                if(result_272 && !__freed_obj__) { result_272 = come_decrement_ref_count(result_272, ((struct sNode*)result_272)->finalize, ((struct sNode*)result_272)->_protocol_obj, 0, 0, 0); } 
                                if(type_256 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_256, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(name_257 && !__freed_obj__) { name_257 = come_decrement_ref_count(name_257, (void*)0, (void*)0, 0, 0, 0); }
                                if(word_254 && !__freed_obj__) { word_254 = come_decrement_ref_count(word_254, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value392);
                                if(right_value392 && right_value392 != __result_obj__ && !__freed_obj__) { right_value392 = come_decrement_ref_count(right_value392, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[3] = right_value392;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value393);
                                if(right_value393 && right_value393 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value393, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[4] = right_value393;
                                __freed_obj__ = 0;
                                return __result169__;
                                if(result_272 && !__freed_obj__) { result_272 = come_decrement_ref_count(result_272, ((struct sNode*)result_272)->finalize, ((struct sNode*)result_272)->_protocol_obj, 0, 0, 0); } 
                            }
                            if(type_256 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_256, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(name_257 && !__freed_obj__) { name_257 = come_decrement_ref_count(name_257, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        if(word_254 && !__freed_obj__) { word_254 = come_decrement_ref_count(word_254, (void*)0, (void*)0, 0, 0, 0); }
                    }
                }
            }
        }
    }
    __current_stack1__.buf = &buf;
    __current_stack1__.head = &head;
    __current_stack1__.head_sline = &head_sline;
    __current_stack1__.info = &info;
    __current_stack1__.is_type_name_flag_194 = &is_type_name_flag_194;
    __current_stack1__.multiple_declare_195 = &multiple_declare_195;
    __current_stack1__.multiple_declare2_201 = &multiple_declare2_201;
    __current_stack1__.fun_211 = &fun_211;
    result_273=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value397=optional$2sNodephbool_catch(((struct optional$2sNodephbool*)(right_value394=string_node_v5(buf,head,head_sline,info))),&__current_stack1__,(void*)method_block1_07varc))));
                        if(__current_stack1__.__method_block_result_kind__ == 3)
                    {
                        return (struct optional$2sNodephbool*)__current_stack1__.__method_block_return_value__;
                    }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value394);
    if(right_value394 && right_value394 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value394, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value394;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value397);
    if(right_value397 && right_value397 != __result_obj__ && !__freed_obj__) { right_value397 = come_decrement_ref_count(right_value397, ((struct sNode*)right_value397)->finalize, ((struct sNode*)right_value397)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value397;
    __freed_obj__ = 0;
    __result172__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value399=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value398=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 1203)))),(struct sNode*)come_increment_ref_count(result_273),(_Bool)1)));
    if(result_273 && !__freed_obj__) { result_273 = come_decrement_ref_count(result_273, ((struct sNode*)result_273)->finalize, ((struct sNode*)result_273)->_protocol_obj, 0, 0, 0); } 
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value398);
    if(right_value398 && right_value398 != __result_obj__ && !__freed_obj__) { right_value398 = come_decrement_ref_count(right_value398, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value398;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value399);
    if(right_value399 && right_value399 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value399, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value399;
    __freed_obj__ = 0;
    return __result172__;
    if(result_273 && !__freed_obj__) { result_273 = come_decrement_ref_count(result_273, ((struct sNode*)result_273)->finalize, ((struct sNode*)result_273)->_protocol_obj, 0, 0, 0); } 
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional303;
_Bool _if_conditional304;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional303=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional303) {
                if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional304=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional304) {
                if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional312;
void* right_value234;
struct list_item$1charph* litem_214;
char* __dec_obj105;
_Bool _if_conditional313;
void* right_value235;
struct list_item$1charph* litem_215;
char* __dec_obj106;
void* right_value236;
struct list_item$1charph* litem_216;
char* __dec_obj107;
struct list$1charph* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value234, 0, sizeof(void*));
memset(&litem_214, 0, sizeof(struct list_item$1charph*));
memset(&right_value235, 0, sizeof(void*));
memset(&litem_215, 0, sizeof(struct list_item$1charph*));
memset(&right_value236, 0, sizeof(void*));
memset(&litem_216, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional312=self->len==0,                _if_conditional312) {
                    litem_214=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value234=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 279))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value234);
                    if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value234;
                    __freed_obj__ = 0;
                    litem_214->prev=((void*)0);
                    litem_214->next=((void*)0);
                    __dec_obj105=litem_214->item;
                    litem_214->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0,0); }
                    self->tail=litem_214;
                    self->head=litem_214;
                }
                else {
                    if(_if_conditional313=self->len==1,                    _if_conditional313) {
                        litem_215=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value235=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 289))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value235);
                        if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value235;
                        __freed_obj__ = 0;
                        litem_215->prev=self->head;
                        litem_215->next=((void*)0);
                        __dec_obj106=litem_215->item;
                        litem_215->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0,0); }
                        self->tail=litem_215;
                        self->head->next=litem_215;
                    }
                    else {
                        litem_216=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value236=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 299))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value236);
                        if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value236;
                        __freed_obj__ = 0;
                        litem_216->prev=self->tail;
                        litem_216->next=((void*)0);
                        __dec_obj107=litem_216->item;
                        litem_216->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0,0); }
                        self->tail->next=litem_216;
                        self->tail=litem_216;
                    }
                }
                self->len++;
                __result137__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                return __result137__;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* __dec_obj116;
struct optional$2sNodephbool* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __dec_obj116=self->v1;
                self->v1=(struct sNode*)come_increment_ref_count(v1);
                if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0,0,0); }
                self->v2=v2;
                __result140__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
                return __result140__;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
}

static void optional$2sNodephboolp_finalize(struct optional$2sNodephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional332;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional332=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional332) {
                        if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, ((struct sNode*)self->v1)->finalize, ((struct sNode*)self->v1)->_protocol_obj, 0, 0, 0); } 
                    }
}

static struct optional$2voidpbool* optional$2voidpbool_initialize(struct optional$2voidpbool* self, void* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2voidpbool* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                self->v1=v1;
                self->v2=v2;
                __result142__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result142__;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2voidpboolp_finalize(struct optional$2voidpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional334;
_Bool _if_conditional335;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional334=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional334) {
                    if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional335=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional335) {
                    if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value263;
struct sType* __dec_obj117;
void* right_value264;
char* __dec_obj118;
struct tuple3$3sTypephcharphvoidp* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value263, 0, sizeof(void*));
memset(&right_value264, 0, sizeof(void*));
                __dec_obj117=self->v1;
                self->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value263=sType_clone(v1))));
                if(__dec_obj117) { come_call_finalizer(sType_finalize,__dec_obj117, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value263);
                if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value263;
                __freed_obj__ = 0;
                __dec_obj118=self->v2;
                self->v2=(char*)come_increment_ref_count(((char*)(right_value264=string_clone(v2))));
                if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value264);
                if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { right_value264 = come_decrement_ref_count(right_value264, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value264;
                __freed_obj__ = 0;
                self->v3=v3;
                __result144__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphvoidpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
                return __result144__;
                if(self && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphvoidpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
}

static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional336;
_Bool _if_conditional337;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional336=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional336) {
                        if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional337=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional337) {
                        if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional338;
void* right_value266;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_228;
struct tuple3$3sTypephcharphsNodeph* __dec_obj119;
_Bool _if_conditional339;
void* right_value267;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_229;
struct tuple3$3sTypephcharphsNodeph* __dec_obj120;
void* right_value268;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_230;
struct tuple3$3sTypephcharphsNodeph* __dec_obj121;
struct list$1tuple3$3sTypephcharphsNodephph* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value266, 0, sizeof(void*));
memset(&litem_228, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&right_value267, 0, sizeof(void*));
memset(&litem_229, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&right_value268, 0, sizeof(void*));
memset(&litem_230, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                if(_if_conditional338=self->len==0,                _if_conditional338) {
                    litem_228=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value266=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 279))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value266);
                    if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value266;
                    __freed_obj__ = 0;
                    litem_228->prev=((void*)0);
                    litem_228->next=((void*)0);
                    __dec_obj119=litem_228->item;
                    litem_228->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                    if(__dec_obj119) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj119, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->tail=litem_228;
                    self->head=litem_228;
                }
                else {
                    if(_if_conditional339=self->len==1,                    _if_conditional339) {
                        litem_229=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value267=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 289))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value267);
                        if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value267;
                        __freed_obj__ = 0;
                        litem_229->prev=self->head;
                        litem_229->next=((void*)0);
                        __dec_obj120=litem_229->item;
                        litem_229->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        if(__dec_obj120) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj120, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail=litem_229;
                        self->head->next=litem_229;
                    }
                    else {
                        litem_230=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value268=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 299))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value268);
                        if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value268;
                        __freed_obj__ = 0;
                        litem_230->prev=self->tail;
                        litem_230->next=((void*)0);
                        __dec_obj121=litem_230->item;
                        litem_230->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        if(__dec_obj121) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj121, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail->next=litem_230;
                        self->tail=litem_230;
                    }
                }
                self->len++;
                __result145__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result145__;
                if(item && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value292;
struct sType* __dec_obj129;
void* right_value293;
char* __dec_obj130;
void* right_value294;
struct sNode* __dec_obj131;
struct tuple3$3sTypephcharphsNodeph* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value292, 0, sizeof(void*));
memset(&right_value293, 0, sizeof(void*));
memset(&right_value294, 0, sizeof(void*));
                        __dec_obj129=self->v1;
                        self->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value292=sType_clone(v1))));
                        if(__dec_obj129) { come_call_finalizer(sType_finalize,__dec_obj129, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value292);
                        if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value292;
                        __freed_obj__ = 0;
                        __dec_obj130=self->v2;
                        self->v2=(char*)come_increment_ref_count(((char*)(right_value293=string_clone(v2))));
                        if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value293);
                        if(right_value293 && right_value293 != __result_obj__ && !__freed_obj__) { right_value293 = come_decrement_ref_count(right_value293, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value293;
                        __freed_obj__ = 0;
                        __dec_obj131=self->v3;
                        self->v3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value294=sNode_clone(v3))));
                        if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value294);
                        if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { right_value294 = come_decrement_ref_count(right_value294, ((struct sNode*)right_value294)->finalize, ((struct sNode*)right_value294)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[2] = right_value294;
                        __freed_obj__ = 0;
                        __result149__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
                        if(v3 && !__freed_obj__) { v3 = come_decrement_ref_count(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 1, 0); } 
                        return __result149__;
                        if(self && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
                        if(v3 && !__freed_obj__) { v3 = come_decrement_ref_count(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 1, 0); } 
}

static void sLoadNode_finalize(struct sLoadNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional396;
_Bool _if_conditional397;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional396=self!=((void*)0)&&self->name!=((void*)0),                            _if_conditional396) {
                                if(self->name && !__freed_obj__) { self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            if(_if_conditional397=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional397) {
                                if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                            }
}

static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional398;
struct sLoadNode* __result156__;
void* right_value333;
struct sLoadNode* result_252;
_Bool _if_conditional399;
void* right_value334;
char* __dec_obj147;
_Bool _if_conditional400;
_Bool _if_conditional401;
void* right_value335;
char* __dec_obj148;
struct sLoadNode* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value333, 0, sizeof(void*));
memset(&result_252, 0, sizeof(struct sLoadNode*));
memset(&right_value334, 0, sizeof(void*));
memset(&right_value335, 0, sizeof(void*));
                            if(_if_conditional398=self==(void*)0,                            _if_conditional398) {
                                __result156__ = __result_obj__ = (void*)0;
                                return __result156__;
                            }
                            result_252=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value333=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "sLoadNode_clone", 3))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value333);
                            if(right_value333 && right_value333 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value333;
                            __freed_obj__ = 0;
                            if(_if_conditional399=self!=((void*)0)&&self->name!=((void*)0),                            _if_conditional399) {
                                __dec_obj147=result_252->name;
                                result_252->name=(char*)come_increment_ref_count(((char*)(right_value334=string_clone(self->name))));
                                if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value334);
                                if(right_value334 && right_value334 != __result_obj__ && !__freed_obj__) { right_value334 = come_decrement_ref_count(right_value334, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value334;
                                __freed_obj__ = 0;
                            }
                            if(_if_conditional400=self!=((void*)0),                            _if_conditional400) {
                                result_252->sline=self->sline;
                            }
                            if(_if_conditional401=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional401) {
                                __dec_obj148=result_252->sname;
                                result_252->sname=(char*)come_increment_ref_count(((char*)(right_value335=string_clone(self->sname))));
                                if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value335);
                                if(right_value335 && right_value335 != __result_obj__ && !__freed_obj__) { right_value335 = come_decrement_ref_count(right_value335, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value335;
                                __freed_obj__ = 0;
                            }
                            __result157__ = __result_obj__ = result_252;
                            if(result_252 && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,result_252, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result157__;
                            if(result_252 && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,result_252, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sStoreNode_finalize(struct sStoreNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional449;
_Bool _if_conditional450;
_Bool _if_conditional451;
_Bool _if_conditional452;
_Bool _if_conditional453;
_Bool _if_conditional454;
_Bool _if_conditional455;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional449=self!=((void*)0)&&self->name!=((void*)0),                                    _if_conditional449) {
                                        if(self->name && !__freed_obj__) { self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                    if(_if_conditional450=self!=((void*)0)&&self->multiple_assign!=((void*)0),                                    _if_conditional450) {
                                        if(self->multiple_assign && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->multiple_assign, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
                                    if(_if_conditional451=self!=((void*)0)&&self->multiple_declare!=((void*)0),                                    _if_conditional451) {
                                        if(self->multiple_declare && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,self->multiple_declare, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
                                    if(_if_conditional452=self!=((void*)0)&&self->right_value!=((void*)0),                                    _if_conditional452) {
                                        if(self->right_value && !__freed_obj__) { self->right_value = come_decrement_ref_count(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    if(_if_conditional453=self!=((void*)0)&&self->type!=((void*)0),                                    _if_conditional453) {
                                        if(self->type && !__freed_obj__) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
                                    if(_if_conditional454=self!=((void*)0)&&self->array_initializer!=((void*)0),                                    _if_conditional454) {
                                        if(self->array_initializer && !__freed_obj__) { self->array_initializer = come_decrement_ref_count(self->array_initializer, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                    if(_if_conditional455=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional455) {
                                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    }
}

static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional456;
struct sStoreNode* __result167__;
void* right_value383;
struct sStoreNode* result_271;
_Bool _if_conditional457;
void* right_value384;
char* __dec_obj167;
_Bool _if_conditional458;
void* right_value385;
struct list$1charph* __dec_obj168;
_Bool _if_conditional459;
void* right_value386;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj169;
_Bool _if_conditional460;
void* right_value387;
struct sNode* __dec_obj170;
_Bool _if_conditional461;
void* right_value388;
struct sType* __dec_obj171;
_Bool _if_conditional462;
void* right_value389;
char* __dec_obj172;
_Bool _if_conditional463;
_Bool _if_conditional464;
_Bool _if_conditional465;
void* right_value390;
char* __dec_obj173;
struct sStoreNode* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value383, 0, sizeof(void*));
memset(&result_271, 0, sizeof(struct sStoreNode*));
memset(&right_value384, 0, sizeof(void*));
memset(&right_value385, 0, sizeof(void*));
memset(&right_value386, 0, sizeof(void*));
memset(&right_value387, 0, sizeof(void*));
memset(&right_value388, 0, sizeof(void*));
memset(&right_value389, 0, sizeof(void*));
memset(&right_value390, 0, sizeof(void*));
                                    if(_if_conditional456=self==(void*)0,                                    _if_conditional456) {
                                        __result167__ = __result_obj__ = (void*)0;
                                        return __result167__;
                                    }
                                    result_271=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value383=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "sStoreNode_clone", 3))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value383);
                                    if(right_value383 && right_value383 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value383, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value383;
                                    __freed_obj__ = 0;
                                    if(_if_conditional457=self!=((void*)0)&&self->name!=((void*)0),                                    _if_conditional457) {
                                        __dec_obj167=result_271->name;
                                        result_271->name=(char*)come_increment_ref_count(((char*)(right_value384=string_clone(self->name))));
                                        if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count(__dec_obj167, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value384);
                                        if(right_value384 && right_value384 != __result_obj__ && !__freed_obj__) { right_value384 = come_decrement_ref_count(right_value384, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value384;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional458=self!=((void*)0)&&self->multiple_assign!=((void*)0),                                    _if_conditional458) {
                                        __dec_obj168=result_271->multiple_assign;
                                        result_271->multiple_assign=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value385=list$1charphp_clone(self->multiple_assign))));
                                        if(__dec_obj168) { come_call_finalizer(list$1charph_finalize,__dec_obj168, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value385);
                                        if(right_value385 && right_value385 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value385, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value385;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional459=self!=((void*)0)&&self->multiple_declare!=((void*)0),                                    _if_conditional459) {
                                        __dec_obj169=result_271->multiple_declare;
                                        result_271->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value386=list$1tuple3$3sTypephcharphsNodephphp_clone(self->multiple_declare))));
                                        if(__dec_obj169) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephph_finalize,__dec_obj169, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value386);
                                        if(right_value386 && right_value386 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value386, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value386;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional460=self!=((void*)0)&&self->right_value!=((void*)0),                                    _if_conditional460) {
                                        __dec_obj170=result_271->right_value;
                                        result_271->right_value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value387=sNode_clone(self->right_value))));
                                        if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value387);
                                        if(right_value387 && right_value387 != __result_obj__ && !__freed_obj__) { right_value387 = come_decrement_ref_count(right_value387, ((struct sNode*)right_value387)->finalize, ((struct sNode*)right_value387)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value387;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional461=self!=((void*)0)&&self->type!=((void*)0),                                    _if_conditional461) {
                                        __dec_obj171=result_271->type;
                                        result_271->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value388=sType_clone(self->type))));
                                        if(__dec_obj171) { come_call_finalizer(sType_finalize,__dec_obj171, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value388);
                                        if(right_value388 && right_value388 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value388;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional462=self!=((void*)0)&&self->array_initializer!=((void*)0),                                    _if_conditional462) {
                                        __dec_obj172=result_271->array_initializer;
                                        result_271->array_initializer=(char*)come_increment_ref_count(((char*)(right_value389=string_clone(self->array_initializer))));
                                        if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count(__dec_obj172, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value389);
                                        if(right_value389 && right_value389 != __result_obj__ && !__freed_obj__) { right_value389 = come_decrement_ref_count(right_value389, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value389;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional463=self!=((void*)0),                                    _if_conditional463) {
                                        result_271->alloc=self->alloc;
                                    }
                                    if(_if_conditional464=self!=((void*)0),                                    _if_conditional464) {
                                        result_271->sline=self->sline;
                                    }
                                    if(_if_conditional465=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional465) {
                                        __dec_obj173=result_271->sname;
                                        result_271->sname=(char*)come_increment_ref_count(((char*)(right_value390=string_clone(self->sname))));
                                        if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count(__dec_obj173, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value390);
                                        if(right_value390 && right_value390 != __result_obj__ && !__freed_obj__) { right_value390 = come_decrement_ref_count(right_value390, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value390;
                                        __freed_obj__ = 0;
                                    }
                                    __result168__ = __result_obj__ = result_271;
                                    if(result_271 && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,result_271, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    return __result168__;
                                    if(result_271 && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,result_271, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sNode* optional$2sNodephbool_catch(struct optional$2sNodephbool* self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional466;
_Bool _if_conditional467;
struct sNode* __result170__;
struct sNode* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional466=!self->v2,        _if_conditional466) {
            block(parent);
            if(_if_conditional467=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional467) {
                __result170__ = __result_obj__ = self->v1;
                return __result170__;
            }
        }
        __result171__ = __result_obj__ = self->v1;
        return __result171__;
}

void method_block1_07varc(struct __current_stack1__* parent){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value395;
void* right_value396;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value395, 0, sizeof(void*));
memset(&right_value396, 0, sizeof(void*));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value395);
        if(right_value395 && right_value395 != __result_obj__ && !__freed_obj__) { right_value395 = come_decrement_ref_count(right_value395, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value395;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value396);
        if(right_value396 && right_value396 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,right_value396, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value396;
        __freed_obj__ = 0;
                    ((struct __current_stack1__*) parent)->__method_block_result_kind__ = 3;
            ((struct __current_stack1__*) parent)->__method_block_return_value__ = (struct optional$2voidpbool*)come_increment_ref_count(((struct optional$2voidpbool*)(right_value396=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value395=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "07var.c", 1201))),((void*)0),(_Bool)0))));
        return;}

