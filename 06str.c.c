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
struct sNoneNode
{
    struct sNode* value;
    int sline;
    char* sname;
};
struct sSomeNode
{
    struct sNode* value;
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

struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info);

_Bool sStrNode_terminated();

static char* double_quoted_string(char* str);
char* sStrNode_kind();

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info);

static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
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
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
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
static char* optional$2charphbool_value(struct optional$2charphbool* self);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static char* optional$2charphbool_expect(struct optional$2charphbool* self);
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

struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct sNode* value, struct sInfo* info);

struct sNode* create_none_object(struct sNode* exp, struct sInfo* info);

static void sNoneNode_finalize(struct sNoneNode* self);
static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self);
_Bool sNoneNode_terminated();

char* sNoneNode_kind();

_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info);

static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item);
int sNoneNode_sline(struct sNoneNode* self, struct sInfo* info);

char* sNoneNode_sname(struct sNoneNode* self, struct sInfo* info);

struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct sNode* value, struct sInfo* info);

struct sNode* create_some_object(struct sNode* exp, struct sInfo* info);

static void sSomeNode_finalize(struct sSomeNode* self);
static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self);
_Bool sSomeNode_terminated();

char* sSomeNode_kind();

_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info);

int sSomeNode_sline(struct sSomeNode* self, struct sInfo* info);

char* sSomeNode_sname(struct sSomeNode* self, struct sInfo* info);

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
static int optional$2intbool_value(struct optional$2intbool* self);
static void optional$2intboolp_finalize(struct optional$2intbool* self);
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

struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value10;
char* __dec_obj6;
void* right_value11;
char* __dec_obj7;
struct sStrNode* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
memset(&right_value11, 0, sizeof(void*));
    __dec_obj6=self->value;
    self->value=(char*)come_increment_ref_count(((char*)(right_value10=__builtin_string(value))));
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
    if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value10;
    __freed_obj__ = 0;
    self->sline=sline;
    __dec_obj7=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value11=__builtin_string(info->sname))));
    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value11);
    if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { right_value11 = come_decrement_ref_count(right_value11, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value11;
    __freed_obj__ = 0;
    __result7__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 1, 0); }
    return __result7__;
    if(self && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 1, 0); }
}

_Bool sStrNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result8__ = (_Bool)0;
    return __result8__;
}

static char* double_quoted_string(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value12;
void* right_value13;
struct buffer* buf_5;
char* p_6;
_Bool _while_condtional1;
_Bool _if_conditional7;
void* right_value14;
char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value12, 0, sizeof(void*));
memset(&right_value13, 0, sizeof(void*));
memset(&buf_5, 0, sizeof(struct buffer*));
memset(&p_6, 0, sizeof(char*));
memset(&right_value14, 0, sizeof(void*));
    buf_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value12=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 28))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value12;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value13);
    if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value13;
    __freed_obj__ = 0;
    p_6=str;
    while(_while_condtional1=*p_6,    _while_condtional1) {
        if(_if_conditional7=*p_6==34,        _if_conditional7) {
            p_6++;
            buffer_append_char(buf_5,92);
            buffer_append_char(buf_5,34);
        }
        else {
            buffer_append_char(buf_5,*p_6);
            p_6++;
        }
    }
    __result9__ = __result_obj__ = ((char*)(right_value14=buffer_to_string(buf_5)));
    if(buf_5 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value14);
    if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { right_value14 = come_decrement_ref_count(right_value14, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value14;
    __freed_obj__ = 0;
    return __result9__;
    if(buf_5 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* sStrNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value15;
char* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value15, 0, sizeof(void*));
    __result10__ = __result_obj__ = ((char*)(right_value15=__builtin_string("sStrNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value15);
    if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { right_value15 = come_decrement_ref_count(right_value15, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value15;
    __freed_obj__ = 0;
    return __result10__;
}

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value16;
struct CVALUE* come_value_7;
void* right_value17;
char* __dec_obj8;
void* right_value18;
void* right_value19;
struct sType* __dec_obj9;
_Bool __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value16, 0, sizeof(void*));
memset(&come_value_7, 0, sizeof(struct CVALUE*));
memset(&right_value17, 0, sizeof(void*));
memset(&right_value18, 0, sizeof(void*));
memset(&right_value19, 0, sizeof(void*));
    come_value_7=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value16=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 53))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
    if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value16;
    __freed_obj__ = 0;
    __dec_obj8=come_value_7->c_value;
    come_value_7->c_value=(char*)come_increment_ref_count(((char*)(right_value17=xsprintf("\"%s\"",self->value))));
    if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value17);
    if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { right_value17 = come_decrement_ref_count(right_value17, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value17;
    __freed_obj__ = 0;
    __dec_obj9=come_value_7->type;
    come_value_7->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value19=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value18=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 56)))),"char*",(_Bool)0,info))));
    if(__dec_obj9) { come_call_finalizer(sType_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value18);
    if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value18;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value19);
    if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value19;
    __freed_obj__ = 0;
    come_value_7->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_7));
    add_come_last_code(info,"%s;\n",come_value_7->c_value);
    __result12__ = (_Bool)1;
    if(come_value_7 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_7, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result12__;
    if(come_value_7 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_7, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional8;
_Bool _if_conditional9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional8=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional8) {
            if(self->c_value && !__freed_obj__) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional9=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional9) {
            if(self->type && !__freed_obj__) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional10;
_Bool _if_conditional12;
_Bool _if_conditional13;
_Bool _if_conditional14;
_Bool _if_conditional16;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional10=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional10) {
                    if(self->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional12=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional12) {
                    if(self->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional13=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional13) {
                    if(self->mGenericsName && !__freed_obj__) { self->mGenericsName = come_decrement_ref_count(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(_if_conditional14=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional14) {
                    if(self->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional16=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional16) {
                    if(self->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional18=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional18) {
                    if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional19=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional19) {
                    if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional21=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional21) {
                    if(self->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional22=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional22) {
                    if(self->mAlignas && !__freed_obj__) { self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0); } 
                }
                if(_if_conditional23=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional23) {
                    if(self->mSizeNum && !__freed_obj__) { self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                }
                if(_if_conditional24=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional24) {
                    if(self->mOriginalTypeName && !__freed_obj__) { self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(_if_conditional25=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional25) {
                    if(self->mAsmName && !__freed_obj__) { self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional11=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional11) {
                            if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sTypeph* it_8;
_Bool _while_condtional2;
struct list_item$1sTypeph* prev_it_9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_8, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_9, 0, sizeof(struct list_item$1sTypeph*));
                        it_8=self->head;
                        while(_while_condtional2=it_8!=((void*)0),                        _while_condtional2) {
                            prev_it_9=it_8;
                            it_8=it_8->next;
                            if(prev_it_9 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_9, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional15;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional15=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional15) {
                                    if(self->item && !__freed_obj__) { come_call_finalizer(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_10;
_Bool _while_condtional3;
struct list_item$1sNodeph* prev_it_11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_10, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_11, 0, sizeof(struct list_item$1sNodeph*));
                        it_10=self->head;
                        while(_while_condtional3=it_10!=((void*)0),                        _while_condtional3) {
                            prev_it_11=it_10;
                            it_10=it_10->next;
                            if(prev_it_11 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_11, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional17=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional17) {
                                    if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0); } 
                                }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_12;
_Bool _while_condtional4;
struct list_item$1charph* prev_it_13;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_12, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_13, 0, sizeof(struct list_item$1charph*));
                        it_12=self->head;
                        while(_while_condtional4=it_12!=((void*)0),                        _while_condtional4) {
                            prev_it_13=it_12;
                            it_12=it_12->next;
                            if(prev_it_13 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_13, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional20;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional20=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional20) {
                                    if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional26;
void* right_value20;
struct list_item$1CVALUEph* litem_14;
struct CVALUE* __dec_obj10;
_Bool _if_conditional28;
void* right_value21;
struct list_item$1CVALUEph* litem_15;
struct CVALUE* __dec_obj11;
void* right_value22;
struct list_item$1CVALUEph* litem_16;
struct CVALUE* __dec_obj12;
struct list$1CVALUEph* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value20, 0, sizeof(void*));
memset(&litem_14, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value21, 0, sizeof(void*));
memset(&litem_15, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value22, 0, sizeof(void*));
memset(&litem_16, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional26=self->len==0,        _if_conditional26) {
            litem_14=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value20=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 279))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
            if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value20;
            __freed_obj__ = 0;
            litem_14->prev=((void*)0);
            litem_14->next=((void*)0);
            __dec_obj10=litem_14->item;
            litem_14->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj10) { come_call_finalizer(CVALUE_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
            self->tail=litem_14;
            self->head=litem_14;
        }
        else {
            if(_if_conditional28=self->len==1,            _if_conditional28) {
                litem_15=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value21=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 289))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
                if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value21;
                __freed_obj__ = 0;
                litem_15->prev=self->head;
                litem_15->next=((void*)0);
                __dec_obj11=litem_15->item;
                litem_15->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj11) { come_call_finalizer(CVALUE_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail=litem_15;
                self->head->next=litem_15;
            }
            else {
                litem_16=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value22=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 299))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
                if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value22;
                __freed_obj__ = 0;
                litem_16->prev=self->tail;
                litem_16->next=((void*)0);
                __dec_obj12=litem_16->item;
                litem_16->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj12) { come_call_finalizer(CVALUE_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail->next=litem_16;
                self->tail=litem_16;
            }
        }
        self->len++;
        __result11__ = __result_obj__ = self;
        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result11__;
        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional27;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional27=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional27) {
                    if(self->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

int sStrNode_sline(struct sStrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result13__ = self->sline;
    return __result13__;
}

char* sStrNode_sname(struct sStrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value23;
char* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value23, 0, sizeof(void*));
    __result14__ = __result_obj__ = ((char*)(right_value23=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
    if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { right_value23 = come_decrement_ref_count(right_value23, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value23;
    __freed_obj__ = 0;
    return __result14__;
}

struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value24;
char* __dec_obj13;
void* right_value32;
struct list$1sNodeph* __dec_obj17;
void* right_value33;
char* __dec_obj18;
struct sSStringNode* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value24, 0, sizeof(void*));
memset(&right_value32, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
    __dec_obj13=self->value;
    self->value=(char*)come_increment_ref_count(((char*)(right_value24=__builtin_string(value))));
    if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value24);
    if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { right_value24 = come_decrement_ref_count(right_value24, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value24;
    __freed_obj__ = 0;
    __dec_obj17=self->exps;
    self->exps=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value32=list$1sNodephp_clone(exps))));
    if(__dec_obj17) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value32);
    if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value32;
    __freed_obj__ = 0;
    self->sline=sline;
    __dec_obj18=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value33=__builtin_string(info->sname))));
    if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value33);
    if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value33;
    __freed_obj__ = 0;
    __result21__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 1, 0); }
    if(exps && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,exps, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result21__;
    if(self && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 1, 0); }
    if(exps && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,exps, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional29;
struct list$1sNodeph* __result15__;
void* right_value25;
void* right_value26;
struct list$1sNodeph* result_17;
struct list_item$1sNodeph* it_18;
_Bool _while_condtional5;
void* right_value31;
struct list$1sNodeph* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value25, 0, sizeof(void*));
memset(&right_value26, 0, sizeof(void*));
memset(&result_17, 0, sizeof(struct list$1sNodeph*));
memset(&it_18, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value31, 0, sizeof(void*));
        if(_if_conditional29=self==((void*)0),        _if_conditional29) {
            __result15__ = __result_obj__ = ((void*)0);
            return __result15__;
        }
        result_17=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value26=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value25=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 195))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
        if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value25;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value26);
        if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value26;
        __freed_obj__ = 0;
        it_18=self->head;
        while(_while_condtional5=it_18!=((void*)0),        _while_condtional5) {
            list$1sNodeph_add(result_17,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value31=sNode_clone(it_18->item)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
            if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { right_value31 = come_decrement_ref_count(right_value31, ((struct sNode*)right_value31)->finalize, ((struct sNode*)right_value31)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value31;
            __freed_obj__ = 0;
            it_18=it_18->next;
        }
        __result20__ = __result_obj__ = result_17;
        if(result_17 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_17, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result20__;
        if(result_17 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_17, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result16__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result16__;
            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional30;
void* right_value27;
struct list_item$1sNodeph* litem_19;
struct sNode* __dec_obj14;
_Bool _if_conditional31;
void* right_value28;
struct list_item$1sNodeph* litem_20;
struct sNode* __dec_obj15;
void* right_value29;
struct list_item$1sNodeph* litem_21;
struct sNode* __dec_obj16;
struct list$1sNodeph* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value27, 0, sizeof(void*));
memset(&litem_19, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value28, 0, sizeof(void*));
memset(&litem_20, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value29, 0, sizeof(void*));
memset(&litem_21, 0, sizeof(struct list_item$1sNodeph*));
                if(_if_conditional30=self->len==0,                _if_conditional30) {
                    litem_19=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value27=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 209))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
                    if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value27;
                    __freed_obj__ = 0;
                    litem_19->prev=((void*)0);
                    litem_19->next=((void*)0);
                    __dec_obj14=litem_19->item;
                    litem_19->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0,0,0); }
                    self->tail=litem_19;
                    self->head=litem_19;
                }
                else {
                    if(_if_conditional31=self->len==1,                    _if_conditional31) {
                        litem_20=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value28=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 219))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
                        if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value28;
                        __freed_obj__ = 0;
                        litem_20->prev=self->head;
                        litem_20->next=((void*)0);
                        __dec_obj15=litem_20->item;
                        litem_20->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0); }
                        self->tail=litem_20;
                        self->head->next=litem_20;
                    }
                    else {
                        litem_21=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value29=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 229))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
                        if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value29;
                        __freed_obj__ = 0;
                        litem_21->prev=self->tail;
                        litem_21->next=((void*)0);
                        __dec_obj16=litem_21->item;
                        litem_21->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0); }
                        self->tail->next=litem_21;
                        self->tail=litem_21;
                    }
                }
                self->len++;
                __result17__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                return __result17__;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional32;
struct sNode* __result18__;
void* right_value30;
struct sNode* result_22;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
struct sNode* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value30, 0, sizeof(void*));
memset(&result_22, 0, sizeof(struct sNode*));
                if(_if_conditional32=self==(void*)0,                _if_conditional32) {
                    __result18__ = __result_obj__ = (void*)0;
                    return __result18__;
                }
                result_22=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
                if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { right_value30 = come_decrement_ref_count(right_value30, ((struct sNode*)right_value30)->finalize, ((struct sNode*)right_value30)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value30;
                __freed_obj__ = 0;
                if(_if_conditional33=self!=((void*)0)&&self->clone!=((void*)0),                _if_conditional33) {
                    result_22->_protocol_obj=self->clone(self->_protocol_obj);
                }
                if(_if_conditional34=self!=((void*)0),                _if_conditional34) {
                    result_22->finalize=self->finalize;
                }
                if(_if_conditional35=self!=((void*)0),                _if_conditional35) {
                    result_22->clone=self->clone;
                }
                if(_if_conditional36=self!=((void*)0),                _if_conditional36) {
                    result_22->compile=self->compile;
                }
                if(_if_conditional37=self!=((void*)0),                _if_conditional37) {
                    result_22->sline=self->sline;
                }
                if(_if_conditional38=self!=((void*)0),                _if_conditional38) {
                    result_22->sname=self->sname;
                }
                if(_if_conditional39=self!=((void*)0),                _if_conditional39) {
                    result_22->terminated=self->terminated;
                }
                if(_if_conditional40=self!=((void*)0),                _if_conditional40) {
                    result_22->kind=self->kind;
                }
                __result19__ = __result_obj__ = result_22;
                if(result_22 && !__freed_obj__) { result_22 = come_decrement_ref_count(result_22, ((struct sNode*)result_22)->finalize, ((struct sNode*)result_22)->_protocol_obj, 0, 1, 0); } 
                return __result19__;
                if(result_22 && !__freed_obj__) { result_22 = come_decrement_ref_count(result_22, ((struct sNode*)result_22)->finalize, ((struct sNode*)result_22)->_protocol_obj, 0, 0, 0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

_Bool sSStringNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result22__ = (_Bool)0;
    return __result22__;
}

char* sSStringNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value34;
char* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value34, 0, sizeof(void*));
    __result23__ = __result_obj__ = ((char*)(right_value34=__builtin_string("sSStringNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
    if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { right_value34 = come_decrement_ref_count(right_value34, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value34;
    __freed_obj__ = 0;
    return __result23__;
}

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value35;
struct CVALUE* come_value_23;
void* right_value36;
void* right_value37;
struct buffer* buf_24;
_Bool _if_conditional44;
struct list$1sNodeph* o2_saved_25;
struct sNode* it_28;
_Bool _for_condtionalA1;
_Bool _if_conditional49;
_Bool __result32__;
void* right_value38;
struct CVALUE* come_value_31;
void* right_value39;
char* method_name_32;
_Bool _if_conditional55;
struct sType* obj_type_36;
_Bool _if_conditional56;
struct sType* obj_type2_37;
void* right_value41;
void* right_value42;
char* __dec_obj19;
void* right_value43;
void* right_value44;
struct buffer* buf2_38;
void* right_value45;
void* right_value46;
struct sType* type_39;
void* right_value47;
void* right_value48;
char* c_value_40;
void* right_value49;
void* right_value50;
struct sType* type2_41;
void* right_value51;
char* __dec_obj20;
void* right_value52;
char* __dec_obj21;
void* right_value80;
struct sType* __dec_obj41;
_Bool __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value35, 0, sizeof(void*));
memset(&come_value_23, 0, sizeof(struct CVALUE*));
memset(&right_value36, 0, sizeof(void*));
memset(&right_value37, 0, sizeof(void*));
memset(&buf_24, 0, sizeof(struct buffer*));
memset(&o2_saved_25, 0, sizeof(struct list$1sNodeph*));
memset(&it_28, 0, sizeof(struct sNode*));
memset(&right_value38, 0, sizeof(void*));
memset(&come_value_31, 0, sizeof(struct CVALUE*));
memset(&right_value39, 0, sizeof(void*));
memset(&method_name_32, 0, sizeof(char*));
memset(&obj_type_36, 0, sizeof(struct sType*));
memset(&obj_type2_37, 0, sizeof(struct sType*));
memset(&right_value41, 0, sizeof(void*));
memset(&right_value42, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&buf2_38, 0, sizeof(struct buffer*));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&type_39, 0, sizeof(struct sType*));
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
memset(&c_value_40, 0, sizeof(char*));
memset(&right_value49, 0, sizeof(void*));
memset(&right_value50, 0, sizeof(void*));
memset(&type2_41, 0, sizeof(struct sType*));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
    come_value_23=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value35=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 109))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
    if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value35;
    __freed_obj__ = 0;
    buf_24=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value37=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 111))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value36);
    if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value36;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value37);
    if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value37;
    __freed_obj__ = 0;
    buffer_append_str(buf_24,"xsprintf(\"");
    buffer_append_str(buf_24,self->value);
    buffer_append_str(buf_24,"\"");
    if(_if_conditional44=list$1sNodeph_length(self->exps)>0,    _if_conditional44) {
        for(
        o2_saved_25=(struct list$1sNodeph*)come_increment_ref_count((self->exps)),it_28=list$1sNodeph_begin((o2_saved_25)) ,        0;        _for_condtionalA1=        !list$1sNodeph_end((o2_saved_25)) ,        _for_condtionalA1;        it_28=list$1sNodeph_next((o2_saved_25)) ,        0        ){
            if(_if_conditional49=!node_compile(it_28,info),            _if_conditional49) {
                __result32__ = (_Bool)0;
                if(o2_saved_25 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_25, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_value_23 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_23, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(buf_24 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_24, (void*)0, (void*)0, 0, 0, 0, 0); }
                return __result32__;
            }
            come_value_31=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value38=get_value_from_stack(-1,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
            if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value38;
            __freed_obj__ = 0;
            dec_stack_ptr(1,info);
            method_name_32=(char*)come_increment_ref_count(((char*)(right_value39=create_method_name(come_value_31->type,(_Bool)0,"to_string",info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value39);
            if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { right_value39 = come_decrement_ref_count(right_value39, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value39;
            __freed_obj__ = 0;
            if(_if_conditional55=map$2charphsFunph_at(info->funcs,method_name_32,((void*)0))==((void*)0),            _if_conditional55) {
                obj_type_36=come_value_31->type->mNoSolvedGenericsType->v1;
                if(_if_conditional56=obj_type_36&&list$1sTypeph_length(obj_type_36->mGenericsTypes)>0,                _if_conditional56) {
                    obj_type2_37=come_value_31->type;
                    __dec_obj19=method_name_32;
                    method_name_32=(char*)come_increment_ref_count(((char*)(right_value42=make_generics_function(obj_type2_37,(char*)come_increment_ref_count(((char*)(right_value41=__builtin_string("to_string")))),info))));
                    if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
                    if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { right_value41 = come_decrement_ref_count(right_value41, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value41;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value42);
                    if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value42;
                    __freed_obj__ = 0;
                }
                else {
                    err_msg(info,"require to_string implementation(%s)",come_value_31->type->mClass->mName);
                    exit(1);
                }
            }
            buf2_38=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 140))))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value43);
            if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value43;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value44);
            if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value44;
            __freed_obj__ = 0;
            buffer_append_str(buf2_38,method_name_32);
            buffer_append_str(buf2_38,"(");
            buffer_append_str(buf2_38,come_value_31->c_value);
            buffer_append_str(buf2_38,")");
            type_39=(struct sType*)come_increment_ref_count(((struct sType*)(right_value46=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value45=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 147)))),"char*",(_Bool)0,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value45);
            if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value45;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value46);
            if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[5] = right_value46;
            __freed_obj__ = 0;
            type_39->mHeap=(_Bool)1;
            c_value_40=(char*)come_increment_ref_count(((char*)(right_value48=append_object_to_right_values(((char*)(right_value47=buffer_to_string(buf2_38))),(struct sType*)come_increment_ref_count(type_39),info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value47);
            if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[6] = right_value47;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value48);
            if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[7] = right_value48;
            __freed_obj__ = 0;
            buffer_append_str(buf_24,",");
            buffer_append_str(buf_24,c_value_40);
            if(come_value_31 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_31, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(method_name_32 && !__freed_obj__) { method_name_32 = come_decrement_ref_count(method_name_32, (void*)0, (void*)0, 0, 0, 0); }
            if(buf2_38 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf2_38, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(type_39 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_39, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(c_value_40 && !__freed_obj__) { c_value_40 = come_decrement_ref_count(c_value_40, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(o2_saved_25 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_25, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    buffer_append_str(buf_24,")");
    type2_41=(struct sType*)come_increment_ref_count(((struct sType*)(right_value50=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value49=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 159)))),"char*",(_Bool)0,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value49);
    if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value49;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value50);
    if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value50;
    __freed_obj__ = 0;
    type2_41->mHeap=(_Bool)1;
    __dec_obj20=come_value_23->c_value;
    come_value_23->c_value=(char*)come_increment_ref_count(((char*)(right_value51=buffer_to_string(buf_24))));
    if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value51);
    if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { right_value51 = come_decrement_ref_count(right_value51, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value51;
    __freed_obj__ = 0;
    __dec_obj21=come_value_23->c_value;
    come_value_23->c_value=(char*)come_increment_ref_count(((char*)(right_value52=append_object_to_right_values(come_value_23->c_value,(struct sType*)come_increment_ref_count(type2_41),info))));
    if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value52);
    if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { right_value52 = come_decrement_ref_count(right_value52, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value52;
    __freed_obj__ = 0;
    __dec_obj41=come_value_23->type;
    come_value_23->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value80=sType_clone(type2_41))));
    if(__dec_obj41) { come_call_finalizer(sType_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value80);
    if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value80;
    __freed_obj__ = 0;
    come_value_23->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_23));
    add_come_last_code(info,"%s;\n",come_value_23->c_value);
    __result52__ = (_Bool)1;
    if(come_value_23 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_23, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_24 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_24, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_41 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_41, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result52__;
    if(come_value_23 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_23, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_24 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_24, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_41 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_41, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result24__ = self->len;
        return __result24__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional45;
struct sNode* result_26;
struct sNode* __result25__;
_Bool _if_conditional46;
struct sNode* __result26__;
struct sNode* result_27;
struct sNode* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_26, 0, sizeof(struct sNode*));
memset(&result_27, 0, sizeof(struct sNode*));
            if(_if_conditional45=self==((void*)0),            _if_conditional45) {
                memset(&result_26,0,sizeof(struct sNode*));
                __result25__ = __result_obj__ = result_26;
                return __result25__;
            }
            self->it=self->head;
            if(_if_conditional46=self->it,            _if_conditional46) {
                __result26__ = __result_obj__ = self->it->item;
                return __result26__;
            }
            memset(&result_27,0,sizeof(struct sNode*));
            __result27__ = __result_obj__ = result_27;
            return __result27__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result28__ = self==((void*)0)||self->it==((void*)0);
            return __result28__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional47;
struct sNode* result_29;
struct sNode* __result29__;
_Bool _if_conditional48;
struct sNode* __result30__;
struct sNode* result_30;
struct sNode* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_29, 0, sizeof(struct sNode*));
memset(&result_30, 0, sizeof(struct sNode*));
            if(_if_conditional47=self==((void*)0)||self->it==((void*)0),            _if_conditional47) {
                memset(&result_29,0,sizeof(struct sNode*));
                __result29__ = __result_obj__ = result_29;
                return __result29__;
            }
            self->it=self->it->next;
            if(_if_conditional48=self->it,            _if_conditional48) {
                __result30__ = __result_obj__ = self->it->item;
                return __result30__;
            }
            memset(&result_30,0,sizeof(struct sNode*));
            __result31__ = __result_obj__ = result_30;
            return __result31__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_33;
unsigned int it_34;
_Bool _while_condtional6;
_Bool _if_conditional50;
void* right_value40;
_Bool _if_conditional52;
struct sFun* __result35__;
_Bool _if_conditional53;
_Bool _if_conditional54;
struct sFun* __result36__;
struct sFun* __result37__;
struct sFun* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_33, 0, sizeof(unsigned int));
memset(&it_34, 0, sizeof(unsigned int));
memset(&right_value40, 0, sizeof(void*));
                hash_33=string_get_hash_key(((char*)key))%self->size;
                it_34=hash_33;
                while(_while_condtional6=(_Bool)1,                _while_condtional6) {
                    if(_if_conditional50=self->item_existance[it_34],                    _if_conditional50) {
                        if(_if_conditional52=optional$2boolbool_value(((struct optional$2boolbool*)(right_value40=string_equals(self->keys[it_34],key)))),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40),
                        (right_value40 && right_value40 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value40, 
                        __freed_obj__ = 0, 
                        _if_conditional52) {
                            __result35__ = __result_obj__ = self->items[it_34];
                            return __result35__;
                        }
                        it_34++;
                        if(_if_conditional53=it_34>=self->size,                        _if_conditional53) {
                            it_34=0;
                        }
                        else {
                            if(_if_conditional54=it_34==hash_33,                            _if_conditional54) {
                                __result36__ = __result_obj__ = default_value;
                                return __result36__;
                            }
                        }
                    }
                    else {
                        __result37__ = __result_obj__ = default_value;
                        return __result37__;
                    }
                }
                __result38__ = __result_obj__ = default_value;
                return __result38__;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional51;
_Bool default_value_35;
_Bool __result33__;
_Bool __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_35, 0, sizeof(_Bool));
                            if(_if_conditional51=self==((void*)0),                            _if_conditional51) {
                                memset(&default_value_35,0,sizeof(_Bool));
                                __result33__ = default_value_35;
                                return __result33__;
                            }
                            else {
                                __result34__ = self->v1;
                                return __result34__;
                            }
}

static void optional$2boolboolp_finalize(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __result39__ = self->len;
                    return __result39__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional57;
struct sType* __result40__;
void* right_value53;
struct sType* result_42;
_Bool _if_conditional58;
_Bool _if_conditional59;
void* right_value56;
struct tuple1$1sTypeph* __dec_obj23;
_Bool _if_conditional63;
void* right_value57;
struct tuple1$1sTypeph* __dec_obj24;
_Bool _if_conditional64;
void* right_value58;
char* __dec_obj25;
_Bool _if_conditional65;
void* right_value65;
struct list$1sTypeph* __dec_obj29;
_Bool _if_conditional69;
void* right_value66;
struct list$1sNodeph* __dec_obj30;
_Bool _if_conditional70;
_Bool _if_conditional71;
void* right_value67;
struct list$1sTypeph* __dec_obj31;
_Bool _if_conditional72;
void* right_value74;
struct list$1charph* __dec_obj35;
_Bool _if_conditional76;
void* right_value75;
struct tuple1$1sTypeph* __dec_obj36;
_Bool _if_conditional77;
_Bool _if_conditional78;
void* right_value76;
struct sNode* __dec_obj37;
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
_Bool _if_conditional101;
_Bool _if_conditional102;
void* right_value77;
struct sNode* __dec_obj38;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
void* right_value78;
char* __dec_obj39;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
void* right_value79;
char* __dec_obj40;
struct sType* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value53, 0, sizeof(void*));
memset(&result_42, 0, sizeof(struct sType*));
memset(&right_value56, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
        if(_if_conditional57=self==(void*)0,        _if_conditional57) {
            __result40__ = __result_obj__ = (void*)0;
            return __result40__;
        }
        result_42=(struct sType*)come_increment_ref_count(((struct sType*)(right_value53=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
        if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value53;
        __freed_obj__ = 0;
        if(_if_conditional58=self!=((void*)0),        _if_conditional58) {
            result_42->mClass=self->mClass;
        }
        if(_if_conditional59=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional59) {
            __dec_obj23=result_42->mNoSolvedGenericsType;
            result_42->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value56=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            if(__dec_obj23) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
            if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value56;
            __freed_obj__ = 0;
        }
        if(_if_conditional63=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional63) {
            __dec_obj24=result_42->mOriginalLoadVarType;
            result_42->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value57=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            if(__dec_obj24) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
            if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value57;
            __freed_obj__ = 0;
        }
        if(_if_conditional64=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional64) {
            __dec_obj25=result_42->mGenericsName;
            result_42->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value58=string_clone(self->mGenericsName))));
            if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
            if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value58;
            __freed_obj__ = 0;
        }
        if(_if_conditional65=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional65) {
            __dec_obj29=result_42->mGenericsTypes;
            result_42->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value65=list$1sTypephp_clone(self->mGenericsTypes))));
            if(__dec_obj29) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
            if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value65;
            __freed_obj__ = 0;
        }
        if(_if_conditional69=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional69) {
            __dec_obj30=result_42->mArrayNum;
            result_42->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value66=list$1sNodephp_clone(self->mArrayNum))));
            if(__dec_obj30) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
            if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value66;
            __freed_obj__ = 0;
        }
        if(_if_conditional70=self!=((void*)0),        _if_conditional70) {
            result_42->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(_if_conditional71=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional71) {
            __dec_obj31=result_42->mParamTypes;
            result_42->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value67=list$1sTypephp_clone(self->mParamTypes))));
            if(__dec_obj31) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
            if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value67;
            __freed_obj__ = 0;
        }
        if(_if_conditional72=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional72) {
            __dec_obj35=result_42->mParamNames;
            result_42->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value74=list$1charphp_clone(self->mParamNames))));
            if(__dec_obj35) { come_call_finalizer(list$1charph_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value74);
            if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value74;
            __freed_obj__ = 0;
        }
        if(_if_conditional76=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional76) {
            __dec_obj36=result_42->mResultType;
            result_42->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value75=tuple1$1sTypephp_clone(self->mResultType))));
            if(__dec_obj36) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value75);
            if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value75;
            __freed_obj__ = 0;
        }
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            result_42->mVarArgs=self->mVarArgs;
        }
        if(_if_conditional78=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional78) {
            __dec_obj37=result_42->mAlignas;
            result_42->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value76=sNode_clone(self->mAlignas))));
            if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value76);
            if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { right_value76 = come_decrement_ref_count(right_value76, ((struct sNode*)right_value76)->finalize, ((struct sNode*)right_value76)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value76;
            __freed_obj__ = 0;
        }
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            result_42->mUnsigned=self->mUnsigned;
        }
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            result_42->mShort=self->mShort;
        }
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            result_42->mLong=self->mLong;
        }
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            result_42->mLongLong=self->mLongLong;
        }
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            result_42->mConstant=self->mConstant;
        }
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            result_42->mRegister=self->mRegister;
        }
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            result_42->mVolatile=self->mVolatile;
        }
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            result_42->mStatic=self->mStatic;
        }
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            result_42->mExtern=self->mExtern;
        }
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            result_42->mRestrict=self->mRestrict;
        }
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            result_42->mImmutable=self->mImmutable;
        }
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            result_42->mHeap=self->mHeap;
        }
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            result_42->mDummyHeap=self->mDummyHeap;
        }
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            result_42->mDelegate=self->mDelegate;
        }
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            result_42->mShare=self->mShare;
        }
        if(_if_conditional94=self!=((void*)0),        _if_conditional94) {
            result_42->mClone=self->mClone;
        }
        if(_if_conditional95=self!=((void*)0),        _if_conditional95) {
            result_42->mNoHeap=self->mNoHeap;
        }
        if(_if_conditional96=self!=((void*)0),        _if_conditional96) {
            result_42->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(_if_conditional97=self!=((void*)0),        _if_conditional97) {
            result_42->mRefference=self->mRefference;
        }
        if(_if_conditional98=self!=((void*)0),        _if_conditional98) {
            result_42->mException=self->mException;
        }
        if(_if_conditional99=self!=((void*)0),        _if_conditional99) {
            result_42->mPointerNum=self->mPointerNum;
        }
        if(_if_conditional100=self!=((void*)0),        _if_conditional100) {
            result_42->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        if(_if_conditional101=self!=((void*)0),        _if_conditional101) {
            result_42->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(_if_conditional102=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional102) {
            __dec_obj38=result_42->mSizeNum;
            result_42->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value77=sNode_clone(self->mSizeNum))));
            if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
            if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { right_value77 = come_decrement_ref_count(right_value77, ((struct sNode*)right_value77)->finalize, ((struct sNode*)right_value77)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value77;
            __freed_obj__ = 0;
        }
        if(_if_conditional103=self!=((void*)0),        _if_conditional103) {
            result_42->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(_if_conditional104=self!=((void*)0),        _if_conditional104) {
            result_42->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(_if_conditional105=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional105) {
            __dec_obj39=result_42->mOriginalTypeName;
            result_42->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value78=string_clone(self->mOriginalTypeName))));
            if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value78);
            if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value78;
            __freed_obj__ = 0;
        }
        if(_if_conditional106=self!=((void*)0),        _if_conditional106) {
            result_42->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(_if_conditional107=self!=((void*)0),        _if_conditional107) {
            result_42->mFunctionParam=self->mFunctionParam;
        }
        if(_if_conditional108=self!=((void*)0),        _if_conditional108) {
            result_42->mAllocaValue=self->mAllocaValue;
        }
        if(_if_conditional109=self!=((void*)0),        _if_conditional109) {
            result_42->mGenericsStruct=self->mGenericsStruct;
        }
        if(_if_conditional110=self!=((void*)0),        _if_conditional110) {
            result_42->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(_if_conditional111=self!=((void*)0),        _if_conditional111) {
            result_42->mComeMemCore=self->mComeMemCore;
        }
        if(_if_conditional112=self!=((void*)0),        _if_conditional112) {
            result_42->mInline=self->mInline;
        }
        if(_if_conditional113=self!=((void*)0),        _if_conditional113) {
            result_42->mNullValue=self->mNullValue;
        }
        if(_if_conditional114=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional114) {
            __dec_obj40=result_42->mAsmName;
            result_42->mAsmName=(char*)come_increment_ref_count(((char*)(right_value79=string_clone(self->mAsmName))));
            if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
            if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value79;
            __freed_obj__ = 0;
        }
        __result51__ = __result_obj__ = result_42;
        if(result_42 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_42, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result51__;
        if(result_42 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_42, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional60;
struct tuple1$1sTypeph* __result41__;
void* right_value54;
struct tuple1$1sTypeph* result_43;
_Bool _if_conditional62;
void* right_value55;
struct sType* __dec_obj22;
struct tuple1$1sTypeph* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value54, 0, sizeof(void*));
memset(&result_43, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value55, 0, sizeof(void*));
                if(_if_conditional60=self==(void*)0,                _if_conditional60) {
                    __result41__ = __result_obj__ = (void*)0;
                    return __result41__;
                }
                result_43=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value54=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
                if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value54;
                __freed_obj__ = 0;
                if(_if_conditional62=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional62) {
                    __dec_obj22=result_43->v1;
                    result_43->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value55=sType_clone(self->v1))));
                    if(__dec_obj22) { come_call_finalizer(sType_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
                    if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value55;
                    __freed_obj__ = 0;
                }
                __result42__ = __result_obj__ = result_43;
                if(result_43 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_43, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result42__;
                if(result_43 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_43, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional61;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional61=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional61) {
                        if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional66;
struct list$1sTypeph* __result43__;
void* right_value59;
void* right_value60;
struct list$1sTypeph* result_44;
struct list_item$1sTypeph* it_45;
_Bool _while_condtional7;
void* right_value64;
struct list$1sTypeph* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&result_44, 0, sizeof(struct list$1sTypeph*));
memset(&it_45, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value64, 0, sizeof(void*));
                if(_if_conditional66=self==((void*)0),                _if_conditional66) {
                    __result43__ = __result_obj__ = ((void*)0);
                    return __result43__;
                }
                result_44=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value60=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value59=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 195))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59);
                if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value59;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value60);
                if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value60;
                __freed_obj__ = 0;
                it_45=self->head;
                while(_while_condtional7=it_45!=((void*)0),                _while_condtional7) {
                    list$1sTypeph_add(result_44,(struct sType*)come_increment_ref_count(((struct sType*)(right_value64=sType_clone(it_45->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64);
                    if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value64;
                    __freed_obj__ = 0;
                    it_45=it_45->next;
                }
                __result46__ = __result_obj__ = result_44;
                if(result_44 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_44, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result46__;
                if(result_44 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_44, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result44__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result44__;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional67;
void* right_value61;
struct list_item$1sTypeph* litem_46;
struct sType* __dec_obj26;
_Bool _if_conditional68;
void* right_value62;
struct list_item$1sTypeph* litem_47;
struct sType* __dec_obj27;
void* right_value63;
struct list_item$1sTypeph* litem_48;
struct sType* __dec_obj28;
struct list$1sTypeph* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value61, 0, sizeof(void*));
memset(&litem_46, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value62, 0, sizeof(void*));
memset(&litem_47, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value63, 0, sizeof(void*));
memset(&litem_48, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional67=self->len==0,                        _if_conditional67) {
                            litem_46=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value61=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 209))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value61);
                            if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value61;
                            __freed_obj__ = 0;
                            litem_46->prev=((void*)0);
                            litem_46->next=((void*)0);
                            __dec_obj26=litem_46->item;
                            litem_46->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj26) { come_call_finalizer(sType_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->tail=litem_46;
                            self->head=litem_46;
                        }
                        else {
                            if(_if_conditional68=self->len==1,                            _if_conditional68) {
                                litem_47=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value62=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 219))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
                                if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value62;
                                __freed_obj__ = 0;
                                litem_47->prev=self->head;
                                litem_47->next=((void*)0);
                                __dec_obj27=litem_47->item;
                                litem_47->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj27) { come_call_finalizer(sType_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0); }
                                self->tail=litem_47;
                                self->head->next=litem_47;
                            }
                            else {
                                litem_48=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value63=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 229))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value63);
                                if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value63;
                                __freed_obj__ = 0;
                                litem_48->prev=self->tail;
                                litem_48->next=((void*)0);
                                __dec_obj28=litem_48->item;
                                litem_48->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj28) { come_call_finalizer(sType_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0); }
                                self->tail->next=litem_48;
                                self->tail=litem_48;
                            }
                        }
                        self->len++;
                        __result45__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result45__;
                        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
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
_Bool _if_conditional73;
struct list$1charph* __result47__;
void* right_value68;
void* right_value69;
struct list$1charph* result_49;
struct list_item$1charph* it_50;
_Bool _while_condtional8;
void* right_value73;
struct list$1charph* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&result_49, 0, sizeof(struct list$1charph*));
memset(&it_50, 0, sizeof(struct list_item$1charph*));
memset(&right_value73, 0, sizeof(void*));
                if(_if_conditional73=self==((void*)0),                _if_conditional73) {
                    __result47__ = __result_obj__ = ((void*)0);
                    return __result47__;
                }
                result_49=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value69=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value68=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 195))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value68);
                if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value68;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value69);
                if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value69;
                __freed_obj__ = 0;
                it_50=self->head;
                while(_while_condtional8=it_50!=((void*)0),                _while_condtional8) {
                    list$1charph_add(result_49,(char*)come_increment_ref_count(((char*)(right_value73=string_clone(it_50->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value73);
                    if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value73;
                    __freed_obj__ = 0;
                    it_50=it_50->next;
                }
                __result50__ = __result_obj__ = result_49;
                if(result_49 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_49, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result50__;
                if(result_49 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_49, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result48__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result48__;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional74;
void* right_value70;
struct list_item$1charph* litem_51;
char* __dec_obj32;
_Bool _if_conditional75;
void* right_value71;
struct list_item$1charph* litem_52;
char* __dec_obj33;
void* right_value72;
struct list_item$1charph* litem_53;
char* __dec_obj34;
struct list$1charph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value70, 0, sizeof(void*));
memset(&litem_51, 0, sizeof(struct list_item$1charph*));
memset(&right_value71, 0, sizeof(void*));
memset(&litem_52, 0, sizeof(struct list_item$1charph*));
memset(&right_value72, 0, sizeof(void*));
memset(&litem_53, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional74=self->len==0,                        _if_conditional74) {
                            litem_51=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value70=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 209))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70);
                            if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value70;
                            __freed_obj__ = 0;
                            litem_51->prev=((void*)0);
                            litem_51->next=((void*)0);
                            __dec_obj32=litem_51->item;
                            litem_51->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0,0); }
                            self->tail=litem_51;
                            self->head=litem_51;
                        }
                        else {
                            if(_if_conditional75=self->len==1,                            _if_conditional75) {
                                litem_52=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value71=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 219))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value71);
                                if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value71;
                                __freed_obj__ = 0;
                                litem_52->prev=self->head;
                                litem_52->next=((void*)0);
                                __dec_obj33=litem_52->item;
                                litem_52->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0,0); }
                                self->tail=litem_52;
                                self->head->next=litem_52;
                            }
                            else {
                                litem_53=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value72=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 229))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value72);
                                if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value72;
                                __freed_obj__ = 0;
                                litem_53->prev=self->tail;
                                litem_53->next=((void*)0);
                                __dec_obj34=litem_53->item;
                                litem_53->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
                                self->tail->next=litem_53;
                                self->tail=litem_53;
                            }
                        }
                        self->len++;
                        __result49__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                        return __result49__;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

int sSStringNode_sline(struct sSStringNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result53__ = self->sline;
    return __result53__;
}

char* sSStringNode_sname(struct sSStringNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value81;
char* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value81, 0, sizeof(void*));
    __result54__ = __result_obj__ = ((char*)(right_value81=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
    if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { right_value81 = come_decrement_ref_count(right_value81, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value81;
    __freed_obj__ = 0;
    return __result54__;
}

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value82;
char* __dec_obj42;
struct sCharNode* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value82, 0, sizeof(void*));
    self->value=value;
    self->sline=info->sline;
    __dec_obj42=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value82=__builtin_string(info->sname))));
    if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value82);
    if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value82;
    __freed_obj__ = 0;
    __result55__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result55__;
    if(self && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sCharNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result56__ = (_Bool)0;
    return __result56__;
}

char* sCharNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value83;
char* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value83, 0, sizeof(void*));
    __result57__ = __result_obj__ = ((char*)(right_value83=__builtin_string("sCharNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
    if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value83;
    __freed_obj__ = 0;
    return __result57__;
}

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value84;
struct CVALUE* come_value_54;
void* right_value85;
char* __dec_obj43;
void* right_value86;
void* right_value87;
struct sType* __dec_obj44;
_Bool __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value84, 0, sizeof(void*));
memset(&come_value_54, 0, sizeof(struct CVALUE*));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
    come_value_54=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value84=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 213))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value84);
    if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value84;
    __freed_obj__ = 0;
    __dec_obj43=come_value_54->c_value;
    come_value_54->c_value=(char*)come_increment_ref_count(((char*)(right_value85=xsprintf("%d",self->value))));
    if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value85);
    if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { right_value85 = come_decrement_ref_count(right_value85, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value85;
    __freed_obj__ = 0;
    __dec_obj44=come_value_54->type;
    come_value_54->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value87=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value86=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 216)))),"char",(_Bool)0,info))));
    if(__dec_obj44) { come_call_finalizer(sType_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value86);
    if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value86;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value87);
    if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value87;
    __freed_obj__ = 0;
    come_value_54->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_54));
    add_come_last_code(info,"%s;\n",come_value_54->c_value);
    __result58__ = (_Bool)1;
    if(come_value_54 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_54, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result58__;
    if(come_value_54 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_54, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sCharNode_sline(struct sCharNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result59__ = self->sline;
    return __result59__;
}

char* sCharNode_sname(struct sCharNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value88;
char* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value88, 0, sizeof(void*));
    __result60__ = __result_obj__ = ((char*)(right_value88=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value88);
    if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value88;
    __freed_obj__ = 0;
    return __result60__;
}

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value89;
char* __dec_obj45;
struct sWCharNode* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value89, 0, sizeof(void*));
    self->value=value;
    self->sline=info->sline;
    __dec_obj45=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value89=__builtin_string(info->sname))));
    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value89);
    if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value89;
    __freed_obj__ = 0;
    __result61__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result61__;
    if(self && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sWCharNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result62__ = (_Bool)0;
    return __result62__;
}

char* sWCharNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value90;
char* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value90, 0, sizeof(void*));
    __result63__ = __result_obj__ = ((char*)(right_value90=__builtin_string("sWCharNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
    if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value90;
    __freed_obj__ = 0;
    return __result63__;
}

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value91;
struct CVALUE* come_value_55;
void* right_value92;
char* __dec_obj46;
void* right_value93;
void* right_value94;
struct sType* __dec_obj47;
_Bool __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value91, 0, sizeof(void*));
memset(&come_value_55, 0, sizeof(struct CVALUE*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
    come_value_55=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value91=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 265))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value91);
    if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value91;
    __freed_obj__ = 0;
    __dec_obj46=come_value_55->c_value;
    come_value_55->c_value=(char*)come_increment_ref_count(((char*)(right_value92=xsprintf("L'%lc'",self->value))));
    if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value92);
    if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value92;
    __freed_obj__ = 0;
    __dec_obj47=come_value_55->type;
    come_value_55->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value94=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value93=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 268)))),"wchar_t",(_Bool)0,info))));
    if(__dec_obj47) { come_call_finalizer(sType_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value93);
    if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value93;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value94);
    if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value94;
    __freed_obj__ = 0;
    come_value_55->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_55));
    add_come_last_code(info,"%s;\n",come_value_55->c_value);
    __result64__ = (_Bool)1;
    if(come_value_55 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_55, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result64__;
    if(come_value_55 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_55, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sWCharNode_sline(struct sWCharNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result65__ = self->sline;
    return __result65__;
}

char* sWCharNode_sname(struct sWCharNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value95;
char* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value95, 0, sizeof(void*));
    __result66__ = __result_obj__ = ((char*)(right_value95=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
    if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { right_value95 = come_decrement_ref_count(right_value95, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value95;
    __freed_obj__ = 0;
    return __result66__;
}

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int* __dec_obj48;
void* right_value96;
char* __dec_obj49;
struct sWStringNode* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value96, 0, sizeof(void*));
    __dec_obj48=self->value;
    self->value=(unsigned int*)come_increment_ref_count(value);
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0,0); }
    self->sline=sline;
    __dec_obj49=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value96=__builtin_string(info->sname))));
    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96);
    if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value96;
    __freed_obj__ = 0;
    __result67__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 1, 0); }
    return __result67__;
    if(self && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 1, 0); }
}

_Bool sWStringNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result68__ = (_Bool)0;
    return __result68__;
}

char* sWStringNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value97;
char* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value97, 0, sizeof(void*));
    __result69__ = __result_obj__ = ((char*)(right_value97=__builtin_string("sWStringNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97);
    if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { right_value97 = come_decrement_ref_count(right_value97, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value97;
    __freed_obj__ = 0;
    return __result69__;
}

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value98;
struct CVALUE* come_value_56;
void* right_value99;
char* __dec_obj50;
void* right_value100;
void* right_value101;
struct sType* __dec_obj51;
_Bool __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value98, 0, sizeof(void*));
memset(&come_value_56, 0, sizeof(struct CVALUE*));
memset(&right_value99, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
    come_value_56=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value98=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 317))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value98);
    if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value98;
    __freed_obj__ = 0;
    __dec_obj50=come_value_56->c_value;
    come_value_56->c_value=(char*)come_increment_ref_count(((char*)(right_value99=xsprintf("L'%ls'",self->value))));
    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value99);
    if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { right_value99 = come_decrement_ref_count(right_value99, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value99;
    __freed_obj__ = 0;
    __dec_obj51=come_value_56->type;
    come_value_56->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value101=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value100=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 320)))),"wchar_t*",(_Bool)0,info))));
    if(__dec_obj51) { come_call_finalizer(sType_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value100);
    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value100;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value101);
    if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value101;
    __freed_obj__ = 0;
    come_value_56->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_56));
    add_come_last_code(info,"%s;\n",come_value_56->c_value);
    __result70__ = (_Bool)1;
    if(come_value_56 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_56, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result70__;
    if(come_value_56 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_56, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sWStringNode_sline(struct sWStringNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result71__ = self->sline;
    return __result71__;
}

char* sWStringNode_sname(struct sWStringNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value102;
char* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value102, 0, sizeof(void*));
    __result72__ = __result_obj__ = ((char*)(right_value102=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value102);
    if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { right_value102 = come_decrement_ref_count(right_value102, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value102;
    __freed_obj__ = 0;
    return __result72__;
}

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value103;
char* __dec_obj52;
void* right_value104;
char* __dec_obj53;
struct sRegexNode* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
    __dec_obj52=self->str;
    self->str=(char*)come_increment_ref_count(((char*)(right_value103=__builtin_string(str))));
    if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value103);
    if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { right_value103 = come_decrement_ref_count(right_value103, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value103;
    __freed_obj__ = 0;
    self->global=global;
    self->ignore_case=ignore_case;
    self->sline=sline;
    __dec_obj53=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value104=__builtin_string(info->sname))));
    if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value104);
    if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value104;
    __freed_obj__ = 0;
    __result73__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(str && !__freed_obj__) { str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 1, 0); }
    return __result73__;
    if(self && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(str && !__freed_obj__) { str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 1, 0); }
}

_Bool sRegexNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result74__ = (_Bool)0;
    return __result74__;
}

char* sRegexNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value105;
char* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value105, 0, sizeof(void*));
    __result75__ = __result_obj__ = ((char*)(right_value105=__builtin_string("sRegexNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
    if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { right_value105 = come_decrement_ref_count(right_value105, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value105;
    __freed_obj__ = 0;
    return __result75__;
}

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value106;
struct CVALUE* come_value_57;
void* right_value107;
void* right_value108;
void* right_value109;
void* right_value110;
void* right_value111;
char* __dec_obj54;
void* right_value112;
void* right_value113;
struct sType* __dec_obj55;
void* right_value114;
char* __dec_obj56;
_Bool __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value106, 0, sizeof(void*));
memset(&come_value_57, 0, sizeof(struct CVALUE*));
memset(&right_value107, 0, sizeof(void*));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
    come_value_57=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value106=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 374))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
    if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value106;
    __freed_obj__ = 0;
    __dec_obj54=come_value_57->c_value;
    come_value_57->c_value=(char*)come_increment_ref_count(((char*)(right_value111=xsprintf("charp_to_regex(\"%s\", %s, 0, %s, 0, 0, 0, 0, 0)",self->str,self->ignore_case?((char*)(right_value107=__builtin_string("1"))):((char*)(right_value108=__builtin_string("0"))),self->global?((char*)(right_value109=__builtin_string("1"))):((char*)(right_value110=__builtin_string("0")))))));
    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value107);
    if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { right_value107 = come_decrement_ref_count(right_value107, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value107;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value108);
    if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value108;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value109);
    if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { right_value109 = come_decrement_ref_count(right_value109, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value109;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value110);
    if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { right_value110 = come_decrement_ref_count(right_value110, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value110;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value111);
    if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value111;
    __freed_obj__ = 0;
    __dec_obj55=come_value_57->type;
    come_value_57->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value113=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value112=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 377)))),"come_regex",(_Bool)0,info))));
    if(__dec_obj55) { come_call_finalizer(sType_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value112);
    if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value112;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value113);
    if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value113;
    __freed_obj__ = 0;
    come_value_57->type->mPointerNum=1;
    come_value_57->type->mHeap=(_Bool)1;
    come_value_57->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_57));
    add_come_last_code(info,"%s;\n",come_value_57->c_value);
    __dec_obj56=come_value_57->c_value;
    come_value_57->c_value=(char*)come_increment_ref_count(((char*)(right_value114=append_object_to_right_values(come_value_57->c_value,(struct sType*)come_increment_ref_count(come_value_57->type),info))));
    if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value114);
    if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { right_value114 = come_decrement_ref_count(right_value114, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value114;
    __freed_obj__ = 0;
    __result76__ = (_Bool)1;
    if(come_value_57 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_57, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result76__;
    if(come_value_57 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_57, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sRegexNode_sline(struct sRegexNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result77__ = self->sline;
    return __result77__;
}

char* sRegexNode_sname(struct sRegexNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value115;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value115, 0, sizeof(void*));
    __result78__ = __result_obj__ = ((char*)(right_value115=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
    if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value115;
    __freed_obj__ = 0;
    return __result78__;
}

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __dec_obj57;
void* right_value116;
char* __dec_obj58;
struct sListNode* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value116, 0, sizeof(void*));
    __dec_obj57=self->list_elements;
    self->list_elements=(struct list$1sNodeph*)come_increment_ref_count(list_elements);
    if(__dec_obj57) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0); }
    self->sline=info->sline;
    __dec_obj58=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value116=__builtin_string(info->sname))));
    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value116);
    if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { right_value116 = come_decrement_ref_count(right_value116, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value116;
    __freed_obj__ = 0;
    __result79__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sListNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(list_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,list_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result79__;
    if(self && !__freed_obj__) { come_call_finalizer(sListNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(list_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,list_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sListNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result80__ = (_Bool)0;
    return __result80__;
}

char* sListNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value117;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value117, 0, sizeof(void*));
    __result81__ = __result_obj__ = ((char*)(right_value117=__builtin_string("sListNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
    if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value117;
    __freed_obj__ = 0;
    return __result81__;
}

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* list_elements_58;
void* right_value118;
void* right_value119;
struct list$1CVALUEph* params_61;
struct sType* list_element_type_62;
struct list$1sNodeph* o2_saved_63;
struct sNode* it_64;
_Bool _for_condtionalA2;
_Bool _if_conditional123;
_Bool __result83__;
void* right_value120;
struct CVALUE* come_value_65;
void* right_value121;
struct sType* __dec_obj59;
void* right_value122;
struct sType* type_values_66;
void* right_value126;
static int list_value_num_70=0;
void* right_value127;
char* var_name_71;
void* right_value128;
struct sVar* var__72;
void* right_value129;
void* right_value130;
void* right_value131;
struct buffer* source_74;
int i_75;
struct list$1CVALUEph* o2_saved_76;
struct CVALUE* it_79;
_Bool _for_condtionalA3;
_Bool _if_conditional132;
void* right_value132;
void* right_value133;
void* right_value134;
void* right_value135;
void* right_value136;
struct sType* list_type_85;
void* right_value140;
void* right_value141;
struct sType* obj_type_89;
char* fun_name_90;
void* right_value142;
void* right_value143;
void* right_value144;
char* generics_fun_name_91;
struct sFun* fun_92;
_Bool _if_conditional137;
void* right_value145;
void* right_value146;
char* __dec_obj66;
_Bool _if_conditional138;
_Bool __result98__;
void* right_value147;
struct sType* result_type_93;
struct sType* type_94;
void* right_value148;
struct CVALUE* obj_value_95;
void* right_value149;
void* right_value150;
struct buffer* num_string_96;
void* right_value151;
struct sType* type2_97;
void* right_value152;
char* type_name_98;
void* right_value153;
void* right_value154;
char* __dec_obj67;
void* right_value155;
struct sType* type3_99;
void* right_value156;
struct sType* __dec_obj68;
void* right_value157;
char* __dec_obj69;
void* right_value158;
void* right_value159;
struct list$1CVALUEph* come_params_100;
_Bool _if_conditional142;
void* right_value160;
struct CVALUE* come_value2_104;
void* right_value161;
char* __dec_obj70;
struct sType* __dec_obj71;
void* right_value162;
struct CVALUE* come_value3_105;
void* right_value163;
char* __dec_obj72;
struct sType* __dec_obj73;
void* right_value164;
void* right_value165;
struct buffer* buf_106;
int j_107;
struct list$1CVALUEph* o2_saved_108;
struct CVALUE* it_109;
_Bool _for_condtionalA4;
_Bool _if_conditional143;
void* right_value166;
struct CVALUE* come_value4_110;
void* right_value167;
char* __dec_obj74;
_Bool _if_conditional144;
void* right_value168;
void* right_value169;
char* __dec_obj75;
void* right_value170;
struct sType* __dec_obj76;
void* right_value171;
_Bool __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&list_elements_58, 0, sizeof(struct list$1sNodeph*));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
memset(&params_61, 0, sizeof(struct list$1CVALUEph*));
memset(&list_element_type_62, 0, sizeof(struct sType*));
memset(&o2_saved_63, 0, sizeof(struct list$1sNodeph*));
memset(&it_64, 0, sizeof(struct sNode*));
memset(&right_value120, 0, sizeof(void*));
memset(&come_value_65, 0, sizeof(struct CVALUE*));
memset(&right_value121, 0, sizeof(void*));
memset(&right_value122, 0, sizeof(void*));
memset(&type_values_66, 0, sizeof(struct sType*));
memset(&right_value126, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
memset(&var_name_71, 0, sizeof(char*));
memset(&right_value128, 0, sizeof(void*));
memset(&var__72, 0, sizeof(struct sVar*));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
memset(&source_74, 0, sizeof(struct buffer*));
memset(&i_75, 0, sizeof(int));
memset(&o2_saved_76, 0, sizeof(struct list$1CVALUEph*));
memset(&it_79, 0, sizeof(struct CVALUE*));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
memset(&list_type_85, 0, sizeof(struct sType*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&obj_type_89, 0, sizeof(struct sType*));
memset(&fun_name_90, 0, sizeof(char*));
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&generics_fun_name_91, 0, sizeof(char*));
memset(&fun_92, 0, sizeof(struct sFun*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
memset(&result_type_93, 0, sizeof(struct sType*));
memset(&type_94, 0, sizeof(struct sType*));
memset(&right_value148, 0, sizeof(void*));
memset(&obj_value_95, 0, sizeof(struct CVALUE*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&num_string_96, 0, sizeof(struct buffer*));
memset(&right_value151, 0, sizeof(void*));
memset(&type2_97, 0, sizeof(struct sType*));
memset(&right_value152, 0, sizeof(void*));
memset(&type_name_98, 0, sizeof(char*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&type3_99, 0, sizeof(struct sType*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&come_params_100, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value160, 0, sizeof(void*));
memset(&come_value2_104, 0, sizeof(struct CVALUE*));
memset(&right_value161, 0, sizeof(void*));
memset(&right_value162, 0, sizeof(void*));
memset(&come_value3_105, 0, sizeof(struct CVALUE*));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&buf_106, 0, sizeof(struct buffer*));
memset(&j_107, 0, sizeof(int));
memset(&o2_saved_108, 0, sizeof(struct list$1CVALUEph*));
memset(&it_109, 0, sizeof(struct CVALUE*));
memset(&right_value166, 0, sizeof(void*));
memset(&come_value4_110, 0, sizeof(struct CVALUE*));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
    list_elements_58=self->list_elements;
    params_61=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value119=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value118=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 432))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value118;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value119);
    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value119;
    __freed_obj__ = 0;
    for(
    o2_saved_63=(list_elements_58),it_64=list$1sNodeph_begin((o2_saved_63)) ,    0;    _for_condtionalA2=    !list$1sNodeph_end((o2_saved_63)) ,    _for_condtionalA2;    it_64=list$1sNodeph_next((o2_saved_63)) ,    0    ){
        if(_if_conditional123=!node_compile(it_64,info),        _if_conditional123) {
            __result83__ = (_Bool)0;
            if(params_61 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,params_61, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(list_element_type_62 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_element_type_62, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result83__;
        }
        come_value_65=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value120=get_value_from_stack(-1,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120);
        if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value120;
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(params_61,(struct CVALUE*)come_increment_ref_count(come_value_65));
        __dec_obj59=list_element_type_62;
        list_element_type_62=(struct sType*)come_increment_ref_count(((struct sType*)(right_value121=sType_clone(come_value_65->type))));
        if(__dec_obj59) { come_call_finalizer(sType_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value121);
        if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value121;
        __freed_obj__ = 0;
        if(come_value_65 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_65, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    type_values_66=(struct sType*)come_increment_ref_count(((struct sType*)(right_value122=sType_clone(list_element_type_62))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value122);
    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value122;
    __freed_obj__ = 0;
    list$1sNodeph_push_back(type_values_66->mArrayNum,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value126=create_int_node(list$1CVALUEph_length(params_61),info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value126);
    if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { right_value126 = come_decrement_ref_count(right_value126, ((struct sNode*)right_value126)->finalize, ((struct sNode*)right_value126)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[3] = right_value126;
    __freed_obj__ = 0;
    type_values_66->mHeap=(_Bool)0;
    var_name_71=(char*)come_increment_ref_count(((char*)(right_value127=xsprintf("__list_values%d__",++list_value_num_70))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value127);
    if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value127;
    __freed_obj__ = 0;
    add_variable_to_table(var_name_71,(struct sType*)come_increment_ref_count(((struct sType*)(right_value128=sType_clone(type_values_66)))),info);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value128);
    if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value128;
    __freed_obj__ = 0;
    var__72=get_variable_from_table(info->lv_table,var_name_71);
    add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_value(((struct optional$2charphbool*)(right_value129=make_define_var(type_values_66,var__72->mCValueName,(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value129);
    if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value129;
    __freed_obj__ = 0;
    source_74=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value131=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value130=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 461))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value130);
    if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value130;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value131);
    if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value131;
    __freed_obj__ = 0;
    buffer_append_str(source_74,"{");
    i_75=0;
    for(
    o2_saved_76=(struct list$1CVALUEph*)come_increment_ref_count((params_61)),it_79=list$1CVALUEph_begin((o2_saved_76)) ,    0;    _for_condtionalA3=    !list$1CVALUEph_end((o2_saved_76)) ,    _for_condtionalA3;    it_79=list$1CVALUEph_next((o2_saved_76)) ,    0    ){
        if(_if_conditional132=list_element_type_62->mHeap,        _if_conditional132) {
            buffer_append_str(source_74,((char*)(right_value132=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",var__72->mCValueName,i_75,list$1CVALUEphp_operator_load_element(params_61,i_75)->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value132);
            if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { right_value132 = come_decrement_ref_count(right_value132, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value132;
            __freed_obj__ = 0;
        }
        else {
            buffer_append_str(source_74,((char*)(right_value133=xsprintf("%s[%d]=%s;\n",var__72->mCValueName,i_75,list$1CVALUEphp_operator_load_element(params_61,i_75)->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133);
            if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { right_value133 = come_decrement_ref_count(right_value133, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value133;
            __freed_obj__ = 0;
        }
        i_75++;
    }
    if(o2_saved_76 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_76, (void*)0, (void*)0, 0, 0, 0, 0); }
    buffer_append_str(source_74,"}");
    add_come_code(info,"%s",((char*)(right_value134=buffer_to_string(source_74))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value134);
    if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { right_value134 = come_decrement_ref_count(right_value134, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[9] = right_value134;
    __freed_obj__ = 0;
    list_type_85=(struct sType*)come_increment_ref_count(((struct sType*)(right_value136=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value135=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 480)))),"list",(_Bool)0,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value135);
    if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[10] = right_value135;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value136);
    if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[11] = right_value136;
    __freed_obj__ = 0;
    list$1sTypeph_push_back(list_type_85->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value140=sType_clone(list_element_type_62)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value140);
    if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[12] = right_value140;
    __freed_obj__ = 0;
    obj_type_89=(struct sType*)come_increment_ref_count(((struct sType*)(right_value141=sType_clone(list_type_85))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value141);
    if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[13] = right_value141;
    __freed_obj__ = 0;
    fun_name_90="initialize_with_values";
    generics_fun_name_91=(char*)come_increment_ref_count(((char*)(right_value144=string_to_string(((char*)(right_value143=make_generics_function(obj_type_89,(char*)come_increment_ref_count(((char*)(right_value142=__builtin_string(fun_name_90)))),info)))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value142);
    if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[14] = right_value142;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value143);
    if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[15] = right_value143;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value144);
    if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { right_value144 = come_decrement_ref_count(right_value144, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[16] = right_value144;
    __freed_obj__ = 0;
    fun_92=map$2charphsFunph_at(info->funcs,generics_fun_name_91,((void*)0));
    if(_if_conditional137=fun_92==((void*)0),    _if_conditional137) {
        __dec_obj66=generics_fun_name_91;
        generics_fun_name_91=(char*)come_increment_ref_count(((char*)(right_value146=create_method_name(obj_type_89,(_Bool)0,((char*)(right_value145=__builtin_string(fun_name_90))),info))));
        if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value145);
        if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value145;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value146);
        if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value146;
        __freed_obj__ = 0;
        fun_92=map$2charphsFunph_at(info->funcs,generics_fun_name_91,((void*)0));
        if(_if_conditional138=fun_92==((void*)0),        _if_conditional138) {
            err_msg(info,"function not found(%s) at method(%s)(1)\n",generics_fun_name_91,info->come_fun->mName);
            __result98__ = (_Bool)1;
            if(params_61 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,params_61, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(list_element_type_62 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_element_type_62, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(type_values_66 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_values_66, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(var_name_71 && !__freed_obj__) { var_name_71 = come_decrement_ref_count(var_name_71, (void*)0, (void*)0, 0, 0, 0); }
            if(source_74 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_74, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(list_type_85 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_type_85, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(obj_type_89 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_89, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(generics_fun_name_91 && !__freed_obj__) { generics_fun_name_91 = come_decrement_ref_count(generics_fun_name_91, (void*)0, (void*)0, 0, 0, 0); }
            return __result98__;
        }
    }
    result_type_93=(struct sType*)come_increment_ref_count(((struct sType*)(right_value147=sType_clone(fun_92->mResultType))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value147);
    if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[17] = right_value147;
    __freed_obj__ = 0;
    result_type_93->mStatic=(_Bool)0;
    type_94=list_type_85;
    obj_value_95=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value148=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 506))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value148);
    if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[18] = right_value148;
    __freed_obj__ = 0;
    num_string_96=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value150=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value149=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 508))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value149);
    if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[19] = right_value149;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value150);
    if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[20] = right_value150;
    __freed_obj__ = 0;
    buffer_append_str(num_string_96,"1");
    type2_97=(struct sType*)come_increment_ref_count(((struct sType*)(right_value151=solve_generics(type_94,type_94,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value151);
    if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[21] = right_value151;
    __freed_obj__ = 0;
    type_name_98=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value152=make_type_name_string(type2_97,(_Bool)0,(_Bool)1,(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value152);
    if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[22] = right_value152;
    __freed_obj__ = 0;
    __dec_obj67=obj_value_95->c_value;
    obj_value_95->c_value=(char*)come_increment_ref_count(((char*)(right_value154=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d)",type_name_98,type_name_98,((char*)(right_value153=buffer_to_string(num_string_96))),info->sname,info->sline))));
    if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 23, right_value153);
    if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[23] = right_value153;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 24, right_value154);
    if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { right_value154 = come_decrement_ref_count(right_value154, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[24] = right_value154;
    __freed_obj__ = 0;
    type3_99=(struct sType*)come_increment_ref_count(((struct sType*)(right_value155=sType_clone(type2_97))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 25, right_value155);
    if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[25] = right_value155;
    __freed_obj__ = 0;
    type3_99->mPointerNum++;
    type3_99->mHeap=(_Bool)1;
    type2_97->mHeap=(_Bool)1;
    __dec_obj68=obj_value_95->type;
    obj_value_95->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value156=sType_clone(type2_97))));
    if(__dec_obj68) { come_call_finalizer(sType_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 26, right_value156);
    if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[26] = right_value156;
    __freed_obj__ = 0;
    __dec_obj69=obj_value_95->c_value;
    obj_value_95->c_value=(char*)come_increment_ref_count(((char*)(right_value157=append_object_to_right_values(obj_value_95->c_value,(struct sType*)come_increment_ref_count(type3_99),info))));
    if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 27, right_value157);
    if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[27] = right_value157;
    __freed_obj__ = 0;
    obj_value_95->type->mPointerNum++;
    obj_value_95->var=((void*)0);
    come_params_100=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value159=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value158=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 527))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 28, right_value158);
    if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[28] = right_value158;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 29, right_value159);
    if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[29] = right_value159;
    __freed_obj__ = 0;
    if(_if_conditional142=list$1sTypephp_operator_load_element(fun_92->mParamTypes,0)->mHeap&&obj_value_95->type->mHeap,    _if_conditional142) {
        std_move(list$1sTypephp_operator_load_element(fun_92->mParamTypes,0),obj_value_95->type,obj_value_95,info);
    }
    list$1CVALUEph_push_back(come_params_100,(struct CVALUE*)come_increment_ref_count(obj_value_95));
    come_value2_104=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value160=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 534))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 30, right_value160);
    if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[30] = right_value160;
    __freed_obj__ = 0;
    __dec_obj70=come_value2_104->c_value;
    come_value2_104->c_value=(char*)come_increment_ref_count(((char*)(right_value161=xsprintf("%d",list$1CVALUEph_length(params_61)))));
    if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 31, right_value161);
    if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { right_value161 = come_decrement_ref_count(right_value161, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[31] = right_value161;
    __freed_obj__ = 0;
    __dec_obj71=come_value2_104->type;
    come_value2_104->type=((void*)0);
    if(__dec_obj71) { come_call_finalizer(sType_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0); }
    come_value2_104->var=((void*)0);
    list$1CVALUEph_push_back(come_params_100,(struct CVALUE*)come_increment_ref_count(come_value2_104));
    come_value3_105=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value162=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 542))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 32, right_value162);
    if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[32] = right_value162;
    __freed_obj__ = 0;
    __dec_obj72=come_value3_105->c_value;
    come_value3_105->c_value=(char*)come_increment_ref_count(((char*)(right_value163=xsprintf("%s",var__72->mCValueName))));
    if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 33, right_value163);
    if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { right_value163 = come_decrement_ref_count(right_value163, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[33] = right_value163;
    __freed_obj__ = 0;
    __dec_obj73=come_value3_105->type;
    come_value3_105->type=((void*)0);
    if(__dec_obj73) { come_call_finalizer(sType_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0); }
    come_value3_105->var=((void*)0);
    list$1CVALUEph_push_back(come_params_100,(struct CVALUE*)come_increment_ref_count(come_value3_105));
    buf_106=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value165=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value164=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 550))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 34, right_value164);
    if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[34] = right_value164;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 35, right_value165);
    if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[35] = right_value165;
    __freed_obj__ = 0;
    buffer_append_str(buf_106,generics_fun_name_91);
    buffer_append_str(buf_106,"(");
    j_107=0;
    for(
    o2_saved_108=(struct list$1CVALUEph*)come_increment_ref_count((come_params_100)),it_109=list$1CVALUEph_begin((o2_saved_108)) ,    0;    _for_condtionalA4=    !list$1CVALUEph_end((o2_saved_108)) ,    _for_condtionalA4;    it_109=list$1CVALUEph_next((o2_saved_108)) ,    0    ){
        buffer_append_str(buf_106,it_109->c_value);
        if(_if_conditional143=j_107!=list$1CVALUEph_length(come_params_100)-1,        _if_conditional143) {
            buffer_append_str(buf_106,",");
        }
        j_107++;
    }
    if(o2_saved_108 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_108, (void*)0, (void*)0, 0, 0, 0, 0); }
    buffer_append_str(buf_106,")");
    come_value4_110=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value166=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 567))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 36, right_value166);
    if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[36] = right_value166;
    __freed_obj__ = 0;
    __dec_obj74=come_value4_110->c_value;
    come_value4_110->c_value=(char*)come_increment_ref_count(((char*)(right_value167=buffer_to_string(buf_106))));
    if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 37, right_value167);
    if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[37] = right_value167;
    __freed_obj__ = 0;
    if(_if_conditional144=result_type_93->mHeap,    _if_conditional144) {
        __dec_obj75=come_value4_110->c_value;
        come_value4_110->c_value=(char*)come_increment_ref_count(((char*)(right_value169=append_object_to_right_values(((char*)(right_value168=buffer_to_string(buf_106))),(struct sType*)come_increment_ref_count(result_type_93),info))));
        if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value168);
        if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value168;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value169);
        if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { right_value169 = come_decrement_ref_count(right_value169, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value169;
        __freed_obj__ = 0;
    }
    __dec_obj76=come_value4_110->type;
    come_value4_110->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value170=sType_clone(result_type_93))));
    if(__dec_obj76) { come_call_finalizer(sType_finalize,__dec_obj76, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 38, right_value170);
    if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[38] = right_value170;
    __freed_obj__ = 0;
    come_value4_110->type->mStatic=(_Bool)0;
    come_value4_110->var=((void*)0);
    add_come_last_code(info,"%s;\n",((char*)(right_value171=buffer_to_string(buf_106))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 39, right_value171);
    if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { right_value171 = come_decrement_ref_count(right_value171, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[39] = right_value171;
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value4_110));
    __result102__ = (_Bool)1;
    if(params_61 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,params_61, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(list_element_type_62 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_element_type_62, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_values_66 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_values_66, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_71 && !__freed_obj__) { var_name_71 = come_decrement_ref_count(var_name_71, (void*)0, (void*)0, 0, 0, 0); }
    if(source_74 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_74, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(list_type_85 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_type_85, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_89 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_89, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(generics_fun_name_91 && !__freed_obj__) { generics_fun_name_91 = come_decrement_ref_count(generics_fun_name_91, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_93 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_93, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_value_95 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_95, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(num_string_96 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_96, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_97 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_97, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_98 && !__freed_obj__) { type_name_98 = come_decrement_ref_count(type_name_98, (void*)0, (void*)0, 0, 0, 0); }
    if(type3_99 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_99, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_params_100 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_100, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_104 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_104, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value3_105 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value3_105, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_106 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_106, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value4_110 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value4_110, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result102__;
    if(params_61 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,params_61, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(list_element_type_62 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_element_type_62, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_values_66 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_values_66, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_71 && !__freed_obj__) { var_name_71 = come_decrement_ref_count(var_name_71, (void*)0, (void*)0, 0, 0, 0); }
    if(source_74 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_74, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(list_type_85 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_type_85, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_89 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_89, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(generics_fun_name_91 && !__freed_obj__) { generics_fun_name_91 = come_decrement_ref_count(generics_fun_name_91, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_93 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_93, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_value_95 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_95, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(num_string_96 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_96, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_97 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_97, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_98 && !__freed_obj__) { type_name_98 = come_decrement_ref_count(type_name_98, (void*)0, (void*)0, 0, 0, 0); }
    if(type3_99 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_99, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_params_100 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_100, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_104 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_104, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value3_105 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value3_105, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_106 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_106, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value4_110 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value4_110, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1CVALUEph* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result82__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result82__;
        if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1CVALUEph* it_59;
_Bool _while_condtional9;
struct list_item$1CVALUEph* prev_it_60;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_59, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_60, 0, sizeof(struct list_item$1CVALUEph*));
            it_59=self->head;
            while(_while_condtional9=it_59!=((void*)0),            _while_condtional9) {
                prev_it_60=it_59;
                it_59=it_59->next;
                if(prev_it_60 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_60, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional124;
void* right_value123;
struct list_item$1sNodeph* litem_67;
struct sNode* __dec_obj60;
_Bool _if_conditional125;
void* right_value124;
struct list_item$1sNodeph* litem_68;
struct sNode* __dec_obj61;
void* right_value125;
struct list_item$1sNodeph* litem_69;
struct sNode* __dec_obj62;
struct list$1sNodeph* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value123, 0, sizeof(void*));
memset(&litem_67, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value124, 0, sizeof(void*));
memset(&litem_68, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value125, 0, sizeof(void*));
memset(&litem_69, 0, sizeof(struct list_item$1sNodeph*));
        if(_if_conditional124=self->len==0,        _if_conditional124) {
            litem_67=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value123=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 279))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value123);
            if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value123;
            __freed_obj__ = 0;
            litem_67->prev=((void*)0);
            litem_67->next=((void*)0);
            __dec_obj60=litem_67->item;
            litem_67->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0); }
            self->tail=litem_67;
            self->head=litem_67;
        }
        else {
            if(_if_conditional125=self->len==1,            _if_conditional125) {
                litem_68=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value124=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 289))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value124);
                if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value124;
                __freed_obj__ = 0;
                litem_68->prev=self->head;
                litem_68->next=((void*)0);
                __dec_obj61=litem_68->item;
                litem_68->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0); }
                self->tail=litem_68;
                self->head->next=litem_68;
            }
            else {
                litem_69=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value125=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 299))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
                if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value125;
                __freed_obj__ = 0;
                litem_69->prev=self->tail;
                litem_69->next=((void*)0);
                __dec_obj62=litem_69->item;
                litem_69->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0); }
                self->tail->next=litem_69;
                self->tail=litem_69;
            }
        }
        self->len++;
        __result84__ = __result_obj__ = self;
        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
        return __result84__;
        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result85__ = self->len;
        return __result85__;
}

static char* optional$2charphbool_value(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional126;
char* default_value_73;
char* __result86__;
char* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_73, 0, sizeof(char*));
        if(_if_conditional126=self==((void*)0),        _if_conditional126) {
            memset(&default_value_73,0,sizeof(char*));
            __result86__ = __result_obj__ = default_value_73;
            return __result86__;
        }
        else {
            __result87__ = __result_obj__ = self->v1;
            return __result87__;
        }
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional127;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional127=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional127) {
            if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
        }
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional128;
struct CVALUE* result_77;
struct CVALUE* __result88__;
_Bool _if_conditional129;
struct CVALUE* __result89__;
struct CVALUE* result_78;
struct CVALUE* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_77, 0, sizeof(struct CVALUE*));
memset(&result_78, 0, sizeof(struct CVALUE*));
        if(_if_conditional128=self==((void*)0),        _if_conditional128) {
            memset(&result_77,0,sizeof(struct CVALUE*));
            __result88__ = __result_obj__ = result_77;
            return __result88__;
        }
        self->it=self->head;
        if(_if_conditional129=self->it,        _if_conditional129) {
            __result89__ = __result_obj__ = self->it->item;
            return __result89__;
        }
        memset(&result_78,0,sizeof(struct CVALUE*));
        __result90__ = __result_obj__ = result_78;
        return __result90__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result91__ = self==((void*)0)||self->it==((void*)0);
        return __result91__;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional130;
struct CVALUE* result_80;
struct CVALUE* __result92__;
_Bool _if_conditional131;
struct CVALUE* __result93__;
struct CVALUE* result_81;
struct CVALUE* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_80, 0, sizeof(struct CVALUE*));
memset(&result_81, 0, sizeof(struct CVALUE*));
        if(_if_conditional130=self==((void*)0)||self->it==((void*)0),        _if_conditional130) {
            memset(&result_80,0,sizeof(struct CVALUE*));
            __result92__ = __result_obj__ = result_80;
            return __result92__;
        }
        self->it=self->it->next;
        if(_if_conditional131=self->it,        _if_conditional131) {
            __result93__ = __result_obj__ = self->it->item;
            return __result93__;
        }
        memset(&result_81,0,sizeof(struct CVALUE*));
        __result94__ = __result_obj__ = result_81;
        return __result94__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional133;
struct list_item$1CVALUEph* it_82;
int i_83;
_Bool _while_condtional10;
_Bool _if_conditional134;
struct CVALUE* __result95__;
struct CVALUE* default_value_84;
struct CVALUE* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_82, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_83, 0, sizeof(int));
memset(&default_value_84, 0, sizeof(struct CVALUE*));
                if(_if_conditional133=position<0,                _if_conditional133) {
                    position+=self->len;
                }
                it_82=self->head;
                i_83=0;
                while(_while_condtional10=it_82!=((void*)0),                _while_condtional10) {
                    if(_if_conditional134=position==i_83,                    _if_conditional134) {
                        __result95__ = __result_obj__ = it_82->item;
                        return __result95__;
                    }
                    it_82=it_82->next;
                    i_83++;
                }
                memset(&default_value_84,0,sizeof(struct CVALUE*));
                __result96__ = __result_obj__ = default_value_84;
                if(default_value_84 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_84, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result96__;
                if(default_value_84 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_84, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional135;
void* right_value137;
struct list_item$1sTypeph* litem_86;
struct sType* __dec_obj63;
_Bool _if_conditional136;
void* right_value138;
struct list_item$1sTypeph* litem_87;
struct sType* __dec_obj64;
void* right_value139;
struct list_item$1sTypeph* litem_88;
struct sType* __dec_obj65;
struct list$1sTypeph* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value137, 0, sizeof(void*));
memset(&litem_86, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value138, 0, sizeof(void*));
memset(&litem_87, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value139, 0, sizeof(void*));
memset(&litem_88, 0, sizeof(struct list_item$1sTypeph*));
        if(_if_conditional135=self->len==0,        _if_conditional135) {
            litem_86=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value137=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 279))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value137);
            if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value137;
            __freed_obj__ = 0;
            litem_86->prev=((void*)0);
            litem_86->next=((void*)0);
            __dec_obj63=litem_86->item;
            litem_86->item=(struct sType*)come_increment_ref_count(item);
            if(__dec_obj63) { come_call_finalizer(sType_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0); }
            self->tail=litem_86;
            self->head=litem_86;
        }
        else {
            if(_if_conditional136=self->len==1,            _if_conditional136) {
                litem_87=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value138=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 289))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value138);
                if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value138;
                __freed_obj__ = 0;
                litem_87->prev=self->head;
                litem_87->next=((void*)0);
                __dec_obj64=litem_87->item;
                litem_87->item=(struct sType*)come_increment_ref_count(item);
                if(__dec_obj64) { come_call_finalizer(sType_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail=litem_87;
                self->head->next=litem_87;
            }
            else {
                litem_88=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value139=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 299))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value139);
                if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value139;
                __freed_obj__ = 0;
                litem_88->prev=self->tail;
                litem_88->next=((void*)0);
                __dec_obj65=litem_88->item;
                litem_88->item=(struct sType*)come_increment_ref_count(item);
                if(__dec_obj65) { come_call_finalizer(sType_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail->next=litem_88;
                self->tail=litem_88;
            }
        }
        self->len++;
        __result97__ = __result_obj__ = self;
        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result97__;
        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static char* optional$2charphbool_expect(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional139;
char* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional139=!self->v2,        _if_conditional139) {
            puts("Exception: at");
            exception_stackframe();
            puts("abort.");
            exit(2);
        }
        __result99__ = __result_obj__ = self->v1;
        return __result99__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional140;
struct list_item$1sTypeph* it_101;
int i_102;
_Bool _while_condtional11;
_Bool _if_conditional141;
struct sType* __result100__;
struct sType* default_value_103;
struct sType* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_101, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_102, 0, sizeof(int));
memset(&default_value_103, 0, sizeof(struct sType*));
        if(_if_conditional140=position<0,        _if_conditional140) {
            position+=self->len;
        }
        it_101=self->head;
        i_102=0;
        while(_while_condtional11=it_101!=((void*)0),        _while_condtional11) {
            if(_if_conditional141=position==i_102,            _if_conditional141) {
                __result100__ = __result_obj__ = it_101->item;
                return __result100__;
            }
            it_101=it_101->next;
            i_102++;
        }
        memset(&default_value_103,0,sizeof(struct sType*));
        __result101__ = __result_obj__ = default_value_103;
        if(default_value_103 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_103, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result101__;
        if(default_value_103 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_103, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sListNode_sline(struct sListNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result103__ = self->sline;
    return __result103__;
}

char* sListNode_sname(struct sListNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value172;
char* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value172, 0, sizeof(void*));
    __result104__ = __result_obj__ = ((char*)(right_value172=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value172);
    if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { right_value172 = come_decrement_ref_count(right_value172, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value172;
    __freed_obj__ = 0;
    return __result104__;
}

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __dec_obj77;
void* right_value173;
char* __dec_obj78;
struct sTupleNode* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value173, 0, sizeof(void*));
    __dec_obj77=self->tuple_elements;
    self->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    if(__dec_obj77) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj77, (void*)0, (void*)0, 0, 0, 0, 0); }
    self->sline=info->sline;
    __dec_obj78=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value173=__builtin_string(info->sname))));
    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value173);
    if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { right_value173 = come_decrement_ref_count(right_value173, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value173;
    __freed_obj__ = 0;
    __result105__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(tuple_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,tuple_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result105__;
    if(self && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(tuple_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,tuple_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sTupleNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result106__ = (_Bool)0;
    return __result106__;
}

char* sTupleNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value174;
char* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value174, 0, sizeof(void*));
    __result107__ = __result_obj__ = ((char*)(right_value174=__builtin_string("sTupleNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value174);
    if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { right_value174 = come_decrement_ref_count(right_value174, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value174;
    __freed_obj__ = 0;
    return __result107__;
}

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* tuple_elements_111;
void* right_value175;
void* right_value176;
struct list$1sTypeph* tuple_types_112;
void* right_value177;
void* right_value178;
struct list$1CVALUEph* tuple_values_113;
struct list$1sNodeph* o2_saved_114;
struct sNode* it_115;
_Bool _for_condtionalA5;
_Bool _if_conditional147;
_Bool __result108__;
void* right_value179;
struct CVALUE* come_value_116;
void* right_value183;
void* right_value184;
void* right_value185;
void* right_value186;
void* right_value187;
struct sType* type_118;
struct list$1sTypeph* o2_saved_119;
struct sType* it_122;
_Bool _for_condtionalA6;
void* right_value188;
void* right_value189;
struct CVALUE* obj_value_125;
void* right_value190;
void* right_value191;
struct buffer* num_string_126;
void* right_value192;
struct sType* type2_127;
void* right_value193;
char* type_name_128;
void* right_value194;
void* right_value195;
char* __dec_obj81;
void* right_value196;
struct sType* type3_129;
void* right_value197;
struct sType* __dec_obj82;
void* right_value198;
char* __dec_obj83;
void* right_value199;
struct sType* obj_type_130;
char* fun_name_131;
void* right_value200;
void* right_value201;
void* right_value202;
char* generics_fun_name_132;
struct sFun* fun_133;
_Bool _if_conditional156;
void* right_value203;
void* right_value204;
char* __dec_obj84;
_Bool _if_conditional157;
_Bool __result118__;
void* right_value205;
struct sType* result_type_134;
void* right_value206;
void* right_value207;
struct list$1CVALUEph* come_params_135;
_Bool _if_conditional158;
int i_136;
struct list$1CVALUEph* o2_saved_137;
struct CVALUE* it_138;
_Bool _for_condtionalA7;
void* right_value208;
struct CVALUE* come_value_139;
_Bool _if_conditional159;
void* right_value209;
void* right_value210;
struct buffer* buf_140;
int j_141;
struct list$1CVALUEph* o2_saved_142;
struct CVALUE* it_143;
_Bool _for_condtionalA8;
_Bool _if_conditional160;
void* right_value211;
struct CVALUE* come_value2_144;
void* right_value212;
char* __dec_obj85;
_Bool _if_conditional161;
void* right_value213;
void* right_value214;
char* __dec_obj86;
void* right_value215;
struct sType* __dec_obj87;
void* right_value216;
_Bool __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tuple_elements_111, 0, sizeof(struct list$1sNodeph*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&tuple_types_112, 0, sizeof(struct list$1sTypeph*));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
memset(&tuple_values_113, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_114, 0, sizeof(struct list$1sNodeph*));
memset(&it_115, 0, sizeof(struct sNode*));
memset(&right_value179, 0, sizeof(void*));
memset(&come_value_116, 0, sizeof(struct CVALUE*));
memset(&right_value183, 0, sizeof(void*));
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
memset(&right_value187, 0, sizeof(void*));
memset(&type_118, 0, sizeof(struct sType*));
memset(&o2_saved_119, 0, sizeof(struct list$1sTypeph*));
memset(&it_122, 0, sizeof(struct sType*));
memset(&right_value188, 0, sizeof(void*));
memset(&right_value189, 0, sizeof(void*));
memset(&obj_value_125, 0, sizeof(struct CVALUE*));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
memset(&num_string_126, 0, sizeof(struct buffer*));
memset(&right_value192, 0, sizeof(void*));
memset(&type2_127, 0, sizeof(struct sType*));
memset(&right_value193, 0, sizeof(void*));
memset(&type_name_128, 0, sizeof(char*));
memset(&right_value194, 0, sizeof(void*));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
memset(&type3_129, 0, sizeof(struct sType*));
memset(&right_value197, 0, sizeof(void*));
memset(&right_value198, 0, sizeof(void*));
memset(&right_value199, 0, sizeof(void*));
memset(&obj_type_130, 0, sizeof(struct sType*));
memset(&fun_name_131, 0, sizeof(char*));
memset(&right_value200, 0, sizeof(void*));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value202, 0, sizeof(void*));
memset(&generics_fun_name_132, 0, sizeof(char*));
memset(&fun_133, 0, sizeof(struct sFun*));
memset(&right_value203, 0, sizeof(void*));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
memset(&result_type_134, 0, sizeof(struct sType*));
memset(&right_value206, 0, sizeof(void*));
memset(&right_value207, 0, sizeof(void*));
memset(&come_params_135, 0, sizeof(struct list$1CVALUEph*));
memset(&i_136, 0, sizeof(int));
memset(&o2_saved_137, 0, sizeof(struct list$1CVALUEph*));
memset(&it_138, 0, sizeof(struct CVALUE*));
memset(&right_value208, 0, sizeof(void*));
memset(&come_value_139, 0, sizeof(struct CVALUE*));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value210, 0, sizeof(void*));
memset(&buf_140, 0, sizeof(struct buffer*));
memset(&j_141, 0, sizeof(int));
memset(&o2_saved_142, 0, sizeof(struct list$1CVALUEph*));
memset(&it_143, 0, sizeof(struct CVALUE*));
memset(&right_value211, 0, sizeof(void*));
memset(&come_value2_144, 0, sizeof(struct CVALUE*));
memset(&right_value212, 0, sizeof(void*));
memset(&right_value213, 0, sizeof(void*));
memset(&right_value214, 0, sizeof(void*));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
    tuple_elements_111=self->tuple_elements;
    tuple_types_112=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value176=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value175=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 626))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value175);
    if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value175;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value176);
    if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value176;
    __freed_obj__ = 0;
    tuple_values_113=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value178=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value177=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 627))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value177);
    if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value177;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value178);
    if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value178;
    __freed_obj__ = 0;
    for(
    o2_saved_114=(tuple_elements_111),it_115=list$1sNodeph_begin((o2_saved_114)) ,    0;    _for_condtionalA5=    !list$1sNodeph_end((o2_saved_114)) ,    _for_condtionalA5;    it_115=list$1sNodeph_next((o2_saved_114)) ,    0    ){
        if(_if_conditional147=!node_compile(it_115,info),        _if_conditional147) {
            __result108__ = (_Bool)0;
            if(tuple_types_112 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_112, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(tuple_values_113 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_113, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result108__;
        }
        come_value_116=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value179=get_value_from_stack(-1,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value179);
        if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value179;
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(tuple_values_113,(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value183=CVALUE_clone(come_value_116)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value183);
        if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value183;
        __freed_obj__ = 0;
        list$1sTypeph_push_back(tuple_types_112,(struct sType*)come_increment_ref_count(((struct sType*)(right_value184=sType_clone(come_value_116->type)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value184);
        if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value184;
        __freed_obj__ = 0;
        if(come_value_116 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_116, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    type_118=(struct sType*)come_increment_ref_count(((struct sType*)(right_value187=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value185=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 641)))),((char*)(right_value186=xsprintf("tuple%d",list$1sTypeph_length(tuple_types_112)))),(_Bool)0,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value185);
    if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value185;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value186);
    if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { right_value186 = come_decrement_ref_count(right_value186, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value186;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value187);
    if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value187;
    __freed_obj__ = 0;
    for(
    o2_saved_119=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_112)),it_122=list$1sTypeph_begin((o2_saved_119)) ,    0;    _for_condtionalA6=    !list$1sTypeph_end((o2_saved_119)) ,    _for_condtionalA6;    it_122=list$1sTypeph_next((o2_saved_119)) ,    0    ){
        list$1sTypeph_push_back(type_118->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value188=sType_clone(it_122)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value188);
        if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value188;
        __freed_obj__ = 0;
    }
    if(o2_saved_119 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_119, (void*)0, (void*)0, 0, 0, 0, 0); }
    obj_value_125=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value189=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 647))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value189);
    if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value189;
    __freed_obj__ = 0;
    num_string_126=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value191=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value190=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 649))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value190);
    if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value190;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value191);
    if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[9] = right_value191;
    __freed_obj__ = 0;
    buffer_append_str(num_string_126,"1");
    type2_127=(struct sType*)come_increment_ref_count(((struct sType*)(right_value192=solve_generics(type_118,type_118,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value192);
    if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[10] = right_value192;
    __freed_obj__ = 0;
    type_name_128=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value193=make_type_name_string(type2_127,(_Bool)0,(_Bool)1,(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value193);
    if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[11] = right_value193;
    __freed_obj__ = 0;
    __dec_obj81=obj_value_125->c_value;
    obj_value_125->c_value=(char*)come_increment_ref_count(((char*)(right_value195=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d)",type_name_128,type_name_128,((char*)(right_value194=buffer_to_string(num_string_126))),info->sname,info->sline))));
    if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value194);
    if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { right_value194 = come_decrement_ref_count(right_value194, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[12] = right_value194;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value195);
    if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { right_value195 = come_decrement_ref_count(right_value195, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[13] = right_value195;
    __freed_obj__ = 0;
    type3_129=(struct sType*)come_increment_ref_count(((struct sType*)(right_value196=sType_clone(type2_127))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value196);
    if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[14] = right_value196;
    __freed_obj__ = 0;
    type3_129->mPointerNum++;
    type3_129->mHeap=(_Bool)1;
    type2_127->mHeap=(_Bool)1;
    __dec_obj82=obj_value_125->type;
    obj_value_125->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value197=sType_clone(type2_127))));
    if(__dec_obj82) { come_call_finalizer(sType_finalize,__dec_obj82, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value197);
    if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[15] = right_value197;
    __freed_obj__ = 0;
    __dec_obj83=obj_value_125->c_value;
    obj_value_125->c_value=(char*)come_increment_ref_count(((char*)(right_value198=append_object_to_right_values(obj_value_125->c_value,(struct sType*)come_increment_ref_count(type3_129),info))));
    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value198);
    if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { right_value198 = come_decrement_ref_count(right_value198, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[16] = right_value198;
    __freed_obj__ = 0;
    obj_value_125->type->mPointerNum++;
    obj_value_125->var=((void*)0);
    obj_type_130=(struct sType*)come_increment_ref_count(((struct sType*)(right_value199=sType_clone(type2_127))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value199);
    if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[17] = right_value199;
    __freed_obj__ = 0;
    fun_name_131="initialize";
    generics_fun_name_132=(char*)come_increment_ref_count(((char*)(right_value202=string_to_string(((char*)(right_value201=make_generics_function(obj_type_130,(char*)come_increment_ref_count(((char*)(right_value200=__builtin_string(fun_name_131)))),info)))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value200);
    if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { right_value200 = come_decrement_ref_count(right_value200, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[18] = right_value200;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value201);
    if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { right_value201 = come_decrement_ref_count(right_value201, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[19] = right_value201;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value202);
    if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { right_value202 = come_decrement_ref_count(right_value202, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[20] = right_value202;
    __freed_obj__ = 0;
    fun_133=map$2charphsFunph_at(info->funcs,generics_fun_name_132,((void*)0));
    if(_if_conditional156=fun_133==((void*)0),    _if_conditional156) {
        __dec_obj84=generics_fun_name_132;
        generics_fun_name_132=(char*)come_increment_ref_count(((char*)(right_value204=create_method_name(obj_type_130,(_Bool)0,((char*)(right_value203=__builtin_string(fun_name_131))),info))));
        if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value203);
        if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { right_value203 = come_decrement_ref_count(right_value203, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value203;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value204);
        if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { right_value204 = come_decrement_ref_count(right_value204, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value204;
        __freed_obj__ = 0;
        fun_133=map$2charphsFunph_at(info->funcs,generics_fun_name_132,((void*)0));
        if(_if_conditional157=fun_133==((void*)0),        _if_conditional157) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_132,info->come_fun->mName);
            __result118__ = (_Bool)1;
            if(tuple_types_112 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_112, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(tuple_values_113 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_113, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(type_118 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_118, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(obj_value_125 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_125, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(num_string_126 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_126, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(type2_127 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_127, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(type_name_128 && !__freed_obj__) { type_name_128 = come_decrement_ref_count(type_name_128, (void*)0, (void*)0, 0, 0, 0); }
            if(type3_129 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_129, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(obj_type_130 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_130, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(generics_fun_name_132 && !__freed_obj__) { generics_fun_name_132 = come_decrement_ref_count(generics_fun_name_132, (void*)0, (void*)0, 0, 0, 0); }
            return __result118__;
        }
    }
    result_type_134=(struct sType*)come_increment_ref_count(((struct sType*)(right_value205=sType_clone(fun_133->mResultType))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value205);
    if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[21] = right_value205;
    __freed_obj__ = 0;
    result_type_134->mStatic=(_Bool)0;
    come_params_135=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value207=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value206=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 689))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value206);
    if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[22] = right_value206;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 23, right_value207);
    if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[23] = right_value207;
    __freed_obj__ = 0;
    if(_if_conditional158=list$1sTypephp_operator_load_element(fun_133->mParamTypes,0)->mHeap&&obj_value_125->type->mHeap,    _if_conditional158) {
        std_move(list$1sTypephp_operator_load_element(fun_133->mParamTypes,0),obj_value_125->type,obj_value_125,info);
    }
    list$1CVALUEph_push_back(come_params_135,(struct CVALUE*)come_increment_ref_count(obj_value_125));
    i_136=1;
    for(
    o2_saved_137=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_113)),it_138=list$1CVALUEph_begin((o2_saved_137)) ,    0;    _for_condtionalA7=    !list$1CVALUEph_end((o2_saved_137)) ,    _for_condtionalA7;    it_138=list$1CVALUEph_next((o2_saved_137)) ,    0    ){
        come_value_139=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value208=CVALUE_clone(it_138))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value208);
        if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value208;
        __freed_obj__ = 0;
        if(_if_conditional159=list$1sTypephp_operator_load_element(fun_133->mParamTypes,i_136)&&list$1sTypephp_operator_load_element(fun_133->mParamTypes,i_136)->mHeap&&come_value_139->type->mHeap,        _if_conditional159) {
            std_move(list$1sTypephp_operator_load_element(fun_133->mParamTypes,i_136),come_value_139->type,come_value_139,info);
        }
        list$1CVALUEph_push_back(come_params_135,(struct CVALUE*)come_increment_ref_count(come_value_139));
        i_136++;
        if(come_value_139 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_139, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(o2_saved_137 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_137, (void*)0, (void*)0, 0, 0, 0, 0); }
    buf_140=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value210=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value209=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 708))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 24, right_value209);
    if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[24] = right_value209;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 25, right_value210);
    if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[25] = right_value210;
    __freed_obj__ = 0;
    buffer_append_str(buf_140,generics_fun_name_132);
    buffer_append_str(buf_140,"(");
    j_141=0;
    for(
    o2_saved_142=(struct list$1CVALUEph*)come_increment_ref_count((come_params_135)),it_143=list$1CVALUEph_begin((o2_saved_142)) ,    0;    _for_condtionalA8=    !list$1CVALUEph_end((o2_saved_142)) ,    _for_condtionalA8;    it_143=list$1CVALUEph_next((o2_saved_142)) ,    0    ){
        buffer_append_str(buf_140,it_143->c_value);
        if(_if_conditional160=j_141!=list$1CVALUEph_length(come_params_135)-1,        _if_conditional160) {
            buffer_append_str(buf_140,",");
        }
        j_141++;
    }
    if(o2_saved_142 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_142, (void*)0, (void*)0, 0, 0, 0, 0); }
    buffer_append_str(buf_140,")");
    come_value2_144=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value211=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 725))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 26, right_value211);
    if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[26] = right_value211;
    __freed_obj__ = 0;
    __dec_obj85=come_value2_144->c_value;
    come_value2_144->c_value=(char*)come_increment_ref_count(((char*)(right_value212=buffer_to_string(buf_140))));
    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 27, right_value212);
    if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { right_value212 = come_decrement_ref_count(right_value212, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[27] = right_value212;
    __freed_obj__ = 0;
    if(_if_conditional161=result_type_134->mHeap,    _if_conditional161) {
        __dec_obj86=come_value2_144->c_value;
        come_value2_144->c_value=(char*)come_increment_ref_count(((char*)(right_value214=append_object_to_right_values(((char*)(right_value213=buffer_to_string(buf_140))),(struct sType*)come_increment_ref_count(result_type_134),info))));
        if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value213);
        if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { right_value213 = come_decrement_ref_count(right_value213, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value213;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value214);
        if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { right_value214 = come_decrement_ref_count(right_value214, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value214;
        __freed_obj__ = 0;
    }
    __dec_obj87=come_value2_144->type;
    come_value2_144->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value215=sType_clone(result_type_134))));
    if(__dec_obj87) { come_call_finalizer(sType_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 28, right_value215);
    if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[28] = right_value215;
    __freed_obj__ = 0;
    come_value2_144->type->mStatic=(_Bool)0;
    come_value2_144->var=((void*)0);
    add_come_last_code(info,"%s;\n",((char*)(right_value216=buffer_to_string(buf_140))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 29, right_value216);
    if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { right_value216 = come_decrement_ref_count(right_value216, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[29] = right_value216;
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_144));
    __result119__ = (_Bool)1;
    if(tuple_types_112 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_112, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(tuple_values_113 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_113, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_118 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_118, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_value_125 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_125, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(num_string_126 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_126, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_127 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_127, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_128 && !__freed_obj__) { type_name_128 = come_decrement_ref_count(type_name_128, (void*)0, (void*)0, 0, 0, 0); }
    if(type3_129 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_129, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_130 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_130, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(generics_fun_name_132 && !__freed_obj__) { generics_fun_name_132 = come_decrement_ref_count(generics_fun_name_132, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_134 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_134, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_params_135 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_135, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_140 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_140, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_144 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_144, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result119__;
    if(tuple_types_112 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_112, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(tuple_values_113 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_113, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_118 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_118, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_value_125 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_125, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(num_string_126 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_126, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_127 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_127, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_128 && !__freed_obj__) { type_name_128 = come_decrement_ref_count(type_name_128, (void*)0, (void*)0, 0, 0, 0); }
    if(type3_129 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_129, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_130 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_130, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(generics_fun_name_132 && !__freed_obj__) { generics_fun_name_132 = come_decrement_ref_count(generics_fun_name_132, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_134 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_134, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_params_135 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_135, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_140 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_140, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_144 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_144, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional148;
struct CVALUE* __result109__;
void* right_value180;
struct CVALUE* result_117;
_Bool _if_conditional149;
void* right_value181;
char* __dec_obj79;
_Bool _if_conditional150;
void* right_value182;
struct sType* __dec_obj80;
_Bool _if_conditional151;
struct CVALUE* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value180, 0, sizeof(void*));
memset(&result_117, 0, sizeof(struct CVALUE*));
memset(&right_value181, 0, sizeof(void*));
memset(&right_value182, 0, sizeof(void*));
            if(_if_conditional148=self==(void*)0,            _if_conditional148) {
                __result109__ = __result_obj__ = (void*)0;
                return __result109__;
            }
            result_117=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value180=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180);
            if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value180;
            __freed_obj__ = 0;
            if(_if_conditional149=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional149) {
                __dec_obj79=result_117->c_value;
                result_117->c_value=(char*)come_increment_ref_count(((char*)(right_value181=string_clone(self->c_value))));
                if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value181);
                if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { right_value181 = come_decrement_ref_count(right_value181, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value181;
                __freed_obj__ = 0;
            }
            if(_if_conditional150=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional150) {
                __dec_obj80=result_117->type;
                result_117->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value182=sType_clone(self->type))));
                if(__dec_obj80) { come_call_finalizer(sType_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value182);
                if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value182;
                __freed_obj__ = 0;
            }
            if(_if_conditional151=self!=((void*)0),            _if_conditional151) {
                result_117->var=self->var;
            }
            __result110__ = __result_obj__ = result_117;
            if(result_117 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,result_117, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result110__;
            if(result_117 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,result_117, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional152;
struct sType* result_120;
struct sType* __result111__;
_Bool _if_conditional153;
struct sType* __result112__;
struct sType* result_121;
struct sType* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_120, 0, sizeof(struct sType*));
memset(&result_121, 0, sizeof(struct sType*));
        if(_if_conditional152=self==((void*)0),        _if_conditional152) {
            memset(&result_120,0,sizeof(struct sType*));
            __result111__ = __result_obj__ = result_120;
            return __result111__;
        }
        self->it=self->head;
        if(_if_conditional153=self->it,        _if_conditional153) {
            __result112__ = __result_obj__ = self->it->item;
            return __result112__;
        }
        memset(&result_121,0,sizeof(struct sType*));
        __result113__ = __result_obj__ = result_121;
        return __result113__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result114__ = self==((void*)0)||self->it==((void*)0);
        return __result114__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional154;
struct sType* result_123;
struct sType* __result115__;
_Bool _if_conditional155;
struct sType* __result116__;
struct sType* result_124;
struct sType* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_123, 0, sizeof(struct sType*));
memset(&result_124, 0, sizeof(struct sType*));
        if(_if_conditional154=self==((void*)0)||self->it==((void*)0),        _if_conditional154) {
            memset(&result_123,0,sizeof(struct sType*));
            __result115__ = __result_obj__ = result_123;
            return __result115__;
        }
        self->it=self->it->next;
        if(_if_conditional155=self->it,        _if_conditional155) {
            __result116__ = __result_obj__ = self->it->item;
            return __result116__;
        }
        memset(&result_124,0,sizeof(struct sType*));
        __result117__ = __result_obj__ = result_124;
        return __result117__;
}

int sTupleNode_sline(struct sTupleNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result120__ = self->sline;
    return __result120__;
}

char* sTupleNode_sname(struct sTupleNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value217;
char* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value217, 0, sizeof(void*));
    __result121__ = __result_obj__ = ((char*)(right_value217=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value217);
    if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { right_value217 = come_decrement_ref_count(right_value217, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value217;
    __freed_obj__ = 0;
    return __result121__;
}

struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value218;
struct sNode* __dec_obj88;
void* right_value219;
char* __dec_obj89;
struct sNoneNode* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
    __dec_obj88=self->value;
    self->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value218=sNode_clone(value))));
    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value218);
    if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { right_value218 = come_decrement_ref_count(right_value218, ((struct sNode*)right_value218)->finalize, ((struct sNode*)right_value218)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value218;
    __freed_obj__ = 0;
    self->sline=info->sline;
    __dec_obj89=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value219=__builtin_string(info->sname))));
    if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value219);
    if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { right_value219 = come_decrement_ref_count(right_value219, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value219;
    __freed_obj__ = 0;
    __result122__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0); } 
    return __result122__;
    if(self && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0); } 
}

struct sNode* create_none_object(struct sNode* exp, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value220;
void* right_value221;
struct sNode* _inf_value1;
struct sNoneNode* _inf_obj_value1;
void* right_value225;
struct sNode* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value220, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 773);
    _inf_obj_value1=come_increment_ref_count(((struct sNoneNode*)(right_value221=sNoneNode_initialize((struct sNoneNode*)come_increment_ref_count(((struct sNoneNode*)(right_value220=(struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "06str.c", 773)))),(struct sNode*)come_increment_ref_count(exp),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNoneNode_finalize;
    _inf_value1->clone=(void*)sNoneNode_clone;
    _inf_value1->compile=(void*)sNoneNode_compile;
    _inf_value1->sline=(void*)sNoneNode_sline;
    _inf_value1->sname=(void*)sNoneNode_sname;
    _inf_value1->terminated=(void*)sNoneNode_terminated;
    _inf_value1->kind=(void*)sNoneNode_kind;
    __result125__ = __result_obj__ = ((struct sNode*)(right_value225=_inf_value1));
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value220);
    if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value220;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value221);
    if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value221;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value225);
    if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { right_value225 = come_decrement_ref_count(right_value225, ((struct sNode*)right_value225)->finalize, ((struct sNode*)right_value225)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value225;
    __freed_obj__ = 0;
    return __result125__;
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
}

static void sNoneNode_finalize(struct sNoneNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional164;
_Bool _if_conditional165;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional164=self!=((void*)0)&&self->value!=((void*)0),        _if_conditional164) {
            if(self->value && !__freed_obj__) { self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0); } 
        }
        if(_if_conditional165=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional165) {
            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
        }
}

static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional166;
struct sNoneNode* __result123__;
void* right_value222;
struct sNoneNode* result_145;
_Bool _if_conditional167;
void* right_value223;
struct sNode* __dec_obj90;
_Bool _if_conditional168;
_Bool _if_conditional169;
void* right_value224;
char* __dec_obj91;
struct sNoneNode* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value222, 0, sizeof(void*));
memset(&result_145, 0, sizeof(struct sNoneNode*));
memset(&right_value223, 0, sizeof(void*));
memset(&right_value224, 0, sizeof(void*));
        if(_if_conditional166=self==(void*)0,        _if_conditional166) {
            __result123__ = __result_obj__ = (void*)0;
            return __result123__;
        }
        result_145=(struct sNoneNode*)come_increment_ref_count(((struct sNoneNode*)(right_value222=(struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "sNoneNode_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value222);
        if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value222;
        __freed_obj__ = 0;
        if(_if_conditional167=self!=((void*)0)&&self->value!=((void*)0),        _if_conditional167) {
            __dec_obj90=result_145->value;
            result_145->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value223=sNode_clone(self->value))));
            if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, ((struct sNode*)__dec_obj90)->finalize, ((struct sNode*)__dec_obj90)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value223);
            if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { right_value223 = come_decrement_ref_count(right_value223, ((struct sNode*)right_value223)->finalize, ((struct sNode*)right_value223)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value223;
            __freed_obj__ = 0;
        }
        if(_if_conditional168=self!=((void*)0),        _if_conditional168) {
            result_145->sline=self->sline;
        }
        if(_if_conditional169=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional169) {
            __dec_obj91=result_145->sname;
            result_145->sname=(char*)come_increment_ref_count(((char*)(right_value224=string_clone(self->sname))));
            if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value224);
            if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { right_value224 = come_decrement_ref_count(right_value224, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value224;
            __freed_obj__ = 0;
        }
        __result124__ = __result_obj__ = result_145;
        if(result_145 && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,result_145, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result124__;
        if(result_145 && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,result_145, (void*)0, (void*)0, 0, 0, 0, 0); }
}

_Bool sNoneNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result126__ = (_Bool)0;
    return __result126__;
}

char* sNoneNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value226;
char* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value226, 0, sizeof(void*));
    __result127__ = __result_obj__ = ((char*)(right_value226=__builtin_string("sNoneNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value226);
    if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { right_value226 = come_decrement_ref_count(right_value226, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value226;
    __freed_obj__ = 0;
    return __result127__;
}

_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value227;
void* right_value228;
struct list$1sTypeph* tuple_types_146;
void* right_value229;
void* right_value230;
struct list$1CVALUEph* tuple_values_147;
_Bool _if_conditional170;
_Bool __result128__;
void* right_value231;
struct CVALUE* come_value_148;
_Bool _if_conditional171;
void* right_value235;
void* right_value236;
void* right_value237;
struct sNode* false_node_152;
_Bool _if_conditional174;
_Bool __result130__;
void* right_value238;
struct CVALUE* come_value2_153;
void* right_value239;
void* right_value240;
void* right_value241;
void* right_value242;
struct sType* type_154;
struct list$1sTypeph* o2_saved_155;
struct sType* it_156;
_Bool _for_condtionalA9;
void* right_value243;
void* right_value244;
struct CVALUE* obj_value_157;
void* right_value245;
void* right_value246;
struct buffer* num_string_158;
void* right_value247;
struct sType* type2_159;
void* right_value248;
char* type_name_160;
void* right_value249;
void* right_value250;
char* __dec_obj95;
void* right_value251;
struct sType* type3_161;
void* right_value252;
struct sType* __dec_obj96;
void* right_value253;
char* __dec_obj97;
void* right_value254;
struct sType* obj_type_162;
char* fun_name_163;
void* right_value255;
void* right_value256;
void* right_value257;
char* generics_fun_name_164;
struct sFun* fun_165;
_Bool _if_conditional175;
void* right_value258;
void* right_value259;
char* __dec_obj98;
_Bool _if_conditional176;
_Bool __result131__;
void* right_value260;
struct sType* result_type_166;
void* right_value261;
void* right_value262;
struct list$1CVALUEph* come_params_167;
_Bool _if_conditional177;
int i_168;
struct list$1CVALUEph* o2_saved_169;
struct CVALUE* it_170;
_Bool _for_condtionalA10;
void* right_value263;
struct CVALUE* come_value_171;
_Bool _if_conditional178;
void* right_value264;
void* right_value265;
struct buffer* buf_172;
int j_173;
struct list$1CVALUEph* o2_saved_174;
struct CVALUE* it_175;
_Bool _for_condtionalA11;
_Bool _if_conditional179;
void* right_value266;
struct CVALUE* come_value3_176;
void* right_value267;
char* __dec_obj99;
_Bool _if_conditional180;
void* right_value268;
void* right_value269;
char* __dec_obj100;
_Bool _if_conditional181;
void* right_value270;
void* right_value271;
void* right_value272;
void* right_value273;
char* __dec_obj101;
void* right_value274;
struct sType* __dec_obj102;
_Bool __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value227, 0, sizeof(void*));
memset(&right_value228, 0, sizeof(void*));
memset(&tuple_types_146, 0, sizeof(struct list$1sTypeph*));
memset(&right_value229, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
memset(&tuple_values_147, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value231, 0, sizeof(void*));
memset(&come_value_148, 0, sizeof(struct CVALUE*));
memset(&right_value235, 0, sizeof(void*));
memset(&right_value236, 0, sizeof(void*));
memset(&right_value237, 0, sizeof(void*));
memset(&false_node_152, 0, sizeof(struct sNode*));
memset(&right_value238, 0, sizeof(void*));
memset(&come_value2_153, 0, sizeof(struct CVALUE*));
memset(&right_value239, 0, sizeof(void*));
memset(&right_value240, 0, sizeof(void*));
memset(&right_value241, 0, sizeof(void*));
memset(&right_value242, 0, sizeof(void*));
memset(&type_154, 0, sizeof(struct sType*));
memset(&o2_saved_155, 0, sizeof(struct list$1sTypeph*));
memset(&it_156, 0, sizeof(struct sType*));
memset(&right_value243, 0, sizeof(void*));
memset(&right_value244, 0, sizeof(void*));
memset(&obj_value_157, 0, sizeof(struct CVALUE*));
memset(&right_value245, 0, sizeof(void*));
memset(&right_value246, 0, sizeof(void*));
memset(&num_string_158, 0, sizeof(struct buffer*));
memset(&right_value247, 0, sizeof(void*));
memset(&type2_159, 0, sizeof(struct sType*));
memset(&right_value248, 0, sizeof(void*));
memset(&type_name_160, 0, sizeof(char*));
memset(&right_value249, 0, sizeof(void*));
memset(&right_value250, 0, sizeof(void*));
memset(&right_value251, 0, sizeof(void*));
memset(&type3_161, 0, sizeof(struct sType*));
memset(&right_value252, 0, sizeof(void*));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&obj_type_162, 0, sizeof(struct sType*));
memset(&fun_name_163, 0, sizeof(char*));
memset(&right_value255, 0, sizeof(void*));
memset(&right_value256, 0, sizeof(void*));
memset(&right_value257, 0, sizeof(void*));
memset(&generics_fun_name_164, 0, sizeof(char*));
memset(&fun_165, 0, sizeof(struct sFun*));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
memset(&right_value260, 0, sizeof(void*));
memset(&result_type_166, 0, sizeof(struct sType*));
memset(&right_value261, 0, sizeof(void*));
memset(&right_value262, 0, sizeof(void*));
memset(&come_params_167, 0, sizeof(struct list$1CVALUEph*));
memset(&i_168, 0, sizeof(int));
memset(&o2_saved_169, 0, sizeof(struct list$1CVALUEph*));
memset(&it_170, 0, sizeof(struct CVALUE*));
memset(&right_value263, 0, sizeof(void*));
memset(&come_value_171, 0, sizeof(struct CVALUE*));
memset(&right_value264, 0, sizeof(void*));
memset(&right_value265, 0, sizeof(void*));
memset(&buf_172, 0, sizeof(struct buffer*));
memset(&j_173, 0, sizeof(int));
memset(&o2_saved_174, 0, sizeof(struct list$1CVALUEph*));
memset(&it_175, 0, sizeof(struct CVALUE*));
memset(&right_value266, 0, sizeof(void*));
memset(&come_value3_176, 0, sizeof(struct CVALUE*));
memset(&right_value267, 0, sizeof(void*));
memset(&right_value268, 0, sizeof(void*));
memset(&right_value269, 0, sizeof(void*));
memset(&right_value270, 0, sizeof(void*));
memset(&right_value271, 0, sizeof(void*));
memset(&right_value272, 0, sizeof(void*));
memset(&right_value273, 0, sizeof(void*));
memset(&right_value274, 0, sizeof(void*));
    tuple_types_146=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value228=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value227=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 788))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value227);
    if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value227;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value228);
    if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value228;
    __freed_obj__ = 0;
    tuple_values_147=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value230=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value229=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 789))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value229);
    if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value229;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value230);
    if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value230;
    __freed_obj__ = 0;
    if(_if_conditional170=!node_compile(self->value,info),    _if_conditional170) {
        __result128__ = (_Bool)0;
        if(tuple_types_146 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_146, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(tuple_values_147 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_147, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result128__;
    }
    come_value_148=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value231=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value231);
    if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value231;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    if(_if_conditional171=come_value_148->type->mNoSolvedGenericsType&&come_value_148->type->mNoSolvedGenericsType->v1&&string_operator_equals(come_value_148->type->mNoSolvedGenericsType->v1->mClass->mName,"optional"),    _if_conditional171) {
        list$1CVALUEph_add(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_148));
    }
    else {
        list$1CVALUEph_push_back(tuple_values_147,(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value235=CVALUE_clone(come_value_148)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value235);
        if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value235;
        __freed_obj__ = 0;
        list$1sTypeph_push_back(tuple_types_146,(struct sType*)come_increment_ref_count(((struct sType*)(right_value236=sType_clone(come_value_148->type)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value236);
        if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value236;
        __freed_obj__ = 0;
        false_node_152=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value237=create_false_object(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value237);
        if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { right_value237 = come_decrement_ref_count(right_value237, ((struct sNode*)right_value237)->finalize, ((struct sNode*)right_value237)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[2] = right_value237;
        __freed_obj__ = 0;
        if(_if_conditional174=!node_compile(false_node_152,info),        _if_conditional174) {
            __result130__ = (_Bool)0;
            if(false_node_152 && !__freed_obj__) { false_node_152 = come_decrement_ref_count(false_node_152, ((struct sNode*)false_node_152)->finalize, ((struct sNode*)false_node_152)->_protocol_obj, 0, 0, 0); } 
            if(tuple_types_146 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_146, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(tuple_values_147 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_147, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(come_value_148 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_148, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result130__;
        }
        come_value2_153=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value238=get_value_from_stack(-1,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value238);
        if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value238;
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(tuple_values_147,(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value239=CVALUE_clone(come_value2_153)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value239);
        if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value239;
        __freed_obj__ = 0;
        list$1sTypeph_push_back(tuple_types_146,(struct sType*)come_increment_ref_count(((struct sType*)(right_value240=sType_clone(come_value2_153->type)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value240);
        if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value240;
        __freed_obj__ = 0;
        type_154=(struct sType*)come_increment_ref_count(((struct sType*)(right_value242=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value241=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 817)))),"optional",(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value241);
        if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value241;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value242);
        if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value242;
        __freed_obj__ = 0;
        for(
        o2_saved_155=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_146)),it_156=list$1sTypeph_begin((o2_saved_155)) ,        0;        _for_condtionalA9=        !list$1sTypeph_end((o2_saved_155)) ,        _for_condtionalA9;        it_156=list$1sTypeph_next((o2_saved_155)) ,        0        ){
            list$1sTypeph_push_back(type_154->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value243=sType_clone(it_156)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value243);
            if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value243;
            __freed_obj__ = 0;
        }
        if(o2_saved_155 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_155, (void*)0, (void*)0, 0, 0, 0, 0); }
        obj_value_157=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value244=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 823))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value244);
        if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[8] = right_value244;
        __freed_obj__ = 0;
        num_string_158=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value246=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value245=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 825))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value245);
        if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[9] = right_value245;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value246);
        if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[10] = right_value246;
        __freed_obj__ = 0;
        buffer_append_str(num_string_158,"1");
        type2_159=(struct sType*)come_increment_ref_count(((struct sType*)(right_value247=solve_generics(type_154,type_154,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value247);
        if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[11] = right_value247;
        __freed_obj__ = 0;
        type_name_160=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value248=make_type_name_string(type2_159,(_Bool)0,(_Bool)1,(_Bool)0,info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value248);
        if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[12] = right_value248;
        __freed_obj__ = 0;
        __dec_obj95=obj_value_157->c_value;
        obj_value_157->c_value=(char*)come_increment_ref_count(((char*)(right_value250=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d)",type_name_160,type_name_160,((char*)(right_value249=buffer_to_string(num_string_158))),info->sname,info->sline))));
        if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value249);
        if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { right_value249 = come_decrement_ref_count(right_value249, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[13] = right_value249;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value250);
        if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { right_value250 = come_decrement_ref_count(right_value250, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[14] = right_value250;
        __freed_obj__ = 0;
        type3_161=(struct sType*)come_increment_ref_count(((struct sType*)(right_value251=sType_clone(type2_159))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value251);
        if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[15] = right_value251;
        __freed_obj__ = 0;
        type3_161->mPointerNum++;
        type3_161->mHeap=(_Bool)1;
        type2_159->mHeap=(_Bool)1;
        __dec_obj96=obj_value_157->type;
        obj_value_157->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value252=sType_clone(type_154))));
        if(__dec_obj96) { come_call_finalizer(sType_finalize,__dec_obj96, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value252);
        if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[16] = right_value252;
        __freed_obj__ = 0;
        __dec_obj97=obj_value_157->c_value;
        obj_value_157->c_value=(char*)come_increment_ref_count(((char*)(right_value253=append_object_to_right_values(obj_value_157->c_value,(struct sType*)come_increment_ref_count(type3_161),info))));
        if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value253);
        if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { right_value253 = come_decrement_ref_count(right_value253, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[17] = right_value253;
        __freed_obj__ = 0;
        obj_value_157->type->mPointerNum++;
        obj_value_157->var=((void*)0);
        obj_type_162=(struct sType*)come_increment_ref_count(((struct sType*)(right_value254=sType_clone(type2_159))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value254);
        if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[18] = right_value254;
        __freed_obj__ = 0;
        fun_name_163="initialize";
        generics_fun_name_164=(char*)come_increment_ref_count(((char*)(right_value257=string_to_string(((char*)(right_value256=make_generics_function(obj_type_162,(char*)come_increment_ref_count(((char*)(right_value255=__builtin_string(fun_name_163)))),info)))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value255);
        if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { right_value255 = come_decrement_ref_count(right_value255, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[19] = right_value255;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value256);
        if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { right_value256 = come_decrement_ref_count(right_value256, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[20] = right_value256;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value257);
        if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { right_value257 = come_decrement_ref_count(right_value257, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[21] = right_value257;
        __freed_obj__ = 0;
        fun_165=map$2charphsFunph_at(info->funcs,generics_fun_name_164,((void*)0));
        if(_if_conditional175=fun_165==((void*)0),        _if_conditional175) {
            __dec_obj98=generics_fun_name_164;
            generics_fun_name_164=(char*)come_increment_ref_count(((char*)(right_value259=create_method_name(obj_type_162,(_Bool)0,((char*)(right_value258=__builtin_string(fun_name_163))),info))));
            if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value258);
            if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { right_value258 = come_decrement_ref_count(right_value258, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value258;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value259);
            if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { right_value259 = come_decrement_ref_count(right_value259, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value259;
            __freed_obj__ = 0;
            fun_165=map$2charphsFunph_at(info->funcs,generics_fun_name_164,((void*)0));
            if(_if_conditional176=fun_165==((void*)0),            _if_conditional176) {
                err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_164,info->come_fun->mName);
                __result131__ = (_Bool)1;
                if(false_node_152 && !__freed_obj__) { false_node_152 = come_decrement_ref_count(false_node_152, ((struct sNode*)false_node_152)->finalize, ((struct sNode*)false_node_152)->_protocol_obj, 0, 0, 0); } 
                if(come_value2_153 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_153, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_154 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_154, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_value_157 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_157, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(num_string_158 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_158, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type2_159 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_159, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_name_160 && !__freed_obj__) { type_name_160 = come_decrement_ref_count(type_name_160, (void*)0, (void*)0, 0, 0, 0); }
                if(type3_161 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_161, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_type_162 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_162, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(generics_fun_name_164 && !__freed_obj__) { generics_fun_name_164 = come_decrement_ref_count(generics_fun_name_164, (void*)0, (void*)0, 0, 0, 0); }
                if(tuple_types_146 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_146, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(tuple_values_147 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_147, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_value_148 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_148, (void*)0, (void*)0, 0, 0, 0, 0); }
                return __result131__;
            }
        }
        result_type_166=(struct sType*)come_increment_ref_count(((struct sType*)(right_value260=sType_clone(fun_165->mResultType))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value260);
        if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[22] = right_value260;
        __freed_obj__ = 0;
        result_type_166->mStatic=(_Bool)0;
        come_params_167=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value262=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value261=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 865))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 23, right_value261);
        if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[23] = right_value261;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 24, right_value262);
        if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[24] = right_value262;
        __freed_obj__ = 0;
        if(_if_conditional177=list$1sTypephp_operator_load_element(fun_165->mParamTypes,0)->mHeap&&obj_value_157->type->mHeap,        _if_conditional177) {
            std_move(list$1sTypephp_operator_load_element(fun_165->mParamTypes,0),obj_value_157->type,obj_value_157,info);
        }
        list$1CVALUEph_push_back(come_params_167,(struct CVALUE*)come_increment_ref_count(obj_value_157));
        i_168=1;
        for(
        o2_saved_169=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_147)),it_170=list$1CVALUEph_begin((o2_saved_169)) ,        0;        _for_condtionalA10=        !list$1CVALUEph_end((o2_saved_169)) ,        _for_condtionalA10;        it_170=list$1CVALUEph_next((o2_saved_169)) ,        0        ){
            come_value_171=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value263=CVALUE_clone(it_170))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value263);
            if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value263;
            __freed_obj__ = 0;
            if(_if_conditional178=list$1sTypephp_operator_load_element(fun_165->mParamTypes,i_168)&&list$1sTypephp_operator_load_element(fun_165->mParamTypes,i_168)->mHeap&&come_value_171->type->mHeap,            _if_conditional178) {
                std_move(list$1sTypephp_operator_load_element(fun_165->mParamTypes,i_168),come_value_171->type,come_value_171,info);
            }
            list$1CVALUEph_push_back(come_params_167,(struct CVALUE*)come_increment_ref_count(come_value_171));
            i_168++;
            if(come_value_171 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_171, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_169 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_169, (void*)0, (void*)0, 0, 0, 0, 0); }
        buf_172=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value265=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value264=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 884))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 25, right_value264);
        if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[25] = right_value264;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 26, right_value265);
        if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[26] = right_value265;
        __freed_obj__ = 0;
        buffer_append_str(buf_172,generics_fun_name_164);
        buffer_append_str(buf_172,"(");
        j_173=0;
        for(
        o2_saved_174=(struct list$1CVALUEph*)come_increment_ref_count((come_params_167)),it_175=list$1CVALUEph_begin((o2_saved_174)) ,        0;        _for_condtionalA11=        !list$1CVALUEph_end((o2_saved_174)) ,        _for_condtionalA11;        it_175=list$1CVALUEph_next((o2_saved_174)) ,        0        ){
            buffer_append_str(buf_172,it_175->c_value);
            if(_if_conditional179=j_173!=list$1CVALUEph_length(come_params_167)-1,            _if_conditional179) {
                buffer_append_str(buf_172,",");
            }
            j_173++;
        }
        if(o2_saved_174 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_174, (void*)0, (void*)0, 0, 0, 0, 0); }
        buffer_append_str(buf_172,")");
        come_value3_176=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value266=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 901))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 27, right_value266);
        if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[27] = right_value266;
        __freed_obj__ = 0;
        __dec_obj99=come_value3_176->c_value;
        come_value3_176->c_value=(char*)come_increment_ref_count(((char*)(right_value267=buffer_to_string(buf_172))));
        if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 28, right_value267);
        if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { right_value267 = come_decrement_ref_count(right_value267, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[28] = right_value267;
        __freed_obj__ = 0;
        if(_if_conditional180=result_type_166->mHeap,        _if_conditional180) {
            __dec_obj100=come_value3_176->c_value;
            come_value3_176->c_value=(char*)come_increment_ref_count(((char*)(right_value269=append_object_to_right_values(((char*)(right_value268=buffer_to_string(buf_172))),(struct sType*)come_increment_ref_count(result_type_166),info))));
            if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value268);
            if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { right_value268 = come_decrement_ref_count(right_value268, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value268;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value269);
            if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { right_value269 = come_decrement_ref_count(right_value269, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value269;
            __freed_obj__ = 0;
        }
        if(_if_conditional181=gComeDebug,        _if_conditional181) {
            __dec_obj101=come_value3_176->c_value;
            come_value3_176->c_value=(char*)come_increment_ref_count(((char*)(right_value273=xsprintf("(come_save_stackframe(\"\%s\", \%s), \%s)",((char*)(right_value270=string_to_string(info->sname))),((char*)(right_value271=int_to_string(info->sline))),((char*)(right_value272=string_to_string(come_value3_176->c_value)))))));
            if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value270);
            if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { right_value270 = come_decrement_ref_count(right_value270, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value270;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value271);
            if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { right_value271 = come_decrement_ref_count(right_value271, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value271;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value272);
            if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { right_value272 = come_decrement_ref_count(right_value272, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value272;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value273);
            if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { right_value273 = come_decrement_ref_count(right_value273, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value273;
            __freed_obj__ = 0;
        }
        __dec_obj102=come_value3_176->type;
        come_value3_176->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value274=sType_clone(result_type_166))));
        if(__dec_obj102) { come_call_finalizer(sType_finalize,__dec_obj102, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 29, right_value274);
        if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[29] = right_value274;
        __freed_obj__ = 0;
        come_value3_176->type->mStatic=(_Bool)0;
        come_value3_176->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value3_176->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value3_176));
        if(false_node_152 && !__freed_obj__) { false_node_152 = come_decrement_ref_count(false_node_152, ((struct sNode*)false_node_152)->finalize, ((struct sNode*)false_node_152)->_protocol_obj, 0, 0, 0); } 
        if(come_value2_153 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_153, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type_154 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_154, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(obj_value_157 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_157, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(num_string_158 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_158, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type2_159 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_159, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type_name_160 && !__freed_obj__) { type_name_160 = come_decrement_ref_count(type_name_160, (void*)0, (void*)0, 0, 0, 0); }
        if(type3_161 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_161, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(obj_type_162 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_162, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(generics_fun_name_164 && !__freed_obj__) { generics_fun_name_164 = come_decrement_ref_count(generics_fun_name_164, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_166 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_166, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_params_167 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_167, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_172 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_172, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_value3_176 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value3_176, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result132__ = (_Bool)1;
    if(tuple_types_146 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_146, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(tuple_values_147 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_147, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_148 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_148, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result132__;
    if(tuple_types_146 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_146, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(tuple_values_147 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_147, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_148 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_148, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional172;
void* right_value232;
struct list_item$1CVALUEph* litem_149;
struct CVALUE* __dec_obj92;
_Bool _if_conditional173;
void* right_value233;
struct list_item$1CVALUEph* litem_150;
struct CVALUE* __dec_obj93;
void* right_value234;
struct list_item$1CVALUEph* litem_151;
struct CVALUE* __dec_obj94;
struct list$1CVALUEph* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value232, 0, sizeof(void*));
memset(&litem_149, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value233, 0, sizeof(void*));
memset(&litem_150, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value234, 0, sizeof(void*));
memset(&litem_151, 0, sizeof(struct list_item$1CVALUEph*));
            if(_if_conditional172=self->len==0,            _if_conditional172) {
                litem_149=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value232=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 209))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value232);
                if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value232;
                __freed_obj__ = 0;
                litem_149->prev=((void*)0);
                litem_149->next=((void*)0);
                __dec_obj92=litem_149->item;
                litem_149->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj92) { come_call_finalizer(CVALUE_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail=litem_149;
                self->head=litem_149;
            }
            else {
                if(_if_conditional173=self->len==1,                _if_conditional173) {
                    litem_150=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value233=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 219))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value233);
                    if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value233;
                    __freed_obj__ = 0;
                    litem_150->prev=self->head;
                    litem_150->next=((void*)0);
                    __dec_obj93=litem_150->item;
                    litem_150->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj93) { come_call_finalizer(CVALUE_finalize,__dec_obj93, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->tail=litem_150;
                    self->head->next=litem_150;
                }
                else {
                    litem_151=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value234=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 229))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value234);
                    if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value234;
                    __freed_obj__ = 0;
                    litem_151->prev=self->tail;
                    litem_151->next=((void*)0);
                    __dec_obj94=litem_151->item;
                    litem_151->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj94) { come_call_finalizer(CVALUE_finalize,__dec_obj94, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->tail->next=litem_151;
                    self->tail=litem_151;
                }
            }
            self->len++;
            __result129__ = __result_obj__ = self;
            if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result129__;
            if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

int sNoneNode_sline(struct sNoneNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result133__ = self->sline;
    return __result133__;
}

char* sNoneNode_sname(struct sNoneNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value275;
char* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value275, 0, sizeof(void*));
    __result134__ = __result_obj__ = ((char*)(right_value275=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value275);
    if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { right_value275 = come_decrement_ref_count(right_value275, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value275;
    __freed_obj__ = 0;
    return __result134__;
}

struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* __dec_obj103;
void* right_value276;
char* __dec_obj104;
struct sSomeNode* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value276, 0, sizeof(void*));
    __dec_obj103=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0,0); }
    self->sline=info->sline;
    __dec_obj104=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value276=__builtin_string(info->sname))));
    if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value276);
    if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { right_value276 = come_decrement_ref_count(right_value276, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value276;
    __freed_obj__ = 0;
    __result135__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0); } 
    return __result135__;
    if(self && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0); } 
}

struct sNode* create_some_object(struct sNode* exp, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value277;
void* right_value278;
struct sNode* _inf_value2;
struct sSomeNode* _inf_obj_value2;
void* right_value282;
struct sNode* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value277, 0, sizeof(void*));
memset(&right_value278, 0, sizeof(void*));
memset(&right_value282, 0, sizeof(void*));
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 955);
    _inf_obj_value2=come_increment_ref_count(((struct sSomeNode*)(right_value278=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(right_value277=(struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "06str.c", 955)))),(struct sNode*)come_increment_ref_count(exp),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sSomeNode_finalize;
    _inf_value2->clone=(void*)sSomeNode_clone;
    _inf_value2->compile=(void*)sSomeNode_compile;
    _inf_value2->sline=(void*)sSomeNode_sline;
    _inf_value2->sname=(void*)sSomeNode_sname;
    _inf_value2->terminated=(void*)sSomeNode_terminated;
    _inf_value2->kind=(void*)sSomeNode_kind;
    __result138__ = __result_obj__ = ((struct sNode*)(right_value282=_inf_value2));
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value277);
    if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value277;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value278);
    if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value278;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value282);
    if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { right_value282 = come_decrement_ref_count(right_value282, ((struct sNode*)right_value282)->finalize, ((struct sNode*)right_value282)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value282;
    __freed_obj__ = 0;
    return __result138__;
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
}

static void sSomeNode_finalize(struct sSomeNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional184;
_Bool _if_conditional185;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional184=self!=((void*)0)&&self->value!=((void*)0),        _if_conditional184) {
            if(self->value && !__freed_obj__) { self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0); } 
        }
        if(_if_conditional185=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional185) {
            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
        }
}

static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional186;
struct sSomeNode* __result136__;
void* right_value279;
struct sSomeNode* result_177;
_Bool _if_conditional187;
void* right_value280;
struct sNode* __dec_obj105;
_Bool _if_conditional188;
_Bool _if_conditional189;
void* right_value281;
char* __dec_obj106;
struct sSomeNode* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value279, 0, sizeof(void*));
memset(&result_177, 0, sizeof(struct sSomeNode*));
memset(&right_value280, 0, sizeof(void*));
memset(&right_value281, 0, sizeof(void*));
        if(_if_conditional186=self==(void*)0,        _if_conditional186) {
            __result136__ = __result_obj__ = (void*)0;
            return __result136__;
        }
        result_177=(struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(right_value279=(struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "sSomeNode_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value279);
        if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value279;
        __freed_obj__ = 0;
        if(_if_conditional187=self!=((void*)0)&&self->value!=((void*)0),        _if_conditional187) {
            __dec_obj105=result_177->value;
            result_177->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value280=sNode_clone(self->value))));
            if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value280);
            if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { right_value280 = come_decrement_ref_count(right_value280, ((struct sNode*)right_value280)->finalize, ((struct sNode*)right_value280)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value280;
            __freed_obj__ = 0;
        }
        if(_if_conditional188=self!=((void*)0),        _if_conditional188) {
            result_177->sline=self->sline;
        }
        if(_if_conditional189=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional189) {
            __dec_obj106=result_177->sname;
            result_177->sname=(char*)come_increment_ref_count(((char*)(right_value281=string_clone(self->sname))));
            if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value281);
            if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { right_value281 = come_decrement_ref_count(right_value281, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value281;
            __freed_obj__ = 0;
        }
        __result137__ = __result_obj__ = result_177;
        if(result_177 && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,result_177, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result137__;
        if(result_177 && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,result_177, (void*)0, (void*)0, 0, 0, 0, 0); }
}

_Bool sSomeNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result139__ = (_Bool)0;
    return __result139__;
}

char* sSomeNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value283;
char* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value283, 0, sizeof(void*));
    __result140__ = __result_obj__ = ((char*)(right_value283=__builtin_string("sSomeNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value283);
    if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { right_value283 = come_decrement_ref_count(right_value283, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value283;
    __freed_obj__ = 0;
    return __result140__;
}

_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value284;
void* right_value285;
struct list$1sTypeph* tuple_types_178;
void* right_value286;
void* right_value287;
struct list$1CVALUEph* tuple_values_179;
_Bool _if_conditional190;
_Bool __result141__;
void* right_value288;
struct CVALUE* come_value_180;
_Bool _if_conditional191;
struct tuple1$1sTypeph* mNoSolvedGenericsType_181;
void* right_value289;
void* right_value290;
void* right_value291;
struct sNode* true_node_182;
_Bool _if_conditional192;
_Bool __result142__;
void* right_value292;
struct CVALUE* come_value2_183;
void* right_value293;
void* right_value294;
void* right_value295;
void* right_value296;
struct sType* type_184;
struct list$1sTypeph* o2_saved_185;
struct sType* it_186;
_Bool _for_condtionalA12;
void* right_value297;
void* right_value298;
struct CVALUE* obj_value_187;
void* right_value299;
void* right_value300;
struct buffer* num_string_188;
void* right_value301;
struct sType* type2_189;
void* right_value302;
char* type_name_190;
void* right_value303;
void* right_value304;
char* __dec_obj107;
void* right_value305;
struct sType* type3_191;
void* right_value306;
struct sType* __dec_obj108;
void* right_value307;
char* __dec_obj109;
void* right_value308;
struct sType* obj_type_192;
char* fun_name_193;
void* right_value309;
void* right_value310;
void* right_value311;
char* generics_fun_name_194;
struct sFun* fun_195;
_Bool _if_conditional193;
void* right_value312;
void* right_value313;
char* __dec_obj110;
_Bool _if_conditional194;
_Bool __result143__;
void* right_value314;
struct sType* result_type_196;
void* right_value315;
void* right_value316;
struct list$1CVALUEph* come_params_197;
_Bool _if_conditional195;
int i_198;
struct list$1CVALUEph* o2_saved_199;
struct CVALUE* it_200;
_Bool _for_condtionalA13;
void* right_value317;
struct CVALUE* come_value_201;
_Bool _if_conditional196;
void* right_value318;
void* right_value319;
struct buffer* buf_202;
int j_203;
struct list$1CVALUEph* o2_saved_204;
struct CVALUE* it_205;
_Bool _for_condtionalA14;
_Bool _if_conditional197;
void* right_value320;
struct CVALUE* come_value3_206;
void* right_value321;
char* __dec_obj111;
_Bool _if_conditional198;
void* right_value322;
void* right_value323;
char* __dec_obj112;
void* right_value324;
struct sType* __dec_obj113;
void* right_value325;
_Bool __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value284, 0, sizeof(void*));
memset(&right_value285, 0, sizeof(void*));
memset(&tuple_types_178, 0, sizeof(struct list$1sTypeph*));
memset(&right_value286, 0, sizeof(void*));
memset(&right_value287, 0, sizeof(void*));
memset(&tuple_values_179, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value288, 0, sizeof(void*));
memset(&come_value_180, 0, sizeof(struct CVALUE*));
memset(&mNoSolvedGenericsType_181, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value289, 0, sizeof(void*));
memset(&right_value290, 0, sizeof(void*));
memset(&right_value291, 0, sizeof(void*));
memset(&true_node_182, 0, sizeof(struct sNode*));
memset(&right_value292, 0, sizeof(void*));
memset(&come_value2_183, 0, sizeof(struct CVALUE*));
memset(&right_value293, 0, sizeof(void*));
memset(&right_value294, 0, sizeof(void*));
memset(&right_value295, 0, sizeof(void*));
memset(&right_value296, 0, sizeof(void*));
memset(&type_184, 0, sizeof(struct sType*));
memset(&o2_saved_185, 0, sizeof(struct list$1sTypeph*));
memset(&it_186, 0, sizeof(struct sType*));
memset(&right_value297, 0, sizeof(void*));
memset(&right_value298, 0, sizeof(void*));
memset(&obj_value_187, 0, sizeof(struct CVALUE*));
memset(&right_value299, 0, sizeof(void*));
memset(&right_value300, 0, sizeof(void*));
memset(&num_string_188, 0, sizeof(struct buffer*));
memset(&right_value301, 0, sizeof(void*));
memset(&type2_189, 0, sizeof(struct sType*));
memset(&right_value302, 0, sizeof(void*));
memset(&type_name_190, 0, sizeof(char*));
memset(&right_value303, 0, sizeof(void*));
memset(&right_value304, 0, sizeof(void*));
memset(&right_value305, 0, sizeof(void*));
memset(&type3_191, 0, sizeof(struct sType*));
memset(&right_value306, 0, sizeof(void*));
memset(&right_value307, 0, sizeof(void*));
memset(&right_value308, 0, sizeof(void*));
memset(&obj_type_192, 0, sizeof(struct sType*));
memset(&fun_name_193, 0, sizeof(char*));
memset(&right_value309, 0, sizeof(void*));
memset(&right_value310, 0, sizeof(void*));
memset(&right_value311, 0, sizeof(void*));
memset(&generics_fun_name_194, 0, sizeof(char*));
memset(&fun_195, 0, sizeof(struct sFun*));
memset(&right_value312, 0, sizeof(void*));
memset(&right_value313, 0, sizeof(void*));
memset(&right_value314, 0, sizeof(void*));
memset(&result_type_196, 0, sizeof(struct sType*));
memset(&right_value315, 0, sizeof(void*));
memset(&right_value316, 0, sizeof(void*));
memset(&come_params_197, 0, sizeof(struct list$1CVALUEph*));
memset(&i_198, 0, sizeof(int));
memset(&o2_saved_199, 0, sizeof(struct list$1CVALUEph*));
memset(&it_200, 0, sizeof(struct CVALUE*));
memset(&right_value317, 0, sizeof(void*));
memset(&come_value_201, 0, sizeof(struct CVALUE*));
memset(&right_value318, 0, sizeof(void*));
memset(&right_value319, 0, sizeof(void*));
memset(&buf_202, 0, sizeof(struct buffer*));
memset(&j_203, 0, sizeof(int));
memset(&o2_saved_204, 0, sizeof(struct list$1CVALUEph*));
memset(&it_205, 0, sizeof(struct CVALUE*));
memset(&right_value320, 0, sizeof(void*));
memset(&come_value3_206, 0, sizeof(struct CVALUE*));
memset(&right_value321, 0, sizeof(void*));
memset(&right_value322, 0, sizeof(void*));
memset(&right_value323, 0, sizeof(void*));
memset(&right_value324, 0, sizeof(void*));
memset(&right_value325, 0, sizeof(void*));
    tuple_types_178=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value285=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value284=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 970))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value284);
    if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value284;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value285);
    if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value285;
    __freed_obj__ = 0;
    tuple_values_179=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value287=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value286=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 971))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value286);
    if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value286;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value287);
    if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value287;
    __freed_obj__ = 0;
    if(_if_conditional190=!node_compile(self->value,info),    _if_conditional190) {
        __result141__ = (_Bool)0;
        if(tuple_types_178 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_178, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(tuple_values_179 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_179, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result141__;
    }
    come_value_180=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value288=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value288);
    if(right_value288 && right_value288 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value288;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    if(_if_conditional191=come_value_180->type->mNoSolvedGenericsType&&come_value_180->type->mNoSolvedGenericsType->v1&&string_operator_equals(come_value_180->type->mNoSolvedGenericsType->v1->mClass->mName,"optional"),    _if_conditional191) {
        list$1CVALUEph_add(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_180));
    }
    else {
        list$1CVALUEph_push_back(tuple_values_179,(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value289=CVALUE_clone(come_value_180)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value289);
        if(right_value289 && right_value289 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value289;
        __freed_obj__ = 0;
        list$1sTypeph_push_back(tuple_types_178,(struct sType*)come_increment_ref_count(((struct sType*)(right_value290=sType_clone(come_value_180->type)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value290);
        if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value290;
        __freed_obj__ = 0;
        true_node_182=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value291=create_true_object(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value291);
        if(right_value291 && right_value291 != __result_obj__ && !__freed_obj__) { right_value291 = come_decrement_ref_count(right_value291, ((struct sNode*)right_value291)->finalize, ((struct sNode*)right_value291)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[2] = right_value291;
        __freed_obj__ = 0;
        if(_if_conditional192=!node_compile(true_node_182,info),        _if_conditional192) {
            __result142__ = (_Bool)0;
            if(mNoSolvedGenericsType_181 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,mNoSolvedGenericsType_181, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(true_node_182 && !__freed_obj__) { true_node_182 = come_decrement_ref_count(true_node_182, ((struct sNode*)true_node_182)->finalize, ((struct sNode*)true_node_182)->_protocol_obj, 0, 0, 0); } 
            if(tuple_types_178 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_178, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(tuple_values_179 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_179, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(come_value_180 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_180, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result142__;
        }
        come_value2_183=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value292=get_value_from_stack(-1,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value292);
        if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value292;
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(tuple_values_179,(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value293=CVALUE_clone(come_value2_183)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value293);
        if(right_value293 && right_value293 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value293;
        __freed_obj__ = 0;
        list$1sTypeph_push_back(tuple_types_178,(struct sType*)come_increment_ref_count(((struct sType*)(right_value294=sType_clone(come_value2_183->type)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value294);
        if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value294;
        __freed_obj__ = 0;
        type_184=(struct sType*)come_increment_ref_count(((struct sType*)(right_value296=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value295=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1001)))),"optional",(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value295);
        if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value295;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value296);
        if(right_value296 && right_value296 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value296;
        __freed_obj__ = 0;
        for(
        o2_saved_185=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_178)),it_186=list$1sTypeph_begin((o2_saved_185)) ,        0;        _for_condtionalA12=        !list$1sTypeph_end((o2_saved_185)) ,        _for_condtionalA12;        it_186=list$1sTypeph_next((o2_saved_185)) ,        0        ){
            list$1sTypeph_push_back(type_184->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value297=sType_clone(it_186)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value297);
            if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value297;
            __freed_obj__ = 0;
        }
        if(o2_saved_185 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_185, (void*)0, (void*)0, 0, 0, 0, 0); }
        obj_value_187=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value298=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1007))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value298);
        if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[8] = right_value298;
        __freed_obj__ = 0;
        num_string_188=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value300=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value299=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1009))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value299);
        if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[9] = right_value299;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value300);
        if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[10] = right_value300;
        __freed_obj__ = 0;
        buffer_append_str(num_string_188,"1");
        type2_189=(struct sType*)come_increment_ref_count(((struct sType*)(right_value301=solve_generics(type_184,type_184,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value301);
        if(right_value301 && right_value301 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[11] = right_value301;
        __freed_obj__ = 0;
        type_name_190=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value302=make_type_name_string(type2_189,(_Bool)0,(_Bool)1,(_Bool)0,info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value302);
        if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[12] = right_value302;
        __freed_obj__ = 0;
        __dec_obj107=obj_value_187->c_value;
        obj_value_187->c_value=(char*)come_increment_ref_count(((char*)(right_value304=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d)",type_name_190,type_name_190,((char*)(right_value303=buffer_to_string(num_string_188))),info->sname,info->sline))));
        if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value303);
        if(right_value303 && right_value303 != __result_obj__ && !__freed_obj__) { right_value303 = come_decrement_ref_count(right_value303, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[13] = right_value303;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value304);
        if(right_value304 && right_value304 != __result_obj__ && !__freed_obj__) { right_value304 = come_decrement_ref_count(right_value304, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[14] = right_value304;
        __freed_obj__ = 0;
        type3_191=(struct sType*)come_increment_ref_count(((struct sType*)(right_value305=sType_clone(type2_189))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value305);
        if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[15] = right_value305;
        __freed_obj__ = 0;
        type3_191->mPointerNum++;
        type3_191->mHeap=(_Bool)1;
        type2_189->mHeap=(_Bool)1;
        __dec_obj108=obj_value_187->type;
        obj_value_187->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value306=sType_clone(type2_189))));
        if(__dec_obj108) { come_call_finalizer(sType_finalize,__dec_obj108, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value306);
        if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[16] = right_value306;
        __freed_obj__ = 0;
        __dec_obj109=obj_value_187->c_value;
        obj_value_187->c_value=(char*)come_increment_ref_count(((char*)(right_value307=append_object_to_right_values(obj_value_187->c_value,(struct sType*)come_increment_ref_count(type3_191),info))));
        if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value307);
        if(right_value307 && right_value307 != __result_obj__ && !__freed_obj__) { right_value307 = come_decrement_ref_count(right_value307, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[17] = right_value307;
        __freed_obj__ = 0;
        obj_value_187->type->mPointerNum++;
        obj_value_187->var=((void*)0);
        obj_type_192=(struct sType*)come_increment_ref_count(((struct sType*)(right_value308=sType_clone(type2_189))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value308);
        if(right_value308 && right_value308 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[18] = right_value308;
        __freed_obj__ = 0;
        fun_name_193="initialize";
        generics_fun_name_194=(char*)come_increment_ref_count(((char*)(right_value311=string_to_string(((char*)(right_value310=make_generics_function(obj_type_192,(char*)come_increment_ref_count(((char*)(right_value309=__builtin_string(fun_name_193)))),info)))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value309);
        if(right_value309 && right_value309 != __result_obj__ && !__freed_obj__) { right_value309 = come_decrement_ref_count(right_value309, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[19] = right_value309;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value310);
        if(right_value310 && right_value310 != __result_obj__ && !__freed_obj__) { right_value310 = come_decrement_ref_count(right_value310, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[20] = right_value310;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value311);
        if(right_value311 && right_value311 != __result_obj__ && !__freed_obj__) { right_value311 = come_decrement_ref_count(right_value311, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[21] = right_value311;
        __freed_obj__ = 0;
        fun_195=map$2charphsFunph_at(info->funcs,generics_fun_name_194,((void*)0));
        if(_if_conditional193=fun_195==((void*)0),        _if_conditional193) {
            __dec_obj110=generics_fun_name_194;
            generics_fun_name_194=(char*)come_increment_ref_count(((char*)(right_value313=create_method_name(obj_type_192,(_Bool)0,((char*)(right_value312=__builtin_string(fun_name_193))),info))));
            if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value312);
            if(right_value312 && right_value312 != __result_obj__ && !__freed_obj__) { right_value312 = come_decrement_ref_count(right_value312, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value312;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value313);
            if(right_value313 && right_value313 != __result_obj__ && !__freed_obj__) { right_value313 = come_decrement_ref_count(right_value313, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value313;
            __freed_obj__ = 0;
            fun_195=map$2charphsFunph_at(info->funcs,generics_fun_name_194,((void*)0));
            if(_if_conditional194=fun_195==((void*)0),            _if_conditional194) {
                err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_194,info->come_fun->mName);
                __result143__ = (_Bool)1;
                if(mNoSolvedGenericsType_181 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,mNoSolvedGenericsType_181, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(true_node_182 && !__freed_obj__) { true_node_182 = come_decrement_ref_count(true_node_182, ((struct sNode*)true_node_182)->finalize, ((struct sNode*)true_node_182)->_protocol_obj, 0, 0, 0); } 
                if(come_value2_183 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_183, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_184 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_184, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_value_187 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_187, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(num_string_188 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_188, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type2_189 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_189, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_name_190 && !__freed_obj__) { type_name_190 = come_decrement_ref_count(type_name_190, (void*)0, (void*)0, 0, 0, 0); }
                if(type3_191 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_191, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_type_192 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_192, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(generics_fun_name_194 && !__freed_obj__) { generics_fun_name_194 = come_decrement_ref_count(generics_fun_name_194, (void*)0, (void*)0, 0, 0, 0); }
                if(tuple_types_178 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_178, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(tuple_values_179 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_179, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_value_180 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_180, (void*)0, (void*)0, 0, 0, 0, 0); }
                return __result143__;
            }
        }
        result_type_196=(struct sType*)come_increment_ref_count(((struct sType*)(right_value314=sType_clone(fun_195->mResultType))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value314);
        if(right_value314 && right_value314 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[22] = right_value314;
        __freed_obj__ = 0;
        result_type_196->mStatic=(_Bool)0;
        come_params_197=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value316=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value315=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1049))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 23, right_value315);
        if(right_value315 && right_value315 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[23] = right_value315;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 24, right_value316);
        if(right_value316 && right_value316 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[24] = right_value316;
        __freed_obj__ = 0;
        if(_if_conditional195=list$1sTypephp_operator_load_element(fun_195->mParamTypes,0)->mHeap&&obj_value_187->type->mHeap,        _if_conditional195) {
            std_move(list$1sTypephp_operator_load_element(fun_195->mParamTypes,0),obj_value_187->type,obj_value_187,info);
        }
        list$1CVALUEph_push_back(come_params_197,(struct CVALUE*)come_increment_ref_count(obj_value_187));
        i_198=1;
        for(
        o2_saved_199=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_179)),it_200=list$1CVALUEph_begin((o2_saved_199)) ,        0;        _for_condtionalA13=        !list$1CVALUEph_end((o2_saved_199)) ,        _for_condtionalA13;        it_200=list$1CVALUEph_next((o2_saved_199)) ,        0        ){
            come_value_201=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value317=CVALUE_clone(it_200))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value317);
            if(right_value317 && right_value317 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value317, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value317;
            __freed_obj__ = 0;
            if(_if_conditional196=list$1sTypephp_operator_load_element(fun_195->mParamTypes,i_198)&&list$1sTypephp_operator_load_element(fun_195->mParamTypes,i_198)->mHeap&&come_value_201->type->mHeap,            _if_conditional196) {
                std_move(list$1sTypephp_operator_load_element(fun_195->mParamTypes,i_198),come_value_201->type,come_value_201,info);
            }
            list$1CVALUEph_push_back(come_params_197,(struct CVALUE*)come_increment_ref_count(come_value_201));
            i_198++;
            if(come_value_201 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_201, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_199 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_199, (void*)0, (void*)0, 0, 0, 0, 0); }
        buf_202=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value319=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value318=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1068))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 25, right_value318);
        if(right_value318 && right_value318 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[25] = right_value318;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 26, right_value319);
        if(right_value319 && right_value319 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[26] = right_value319;
        __freed_obj__ = 0;
        buffer_append_str(buf_202,generics_fun_name_194);
        buffer_append_str(buf_202,"(");
        j_203=0;
        for(
        o2_saved_204=(struct list$1CVALUEph*)come_increment_ref_count((come_params_197)),it_205=list$1CVALUEph_begin((o2_saved_204)) ,        0;        _for_condtionalA14=        !list$1CVALUEph_end((o2_saved_204)) ,        _for_condtionalA14;        it_205=list$1CVALUEph_next((o2_saved_204)) ,        0        ){
            buffer_append_str(buf_202,it_205->c_value);
            if(_if_conditional197=j_203!=list$1CVALUEph_length(come_params_197)-1,            _if_conditional197) {
                buffer_append_str(buf_202,",");
            }
            j_203++;
        }
        if(o2_saved_204 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_204, (void*)0, (void*)0, 0, 0, 0, 0); }
        buffer_append_str(buf_202,")");
        come_value3_206=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value320=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1085))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 27, right_value320);
        if(right_value320 && right_value320 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[27] = right_value320;
        __freed_obj__ = 0;
        __dec_obj111=come_value3_206->c_value;
        come_value3_206->c_value=(char*)come_increment_ref_count(((char*)(right_value321=buffer_to_string(buf_202))));
        if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 28, right_value321);
        if(right_value321 && right_value321 != __result_obj__ && !__freed_obj__) { right_value321 = come_decrement_ref_count(right_value321, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[28] = right_value321;
        __freed_obj__ = 0;
        if(_if_conditional198=result_type_196->mHeap,        _if_conditional198) {
            __dec_obj112=come_value3_206->c_value;
            come_value3_206->c_value=(char*)come_increment_ref_count(((char*)(right_value323=append_object_to_right_values(((char*)(right_value322=buffer_to_string(buf_202))),(struct sType*)come_increment_ref_count(result_type_196),info))));
            if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value322);
            if(right_value322 && right_value322 != __result_obj__ && !__freed_obj__) { right_value322 = come_decrement_ref_count(right_value322, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value322;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value323);
            if(right_value323 && right_value323 != __result_obj__ && !__freed_obj__) { right_value323 = come_decrement_ref_count(right_value323, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value323;
            __freed_obj__ = 0;
        }
        __dec_obj113=come_value3_206->type;
        come_value3_206->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value324=sType_clone(result_type_196))));
        if(__dec_obj113) { come_call_finalizer(sType_finalize,__dec_obj113, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 29, right_value324);
        if(right_value324 && right_value324 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[29] = right_value324;
        __freed_obj__ = 0;
        come_value3_206->type->mStatic=(_Bool)0;
        come_value3_206->var=((void*)0);
        add_come_last_code(info,"%s;\n",((char*)(right_value325=buffer_to_string(buf_202))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 30, right_value325);
        if(right_value325 && right_value325 != __result_obj__ && !__freed_obj__) { right_value325 = come_decrement_ref_count(right_value325, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[30] = right_value325;
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value3_206));
        if(mNoSolvedGenericsType_181 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,mNoSolvedGenericsType_181, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(true_node_182 && !__freed_obj__) { true_node_182 = come_decrement_ref_count(true_node_182, ((struct sNode*)true_node_182)->finalize, ((struct sNode*)true_node_182)->_protocol_obj, 0, 0, 0); } 
        if(come_value2_183 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_183, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type_184 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_184, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(obj_value_187 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_187, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(num_string_188 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_188, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type2_189 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_189, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type_name_190 && !__freed_obj__) { type_name_190 = come_decrement_ref_count(type_name_190, (void*)0, (void*)0, 0, 0, 0); }
        if(type3_191 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_191, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(obj_type_192 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_192, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(generics_fun_name_194 && !__freed_obj__) { generics_fun_name_194 = come_decrement_ref_count(generics_fun_name_194, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_196 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_196, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_params_197 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_197, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_202 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_202, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_value3_206 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value3_206, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result144__ = (_Bool)1;
    if(tuple_types_178 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_178, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(tuple_values_179 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_179, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_180 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_180, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result144__;
    if(tuple_types_178 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_178, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(tuple_values_179 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_179, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_180 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_180, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sSomeNode_sline(struct sSomeNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result145__ = self->sline;
    return __result145__;
}

char* sSomeNode_sname(struct sSomeNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value326;
char* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value326, 0, sizeof(void*));
    __result146__ = __result_obj__ = ((char*)(right_value326=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value326);
    if(right_value326 && right_value326 != __result_obj__ && !__freed_obj__) { right_value326 = come_decrement_ref_count(right_value326, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value326;
    __freed_obj__ = 0;
    return __result146__;
}

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __dec_obj114;
struct list$1sNodeph* __dec_obj115;
void* right_value327;
char* __dec_obj116;
struct sMapNode* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value327, 0, sizeof(void*));
    __dec_obj114=self->map_key_elements;
    self->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(map_key_elements);
    if(__dec_obj114) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj114, (void*)0, (void*)0, 0, 0, 0, 0); }
    __dec_obj115=self->map_elements;
    self->map_elements=(struct list$1sNodeph*)come_increment_ref_count(map_elements);
    if(__dec_obj115) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0); }
    self->sline=info->sline;
    __dec_obj116=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value327=__builtin_string(info->sname))));
    if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value327);
    if(right_value327 && right_value327 != __result_obj__ && !__freed_obj__) { right_value327 = come_decrement_ref_count(right_value327, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value327;
    __freed_obj__ = 0;
    __result147__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(map_key_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_key_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(map_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result147__;
    if(self && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(map_key_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_key_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(map_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sMapNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result148__ = (_Bool)0;
    return __result148__;
}

char* sMapNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value328;
char* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value328, 0, sizeof(void*));
    __result149__ = __result_obj__ = ((char*)(right_value328=__builtin_string("sMapNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value328);
    if(right_value328 && right_value328 != __result_obj__ && !__freed_obj__) { right_value328 = come_decrement_ref_count(right_value328, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value328;
    __freed_obj__ = 0;
    return __result149__;
}

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* map_key_elements_207;
struct list$1sNodeph* map_elements_208;
void* right_value329;
void* right_value330;
struct list$1CVALUEph* key_params_209;
void* right_value331;
void* right_value332;
struct list$1CVALUEph* element_params_210;
struct sType* map_key_type_211;
struct sType* map_element_type_212;
int i_213;
_Bool _for_condtionalA15;
struct sNode* key_elements_217;
struct sNode* elements_218;
_Bool _if_conditional204;
_Bool __result152__;
void* right_value333;
struct CVALUE* come_value_219;
_Bool _if_conditional205;
_Bool __result153__;
void* right_value334;
struct CVALUE* come_value2_220;
void* right_value335;
struct sType* __dec_obj117;
void* right_value336;
struct sType* __dec_obj118;
static int map_value_num_221=0;
void* right_value337;
struct sType* key_type_values_222;
void* right_value338;
void* right_value339;
char* var_name_223;
void* right_value340;
struct sVar* var__224;
void* right_value341;
void* right_value342;
struct sType* element_type_values_225;
void* right_value343;
void* right_value344;
char* var_name2_226;
void* right_value345;
struct sVar* var2__227;
void* right_value346;
void* right_value347;
void* right_value348;
struct buffer* source_228;
int i_229;
_Bool _for_condtionalA16;
struct CVALUE* key_param_230;
struct CVALUE* element_param_231;
_Bool _if_conditional206;
void* right_value349;
void* right_value350;
_Bool _if_conditional207;
void* right_value351;
void* right_value352;
void* right_value353;
void* right_value354;
void* right_value355;
struct sType* map_type_232;
void* right_value356;
void* right_value357;
void* right_value358;
struct sType* obj_type_233;
char* fun_name_234;
void* right_value359;
void* right_value360;
void* right_value361;
char* generics_fun_name_235;
struct sFun* fun_236;
_Bool _if_conditional208;
void* right_value362;
void* right_value363;
char* __dec_obj119;
_Bool _if_conditional209;
_Bool __result154__;
void* right_value364;
struct sType* result_type_237;
struct sType* type_238;
void* right_value365;
struct CVALUE* obj_value_239;
void* right_value366;
void* right_value367;
struct buffer* num_string_240;
void* right_value368;
struct sType* type2_241;
void* right_value369;
char* type_name_242;
void* right_value370;
void* right_value371;
char* __dec_obj120;
void* right_value372;
struct sType* type3_243;
void* right_value373;
struct sType* __dec_obj121;
void* right_value374;
char* __dec_obj122;
void* right_value375;
void* right_value376;
struct list$1CVALUEph* come_params_244;
_Bool _if_conditional210;
void* right_value377;
struct CVALUE* come_value2_245;
void* right_value378;
char* __dec_obj123;
struct sType* __dec_obj124;
void* right_value379;
struct CVALUE* come_value3_246;
void* right_value380;
char* __dec_obj125;
struct sType* __dec_obj126;
void* right_value381;
struct CVALUE* come_value4_247;
void* right_value382;
char* __dec_obj127;
struct sType* __dec_obj128;
void* right_value383;
void* right_value384;
struct buffer* buf_248;
int j_249;
struct list$1CVALUEph* o2_saved_250;
struct CVALUE* it_251;
_Bool _for_condtionalA17;
_Bool _if_conditional211;
void* right_value385;
struct CVALUE* come_value5_252;
void* right_value386;
char* __dec_obj129;
_Bool _if_conditional212;
void* right_value387;
void* right_value388;
char* __dec_obj130;
void* right_value389;
struct sType* __dec_obj131;
void* right_value390;
_Bool __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&map_key_elements_207, 0, sizeof(struct list$1sNodeph*));
memset(&map_elements_208, 0, sizeof(struct list$1sNodeph*));
memset(&right_value329, 0, sizeof(void*));
memset(&right_value330, 0, sizeof(void*));
memset(&key_params_209, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value331, 0, sizeof(void*));
memset(&right_value332, 0, sizeof(void*));
memset(&element_params_210, 0, sizeof(struct list$1CVALUEph*));
memset(&map_key_type_211, 0, sizeof(struct sType*));
memset(&map_element_type_212, 0, sizeof(struct sType*));
memset(&i_213, 0, sizeof(int));
memset(&key_elements_217, 0, sizeof(struct sNode*));
memset(&elements_218, 0, sizeof(struct sNode*));
memset(&right_value333, 0, sizeof(void*));
memset(&come_value_219, 0, sizeof(struct CVALUE*));
memset(&right_value334, 0, sizeof(void*));
memset(&come_value2_220, 0, sizeof(struct CVALUE*));
memset(&right_value335, 0, sizeof(void*));
memset(&right_value336, 0, sizeof(void*));
memset(&right_value337, 0, sizeof(void*));
memset(&key_type_values_222, 0, sizeof(struct sType*));
memset(&right_value338, 0, sizeof(void*));
memset(&right_value339, 0, sizeof(void*));
memset(&var_name_223, 0, sizeof(char*));
memset(&right_value340, 0, sizeof(void*));
memset(&var__224, 0, sizeof(struct sVar*));
memset(&right_value341, 0, sizeof(void*));
memset(&right_value342, 0, sizeof(void*));
memset(&element_type_values_225, 0, sizeof(struct sType*));
memset(&right_value343, 0, sizeof(void*));
memset(&right_value344, 0, sizeof(void*));
memset(&var_name2_226, 0, sizeof(char*));
memset(&right_value345, 0, sizeof(void*));
memset(&var2__227, 0, sizeof(struct sVar*));
memset(&right_value346, 0, sizeof(void*));
memset(&right_value347, 0, sizeof(void*));
memset(&right_value348, 0, sizeof(void*));
memset(&source_228, 0, sizeof(struct buffer*));
memset(&i_229, 0, sizeof(int));
memset(&key_param_230, 0, sizeof(struct CVALUE*));
memset(&element_param_231, 0, sizeof(struct CVALUE*));
memset(&right_value349, 0, sizeof(void*));
memset(&right_value350, 0, sizeof(void*));
memset(&right_value351, 0, sizeof(void*));
memset(&right_value352, 0, sizeof(void*));
memset(&right_value353, 0, sizeof(void*));
memset(&right_value354, 0, sizeof(void*));
memset(&right_value355, 0, sizeof(void*));
memset(&map_type_232, 0, sizeof(struct sType*));
memset(&right_value356, 0, sizeof(void*));
memset(&right_value357, 0, sizeof(void*));
memset(&right_value358, 0, sizeof(void*));
memset(&obj_type_233, 0, sizeof(struct sType*));
memset(&fun_name_234, 0, sizeof(char*));
memset(&right_value359, 0, sizeof(void*));
memset(&right_value360, 0, sizeof(void*));
memset(&right_value361, 0, sizeof(void*));
memset(&generics_fun_name_235, 0, sizeof(char*));
memset(&fun_236, 0, sizeof(struct sFun*));
memset(&right_value362, 0, sizeof(void*));
memset(&right_value363, 0, sizeof(void*));
memset(&right_value364, 0, sizeof(void*));
memset(&result_type_237, 0, sizeof(struct sType*));
memset(&type_238, 0, sizeof(struct sType*));
memset(&right_value365, 0, sizeof(void*));
memset(&obj_value_239, 0, sizeof(struct CVALUE*));
memset(&right_value366, 0, sizeof(void*));
memset(&right_value367, 0, sizeof(void*));
memset(&num_string_240, 0, sizeof(struct buffer*));
memset(&right_value368, 0, sizeof(void*));
memset(&type2_241, 0, sizeof(struct sType*));
memset(&right_value369, 0, sizeof(void*));
memset(&type_name_242, 0, sizeof(char*));
memset(&right_value370, 0, sizeof(void*));
memset(&right_value371, 0, sizeof(void*));
memset(&right_value372, 0, sizeof(void*));
memset(&type3_243, 0, sizeof(struct sType*));
memset(&right_value373, 0, sizeof(void*));
memset(&right_value374, 0, sizeof(void*));
memset(&right_value375, 0, sizeof(void*));
memset(&right_value376, 0, sizeof(void*));
memset(&come_params_244, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value377, 0, sizeof(void*));
memset(&come_value2_245, 0, sizeof(struct CVALUE*));
memset(&right_value378, 0, sizeof(void*));
memset(&right_value379, 0, sizeof(void*));
memset(&come_value3_246, 0, sizeof(struct CVALUE*));
memset(&right_value380, 0, sizeof(void*));
memset(&right_value381, 0, sizeof(void*));
memset(&come_value4_247, 0, sizeof(struct CVALUE*));
memset(&right_value382, 0, sizeof(void*));
memset(&right_value383, 0, sizeof(void*));
memset(&right_value384, 0, sizeof(void*));
memset(&buf_248, 0, sizeof(struct buffer*));
memset(&j_249, 0, sizeof(int));
memset(&o2_saved_250, 0, sizeof(struct list$1CVALUEph*));
memset(&it_251, 0, sizeof(struct CVALUE*));
memset(&right_value385, 0, sizeof(void*));
memset(&come_value5_252, 0, sizeof(struct CVALUE*));
memset(&right_value386, 0, sizeof(void*));
memset(&right_value387, 0, sizeof(void*));
memset(&right_value388, 0, sizeof(void*));
memset(&right_value389, 0, sizeof(void*));
memset(&right_value390, 0, sizeof(void*));
    map_key_elements_207=self->map_key_elements;
    map_elements_208=self->map_elements;
    key_params_209=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value330=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value329=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1149))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value329);
    if(right_value329 && right_value329 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value329;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value330);
    if(right_value330 && right_value330 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value330;
    __freed_obj__ = 0;
    element_params_210=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value332=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value331=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1150))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value331);
    if(right_value331 && right_value331 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value331;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value332);
    if(right_value332 && right_value332 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value332;
    __freed_obj__ = 0;
    for(
    i_213=0 ,    0;    _for_condtionalA15=    i_213<list$1sNodeph_length(map_key_elements_207) ,    _for_condtionalA15;    i_213++ ,    0    ){
        key_elements_217=list$1sNodephp_operator_load_element(map_key_elements_207,i_213);
        elements_218=list$1sNodephp_operator_load_element(map_elements_208,i_213);
        if(_if_conditional204=!node_compile(key_elements_217,info),        _if_conditional204) {
            __result152__ = (_Bool)0;
            if(key_params_209 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,key_params_209, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(element_params_210 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,element_params_210, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_key_type_211 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_key_type_211, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_element_type_212 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_element_type_212, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result152__;
        }
        come_value_219=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value333=get_value_from_stack(-1,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value333);
        if(right_value333 && right_value333 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value333;
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(key_params_209,(struct CVALUE*)come_increment_ref_count(come_value_219));
        if(_if_conditional205=!node_compile(elements_218,info),        _if_conditional205) {
            __result153__ = (_Bool)0;
            if(come_value_219 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_219, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(key_params_209 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,key_params_209, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(element_params_210 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,element_params_210, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_key_type_211 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_key_type_211, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_element_type_212 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_element_type_212, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result153__;
        }
        come_value2_220=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value334=get_value_from_stack(-1,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value334);
        if(right_value334 && right_value334 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value334;
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(element_params_210,(struct CVALUE*)come_increment_ref_count(come_value2_220));
        __dec_obj117=map_key_type_211;
        map_key_type_211=(struct sType*)come_increment_ref_count(((struct sType*)(right_value335=sType_clone(come_value_219->type))));
        if(__dec_obj117) { come_call_finalizer(sType_finalize,__dec_obj117, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value335);
        if(right_value335 && right_value335 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value335;
        __freed_obj__ = 0;
        __dec_obj118=map_element_type_212;
        map_element_type_212=(struct sType*)come_increment_ref_count(((struct sType*)(right_value336=sType_clone(come_value2_220->type))));
        if(__dec_obj118) { come_call_finalizer(sType_finalize,__dec_obj118, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value336);
        if(right_value336 && right_value336 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value336;
        __freed_obj__ = 0;
        if(come_value_219 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_219, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_value2_220 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_220, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    key_type_values_222=(struct sType*)come_increment_ref_count(((struct sType*)(right_value337=sType_clone(map_key_type_211))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value337);
    if(right_value337 && right_value337 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value337;
    __freed_obj__ = 0;
    list$1sNodeph_push_back(key_type_values_222->mArrayNum,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value338=create_int_node(list$1CVALUEph_length(key_params_209),info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value338);
    if(right_value338 && right_value338 != __result_obj__ && !__freed_obj__) { right_value338 = come_decrement_ref_count(right_value338, ((struct sNode*)right_value338)->finalize, ((struct sNode*)right_value338)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[5] = right_value338;
    __freed_obj__ = 0;
    key_type_values_222->mHeap=(_Bool)0;
    var_name_223=(char*)come_increment_ref_count(((char*)(right_value339=xsprintf("__map_keys%d__",++map_value_num_221))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value339);
    if(right_value339 && right_value339 != __result_obj__ && !__freed_obj__) { right_value339 = come_decrement_ref_count(right_value339, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value339;
    __freed_obj__ = 0;
    add_variable_to_table(var_name_223,(struct sType*)come_increment_ref_count(((struct sType*)(right_value340=sType_clone(key_type_values_222)))),info);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value340);
    if(right_value340 && right_value340 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value340;
    __freed_obj__ = 0;
    var__224=get_variable_from_table(info->lv_table,var_name_223);
    add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value341=make_define_var(key_type_values_222,var__224->mCValueName,(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value341);
    if(right_value341 && right_value341 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value341, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value341;
    __freed_obj__ = 0;
    element_type_values_225=(struct sType*)come_increment_ref_count(((struct sType*)(right_value342=sType_clone(map_element_type_212))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value342);
    if(right_value342 && right_value342 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[9] = right_value342;
    __freed_obj__ = 0;
    list$1sNodeph_push_back(element_type_values_225->mArrayNum,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value343=create_int_node(list$1CVALUEph_length(element_params_210),info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value343);
    if(right_value343 && right_value343 != __result_obj__ && !__freed_obj__) { right_value343 = come_decrement_ref_count(right_value343, ((struct sNode*)right_value343)->finalize, ((struct sNode*)right_value343)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[10] = right_value343;
    __freed_obj__ = 0;
    element_type_values_225->mHeap=(_Bool)0;
    var_name2_226=(char*)come_increment_ref_count(((char*)(right_value344=xsprintf("__map_element%d__",map_value_num_221))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value344);
    if(right_value344 && right_value344 != __result_obj__ && !__freed_obj__) { right_value344 = come_decrement_ref_count(right_value344, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[11] = right_value344;
    __freed_obj__ = 0;
    add_variable_to_table(var_name2_226,(struct sType*)come_increment_ref_count(((struct sType*)(right_value345=sType_clone(element_type_values_225)))),info);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value345);
    if(right_value345 && right_value345 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value345, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[12] = right_value345;
    __freed_obj__ = 0;
    var2__227=get_variable_from_table(info->lv_table,var_name2_226);
    add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value346=make_define_var(element_type_values_225,var2__227->mCValueName,(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value346);
    if(right_value346 && right_value346 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[13] = right_value346;
    __freed_obj__ = 0;
    source_228=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value348=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value347=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1206))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value347);
    if(right_value347 && right_value347 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[14] = right_value347;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value348);
    if(right_value348 && right_value348 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value348, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[15] = right_value348;
    __freed_obj__ = 0;
    buffer_append_str(source_228,"{");
    for(
    i_229=0 ,    0;    _for_condtionalA16=    i_229<list$1CVALUEph_length(key_params_209) ,    _for_condtionalA16;    i_229++ ,    0    ){
        key_param_230=list$1CVALUEphp_operator_load_element(key_params_209,i_229);
        element_param_231=list$1CVALUEphp_operator_load_element(element_params_210,i_229);
        if(_if_conditional206=map_key_type_211->mHeap,        _if_conditional206) {
            buffer_append_str(source_228,((char*)(right_value349=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",var__224->mCValueName,i_229,key_param_230->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value349);
            if(right_value349 && right_value349 != __result_obj__ && !__freed_obj__) { right_value349 = come_decrement_ref_count(right_value349, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value349;
            __freed_obj__ = 0;
        }
        else {
            buffer_append_str(source_228,((char*)(right_value350=xsprintf("%s[%d]=%s;\n",var__224->mCValueName,i_229,key_param_230->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value350);
            if(right_value350 && right_value350 != __result_obj__ && !__freed_obj__) { right_value350 = come_decrement_ref_count(right_value350, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value350;
            __freed_obj__ = 0;
        }
        if(_if_conditional207=map_element_type_212->mHeap,        _if_conditional207) {
            buffer_append_str(source_228,((char*)(right_value351=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",var2__227->mCValueName,i_229,element_param_231->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value351);
            if(right_value351 && right_value351 != __result_obj__ && !__freed_obj__) { right_value351 = come_decrement_ref_count(right_value351, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value351;
            __freed_obj__ = 0;
        }
        else {
            buffer_append_str(source_228,((char*)(right_value352=xsprintf("%s[%d]=%s;\n",var2__227->mCValueName,i_229,element_param_231->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value352);
            if(right_value352 && right_value352 != __result_obj__ && !__freed_obj__) { right_value352 = come_decrement_ref_count(right_value352, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value352;
            __freed_obj__ = 0;
        }
    }
    buffer_append_str(source_228,"}");
    add_come_code(info,"%s",((char*)(right_value353=buffer_to_string(source_228))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value353);
    if(right_value353 && right_value353 != __result_obj__ && !__freed_obj__) { right_value353 = come_decrement_ref_count(right_value353, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[16] = right_value353;
    __freed_obj__ = 0;
    map_type_232=(struct sType*)come_increment_ref_count(((struct sType*)(right_value355=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value354=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1233)))),"map",(_Bool)0,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value354);
    if(right_value354 && right_value354 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value354, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[17] = right_value354;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value355);
    if(right_value355 && right_value355 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[18] = right_value355;
    __freed_obj__ = 0;
    list$1sTypeph_push_back(map_type_232->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value356=sType_clone(map_key_type_211)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value356);
    if(right_value356 && right_value356 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[19] = right_value356;
    __freed_obj__ = 0;
    list$1sTypeph_push_back(map_type_232->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value357=sType_clone(map_element_type_212)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value357);
    if(right_value357 && right_value357 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value357, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[20] = right_value357;
    __freed_obj__ = 0;
    obj_type_233=(struct sType*)come_increment_ref_count(((struct sType*)(right_value358=sType_clone(map_type_232))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value358);
    if(right_value358 && right_value358 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[21] = right_value358;
    __freed_obj__ = 0;
    fun_name_234="initialize_with_values";
    generics_fun_name_235=(char*)come_increment_ref_count(((char*)(right_value361=string_to_string(((char*)(right_value360=make_generics_function(obj_type_233,(char*)come_increment_ref_count(((char*)(right_value359=__builtin_string(fun_name_234)))),info)))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value359);
    if(right_value359 && right_value359 != __result_obj__ && !__freed_obj__) { right_value359 = come_decrement_ref_count(right_value359, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[22] = right_value359;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 23, right_value360);
    if(right_value360 && right_value360 != __result_obj__ && !__freed_obj__) { right_value360 = come_decrement_ref_count(right_value360, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[23] = right_value360;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 24, right_value361);
    if(right_value361 && right_value361 != __result_obj__ && !__freed_obj__) { right_value361 = come_decrement_ref_count(right_value361, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[24] = right_value361;
    __freed_obj__ = 0;
    fun_236=map$2charphsFunph_at(info->funcs,generics_fun_name_235,((void*)0));
    if(_if_conditional208=fun_236==((void*)0),    _if_conditional208) {
        __dec_obj119=generics_fun_name_235;
        generics_fun_name_235=(char*)come_increment_ref_count(((char*)(right_value363=create_method_name(obj_type_233,(_Bool)0,((char*)(right_value362=__builtin_string(fun_name_234))),info))));
        if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value362);
        if(right_value362 && right_value362 != __result_obj__ && !__freed_obj__) { right_value362 = come_decrement_ref_count(right_value362, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value362;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value363);
        if(right_value363 && right_value363 != __result_obj__ && !__freed_obj__) { right_value363 = come_decrement_ref_count(right_value363, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value363;
        __freed_obj__ = 0;
        fun_236=map$2charphsFunph_at(info->funcs,generics_fun_name_235,((void*)0));
        if(_if_conditional209=fun_236==((void*)0),        _if_conditional209) {
            err_msg(info,"function not found(%s) at method(%s)(3)\n",generics_fun_name_235,info->come_fun->mName);
            __result154__ = (_Bool)1;
            if(key_params_209 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,key_params_209, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(element_params_210 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,element_params_210, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_key_type_211 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_key_type_211, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_element_type_212 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_element_type_212, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(key_type_values_222 && !__freed_obj__) { come_call_finalizer(sType_finalize,key_type_values_222, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(var_name_223 && !__freed_obj__) { var_name_223 = come_decrement_ref_count(var_name_223, (void*)0, (void*)0, 0, 0, 0); }
            if(element_type_values_225 && !__freed_obj__) { come_call_finalizer(sType_finalize,element_type_values_225, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(var_name2_226 && !__freed_obj__) { var_name2_226 = come_decrement_ref_count(var_name2_226, (void*)0, (void*)0, 0, 0, 0); }
            if(source_228 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_228, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_type_232 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_type_232, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(obj_type_233 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_233, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(generics_fun_name_235 && !__freed_obj__) { generics_fun_name_235 = come_decrement_ref_count(generics_fun_name_235, (void*)0, (void*)0, 0, 0, 0); }
            return __result154__;
        }
    }
    result_type_237=(struct sType*)come_increment_ref_count(((struct sType*)(right_value364=sType_clone(fun_236->mResultType))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 25, right_value364);
    if(right_value364 && right_value364 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value364, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[25] = right_value364;
    __freed_obj__ = 0;
    result_type_237->mStatic=(_Bool)0;
    type_238=map_type_232;
    obj_value_239=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value365=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1260))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 26, right_value365);
    if(right_value365 && right_value365 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value365, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[26] = right_value365;
    __freed_obj__ = 0;
    num_string_240=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value367=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value366=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1262))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 27, right_value366);
    if(right_value366 && right_value366 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[27] = right_value366;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 28, right_value367);
    if(right_value367 && right_value367 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[28] = right_value367;
    __freed_obj__ = 0;
    buffer_append_str(num_string_240,"1");
    type2_241=(struct sType*)come_increment_ref_count(((struct sType*)(right_value368=solve_generics(type_238,type_238,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 29, right_value368);
    if(right_value368 && right_value368 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value368, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[29] = right_value368;
    __freed_obj__ = 0;
    type_name_242=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value369=make_type_name_string(type2_241,(_Bool)0,(_Bool)1,(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 30, right_value369);
    if(right_value369 && right_value369 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[30] = right_value369;
    __freed_obj__ = 0;
    __dec_obj120=obj_value_239->c_value;
    obj_value_239->c_value=(char*)come_increment_ref_count(((char*)(right_value371=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d)",type_name_242,type_name_242,((char*)(right_value370=buffer_to_string(num_string_240))),info->sname,info->sline))));
    if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 31, right_value370);
    if(right_value370 && right_value370 != __result_obj__ && !__freed_obj__) { right_value370 = come_decrement_ref_count(right_value370, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[31] = right_value370;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 32, right_value371);
    if(right_value371 && right_value371 != __result_obj__ && !__freed_obj__) { right_value371 = come_decrement_ref_count(right_value371, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[32] = right_value371;
    __freed_obj__ = 0;
    type3_243=(struct sType*)come_increment_ref_count(((struct sType*)(right_value372=sType_clone(type2_241))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 33, right_value372);
    if(right_value372 && right_value372 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value372, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[33] = right_value372;
    __freed_obj__ = 0;
    type3_243->mPointerNum++;
    type3_243->mHeap=(_Bool)1;
    type2_241->mHeap=(_Bool)1;
    __dec_obj121=obj_value_239->type;
    obj_value_239->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value373=sType_clone(type2_241))));
    if(__dec_obj121) { come_call_finalizer(sType_finalize,__dec_obj121, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 34, right_value373);
    if(right_value373 && right_value373 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value373, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[34] = right_value373;
    __freed_obj__ = 0;
    __dec_obj122=obj_value_239->c_value;
    obj_value_239->c_value=(char*)come_increment_ref_count(((char*)(right_value374=append_object_to_right_values(obj_value_239->c_value,(struct sType*)come_increment_ref_count(type3_243),info))));
    if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 35, right_value374);
    if(right_value374 && right_value374 != __result_obj__ && !__freed_obj__) { right_value374 = come_decrement_ref_count(right_value374, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[35] = right_value374;
    __freed_obj__ = 0;
    obj_value_239->type->mPointerNum++;
    obj_value_239->var=((void*)0);
    come_params_244=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value376=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value375=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1281))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 36, right_value375);
    if(right_value375 && right_value375 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[36] = right_value375;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 37, right_value376);
    if(right_value376 && right_value376 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[37] = right_value376;
    __freed_obj__ = 0;
    if(_if_conditional210=list$1sTypephp_operator_load_element(fun_236->mParamTypes,0)->mHeap&&obj_value_239->type->mHeap,    _if_conditional210) {
        std_move(list$1sTypephp_operator_load_element(fun_236->mParamTypes,0),obj_value_239->type,obj_value_239,info);
    }
    list$1CVALUEph_push_back(come_params_244,(struct CVALUE*)come_increment_ref_count(obj_value_239));
    come_value2_245=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value377=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1288))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 38, right_value377);
    if(right_value377 && right_value377 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[38] = right_value377;
    __freed_obj__ = 0;
    __dec_obj123=come_value2_245->c_value;
    come_value2_245->c_value=(char*)come_increment_ref_count(((char*)(right_value378=xsprintf("%d",list$1CVALUEph_length(key_params_209)))));
    if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 39, right_value378);
    if(right_value378 && right_value378 != __result_obj__ && !__freed_obj__) { right_value378 = come_decrement_ref_count(right_value378, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[39] = right_value378;
    __freed_obj__ = 0;
    __dec_obj124=come_value2_245->type;
    come_value2_245->type=((void*)0);
    if(__dec_obj124) { come_call_finalizer(sType_finalize,__dec_obj124, (void*)0, (void*)0, 0, 0, 0, 0); }
    come_value2_245->var=((void*)0);
    list$1CVALUEph_push_back(come_params_244,(struct CVALUE*)come_increment_ref_count(come_value2_245));
    come_value3_246=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value379=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1296))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 40, right_value379);
    if(right_value379 && right_value379 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[40] = right_value379;
    __freed_obj__ = 0;
    __dec_obj125=come_value3_246->c_value;
    come_value3_246->c_value=(char*)come_increment_ref_count(((char*)(right_value380=xsprintf("%s",var__224->mCValueName))));
    if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 41, right_value380);
    if(right_value380 && right_value380 != __result_obj__ && !__freed_obj__) { right_value380 = come_decrement_ref_count(right_value380, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[41] = right_value380;
    __freed_obj__ = 0;
    __dec_obj126=come_value3_246->type;
    come_value3_246->type=((void*)0);
    if(__dec_obj126) { come_call_finalizer(sType_finalize,__dec_obj126, (void*)0, (void*)0, 0, 0, 0, 0); }
    come_value3_246->var=((void*)0);
    list$1CVALUEph_push_back(come_params_244,(struct CVALUE*)come_increment_ref_count(come_value3_246));
    come_value4_247=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value381=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1304))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 42, right_value381);
    if(right_value381 && right_value381 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value381, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[42] = right_value381;
    __freed_obj__ = 0;
    __dec_obj127=come_value4_247->c_value;
    come_value4_247->c_value=(char*)come_increment_ref_count(((char*)(right_value382=xsprintf("%s",var2__227->mCValueName))));
    if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 43, right_value382);
    if(right_value382 && right_value382 != __result_obj__ && !__freed_obj__) { right_value382 = come_decrement_ref_count(right_value382, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[43] = right_value382;
    __freed_obj__ = 0;
    __dec_obj128=come_value4_247->type;
    come_value4_247->type=((void*)0);
    if(__dec_obj128) { come_call_finalizer(sType_finalize,__dec_obj128, (void*)0, (void*)0, 0, 0, 0, 0); }
    come_value4_247->var=((void*)0);
    list$1CVALUEph_push_back(come_params_244,(struct CVALUE*)come_increment_ref_count(come_value4_247));
    buf_248=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value384=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value383=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1312))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 44, right_value383);
    if(right_value383 && right_value383 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value383, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[44] = right_value383;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 45, right_value384);
    if(right_value384 && right_value384 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value384, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[45] = right_value384;
    __freed_obj__ = 0;
    buffer_append_str(buf_248,generics_fun_name_235);
    buffer_append_str(buf_248,"(");
    j_249=0;
    for(
    o2_saved_250=(struct list$1CVALUEph*)come_increment_ref_count((come_params_244)),it_251=list$1CVALUEph_begin((o2_saved_250)) ,    0;    _for_condtionalA17=    !list$1CVALUEph_end((o2_saved_250)) ,    _for_condtionalA17;    it_251=list$1CVALUEph_next((o2_saved_250)) ,    0    ){
        buffer_append_str(buf_248,it_251->c_value);
        if(_if_conditional211=j_249!=list$1CVALUEph_length(come_params_244)-1,        _if_conditional211) {
            buffer_append_str(buf_248,",");
        }
        j_249++;
    }
    if(o2_saved_250 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_250, (void*)0, (void*)0, 0, 0, 0, 0); }
    buffer_append_str(buf_248,")");
    come_value5_252=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value385=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1329))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 46, right_value385);
    if(right_value385 && right_value385 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value385, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[46] = right_value385;
    __freed_obj__ = 0;
    __dec_obj129=come_value5_252->c_value;
    come_value5_252->c_value=(char*)come_increment_ref_count(((char*)(right_value386=buffer_to_string(buf_248))));
    if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 47, right_value386);
    if(right_value386 && right_value386 != __result_obj__ && !__freed_obj__) { right_value386 = come_decrement_ref_count(right_value386, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[47] = right_value386;
    __freed_obj__ = 0;
    if(_if_conditional212=result_type_237->mHeap,    _if_conditional212) {
        __dec_obj130=come_value5_252->c_value;
        come_value5_252->c_value=(char*)come_increment_ref_count(((char*)(right_value388=append_object_to_right_values(((char*)(right_value387=buffer_to_string(buf_248))),(struct sType*)come_increment_ref_count(result_type_237),info))));
        if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value387);
        if(right_value387 && right_value387 != __result_obj__ && !__freed_obj__) { right_value387 = come_decrement_ref_count(right_value387, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value387;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value388);
        if(right_value388 && right_value388 != __result_obj__ && !__freed_obj__) { right_value388 = come_decrement_ref_count(right_value388, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value388;
        __freed_obj__ = 0;
    }
    __dec_obj131=come_value5_252->type;
    come_value5_252->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value389=sType_clone(result_type_237))));
    if(__dec_obj131) { come_call_finalizer(sType_finalize,__dec_obj131, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 48, right_value389);
    if(right_value389 && right_value389 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value389, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[48] = right_value389;
    __freed_obj__ = 0;
    come_value5_252->type->mStatic=(_Bool)0;
    come_value5_252->var=((void*)0);
    add_come_last_code(info,"%s;\n",((char*)(right_value390=buffer_to_string(buf_248))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 49, right_value390);
    if(right_value390 && right_value390 != __result_obj__ && !__freed_obj__) { right_value390 = come_decrement_ref_count(right_value390, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[49] = right_value390;
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value5_252));
    __result155__ = (_Bool)1;
    if(key_params_209 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,key_params_209, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(element_params_210 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,element_params_210, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(map_key_type_211 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_key_type_211, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(map_element_type_212 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_element_type_212, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(key_type_values_222 && !__freed_obj__) { come_call_finalizer(sType_finalize,key_type_values_222, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_223 && !__freed_obj__) { var_name_223 = come_decrement_ref_count(var_name_223, (void*)0, (void*)0, 0, 0, 0); }
    if(element_type_values_225 && !__freed_obj__) { come_call_finalizer(sType_finalize,element_type_values_225, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name2_226 && !__freed_obj__) { var_name2_226 = come_decrement_ref_count(var_name2_226, (void*)0, (void*)0, 0, 0, 0); }
    if(source_228 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_228, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(map_type_232 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_type_232, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_233 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_233, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(generics_fun_name_235 && !__freed_obj__) { generics_fun_name_235 = come_decrement_ref_count(generics_fun_name_235, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_237 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_237, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_value_239 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_239, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(num_string_240 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_240, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_241 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_241, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_242 && !__freed_obj__) { type_name_242 = come_decrement_ref_count(type_name_242, (void*)0, (void*)0, 0, 0, 0); }
    if(type3_243 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_243, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_params_244 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_244, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_245 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_245, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value3_246 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value3_246, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value4_247 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value4_247, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_248 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_248, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value5_252 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value5_252, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result155__;
    if(key_params_209 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,key_params_209, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(element_params_210 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,element_params_210, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(map_key_type_211 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_key_type_211, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(map_element_type_212 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_element_type_212, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(key_type_values_222 && !__freed_obj__) { come_call_finalizer(sType_finalize,key_type_values_222, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_223 && !__freed_obj__) { var_name_223 = come_decrement_ref_count(var_name_223, (void*)0, (void*)0, 0, 0, 0); }
    if(element_type_values_225 && !__freed_obj__) { come_call_finalizer(sType_finalize,element_type_values_225, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name2_226 && !__freed_obj__) { var_name2_226 = come_decrement_ref_count(var_name2_226, (void*)0, (void*)0, 0, 0, 0); }
    if(source_228 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_228, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(map_type_232 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_type_232, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_233 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_233, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(generics_fun_name_235 && !__freed_obj__) { generics_fun_name_235 = come_decrement_ref_count(generics_fun_name_235, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_237 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_237, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_value_239 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_239, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(num_string_240 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_240, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_241 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_241, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_242 && !__freed_obj__) { type_name_242 = come_decrement_ref_count(type_name_242, (void*)0, (void*)0, 0, 0, 0); }
    if(type3_243 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_243, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_params_244 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_244, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_245 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_245, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value3_246 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value3_246, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value4_247 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value4_247, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_248 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_248, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value5_252 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value5_252, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional202;
struct list_item$1sNodeph* it_214;
int i_215;
_Bool _while_condtional12;
_Bool _if_conditional203;
struct sNode* __result150__;
struct sNode* default_value_216;
struct sNode* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_214, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_215, 0, sizeof(int));
memset(&default_value_216, 0, sizeof(struct sNode*));
            if(_if_conditional202=position<0,            _if_conditional202) {
                position+=self->len;
            }
            it_214=self->head;
            i_215=0;
            while(_while_condtional12=it_214!=((void*)0),            _while_condtional12) {
                if(_if_conditional203=position==i_215,                _if_conditional203) {
                    __result150__ = __result_obj__ = it_214->item;
                    return __result150__;
                }
                it_214=it_214->next;
                i_215++;
            }
            memset(&default_value_216,0,sizeof(struct sNode*));
            __result151__ = __result_obj__ = default_value_216;
            if(default_value_216 && !__freed_obj__) { default_value_216 = come_decrement_ref_count(default_value_216, ((struct sNode*)default_value_216)->finalize, ((struct sNode*)default_value_216)->_protocol_obj, 0, 1, 0); } 
            return __result151__;
            if(default_value_216 && !__freed_obj__) { default_value_216 = come_decrement_ref_count(default_value_216, ((struct sNode*)default_value_216)->finalize, ((struct sNode*)default_value_216)->_protocol_obj, 0, 0, 0); } 
}

int sMapNode_sline(struct sMapNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result156__ = self->sline;
    return __result156__;
}

char* sMapNode_sname(struct sMapNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value391;
char* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value391, 0, sizeof(void*));
    __result157__ = __result_obj__ = ((char*)(right_value391=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value391);
    if(right_value391 && right_value391 != __result_obj__ && !__freed_obj__) { right_value391 = come_decrement_ref_count(right_value391, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value391;
    __freed_obj__ = 0;
    return __result157__;
}

struct sNode* expression_node_v98(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional213;
int sline_253;
void* right_value392;
void* right_value393;
struct list$1sNodeph* exps_254;
void* right_value394;
void* right_value395;
struct buffer* value_255;
char* head_of_last_line_256;
_Bool _while_condtional13;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
int len_257;
_Bool _while_condtional14;
_Bool _if_conditional220;
_Bool _while_condtional15;
_Bool _if_conditional221;
void* right_value396;
struct sNode* exp_258;
_Bool _if_conditional222;
_Bool _if_conditional223;
int sline2_259;
_Bool _if_conditional224;
void* right_value397;
void* right_value398;
void* right_value399;
struct sNode* _inf_value3;
struct sSStringNode* _inf_obj_value3;
void* right_value404;
struct sNode* __result160__;
_Bool _if_conditional233;
int sline_261;
void* right_value405;
void* right_value406;
struct buffer* value_262;
_Bool _while_condtional16;
_Bool _if_conditional234;
char* p_263;
int sline_264;
_Bool _if_conditional235;
_Bool _if_conditional236;
_Bool _if_conditional237;
_Bool _if_conditional238;
int sline2_265;
_Bool _if_conditional239;
void* right_value407;
void* right_value408;
void* right_value409;
struct sNode* _inf_value4;
struct sStrNode* _inf_obj_value4;
void* right_value413;
struct sNode* __result163__;
_Bool _if_conditional246;
int sline_267;
void* right_value414;
void* right_value415;
struct buffer* buf_268;
_Bool _while_condtional17;
_Bool _if_conditional247;
_Bool _if_conditional248;
_Bool _if_conditional249;
_Bool global_269;
_Bool ignore_case_270;
_Bool _while_condtional18;
_Bool _if_conditional250;
_Bool _if_conditional251;
void* right_value416;
void* right_value417;
void* right_value418;
struct sNode* _inf_value5;
struct sRegexNode* _inf_obj_value5;
void* right_value422;
struct sNode* __result166__;
_Bool _if_conditional260;
int c_272;
_Bool _if_conditional261;
_Bool _if_conditional262;
int n_273;
_Bool _while_condtional19;
_Bool _if_conditional263;
int n_274;
_Bool _while_condtional20;
_Bool _while_condtional21;
unsigned long long int n_277;
_Bool _if_conditional264;
void* right_value423;
void* right_value424;
struct sNode* _inf_value6;
struct sCharNode* _inf_obj_value6;
void* right_value427;
struct sNode* __result169__;
_Bool _if_conditional270;
unsigned int c_279;
_Bool _if_conditional271;
_Bool _if_conditional272;
int n_280;
_Bool _while_condtional22;
_Bool _if_conditional273;
int n_281;
_Bool _while_condtional23;
_Bool _while_condtional24;
unsigned long long int n_284;
unsigned char p2_285;
_Bool _if_conditional274;
int size_286;
_Bool _if_conditional275;
_Bool _if_conditional276;
_Bool _if_conditional277;
void* right_value428;
void* right_value429;
struct sNode* _inf_value7;
struct sWCharNode* _inf_obj_value7;
void* right_value432;
struct sNode* __result172__;
_Bool _if_conditional283;
int sline_289;
void* right_value433;
void* right_value434;
struct buffer* value_290;
_Bool _while_condtional25;
_Bool _if_conditional284;
char* p_291;
int sline_292;
_Bool _if_conditional285;
_Bool _if_conditional286;
_Bool _if_conditional287;
int len_293;
int n_294;
_Bool _while_condtional26;
_Bool _if_conditional288;
_Bool _while_condtional27;
unsigned long int lont_297;
int n_298;
_Bool _if_conditional289;
int sline2_299;
_Bool _if_conditional290;
int len_300;
void* right_value435;
unsigned int* wstr_301;
char* str_302;
_Bool _if_conditional291;
void* right_value436;
void* right_value437;
struct sNode* _inf_value8;
struct sWStringNode* _inf_obj_value8;
void* right_value441;
struct sNode* __result175__;
_Bool _if_conditional298;
int sline_304;
void* right_value442;
void* right_value443;
struct list$1sNodeph* exps_305;
void* right_value444;
void* right_value445;
struct buffer* value_306;
_Bool _while_condtional28;
_Bool _if_conditional299;
char* p_307;
int sline_308;
_Bool _if_conditional300;
_Bool _if_conditional301;
_Bool _if_conditional302;
void* right_value446;
struct sNode* exp_309;
char* p_310;
_Bool _while_condtional29;
_Bool _if_conditional303;
_Bool _if_conditional304;
int len_311;
_Bool _while_condtional30;
_Bool _if_conditional305;
_Bool _while_condtional31;
_Bool _if_conditional306;
void* right_value447;
struct sNode* exp_312;
_Bool _if_conditional307;
_Bool _if_conditional308;
int sline2_313;
_Bool _if_conditional309;
void* right_value448;
void* right_value449;
void* right_value450;
struct sNode* _inf_value9;
struct sSStringNode* _inf_obj_value9;
void* right_value455;
struct sNode* __result178__;
_Bool _if_conditional318;
char* p_315;
_Bool no_comma_316;
void* right_value456;
struct sNode* node_317;
char* p2_318;
void* right_value457;
void* right_value458;
struct buffer* first_element_source_319;
void* right_value459;
void* right_value460;
struct list$1sNodeph* list_elements_320;
void* right_value461;
void* right_value462;
struct list$1sNodeph* map_keys_321;
void* right_value463;
void* right_value464;
struct list$1sNodeph* map_elements_322;
_Bool _if_conditional319;
_Bool no_comma_323;
void* right_value465;
struct sNode* node2_324;
_Bool _if_conditional320;
void* right_value466;
void* right_value467;
struct sNode* _inf_value10;
struct sMapNode* _inf_obj_value10;
void* right_value472;
struct sNode* __result181__;
void* right_value473;
_Bool _while_condtional32;
_Bool no_comma_327;
void* right_value474;
struct sNode* node2_328;
void* right_value475;
void* right_value476;
struct sNode* node3_329;
_Bool _if_conditional330;
_Bool _if_conditional331;
_Bool _if_conditional332;
void* right_value477;
void* right_value478;
struct sNode* _inf_value11;
struct sMapNode* _inf_obj_value11;
void* right_value483;
struct sNode* __result186__;
_Bool _if_conditional341;
_Bool _if_conditional342;
_Bool _while_condtional33;
_Bool no_comma_331;
void* right_value484;
struct sNode* node2_332;
_Bool _if_conditional343;
_Bool _if_conditional344;
_Bool _if_conditional345;
_Bool _if_conditional346;
void* right_value485;
void* right_value486;
struct sNode* _inf_value12;
struct sListNode* _inf_obj_value12;
void* right_value490;
struct sNode* __result189__;
void* right_value491;
struct sNode* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&sline_253, 0, sizeof(int));
memset(&right_value392, 0, sizeof(void*));
memset(&right_value393, 0, sizeof(void*));
memset(&exps_254, 0, sizeof(struct list$1sNodeph*));
memset(&right_value394, 0, sizeof(void*));
memset(&right_value395, 0, sizeof(void*));
memset(&value_255, 0, sizeof(struct buffer*));
memset(&head_of_last_line_256, 0, sizeof(char*));
memset(&len_257, 0, sizeof(int));
memset(&right_value396, 0, sizeof(void*));
memset(&exp_258, 0, sizeof(struct sNode*));
memset(&sline2_259, 0, sizeof(int));
memset(&right_value397, 0, sizeof(void*));
memset(&right_value398, 0, sizeof(void*));
memset(&right_value399, 0, sizeof(void*));
memset(&right_value404, 0, sizeof(void*));
memset(&sline_261, 0, sizeof(int));
memset(&right_value405, 0, sizeof(void*));
memset(&right_value406, 0, sizeof(void*));
memset(&value_262, 0, sizeof(struct buffer*));
memset(&p_263, 0, sizeof(char*));
memset(&sline_264, 0, sizeof(int));
memset(&sline2_265, 0, sizeof(int));
memset(&right_value407, 0, sizeof(void*));
memset(&right_value408, 0, sizeof(void*));
memset(&right_value409, 0, sizeof(void*));
memset(&right_value413, 0, sizeof(void*));
memset(&sline_267, 0, sizeof(int));
memset(&right_value414, 0, sizeof(void*));
memset(&right_value415, 0, sizeof(void*));
memset(&buf_268, 0, sizeof(struct buffer*));
memset(&global_269, 0, sizeof(_Bool));
memset(&ignore_case_270, 0, sizeof(_Bool));
memset(&right_value416, 0, sizeof(void*));
memset(&right_value417, 0, sizeof(void*));
memset(&right_value418, 0, sizeof(void*));
memset(&right_value422, 0, sizeof(void*));
memset(&c_272, 0, sizeof(int));
memset(&n_273, 0, sizeof(int));
memset(&n_274, 0, sizeof(int));
memset(&n_277, 0, sizeof(unsigned long long int));
memset(&right_value423, 0, sizeof(void*));
memset(&right_value424, 0, sizeof(void*));
memset(&right_value427, 0, sizeof(void*));
memset(&c_279, 0, sizeof(unsigned int));
memset(&n_280, 0, sizeof(int));
memset(&n_281, 0, sizeof(int));
memset(&n_284, 0, sizeof(unsigned long long int));
memset(&p2_285, 0, sizeof(unsigned char));
memset(&size_286, 0, sizeof(int));
memset(&right_value428, 0, sizeof(void*));
memset(&right_value429, 0, sizeof(void*));
memset(&right_value432, 0, sizeof(void*));
memset(&sline_289, 0, sizeof(int));
memset(&right_value433, 0, sizeof(void*));
memset(&right_value434, 0, sizeof(void*));
memset(&value_290, 0, sizeof(struct buffer*));
memset(&p_291, 0, sizeof(char*));
memset(&sline_292, 0, sizeof(int));
memset(&len_293, 0, sizeof(int));
memset(&n_294, 0, sizeof(int));
memset(&lont_297, 0, sizeof(unsigned long int));
memset(&n_298, 0, sizeof(int));
memset(&sline2_299, 0, sizeof(int));
memset(&len_300, 0, sizeof(int));
memset(&right_value435, 0, sizeof(void*));
memset(&wstr_301, 0, sizeof(unsigned int*));
memset(&str_302, 0, sizeof(char*));
memset(&right_value436, 0, sizeof(void*));
memset(&right_value437, 0, sizeof(void*));
memset(&right_value441, 0, sizeof(void*));
memset(&sline_304, 0, sizeof(int));
memset(&right_value442, 0, sizeof(void*));
memset(&right_value443, 0, sizeof(void*));
memset(&exps_305, 0, sizeof(struct list$1sNodeph*));
memset(&right_value444, 0, sizeof(void*));
memset(&right_value445, 0, sizeof(void*));
memset(&value_306, 0, sizeof(struct buffer*));
memset(&p_307, 0, sizeof(char*));
memset(&sline_308, 0, sizeof(int));
memset(&right_value446, 0, sizeof(void*));
memset(&exp_309, 0, sizeof(struct sNode*));
memset(&p_310, 0, sizeof(char*));
memset(&len_311, 0, sizeof(int));
memset(&right_value447, 0, sizeof(void*));
memset(&exp_312, 0, sizeof(struct sNode*));
memset(&sline2_313, 0, sizeof(int));
memset(&right_value448, 0, sizeof(void*));
memset(&right_value449, 0, sizeof(void*));
memset(&right_value450, 0, sizeof(void*));
memset(&right_value455, 0, sizeof(void*));
memset(&p_315, 0, sizeof(char*));
memset(&no_comma_316, 0, sizeof(_Bool));
memset(&right_value456, 0, sizeof(void*));
memset(&node_317, 0, sizeof(struct sNode*));
memset(&p2_318, 0, sizeof(char*));
memset(&right_value457, 0, sizeof(void*));
memset(&right_value458, 0, sizeof(void*));
memset(&first_element_source_319, 0, sizeof(struct buffer*));
memset(&right_value459, 0, sizeof(void*));
memset(&right_value460, 0, sizeof(void*));
memset(&list_elements_320, 0, sizeof(struct list$1sNodeph*));
memset(&right_value461, 0, sizeof(void*));
memset(&right_value462, 0, sizeof(void*));
memset(&map_keys_321, 0, sizeof(struct list$1sNodeph*));
memset(&right_value463, 0, sizeof(void*));
memset(&right_value464, 0, sizeof(void*));
memset(&map_elements_322, 0, sizeof(struct list$1sNodeph*));
memset(&no_comma_323, 0, sizeof(_Bool));
memset(&right_value465, 0, sizeof(void*));
memset(&node2_324, 0, sizeof(struct sNode*));
memset(&right_value466, 0, sizeof(void*));
memset(&right_value467, 0, sizeof(void*));
memset(&right_value472, 0, sizeof(void*));
memset(&right_value473, 0, sizeof(void*));
memset(&no_comma_327, 0, sizeof(_Bool));
memset(&right_value474, 0, sizeof(void*));
memset(&node2_328, 0, sizeof(struct sNode*));
memset(&right_value475, 0, sizeof(void*));
memset(&right_value476, 0, sizeof(void*));
memset(&node3_329, 0, sizeof(struct sNode*));
memset(&right_value477, 0, sizeof(void*));
memset(&right_value478, 0, sizeof(void*));
memset(&right_value483, 0, sizeof(void*));
memset(&no_comma_331, 0, sizeof(_Bool));
memset(&right_value484, 0, sizeof(void*));
memset(&node2_332, 0, sizeof(struct sNode*));
memset(&right_value485, 0, sizeof(void*));
memset(&right_value486, 0, sizeof(void*));
memset(&right_value490, 0, sizeof(void*));
memset(&right_value491, 0, sizeof(void*));
    if(_if_conditional213=*info->p==34&&*(info->p+1)==34&&*(info->p+2)==34&&*(info->p+3)==10,    _if_conditional213) {
        info->p+=4;
        info->sline++;
        sline_253=info->sline;
        exps_254=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value393=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value392=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1367))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value392);
        if(right_value392 && right_value392 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value392, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value392;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value393);
        if(right_value393 && right_value393 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value393, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value393;
        __freed_obj__ = 0;
        value_255=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value395=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value394=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1368))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value394);
        if(right_value394 && right_value394 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value394, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value394;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value395);
        if(right_value395 && right_value395 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value395, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value395;
        __freed_obj__ = 0;
        head_of_last_line_256=((void*)0);
        while(_while_condtional13=1,        _while_condtional13) {
            if(_if_conditional214=*info->p==34&&*(info->p+1)==34&&*(info->p+2)==34,            _if_conditional214) {
                if(_if_conditional215=head_of_last_line_256,                _if_conditional215) {
                    buffer_trim(value_255,info->p-head_of_last_line_256);
                }
                info->p+=3;
                skip_spaces_and_lf(info);
                break;
            }
            else {
                if(_if_conditional216=*info->p==37,                _if_conditional216) {
                    buffer_append_char(value_255,37);
                    buffer_append_char(value_255,37);
                    info->p++;
                }
                else {
                    if(_if_conditional217=*info->p==34,                    _if_conditional217) {
                        buffer_append_char(value_255,92);
                        buffer_append_char(value_255,34);
                        info->p++;
                    }
                    else {
                        if(_if_conditional218=*info->p==92,                        _if_conditional218) {
                            buffer_append_char(value_255,92);
                            info->p++;
                            if(_if_conditional219=xisdigit(*info->p),                            _if_conditional219) {
                                len_257=0;
                                while(_while_condtional14=xisdigit(*info->p)&&len_257<3,                                _while_condtional14) {
                                    buffer_append_char(value_255,*info->p);
                                    info->p++;
                                    len_257++;
                                }
                            }
                            else {
                                if(_if_conditional220=*info->p==120||*info->p==88,                                _if_conditional220) {
                                    buffer_append_char(value_255,*info->p);
                                    info->p++;
                                    while(_while_condtional15=*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70,                                    _while_condtional15) {
                                        buffer_append_char(value_255,*info->p);
                                        info->p++;
                                    }
                                }
                                else {
                                    if(_if_conditional221=*info->p==123,                                    _if_conditional221) {
                                        info->p++;
                                        exp_258=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value396=expression_v13(info))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value396);
                                        if(right_value396 && right_value396 != __result_obj__ && !__freed_obj__) { right_value396 = come_decrement_ref_count(right_value396, ((struct sNode*)right_value396)->finalize, ((struct sNode*)right_value396)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value396;
                                        __freed_obj__ = 0;
                                        list$1sNodeph_add(exps_254,(struct sNode*)come_increment_ref_count(exp_258));
                                        if(_if_conditional222=*info->p==125,                                        _if_conditional222) {
                                            info->p++;
                                        }
                                        buffer_append_str(value_255,"%s");
                                        if(exp_258 && !__freed_obj__) { exp_258 = come_decrement_ref_count(exp_258, ((struct sNode*)exp_258)->finalize, ((struct sNode*)exp_258)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    else {
                                        switch (*info->p) {
                                            case 48:
                                            buffer_append_char(value_255,*info->p);
                                            info->p++;
                                            break;
                                            case 110:
                                            buffer_append_char(value_255,*info->p);
                                            info->p++;
                                            break;
                                            case 116:
                                            buffer_append_char(value_255,*info->p);
                                            info->p++;
                                            break;
                                            case 114:
                                            buffer_append_char(value_255,*info->p);
                                            info->p++;
                                            break;
                                            case 118:
                                            buffer_append_char(value_255,*info->p);
                                            info->p++;
                                            break;
                                            case 102:
                                            buffer_append_char(value_255,*info->p);
                                            info->p++;
                                            break;
                                            case 97:
                                            buffer_append_char(value_255,*info->p);
                                            info->p++;
                                            break;
                                            case 98:
                                            buffer_append_char(value_255,*info->p);
                                            info->p++;
                                            break;
                                            case 92:
                                            buffer_append_char(value_255,*info->p);
                                            info->p++;
                                            break;
                                            default:
                                            buffer_append_char(value_255,*info->p);
                                            info->p++;
                                            break;
                                        }
                                    }
                                }
                            }
                        }
                        else {
                            if(_if_conditional223=*info->p==0,                            _if_conditional223) {
                                sline2_259=info->sline;
                                info->sline=sline_253;
                                err_msg(info,"close \" to make embbeded string value");
                                exit(2);
                            }
                            else {
                                if(_if_conditional224=*info->p==10,                                _if_conditional224) {
                                    buffer_append_char(value_255,92);
                                    buffer_append_char(value_255,110);
                                    info->p++;
                                    info->sline++;
                                    head_of_last_line_256=info->p;
                                }
                                else {
                                    buffer_append_char(value_255,*info->p);
                                    info->p++;
                                }
                            }
                        }
                    }
                }
            }
        }
        skip_spaces_and_lf(info);
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1516);
        _inf_obj_value3=come_increment_ref_count(((struct sSStringNode*)(right_value399=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(right_value397=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 1516)))),(char*)come_increment_ref_count(((char*)(right_value398=buffer_to_string(value_255)))),(struct list$1sNodeph*)come_increment_ref_count(exps_254),sline_253,info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sSStringNode_finalize;
        _inf_value3->clone=(void*)sSStringNode_clone;
        _inf_value3->compile=(void*)sSStringNode_compile;
        _inf_value3->sline=(void*)sSStringNode_sline;
        _inf_value3->sname=(void*)sSStringNode_sname;
        _inf_value3->terminated=(void*)sSStringNode_terminated;
        _inf_value3->kind=(void*)sSStringNode_kind;
        __result160__ = __result_obj__ = ((struct sNode*)(right_value404=_inf_value3));
        if(exps_254 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,exps_254, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(value_255 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_255, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value397);
        if(right_value397 && right_value397 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,right_value397, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value397;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value398);
        if(right_value398 && right_value398 != __result_obj__ && !__freed_obj__) { right_value398 = come_decrement_ref_count(right_value398, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value398;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value399);
        if(right_value399 && right_value399 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,right_value399, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value399;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value404);
        if(right_value404 && right_value404 != __result_obj__ && !__freed_obj__) { right_value404 = come_decrement_ref_count(right_value404, ((struct sNode*)right_value404)->finalize, ((struct sNode*)right_value404)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[7] = right_value404;
        __freed_obj__ = 0;
        return __result160__;
        if(exps_254 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,exps_254, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(value_255 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_255, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        if(_if_conditional233=*info->p==34,        _if_conditional233) {
            info->p++;
            sline_261=info->sline;
            value_262=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value406=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value405=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1524))))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value405);
            if(right_value405 && right_value405 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value405, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value405;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value406);
            if(right_value406 && right_value406 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value406, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value406;
            __freed_obj__ = 0;
            while(_while_condtional16=1,            _while_condtional16) {
                if(_if_conditional234=*info->p==34,                _if_conditional234) {
                    info->p++;
                    p_263=info->p;
                    sline_264=info->sline;
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    if(_if_conditional235=*info->p==34,                    _if_conditional235) {
                        info->p++;
                    }
                    else {
                        info->p=p_263;
                        info->sline=sline_264;
                        break;
                    }
                }
                else {
                    if(_if_conditional236=*info->p==92,                    _if_conditional236) {
                        buffer_append_char(value_262,92);
                        info->p++;
                        if(_if_conditional237=*info->p==34,                        _if_conditional237) {
                            buffer_append_char(value_262,34);
                            info->p++;
                        }
                        else {
                            buffer_append_char(value_262,*info->p);
                            info->p++;
                        }
                    }
                    else {
                        if(_if_conditional238=*info->p==0,                        _if_conditional238) {
                            sline2_265=info->sline;
                            info->sline=sline_261;
                            err_msg(info,"close \" to make c string value");
                            info->sline=sline2_265;
                            exit(2);
                        }
                        else {
                            if(_if_conditional239=*info->p==10,                            _if_conditional239) {
                                info->sline++;
                            }
                            buffer_append_char(value_262,*info->p);
                            info->p++;
                        }
                    }
                }
            }
            skip_spaces_and_lf(info);
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1576);
            _inf_obj_value4=come_increment_ref_count(((struct sStrNode*)(right_value409=sStrNode_initialize((struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(right_value407=(struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1576)))),(char*)come_increment_ref_count(((char*)(right_value408=buffer_to_string(value_262)))),sline_261,info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sStrNode_finalize;
            _inf_value4->clone=(void*)sStrNode_clone;
            _inf_value4->compile=(void*)sStrNode_compile;
            _inf_value4->sline=(void*)sStrNode_sline;
            _inf_value4->sname=(void*)sStrNode_sname;
            _inf_value4->terminated=(void*)sStrNode_terminated;
            _inf_value4->kind=(void*)sStrNode_kind;
            __result163__ = __result_obj__ = ((struct sNode*)(right_value413=_inf_value4));
            if(value_262 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_262, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value407);
            if(right_value407 && right_value407 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,right_value407, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value407;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value408);
            if(right_value408 && right_value408 != __result_obj__ && !__freed_obj__) { right_value408 = come_decrement_ref_count(right_value408, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value408;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value409);
            if(right_value409 && right_value409 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,right_value409, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value409;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value413);
            if(right_value413 && right_value413 != __result_obj__ && !__freed_obj__) { right_value413 = come_decrement_ref_count(right_value413, ((struct sNode*)right_value413)->finalize, ((struct sNode*)right_value413)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[5] = right_value413;
            __freed_obj__ = 0;
            return __result163__;
            if(value_262 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_262, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            if(_if_conditional246=*info->p==47,            _if_conditional246) {
                info->p++;
                sline_267=info->sline;
                buf_268=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value415=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value414=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1583))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value414);
                if(right_value414 && right_value414 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value414, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value414;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value415);
                if(right_value415 && right_value415 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value415, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value415;
                __freed_obj__ = 0;
                while(_while_condtional17=(_Bool)1,                _while_condtional17) {
                    if(_if_conditional247=*info->p==92&&*(info->p+1)==47,                    _if_conditional247) {
                        info->p++;
                        buffer_append_char(buf_268,*info->p);
                        info->p++;
                    }
                    else {
                        if(_if_conditional248=*info->p==47,                        _if_conditional248) {
                            info->p++;
                            break;
                        }
                        else {
                            if(_if_conditional249=*info->p==0,                            _if_conditional249) {
                                err_msg(info,"require closing / for regex");
                                exit(5);
                            }
                            else {
                                buffer_append_char(buf_268,*info->p);
                                info->p++;
                            }
                        }
                    }
                }
                global_269=(_Bool)0;
                ignore_case_270=(_Bool)0;
                while(_while_condtional18=*info->p==103||*info->p==105,                _while_condtional18) {
                    if(_if_conditional250=*info->p==103,                    _if_conditional250) {
                        info->p++;
                        global_269=(_Bool)1;
                    }
                    else {
                        if(_if_conditional251=*info->p==105,                        _if_conditional251) {
                            info->p++;
                            ignore_case_270=(_Bool)1;
                        }
                        else {
                            break;
                        }
                    }
                }
                skip_spaces_and_lf(info);
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1622);
                _inf_obj_value5=come_increment_ref_count(((struct sRegexNode*)(right_value418=sRegexNode_initialize((struct sRegexNode*)come_increment_ref_count(((struct sRegexNode*)(right_value416=(struct sRegexNode*)come_calloc(1, sizeof(struct sRegexNode)*(1), "06str.c", 1622)))),(char*)come_increment_ref_count(((char*)(right_value417=buffer_to_string(buf_268)))),global_269,ignore_case_270,sline_267,info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sRegexNode_finalize;
                _inf_value5->clone=(void*)sRegexNode_clone;
                _inf_value5->compile=(void*)sRegexNode_compile;
                _inf_value5->sline=(void*)sRegexNode_sline;
                _inf_value5->sname=(void*)sRegexNode_sname;
                _inf_value5->terminated=(void*)sRegexNode_terminated;
                _inf_value5->kind=(void*)sRegexNode_kind;
                __result166__ = __result_obj__ = ((struct sNode*)(right_value422=_inf_value5));
                if(buf_268 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_268, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value416);
                if(right_value416 && right_value416 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,right_value416, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value416;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value417);
                if(right_value417 && right_value417 != __result_obj__ && !__freed_obj__) { right_value417 = come_decrement_ref_count(right_value417, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value417;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value418);
                if(right_value418 && right_value418 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,right_value418, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[4] = right_value418;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value422);
                if(right_value422 && right_value422 != __result_obj__ && !__freed_obj__) { right_value422 = come_decrement_ref_count(right_value422, ((struct sNode*)right_value422)->finalize, ((struct sNode*)right_value422)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[5] = right_value422;
                __freed_obj__ = 0;
                return __result166__;
                if(buf_268 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_268, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                if(_if_conditional260=*info->p==39,                _if_conditional260) {
                    info->p++;
                    if(_if_conditional261=*info->p==92,                    _if_conditional261) {
                        info->p++;
                        if(_if_conditional262=xisdigit(*info->p),                        _if_conditional262) {
                            n_273=0;
                            while(_while_condtional19=xisdigit(*info->p),                            _while_condtional19) {
                                n_273=n_273*8+*info->p-48;
                                info->p++;
                            }
                            c_272=n_273;
                        }
                        else {
                            switch (*info->p) {
                                case 110:
                                c_272=10;
                                info->p++;
                                break;
                                case 116:
                                c_272=9;
                                info->p++;
                                break;
                                case 114:
                                c_272=13;
                                info->p++;
                                break;
                                case 97:
                                c_272=7;
                                info->p++;
                                break;
                                case 102:
                                c_272=12;
                                info->p++;
                                break;
                                case 118:
                                c_272=11;
                                info->p++;
                                break;
                                case 98:
                                c_272=8;
                                info->p++;
                                break;
                                case 92:
                                c_272=92;
                                info->p++;
                                break;
                                case 48:
                                c_272=0;
                                info->p++;
                                if(_if_conditional263=xisdigit(*info->p),                                _if_conditional263) {
                                    n_274=0;
                                    while(_while_condtional20=xisdigit(*info->p),                                    _while_condtional20) {
                                        n_274=n_274*8+*info->p-48;
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                    }
                                    c_272=n_274;
                                }
                                break;
                                case 120:
                                case 88:
                                {
                                    info->p++;
                                    char buf_275[128];
                                    memset(&buf_275, 0, sizeof(char)                                    *(128)                                    );
                                    strncpy(buf_275,"0x",128);
                                    while(_while_condtional21=*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70,                                    _while_condtional21) {
                                        char buf2_276[2];
                                        memset(&buf2_276, 0, sizeof(char)                                        *(2)                                        );
                                        buf2_276[0]=*info->p;
                                        buf2_276[1]=0;
                                        info->p++;
                                        strncat(buf_275,buf2_276,128);
                                    }
                                    n_277=strtoll(buf_275,((void*)0),0);
                                    c_272=n_277;
                                }
                                break;
                                default:
                                c_272=*info->p;
                                info->p++;
                                break;
                            }
                        }
                    }
                    else {
                        c_272=*info->p;
                        info->p++;
                    }
                    if(_if_conditional264=*info->p!=39,                    _if_conditional264) {
                        err_msg(info,"close \' to make character value");
                    }
                    else {
                        info->p++;
                        skip_spaces_and_lf(info);
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1739);
                        _inf_obj_value6=come_increment_ref_count(((struct sCharNode*)(right_value424=sCharNode_initialize((struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(right_value423=(struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "06str.c", 1739)))),c_272,info))));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sCharNode_finalize;
                        _inf_value6->clone=(void*)sCharNode_clone;
                        _inf_value6->compile=(void*)sCharNode_compile;
                        _inf_value6->sline=(void*)sCharNode_sline;
                        _inf_value6->sname=(void*)sCharNode_sname;
                        _inf_value6->terminated=(void*)sCharNode_terminated;
                        _inf_value6->kind=(void*)sCharNode_kind;
                        __result169__ = __result_obj__ = ((struct sNode*)(right_value427=_inf_value6));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value423);
                        if(right_value423 && right_value423 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,right_value423, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value423;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value424);
                        if(right_value424 && right_value424 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,right_value424, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value424;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value427);
                        if(right_value427 && right_value427 != __result_obj__ && !__freed_obj__) { right_value427 = come_decrement_ref_count(right_value427, ((struct sNode*)right_value427)->finalize, ((struct sNode*)right_value427)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[2] = right_value427;
                        __freed_obj__ = 0;
                        return __result169__;
                    }
                }
                else {
                    if(_if_conditional270=*info->p==76&&*(info->p+1)==39,                    _if_conditional270) {
                        info->p+=2;
                        if(_if_conditional271=*info->p==92,                        _if_conditional271) {
                            info->p++;
                            if(_if_conditional272=xisdigit(*info->p),                            _if_conditional272) {
                                n_280=0;
                                while(_while_condtional22=xisdigit(*info->p),                                _while_condtional22) {
                                    n_280=n_280*8+*info->p-48;
                                    info->p++;
                                }
                                c_279=n_280;
                            }
                            else {
                                switch (*info->p) {
                                    case 110:
                                    c_279=10;
                                    info->p++;
                                    break;
                                    case 116:
                                    c_279=9;
                                    info->p++;
                                    break;
                                    case 114:
                                    c_279=13;
                                    info->p++;
                                    break;
                                    case 97:
                                    c_279=7;
                                    info->p++;
                                    break;
                                    case 92:
                                    c_279=92;
                                    info->p++;
                                    break;
                                    case 48:
                                    c_279=0;
                                    info->p++;
                                    if(_if_conditional273=xisdigit(*info->p),                                    _if_conditional273) {
                                        n_281=0;
                                        while(_while_condtional23=xisdigit(*info->p),                                        _while_condtional23) {
                                            n_281=n_281*8+*info->p-48;
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                        }
                                        c_279=n_281;
                                    }
                                    break;
                                    case 120:
                                    case 88:
                                    {
                                        info->p++;
                                        char buf_282[128];
                                        memset(&buf_282, 0, sizeof(char)                                        *(128)                                        );
                                        strncpy(buf_282,"0x",128);
                                        while(_while_condtional24=*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70,                                        _while_condtional24) {
                                            char buf2_283[2];
                                            memset(&buf2_283, 0, sizeof(char)                                            *(2)                                            );
                                            buf2_283[0]=*info->p;
                                            buf2_283[1]=0;
                                            info->p++;
                                            strncat(buf_282,buf2_283,128);
                                        }
                                        n_284=strtoll(buf_282,((void*)0),0);
                                        c_279=n_284;
                                    }
                                    break;
                                    default:
                                    c_279=*info->p;
                                    info->p++;
                                    break;
                                }
                            }
                        }
                        else {
                            p2_285=*(unsigned char*)info->p;
                            if(_if_conditional274=p2_285>127,                            _if_conditional274) {
                                char str_287[4+1];
                                memset(&str_287, 0, sizeof(char)                                *(4+1)                                );
                                size_286=((p2_285&128)>>7)+((p2_285&64)>>6)+((p2_285&32)>>5)+((p2_285&16)>>4);
                                if(_if_conditional275=size_286>4,                                _if_conditional275) {
                                    err_msg(info,"invalid utf-8 character. MB_LEN_MAX");
                                    info->err_num++;
                                }
                                else {
                                    memcpy(str_287,info->p,size_286);
                                    str_287[size_286]=0;
                                    if(_if_conditional276=mbtowc(&c_279,str_287,size_286)<0,                                    _if_conditional276) {
                                        perror("mbtowc");
                                        err_msg(info,"invalid utf-8 character. mbtowc");
                                        info->err_num++;
                                        c_279=0;
                                    }
                                    info->p+=size_286;
                                }
                            }
                            else {
                                c_279=*info->p;
                                info->p++;
                            }
                        }
                        if(_if_conditional277=*info->p!=39,                        _if_conditional277) {
                            err_msg(info,"close \' to make character value");
                            info->err_num++;
                        }
                        else {
                            info->p++;
                            skip_spaces_and_lf(info);
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1875);
                            _inf_obj_value7=come_increment_ref_count(((struct sWCharNode*)(right_value429=sWCharNode_initialize((struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(right_value428=(struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "06str.c", 1875)))),c_279,info))));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sWCharNode_finalize;
                            _inf_value7->clone=(void*)sWCharNode_clone;
                            _inf_value7->compile=(void*)sWCharNode_compile;
                            _inf_value7->sline=(void*)sWCharNode_sline;
                            _inf_value7->sname=(void*)sWCharNode_sname;
                            _inf_value7->terminated=(void*)sWCharNode_terminated;
                            _inf_value7->kind=(void*)sWCharNode_kind;
                            __result172__ = __result_obj__ = ((struct sNode*)(right_value432=_inf_value7));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value428);
                            if(right_value428 && right_value428 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,right_value428, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value428;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value429);
                            if(right_value429 && right_value429 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,right_value429, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value429;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value432);
                            if(right_value432 && right_value432 != __result_obj__ && !__freed_obj__) { right_value432 = come_decrement_ref_count(right_value432, ((struct sNode*)right_value432)->finalize, ((struct sNode*)right_value432)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[2] = right_value432;
                            __freed_obj__ = 0;
                            return __result172__;
                        }
                    }
                    else {
                        if(_if_conditional283=*info->p==76&&*(info->p+1)==34,                        _if_conditional283) {
                            info->p+=2;
                            sline_289=info->sline;
                            value_290=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value434=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value433=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1884))))))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value433);
                            if(right_value433 && right_value433 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value433, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value433;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value434);
                            if(right_value434 && right_value434 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value434, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value434;
                            __freed_obj__ = 0;
                            while(_while_condtional25=1,                            _while_condtional25) {
                                if(_if_conditional284=*info->p==34,                                _if_conditional284) {
                                    info->p++;
                                    p_291=info->p;
                                    sline_292=info->sline;
                                    skip_spaces_and_lf(info);
                                    if(_if_conditional285=*info->p==34,                                    _if_conditional285) {
                                        info->p++;
                                    }
                                    else {
                                        info->p=p_291;
                                        info->sline=sline_292;
                                        break;
                                    }
                                }
                                else {
                                    if(_if_conditional286=*info->p==92,                                    _if_conditional286) {
                                        info->p++;
                                        if(_if_conditional287=xisdigit(*info->p),                                        _if_conditional287) {
                                            len_293=0;
                                            n_294=0;
                                            while(_while_condtional26=xisdigit(*info->p)&&len_293<3,                                            _while_condtional26) {
                                                n_294=n_294*8+*info->p-48;
                                                info->p++;
                                                len_293++;
                                            }
                                            buffer_append_char(value_290,n_294);
                                        }
                                        else {
                                            if(_if_conditional288=*info->p==120||*info->p==88,                                            _if_conditional288) {
                                                info->p++;
                                                char buf_295[128];
                                                memset(&buf_295, 0, sizeof(char)                                                *(128)                                                );
                                                strncpy(buf_295,"0x",128);
                                                while(_while_condtional27=*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70,                                                _while_condtional27) {
                                                    char buf2_296[2];
                                                    memset(&buf2_296, 0, sizeof(char)                                                    *(2)                                                    );
                                                    buf2_296[0]=*info->p;
                                                    buf2_296[1]=0;
                                                    info->p++;
                                                    strncat(buf_295,buf2_296,128);
                                                }
                                                n_298=strtoll(buf_295,((void*)0),0);
                                                buffer_append_char(value_290,(char)n_298);
                                            }
                                            else {
                                                switch (*info->p) {
                                                    case 48:
                                                    buffer_append_char(value_290,0);
                                                    info->p++;
                                                    break;
                                                    case 110:
                                                    buffer_append_char(value_290,10);
                                                    info->p++;
                                                    break;
                                                    case 116:
                                                    buffer_append_char(value_290,9);
                                                    info->p++;
                                                    break;
                                                    case 114:
                                                    buffer_append_char(value_290,13);
                                                    info->p++;
                                                    break;
                                                    case 118:
                                                    buffer_append_char(value_290,11);
                                                    info->p++;
                                                    break;
                                                    case 102:
                                                    buffer_append_char(value_290,12);
                                                    info->p++;
                                                    break;
                                                    case 97:
                                                    buffer_append_char(value_290,7);
                                                    info->p++;
                                                    break;
                                                    case 98:
                                                    buffer_append_char(value_290,8);
                                                    info->p++;
                                                    break;
                                                    case 92:
                                                    buffer_append_char(value_290,92);
                                                    info->p++;
                                                    break;
                                                    default:
                                                    buffer_append_char(value_290,*info->p);
                                                    info->p++;
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                    else {
                                        if(_if_conditional289=*info->p==0,                                        _if_conditional289) {
                                            sline2_299=info->sline;
                                            info->sline=sline_289;
                                            err_msg(info,"close \" to make c string value");
                                            exit(2);
                                        }
                                        else {
                                            if(_if_conditional290=*info->p==10,                                            _if_conditional290) {
                                                info->sline++;
                                            }
                                            buffer_append_char(value_290,*info->p);
                                            info->p++;
                                        }
                                    }
                                }
                            }
                            skip_spaces_and_lf(info);
                            len_300=value_290->len;
                            wstr_301=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value435=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_300+1)), "06str.c", 2007))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value435);
                            if(right_value435 && right_value435 != __result_obj__ && !__freed_obj__) { right_value435 = come_decrement_ref_count(right_value435, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value435;
                            __freed_obj__ = 0;
                            str_302=value_290->buf;
                            if(_if_conditional291=mbstowcs(wstr_301,str_302,len_300+1)<0,                            _if_conditional291) {
                                perror("mbstowcs");
                                exit(1);
                            }
                            wstr_301[len_300]=0;
                            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2018);
                            _inf_obj_value8=come_increment_ref_count(((struct sWStringNode*)(right_value437=sWStringNode_initialize((struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(right_value436=(struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "06str.c", 2018)))),(unsigned int*)come_increment_ref_count(wstr_301),sline_289,info))));
                            _inf_value8->_protocol_obj=_inf_obj_value8;
                            _inf_value8->finalize=(void*)sWStringNode_finalize;
                            _inf_value8->clone=(void*)sWStringNode_clone;
                            _inf_value8->compile=(void*)sWStringNode_compile;
                            _inf_value8->sline=(void*)sWStringNode_sline;
                            _inf_value8->sname=(void*)sWStringNode_sname;
                            _inf_value8->terminated=(void*)sWStringNode_terminated;
                            _inf_value8->kind=(void*)sWStringNode_kind;
                            __result175__ = __result_obj__ = ((struct sNode*)(right_value441=_inf_value8));
                            if(value_290 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_290, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(wstr_301 && !__freed_obj__) { wstr_301 = come_decrement_ref_count(wstr_301, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value436);
                            if(right_value436 && right_value436 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,right_value436, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[3] = right_value436;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value437);
                            if(right_value437 && right_value437 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,right_value437, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[4] = right_value437;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value441);
                            if(right_value441 && right_value441 != __result_obj__ && !__freed_obj__) { right_value441 = come_decrement_ref_count(right_value441, ((struct sNode*)right_value441)->finalize, ((struct sNode*)right_value441)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[5] = right_value441;
                            __freed_obj__ = 0;
                            return __result175__;
                            if(value_290 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_290, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(wstr_301 && !__freed_obj__) { wstr_301 = come_decrement_ref_count(wstr_301, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        else {
                            if(_if_conditional298=(*info->p==115||*info->p==83)&&*(info->p+1)==34,                            _if_conditional298) {
                                info->p+=2;
                                sline_304=info->sline;
                                exps_305=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value443=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value442=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2026))))))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value442);
                                if(right_value442 && right_value442 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value442, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value442;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value443);
                                if(right_value443 && right_value443 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value443, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value443;
                                __freed_obj__ = 0;
                                value_306=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value445=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value444=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2027))))))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value444);
                                if(right_value444 && right_value444 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value444, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value444;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value445);
                                if(right_value445 && right_value445 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value445, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[3] = right_value445;
                                __freed_obj__ = 0;
                                while(_while_condtional28=1,                                _while_condtional28) {
                                    if(_if_conditional299=*info->p==34,                                    _if_conditional299) {
                                        info->p++;
                                        p_307=info->p;
                                        sline_308=info->sline;
                                        skip_spaces_and_lf(info);
                                        if(_if_conditional300=*info->p==34,                                        _if_conditional300) {
                                            info->p++;
                                        }
                                        else {
                                            info->p=p_307;
                                            info->sline=sline_308;
                                            break;
                                        }
                                    }
                                    else {
                                        if(_if_conditional301=*info->p==37,                                        _if_conditional301) {
                                            buffer_append_char(value_306,37);
                                            buffer_append_char(value_306,37);
                                            info->p++;
                                        }
                                        else {
                                            if(_if_conditional302=*info->p==36,                                            _if_conditional302) {
                                                info->p++;
                                                exp_309=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value446=expression_v13(info))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value446);
                                                if(right_value446 && right_value446 != __result_obj__ && !__freed_obj__) { right_value446 = come_decrement_ref_count(right_value446, ((struct sNode*)right_value446)->finalize, ((struct sNode*)right_value446)->_protocol_obj, 1, 0, 0); } 
                                                __right_value_freed_obj[0] = right_value446;
                                                __freed_obj__ = 0;
                                                list$1sNodeph_add(exps_305,(struct sNode*)come_increment_ref_count(exp_309));
                                                buffer_append_str(value_306,"%s");
                                                p_310=info->p-1;
                                                while(_while_condtional29=*p_310==32||*p_310==9,                                                _while_condtional29) {
                                                    p_310--;
                                                }
                                                info->p=p_310+1;
                                                if(exp_309 && !__freed_obj__) { exp_309 = come_decrement_ref_count(exp_309, ((struct sNode*)exp_309)->finalize, ((struct sNode*)exp_309)->_protocol_obj, 0, 0, 0); } 
                                            }
                                            else {
                                                if(_if_conditional303=*info->p==92,                                                _if_conditional303) {
                                                    buffer_append_char(value_306,92);
                                                    info->p++;
                                                    if(_if_conditional304=xisdigit(*info->p),                                                    _if_conditional304) {
                                                        len_311=0;
                                                        while(_while_condtional30=xisdigit(*info->p)&&len_311<3,                                                        _while_condtional30) {
                                                            buffer_append_char(value_306,*info->p);
                                                            info->p++;
                                                            len_311++;
                                                        }
                                                    }
                                                    else {
                                                        if(_if_conditional305=*info->p==120||*info->p==88,                                                        _if_conditional305) {
                                                            buffer_append_char(value_306,*info->p);
                                                            info->p++;
                                                            while(_while_condtional31=*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70,                                                            _while_condtional31) {
                                                                buffer_append_char(value_306,*info->p);
                                                                info->p++;
                                                            }
                                                        }
                                                        else {
                                                            if(_if_conditional306=*info->p==123,                                                            _if_conditional306) {
                                                                info->p++;
                                                                exp_312=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value447=expression_v13(info))));
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value447);
                                                                if(right_value447 && right_value447 != __result_obj__ && !__freed_obj__) { right_value447 = come_decrement_ref_count(right_value447, ((struct sNode*)right_value447)->finalize, ((struct sNode*)right_value447)->_protocol_obj, 1, 0, 0); } 
                                                                __right_value_freed_obj[0] = right_value447;
                                                                __freed_obj__ = 0;
                                                                list$1sNodeph_add(exps_305,(struct sNode*)come_increment_ref_count(exp_312));
                                                                if(_if_conditional307=*info->p==125,                                                                _if_conditional307) {
                                                                    info->p++;
                                                                }
                                                                buffer_append_str(value_306,"%s");
                                                                if(exp_312 && !__freed_obj__) { exp_312 = come_decrement_ref_count(exp_312, ((struct sNode*)exp_312)->finalize, ((struct sNode*)exp_312)->_protocol_obj, 0, 0, 0); } 
                                                            }
                                                            else {
                                                                switch (*info->p) {
                                                                    case 48:
                                                                    buffer_append_char(value_306,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 110:
                                                                    buffer_append_char(value_306,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 116:
                                                                    buffer_append_char(value_306,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 114:
                                                                    buffer_append_char(value_306,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 118:
                                                                    buffer_append_char(value_306,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 102:
                                                                    buffer_append_char(value_306,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 97:
                                                                    buffer_append_char(value_306,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 98:
                                                                    buffer_append_char(value_306,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 92:
                                                                    buffer_append_char(value_306,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    default:
                                                                    buffer_append_char(value_306,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    if(_if_conditional308=*info->p==0,                                                    _if_conditional308) {
                                                        sline2_313=info->sline;
                                                        info->sline=sline_304;
                                                        err_msg(info,"close \" to make embbeded string value");
                                                        exit(2);
                                                    }
                                                    else {
                                                        if(_if_conditional309=*info->p==10,                                                        _if_conditional309) {
                                                            info->sline++;
                                                        }
                                                        buffer_append_char(value_306,*info->p);
                                                        info->p++;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                skip_spaces_and_lf(info);
                                _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2172);
                                _inf_obj_value9=come_increment_ref_count(((struct sSStringNode*)(right_value450=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(right_value448=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 2172)))),(char*)come_increment_ref_count(((char*)(right_value449=buffer_to_string(value_306)))),(struct list$1sNodeph*)come_increment_ref_count(exps_305),sline_304,info))));
                                _inf_value9->_protocol_obj=_inf_obj_value9;
                                _inf_value9->finalize=(void*)sSStringNode_finalize;
                                _inf_value9->clone=(void*)sSStringNode_clone;
                                _inf_value9->compile=(void*)sSStringNode_compile;
                                _inf_value9->sline=(void*)sSStringNode_sline;
                                _inf_value9->sname=(void*)sSStringNode_sname;
                                _inf_value9->terminated=(void*)sSStringNode_terminated;
                                _inf_value9->kind=(void*)sSStringNode_kind;
                                __result178__ = __result_obj__ = ((struct sNode*)(right_value455=_inf_value9));
                                if(exps_305 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,exps_305, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(value_306 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_306, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value448);
                                if(right_value448 && right_value448 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,right_value448, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[4] = right_value448;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value449);
                                if(right_value449 && right_value449 != __result_obj__ && !__freed_obj__) { right_value449 = come_decrement_ref_count(right_value449, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[5] = right_value449;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value450);
                                if(right_value450 && right_value450 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,right_value450, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[6] = right_value450;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value455);
                                if(right_value455 && right_value455 != __result_obj__ && !__freed_obj__) { right_value455 = come_decrement_ref_count(right_value455, ((struct sNode*)right_value455)->finalize, ((struct sNode*)right_value455)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[7] = right_value455;
                                __freed_obj__ = 0;
                                return __result178__;
                                if(exps_305 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,exps_305, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(value_306 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_306, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            else {
                                if(_if_conditional318=*info->p==91,                                _if_conditional318) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                    p_315=info->p;
                                    no_comma_316=info->no_comma;
                                    info->no_comma=(_Bool)1;
                                    node_317=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value456=expression_v13(info))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value456);
                                    if(right_value456 && right_value456 != __result_obj__ && !__freed_obj__) { right_value456 = come_decrement_ref_count(right_value456, ((struct sNode*)right_value456)->finalize, ((struct sNode*)right_value456)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value456;
                                    __freed_obj__ = 0;
                                    info->no_comma=no_comma_316;
                                    p2_318=info->p;
                                    first_element_source_319=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value458=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value457=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2189))))))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value457);
                                    if(right_value457 && right_value457 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value457, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value457;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value458);
                                    if(right_value458 && right_value458 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value458, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[2] = right_value458;
                                    __freed_obj__ = 0;
                                    buffer_append(first_element_source_319,p_315,p2_318-p_315);
                                    buffer_append_char(first_element_source_319,0);
                                    list_elements_320=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value460=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value459=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2194))))))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value459);
                                    if(right_value459 && right_value459 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value459, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[3] = right_value459;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value460);
                                    if(right_value460 && right_value460 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value460, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[4] = right_value460;
                                    __freed_obj__ = 0;
                                    map_keys_321=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value462=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value461=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2196))))))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value461);
                                    if(right_value461 && right_value461 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value461, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[5] = right_value461;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value462);
                                    if(right_value462 && right_value462 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value462, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[6] = right_value462;
                                    __freed_obj__ = 0;
                                    map_elements_322=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value464=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value463=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2197))))))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value463);
                                    if(right_value463 && right_value463 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value463, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[7] = right_value463;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value464);
                                    if(right_value464 && right_value464 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value464, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[8] = right_value464;
                                    __freed_obj__ = 0;
                                    if(_if_conditional319=*info->p==58,                                    _if_conditional319) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                        list$1sNodeph_push_back(map_keys_321,(struct sNode*)come_increment_ref_count(node_317));
                                        no_comma_323=info->no_comma;
                                        info->no_comma=(_Bool)1;
                                        node2_324=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value465=expression_v13(info))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value465);
                                        if(right_value465 && right_value465 != __result_obj__ && !__freed_obj__) { right_value465 = come_decrement_ref_count(right_value465, ((struct sNode*)right_value465)->finalize, ((struct sNode*)right_value465)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value465;
                                        __freed_obj__ = 0;
                                        info->no_comma=no_comma_323;
                                        list$1sNodeph_push_back(map_elements_322,(struct sNode*)come_increment_ref_count(node2_324));
                                        if(_if_conditional320=*info->p==93,                                        _if_conditional320) {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2219);
                                            _inf_obj_value10=come_increment_ref_count(((struct sMapNode*)(right_value467=sMapNode_initialize((struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value466=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2219)))),(struct list$1sNodeph*)come_increment_ref_count(map_keys_321),(struct list$1sNodeph*)come_increment_ref_count(map_elements_322),info))));
                                            _inf_value10->_protocol_obj=_inf_obj_value10;
                                            _inf_value10->finalize=(void*)sMapNode_finalize;
                                            _inf_value10->clone=(void*)sMapNode_clone;
                                            _inf_value10->compile=(void*)sMapNode_compile;
                                            _inf_value10->sline=(void*)sMapNode_sline;
                                            _inf_value10->sname=(void*)sMapNode_sname;
                                            _inf_value10->terminated=(void*)sMapNode_terminated;
                                            _inf_value10->kind=(void*)sMapNode_kind;
                                            __result181__ = __result_obj__ = ((struct sNode*)(right_value472=_inf_value10));
                                            if(node2_324 && !__freed_obj__) { node2_324 = come_decrement_ref_count(node2_324, ((struct sNode*)node2_324)->finalize, ((struct sNode*)node2_324)->_protocol_obj, 0, 0, 0); } 
                                            if(node_317 && !__freed_obj__) { node_317 = come_decrement_ref_count(node_317, ((struct sNode*)node_317)->finalize, ((struct sNode*)node_317)->_protocol_obj, 0, 0, 0); } 
                                            if(first_element_source_319 && !__freed_obj__) { come_call_finalizer(buffer_finalize,first_element_source_319, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(list_elements_320 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,list_elements_320, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(map_keys_321 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_keys_321, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(map_elements_322 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_elements_322, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value466);
                                            if(right_value466 && right_value466 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,right_value466, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value466;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value467);
                                            if(right_value467 && right_value467 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,right_value467, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[1] = right_value467;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value472);
                                            if(right_value472 && right_value472 != __result_obj__ && !__freed_obj__) { right_value472 = come_decrement_ref_count(right_value472, ((struct sNode*)right_value472)->finalize, ((struct sNode*)right_value472)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[2] = right_value472;
                                            __freed_obj__ = 0;
                                            return __result181__;
                                        }
                                        else {
                                            optional$2intbool_value(((struct optional$2intbool*)(right_value473=expected_next_character(44,info))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value473);
                                            if(right_value473 && right_value473 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value473, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value473;
                                            __freed_obj__ = 0;
                                            while(_while_condtional32=(_Bool)1,                                            _while_condtional32) {
                                                no_comma_327=info->no_comma;
                                                info->no_comma=(_Bool)1;
                                                node2_328=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value474=expression_v13(info))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value474);
                                                if(right_value474 && right_value474 != __result_obj__ && !__freed_obj__) { right_value474 = come_decrement_ref_count(right_value474, ((struct sNode*)right_value474)->finalize, ((struct sNode*)right_value474)->_protocol_obj, 1, 0, 0); } 
                                                __right_value_freed_obj[0] = right_value474;
                                                __freed_obj__ = 0;
                                                info->no_comma=no_comma_327;
                                                list$1sNodeph_push_back(map_keys_321,(struct sNode*)come_increment_ref_count(node2_328));
                                                optional$2intbool_value(((struct optional$2intbool*)(right_value475=expected_next_character(58,info))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value475);
                                                if(right_value475 && right_value475 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value475, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[1] = right_value475;
                                                __freed_obj__ = 0;
                                                no_comma_327=info->no_comma;
                                                info->no_comma=(_Bool)1;
                                                node3_329=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value476=expression_v13(info))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value476);
                                                if(right_value476 && right_value476 != __result_obj__ && !__freed_obj__) { right_value476 = come_decrement_ref_count(right_value476, ((struct sNode*)right_value476)->finalize, ((struct sNode*)right_value476)->_protocol_obj, 1, 0, 0); } 
                                                __right_value_freed_obj[2] = right_value476;
                                                __freed_obj__ = 0;
                                                info->no_comma=no_comma_327;
                                                list$1sNodeph_push_back(map_elements_322,(struct sNode*)come_increment_ref_count(node3_329));
                                                if(_if_conditional330=*info->p==0,                                                _if_conditional330) {
                                                    err_msg(info,"invalid source end");
                                                    exit(2);
                                                }
                                                else {
                                                    if(_if_conditional331=*info->p==44,                                                    _if_conditional331) {
                                                        info->p++;
                                                        skip_spaces_and_lf(info);
                                                    }
                                                    else {
                                                        if(_if_conditional332=*info->p==93,                                                        _if_conditional332) {
                                                            info->p++;
                                                            skip_spaces_and_lf(info);
                                                            if(node2_328 && !__freed_obj__) { node2_328 = come_decrement_ref_count(node2_328, ((struct sNode*)node2_328)->finalize, ((struct sNode*)node2_328)->_protocol_obj, 0, 0, 0); } 
                                                            if(node3_329 && !__freed_obj__) { node3_329 = come_decrement_ref_count(node3_329, ((struct sNode*)node3_329)->finalize, ((struct sNode*)node3_329)->_protocol_obj, 0, 0, 0); } 
                                                            break;
                                                        }
                                                        else {
                                                            err_msg(info,"invalid character(%c)(3)",*info->p);
                                                            exit(2);
                                                        }
                                                    }
                                                }
                                                if(node2_328 && !__freed_obj__) { node2_328 = come_decrement_ref_count(node2_328, ((struct sNode*)node2_328)->finalize, ((struct sNode*)node2_328)->_protocol_obj, 0, 0, 0); } 
                                                if(node3_329 && !__freed_obj__) { node3_329 = come_decrement_ref_count(node3_329, ((struct sNode*)node3_329)->finalize, ((struct sNode*)node3_329)->_protocol_obj, 0, 0, 0); } 
                                            }
                                            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2264);
                                            _inf_obj_value11=come_increment_ref_count(((struct sMapNode*)(right_value478=sMapNode_initialize((struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value477=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2264)))),(struct list$1sNodeph*)come_increment_ref_count(map_keys_321),(struct list$1sNodeph*)come_increment_ref_count(map_elements_322),info))));
                                            _inf_value11->_protocol_obj=_inf_obj_value11;
                                            _inf_value11->finalize=(void*)sMapNode_finalize;
                                            _inf_value11->clone=(void*)sMapNode_clone;
                                            _inf_value11->compile=(void*)sMapNode_compile;
                                            _inf_value11->sline=(void*)sMapNode_sline;
                                            _inf_value11->sname=(void*)sMapNode_sname;
                                            _inf_value11->terminated=(void*)sMapNode_terminated;
                                            _inf_value11->kind=(void*)sMapNode_kind;
                                            __result186__ = __result_obj__ = ((struct sNode*)(right_value483=_inf_value11));
                                            if(node2_324 && !__freed_obj__) { node2_324 = come_decrement_ref_count(node2_324, ((struct sNode*)node2_324)->finalize, ((struct sNode*)node2_324)->_protocol_obj, 0, 0, 0); } 
                                            if(node_317 && !__freed_obj__) { node_317 = come_decrement_ref_count(node_317, ((struct sNode*)node_317)->finalize, ((struct sNode*)node_317)->_protocol_obj, 0, 0, 0); } 
                                            if(first_element_source_319 && !__freed_obj__) { come_call_finalizer(buffer_finalize,first_element_source_319, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(list_elements_320 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,list_elements_320, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(map_keys_321 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_keys_321, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(map_elements_322 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_elements_322, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value477);
                                            if(right_value477 && right_value477 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,right_value477, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[1] = right_value477;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value478);
                                            if(right_value478 && right_value478 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,right_value478, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[2] = right_value478;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value483);
                                            if(right_value483 && right_value483 != __result_obj__ && !__freed_obj__) { right_value483 = come_decrement_ref_count(right_value483, ((struct sNode*)right_value483)->finalize, ((struct sNode*)right_value483)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[3] = right_value483;
                                            __freed_obj__ = 0;
                                            return __result186__;
                                        }
                                        if(node2_324 && !__freed_obj__) { node2_324 = come_decrement_ref_count(node2_324, ((struct sNode*)node2_324)->finalize, ((struct sNode*)node2_324)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    else {
                                        if(_if_conditional341=*info->p==93,                                        _if_conditional341) {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                            list$1sNodeph_push_back(list_elements_320,(struct sNode*)come_increment_ref_count(node_317));
                                        }
                                        else {
                                            if(_if_conditional342=*info->p==44,                                            _if_conditional342) {
                                                info->p++;
                                                skip_spaces_and_lf(info);
                                                list$1sNodeph_push_back(list_elements_320,(struct sNode*)come_increment_ref_count(node_317));
                                                while(_while_condtional33=(_Bool)1,                                                _while_condtional33) {
                                                    no_comma_331=info->no_comma;
                                                    info->no_comma=(_Bool)1;
                                                    node2_332=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value484=expression_v13(info))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value484);
                                                    if(right_value484 && right_value484 != __result_obj__ && !__freed_obj__) { right_value484 = come_decrement_ref_count(right_value484, ((struct sNode*)right_value484)->finalize, ((struct sNode*)right_value484)->_protocol_obj, 1, 0, 0); } 
                                                    __right_value_freed_obj[0] = right_value484;
                                                    __freed_obj__ = 0;
                                                    info->no_comma=no_comma_331;
                                                    list$1sNodeph_push_back(list_elements_320,(struct sNode*)come_increment_ref_count(node2_332));
                                                    if(_if_conditional343=*info->p==0,                                                    _if_conditional343) {
                                                        err_msg(info,"invalid source end");
                                                        exit(2);
                                                    }
                                                    else {
                                                        if(_if_conditional344=*info->p==44,                                                        _if_conditional344) {
                                                            info->p++;
                                                            skip_spaces_and_lf(info);
                                                        }
                                                        else {
                                                            if(_if_conditional345=*info->p==93,                                                            _if_conditional345) {
                                                                info->p++;
                                                                skip_spaces_and_lf(info);
                                                                if(node2_332 && !__freed_obj__) { node2_332 = come_decrement_ref_count(node2_332, ((struct sNode*)node2_332)->finalize, ((struct sNode*)node2_332)->_protocol_obj, 0, 0, 0); } 
                                                                break;
                                                            }
                                                            else {
                                                                err_msg(info,"invalid character(%c)(4)",*info->p);
                                                                exit(2);
                                                            }
                                                        }
                                                    }
                                                    if(node2_332 && !__freed_obj__) { node2_332 = come_decrement_ref_count(node2_332, ((struct sNode*)node2_332)->finalize, ((struct sNode*)node2_332)->_protocol_obj, 0, 0, 0); } 
                                                }
                                            }
                                            else {
                                                err_msg(info,"invalid character(%c)(5)",*info->p);
                                                exit(2);
                                            }
                                        }
                                    }
                                    if(_if_conditional346=list$1sNodeph_length(list_elements_320)>0,                                    _if_conditional346) {
                                        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2315);
                                        _inf_obj_value12=come_increment_ref_count(((struct sListNode*)(right_value486=sListNode_initialize((struct sListNode*)come_increment_ref_count(((struct sListNode*)(right_value485=(struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "06str.c", 2315)))),(struct list$1sNodeph*)come_increment_ref_count(list_elements_320),info))));
                                        _inf_value12->_protocol_obj=_inf_obj_value12;
                                        _inf_value12->finalize=(void*)sListNode_finalize;
                                        _inf_value12->clone=(void*)sListNode_clone;
                                        _inf_value12->compile=(void*)sListNode_compile;
                                        _inf_value12->sline=(void*)sListNode_sline;
                                        _inf_value12->sname=(void*)sListNode_sname;
                                        _inf_value12->terminated=(void*)sListNode_terminated;
                                        _inf_value12->kind=(void*)sListNode_kind;
                                        __result189__ = __result_obj__ = ((struct sNode*)(right_value490=_inf_value12));
                                        if(node_317 && !__freed_obj__) { node_317 = come_decrement_ref_count(node_317, ((struct sNode*)node_317)->finalize, ((struct sNode*)node_317)->_protocol_obj, 0, 0, 0); } 
                                        if(first_element_source_319 && !__freed_obj__) { come_call_finalizer(buffer_finalize,first_element_source_319, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(list_elements_320 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,list_elements_320, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(map_keys_321 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_keys_321, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(map_elements_322 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_elements_322, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value485);
                                        if(right_value485 && right_value485 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sListNode_finalize,right_value485, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value485;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value486);
                                        if(right_value486 && right_value486 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sListNode_finalize,right_value486, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[1] = right_value486;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value490);
                                        if(right_value490 && right_value490 != __result_obj__ && !__freed_obj__) { right_value490 = come_decrement_ref_count(right_value490, ((struct sNode*)right_value490)->finalize, ((struct sNode*)right_value490)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[2] = right_value490;
                                        __freed_obj__ = 0;
                                        return __result189__;
                                    }
                                    else {
                                    }
                                    if(node_317 && !__freed_obj__) { node_317 = come_decrement_ref_count(node_317, ((struct sNode*)node_317)->finalize, ((struct sNode*)node_317)->_protocol_obj, 0, 0, 0); } 
                                    if(first_element_source_319 && !__freed_obj__) { come_call_finalizer(buffer_finalize,first_element_source_319, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(list_elements_320 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,list_elements_320, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(map_keys_321 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_keys_321, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(map_elements_322 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_elements_322, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                else {
                                    ((struct sNode*)(right_value491=expression_node_v1(info)));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value491);
                                    if(right_value491 && right_value491 != __result_obj__ && !__freed_obj__) { right_value491 = come_decrement_ref_count(right_value491, ((struct sNode*)right_value491)->finalize, ((struct sNode*)right_value491)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value491;
                                    __freed_obj__ = 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    __result190__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result190__;
}

static void sStrNode_finalize(struct sStrNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional240;
_Bool _if_conditional241;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional240=self!=((void*)0)&&self->value!=((void*)0),                _if_conditional240) {
                    if(self->value && !__freed_obj__) { self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(_if_conditional241=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional241) {
                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static struct sStrNode* sStrNode_clone(struct sStrNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional242;
struct sStrNode* __result161__;
void* right_value410;
struct sStrNode* result_266;
_Bool _if_conditional243;
void* right_value411;
char* __dec_obj135;
_Bool _if_conditional244;
_Bool _if_conditional245;
void* right_value412;
char* __dec_obj136;
struct sStrNode* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value410, 0, sizeof(void*));
memset(&result_266, 0, sizeof(struct sStrNode*));
memset(&right_value411, 0, sizeof(void*));
memset(&right_value412, 0, sizeof(void*));
                if(_if_conditional242=self==(void*)0,                _if_conditional242) {
                    __result161__ = __result_obj__ = (void*)0;
                    return __result161__;
                }
                result_266=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(right_value410=(struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "sStrNode_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value410);
                if(right_value410 && right_value410 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,right_value410, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value410;
                __freed_obj__ = 0;
                if(_if_conditional243=self!=((void*)0)&&self->value!=((void*)0),                _if_conditional243) {
                    __dec_obj135=result_266->value;
                    result_266->value=(char*)come_increment_ref_count(((char*)(right_value411=string_clone(self->value))));
                    if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value411);
                    if(right_value411 && right_value411 != __result_obj__ && !__freed_obj__) { right_value411 = come_decrement_ref_count(right_value411, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value411;
                    __freed_obj__ = 0;
                }
                if(_if_conditional244=self!=((void*)0),                _if_conditional244) {
                    result_266->sline=self->sline;
                }
                if(_if_conditional245=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional245) {
                    __dec_obj136=result_266->sname;
                    result_266->sname=(char*)come_increment_ref_count(((char*)(right_value412=string_clone(self->sname))));
                    if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value412);
                    if(right_value412 && right_value412 != __result_obj__ && !__freed_obj__) { right_value412 = come_decrement_ref_count(right_value412, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value412;
                    __freed_obj__ = 0;
                }
                __result162__ = __result_obj__ = result_266;
                if(result_266 && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,result_266, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result162__;
                if(result_266 && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,result_266, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sRegexNode_finalize(struct sRegexNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional252;
_Bool _if_conditional253;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional252=self!=((void*)0)&&self->str!=((void*)0),                    _if_conditional252) {
                        if(self->str && !__freed_obj__) { self->str = come_decrement_ref_count(self->str, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    if(_if_conditional253=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional253) {
                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct sRegexNode* sRegexNode_clone(struct sRegexNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional254;
struct sRegexNode* __result164__;
void* right_value419;
struct sRegexNode* result_271;
_Bool _if_conditional255;
void* right_value420;
char* __dec_obj137;
_Bool _if_conditional256;
_Bool _if_conditional257;
_Bool _if_conditional258;
_Bool _if_conditional259;
void* right_value421;
char* __dec_obj138;
struct sRegexNode* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value419, 0, sizeof(void*));
memset(&result_271, 0, sizeof(struct sRegexNode*));
memset(&right_value420, 0, sizeof(void*));
memset(&right_value421, 0, sizeof(void*));
                    if(_if_conditional254=self==(void*)0,                    _if_conditional254) {
                        __result164__ = __result_obj__ = (void*)0;
                        return __result164__;
                    }
                    result_271=(struct sRegexNode*)come_increment_ref_count(((struct sRegexNode*)(right_value419=(struct sRegexNode*)come_calloc(1, sizeof(struct sRegexNode)*(1), "sRegexNode_clone", 3))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value419);
                    if(right_value419 && right_value419 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,right_value419, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value419;
                    __freed_obj__ = 0;
                    if(_if_conditional255=self!=((void*)0)&&self->str!=((void*)0),                    _if_conditional255) {
                        __dec_obj137=result_271->str;
                        result_271->str=(char*)come_increment_ref_count(((char*)(right_value420=string_clone(self->str))));
                        if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value420);
                        if(right_value420 && right_value420 != __result_obj__ && !__freed_obj__) { right_value420 = come_decrement_ref_count(right_value420, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value420;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional256=self!=((void*)0),                    _if_conditional256) {
                        result_271->global=self->global;
                    }
                    if(_if_conditional257=self!=((void*)0),                    _if_conditional257) {
                        result_271->ignore_case=self->ignore_case;
                    }
                    if(_if_conditional258=self!=((void*)0),                    _if_conditional258) {
                        result_271->sline=self->sline;
                    }
                    if(_if_conditional259=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional259) {
                        __dec_obj138=result_271->sname;
                        result_271->sname=(char*)come_increment_ref_count(((char*)(right_value421=string_clone(self->sname))));
                        if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value421);
                        if(right_value421 && right_value421 != __result_obj__ && !__freed_obj__) { right_value421 = come_decrement_ref_count(right_value421, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value421;
                        __freed_obj__ = 0;
                    }
                    __result165__ = __result_obj__ = result_271;
                    if(result_271 && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,result_271, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result165__;
                    if(result_271 && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,result_271, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sCharNode_finalize(struct sCharNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional265;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional265=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional265) {
                                if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                            }
}

static struct sCharNode* sCharNode_clone(struct sCharNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional266;
struct sCharNode* __result167__;
void* right_value425;
struct sCharNode* result_278;
_Bool _if_conditional267;
_Bool _if_conditional268;
_Bool _if_conditional269;
void* right_value426;
char* __dec_obj139;
struct sCharNode* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value425, 0, sizeof(void*));
memset(&result_278, 0, sizeof(struct sCharNode*));
memset(&right_value426, 0, sizeof(void*));
                            if(_if_conditional266=self==(void*)0,                            _if_conditional266) {
                                __result167__ = __result_obj__ = (void*)0;
                                return __result167__;
                            }
                            result_278=(struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(right_value425=(struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "sCharNode_clone", 3))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value425);
                            if(right_value425 && right_value425 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,right_value425, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value425;
                            __freed_obj__ = 0;
                            if(_if_conditional267=self!=((void*)0),                            _if_conditional267) {
                                result_278->value=self->value;
                            }
                            if(_if_conditional268=self!=((void*)0),                            _if_conditional268) {
                                result_278->sline=self->sline;
                            }
                            if(_if_conditional269=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional269) {
                                __dec_obj139=result_278->sname;
                                result_278->sname=(char*)come_increment_ref_count(((char*)(right_value426=string_clone(self->sname))));
                                if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value426);
                                if(right_value426 && right_value426 != __result_obj__ && !__freed_obj__) { right_value426 = come_decrement_ref_count(right_value426, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value426;
                                __freed_obj__ = 0;
                            }
                            __result168__ = __result_obj__ = result_278;
                            if(result_278 && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,result_278, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result168__;
                            if(result_278 && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,result_278, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sWCharNode_finalize(struct sWCharNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional278;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional278=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional278) {
                                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional279;
struct sWCharNode* __result170__;
void* right_value430;
struct sWCharNode* result_288;
_Bool _if_conditional280;
_Bool _if_conditional281;
_Bool _if_conditional282;
void* right_value431;
char* __dec_obj140;
struct sWCharNode* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value430, 0, sizeof(void*));
memset(&result_288, 0, sizeof(struct sWCharNode*));
memset(&right_value431, 0, sizeof(void*));
                                if(_if_conditional279=self==(void*)0,                                _if_conditional279) {
                                    __result170__ = __result_obj__ = (void*)0;
                                    return __result170__;
                                }
                                result_288=(struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(right_value430=(struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "sWCharNode_clone", 3))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value430);
                                if(right_value430 && right_value430 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,right_value430, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value430;
                                __freed_obj__ = 0;
                                if(_if_conditional280=self!=((void*)0),                                _if_conditional280) {
                                    result_288->value=self->value;
                                }
                                if(_if_conditional281=self!=((void*)0),                                _if_conditional281) {
                                    result_288->sline=self->sline;
                                }
                                if(_if_conditional282=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional282) {
                                    __dec_obj140=result_288->sname;
                                    result_288->sname=(char*)come_increment_ref_count(((char*)(right_value431=string_clone(self->sname))));
                                    if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value431);
                                    if(right_value431 && right_value431 != __result_obj__ && !__freed_obj__) { right_value431 = come_decrement_ref_count(right_value431, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value431;
                                    __freed_obj__ = 0;
                                }
                                __result171__ = __result_obj__ = result_288;
                                if(result_288 && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,result_288, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result171__;
                                if(result_288 && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,result_288, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sWStringNode_finalize(struct sWStringNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional292;
_Bool _if_conditional293;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional292=self!=((void*)0)&&self->value!=((void*)0),                                _if_conditional292) {
                                    if(self->value && !__freed_obj__) { self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(_if_conditional293=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional293) {
                                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional294;
struct sWStringNode* __result173__;
void* right_value438;
struct sWStringNode* result_303;
_Bool _if_conditional295;
void* right_value439;
unsigned int* __dec_obj141;
_Bool _if_conditional296;
_Bool _if_conditional297;
void* right_value440;
char* __dec_obj142;
struct sWStringNode* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value438, 0, sizeof(void*));
memset(&result_303, 0, sizeof(struct sWStringNode*));
memset(&right_value439, 0, sizeof(void*));
memset(&right_value440, 0, sizeof(void*));
                                if(_if_conditional294=self==(void*)0,                                _if_conditional294) {
                                    __result173__ = __result_obj__ = (void*)0;
                                    return __result173__;
                                }
                                result_303=(struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(right_value438=(struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "sWStringNode_clone", 3))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value438);
                                if(right_value438 && right_value438 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,right_value438, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value438;
                                __freed_obj__ = 0;
                                if(_if_conditional295=self!=((void*)0)&&self->value!=((void*)0),                                _if_conditional295) {
                                    __dec_obj141=result_303->value;
                                    result_303->value=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value439=(unsigned int*)come_memdup(self->value, "sWStringNode_clone", 4))));
                                    if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value439);
                                    if(right_value439 && right_value439 != __result_obj__ && !__freed_obj__) { right_value439 = come_decrement_ref_count(right_value439, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value439;
                                    __freed_obj__ = 0;
                                }
                                if(_if_conditional296=self!=((void*)0),                                _if_conditional296) {
                                    result_303->sline=self->sline;
                                }
                                if(_if_conditional297=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional297) {
                                    __dec_obj142=result_303->sname;
                                    result_303->sname=(char*)come_increment_ref_count(((char*)(right_value440=string_clone(self->sname))));
                                    if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value440);
                                    if(right_value440 && right_value440 != __result_obj__ && !__freed_obj__) { right_value440 = come_decrement_ref_count(right_value440, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value440;
                                    __freed_obj__ = 0;
                                }
                                __result174__ = __result_obj__ = result_303;
                                if(result_303 && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,result_303, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result174__;
                                if(result_303 && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,result_303, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sSStringNode_finalize(struct sSStringNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional310;
_Bool _if_conditional311;
_Bool _if_conditional312;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional310=self!=((void*)0)&&self->value!=((void*)0),                                    _if_conditional310) {
                                        if(self->value && !__freed_obj__) { self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                    if(_if_conditional311=self!=((void*)0)&&self->exps!=((void*)0),                                    _if_conditional311) {
                                        if(self->exps && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->exps, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
                                    if(_if_conditional312=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional312) {
                                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    }
}

static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional313;
struct sSStringNode* __result176__;
void* right_value451;
struct sSStringNode* result_314;
_Bool _if_conditional314;
void* right_value452;
char* __dec_obj143;
_Bool _if_conditional315;
void* right_value453;
struct list$1sNodeph* __dec_obj144;
_Bool _if_conditional316;
_Bool _if_conditional317;
void* right_value454;
char* __dec_obj145;
struct sSStringNode* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value451, 0, sizeof(void*));
memset(&result_314, 0, sizeof(struct sSStringNode*));
memset(&right_value452, 0, sizeof(void*));
memset(&right_value453, 0, sizeof(void*));
memset(&right_value454, 0, sizeof(void*));
                                    if(_if_conditional313=self==(void*)0,                                    _if_conditional313) {
                                        __result176__ = __result_obj__ = (void*)0;
                                        return __result176__;
                                    }
                                    result_314=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(right_value451=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "sSStringNode_clone", 3))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value451);
                                    if(right_value451 && right_value451 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,right_value451, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value451;
                                    __freed_obj__ = 0;
                                    if(_if_conditional314=self!=((void*)0)&&self->value!=((void*)0),                                    _if_conditional314) {
                                        __dec_obj143=result_314->value;
                                        result_314->value=(char*)come_increment_ref_count(((char*)(right_value452=string_clone(self->value))));
                                        if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value452);
                                        if(right_value452 && right_value452 != __result_obj__ && !__freed_obj__) { right_value452 = come_decrement_ref_count(right_value452, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value452;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional315=self!=((void*)0)&&self->exps!=((void*)0),                                    _if_conditional315) {
                                        __dec_obj144=result_314->exps;
                                        result_314->exps=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value453=list$1sNodephp_clone(self->exps))));
                                        if(__dec_obj144) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj144, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value453);
                                        if(right_value453 && right_value453 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value453, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value453;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional316=self!=((void*)0),                                    _if_conditional316) {
                                        result_314->sline=self->sline;
                                    }
                                    if(_if_conditional317=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional317) {
                                        __dec_obj145=result_314->sname;
                                        result_314->sname=(char*)come_increment_ref_count(((char*)(right_value454=string_clone(self->sname))));
                                        if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value454);
                                        if(right_value454 && right_value454 != __result_obj__ && !__freed_obj__) { right_value454 = come_decrement_ref_count(right_value454, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value454;
                                        __freed_obj__ = 0;
                                    }
                                    __result177__ = __result_obj__ = result_314;
                                    if(result_314 && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,result_314, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    return __result177__;
                                    if(result_314 && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,result_314, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static int optional$2intbool_value(struct optional$2intbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional329;
int default_value_326;
int __result182__;
int __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_326, 0, sizeof(int));
                                                if(_if_conditional329=self==((void*)0),                                                _if_conditional329) {
                                                    memset(&default_value_326,0,sizeof(int));
                                                    __result182__ = default_value_326;
                                                    return __result182__;
                                                }
                                                else {
                                                    __result183__ = self->v1;
                                                    return __result183__;
                                                }
}

static void optional$2intboolp_finalize(struct optional$2intbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void sMapNode_finalize(struct sMapNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional333;
_Bool _if_conditional334;
_Bool _if_conditional335;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                if(_if_conditional333=self!=((void*)0)&&self->map_key_elements!=((void*)0),                                                _if_conditional333) {
                                                    if(self->map_key_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->map_key_elements, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                }
                                                if(_if_conditional334=self!=((void*)0)&&self->map_elements!=((void*)0),                                                _if_conditional334) {
                                                    if(self->map_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->map_elements, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                }
                                                if(_if_conditional335=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional335) {
                                                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                }
}

static struct sMapNode* sMapNode_clone(struct sMapNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional336;
struct sMapNode* __result184__;
void* right_value479;
struct sMapNode* result_330;
_Bool _if_conditional337;
void* right_value480;
struct list$1sNodeph* __dec_obj149;
_Bool _if_conditional338;
void* right_value481;
struct list$1sNodeph* __dec_obj150;
_Bool _if_conditional339;
_Bool _if_conditional340;
void* right_value482;
char* __dec_obj151;
struct sMapNode* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value479, 0, sizeof(void*));
memset(&result_330, 0, sizeof(struct sMapNode*));
memset(&right_value480, 0, sizeof(void*));
memset(&right_value481, 0, sizeof(void*));
memset(&right_value482, 0, sizeof(void*));
                                                if(_if_conditional336=self==(void*)0,                                                _if_conditional336) {
                                                    __result184__ = __result_obj__ = (void*)0;
                                                    return __result184__;
                                                }
                                                result_330=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value479=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "sMapNode_clone", 3))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value479);
                                                if(right_value479 && right_value479 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,right_value479, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value479;
                                                __freed_obj__ = 0;
                                                if(_if_conditional337=self!=((void*)0)&&self->map_key_elements!=((void*)0),                                                _if_conditional337) {
                                                    __dec_obj149=result_330->map_key_elements;
                                                    result_330->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value480=list$1sNodephp_clone(self->map_key_elements))));
                                                    if(__dec_obj149) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj149, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value480);
                                                    if(right_value480 && right_value480 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value480, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value480;
                                                    __freed_obj__ = 0;
                                                }
                                                if(_if_conditional338=self!=((void*)0)&&self->map_elements!=((void*)0),                                                _if_conditional338) {
                                                    __dec_obj150=result_330->map_elements;
                                                    result_330->map_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value481=list$1sNodephp_clone(self->map_elements))));
                                                    if(__dec_obj150) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj150, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value481);
                                                    if(right_value481 && right_value481 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value481, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value481;
                                                    __freed_obj__ = 0;
                                                }
                                                if(_if_conditional339=self!=((void*)0),                                                _if_conditional339) {
                                                    result_330->sline=self->sline;
                                                }
                                                if(_if_conditional340=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional340) {
                                                    __dec_obj151=result_330->sname;
                                                    result_330->sname=(char*)come_increment_ref_count(((char*)(right_value482=string_clone(self->sname))));
                                                    if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0,0,0); }
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value482);
                                                    if(right_value482 && right_value482 != __result_obj__ && !__freed_obj__) { right_value482 = come_decrement_ref_count(right_value482, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value482;
                                                    __freed_obj__ = 0;
                                                }
                                                __result185__ = __result_obj__ = result_330;
                                                if(result_330 && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,result_330, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                return __result185__;
                                                if(result_330 && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,result_330, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sListNode_finalize(struct sListNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional347;
_Bool _if_conditional348;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                            if(_if_conditional347=self!=((void*)0)&&self->list_elements!=((void*)0),                                            _if_conditional347) {
                                                if(self->list_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->list_elements, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            }
                                            if(_if_conditional348=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional348) {
                                                if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                            }
}

static struct sListNode* sListNode_clone(struct sListNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional349;
struct sListNode* __result187__;
void* right_value487;
struct sListNode* result_333;
_Bool _if_conditional350;
void* right_value488;
struct list$1sNodeph* __dec_obj152;
_Bool _if_conditional351;
_Bool _if_conditional352;
void* right_value489;
char* __dec_obj153;
struct sListNode* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value487, 0, sizeof(void*));
memset(&result_333, 0, sizeof(struct sListNode*));
memset(&right_value488, 0, sizeof(void*));
memset(&right_value489, 0, sizeof(void*));
                                            if(_if_conditional349=self==(void*)0,                                            _if_conditional349) {
                                                __result187__ = __result_obj__ = (void*)0;
                                                return __result187__;
                                            }
                                            result_333=(struct sListNode*)come_increment_ref_count(((struct sListNode*)(right_value487=(struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "sListNode_clone", 3))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value487);
                                            if(right_value487 && right_value487 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sListNode_finalize,right_value487, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value487;
                                            __freed_obj__ = 0;
                                            if(_if_conditional350=self!=((void*)0)&&self->list_elements!=((void*)0),                                            _if_conditional350) {
                                                __dec_obj152=result_333->list_elements;
                                                result_333->list_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value488=list$1sNodephp_clone(self->list_elements))));
                                                if(__dec_obj152) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj152, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value488);
                                                if(right_value488 && right_value488 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value488, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value488;
                                                __freed_obj__ = 0;
                                            }
                                            if(_if_conditional351=self!=((void*)0),                                            _if_conditional351) {
                                                result_333->sline=self->sline;
                                            }
                                            if(_if_conditional352=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional352) {
                                                __dec_obj153=result_333->sname;
                                                result_333->sname=(char*)come_increment_ref_count(((char*)(right_value489=string_clone(self->sname))));
                                                if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value489);
                                                if(right_value489 && right_value489 != __result_obj__ && !__freed_obj__) { right_value489 = come_decrement_ref_count(right_value489, (void*)0, (void*)0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value489;
                                                __freed_obj__ = 0;
                                            }
                                            __result188__ = __result_obj__ = result_333;
                                            if(result_333 && !__freed_obj__) { come_call_finalizer(sListNode_finalize,result_333, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            return __result188__;
                                            if(result_333 && !__freed_obj__) { come_call_finalizer(sListNode_finalize,result_333, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* parse_tuple(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value492;
void* right_value493;
struct list$1sNodeph* tuple_elements_334;
_Bool _while_condtional34;
char* p_335;
_Bool no_comma_336;
void* right_value494;
struct sNode* node_337;
_Bool _if_conditional353;
_Bool _if_conditional354;
void* right_value495;
void* right_value496;
struct sNode* _inf_value13;
struct sTupleNode* _inf_obj_value13;
void* right_value500;
struct sNode* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value492, 0, sizeof(void*));
memset(&right_value493, 0, sizeof(void*));
memset(&tuple_elements_334, 0, sizeof(struct list$1sNodeph*));
memset(&p_335, 0, sizeof(char*));
memset(&no_comma_336, 0, sizeof(_Bool));
memset(&right_value494, 0, sizeof(void*));
memset(&node_337, 0, sizeof(struct sNode*));
memset(&right_value495, 0, sizeof(void*));
memset(&right_value496, 0, sizeof(void*));
memset(&right_value500, 0, sizeof(void*));
    tuple_elements_334=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value493=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value492=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2329))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value492);
    if(right_value492 && right_value492 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value492, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value492;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value493);
    if(right_value493 && right_value493 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value493, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value493;
    __freed_obj__ = 0;
    while(_while_condtional34=(_Bool)1,    _while_condtional34) {
        p_335=info->p;
        no_comma_336=info->no_comma;
        info->no_comma=(_Bool)1;
        node_337=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value494=expression_v13(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value494);
        if(right_value494 && right_value494 != __result_obj__ && !__freed_obj__) { right_value494 = come_decrement_ref_count(right_value494, ((struct sNode*)right_value494)->finalize, ((struct sNode*)right_value494)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[0] = right_value494;
        __freed_obj__ = 0;
        info->no_comma=no_comma_336;
        list$1sNodeph_push_back(tuple_elements_334,(struct sNode*)come_increment_ref_count(node_337));
        if(_if_conditional353=*info->p==44,        _if_conditional353) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            if(_if_conditional354=*info->p==41,            _if_conditional354) {
                info->p++;
                skip_spaces_and_lf(info);
                if(node_337 && !__freed_obj__) { node_337 = come_decrement_ref_count(node_337, ((struct sNode*)node_337)->finalize, ((struct sNode*)node_337)->_protocol_obj, 0, 0, 0); } 
                break;
            }
            else {
                err_msg(info,"invalid character(%c) in tuple expression",*info->p);
                exit(2);
            }
        }
        if(node_337 && !__freed_obj__) { node_337 = come_decrement_ref_count(node_337, ((struct sNode*)node_337)->finalize, ((struct sNode*)node_337)->_protocol_obj, 0, 0, 0); } 
    }
    _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2357);
    _inf_obj_value13=come_increment_ref_count(((struct sTupleNode*)(right_value496=sTupleNode_initialize((struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(right_value495=(struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "06str.c", 2357)))),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_334),info))));
    _inf_value13->_protocol_obj=_inf_obj_value13;
    _inf_value13->finalize=(void*)sTupleNode_finalize;
    _inf_value13->clone=(void*)sTupleNode_clone;
    _inf_value13->compile=(void*)sTupleNode_compile;
    _inf_value13->sline=(void*)sTupleNode_sline;
    _inf_value13->sname=(void*)sTupleNode_sname;
    _inf_value13->terminated=(void*)sTupleNode_terminated;
    _inf_value13->kind=(void*)sTupleNode_kind;
    __result193__ = __result_obj__ = ((struct sNode*)(right_value500=_inf_value13));
    if(tuple_elements_334 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,tuple_elements_334, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value495);
    if(right_value495 && right_value495 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,right_value495, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value495;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value496);
    if(right_value496 && right_value496 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,right_value496, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value496;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value500);
    if(right_value500 && right_value500 != __result_obj__ && !__freed_obj__) { right_value500 = come_decrement_ref_count(right_value500, ((struct sNode*)right_value500)->finalize, ((struct sNode*)right_value500)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[4] = right_value500;
    __freed_obj__ = 0;
    return __result193__;
    if(tuple_elements_334 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,tuple_elements_334, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sTupleNode_finalize(struct sTupleNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional355;
_Bool _if_conditional356;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional355=self!=((void*)0)&&self->tuple_elements!=((void*)0),        _if_conditional355) {
            if(self->tuple_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->tuple_elements, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional356=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional356) {
            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
        }
}

static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional357;
struct sTupleNode* __result191__;
void* right_value497;
struct sTupleNode* result_338;
_Bool _if_conditional358;
void* right_value498;
struct list$1sNodeph* __dec_obj154;
_Bool _if_conditional359;
_Bool _if_conditional360;
void* right_value499;
char* __dec_obj155;
struct sTupleNode* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value497, 0, sizeof(void*));
memset(&result_338, 0, sizeof(struct sTupleNode*));
memset(&right_value498, 0, sizeof(void*));
memset(&right_value499, 0, sizeof(void*));
        if(_if_conditional357=self==(void*)0,        _if_conditional357) {
            __result191__ = __result_obj__ = (void*)0;
            return __result191__;
        }
        result_338=(struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(right_value497=(struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "sTupleNode_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value497);
        if(right_value497 && right_value497 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,right_value497, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value497;
        __freed_obj__ = 0;
        if(_if_conditional358=self!=((void*)0)&&self->tuple_elements!=((void*)0),        _if_conditional358) {
            __dec_obj154=result_338->tuple_elements;
            result_338->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value498=list$1sNodephp_clone(self->tuple_elements))));
            if(__dec_obj154) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj154, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value498);
            if(right_value498 && right_value498 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value498, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value498;
            __freed_obj__ = 0;
        }
        if(_if_conditional359=self!=((void*)0),        _if_conditional359) {
            result_338->sline=self->sline;
        }
        if(_if_conditional360=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional360) {
            __dec_obj155=result_338->sname;
            result_338->sname=(char*)come_increment_ref_count(((char*)(right_value499=string_clone(self->sname))));
            if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value499);
            if(right_value499 && right_value499 != __result_obj__ && !__freed_obj__) { right_value499 = come_decrement_ref_count(right_value499, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value499;
            __freed_obj__ = 0;
        }
        __result192__ = __result_obj__ = result_338;
        if(result_338 && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,result_338, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result192__;
        if(result_338 && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,result_338, (void*)0, (void*)0, 0, 0, 0, 0); }
}

